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

set(lto_public_header 
	include/alibabacloud/lto/LtoClient.h
	include/alibabacloud/lto/LtoExport.h )

set(lto_public_header_model 
	include/alibabacloud/lto/model/AddBaaSAntChainBizChainRequest.h
	include/alibabacloud/lto/model/AddBaaSAntChainBizChainResult.h
	include/alibabacloud/lto/model/AddBaaSFabricBizChainRequest.h
	include/alibabacloud/lto/model/AddBaaSFabricBizChainResult.h
	include/alibabacloud/lto/model/AddBsnFabricBizChainRequest.h
	include/alibabacloud/lto/model/AddBsnFabricBizChainResult.h
	include/alibabacloud/lto/model/AddDeviceGroupRequest.h
	include/alibabacloud/lto/model/AddDeviceGroupResult.h
	include/alibabacloud/lto/model/AddMemberRequest.h
	include/alibabacloud/lto/model/AddMemberResult.h
	include/alibabacloud/lto/model/AddPrivacyRuleRequest.h
	include/alibabacloud/lto/model/AddPrivacyRuleResult.h
	include/alibabacloud/lto/model/AddRouteRuleRequest.h
	include/alibabacloud/lto/model/AddRouteRuleResult.h
	include/alibabacloud/lto/model/AgreeMemberAccessRequest.h
	include/alibabacloud/lto/model/AgreeMemberAccessResult.h
	include/alibabacloud/lto/model/AuthorizeBaaSRequest.h
	include/alibabacloud/lto/model/AuthorizeBaaSResult.h
	include/alibabacloud/lto/model/AuthorizeDeviceGroupBizChainRequest.h
	include/alibabacloud/lto/model/AuthorizeDeviceGroupBizChainResult.h
	include/alibabacloud/lto/model/AuthorizeMemberBizChainRequest.h
	include/alibabacloud/lto/model/AuthorizeMemberBizChainResult.h
	include/alibabacloud/lto/model/DeletePrivacyRuleRequest.h
	include/alibabacloud/lto/model/DeletePrivacyRuleResult.h
	include/alibabacloud/lto/model/DeleteRouteRuleRequest.h
	include/alibabacloud/lto/model/DeleteRouteRuleResult.h
	include/alibabacloud/lto/model/DeniedMemberAccessRequest.h
	include/alibabacloud/lto/model/DeniedMemberAccessResult.h
	include/alibabacloud/lto/model/DescribeAccountRoleRequest.h
	include/alibabacloud/lto/model/DescribeAccountRoleResult.h
	include/alibabacloud/lto/model/DescribeAdminInfoRequest.h
	include/alibabacloud/lto/model/DescribeAdminInfoResult.h
	include/alibabacloud/lto/model/DescribeBizChainStatInfoRequest.h
	include/alibabacloud/lto/model/DescribeBizChainStatInfoResult.h
	include/alibabacloud/lto/model/DescribeDashboardApiInfoRequest.h
	include/alibabacloud/lto/model/DescribeDashboardApiInfoResult.h
	include/alibabacloud/lto/model/DescribeDashboardBaseInfoRequest.h
	include/alibabacloud/lto/model/DescribeDashboardBaseInfoResult.h
	include/alibabacloud/lto/model/DescribeDashboardDeviceInfoRequest.h
	include/alibabacloud/lto/model/DescribeDashboardDeviceInfoResult.h
	include/alibabacloud/lto/model/DescribeDashboardMemberApiInfoRequest.h
	include/alibabacloud/lto/model/DescribeDashboardMemberApiInfoResult.h
	include/alibabacloud/lto/model/DescribeDashboardMemberDeviceInfoRequest.h
	include/alibabacloud/lto/model/DescribeDashboardMemberDeviceInfoResult.h
	include/alibabacloud/lto/model/DescribeDeviceInfoRequest.h
	include/alibabacloud/lto/model/DescribeDeviceInfoResult.h
	include/alibabacloud/lto/model/DescribeEdgeStatInfoRequest.h
	include/alibabacloud/lto/model/DescribeEdgeStatInfoResult.h
	include/alibabacloud/lto/model/DescribeMemberBizChainStatInfoRequest.h
	include/alibabacloud/lto/model/DescribeMemberBizChainStatInfoResult.h
	include/alibabacloud/lto/model/DescribeMemberStatInfoRequest.h
	include/alibabacloud/lto/model/DescribeMemberStatInfoResult.h
	include/alibabacloud/lto/model/DescribeMemberTotalStatInfoRequest.h
	include/alibabacloud/lto/model/DescribeMemberTotalStatInfoResult.h
	include/alibabacloud/lto/model/DescribePackgeInfoRequest.h
	include/alibabacloud/lto/model/DescribePackgeInfoResult.h
	include/alibabacloud/lto/model/DescribeStatDeviceInfoRequest.h
	include/alibabacloud/lto/model/DescribeStatDeviceInfoResult.h
	include/alibabacloud/lto/model/DescribeStatMemberDeviceInfoRequest.h
	include/alibabacloud/lto/model/DescribeStatMemberDeviceInfoResult.h
	include/alibabacloud/lto/model/DescribeTotalStatInfoRequest.h
	include/alibabacloud/lto/model/DescribeTotalStatInfoResult.h
	include/alibabacloud/lto/model/DisableDeviceRequest.h
	include/alibabacloud/lto/model/DisableDeviceResult.h
	include/alibabacloud/lto/model/DisableDeviceGroupRequest.h
	include/alibabacloud/lto/model/DisableDeviceGroupResult.h
	include/alibabacloud/lto/model/DownloadPrivacyKeyRequest.h
	include/alibabacloud/lto/model/DownloadPrivacyKeyResult.h
	include/alibabacloud/lto/model/EnableDeviceRequest.h
	include/alibabacloud/lto/model/EnableDeviceResult.h
	include/alibabacloud/lto/model/EnableDeviceGroupRequest.h
	include/alibabacloud/lto/model/EnableDeviceGroupResult.h
	include/alibabacloud/lto/model/FreezeMemberRequest.h
	include/alibabacloud/lto/model/FreezeMemberResult.h
	include/alibabacloud/lto/model/GetEdgeTotalDeviceCountRequest.h
	include/alibabacloud/lto/model/GetEdgeTotalDeviceCountResult.h
	include/alibabacloud/lto/model/ListAllAdminRequest.h
	include/alibabacloud/lto/model/ListAllAdminResult.h
	include/alibabacloud/lto/model/ListAllBizChainRequest.h
	include/alibabacloud/lto/model/ListAllBizChainResult.h
	include/alibabacloud/lto/model/ListAllBizChainContractRequest.h
	include/alibabacloud/lto/model/ListAllBizChainContractResult.h
	include/alibabacloud/lto/model/ListAllDeviceGroupRequest.h
	include/alibabacloud/lto/model/ListAllDeviceGroupResult.h
	include/alibabacloud/lto/model/ListAllMemberRequest.h
	include/alibabacloud/lto/model/ListAllMemberResult.h
	include/alibabacloud/lto/model/ListAllPrivacyAlgorithmRequest.h
	include/alibabacloud/lto/model/ListAllPrivacyAlgorithmResult.h
	include/alibabacloud/lto/model/ListAllPrivacyRuleRequest.h
	include/alibabacloud/lto/model/ListAllPrivacyRuleResult.h
	include/alibabacloud/lto/model/ListAllProductKeyRequest.h
	include/alibabacloud/lto/model/ListAllProductKeyResult.h
	include/alibabacloud/lto/model/ListAllSystemContractRequest.h
	include/alibabacloud/lto/model/ListAllSystemContractResult.h
	include/alibabacloud/lto/model/ListBaaSAntChainRequest.h
	include/alibabacloud/lto/model/ListBaaSAntChainResult.h
	include/alibabacloud/lto/model/ListBaaSAntChainConsortiumRequest.h
	include/alibabacloud/lto/model/ListBaaSAntChainConsortiumResult.h
	include/alibabacloud/lto/model/ListBaaSAntChainPeerRequest.h
	include/alibabacloud/lto/model/ListBaaSAntChainPeerResult.h
	include/alibabacloud/lto/model/ListBaaSFabricChannelRequest.h
	include/alibabacloud/lto/model/ListBaaSFabricChannelResult.h
	include/alibabacloud/lto/model/ListBaaSFabricConsortiumRequest.h
	include/alibabacloud/lto/model/ListBaaSFabricConsortiumResult.h
	include/alibabacloud/lto/model/ListBaaSFabricOrganizationRequest.h
	include/alibabacloud/lto/model/ListBaaSFabricOrganizationResult.h
	include/alibabacloud/lto/model/ListBizChainRequest.h
	include/alibabacloud/lto/model/ListBizChainResult.h
	include/alibabacloud/lto/model/ListBizChainDataRequest.h
	include/alibabacloud/lto/model/ListBizChainDataResult.h
	include/alibabacloud/lto/model/ListDeviceRequest.h
	include/alibabacloud/lto/model/ListDeviceResult.h
	include/alibabacloud/lto/model/ListDeviceGroupRequest.h
	include/alibabacloud/lto/model/ListDeviceGroupResult.h
	include/alibabacloud/lto/model/ListDeviceGroupAuthorizedBizChainRequest.h
	include/alibabacloud/lto/model/ListDeviceGroupAuthorizedBizChainResult.h
	include/alibabacloud/lto/model/ListEdgeDeviceRequest.h
	include/alibabacloud/lto/model/ListEdgeDeviceResult.h
	include/alibabacloud/lto/model/ListEdgeDeviceGroupRequest.h
	include/alibabacloud/lto/model/ListEdgeDeviceGroupResult.h
	include/alibabacloud/lto/model/ListMemberRequest.h
	include/alibabacloud/lto/model/ListMemberResult.h
	include/alibabacloud/lto/model/ListMemberAccessRecordRequest.h
	include/alibabacloud/lto/model/ListMemberAccessRecordResult.h
	include/alibabacloud/lto/model/ListMemberAuthorizedBizChainRequest.h
	include/alibabacloud/lto/model/ListMemberAuthorizedBizChainResult.h
	include/alibabacloud/lto/model/ListPrivacyRuleRequest.h
	include/alibabacloud/lto/model/ListPrivacyRuleResult.h
	include/alibabacloud/lto/model/ListPrivacyRuleSharedMemberRequest.h
	include/alibabacloud/lto/model/ListPrivacyRuleSharedMemberResult.h
	include/alibabacloud/lto/model/ListRouteRuleRequest.h
	include/alibabacloud/lto/model/ListRouteRuleResult.h
	include/alibabacloud/lto/model/QueryBlockchainDataRequest.h
	include/alibabacloud/lto/model/QueryBlockchainDataResult.h
	include/alibabacloud/lto/model/QueryBlockchainMetadataRequest.h
	include/alibabacloud/lto/model/QueryBlockchainMetadataResult.h
	include/alibabacloud/lto/model/SharePrivacyRuleRequest.h
	include/alibabacloud/lto/model/SharePrivacyRuleResult.h
	include/alibabacloud/lto/model/UnFreezeMemberRequest.h
	include/alibabacloud/lto/model/UnFreezeMemberResult.h
	include/alibabacloud/lto/model/UpdateBizChainRequest.h
	include/alibabacloud/lto/model/UpdateBizChainResult.h
	include/alibabacloud/lto/model/UpdateMemberRequest.h
	include/alibabacloud/lto/model/UpdateMemberResult.h
	include/alibabacloud/lto/model/UpdatePrivacyRuleRequest.h
	include/alibabacloud/lto/model/UpdatePrivacyRuleResult.h
	include/alibabacloud/lto/model/UpdateRouteRuleRequest.h
	include/alibabacloud/lto/model/UpdateRouteRuleResult.h
	include/alibabacloud/lto/model/UploadIoTDataToBlockchainRequest.h
	include/alibabacloud/lto/model/UploadIoTDataToBlockchainResult.h )

