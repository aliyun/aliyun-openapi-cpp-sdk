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

set(onsmqtt_public_header 
	include/alibabacloud/onsmqtt/OnsMqttClient.h
	include/alibabacloud/onsmqtt/OnsMqttExport.h )

set(onsmqtt_public_header_model 
	include/alibabacloud/onsmqtt/model/ApplyTokenRequest.h
	include/alibabacloud/onsmqtt/model/ApplyTokenResult.h
	include/alibabacloud/onsmqtt/model/BatchQuerySessionByClientIdsRequest.h
	include/alibabacloud/onsmqtt/model/BatchQuerySessionByClientIdsResult.h
	include/alibabacloud/onsmqtt/model/CreateGroupIdRequest.h
	include/alibabacloud/onsmqtt/model/CreateGroupIdResult.h
	include/alibabacloud/onsmqtt/model/DeleteGroupIdRequest.h
	include/alibabacloud/onsmqtt/model/DeleteGroupIdResult.h
	include/alibabacloud/onsmqtt/model/ListGroupIdRequest.h
	include/alibabacloud/onsmqtt/model/ListGroupIdResult.h
	include/alibabacloud/onsmqtt/model/QuerySessionByClientIdRequest.h
	include/alibabacloud/onsmqtt/model/QuerySessionByClientIdResult.h
	include/alibabacloud/onsmqtt/model/QueryTokenRequest.h
	include/alibabacloud/onsmqtt/model/QueryTokenResult.h
	include/alibabacloud/onsmqtt/model/RevokeTokenRequest.h
	include/alibabacloud/onsmqtt/model/RevokeTokenResult.h
	include/alibabacloud/onsmqtt/model/SendMessageRequest.h
	include/alibabacloud/onsmqtt/model/SendMessageResult.h )

set(onsmqtt_src 
	src/OnsMqttClient.cc
	src/model/ApplyTokenRequest.cc
	src/model/ApplyTokenResult.cc
	src/model/BatchQuerySessionByClientIdsRequest.cc
	src/model/BatchQuerySessionByClientIdsResult.cc
	src/model/CreateGroupIdRequest.cc
	src/model/CreateGroupIdResult.cc
	src/model/DeleteGroupIdRequest.cc
	src/model/DeleteGroupIdResult.cc
	src/model/ListGroupIdRequest.cc
	src/model/ListGroupIdResult.cc
	src/model/QuerySessionByClientIdRequest.cc
	src/model/QuerySessionByClientIdResult.cc
	src/model/QueryTokenRequest.cc
	src/model/QueryTokenResult.cc
	src/model/RevokeTokenRequest.cc
	src/model/RevokeTokenResult.cc
	src/model/SendMessageRequest.cc
	src/model/SendMessageResult.cc )

add_library(onsmqtt ${LIB_TYPE}
	${onsmqtt_public_header}
	${onsmqtt_public_header_model}
	${onsmqtt_src})

set_target_properties(onsmqtt
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}onsmqtt
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(onsmqtt
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ONSMQTT_LIBRARY)
endif()

target_include_directories(onsmqtt
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(onsmqtt
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(onsmqtt
		jsoncpp)
	target_include_directories(onsmqtt
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(onsmqtt
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(onsmqtt
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(onsmqtt
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(onsmqtt
		jsoncpp)
endif()

install(FILES ${onsmqtt_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/onsmqtt)
install(FILES ${onsmqtt_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/onsmqtt/model)
install(TARGETS onsmqtt
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)