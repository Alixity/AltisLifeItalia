#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/dark/arma/server/AltisLifeItalia
else
    WORKDIR=$1
fi

cd $WORKDIR
./arma3server -port=2302 "-config=config.cfg" \
    "-cfg=basic.cfg" \
    "-bepath=${WORKDIR}/battleye" \
    "-profiles=${WORKDIR}/profiles" \
    "-name=lifearma" -filePatching -autoInit \
    "-serverMod=@life_server;@extdb3"
