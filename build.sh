#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/dark/arma/server/AltisLifeItalia
else
    WORKDIR=$1
fi

# Pulling the last updates from git
cd $WORKDIR/
git restore .
git pull origin master
LOAD_CRED_VENV=true $WORKDIR/load_credentials.sh

# Generate a key for signing pbos
SIGN_DIR=signKey
SIGN_KEY_NAME=lifeKey
mkdir -p $WORKDIR/$SIGN_DIR
cd $WORKDIR/$SIGN_DIR/
armake keygen $SIGN_KEY_NAME

# Building PBO for @life_server
cd $WORKDIR/\@life_server/addons/
rm -rf life_server.pbo
armake build -p life_server life_server.pbo

# Building PBO for @life_hc
cd $WORKDIR/\@life_hc/addons/
rm -rf life_hc.pbo
rm life_hc.pbo.$SIGN_KEY_NAME.bisign
armake build -p life_hc life_hc.pbo
armake sign $WORKDIR/$SIGN_DIR/$SIGN_KEY_NAME.biprivatekey life_hc.pbo

# Building PBO for life.altis
cd $WORKDIR/mpmissions/
rm -rf life.altis.pbo
armake build -p life.altis life.altis.pbo