set(lto_src 
	src/LtoClient.cc
	src/model/AddBaaSAntChainBizChainRequest.cc
	src/model/AddBaaSAntChainBizChainResult.cc
	src/model/AddBaaSFabricBizChainRequest.cc
	src/model/AddBaaSFabricBizChainResult.cc
	src/model/AddBsnFabricBizChainRequest.cc
	src/model/AddBsnFabricBizChainResult.cc
	src/model/AddDeviceGroupRequest.cc
	src/model/AddDeviceGroupResult.cc
	src/model/AddMemberRequest.cc
	src/model/AddMemberResult.cc
	src/model/AddPrivacyRuleRequest.cc
	src/model/AddPrivacyRuleResult.cc
	src/model/AddRouteRuleRequest.cc
	src/model/AddRouteRuleResult.cc
	src/model/AgreeMemberAccessRequest.cc
	src/model/AgreeMemberAccessResult.cc
	src/model/AuthorizeBaaSRequest.cc
	src/model/AuthorizeBaaSResult.cc
	src/model/AuthorizeDeviceGroupBizChainRequest.cc
	src/model/AuthorizeDeviceGroupBizChainResult.cc
	src/model/AuthorizeMemberBizChainRequest.cc
	src/model/AuthorizeMemberBizChainResult.cc
	src/model/DeletePrivacyRuleRequest.cc
	src/model/DeletePrivacyRuleResult.cc
	src/model/DeleteRouteRuleRequest.cc
	src/model/DeleteRouteRuleResult.cc
	src/model/DeniedMemberAccessRequest.cc
	src/model/DeniedMemberAccessResult.cc
	src/model/DescribeAccountRoleRequest.cc
	src/model/DescribeAccountRoleResult.cc
	src/model/DescribeAdminInfoRequest.cc
	src/model/DescribeAdminInfoResult.cc
	src/model/DescribeBizChainStatInfoRequest.cc
	src/model/DescribeBizChainStatInfoResult.cc
	src/model/DescribeDashboardApiInfoRequest.cc
	src/model/DescribeDashboardApiInfoResult.cc
	src/model/DescribeDashboardBaseInfoRequest.cc
	src/model/DescribeDashboardBaseInfoResult.cc
	src/model/DescribeDashboardDeviceInfoRequest.cc
	src/model/DescribeDashboardDeviceInfoResult.cc
	src/model/DescribeDashboardMemberApiInfoRequest.cc
	src/model/DescribeDashboardMemberApiInfoResult.cc
	src/model/DescribeDashboardMemberDeviceInfoRequest.cc
	src/model/DescribeDashboardMemberDeviceInfoResult.cc
	src/model/DescribeDeviceInfoRequest.cc
	src/model/DescribeDeviceInfoResult.cc
	src/model/DescribeEdgeStatInfoRequest.cc
	src/model/DescribeEdgeStatInfoResult.cc
	src/model/DescribeMemberBizChainStatInfoRequest.cc
	src/model/DescribeMemberBizChainStatInfoResult.cc
	src/model/DescribeMemberStatInfoRequest.cc
	src/model/DescribeMemberStatInfoResult.cc
	src/model/DescribeMemberTotalStatInfoRequest.cc
	src/model/DescribeMemberTotalStatInfoResult.cc
	src/model/DescribePackgeInfoRequest.cc
	src/model/DescribePackgeInfoResult.cc
	src/model/DescribeStatDeviceInfoRequest.cc
	src/model/DescribeStatDeviceInfoResult.cc
	src/model/DescribeStatMemberDeviceInfoRequest.cc
	src/model/DescribeStatMemberDeviceInfoResult.cc
	src/model/DescribeTotalStatInfoRequest.cc
	src/model/DescribeTotalStatInfoResult.cc
	src/model/DisableDeviceRequest.cc
	src/model/DisableDeviceResult.cc
	src/model/DisableDeviceGroupRequest.cc
	src/model/DisableDeviceGroupResult.cc
	src/model/DownloadPrivacyKeyRequest.cc
	src/model/DownloadPrivacyKeyResult.cc
	src/model/EnableDeviceRequest.cc
	src/model/EnableDeviceResult.cc
	src/model/EnableDeviceGroupRequest.cc
	src/model/EnableDeviceGroupResult.cc
	src/model/FreezeMemberRequest.cc
	src/model/FreezeMemberResult.cc
	src/model/GetEdgeTotalDeviceCountRequest.cc
	src/model/GetEdgeTotalDeviceCountResult.cc
	src/model/ListAllAdminRequest.cc
	src/model/ListAllAdminResult.cc
	src/model/ListAllBizChainRequest.cc
	src/model/ListAllBizChainResult.cc
	src/model/ListAllBizChainContractRequest.cc
	src/model/ListAllBizChainContractResult.cc
	src/model/ListAllDeviceGroupRequest.cc
	src/model/ListAllDeviceGroupResult.cc
	src/model/ListAllMemberRequest.cc
	src/model/ListAllMemberResult.cc
	src/model/ListAllPrivacyAlgorithmRequest.cc
	src/model/ListAllPrivacyAlgorithmResult.cc
	src/model/ListAllPrivacyRuleRequest.cc
	src/model/ListAllPrivacyRuleResult.cc
	src/model/ListAllProductKeyRequest.cc
	src/model/ListAllProductKeyResult.cc
	src/model/ListAllSystemContractRequest.cc
	src/model/ListAllSystemContractResult.cc
	src/model/ListBaaSAntChainRequest.cc
	src/model/ListBaaSAntChainResult.cc
	src/model/ListBaaSAntChainConsortiumRequest.cc
	src/model/ListBaaSAntChainConsortiumResult.cc
	src/model/ListBaaSAntChainPeerRequest.cc
	src/model/ListBaaSAntChainPeerResult.cc
	src/model/ListBaaSFabricChannelRequest.cc
	src/model/ListBaaSFabricChannelResult.cc
	src/model/ListBaaSFabricConsortiumRequest.cc
	src/model/ListBaaSFabricConsortiumResult.cc
	src/model/ListBaaSFabricOrganizationRequest.cc
	src/model/ListBaaSFabricOrganizationResult.cc
	src/model/ListBizChainRequest.cc
	src/model/ListBizChainResult.cc
	src/model/ListBizChainDataRequest.cc
	src/model/ListBizChainDataResult.cc
	src/model/ListDeviceRequest.cc
	src/model/ListDeviceResult.cc
	src/model/ListDeviceGroupRequest.cc
	src/model/ListDeviceGroupResult.cc
	src/model/ListDeviceGroupAuthorizedBizChainRequest.cc
	src/model/ListDeviceGroupAuthorizedBizChainResult.cc
	src/model/ListEdgeDeviceRequest.cc
	src/model/ListEdgeDeviceResult.cc
	src/model/ListEdgeDeviceGroupRequest.cc
	src/model/ListEdgeDeviceGroupResult.cc
	src/model/ListMemberRequest.cc
	src/model/ListMemberResult.cc
	src/model/ListMemberAccessRecordRequest.cc
	src/model/ListMemberAccessRecordResult.cc
	src/model/ListMemberAuthorizedBizChainRequest.cc
	src/model/ListMemberAuthorizedBizChainResult.cc
	src/model/ListPrivacyRuleRequest.cc
	src/model/ListPrivacyRuleResult.cc
	src/model/ListPrivacyRuleSharedMemberRequest.cc
	src/model/ListPrivacyRuleSharedMemberResult.cc
	src/model/ListRouteRuleRequest.cc
	src/model/ListRouteRuleResult.cc
	src/model/QueryBlockchainDataRequest.cc
	src/model/QueryBlockchainDataResult.cc
	src/model/QueryBlockchainMetadataRequest.cc
	src/model/QueryBlockchainMetadataResult.cc
	src/model/SharePrivacyRuleRequest.cc
	src/model/SharePrivacyRuleResult.cc
	src/model/UnFreezeMemberRequest.cc
	src/model/UnFreezeMemberResult.cc
	src/model/UpdateBizChainRequest.cc
	src/model/UpdateBizChainResult.cc
	src/model/UpdateMemberRequest.cc
	src/model/UpdateMemberResult.cc
	src/model/UpdatePrivacyRuleRequest.cc
	src/model/UpdatePrivacyRuleResult.cc
	src/model/UpdateRouteRuleRequest.cc
	src/model/UpdateRouteRuleResult.cc
	src/model/UploadIoTDataToBlockchainRequest.cc
	src/model/UploadIoTDataToBlockchainResult.cc )

add_library(lto ${LIB_TYPE}
	${lto_public_header}
	${lto_public_header_model}
	${lto_src})

set_target_properties(lto
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lto
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(lto
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LTO_LIBRARY)
endif()

target_include_directories(lto
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(lto
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(lto
		jsoncpp)
	target_include_directories(lto
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(lto
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(lto
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(lto
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(lto
		jsoncpp)
endif()

install(FILES ${lto_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lto)
install(FILES ${lto_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/lto/model)
install(TARGETS lto
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)