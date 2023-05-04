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

set(dyplsapi_public_header 
	include/alibabacloud/dyplsapi/DyplsapiClient.h
	include/alibabacloud/dyplsapi/DyplsapiExport.h )

set(dyplsapi_public_header_model 
	include/alibabacloud/dyplsapi/model/AddAxnTrackNoRequest.h
	include/alibabacloud/dyplsapi/model/AddAxnTrackNoResult.h
	include/alibabacloud/dyplsapi/model/AddSecretBlacklistRequest.h
	include/alibabacloud/dyplsapi/model/AddSecretBlacklistResult.h
	include/alibabacloud/dyplsapi/model/BindAxbRequest.h
	include/alibabacloud/dyplsapi/model/BindAxbResult.h
	include/alibabacloud/dyplsapi/model/BindAxgRequest.h
	include/alibabacloud/dyplsapi/model/BindAxgResult.h
	include/alibabacloud/dyplsapi/model/BindAxnRequest.h
	include/alibabacloud/dyplsapi/model/BindAxnResult.h
	include/alibabacloud/dyplsapi/model/BindAxnExtensionRequest.h
	include/alibabacloud/dyplsapi/model/BindAxnExtensionResult.h
	include/alibabacloud/dyplsapi/model/BindBatchAxgRequest.h
	include/alibabacloud/dyplsapi/model/BindBatchAxgResult.h
	include/alibabacloud/dyplsapi/model/BuySecretNoRequest.h
	include/alibabacloud/dyplsapi/model/BuySecretNoResult.h
	include/alibabacloud/dyplsapi/model/CancelPickUpWaybillRequest.h
	include/alibabacloud/dyplsapi/model/CancelPickUpWaybillResult.h
	include/alibabacloud/dyplsapi/model/CreateAxgGroupRequest.h
	include/alibabacloud/dyplsapi/model/CreateAxgGroupResult.h
	include/alibabacloud/dyplsapi/model/CreatePickUpWaybillRequest.h
	include/alibabacloud/dyplsapi/model/CreatePickUpWaybillResult.h
	include/alibabacloud/dyplsapi/model/CreatePickUpWaybillPreQueryRequest.h
	include/alibabacloud/dyplsapi/model/CreatePickUpWaybillPreQueryResult.h
	include/alibabacloud/dyplsapi/model/DeleteAxgGroupRequest.h
	include/alibabacloud/dyplsapi/model/DeleteAxgGroupResult.h
	include/alibabacloud/dyplsapi/model/DeleteSecretBlacklistRequest.h
	include/alibabacloud/dyplsapi/model/DeleteSecretBlacklistResult.h
	include/alibabacloud/dyplsapi/model/GetSecretAsrDetailRequest.h
	include/alibabacloud/dyplsapi/model/GetSecretAsrDetailResult.h
	include/alibabacloud/dyplsapi/model/GetTotalPublicUrlRequest.h
	include/alibabacloud/dyplsapi/model/GetTotalPublicUrlResult.h
	include/alibabacloud/dyplsapi/model/LockSecretNoRequest.h
	include/alibabacloud/dyplsapi/model/LockSecretNoResult.h
	include/alibabacloud/dyplsapi/model/OperateAxgGroupRequest.h
	include/alibabacloud/dyplsapi/model/OperateAxgGroupResult.h
	include/alibabacloud/dyplsapi/model/OperateBlackNoRequest.h
	include/alibabacloud/dyplsapi/model/OperateBlackNoResult.h
	include/alibabacloud/dyplsapi/model/QueryPhoneNoAByTrackNoRequest.h
	include/alibabacloud/dyplsapi/model/QueryPhoneNoAByTrackNoResult.h
	include/alibabacloud/dyplsapi/model/QueryRecordFileDownloadUrlRequest.h
	include/alibabacloud/dyplsapi/model/QueryRecordFileDownloadUrlResult.h
	include/alibabacloud/dyplsapi/model/QuerySecretNoDetailRequest.h
	include/alibabacloud/dyplsapi/model/QuerySecretNoDetailResult.h
	include/alibabacloud/dyplsapi/model/QuerySecretNoRemainRequest.h
	include/alibabacloud/dyplsapi/model/QuerySecretNoRemainResult.h
	include/alibabacloud/dyplsapi/model/QuerySubsIdRequest.h
	include/alibabacloud/dyplsapi/model/QuerySubsIdResult.h
	include/alibabacloud/dyplsapi/model/QuerySubscriptionDetailRequest.h
	include/alibabacloud/dyplsapi/model/QuerySubscriptionDetailResult.h
	include/alibabacloud/dyplsapi/model/ReleaseSecretNoRequest.h
	include/alibabacloud/dyplsapi/model/ReleaseSecretNoResult.h
	include/alibabacloud/dyplsapi/model/UnbindSubscriptionRequest.h
	include/alibabacloud/dyplsapi/model/UnbindSubscriptionResult.h
	include/alibabacloud/dyplsapi/model/UnlockSecretNoRequest.h
	include/alibabacloud/dyplsapi/model/UnlockSecretNoResult.h
	include/alibabacloud/dyplsapi/model/UpdateSubscriptionRequest.h
	include/alibabacloud/dyplsapi/model/UpdateSubscriptionResult.h )

