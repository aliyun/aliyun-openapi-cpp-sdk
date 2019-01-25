#!/bin/bash

cd `dirname $0`
echo '-------build unit test----------'

UT_BUILD_DIR=ut_build
rm -rf $UT_BUILD_DIR
mkdir $UT_BUILD_DIR
cd $UT_BUILD_DIR
cmake -DBUILD_FUNCTION_TESTS=OFF -DBUILD_UNIT_TESTS=ON ..
make core_ut
make httpserver_for_ut

echo '------- run unit test -----------'

ctest --verbose

