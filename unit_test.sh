#!/bin/bash

cd `dirname $0`
echo '-------build unit test----------'

MAKE=make
if command -v python > /dev/null ; then
  MAKE="make -j $(python -c 'import multiprocessing as mp; print(int(mp.cpu_count()))')"
fi

echo $MAKE

UT_BUILD_DIR=ut_build
rm -rf $UT_BUILD_DIR
mkdir $UT_BUILD_DIR
cd $UT_BUILD_DIR
cmake -DBUILD_FUNCTION_TESTS=OFF -DBUILD_UNIT_TESTS=ON -DENABLE_COVERAGE=ON ..
$MAKE core_ut httpserver_for_ut

echo '------- run unit test -----------'

ctest --verbose
