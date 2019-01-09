#!/bin/bash

action=$1

if [ $action == "init" ]; then
  echo 'init coverage'

  lcov -d sdk_build -z
  lcov -d sdk_build -b . --no-external --initial -c -o initCoverage.info
fi

echo 'run test'
cd sdk_build
ctest
cd ..

echo 'create info after test'
lcov -d sdk_build -b . --no-external -c -o testCoverage.info

echo 'generate html'
genhtml -o coverageReport --prefix=`pwd` initCoverage.info testCoverage.info

echo 'check report ' `pwd`/coverageReport/index.html

