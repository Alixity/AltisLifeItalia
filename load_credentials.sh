#!/bin/bash

MINOR_C="\033[30;1m"
ERROR_C="\033[31;1m"
SUCCESS_C="\033[32;1m"
WARN_C="\033[33;1m"
INFO_C="\033[36;1m"
DEFAULT_C="\033[37;1m"
RESETC="\033[m"

if [ $# -eq 0 ]
then
    WORKDIR=/home/alixity/server
else
    WORKDIR=$1
fi

SAVE_CRED=false
LOAD_CRED=true
CRED_DIR=credentials.secret
mkdir -p $CRED_DIR

if $SAVE_CRED; then
    printf "${INFO_C}> Saving files with credentials${RESETC}\n"
    cp $WORKDIR/.gitignore $WORKDIR/$CRED_DIR/
    cp $WORKDIR/config.cfg $WORKDIR/$CRED_DIR/
    cp $WORKDIR/@extdb3/extdb3-conf.ini $WORKDIR/$CRED_DIR/
    cp $WORKDIR/battleye/beserver_x64.cfg $WORKDIR/$CRED_DIR/
    cp $WORKDIR/battleye/beserver.cfg $WORKDIR/$CRED_DIR/
fi

if $LOAD_CRED || ([[ -v LOAD_CRED_VENV ]] && $LOAD_CRED_VENV); then
    printf "${INFO_C}> Loading files with credentials${RESETC}\n"
    cp $WORKDIR/$CRED_DIR/.gitignore $WORKDIR/.gitignore
    cp $WORKDIR/$CRED_DIR/config.cfg $WORKDIR/config.cfg
    cp $WORKDIR/$CRED_DIR/extdb3-conf.ini $WORKDIR/@extdb3/extdb3-conf.ini
    cp $WORKDIR/$CRED_DIR/beserver_x64.cfg $WORKDIR/battleye/beserver_x64.cfg
    cp $WORKDIR/$CRED_DIR/beserver.cfg $WORKDIR/battleye/beserver.cfg
fi
