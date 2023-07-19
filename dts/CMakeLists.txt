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
	include/alibabacloud/dts/model/ConfigureSynchronizationJobRequest.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobResult.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobAlertRequest.h
	include/alibabacloud/dts/model/ConfigureSynchronizationJobAlertResult.h
	include/alibabacloud/dts/model/CreateSynchronizationJobRequest.h
	include/alibabacloud/dts/model/CreateSynchronizationJobResult.h
	include/alibabacloud/dts/model/DeleteSynchronizationJobRequest.h
	include/alibabacloud/dts/model/DeleteSynchronizationJobResult.h
	include/alibabacloud/dts/model/DescribeEndpointSwitchStatusRequest.h
	include/alibabacloud/dts/model/DescribeEndpointSwitchStatusResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobAlertRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobAlertResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobStatusRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobStatusResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobsRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationJobsResult.h
	include/alibabacloud/dts/model/DescribeSynchronizationObjectModifyStatusRequest.h
	include/alibabacloud/dts/model/DescribeSynchronizationObjectModifyStatusResult.h
	include/alibabacloud/dts/model/ModifySynchronizationObjectRequest.h
	include/alibabacloud/dts/model/ModifySynchronizationObjectResult.h
	include/alibabacloud/dts/model/ResetSynchronizationJobRequest.h
	include/alibabacloud/dts/model/ResetSynchronizationJobResult.h
	include/alibabacloud/dts/model/StartSynchronizationJobRequest.h
	include/alibabacloud/dts/model/StartSynchronizationJobResult.h
	include/alibabacloud/dts/model/SuspendSynchronizationJobRequest.h
	include/alibabacloud/dts/model/SuspendSynchronizationJobResult.h
	include/alibabacloud/dts/model/SwitchSynchronizationEndpointRequest.h
	include/alibabacloud/dts/model/SwitchSynchronizationEndpointResult.h )

set(dts_src 
	src/DtsClient.cc
	src/model/ConfigureSynchronizationJobRequest.cc
	src/model/ConfigureSynchronizationJobResult.cc
	src/model/ConfigureSynchronizationJobAlertRequest.cc
	src/model/ConfigureSynchronizationJobAlertResult.cc
	src/model/CreateSynchronizationJobRequest.cc
	src/model/CreateSynchronizationJobResult.cc
	src/model/DeleteSynchronizationJobRequest.cc
	src/model/DeleteSynchronizationJobResult.cc
	src/model/DescribeEndpointSwitchStatusRequest.cc
	src/model/DescribeEndpointSwitchStatusResult.cc
	src/model/DescribeSynchronizationJobAlertRequest.cc
	src/model/DescribeSynchronizationJobAlertResult.cc
	src/model/DescribeSynchronizationJobStatusRequest.cc
	src/model/DescribeSynchronizationJobStatusResult.cc
	src/model/DescribeSynchronizationJobsRequest.cc
	src/model/DescribeSynchronizationJobsResult.cc
	src/model/DescribeSynchronizationObjectModifyStatusRequest.cc
	src/model/DescribeSynchronizationObjectModifyStatusResult.cc
	src/model/ModifySynchronizationObjectRequest.cc
	src/model/ModifySynchronizationObjectResult.cc
	src/model/ResetSynchronizationJobRequest.cc
	src/model/ResetSynchronizationJobResult.cc
	src/model/StartSynchronizationJobRequest.cc
	src/model/StartSynchronizationJobResult.cc
	src/model/SuspendSynchronizationJobRequest.cc
	src/model/SuspendSynchronizationJobResult.cc
	src/model/SwitchSynchronizationEndpointRequest.cc
	src/model/SwitchSynchronizationEndpointResult.cc )

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