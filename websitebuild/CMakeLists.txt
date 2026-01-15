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

set(websitebuild_public_header 
	include/alibabacloud/websitebuild/WebsiteBuildClient.h
	include/alibabacloud/websitebuild/WebsiteBuildExport.h )

set(websitebuild_public_header_model 
	include/alibabacloud/websitebuild/model/BindAppDomainRequest.h
	include/alibabacloud/websitebuild/model/BindAppDomainResult.h
	include/alibabacloud/websitebuild/model/CreateAppInstanceRequest.h
	include/alibabacloud/websitebuild/model/CreateAppInstanceResult.h
	include/alibabacloud/websitebuild/model/CreateAppInstanceTicketRequest.h
	include/alibabacloud/websitebuild/model/CreateAppInstanceTicketResult.h
	include/alibabacloud/websitebuild/model/CreateLogoTaskRequest.h
	include/alibabacloud/websitebuild/model/CreateLogoTaskResult.h
	include/alibabacloud/websitebuild/model/DeleteAppDomainCertificateRequest.h
	include/alibabacloud/websitebuild/model/DeleteAppDomainCertificateResult.h
	include/alibabacloud/websitebuild/model/DeleteAppDomainRedirectRequest.h
	include/alibabacloud/websitebuild/model/DeleteAppDomainRedirectResult.h
	include/alibabacloud/websitebuild/model/DescribeAppDomainDnsRecordRequest.h
	include/alibabacloud/websitebuild/model/DescribeAppDomainDnsRecordResult.h
	include/alibabacloud/websitebuild/model/DispatchConsoleAPIForPartnerRequest.h
	include/alibabacloud/websitebuild/model/DispatchConsoleAPIForPartnerResult.h
	include/alibabacloud/websitebuild/model/GetAppInstanceRequest.h
	include/alibabacloud/websitebuild/model/GetAppInstanceResult.h
	include/alibabacloud/websitebuild/model/GetCreateLogoTaskRequest.h
	include/alibabacloud/websitebuild/model/GetCreateLogoTaskResult.h
	include/alibabacloud/websitebuild/model/GetDomainInfoForPartnerRequest.h
	include/alibabacloud/websitebuild/model/GetDomainInfoForPartnerResult.h
	include/alibabacloud/websitebuild/model/GetIcpFilingInfoForPartnerRequest.h
	include/alibabacloud/websitebuild/model/GetIcpFilingInfoForPartnerResult.h
	include/alibabacloud/websitebuild/model/GetUserAccessTokenForPartnerRequest.h
	include/alibabacloud/websitebuild/model/GetUserAccessTokenForPartnerResult.h
	include/alibabacloud/websitebuild/model/GetUserTmpIdentityForPartnerRequest.h
	include/alibabacloud/websitebuild/model/GetUserTmpIdentityForPartnerResult.h
	include/alibabacloud/websitebuild/model/ListAppDomainRedirectRecordsRequest.h
	include/alibabacloud/websitebuild/model/ListAppDomainRedirectRecordsResult.h
	include/alibabacloud/websitebuild/model/ListAppInstanceDomainsRequest.h
	include/alibabacloud/websitebuild/model/ListAppInstanceDomainsResult.h
	include/alibabacloud/websitebuild/model/ListAppInstancesRequest.h
	include/alibabacloud/websitebuild/model/ListAppInstancesResult.h
	include/alibabacloud/websitebuild/model/ModifyAppInstanceSpecRequest.h
	include/alibabacloud/websitebuild/model/ModifyAppInstanceSpecResult.h
	include/alibabacloud/websitebuild/model/OperateAppInstanceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/OperateAppInstanceForPartnerResult.h
	include/alibabacloud/websitebuild/model/OperateAppServiceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/OperateAppServiceForPartnerResult.h
	include/alibabacloud/websitebuild/model/RefreshAppInstanceTicketRequest.h
	include/alibabacloud/websitebuild/model/RefreshAppInstanceTicketResult.h
	include/alibabacloud/websitebuild/model/RefundAppInstanceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/RefundAppInstanceForPartnerResult.h
	include/alibabacloud/websitebuild/model/RenewAppInstanceRequest.h
	include/alibabacloud/websitebuild/model/RenewAppInstanceResult.h
	include/alibabacloud/websitebuild/model/SearchImageRequest.h
	include/alibabacloud/websitebuild/model/SearchImageResult.h
	include/alibabacloud/websitebuild/model/SetAppDomainCertificateRequest.h
	include/alibabacloud/websitebuild/model/SetAppDomainCertificateResult.h
	include/alibabacloud/websitebuild/model/SyncAppInstanceForPartnerRequest.h
	include/alibabacloud/websitebuild/model/SyncAppInstanceForPartnerResult.h
	include/alibabacloud/websitebuild/model/UnbindAppDomainRequest.h
	include/alibabacloud/websitebuild/model/UnbindAppDomainResult.h )

