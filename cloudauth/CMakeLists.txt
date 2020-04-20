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

set(cloudauth_public_header 
	include/alibabacloud/cloudauth/CloudauthClient.h
	include/alibabacloud/cloudauth/CloudauthExport.h )

set(cloudauth_public_header_model 
	include/alibabacloud/cloudauth/model/CompareFacesRequest.h
	include/alibabacloud/cloudauth/model/CompareFacesResult.h
	include/alibabacloud/cloudauth/model/ContrastFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/ContrastFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/CreateAuthKeyRequest.h
	include/alibabacloud/cloudauth/model/CreateAuthKeyResult.h
	include/alibabacloud/cloudauth/model/CreateRPSDKRequest.h
	include/alibabacloud/cloudauth/model/CreateRPSDKResult.h
	include/alibabacloud/cloudauth/model/CreateVerifySDKRequest.h
	include/alibabacloud/cloudauth/model/CreateVerifySDKResult.h
	include/alibabacloud/cloudauth/model/CreateVerifySettingRequest.h
	include/alibabacloud/cloudauth/model/CreateVerifySettingResult.h
	include/alibabacloud/cloudauth/model/DescribeAppInfoRequest.h
	include/alibabacloud/cloudauth/model/DescribeAppInfoResult.h
	include/alibabacloud/cloudauth/model/DescribeDeviceInfoRequest.h
	include/alibabacloud/cloudauth/model/DescribeDeviceInfoResult.h
	include/alibabacloud/cloudauth/model/DescribeFaceUsageRequest.h
	include/alibabacloud/cloudauth/model/DescribeFaceUsageResult.h
	include/alibabacloud/cloudauth/model/DescribeFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/DescribeFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/DescribeOssUploadTokenRequest.h
	include/alibabacloud/cloudauth/model/DescribeOssUploadTokenResult.h
	include/alibabacloud/cloudauth/model/DescribeRPSDKRequest.h
	include/alibabacloud/cloudauth/model/DescribeRPSDKResult.h
	include/alibabacloud/cloudauth/model/DescribeSdkUrlRequest.h
	include/alibabacloud/cloudauth/model/DescribeSdkUrlResult.h
	include/alibabacloud/cloudauth/model/DescribeUpdatePackageResultRequest.h
	include/alibabacloud/cloudauth/model/DescribeUpdatePackageResultResult.h
	include/alibabacloud/cloudauth/model/DescribeUploadInfoRequest.h
	include/alibabacloud/cloudauth/model/DescribeUploadInfoResult.h
	include/alibabacloud/cloudauth/model/DescribeUserStatusRequest.h
	include/alibabacloud/cloudauth/model/DescribeUserStatusResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifyRecordsRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifyRecordsResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifyResultRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifyResultResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifySDKRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifySDKResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifySettingRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifySettingResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifyTokenRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifyTokenResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifyUsageRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifyUsageResult.h
	include/alibabacloud/cloudauth/model/DetectFaceAttributesRequest.h
	include/alibabacloud/cloudauth/model/DetectFaceAttributesResult.h
	include/alibabacloud/cloudauth/model/InitDeviceRequest.h
	include/alibabacloud/cloudauth/model/InitDeviceResult.h
	include/alibabacloud/cloudauth/model/InitFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/InitFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/ModifyDeviceInfoRequest.h
	include/alibabacloud/cloudauth/model/ModifyDeviceInfoResult.h
	include/alibabacloud/cloudauth/model/UpdateAppPackageRequest.h
	include/alibabacloud/cloudauth/model/UpdateAppPackageResult.h
	include/alibabacloud/cloudauth/model/UpdateVerifySettingRequest.h
	include/alibabacloud/cloudauth/model/UpdateVerifySettingResult.h
	include/alibabacloud/cloudauth/model/VerifyDeviceRequest.h
	include/alibabacloud/cloudauth/model/VerifyDeviceResult.h
	include/alibabacloud/cloudauth/model/VerifyMaterialRequest.h
	include/alibabacloud/cloudauth/model/VerifyMaterialResult.h )

