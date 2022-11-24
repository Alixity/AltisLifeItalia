#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/alixity/server
else
    WORKDIR=$1
fi

cd $WORKDIR

mkdir -p databaseBackups

