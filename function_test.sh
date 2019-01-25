#!/bin/bash

cd `dirname $0`
echo '-------build function test----------'

FT_BUILD_DIR=ft_build
rm -rf $FT_BUILD_DIR
mkdir $FT_BUILD_DIR
cd $FT_BUILD_DIR
cmake -DBUILD_FUNCTION_TESTS=ON -DBUILD_UNIT_TESTS=OFF ..
make cdn core ecs rds slb vpc cdn_ft core_ft ecs_ft rds_ft slb_ft vpc_ft

echo '------- run function test -----------'

ctest --verbose
