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
	include/alibabacloud/cloudauth/model/AIGCFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/AIGCFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/BankMetaVerifyRequest.h
	include/alibabacloud/cloudauth/model/BankMetaVerifyResult.h
	include/alibabacloud/cloudauth/model/CompareFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/CompareFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/CompareFacesRequest.h
	include/alibabacloud/cloudauth/model/CompareFacesResult.h
	include/alibabacloud/cloudauth/model/ContrastFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/ContrastFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/CreateAuthKeyRequest.h
	include/alibabacloud/cloudauth/model/CreateAuthKeyResult.h
	include/alibabacloud/cloudauth/model/CreateVerifySettingRequest.h
	include/alibabacloud/cloudauth/model/CreateVerifySettingResult.h
	include/alibabacloud/cloudauth/model/CredentialVerifyRequest.h
	include/alibabacloud/cloudauth/model/CredentialVerifyResult.h
	include/alibabacloud/cloudauth/model/DeepfakeDetectRequest.h
	include/alibabacloud/cloudauth/model/DeepfakeDetectResult.h
	include/alibabacloud/cloudauth/model/DeleteFaceVerifyResultRequest.h
	include/alibabacloud/cloudauth/model/DeleteFaceVerifyResultResult.h
	include/alibabacloud/cloudauth/model/DescribeDeviceInfoRequest.h
	include/alibabacloud/cloudauth/model/DescribeDeviceInfoResult.h
	include/alibabacloud/cloudauth/model/DescribeFaceGuardRiskRequest.h
	include/alibabacloud/cloudauth/model/DescribeFaceGuardRiskResult.h
	include/alibabacloud/cloudauth/model/DescribeFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/DescribeFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/DescribeOssUploadTokenRequest.h
	include/alibabacloud/cloudauth/model/DescribeOssUploadTokenResult.h
	include/alibabacloud/cloudauth/model/DescribePageFaceVerifyDataRequest.h
	include/alibabacloud/cloudauth/model/DescribePageFaceVerifyDataResult.h
	include/alibabacloud/cloudauth/model/DescribeSmartStatisticsPageListRequest.h
	include/alibabacloud/cloudauth/model/DescribeSmartStatisticsPageListResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifyResultRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifyResultResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifySDKRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifySDKResult.h
	include/alibabacloud/cloudauth/model/DescribeVerifyTokenRequest.h
	include/alibabacloud/cloudauth/model/DescribeVerifyTokenResult.h
	include/alibabacloud/cloudauth/model/DetectFaceAttributesRequest.h
	include/alibabacloud/cloudauth/model/DetectFaceAttributesResult.h
	include/alibabacloud/cloudauth/model/Id2MetaPeriodVerifyRequest.h
	include/alibabacloud/cloudauth/model/Id2MetaPeriodVerifyResult.h
	include/alibabacloud/cloudauth/model/Id2MetaStandardVerifyRequest.h
	include/alibabacloud/cloudauth/model/Id2MetaStandardVerifyResult.h
	include/alibabacloud/cloudauth/model/Id2MetaVerifyRequest.h
	include/alibabacloud/cloudauth/model/Id2MetaVerifyResult.h
	include/alibabacloud/cloudauth/model/InitFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/InitFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/InsertWhiteListSettingRequest.h
	include/alibabacloud/cloudauth/model/InsertWhiteListSettingResult.h
	include/alibabacloud/cloudauth/model/LivenessFaceVerifyRequest.h
	include/alibabacloud/cloudauth/model/LivenessFaceVerifyResult.h
	include/alibabacloud/cloudauth/model/Mobile3MetaDetailStandardVerifyRequest.h
	include/alibabacloud/cloudauth/model/Mobile3MetaDetailStandardVerifyResult.h
	include/alibabacloud/cloudauth/model/Mobile3MetaDetailVerifyRequest.h
	include/alibabacloud/cloudauth/model/Mobile3MetaDetailVerifyResult.h
	include/alibabacloud/cloudauth/model/Mobile3MetaSimpleStandardVerifyRequest.h
	include/alibabacloud/cloudauth/model/Mobile3MetaSimpleStandardVerifyResult.h
	include/alibabacloud/cloudauth/model/Mobile3MetaSimpleVerifyRequest.h
	include/alibabacloud/cloudauth/model/Mobile3MetaSimpleVerifyResult.h
	include/alibabacloud/cloudauth/model/MobileDetectRequest.h
	include/alibabacloud/cloudauth/model/MobileDetectResult.h
	include/alibabacloud/cloudauth/model/MobileOnlineStatusRequest.h
	include/alibabacloud/cloudauth/model/MobileOnlineStatusResult.h
	include/alibabacloud/cloudauth/model/MobileOnlineTimeRequest.h
	include/alibabacloud/cloudauth/model/MobileOnlineTimeResult.h
	include/alibabacloud/cloudauth/model/ModifyDeviceInfoRequest.h
	include/alibabacloud/cloudauth/model/ModifyDeviceInfoResult.h
	include/alibabacloud/cloudauth/model/PageQueryWhiteListSettingRequest.h
	include/alibabacloud/cloudauth/model/PageQueryWhiteListSettingResult.h
	include/alibabacloud/cloudauth/model/RemoveWhiteListSettingRequest.h
	include/alibabacloud/cloudauth/model/RemoveWhiteListSettingResult.h
	include/alibabacloud/cloudauth/model/Vehicle5ItemQueryRequest.h
	include/alibabacloud/cloudauth/model/Vehicle5ItemQueryResult.h
	include/alibabacloud/cloudauth/model/VehicleInsureQueryRequest.h
	include/alibabacloud/cloudauth/model/VehicleInsureQueryResult.h
	include/alibabacloud/cloudauth/model/VehicleMetaVerifyRequest.h
	include/alibabacloud/cloudauth/model/VehicleMetaVerifyResult.h
	include/alibabacloud/cloudauth/model/VehicleMetaVerifyV2Request.h
	include/alibabacloud/cloudauth/model/VehicleMetaVerifyV2Result.h
	include/alibabacloud/cloudauth/model/VehicleQueryRequest.h
	include/alibabacloud/cloudauth/model/VehicleQueryResult.h
	include/alibabacloud/cloudauth/model/VerifyMaterialRequest.h
	include/alibabacloud/cloudauth/model/VerifyMaterialResult.h )

