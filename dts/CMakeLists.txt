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

set(dts_public_header 
	include/alibabacloud/dts/DtsClient.h
	include/alibabacloud/dts/DtsExport.h )

set(dts_public_header_model 
	include/alibabacloud/dts/model/ConfigureMigrationJobRequest.h
	include/alibabacloud/dts/model/ConfigureMigrationJobResult.h
	include/alibabacloud/dts/model/CreateMigrationJobRequest.h
	include/alibabacloud/dts/model/CreateMigrationJobResult.h
	include/alibabacloud/dts/model/DeleteMigrationJobRequest.h
	include/alibabacloud/dts/model/DeleteMigrationJobResult.h
	include/alibabacloud/dts/model/DescirbeMigrationJobsRequest.h
	include/alibabacloud/dts/model/DescirbeMigrationJobsResult.h
	include/alibabacloud/dts/model/DescribeMigrationJobDetailRequest.h
	include/alibabacloud/dts/model/DescribeMigrationJobDetailResult.h
	include/alibabacloud/dts/model/DescribeMigrationJobStatusRequest.h
	include/alibabacloud/dts/model/DescribeMigrationJobStatusResult.h
	include/alibabacloud/dts/model/ModifyMigrationObjectRequest.h
	include/alibabacloud/dts/model/ModifyMigrationObjectResult.h
	include/alibabacloud/dts/model/StartMigrationJobRequest.h
	include/alibabacloud/dts/model/StartMigrationJobResult.h
	include/alibabacloud/dts/model/StopMigrationJobRequest.h
	include/alibabacloud/dts/model/StopMigrationJobResult.h
	include/alibabacloud/dts/model/SuspendMigrationJobRequest.h
	include/alibabacloud/dts/model/SuspendMigrationJobResult.h )

set(dts_src 
	src/DtsClient.cc
	src/model/ConfigureMigrationJobRequest.cc
	src/model/ConfigureMigrationJobResult.cc
	src/model/CreateMigrationJobRequest.cc
	src/model/CreateMigrationJobResult.cc
	src/model/DeleteMigrationJobRequest.cc
	src/model/DeleteMigrationJobResult.cc
	src/model/DescirbeMigrationJobsRequest.cc
	src/model/DescirbeMigrationJobsResult.cc
	src/model/DescribeMigrationJobDetailRequest.cc
	src/model/DescribeMigrationJobDetailResult.cc
	src/model/DescribeMigrationJobStatusRequest.cc
	src/model/DescribeMigrationJobStatusResult.cc
	src/model/ModifyMigrationObjectRequest.cc
	src/model/ModifyMigrationObjectResult.cc
	src/model/StartMigrationJobRequest.cc
	src/model/StartMigrationJobResult.cc
	src/model/StopMigrationJobRequest.cc
	src/model/StopMigrationJobResult.cc
	src/model/SuspendMigrationJobRequest.cc
	src/model/SuspendMigrationJobResult.cc )

add_library(dts ${LIB_TYPE}
	${dts_public_header}
	${dts_public_header_model}
	${dts_src})

set_target_properties(dts
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dts
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dts
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DTS_LIBRARY)
endif()

target_include_directories(dts
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dts
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dts
		jsoncpp)
	target_include_directories(dts
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dts
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dts
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dts
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dts
		jsoncpp)
endif()

install(FILES ${dts_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dts)
install(FILES ${dts_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dts/model)
install(TARGETS dts
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)