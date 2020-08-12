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

set(devops-rdc_public_header 
	include/alibabacloud/devops-rdc/Devops_rdcClient.h
	include/alibabacloud/devops-rdc/Devops_rdcExport.h )

set(devops-rdc_public_header_model 
	include/alibabacloud/devops-rdc/model/CancelPipelineRequest.h
	include/alibabacloud/devops-rdc/model/CancelPipelineResult.h
	include/alibabacloud/devops-rdc/model/CreateCredentialRequest.h
	include/alibabacloud/devops-rdc/model/CreateCredentialResult.h
	include/alibabacloud/devops-rdc/model/CreatePipelineRequest.h
	include/alibabacloud/devops-rdc/model/CreatePipelineResult.h
	include/alibabacloud/devops-rdc/model/CreateServiceConnectionRequest.h
	include/alibabacloud/devops-rdc/model/CreateServiceConnectionResult.h
	include/alibabacloud/devops-rdc/model/ExecutePipelineRequest.h
	include/alibabacloud/devops-rdc/model/ExecutePipelineResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceBuildNumberStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceBuildNumberStatusResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceGroupStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceGroupStatusResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceInfoRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceInfoResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceStatusResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineLogRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineLogResult.h
	include/alibabacloud/devops-rdc/model/GetPipleineLatestInstanceStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipleineLatestInstanceStatusResult.h
	include/alibabacloud/devops-rdc/model/ListCredentialsRequest.h
	include/alibabacloud/devops-rdc/model/ListCredentialsResult.h
	include/alibabacloud/devops-rdc/model/ListPipelinesRequest.h
	include/alibabacloud/devops-rdc/model/ListPipelinesResult.h
	include/alibabacloud/devops-rdc/model/ListServiceConnectionsRequest.h
	include/alibabacloud/devops-rdc/model/ListServiceConnectionsResult.h )

set(devops-rdc_src 
	src/Devops-rdcClient.cc
	src/model/CancelPipelineRequest.cc
	src/model/CancelPipelineResult.cc
	src/model/CreateCredentialRequest.cc
	src/model/CreateCredentialResult.cc
	src/model/CreatePipelineRequest.cc
	src/model/CreatePipelineResult.cc
	src/model/CreateServiceConnectionRequest.cc
	src/model/CreateServiceConnectionResult.cc
	src/model/ExecutePipelineRequest.cc
	src/model/ExecutePipelineResult.cc
	src/model/GetPipelineInstanceBuildNumberStatusRequest.cc
	src/model/GetPipelineInstanceBuildNumberStatusResult.cc
	src/model/GetPipelineInstanceGroupStatusRequest.cc
	src/model/GetPipelineInstanceGroupStatusResult.cc
	src/model/GetPipelineInstanceInfoRequest.cc
	src/model/GetPipelineInstanceInfoResult.cc
	src/model/GetPipelineInstanceStatusRequest.cc
	src/model/GetPipelineInstanceStatusResult.cc
	src/model/GetPipelineLogRequest.cc
	src/model/GetPipelineLogResult.cc
	src/model/GetPipleineLatestInstanceStatusRequest.cc
	src/model/GetPipleineLatestInstanceStatusResult.cc
	src/model/ListCredentialsRequest.cc
	src/model/ListCredentialsResult.cc
	src/model/ListPipelinesRequest.cc
	src/model/ListPipelinesResult.cc
	src/model/ListServiceConnectionsRequest.cc
	src/model/ListServiceConnectionsResult.cc )

add_library(devops-rdc ${LIB_TYPE}
	${devops-rdc_public_header}
	${devops-rdc_public_header_model}
	${devops-rdc_src})

set_target_properties(devops-rdc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}devops-rdc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(devops-rdc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DEVOPS_RDC_LIBRARY)
endif()

target_include_directories(devops-rdc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(devops-rdc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(devops-rdc
		jsoncpp)
	target_include_directories(devops-rdc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(devops-rdc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(devops-rdc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(devops-rdc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(devops-rdc
		jsoncpp)
endif()

install(FILES ${devops-rdc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/devops-rdc)
install(FILES ${devops-rdc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/devops-rdc/model)
install(TARGETS devops-rdc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)