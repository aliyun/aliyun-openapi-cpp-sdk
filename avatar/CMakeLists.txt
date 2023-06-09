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

set(avatar_public_header 
	include/alibabacloud/avatar/AvatarClient.h
	include/alibabacloud/avatar/AvatarExport.h )

set(avatar_public_header_model 
	include/alibabacloud/avatar/model/CancelVideoTaskRequest.h
	include/alibabacloud/avatar/model/CancelVideoTaskResult.h
	include/alibabacloud/avatar/model/CloseTimedResetOperateRequest.h
	include/alibabacloud/avatar/model/CloseTimedResetOperateResult.h
	include/alibabacloud/avatar/model/DuplexDecisionRequest.h
	include/alibabacloud/avatar/model/DuplexDecisionResult.h
	include/alibabacloud/avatar/model/GetVideoTaskInfoRequest.h
	include/alibabacloud/avatar/model/GetVideoTaskInfoResult.h
	include/alibabacloud/avatar/model/LicenseAuthRequest.h
	include/alibabacloud/avatar/model/LicenseAuthResult.h
	include/alibabacloud/avatar/model/QueryAvatarRequest.h
	include/alibabacloud/avatar/model/QueryAvatarResult.h
	include/alibabacloud/avatar/model/QueryAvatarListRequest.h
	include/alibabacloud/avatar/model/QueryAvatarListResult.h
	include/alibabacloud/avatar/model/QueryRunningInstanceRequest.h
	include/alibabacloud/avatar/model/QueryRunningInstanceResult.h
	include/alibabacloud/avatar/model/QueryTimedResetOperateStatusRequest.h
	include/alibabacloud/avatar/model/QueryTimedResetOperateStatusResult.h
	include/alibabacloud/avatar/model/SendMessageRequest.h
	include/alibabacloud/avatar/model/SendMessageResult.h
	include/alibabacloud/avatar/model/StartInstanceRequest.h
	include/alibabacloud/avatar/model/StartInstanceResult.h
	include/alibabacloud/avatar/model/StartTimedResetOperateRequest.h
	include/alibabacloud/avatar/model/StartTimedResetOperateResult.h
	include/alibabacloud/avatar/model/StopInstanceRequest.h
	include/alibabacloud/avatar/model/StopInstanceResult.h
	include/alibabacloud/avatar/model/SubmitAudioTo2DAvatarVideoTaskRequest.h
	include/alibabacloud/avatar/model/SubmitAudioTo2DAvatarVideoTaskResult.h
	include/alibabacloud/avatar/model/SubmitTextTo2DAvatarVideoTaskRequest.h
	include/alibabacloud/avatar/model/SubmitTextTo2DAvatarVideoTaskResult.h
	include/alibabacloud/avatar/model/SubmitTextTo3DAvatarVideoTaskRequest.h
	include/alibabacloud/avatar/model/SubmitTextTo3DAvatarVideoTaskResult.h )

set(avatar_src 
	src/AvatarClient.cc
	src/model/CancelVideoTaskRequest.cc
	src/model/CancelVideoTaskResult.cc
	src/model/CloseTimedResetOperateRequest.cc
	src/model/CloseTimedResetOperateResult.cc
	src/model/DuplexDecisionRequest.cc
	src/model/DuplexDecisionResult.cc
	src/model/GetVideoTaskInfoRequest.cc
	src/model/GetVideoTaskInfoResult.cc
	src/model/LicenseAuthRequest.cc
	src/model/LicenseAuthResult.cc
	src/model/QueryAvatarRequest.cc
	src/model/QueryAvatarResult.cc
	src/model/QueryAvatarListRequest.cc
	src/model/QueryAvatarListResult.cc
	src/model/QueryRunningInstanceRequest.cc
	src/model/QueryRunningInstanceResult.cc
	src/model/QueryTimedResetOperateStatusRequest.cc
	src/model/QueryTimedResetOperateStatusResult.cc
	src/model/SendMessageRequest.cc
	src/model/SendMessageResult.cc
	src/model/StartInstanceRequest.cc
	src/model/StartInstanceResult.cc
	src/model/StartTimedResetOperateRequest.cc
	src/model/StartTimedResetOperateResult.cc
	src/model/StopInstanceRequest.cc
	src/model/StopInstanceResult.cc
	src/model/SubmitAudioTo2DAvatarVideoTaskRequest.cc
	src/model/SubmitAudioTo2DAvatarVideoTaskResult.cc
	src/model/SubmitTextTo2DAvatarVideoTaskRequest.cc
	src/model/SubmitTextTo2DAvatarVideoTaskResult.cc
	src/model/SubmitTextTo3DAvatarVideoTaskRequest.cc
	src/model/SubmitTextTo3DAvatarVideoTaskResult.cc )

add_library(avatar ${LIB_TYPE}
	${avatar_public_header}
	${avatar_public_header_model}
	${avatar_src})

set_target_properties(avatar
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}avatar
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(avatar
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AVATAR_LIBRARY)
endif()

target_include_directories(avatar
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(avatar
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(avatar
		jsoncpp)
	target_include_directories(avatar
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(avatar
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(avatar
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(avatar
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(avatar
		jsoncpp)
endif()

install(FILES ${avatar_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/avatar)
install(FILES ${avatar_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/avatar/model)
install(TARGETS avatar
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)