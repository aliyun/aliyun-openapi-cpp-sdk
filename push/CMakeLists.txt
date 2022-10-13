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

set(push_public_header 
	include/alibabacloud/push/PushClient.h
	include/alibabacloud/push/PushExport.h )

set(push_public_header_model 
	include/alibabacloud/push/model/BindAliasRequest.h
	include/alibabacloud/push/model/BindAliasResult.h
	include/alibabacloud/push/model/BindPhoneRequest.h
	include/alibabacloud/push/model/BindPhoneResult.h
	include/alibabacloud/push/model/BindTagRequest.h
	include/alibabacloud/push/model/BindTagResult.h
	include/alibabacloud/push/model/CancelPushRequest.h
	include/alibabacloud/push/model/CancelPushResult.h
	include/alibabacloud/push/model/CheckCertificateRequest.h
	include/alibabacloud/push/model/CheckCertificateResult.h
	include/alibabacloud/push/model/CheckDeviceRequest.h
	include/alibabacloud/push/model/CheckDeviceResult.h
	include/alibabacloud/push/model/CheckDevicesRequest.h
	include/alibabacloud/push/model/CheckDevicesResult.h
	include/alibabacloud/push/model/CompleteContinuouslyPushRequest.h
	include/alibabacloud/push/model/CompleteContinuouslyPushResult.h
	include/alibabacloud/push/model/ContinuouslyPushRequest.h
	include/alibabacloud/push/model/ContinuouslyPushResult.h
	include/alibabacloud/push/model/ListSummaryAppsRequest.h
	include/alibabacloud/push/model/ListSummaryAppsResult.h
	include/alibabacloud/push/model/ListTagsRequest.h
	include/alibabacloud/push/model/ListTagsResult.h
	include/alibabacloud/push/model/MassPushRequest.h
	include/alibabacloud/push/model/MassPushResult.h
	include/alibabacloud/push/model/PushRequest.h
	include/alibabacloud/push/model/PushResult.h
	include/alibabacloud/push/model/PushMessageToAndroidRequest.h
	include/alibabacloud/push/model/PushMessageToAndroidResult.h
	include/alibabacloud/push/model/PushMessageToiOSRequest.h
	include/alibabacloud/push/model/PushMessageToiOSResult.h
	include/alibabacloud/push/model/PushNoticeToAndroidRequest.h
	include/alibabacloud/push/model/PushNoticeToAndroidResult.h
	include/alibabacloud/push/model/PushNoticeToiOSRequest.h
	include/alibabacloud/push/model/PushNoticeToiOSResult.h
	include/alibabacloud/push/model/QueryAliasesRequest.h
	include/alibabacloud/push/model/QueryAliasesResult.h
	include/alibabacloud/push/model/QueryDeviceInfoRequest.h
	include/alibabacloud/push/model/QueryDeviceInfoResult.h
	include/alibabacloud/push/model/QueryDeviceStatRequest.h
	include/alibabacloud/push/model/QueryDeviceStatResult.h
	include/alibabacloud/push/model/QueryDevicesByAccountRequest.h
	include/alibabacloud/push/model/QueryDevicesByAccountResult.h
	include/alibabacloud/push/model/QueryDevicesByAliasRequest.h
	include/alibabacloud/push/model/QueryDevicesByAliasResult.h
	include/alibabacloud/push/model/QueryPushRecordsRequest.h
	include/alibabacloud/push/model/QueryPushRecordsResult.h
	include/alibabacloud/push/model/QueryPushStatByAppRequest.h
	include/alibabacloud/push/model/QueryPushStatByAppResult.h
	include/alibabacloud/push/model/QueryPushStatByMsgRequest.h
	include/alibabacloud/push/model/QueryPushStatByMsgResult.h
	include/alibabacloud/push/model/QueryTagsRequest.h
	include/alibabacloud/push/model/QueryTagsResult.h
	include/alibabacloud/push/model/QueryUniqueDeviceStatRequest.h
	include/alibabacloud/push/model/QueryUniqueDeviceStatResult.h
	include/alibabacloud/push/model/RemoveTagRequest.h
	include/alibabacloud/push/model/RemoveTagResult.h
	include/alibabacloud/push/model/UnbindAliasRequest.h
	include/alibabacloud/push/model/UnbindAliasResult.h
	include/alibabacloud/push/model/UnbindPhoneRequest.h
	include/alibabacloud/push/model/UnbindPhoneResult.h
	include/alibabacloud/push/model/UnbindTagRequest.h
	include/alibabacloud/push/model/UnbindTagResult.h )

