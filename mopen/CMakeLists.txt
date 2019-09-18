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

set(mopen_public_header 
	include/alibabacloud/mopen/MoPenClient.h
	include/alibabacloud/mopen/MoPenExport.h )

set(mopen_public_header_model 
	include/alibabacloud/mopen/model/MoPenAddGroupMemberRequest.h
	include/alibabacloud/mopen/model/MoPenAddGroupMemberResult.h
	include/alibabacloud/mopen/model/MoPenBindIsvRequest.h
	include/alibabacloud/mopen/model/MoPenBindIsvResult.h
	include/alibabacloud/mopen/model/MoPenCreateDeviceRequest.h
	include/alibabacloud/mopen/model/MoPenCreateDeviceResult.h
	include/alibabacloud/mopen/model/MoPenDeleteGroupRequest.h
	include/alibabacloud/mopen/model/MoPenDeleteGroupResult.h
	include/alibabacloud/mopen/model/MoPenDeleteGroupMemberRequest.h
	include/alibabacloud/mopen/model/MoPenDeleteGroupMemberResult.h
	include/alibabacloud/mopen/model/MoPenDoRecognizeRequest.h
	include/alibabacloud/mopen/model/MoPenDoRecognizeResult.h
	include/alibabacloud/mopen/model/MoPenFindGroupRequest.h
	include/alibabacloud/mopen/model/MoPenFindGroupResult.h
	include/alibabacloud/mopen/model/MoPenQueryCanvasRequest.h
	include/alibabacloud/mopen/model/MoPenQueryCanvasResult.h
	include/alibabacloud/mopen/model/MoPenSendMqttMessageRequest.h
	include/alibabacloud/mopen/model/MoPenSendMqttMessageResult.h
	include/alibabacloud/mopen/model/MopenCreateGroupRequest.h
	include/alibabacloud/mopen/model/MopenCreateGroupResult.h )

set(mopen_src 
	src/MoPenClient.cc
	src/model/MoPenAddGroupMemberRequest.cc
	src/model/MoPenAddGroupMemberResult.cc
	src/model/MoPenBindIsvRequest.cc
	src/model/MoPenBindIsvResult.cc
	src/model/MoPenCreateDeviceRequest.cc
	src/model/MoPenCreateDeviceResult.cc
	src/model/MoPenDeleteGroupRequest.cc
	src/model/MoPenDeleteGroupResult.cc
	src/model/MoPenDeleteGroupMemberRequest.cc
	src/model/MoPenDeleteGroupMemberResult.cc
	src/model/MoPenDoRecognizeRequest.cc
	src/model/MoPenDoRecognizeResult.cc
	src/model/MoPenFindGroupRequest.cc
	src/model/MoPenFindGroupResult.cc
	src/model/MoPenQueryCanvasRequest.cc
	src/model/MoPenQueryCanvasResult.cc
	src/model/MoPenSendMqttMessageRequest.cc
	src/model/MoPenSendMqttMessageResult.cc
	src/model/MopenCreateGroupRequest.cc
	src/model/MopenCreateGroupResult.cc )

add_library(mopen ${LIB_TYPE}
	${mopen_public_header}
	${mopen_public_header_model}
	${mopen_src})

set_target_properties(mopen
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mopen
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(mopen
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MOPEN_LIBRARY)
endif()

target_include_directories(mopen
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(mopen
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(mopen
		jsoncpp)
	target_include_directories(mopen
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(mopen
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(mopen
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(mopen
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(mopen
		jsoncpp)
endif()

install(FILES ${mopen_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mopen)
install(FILES ${mopen_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mopen/model)
install(TARGETS mopen
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)