set(cloudauth_src 
	src/CloudauthClient.cc
	src/model/CompareFacesRequest.cc
	src/model/CompareFacesResult.cc
	src/model/ContrastFaceVerifyRequest.cc
	src/model/ContrastFaceVerifyResult.cc
	src/model/CreateAuthKeyRequest.cc
	src/model/CreateAuthKeyResult.cc
	src/model/CreateRPSDKRequest.cc
	src/model/CreateRPSDKResult.cc
	src/model/CreateVerifySDKRequest.cc
	src/model/CreateVerifySDKResult.cc
	src/model/CreateVerifySettingRequest.cc
	src/model/CreateVerifySettingResult.cc
	src/model/DescribeAppInfoRequest.cc
	src/model/DescribeAppInfoResult.cc
	src/model/DescribeDeviceInfoRequest.cc
	src/model/DescribeDeviceInfoResult.cc
	src/model/DescribeFaceUsageRequest.cc
	src/model/DescribeFaceUsageResult.cc
	src/model/DescribeFaceVerifyRequest.cc
	src/model/DescribeFaceVerifyResult.cc
	src/model/DescribeOssUploadTokenRequest.cc
	src/model/DescribeOssUploadTokenResult.cc
	src/model/DescribeRPSDKRequest.cc
	src/model/DescribeRPSDKResult.cc
	src/model/DescribeSdkUrlRequest.cc
	src/model/DescribeSdkUrlResult.cc
	src/model/DescribeUpdatePackageResultRequest.cc
	src/model/DescribeUpdatePackageResultResult.cc
	src/model/DescribeUploadInfoRequest.cc
	src/model/DescribeUploadInfoResult.cc
	src/model/DescribeUserStatusRequest.cc
	src/model/DescribeUserStatusResult.cc
	src/model/DescribeVerifyRecordsRequest.cc
	src/model/DescribeVerifyRecordsResult.cc
	src/model/DescribeVerifyResultRequest.cc
	src/model/DescribeVerifyResultResult.cc
	src/model/DescribeVerifySDKRequest.cc
	src/model/DescribeVerifySDKResult.cc
	src/model/DescribeVerifySettingRequest.cc
	src/model/DescribeVerifySettingResult.cc
	src/model/DescribeVerifyTokenRequest.cc
	src/model/DescribeVerifyTokenResult.cc
	src/model/DescribeVerifyUsageRequest.cc
	src/model/DescribeVerifyUsageResult.cc
	src/model/DetectFaceAttributesRequest.cc
	src/model/DetectFaceAttributesResult.cc
	src/model/InitDeviceRequest.cc
	src/model/InitDeviceResult.cc
	src/model/InitFaceVerifyRequest.cc
	src/model/InitFaceVerifyResult.cc
	src/model/ModifyDeviceInfoRequest.cc
	src/model/ModifyDeviceInfoResult.cc
	src/model/UpdateAppPackageRequest.cc
	src/model/UpdateAppPackageResult.cc
	src/model/UpdateVerifySettingRequest.cc
	src/model/UpdateVerifySettingResult.cc
	src/model/VerifyDeviceRequest.cc
	src/model/VerifyDeviceResult.cc
	src/model/VerifyMaterialRequest.cc
	src/model/VerifyMaterialResult.cc )

add_library(cloudauth ${LIB_TYPE}
	${cloudauth_public_header}
	${cloudauth_public_header_model}
	${cloudauth_src})

set_target_properties(cloudauth
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudauth
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloudauth
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUDAUTH_LIBRARY)
endif()

target_include_directories(cloudauth
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloudauth
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloudauth
		jsoncpp)
	target_include_directories(cloudauth
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloudauth
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloudauth
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloudauth
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloudauth
		jsoncpp)
endif()

install(FILES ${cloudauth_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudauth)
install(FILES ${cloudauth_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudauth/model)
install(TARGETS cloudauth
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)