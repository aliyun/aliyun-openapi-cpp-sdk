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

set(cc5g_public_header 
	include/alibabacloud/cc5g/CC5GClient.h
	include/alibabacloud/cc5g/CC5GExport.h )

set(cc5g_public_header_model 
	include/alibabacloud/cc5g/model/AddDNSAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/AddDNSAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/AddGroupDnsAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/AddGroupDnsAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/AddWirelessCloudConnectorToGroupRequest.h
	include/alibabacloud/cc5g/model/AddWirelessCloudConnectorToGroupResult.h
	include/alibabacloud/cc5g/model/AttachVpcToNetLinkRequest.h
	include/alibabacloud/cc5g/model/AttachVpcToNetLinkResult.h
	include/alibabacloud/cc5g/model/CreateAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/CreateAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/CreateBatchOperateCardsTaskRequest.h
	include/alibabacloud/cc5g/model/CreateBatchOperateCardsTaskResult.h
	include/alibabacloud/cc5g/model/CreateGroupAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/CreateGroupAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/CreateIoTCloudConnectorBackhaulRouteRequest.h
	include/alibabacloud/cc5g/model/CreateIoTCloudConnectorBackhaulRouteResult.h
	include/alibabacloud/cc5g/model/CreateWirelessCloudConnectorRequest.h
	include/alibabacloud/cc5g/model/CreateWirelessCloudConnectorResult.h
	include/alibabacloud/cc5g/model/CreateWirelessCloudConnectorGroupRequest.h
	include/alibabacloud/cc5g/model/CreateWirelessCloudConnectorGroupResult.h
	include/alibabacloud/cc5g/model/DeleteAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/DeleteAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/DeleteBatchOperateCardsTaskRequest.h
	include/alibabacloud/cc5g/model/DeleteBatchOperateCardsTaskResult.h
	include/alibabacloud/cc5g/model/DeleteGroupAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/DeleteGroupAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/DeleteIoTCloudConnectorBackhaulRouteRequest.h
	include/alibabacloud/cc5g/model/DeleteIoTCloudConnectorBackhaulRouteResult.h
	include/alibabacloud/cc5g/model/DeleteWirelessCloudConnectorRequest.h
	include/alibabacloud/cc5g/model/DeleteWirelessCloudConnectorResult.h
	include/alibabacloud/cc5g/model/DeleteWirelessCloudConnectorGroupRequest.h
	include/alibabacloud/cc5g/model/DeleteWirelessCloudConnectorGroupResult.h
	include/alibabacloud/cc5g/model/DetachVpcFromNetLinkRequest.h
	include/alibabacloud/cc5g/model/DetachVpcFromNetLinkResult.h
	include/alibabacloud/cc5g/model/FailCardsRequest.h
	include/alibabacloud/cc5g/model/FailCardsResult.h
	include/alibabacloud/cc5g/model/GetCardRequest.h
	include/alibabacloud/cc5g/model/GetCardResult.h
	include/alibabacloud/cc5g/model/GetCardLockReasonRequest.h
	include/alibabacloud/cc5g/model/GetCardLockReasonResult.h
	include/alibabacloud/cc5g/model/GetCreateCustomerInformationRequest.h
	include/alibabacloud/cc5g/model/GetCreateCustomerInformationResult.h
	include/alibabacloud/cc5g/model/GetDiagnoseResultForSingleCardRequest.h
	include/alibabacloud/cc5g/model/GetDiagnoseResultForSingleCardResult.h
	include/alibabacloud/cc5g/model/GetWirelessCloudConnectorRequest.h
	include/alibabacloud/cc5g/model/GetWirelessCloudConnectorResult.h
	include/alibabacloud/cc5g/model/GrantNetLinkRequest.h
	include/alibabacloud/cc5g/model/GrantNetLinkResult.h
	include/alibabacloud/cc5g/model/ListAPNsRequest.h
	include/alibabacloud/cc5g/model/ListAPNsResult.h
	include/alibabacloud/cc5g/model/ListAuthorizationRulesRequest.h
	include/alibabacloud/cc5g/model/ListAuthorizationRulesResult.h
	include/alibabacloud/cc5g/model/ListBatchOperateCardsTasksRequest.h
	include/alibabacloud/cc5g/model/ListBatchOperateCardsTasksResult.h
	include/alibabacloud/cc5g/model/ListCardDayUsagesRequest.h
	include/alibabacloud/cc5g/model/ListCardDayUsagesResult.h
	include/alibabacloud/cc5g/model/ListCardUsagesRequest.h
	include/alibabacloud/cc5g/model/ListCardUsagesResult.h
	include/alibabacloud/cc5g/model/ListCardsRequest.h
	include/alibabacloud/cc5g/model/ListCardsResult.h
	include/alibabacloud/cc5g/model/ListDataPackagesRequest.h
	include/alibabacloud/cc5g/model/ListDataPackagesResult.h
	include/alibabacloud/cc5g/model/ListDiagnoseInfoForSingleCardRequest.h
	include/alibabacloud/cc5g/model/ListDiagnoseInfoForSingleCardResult.h
	include/alibabacloud/cc5g/model/ListGroupAuthorizationRulesRequest.h
	include/alibabacloud/cc5g/model/ListGroupAuthorizationRulesResult.h
	include/alibabacloud/cc5g/model/ListIoTCloudConnectorBackhaulRouteRequest.h
	include/alibabacloud/cc5g/model/ListIoTCloudConnectorBackhaulRouteResult.h
	include/alibabacloud/cc5g/model/ListOrdersRequest.h
	include/alibabacloud/cc5g/model/ListOrdersResult.h
	include/alibabacloud/cc5g/model/ListRegionsRequest.h
	include/alibabacloud/cc5g/model/ListRegionsResult.h
	include/alibabacloud/cc5g/model/ListWirelessCloudConnectorGroupsRequest.h
	include/alibabacloud/cc5g/model/ListWirelessCloudConnectorGroupsResult.h
	include/alibabacloud/cc5g/model/ListWirelessCloudConnectorsRequest.h
	include/alibabacloud/cc5g/model/ListWirelessCloudConnectorsResult.h
	include/alibabacloud/cc5g/model/ListZonesRequest.h
	include/alibabacloud/cc5g/model/ListZonesResult.h
	include/alibabacloud/cc5g/model/LockCardsRequest.h
	include/alibabacloud/cc5g/model/LockCardsResult.h
	include/alibabacloud/cc5g/model/ModifyWirelessCloudConnectorFeatureRequest.h
	include/alibabacloud/cc5g/model/ModifyWirelessCloudConnectorFeatureResult.h
	include/alibabacloud/cc5g/model/OpenCc5gServiceRequest.h
	include/alibabacloud/cc5g/model/OpenCc5gServiceResult.h
	include/alibabacloud/cc5g/model/RebindCardsRequest.h
	include/alibabacloud/cc5g/model/RebindCardsResult.h
	include/alibabacloud/cc5g/model/RemoveWirelessCloudConnectorFromGroupRequest.h
	include/alibabacloud/cc5g/model/RemoveWirelessCloudConnectorFromGroupResult.h
	include/alibabacloud/cc5g/model/ResumeCardsRequest.h
	include/alibabacloud/cc5g/model/ResumeCardsResult.h
	include/alibabacloud/cc5g/model/RevokeNetLinkRequest.h
	include/alibabacloud/cc5g/model/RevokeNetLinkResult.h
	include/alibabacloud/cc5g/model/StopCardsRequest.h
	include/alibabacloud/cc5g/model/StopCardsResult.h
	include/alibabacloud/cc5g/model/SubmitDiagnoseTaskForSingleCardRequest.h
	include/alibabacloud/cc5g/model/SubmitDiagnoseTaskForSingleCardResult.h
	include/alibabacloud/cc5g/model/SwitchWirelessCloudConnectorToBusinessRequest.h
	include/alibabacloud/cc5g/model/SwitchWirelessCloudConnectorToBusinessResult.h
	include/alibabacloud/cc5g/model/UnlockCardsRequest.h
	include/alibabacloud/cc5g/model/UnlockCardsResult.h
	include/alibabacloud/cc5g/model/UpdateAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/UpdateAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/UpdateBatchOperateCardsTaskRequest.h
	include/alibabacloud/cc5g/model/UpdateBatchOperateCardsTaskResult.h
	include/alibabacloud/cc5g/model/UpdateCardRequest.h
	include/alibabacloud/cc5g/model/UpdateCardResult.h
	include/alibabacloud/cc5g/model/UpdateDNSAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/UpdateDNSAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/UpdateGroupAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/UpdateGroupAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/UpdateGroupDnsAuthorizationRuleRequest.h
	include/alibabacloud/cc5g/model/UpdateGroupDnsAuthorizationRuleResult.h
	include/alibabacloud/cc5g/model/UpdateWirelessCloudConnectorRequest.h
	include/alibabacloud/cc5g/model/UpdateWirelessCloudConnectorResult.h
	include/alibabacloud/cc5g/model/UpdateWirelessCloudConnectorGroupRequest.h
	include/alibabacloud/cc5g/model/UpdateWirelessCloudConnectorGroupResult.h )