set(push_src 
	src/PushClient.cc
	src/model/BindAliasRequest.cc
	src/model/BindAliasResult.cc
	src/model/BindPhoneRequest.cc
	src/model/BindPhoneResult.cc
	src/model/BindTagRequest.cc
	src/model/BindTagResult.cc
	src/model/CancelPushRequest.cc
	src/model/CancelPushResult.cc
	src/model/CheckCertificateRequest.cc
	src/model/CheckCertificateResult.cc
	src/model/CheckDeviceRequest.cc
	src/model/CheckDeviceResult.cc
	src/model/CheckDevicesRequest.cc
	src/model/CheckDevicesResult.cc
	src/model/CompleteContinuouslyPushRequest.cc
	src/model/CompleteContinuouslyPushResult.cc
	src/model/ContinuouslyPushRequest.cc
	src/model/ContinuouslyPushResult.cc
	src/model/ListSummaryAppsRequest.cc
	src/model/ListSummaryAppsResult.cc
	src/model/ListTagsRequest.cc
	src/model/ListTagsResult.cc
	src/model/MassPushRequest.cc
	src/model/MassPushResult.cc
	src/model/PushRequest.cc
	src/model/PushResult.cc
	src/model/PushMessageToAndroidRequest.cc
	src/model/PushMessageToAndroidResult.cc
	src/model/PushMessageToiOSRequest.cc
	src/model/PushMessageToiOSResult.cc
	src/model/PushNoticeToAndroidRequest.cc
	src/model/PushNoticeToAndroidResult.cc
	src/model/PushNoticeToiOSRequest.cc
	src/model/PushNoticeToiOSResult.cc
	src/model/QueryAliasesRequest.cc
	src/model/QueryAliasesResult.cc
	src/model/QueryDeviceInfoRequest.cc
	src/model/QueryDeviceInfoResult.cc
	src/model/QueryDeviceStatRequest.cc
	src/model/QueryDeviceStatResult.cc
	src/model/QueryDevicesByAccountRequest.cc
	src/model/QueryDevicesByAccountResult.cc
	src/model/QueryDevicesByAliasRequest.cc
	src/model/QueryDevicesByAliasResult.cc
	src/model/QueryPushRecordsRequest.cc
	src/model/QueryPushRecordsResult.cc
	src/model/QueryPushStatByAppRequest.cc
	src/model/QueryPushStatByAppResult.cc
	src/model/QueryPushStatByMsgRequest.cc
	src/model/QueryPushStatByMsgResult.cc
	src/model/QueryTagsRequest.cc
	src/model/QueryTagsResult.cc
	src/model/QueryUniqueDeviceStatRequest.cc
	src/model/QueryUniqueDeviceStatResult.cc
	src/model/RemoveTagRequest.cc
	src/model/RemoveTagResult.cc
	src/model/UnbindAliasRequest.cc
	src/model/UnbindAliasResult.cc
	src/model/UnbindPhoneRequest.cc
	src/model/UnbindPhoneResult.cc
	src/model/UnbindTagRequest.cc
	src/model/UnbindTagResult.cc )

add_library(push ${LIB_TYPE}
	${push_public_header}
	${push_public_header_model}
	${push_src})

set_target_properties(push
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}push
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(push
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_PUSH_LIBRARY)
endif()

target_include_directories(push
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(push
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(push
		jsoncpp)
	target_include_directories(push
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(push
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(push
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(push
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(push
		jsoncpp)
endif()

install(FILES ${push_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/push)
install(FILES ${push_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/push/model)
install(TARGETS push
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)