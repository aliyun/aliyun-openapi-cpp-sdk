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

set(mns-open_public_header 
	include/alibabacloud/mns-open/Mns_openClient.h
	include/alibabacloud/mns-open/Mns_openExport.h )

set(mns-open_public_header_model 
	include/alibabacloud/mns-open/model/CreateQueueRequest.h
	include/alibabacloud/mns-open/model/CreateQueueResult.h
	include/alibabacloud/mns-open/model/CreateTopicRequest.h
	include/alibabacloud/mns-open/model/CreateTopicResult.h
	include/alibabacloud/mns-open/model/DeleteQueueRequest.h
	include/alibabacloud/mns-open/model/DeleteQueueResult.h
	include/alibabacloud/mns-open/model/DeleteTopicRequest.h
	include/alibabacloud/mns-open/model/DeleteTopicResult.h
	include/alibabacloud/mns-open/model/GetQueueAttributesRequest.h
	include/alibabacloud/mns-open/model/GetQueueAttributesResult.h
	include/alibabacloud/mns-open/model/GetSubscriptionAttributesRequest.h
	include/alibabacloud/mns-open/model/GetSubscriptionAttributesResult.h
	include/alibabacloud/mns-open/model/GetTopicAttributesRequest.h
	include/alibabacloud/mns-open/model/GetTopicAttributesResult.h
	include/alibabacloud/mns-open/model/ListQueueRequest.h
	include/alibabacloud/mns-open/model/ListQueueResult.h
	include/alibabacloud/mns-open/model/ListSubscriptionByTopicRequest.h
	include/alibabacloud/mns-open/model/ListSubscriptionByTopicResult.h
	include/alibabacloud/mns-open/model/ListTopicRequest.h
	include/alibabacloud/mns-open/model/ListTopicResult.h
	include/alibabacloud/mns-open/model/SetQueueAttributesRequest.h
	include/alibabacloud/mns-open/model/SetQueueAttributesResult.h
	include/alibabacloud/mns-open/model/SetSubscriptionAttributesRequest.h
	include/alibabacloud/mns-open/model/SetSubscriptionAttributesResult.h
	include/alibabacloud/mns-open/model/SetTopicAttributesRequest.h
	include/alibabacloud/mns-open/model/SetTopicAttributesResult.h
	include/alibabacloud/mns-open/model/SubscribeRequest.h
	include/alibabacloud/mns-open/model/SubscribeResult.h
	include/alibabacloud/mns-open/model/UnsubscribeRequest.h
	include/alibabacloud/mns-open/model/UnsubscribeResult.h )

set(mns-open_src 
	src/Mns-openClient.cc
	src/model/CreateQueueRequest.cc
	src/model/CreateQueueResult.cc
	src/model/CreateTopicRequest.cc
	src/model/CreateTopicResult.cc
	src/model/DeleteQueueRequest.cc
	src/model/DeleteQueueResult.cc
	src/model/DeleteTopicRequest.cc
	src/model/DeleteTopicResult.cc
	src/model/GetQueueAttributesRequest.cc
	src/model/GetQueueAttributesResult.cc
	src/model/GetSubscriptionAttributesRequest.cc
	src/model/GetSubscriptionAttributesResult.cc
	src/model/GetTopicAttributesRequest.cc
	src/model/GetTopicAttributesResult.cc
	src/model/ListQueueRequest.cc
	src/model/ListQueueResult.cc
	src/model/ListSubscriptionByTopicRequest.cc
	src/model/ListSubscriptionByTopicResult.cc
	src/model/ListTopicRequest.cc
	src/model/ListTopicResult.cc
	src/model/SetQueueAttributesRequest.cc
	src/model/SetQueueAttributesResult.cc
	src/model/SetSubscriptionAttributesRequest.cc
	src/model/SetSubscriptionAttributesResult.cc
	src/model/SetTopicAttributesRequest.cc
	src/model/SetTopicAttributesResult.cc
	src/model/SubscribeRequest.cc
	src/model/SubscribeResult.cc
	src/model/UnsubscribeRequest.cc
	src/model/UnsubscribeResult.cc )

add_library(mns-open ${LIB_TYPE}
	${mns-open_public_header}
	${mns-open_public_header_model}
	${mns-open_src})

set_target_properties(mns-open
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mns-open
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(mns-open
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MNS_OPEN_LIBRARY)
endif()

target_include_directories(mns-open
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(mns-open
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(mns-open
		jsoncpp)
	target_include_directories(mns-open
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(mns-open
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(mns-open
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(mns-open
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(mns-open
		jsoncpp)
endif()

install(FILES ${mns-open_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mns-open)
install(FILES ${mns-open_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mns-open/model)
install(TARGETS mns-open
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)