set(cc5g_src 
	src/CC5GClient.cc
	src/model/AddDNSAuthorizationRuleRequest.cc
	src/model/AddDNSAuthorizationRuleResult.cc
	src/model/AddGroupDnsAuthorizationRuleRequest.cc
	src/model/AddGroupDnsAuthorizationRuleResult.cc
	src/model/AddWirelessCloudConnectorToGroupRequest.cc
	src/model/AddWirelessCloudConnectorToGroupResult.cc
	src/model/AttachVpcToNetLinkRequest.cc
	src/model/AttachVpcToNetLinkResult.cc
	src/model/CreateAuthorizationRuleRequest.cc
	src/model/CreateAuthorizationRuleResult.cc
	src/model/CreateBatchOperateCardsTaskRequest.cc
	src/model/CreateBatchOperateCardsTaskResult.cc
	src/model/CreateGroupAuthorizationRuleRequest.cc
	src/model/CreateGroupAuthorizationRuleResult.cc
	src/model/CreateIoTCloudConnectorBackhaulRouteRequest.cc
	src/model/CreateIoTCloudConnectorBackhaulRouteResult.cc
	src/model/CreateWirelessCloudConnectorRequest.cc
	src/model/CreateWirelessCloudConnectorResult.cc
	src/model/CreateWirelessCloudConnectorGroupRequest.cc
	src/model/CreateWirelessCloudConnectorGroupResult.cc
	src/model/DeleteAuthorizationRuleRequest.cc
	src/model/DeleteAuthorizationRuleResult.cc
	src/model/DeleteBatchOperateCardsTaskRequest.cc
	src/model/DeleteBatchOperateCardsTaskResult.cc
	src/model/DeleteGroupAuthorizationRuleRequest.cc
	src/model/DeleteGroupAuthorizationRuleResult.cc
	src/model/DeleteIoTCloudConnectorBackhaulRouteRequest.cc
	src/model/DeleteIoTCloudConnectorBackhaulRouteResult.cc
	src/model/DeleteWirelessCloudConnectorRequest.cc
	src/model/DeleteWirelessCloudConnectorResult.cc
	src/model/DeleteWirelessCloudConnectorGroupRequest.cc
	src/model/DeleteWirelessCloudConnectorGroupResult.cc
	src/model/DetachVpcFromNetLinkRequest.cc
	src/model/DetachVpcFromNetLinkResult.cc
	src/model/FailCardsRequest.cc
	src/model/FailCardsResult.cc
	src/model/GetCardRequest.cc
	src/model/GetCardResult.cc
	src/model/GetCardLockReasonRequest.cc
	src/model/GetCardLockReasonResult.cc
	src/model/GetCreateCustomerInformationRequest.cc
	src/model/GetCreateCustomerInformationResult.cc
	src/model/GetDiagnoseResultForSingleCardRequest.cc
	src/model/GetDiagnoseResultForSingleCardResult.cc
	src/model/GetWirelessCloudConnectorRequest.cc
	src/model/GetWirelessCloudConnectorResult.cc
	src/model/GrantNetLinkRequest.cc
	src/model/GrantNetLinkResult.cc
	src/model/ListAPNsRequest.cc
	src/model/ListAPNsResult.cc
	src/model/ListAuthorizationRulesRequest.cc
	src/model/ListAuthorizationRulesResult.cc
	src/model/ListBatchOperateCardsTasksRequest.cc
	src/model/ListBatchOperateCardsTasksResult.cc
	src/model/ListCardDayUsagesRequest.cc
	src/model/ListCardDayUsagesResult.cc
	src/model/ListCardUsagesRequest.cc
	src/model/ListCardUsagesResult.cc
	src/model/ListCardsRequest.cc
	src/model/ListCardsResult.cc
	src/model/ListDataPackagesRequest.cc
	src/model/ListDataPackagesResult.cc
	src/model/ListDiagnoseInfoForSingleCardRequest.cc
	src/model/ListDiagnoseInfoForSingleCardResult.cc
	src/model/ListGroupAuthorizationRulesRequest.cc
	src/model/ListGroupAuthorizationRulesResult.cc
	src/model/ListIoTCloudConnectorBackhaulRouteRequest.cc
	src/model/ListIoTCloudConnectorBackhaulRouteResult.cc
	src/model/ListOrdersRequest.cc
	src/model/ListOrdersResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/ListWirelessCloudConnectorGroupsRequest.cc
	src/model/ListWirelessCloudConnectorGroupsResult.cc
	src/model/ListWirelessCloudConnectorsRequest.cc
	src/model/ListWirelessCloudConnectorsResult.cc
	src/model/ListZonesRequest.cc
	src/model/ListZonesResult.cc
	src/model/LockCardsRequest.cc
	src/model/LockCardsResult.cc
	src/model/ModifyWirelessCloudConnectorFeatureRequest.cc
	src/model/ModifyWirelessCloudConnectorFeatureResult.cc
	src/model/OpenCc5gServiceRequest.cc
	src/model/OpenCc5gServiceResult.cc
	src/model/RebindCardsRequest.cc
	src/model/RebindCardsResult.cc
	src/model/RemoveWirelessCloudConnectorFromGroupRequest.cc
	src/model/RemoveWirelessCloudConnectorFromGroupResult.cc
	src/model/ResumeCardsRequest.cc
	src/model/ResumeCardsResult.cc
	src/model/RevokeNetLinkRequest.cc
	src/model/RevokeNetLinkResult.cc
	src/model/StopCardsRequest.cc
	src/model/StopCardsResult.cc
	src/model/SubmitDiagnoseTaskForSingleCardRequest.cc
	src/model/SubmitDiagnoseTaskForSingleCardResult.cc
	src/model/SwitchWirelessCloudConnectorToBusinessRequest.cc
	src/model/SwitchWirelessCloudConnectorToBusinessResult.cc
	src/model/UnlockCardsRequest.cc
	src/model/UnlockCardsResult.cc
	src/model/UpdateAuthorizationRuleRequest.cc
	src/model/UpdateAuthorizationRuleResult.cc
	src/model/UpdateBatchOperateCardsTaskRequest.cc
	src/model/UpdateBatchOperateCardsTaskResult.cc
	src/model/UpdateCardRequest.cc
	src/model/UpdateCardResult.cc
	src/model/UpdateDNSAuthorizationRuleRequest.cc
	src/model/UpdateDNSAuthorizationRuleResult.cc
	src/model/UpdateGroupAuthorizationRuleRequest.cc
	src/model/UpdateGroupAuthorizationRuleResult.cc
	src/model/UpdateGroupDnsAuthorizationRuleRequest.cc
	src/model/UpdateGroupDnsAuthorizationRuleResult.cc
	src/model/UpdateWirelessCloudConnectorRequest.cc
	src/model/UpdateWirelessCloudConnectorResult.cc
	src/model/UpdateWirelessCloudConnectorGroupRequest.cc
	src/model/UpdateWirelessCloudConnectorGroupResult.cc )

add_library(cc5g ${LIB_TYPE}
	${cc5g_public_header}
	${cc5g_public_header_model}
	${cc5g_src})

set_target_properties(cc5g
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cc5g
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cc5g
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CC5G_LIBRARY)
endif()

target_include_directories(cc5g
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cc5g
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cc5g
		jsoncpp)
	target_include_directories(cc5g
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cc5g
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cc5g
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cc5g
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cc5g
		jsoncpp)
endif()

install(FILES ${cc5g_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cc5g)
install(FILES ${cc5g_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cc5g/model)
install(TARGETS cc5g
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)