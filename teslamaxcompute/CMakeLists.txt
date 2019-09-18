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

set(teslamaxcompute_public_header 
	include/alibabacloud/teslamaxcompute/TeslaMaxComputeClient.h
	include/alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h )

set(teslamaxcompute_public_header_model 
	include/alibabacloud/teslamaxcompute/model/GetClusterInstanceRequest.h
	include/alibabacloud/teslamaxcompute/model/GetClusterInstanceResult.h
	include/alibabacloud/teslamaxcompute/model/GetInstancesStatusCountRequest.h
	include/alibabacloud/teslamaxcompute/model/GetInstancesStatusCountResult.h
	include/alibabacloud/teslamaxcompute/model/GetProjectInstanceRequest.h
	include/alibabacloud/teslamaxcompute/model/GetProjectInstanceResult.h
	include/alibabacloud/teslamaxcompute/model/GetQuotaHistoryInfoRequest.h
	include/alibabacloud/teslamaxcompute/model/GetQuotaHistoryInfoResult.h
	include/alibabacloud/teslamaxcompute/model/GetQuotaInstanceRequest.h
	include/alibabacloud/teslamaxcompute/model/GetQuotaInstanceResult.h
	include/alibabacloud/teslamaxcompute/model/GetUserInstanceRequest.h
	include/alibabacloud/teslamaxcompute/model/GetUserInstanceResult.h
	include/alibabacloud/teslamaxcompute/model/ListUserQuotasRequest.h
	include/alibabacloud/teslamaxcompute/model/ListUserQuotasResult.h
	include/alibabacloud/teslamaxcompute/model/QueryCustomerSaleInfoRequest.h
	include/alibabacloud/teslamaxcompute/model/QueryCustomerSaleInfoResult.h
	include/alibabacloud/teslamaxcompute/model/QueryResourceInventoryRequest.h
	include/alibabacloud/teslamaxcompute/model/QueryResourceInventoryResult.h
	include/alibabacloud/teslamaxcompute/model/QueryTopologyRequest.h
	include/alibabacloud/teslamaxcompute/model/QueryTopologyResult.h )

set(teslamaxcompute_src 
	src/TeslaMaxComputeClient.cc
	src/model/GetClusterInstanceRequest.cc
	src/model/GetClusterInstanceResult.cc
	src/model/GetInstancesStatusCountRequest.cc
	src/model/GetInstancesStatusCountResult.cc
	src/model/GetProjectInstanceRequest.cc
	src/model/GetProjectInstanceResult.cc
	src/model/GetQuotaHistoryInfoRequest.cc
	src/model/GetQuotaHistoryInfoResult.cc
	src/model/GetQuotaInstanceRequest.cc
	src/model/GetQuotaInstanceResult.cc
	src/model/GetUserInstanceRequest.cc
	src/model/GetUserInstanceResult.cc
	src/model/ListUserQuotasRequest.cc
	src/model/ListUserQuotasResult.cc
	src/model/QueryCustomerSaleInfoRequest.cc
	src/model/QueryCustomerSaleInfoResult.cc
	src/model/QueryResourceInventoryRequest.cc
	src/model/QueryResourceInventoryResult.cc
	src/model/QueryTopologyRequest.cc
	src/model/QueryTopologyResult.cc )

add_library(teslamaxcompute ${LIB_TYPE}
	${teslamaxcompute_public_header}
	${teslamaxcompute_public_header_model}
	${teslamaxcompute_src})

set_target_properties(teslamaxcompute
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}teslamaxcompute
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(teslamaxcompute
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_TESLAMAXCOMPUTE_LIBRARY)
endif()

target_include_directories(teslamaxcompute
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(teslamaxcompute
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(teslamaxcompute
		jsoncpp)
	target_include_directories(teslamaxcompute
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(teslamaxcompute
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(teslamaxcompute
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(teslamaxcompute
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(teslamaxcompute
		jsoncpp)
endif()

install(FILES ${teslamaxcompute_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/teslamaxcompute)
install(FILES ${teslamaxcompute_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/teslamaxcompute/model)
install(TARGETS teslamaxcompute
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)