set(websitebuild_src 
	src/WebsiteBuildClient.cc
	src/model/BindAppDomainRequest.cc
	src/model/BindAppDomainResult.cc
	src/model/CreateAppInstanceRequest.cc
	src/model/CreateAppInstanceResult.cc
	src/model/CreateAppInstanceTicketRequest.cc
	src/model/CreateAppInstanceTicketResult.cc
	src/model/CreateLogoTaskRequest.cc
	src/model/CreateLogoTaskResult.cc
	src/model/DeleteAppDomainCertificateRequest.cc
	src/model/DeleteAppDomainCertificateResult.cc
	src/model/DeleteAppDomainRedirectRequest.cc
	src/model/DeleteAppDomainRedirectResult.cc
	src/model/DescribeAppDomainDnsRecordRequest.cc
	src/model/DescribeAppDomainDnsRecordResult.cc
	src/model/DispatchConsoleAPIForPartnerRequest.cc
	src/model/DispatchConsoleAPIForPartnerResult.cc
	src/model/GetAppInstanceRequest.cc
	src/model/GetAppInstanceResult.cc
	src/model/GetCreateLogoTaskRequest.cc
	src/model/GetCreateLogoTaskResult.cc
	src/model/GetDomainInfoForPartnerRequest.cc
	src/model/GetDomainInfoForPartnerResult.cc
	src/model/GetIcpFilingInfoForPartnerRequest.cc
	src/model/GetIcpFilingInfoForPartnerResult.cc
	src/model/GetUserAccessTokenForPartnerRequest.cc
	src/model/GetUserAccessTokenForPartnerResult.cc
	src/model/GetUserTmpIdentityForPartnerRequest.cc
	src/model/GetUserTmpIdentityForPartnerResult.cc
	src/model/ListAppDomainRedirectRecordsRequest.cc
	src/model/ListAppDomainRedirectRecordsResult.cc
	src/model/ListAppInstanceDomainsRequest.cc
	src/model/ListAppInstanceDomainsResult.cc
	src/model/ListAppInstancesRequest.cc
	src/model/ListAppInstancesResult.cc
	src/model/ModifyAppInstanceSpecRequest.cc
	src/model/ModifyAppInstanceSpecResult.cc
	src/model/OperateAppInstanceForPartnerRequest.cc
	src/model/OperateAppInstanceForPartnerResult.cc
	src/model/OperateAppServiceForPartnerRequest.cc
	src/model/OperateAppServiceForPartnerResult.cc
	src/model/RefreshAppInstanceTicketRequest.cc
	src/model/RefreshAppInstanceTicketResult.cc
	src/model/RefundAppInstanceForPartnerRequest.cc
	src/model/RefundAppInstanceForPartnerResult.cc
	src/model/RenewAppInstanceRequest.cc
	src/model/RenewAppInstanceResult.cc
	src/model/SearchImageRequest.cc
	src/model/SearchImageResult.cc
	src/model/SetAppDomainCertificateRequest.cc
	src/model/SetAppDomainCertificateResult.cc
	src/model/SyncAppInstanceForPartnerRequest.cc
	src/model/SyncAppInstanceForPartnerResult.cc
	src/model/UnbindAppDomainRequest.cc
	src/model/UnbindAppDomainResult.cc )

add_library(websitebuild ${LIB_TYPE}
	${websitebuild_public_header}
	${websitebuild_public_header_model}
	${websitebuild_src})

set_target_properties(websitebuild
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}websitebuild
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(websitebuild
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_WEBSITEBUILD_LIBRARY)
endif()

target_include_directories(websitebuild
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(websitebuild
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(websitebuild
		jsoncpp)
	target_include_directories(websitebuild
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(websitebuild
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(websitebuild
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(websitebuild
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(websitebuild
		jsoncpp)
endif()

install(FILES ${websitebuild_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/websitebuild)
install(FILES ${websitebuild_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/websitebuild/model)
install(TARGETS websitebuild
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)