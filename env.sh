#!/bin/bash

#SOFTDIR=/home/evovch/soft
SOFTDIR=/home/daria/Documents

cd ${SOFTDIR}/go4-5.3.0
. ./go4login
cd -

cd ${SOFTDIR}/root-6.14.04/builddir/bin
. ./thisroot.sh
cd -

# https://stackoverflow.com/questions/59895/getting-the-source-directory-of-a-bash-script-from-within
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"

export LD_LIBRARY_PATH=${DIR}/install/lib:$LD_LIBRARY_PATH