set(cloudauth_src 
	src/CloudauthClient.cc
	src/model/AIGCFaceVerifyRequest.cc
	src/model/AIGCFaceVerifyResult.cc
	src/model/BankMetaVerifyRequest.cc
	src/model/BankMetaVerifyResult.cc
	src/model/CompareFaceVerifyRequest.cc
	src/model/CompareFaceVerifyResult.cc
	src/model/CompareFacesRequest.cc
	src/model/CompareFacesResult.cc
	src/model/ContrastFaceVerifyRequest.cc
	src/model/ContrastFaceVerifyResult.cc
	src/model/CreateAuthKeyRequest.cc
	src/model/CreateAuthKeyResult.cc
	src/model/CreateVerifySettingRequest.cc
	src/model/CreateVerifySettingResult.cc
	src/model/CredentialVerifyRequest.cc
	src/model/CredentialVerifyResult.cc
	src/model/DeepfakeDetectRequest.cc
	src/model/DeepfakeDetectResult.cc
	src/model/DeleteFaceVerifyResultRequest.cc
	src/model/DeleteFaceVerifyResultResult.cc
	src/model/DescribeDeviceInfoRequest.cc
	src/model/DescribeDeviceInfoResult.cc
	src/model/DescribeFaceGuardRiskRequest.cc
	src/model/DescribeFaceGuardRiskResult.cc
	src/model/DescribeFaceVerifyRequest.cc
	src/model/DescribeFaceVerifyResult.cc
	src/model/DescribeOssUploadTokenRequest.cc
	src/model/DescribeOssUploadTokenResult.cc
	src/model/DescribePageFaceVerifyDataRequest.cc
	src/model/DescribePageFaceVerifyDataResult.cc
	src/model/DescribeSmartStatisticsPageListRequest.cc
	src/model/DescribeSmartStatisticsPageListResult.cc
	src/model/DescribeVerifyResultRequest.cc
	src/model/DescribeVerifyResultResult.cc
	src/model/DescribeVerifySDKRequest.cc
	src/model/DescribeVerifySDKResult.cc
	src/model/DescribeVerifyTokenRequest.cc
	src/model/DescribeVerifyTokenResult.cc
	src/model/DetectFaceAttributesRequest.cc
	src/model/DetectFaceAttributesResult.cc
	src/model/Id2MetaPeriodVerifyRequest.cc
	src/model/Id2MetaPeriodVerifyResult.cc
	src/model/Id2MetaStandardVerifyRequest.cc
	src/model/Id2MetaStandardVerifyResult.cc
	src/model/Id2MetaVerifyRequest.cc
	src/model/Id2MetaVerifyResult.cc
	src/model/InitFaceVerifyRequest.cc
	src/model/InitFaceVerifyResult.cc
	src/model/InsertWhiteListSettingRequest.cc
	src/model/InsertWhiteListSettingResult.cc
	src/model/LivenessFaceVerifyRequest.cc
	src/model/LivenessFaceVerifyResult.cc
	src/model/Mobile3MetaDetailStandardVerifyRequest.cc
	src/model/Mobile3MetaDetailStandardVerifyResult.cc
	src/model/Mobile3MetaDetailVerifyRequest.cc
	src/model/Mobile3MetaDetailVerifyResult.cc
	src/model/Mobile3MetaSimpleStandardVerifyRequest.cc
	src/model/Mobile3MetaSimpleStandardVerifyResult.cc
	src/model/Mobile3MetaSimpleVerifyRequest.cc
	src/model/Mobile3MetaSimpleVerifyResult.cc
	src/model/MobileDetectRequest.cc
	src/model/MobileDetectResult.cc
	src/model/MobileOnlineStatusRequest.cc
	src/model/MobileOnlineStatusResult.cc
	src/model/MobileOnlineTimeRequest.cc
	src/model/MobileOnlineTimeResult.cc
	src/model/ModifyDeviceInfoRequest.cc
	src/model/ModifyDeviceInfoResult.cc
	src/model/PageQueryWhiteListSettingRequest.cc
	src/model/PageQueryWhiteListSettingResult.cc
	src/model/RemoveWhiteListSettingRequest.cc
	src/model/RemoveWhiteListSettingResult.cc
	src/model/Vehicle5ItemQueryRequest.cc
	src/model/Vehicle5ItemQueryResult.cc
	src/model/VehicleInsureQueryRequest.cc
	src/model/VehicleInsureQueryResult.cc
	src/model/VehicleMetaVerifyRequest.cc
	src/model/VehicleMetaVerifyResult.cc
	src/model/VehicleMetaVerifyV2Request.cc
	src/model/VehicleMetaVerifyV2Result.cc
	src/model/VehicleQueryRequest.cc
	src/model/VehicleQueryResult.cc
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