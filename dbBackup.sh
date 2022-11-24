#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/dark/arma/server/AltisLifeItalia
else
    WORKDIR=$1
fi

cd $WORKDIR

mkdir -p databaseBackups

