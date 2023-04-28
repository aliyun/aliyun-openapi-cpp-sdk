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

set(dytnsapi_public_header 
	include/alibabacloud/dytnsapi/DytnsapiClient.h
	include/alibabacloud/dytnsapi/DytnsapiExport.h )

set(dytnsapi_public_header_model 
	include/alibabacloud/dytnsapi/model/DescribeEmptyNumberRequest.h
	include/alibabacloud/dytnsapi/model/DescribeEmptyNumberResult.h
	include/alibabacloud/dytnsapi/model/DescribePhoneNumberAnalysisRequest.h
	include/alibabacloud/dytnsapi/model/DescribePhoneNumberAnalysisResult.h
	include/alibabacloud/dytnsapi/model/DescribePhoneNumberOnlineTimeRequest.h
	include/alibabacloud/dytnsapi/model/DescribePhoneNumberOnlineTimeResult.h
	include/alibabacloud/dytnsapi/model/DescribePhoneNumberOperatorAttributeRequest.h
	include/alibabacloud/dytnsapi/model/DescribePhoneNumberOperatorAttributeResult.h
	include/alibabacloud/dytnsapi/model/DescribePhoneTwiceTelVerifyRequest.h
	include/alibabacloud/dytnsapi/model/DescribePhoneTwiceTelVerifyResult.h
	include/alibabacloud/dytnsapi/model/InvalidPhoneNumberFilterRequest.h
	include/alibabacloud/dytnsapi/model/InvalidPhoneNumberFilterResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberEncryptRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberEncryptResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForAccountRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForAccountResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForPublicRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForPublicResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForRealRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForRealResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForSmsRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForSmsResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForVirtualRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForVirtualResult.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForVoiceRequest.h
	include/alibabacloud/dytnsapi/model/PhoneNumberStatusForVoiceResult.h
	include/alibabacloud/dytnsapi/model/ThreeElementsVerificationRequest.h
	include/alibabacloud/dytnsapi/model/ThreeElementsVerificationResult.h
	include/alibabacloud/dytnsapi/model/TwoElementsVerificationRequest.h
	include/alibabacloud/dytnsapi/model/TwoElementsVerificationResult.h )

set(dytnsapi_src 
	src/DytnsapiClient.cc
	src/model/DescribeEmptyNumberRequest.cc
	src/model/DescribeEmptyNumberResult.cc
	src/model/DescribePhoneNumberAnalysisRequest.cc
	src/model/DescribePhoneNumberAnalysisResult.cc
	src/model/DescribePhoneNumberOnlineTimeRequest.cc
	src/model/DescribePhoneNumberOnlineTimeResult.cc
	src/model/DescribePhoneNumberOperatorAttributeRequest.cc
	src/model/DescribePhoneNumberOperatorAttributeResult.cc
	src/model/DescribePhoneTwiceTelVerifyRequest.cc
	src/model/DescribePhoneTwiceTelVerifyResult.cc
	src/model/InvalidPhoneNumberFilterRequest.cc
	src/model/InvalidPhoneNumberFilterResult.cc
	src/model/PhoneNumberEncryptRequest.cc
	src/model/PhoneNumberEncryptResult.cc
	src/model/PhoneNumberStatusForAccountRequest.cc
	src/model/PhoneNumberStatusForAccountResult.cc
	src/model/PhoneNumberStatusForPublicRequest.cc
	src/model/PhoneNumberStatusForPublicResult.cc
	src/model/PhoneNumberStatusForRealRequest.cc
	src/model/PhoneNumberStatusForRealResult.cc
	src/model/PhoneNumberStatusForSmsRequest.cc
	src/model/PhoneNumberStatusForSmsResult.cc
	src/model/PhoneNumberStatusForVirtualRequest.cc
	src/model/PhoneNumberStatusForVirtualResult.cc
	src/model/PhoneNumberStatusForVoiceRequest.cc
	src/model/PhoneNumberStatusForVoiceResult.cc
	src/model/ThreeElementsVerificationRequest.cc
	src/model/ThreeElementsVerificationResult.cc
	src/model/TwoElementsVerificationRequest.cc
	src/model/TwoElementsVerificationResult.cc )

add_library(dytnsapi ${LIB_TYPE}
	${dytnsapi_public_header}
	${dytnsapi_public_header_model}
	${dytnsapi_src})

set_target_properties(dytnsapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dytnsapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dytnsapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYTNSAPI_LIBRARY)
endif()

target_include_directories(dytnsapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dytnsapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dytnsapi
		jsoncpp)
	target_include_directories(dytnsapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dytnsapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dytnsapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dytnsapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dytnsapi
		jsoncpp)
endif()

install(FILES ${dytnsapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dytnsapi)
install(FILES ${dytnsapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dytnsapi/model)
install(TARGETS dytnsapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)