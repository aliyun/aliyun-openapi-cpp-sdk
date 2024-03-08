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

set(amqp-open_public_header 
	include/alibabacloud/amqp-open/Amqp_openClient.h
	include/alibabacloud/amqp-open/Amqp_openExport.h )

set(amqp-open_public_header_model 
	include/alibabacloud/amqp-open/model/CreateAccountRequest.h
	include/alibabacloud/amqp-open/model/CreateAccountResult.h
	include/alibabacloud/amqp-open/model/CreateBindingRequest.h
	include/alibabacloud/amqp-open/model/CreateBindingResult.h
	include/alibabacloud/amqp-open/model/CreateExchangeRequest.h
	include/alibabacloud/amqp-open/model/CreateExchangeResult.h
	include/alibabacloud/amqp-open/model/CreateInstanceRequest.h
	include/alibabacloud/amqp-open/model/CreateInstanceResult.h
	include/alibabacloud/amqp-open/model/CreateQueueRequest.h
	include/alibabacloud/amqp-open/model/CreateQueueResult.h
	include/alibabacloud/amqp-open/model/CreateVirtualHostRequest.h
	include/alibabacloud/amqp-open/model/CreateVirtualHostResult.h
	include/alibabacloud/amqp-open/model/DeleteAccountRequest.h
	include/alibabacloud/amqp-open/model/DeleteAccountResult.h
	include/alibabacloud/amqp-open/model/DeleteBindingRequest.h
	include/alibabacloud/amqp-open/model/DeleteBindingResult.h
	include/alibabacloud/amqp-open/model/DeleteExchangeRequest.h
	include/alibabacloud/amqp-open/model/DeleteExchangeResult.h
	include/alibabacloud/amqp-open/model/DeleteQueueRequest.h
	include/alibabacloud/amqp-open/model/DeleteQueueResult.h
	include/alibabacloud/amqp-open/model/DeleteVirtualHostRequest.h
	include/alibabacloud/amqp-open/model/DeleteVirtualHostResult.h
	include/alibabacloud/amqp-open/model/GetMetadataAmountRequest.h
	include/alibabacloud/amqp-open/model/GetMetadataAmountResult.h
	include/alibabacloud/amqp-open/model/ListAccountsRequest.h
	include/alibabacloud/amqp-open/model/ListAccountsResult.h
	include/alibabacloud/amqp-open/model/ListBindingsRequest.h
	include/alibabacloud/amqp-open/model/ListBindingsResult.h
	include/alibabacloud/amqp-open/model/ListDownStreamBindingsRequest.h
	include/alibabacloud/amqp-open/model/ListDownStreamBindingsResult.h
	include/alibabacloud/amqp-open/model/ListExchangeUpStreamBindingsRequest.h
	include/alibabacloud/amqp-open/model/ListExchangeUpStreamBindingsResult.h
	include/alibabacloud/amqp-open/model/ListExchangesRequest.h
	include/alibabacloud/amqp-open/model/ListExchangesResult.h
	include/alibabacloud/amqp-open/model/ListInstancesRequest.h
	include/alibabacloud/amqp-open/model/ListInstancesResult.h
	include/alibabacloud/amqp-open/model/ListQueueConsumersRequest.h
	include/alibabacloud/amqp-open/model/ListQueueConsumersResult.h
	include/alibabacloud/amqp-open/model/ListQueueUpStreamBindingsRequest.h
	include/alibabacloud/amqp-open/model/ListQueueUpStreamBindingsResult.h
	include/alibabacloud/amqp-open/model/ListQueuesRequest.h
	include/alibabacloud/amqp-open/model/ListQueuesResult.h
	include/alibabacloud/amqp-open/model/ListVirtualHostsRequest.h
	include/alibabacloud/amqp-open/model/ListVirtualHostsResult.h
	include/alibabacloud/amqp-open/model/UpdateInstanceRequest.h
	include/alibabacloud/amqp-open/model/UpdateInstanceResult.h
	include/alibabacloud/amqp-open/model/UpdateInstanceNameRequest.h
	include/alibabacloud/amqp-open/model/UpdateInstanceNameResult.h )

set(amqp-open_src 
	src/Amqp-openClient.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateBindingRequest.cc
	src/model/CreateBindingResult.cc
	src/model/CreateExchangeRequest.cc
	src/model/CreateExchangeResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateQueueRequest.cc
	src/model/CreateQueueResult.cc
	src/model/CreateVirtualHostRequest.cc
	src/model/CreateVirtualHostResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteBindingRequest.cc
	src/model/DeleteBindingResult.cc
	src/model/DeleteExchangeRequest.cc
	src/model/DeleteExchangeResult.cc
	src/model/DeleteQueueRequest.cc
	src/model/DeleteQueueResult.cc
	src/model/DeleteVirtualHostRequest.cc
	src/model/DeleteVirtualHostResult.cc
	src/model/GetMetadataAmountRequest.cc
	src/model/GetMetadataAmountResult.cc
	src/model/ListAccountsRequest.cc
	src/model/ListAccountsResult.cc
	src/model/ListBindingsRequest.cc
	src/model/ListBindingsResult.cc
	src/model/ListDownStreamBindingsRequest.cc
	src/model/ListDownStreamBindingsResult.cc
	src/model/ListExchangeUpStreamBindingsRequest.cc
	src/model/ListExchangeUpStreamBindingsResult.cc
	src/model/ListExchangesRequest.cc
	src/model/ListExchangesResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ListQueueConsumersRequest.cc
	src/model/ListQueueConsumersResult.cc
	src/model/ListQueueUpStreamBindingsRequest.cc
	src/model/ListQueueUpStreamBindingsResult.cc
	src/model/ListQueuesRequest.cc
	src/model/ListQueuesResult.cc
	src/model/ListVirtualHostsRequest.cc
	src/model/ListVirtualHostsResult.cc
	src/model/UpdateInstanceRequest.cc
	src/model/UpdateInstanceResult.cc
	src/model/UpdateInstanceNameRequest.cc
	src/model/UpdateInstanceNameResult.cc )

add_library(amqp-open ${LIB_TYPE}
	${amqp-open_public_header}
	${amqp-open_public_header_model}
	${amqp-open_src})

set_target_properties(amqp-open
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}amqp-open
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(amqp-open
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AMQP_OPEN_LIBRARY)
endif()

target_include_directories(amqp-open
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(amqp-open
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(amqp-open
		jsoncpp)
	target_include_directories(amqp-open
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(amqp-open
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(amqp-open
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(amqp-open
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(amqp-open
		jsoncpp)
endif()

install(FILES ${amqp-open_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/amqp-open)
install(FILES ${amqp-open_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/amqp-open/model)
install(TARGETS amqp-open
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)