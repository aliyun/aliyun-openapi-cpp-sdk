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

set(smc_public_header 
	include/alibabacloud/smc/SmcClient.h
	include/alibabacloud/smc/SmcExport.h )

set(smc_public_header_model 
	include/alibabacloud/smc/model/CreateReplicationJobRequest.h
	include/alibabacloud/smc/model/CreateReplicationJobResult.h
	include/alibabacloud/smc/model/CutOverReplicationJobRequest.h
	include/alibabacloud/smc/model/CutOverReplicationJobResult.h
	include/alibabacloud/smc/model/DeleteReplicationJobRequest.h
	include/alibabacloud/smc/model/DeleteReplicationJobResult.h
	include/alibabacloud/smc/model/DeleteSourceServerRequest.h
	include/alibabacloud/smc/model/DeleteSourceServerResult.h
	include/alibabacloud/smc/model/DescribeReplicationJobsRequest.h
	include/alibabacloud/smc/model/DescribeReplicationJobsResult.h
	include/alibabacloud/smc/model/DescribeSourceServersRequest.h
	include/alibabacloud/smc/model/DescribeSourceServersResult.h
	include/alibabacloud/smc/model/ListTagResourcesRequest.h
	include/alibabacloud/smc/model/ListTagResourcesResult.h
	include/alibabacloud/smc/model/ModifyReplicationJobAttributeRequest.h
	include/alibabacloud/smc/model/ModifyReplicationJobAttributeResult.h
	include/alibabacloud/smc/model/ModifySourceServerAttributeRequest.h
	include/alibabacloud/smc/model/ModifySourceServerAttributeResult.h
	include/alibabacloud/smc/model/StartReplicationJobRequest.h
	include/alibabacloud/smc/model/StartReplicationJobResult.h
	include/alibabacloud/smc/model/StopReplicationJobRequest.h
	include/alibabacloud/smc/model/StopReplicationJobResult.h
	include/alibabacloud/smc/model/TagResourcesRequest.h
	include/alibabacloud/smc/model/TagResourcesResult.h
	include/alibabacloud/smc/model/UntagResourcesRequest.h
	include/alibabacloud/smc/model/UntagResourcesResult.h )

set(smc_src 
	src/SmcClient.cc
	src/model/CreateReplicationJobRequest.cc
	src/model/CreateReplicationJobResult.cc
	src/model/CutOverReplicationJobRequest.cc
	src/model/CutOverReplicationJobResult.cc
	src/model/DeleteReplicationJobRequest.cc
	src/model/DeleteReplicationJobResult.cc
	src/model/DeleteSourceServerRequest.cc
	src/model/DeleteSourceServerResult.cc
	src/model/DescribeReplicationJobsRequest.cc
	src/model/DescribeReplicationJobsResult.cc
	src/model/DescribeSourceServersRequest.cc
	src/model/DescribeSourceServersResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyReplicationJobAttributeRequest.cc
	src/model/ModifyReplicationJobAttributeResult.cc
	src/model/ModifySourceServerAttributeRequest.cc
	src/model/ModifySourceServerAttributeResult.cc
	src/model/StartReplicationJobRequest.cc
	src/model/StartReplicationJobResult.cc
	src/model/StopReplicationJobRequest.cc
	src/model/StopReplicationJobResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(smc ${LIB_TYPE}
	${smc_public_header}
	${smc_public_header_model}
	${smc_src})

set_target_properties(smc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}smc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(smc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SMC_LIBRARY)
endif()

target_include_directories(smc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(smc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(smc
		jsoncpp)
	target_include_directories(smc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(smc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(smc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(smc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(smc
		jsoncpp)
endif()

install(FILES ${smc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/smc)
install(FILES ${smc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/smc/model)
install(TARGETS smc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)