set(dyplsapi_src 
	src/DyplsapiClient.cc
	src/model/AddAxnTrackNoRequest.cc
	src/model/AddAxnTrackNoResult.cc
	src/model/AddSecretBlacklistRequest.cc
	src/model/AddSecretBlacklistResult.cc
	src/model/BindAxbRequest.cc
	src/model/BindAxbResult.cc
	src/model/BindAxgRequest.cc
	src/model/BindAxgResult.cc
	src/model/BindAxnRequest.cc
	src/model/BindAxnResult.cc
	src/model/BindAxnExtensionRequest.cc
	src/model/BindAxnExtensionResult.cc
	src/model/BindBatchAxgRequest.cc
	src/model/BindBatchAxgResult.cc
	src/model/BuySecretNoRequest.cc
	src/model/BuySecretNoResult.cc
	src/model/CancelPickUpWaybillRequest.cc
	src/model/CancelPickUpWaybillResult.cc
	src/model/CreateAxgGroupRequest.cc
	src/model/CreateAxgGroupResult.cc
	src/model/CreatePickUpWaybillRequest.cc
	src/model/CreatePickUpWaybillResult.cc
	src/model/CreatePickUpWaybillPreQueryRequest.cc
	src/model/CreatePickUpWaybillPreQueryResult.cc
	src/model/DeleteAxgGroupRequest.cc
	src/model/DeleteAxgGroupResult.cc
	src/model/DeleteSecretBlacklistRequest.cc
	src/model/DeleteSecretBlacklistResult.cc
	src/model/GetSecretAsrDetailRequest.cc
	src/model/GetSecretAsrDetailResult.cc
	src/model/GetTotalPublicUrlRequest.cc
	src/model/GetTotalPublicUrlResult.cc
	src/model/LockSecretNoRequest.cc
	src/model/LockSecretNoResult.cc
	src/model/OperateAxgGroupRequest.cc
	src/model/OperateAxgGroupResult.cc
	src/model/OperateBlackNoRequest.cc
	src/model/OperateBlackNoResult.cc
	src/model/QueryPhoneNoAByTrackNoRequest.cc
	src/model/QueryPhoneNoAByTrackNoResult.cc
	src/model/QueryRecordFileDownloadUrlRequest.cc
	src/model/QueryRecordFileDownloadUrlResult.cc
	src/model/QuerySecretNoDetailRequest.cc
	src/model/QuerySecretNoDetailResult.cc
	src/model/QuerySecretNoRemainRequest.cc
	src/model/QuerySecretNoRemainResult.cc
	src/model/QuerySubsIdRequest.cc
	src/model/QuerySubsIdResult.cc
	src/model/QuerySubscriptionDetailRequest.cc
	src/model/QuerySubscriptionDetailResult.cc
	src/model/ReleaseSecretNoRequest.cc
	src/model/ReleaseSecretNoResult.cc
	src/model/UnbindSubscriptionRequest.cc
	src/model/UnbindSubscriptionResult.cc
	src/model/UnlockSecretNoRequest.cc
	src/model/UnlockSecretNoResult.cc
	src/model/UpdateSubscriptionRequest.cc
	src/model/UpdateSubscriptionResult.cc )

add_library(dyplsapi ${LIB_TYPE}
	${dyplsapi_public_header}
	${dyplsapi_public_header_model}
	${dyplsapi_src})

set_target_properties(dyplsapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dyplsapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dyplsapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYPLSAPI_LIBRARY)
endif()

target_include_directories(dyplsapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dyplsapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dyplsapi
		jsoncpp)
	target_include_directories(dyplsapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dyplsapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dyplsapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dyplsapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dyplsapi
		jsoncpp)
endif()

install(FILES ${dyplsapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dyplsapi)
install(FILES ${dyplsapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dyplsapi/model)
install(TARGETS dyplsapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)