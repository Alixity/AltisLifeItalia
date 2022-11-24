#!/bin/bash
source /home/dark/.bashrc
source /home/dark/.profile

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

START_ARMAHC=false
UPDATE_AND_BUILD=true

cd $WORKDIR
DATA_TXT="$(date "+%y%m%d")_$(date "+%H%M%S")"
mkdir -p $WORKDIR/logs

if $UPDATE_AND_BUILD; then
    printf "${INFO_C}> Updating and Building the project${RESETC}\n"
    $WORKDIR/build.sh;
fi

tmux kill-session -t arma
printf "${INFO_C}> Server Started${RESETC}\n"
tmux new -d -s arma "$WORKDIR/start.sh 2> $WORKDIR/logs/serverErrors_$DATA_TXT.rpt 1> $WORKDIR/logs/serverLogs_$DATA_TXT.rpt;"

if $START_ARMAHC; then
    tmux kill-session -t armaHC
    sleep 10
    printf "${INFO_C}> HeadlessClient Started${RESETC}\n"
    tmux new -d -s armaHC "$WORKDIR/startHC.sh 2> $WORKDIR/logs/hcErrors_$DATA_TXT.rpt 1> $WORKDIR/logs/hcLogs_$DATA_TXT.rpt;"
fi
