#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(hitsdb_public_header 
	include/alibabacloud/hitsdb/HitsdbClient.h
	include/alibabacloud/hitsdb/HitsdbExport.h )

set(hitsdb_public_header_model 
	include/alibabacloud/hitsdb/model/DescribeRegionsRequest.h
	include/alibabacloud/hitsdb/model/DescribeRegionsResult.h
	include/alibabacloud/hitsdb/model/GetLindormInstanceRequest.h
	include/alibabacloud/hitsdb/model/GetLindormInstanceResult.h
	include/alibabacloud/hitsdb/model/GetLindormInstanceListRequest.h
	include/alibabacloud/hitsdb/model/GetLindormInstanceListResult.h )

set(hitsdb_src 
	src/HitsdbClient.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/GetLindormInstanceRequest.cc
	src/model/GetLindormInstanceResult.cc
	src/model/GetLindormInstanceListRequest.cc
	src/model/GetLindormInstanceListResult.cc )

add_library(hitsdb ${LIB_TYPE}
	${hitsdb_public_header}
	${hitsdb_public_header_model}
	${hitsdb_src})

set_target_properties(hitsdb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hitsdb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(hitsdb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_HITSDB_LIBRARY)
endif()

target_include_directories(hitsdb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(hitsdb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(hitsdb
		jsoncpp)
	target_include_directories(hitsdb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(hitsdb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(hitsdb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(hitsdb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(hitsdb
		jsoncpp)
endif()

install(FILES ${hitsdb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hitsdb)
install(FILES ${hitsdb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hitsdb/model)
install(TARGETS hitsdb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)