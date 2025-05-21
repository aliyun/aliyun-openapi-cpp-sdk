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

set(mseap_public_header 
	include/alibabacloud/mseap/MseapClient.h
	include/alibabacloud/mseap/MseapExport.h )

set(mseap_public_header_model 
	include/alibabacloud/mseap/model/ActivateLicenseRequest.h
	include/alibabacloud/mseap/model/ActivateLicenseResult.h
	include/alibabacloud/mseap/model/CallbackTaskRequest.h
	include/alibabacloud/mseap/model/CallbackTaskResult.h
	include/alibabacloud/mseap/model/DescribeAgreementStatusRequest.h
	include/alibabacloud/mseap/model/DescribeAgreementStatusResult.h
	include/alibabacloud/mseap/model/GenerateUploadFilePolicyForPartnerRequest.h
	include/alibabacloud/mseap/model/GenerateUploadFilePolicyForPartnerResult.h
	include/alibabacloud/mseap/model/GetNodeByFlowIdRequest.h
	include/alibabacloud/mseap/model/GetNodeByFlowIdResult.h
	include/alibabacloud/mseap/model/GetNodeByTemplateIdRequest.h
	include/alibabacloud/mseap/model/GetNodeByTemplateIdResult.h
	include/alibabacloud/mseap/model/GetPlatformUserInfoForPartnerRequest.h
	include/alibabacloud/mseap/model/GetPlatformUserInfoForPartnerResult.h
	include/alibabacloud/mseap/model/GetProxyByTypeRequest.h
	include/alibabacloud/mseap/model/GetProxyByTypeResult.h
	include/alibabacloud/mseap/model/GetRedisValueRequest.h
	include/alibabacloud/mseap/model/GetRedisValueResult.h
	include/alibabacloud/mseap/model/GetVariableRequest.h
	include/alibabacloud/mseap/model/GetVariableResult.h
	include/alibabacloud/mseap/model/IdentifyCodeRequest.h
	include/alibabacloud/mseap/model/IdentifyCodeResult.h
	include/alibabacloud/mseap/model/PullRpaModelRequest.h
	include/alibabacloud/mseap/model/PullRpaModelResult.h
	include/alibabacloud/mseap/model/PullTaskRequest.h
	include/alibabacloud/mseap/model/PullTaskResult.h
	include/alibabacloud/mseap/model/PushRpaTaskRequest.h
	include/alibabacloud/mseap/model/PushRpaTaskResult.h
	include/alibabacloud/mseap/model/PushRpaTaskDetailRequest.h
	include/alibabacloud/mseap/model/PushRpaTaskDetailResult.h
	include/alibabacloud/mseap/model/SendNotificationForPartnerRequest.h
	include/alibabacloud/mseap/model/SendNotificationForPartnerResult.h
	include/alibabacloud/mseap/model/SetRedisValueRequest.h
	include/alibabacloud/mseap/model/SetRedisValueResult.h
	include/alibabacloud/mseap/model/UpdateAgreementStatusRequest.h
	include/alibabacloud/mseap/model/UpdateAgreementStatusResult.h )

set(mseap_src 
	src/MseapClient.cc
	src/model/ActivateLicenseRequest.cc
	src/model/ActivateLicenseResult.cc
	src/model/CallbackTaskRequest.cc
	src/model/CallbackTaskResult.cc
	src/model/DescribeAgreementStatusRequest.cc
	src/model/DescribeAgreementStatusResult.cc
	src/model/GenerateUploadFilePolicyForPartnerRequest.cc
	src/model/GenerateUploadFilePolicyForPartnerResult.cc
	src/model/GetNodeByFlowIdRequest.cc
	src/model/GetNodeByFlowIdResult.cc
	src/model/GetNodeByTemplateIdRequest.cc
	src/model/GetNodeByTemplateIdResult.cc
	src/model/GetPlatformUserInfoForPartnerRequest.cc
	src/model/GetPlatformUserInfoForPartnerResult.cc
	src/model/GetProxyByTypeRequest.cc
	src/model/GetProxyByTypeResult.cc
	src/model/GetRedisValueRequest.cc
	src/model/GetRedisValueResult.cc
	src/model/GetVariableRequest.cc
	src/model/GetVariableResult.cc
	src/model/IdentifyCodeRequest.cc
	src/model/IdentifyCodeResult.cc
	src/model/PullRpaModelRequest.cc
	src/model/PullRpaModelResult.cc
	src/model/PullTaskRequest.cc
	src/model/PullTaskResult.cc
	src/model/PushRpaTaskRequest.cc
	src/model/PushRpaTaskResult.cc
	src/model/PushRpaTaskDetailRequest.cc
	src/model/PushRpaTaskDetailResult.cc
	src/model/SendNotificationForPartnerRequest.cc
	src/model/SendNotificationForPartnerResult.cc
	src/model/SetRedisValueRequest.cc
	src/model/SetRedisValueResult.cc
	src/model/UpdateAgreementStatusRequest.cc
	src/model/UpdateAgreementStatusResult.cc )

add_library(mseap ${LIB_TYPE}
	${mseap_public_header}
	${mseap_public_header_model}
	${mseap_src})

set_target_properties(mseap
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mseap
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(mseap
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MSEAP_LIBRARY)
endif()

target_include_directories(mseap
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(mseap
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(mseap
		jsoncpp)
	target_include_directories(mseap
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(mseap
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(mseap
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(mseap
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(mseap
		jsoncpp)
endif()

install(FILES ${mseap_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mseap)
install(FILES ${mseap_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mseap/model)
install(TARGETS mseap
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)