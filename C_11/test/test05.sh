#!/bin/sh
set -x #echo on
cd ex05 || exit
make clean || exit
make || exit
./do-op
./do-op 1 + 1
./do-op 42amis - --+-20toto12
./do-op 1 p 1
./do-op 1 + toto3
./do-op toto3 + 4
./do-op foo plus bar
./do-op 25 / 0
./do-op 25 % 0
