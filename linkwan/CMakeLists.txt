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

set(linkwan_public_header 
	include/alibabacloud/linkwan/LinkWANClient.h
	include/alibabacloud/linkwan/LinkWANExport.h )

set(linkwan_public_header_model 
	include/alibabacloud/linkwan/model/AcceptJoinPermissionAuthOrderRequest.h
	include/alibabacloud/linkwan/model/AcceptJoinPermissionAuthOrderResult.h
	include/alibabacloud/linkwan/model/AddNodeToGroupRequest.h
	include/alibabacloud/linkwan/model/AddNodeToGroupResult.h
	include/alibabacloud/linkwan/model/ApplyRoamingJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/ApplyRoamingJoinPermissionResult.h
	include/alibabacloud/linkwan/model/BindJoinPermissionToNodeGroupRequest.h
	include/alibabacloud/linkwan/model/BindJoinPermissionToNodeGroupResult.h
	include/alibabacloud/linkwan/model/CancelJoinPermissionAuthOrderRequest.h
	include/alibabacloud/linkwan/model/CancelJoinPermissionAuthOrderResult.h
	include/alibabacloud/linkwan/model/CheckCloudProductOpenStatusRequest.h
	include/alibabacloud/linkwan/model/CheckCloudProductOpenStatusResult.h
	include/alibabacloud/linkwan/model/CheckUserChargeStatusRequest.h
	include/alibabacloud/linkwan/model/CheckUserChargeStatusResult.h
	include/alibabacloud/linkwan/model/CountGatewayTupleOrdersRequest.h
	include/alibabacloud/linkwan/model/CountGatewayTupleOrdersResult.h
	include/alibabacloud/linkwan/model/CountGatewaysRequest.h
	include/alibabacloud/linkwan/model/CountGatewaysResult.h
	include/alibabacloud/linkwan/model/CountNodeGroupsRequest.h
	include/alibabacloud/linkwan/model/CountNodeGroupsResult.h
	include/alibabacloud/linkwan/model/CountNodeTupleOrdersRequest.h
	include/alibabacloud/linkwan/model/CountNodeTupleOrdersResult.h
	include/alibabacloud/linkwan/model/CountNodesByNodeGroupIdRequest.h
	include/alibabacloud/linkwan/model/CountNodesByNodeGroupIdResult.h
	include/alibabacloud/linkwan/model/CountNodesByOwnedJoinPermissionIdRequest.h
	include/alibabacloud/linkwan/model/CountNodesByOwnedJoinPermissionIdResult.h
	include/alibabacloud/linkwan/model/CountNotificationsRequest.h
	include/alibabacloud/linkwan/model/CountNotificationsResult.h
	include/alibabacloud/linkwan/model/CountOwnedJoinPermissionsRequest.h
	include/alibabacloud/linkwan/model/CountOwnedJoinPermissionsResult.h
	include/alibabacloud/linkwan/model/CountRentedJoinPermissionsRequest.h
	include/alibabacloud/linkwan/model/CountRentedJoinPermissionsResult.h
	include/alibabacloud/linkwan/model/CreateCustomLocalJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/CreateCustomLocalJoinPermissionResult.h
	include/alibabacloud/linkwan/model/CreateGatewayRequest.h
	include/alibabacloud/linkwan/model/CreateGatewayResult.h
	include/alibabacloud/linkwan/model/CreateLocalJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/CreateLocalJoinPermissionResult.h
	include/alibabacloud/linkwan/model/CreateNodeGroupRequest.h
	include/alibabacloud/linkwan/model/CreateNodeGroupResult.h
	include/alibabacloud/linkwan/model/DeleteGatewayRequest.h
	include/alibabacloud/linkwan/model/DeleteGatewayResult.h
	include/alibabacloud/linkwan/model/DeleteLocalJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/DeleteLocalJoinPermissionResult.h
	include/alibabacloud/linkwan/model/DeleteNodeGroupRequest.h
	include/alibabacloud/linkwan/model/DeleteNodeGroupResult.h
	include/alibabacloud/linkwan/model/DescribeRegionsRequest.h
	include/alibabacloud/linkwan/model/DescribeRegionsResult.h
	include/alibabacloud/linkwan/model/GetFreqBandPlanGroupRequest.h
	include/alibabacloud/linkwan/model/GetFreqBandPlanGroupResult.h
	include/alibabacloud/linkwan/model/GetGatewayRequest.h
	include/alibabacloud/linkwan/model/GetGatewayResult.h
	include/alibabacloud/linkwan/model/GetGatewayPacketStatRequest.h
	include/alibabacloud/linkwan/model/GetGatewayPacketStatResult.h
	include/alibabacloud/linkwan/model/GetGatewayStatusStatRequest.h
	include/alibabacloud/linkwan/model/GetGatewayStatusStatResult.h
	include/alibabacloud/linkwan/model/GetGatewayTransferPacketsDownloadUrlRequest.h
	include/alibabacloud/linkwan/model/GetGatewayTransferPacketsDownloadUrlResult.h
	include/alibabacloud/linkwan/model/GetGatewayTupleOrderRequest.h
	include/alibabacloud/linkwan/model/GetGatewayTupleOrderResult.h
	include/alibabacloud/linkwan/model/GetGatewayTuplesDownloadUrlRequest.h
	include/alibabacloud/linkwan/model/GetGatewayTuplesDownloadUrlResult.h
	include/alibabacloud/linkwan/model/GetJoinPermissionAuthOrderRequest.h
	include/alibabacloud/linkwan/model/GetJoinPermissionAuthOrderResult.h
	include/alibabacloud/linkwan/model/GetLocalConfigSyncTaskRequest.h
	include/alibabacloud/linkwan/model/GetLocalConfigSyncTaskResult.h
	include/alibabacloud/linkwan/model/GetNodeRequest.h
	include/alibabacloud/linkwan/model/GetNodeResult.h
	include/alibabacloud/linkwan/model/GetNodeGroupRequest.h
	include/alibabacloud/linkwan/model/GetNodeGroupResult.h
	include/alibabacloud/linkwan/model/GetNodeGroupTransferPacketsDownloadUrlRequest.h
	include/alibabacloud/linkwan/model/GetNodeGroupTransferPacketsDownloadUrlResult.h
	include/alibabacloud/linkwan/model/GetNodeLocalConfigRequest.h
	include/alibabacloud/linkwan/model/GetNodeLocalConfigResult.h
	include/alibabacloud/linkwan/model/GetNodeTransferPacketRequest.h
	include/alibabacloud/linkwan/model/GetNodeTransferPacketResult.h
	include/alibabacloud/linkwan/model/GetNodeTransferPacketsDownloadUrlRequest.h
	include/alibabacloud/linkwan/model/GetNodeTransferPacketsDownloadUrlResult.h
	include/alibabacloud/linkwan/model/GetNodeTupleOrderRequest.h
	include/alibabacloud/linkwan/model/GetNodeTupleOrderResult.h
	include/alibabacloud/linkwan/model/GetNodeTuplesDownloadUrlRequest.h
	include/alibabacloud/linkwan/model/GetNodeTuplesDownloadUrlResult.h
	include/alibabacloud/linkwan/model/GetNotificationRequest.h
	include/alibabacloud/linkwan/model/GetNotificationResult.h
	include/alibabacloud/linkwan/model/GetOwnedJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/GetOwnedJoinPermissionResult.h
	include/alibabacloud/linkwan/model/GetRentedJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/GetRentedJoinPermissionResult.h
	include/alibabacloud/linkwan/model/GetUserLicenseRequest.h
	include/alibabacloud/linkwan/model/GetUserLicenseResult.h
	include/alibabacloud/linkwan/model/GetUserNetProfileDescriptionRequest.h
	include/alibabacloud/linkwan/model/GetUserNetProfileDescriptionResult.h
	include/alibabacloud/linkwan/model/ListActivatedFeaturesRequest.h
	include/alibabacloud/linkwan/model/ListActivatedFeaturesResult.h
	include/alibabacloud/linkwan/model/ListActiveGatewaysRequest.h
	include/alibabacloud/linkwan/model/ListActiveGatewaysResult.h
	include/alibabacloud/linkwan/model/ListFreqBandPlanGroupsRequest.h
	include/alibabacloud/linkwan/model/ListFreqBandPlanGroupsResult.h
	include/alibabacloud/linkwan/model/ListGatewayLocalConfigsRequest.h
	include/alibabacloud/linkwan/model/ListGatewayLocalConfigsResult.h
	include/alibabacloud/linkwan/model/ListGatewayOnlineRecordsRequest.h
	include/alibabacloud/linkwan/model/ListGatewayOnlineRecordsResult.h
	include/alibabacloud/linkwan/model/ListGatewayTransferFlowStatsRequest.h
	include/alibabacloud/linkwan/model/ListGatewayTransferFlowStatsResult.h
	include/alibabacloud/linkwan/model/ListGatewayTransferPacketsRequest.h
	include/alibabacloud/linkwan/model/ListGatewayTransferPacketsResult.h
	include/alibabacloud/linkwan/model/ListGatewayTupleOrdersRequest.h
	include/alibabacloud/linkwan/model/ListGatewayTupleOrdersResult.h
	include/alibabacloud/linkwan/model/ListGatewaysRequest.h
	include/alibabacloud/linkwan/model/ListGatewaysResult.h
	include/alibabacloud/linkwan/model/ListGatewaysGisInfoRequest.h
	include/alibabacloud/linkwan/model/ListGatewaysGisInfoResult.h
	include/alibabacloud/linkwan/model/ListGatewaysPacketStatRequest.h
	include/alibabacloud/linkwan/model/ListGatewaysPacketStatResult.h
	include/alibabacloud/linkwan/model/ListNodeGroupTransferFlowStatsRequest.h
	include/alibabacloud/linkwan/model/ListNodeGroupTransferFlowStatsResult.h
	include/alibabacloud/linkwan/model/ListNodeGroupTransferPacketsRequest.h
	include/alibabacloud/linkwan/model/ListNodeGroupTransferPacketsResult.h
	include/alibabacloud/linkwan/model/ListNodeGroupsRequest.h
	include/alibabacloud/linkwan/model/ListNodeGroupsResult.h
	include/alibabacloud/linkwan/model/ListNodeGroupsPacketStatRequest.h
	include/alibabacloud/linkwan/model/ListNodeGroupsPacketStatResult.h
	include/alibabacloud/linkwan/model/ListNodeTransferPacketPathsRequest.h
	include/alibabacloud/linkwan/model/ListNodeTransferPacketPathsResult.h
	include/alibabacloud/linkwan/model/ListNodeTransferPacketsRequest.h
	include/alibabacloud/linkwan/model/ListNodeTransferPacketsResult.h
	include/alibabacloud/linkwan/model/ListNodeTupleOrdersRequest.h
	include/alibabacloud/linkwan/model/ListNodeTupleOrdersResult.h
	include/alibabacloud/linkwan/model/ListNodesByNodeGroupIdRequest.h
	include/alibabacloud/linkwan/model/ListNodesByNodeGroupIdResult.h
	include/alibabacloud/linkwan/model/ListNodesByOwnedJoinPermissionIdRequest.h
	include/alibabacloud/linkwan/model/ListNodesByOwnedJoinPermissionIdResult.h
	include/alibabacloud/linkwan/model/ListNotificationsRequest.h
	include/alibabacloud/linkwan/model/ListNotificationsResult.h
	include/alibabacloud/linkwan/model/ListOwnedJoinPermissionsRequest.h
	include/alibabacloud/linkwan/model/ListOwnedJoinPermissionsResult.h
	include/alibabacloud/linkwan/model/ListRentedJoinPermissionsRequest.h
	include/alibabacloud/linkwan/model/ListRentedJoinPermissionsResult.h
	include/alibabacloud/linkwan/model/ListTransferPacketRequest.h
	include/alibabacloud/linkwan/model/ListTransferPacketResult.h
	include/alibabacloud/linkwan/model/RejectJoinPermissionAuthOrderRequest.h
	include/alibabacloud/linkwan/model/RejectJoinPermissionAuthOrderResult.h
	include/alibabacloud/linkwan/model/RemoveNodeFromGroupRequest.h
	include/alibabacloud/linkwan/model/RemoveNodeFromGroupResult.h
	include/alibabacloud/linkwan/model/ReturnJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/ReturnJoinPermissionResult.h
	include/alibabacloud/linkwan/model/SendUnicastCommandRequest.h
	include/alibabacloud/linkwan/model/SendUnicastCommandResult.h
	include/alibabacloud/linkwan/model/SubmitGatewayLocalConfigAddingTaskRequest.h
	include/alibabacloud/linkwan/model/SubmitGatewayLocalConfigAddingTaskResult.h
	include/alibabacloud/linkwan/model/SubmitGatewayLocalConfigDeletingTaskRequest.h
	include/alibabacloud/linkwan/model/SubmitGatewayLocalConfigDeletingTaskResult.h
	include/alibabacloud/linkwan/model/SubmitGatewayTupleOrderRequest.h
	include/alibabacloud/linkwan/model/SubmitGatewayTupleOrderResult.h
	include/alibabacloud/linkwan/model/SubmitJoinPermissionAuthOrderRequest.h
	include/alibabacloud/linkwan/model/SubmitJoinPermissionAuthOrderResult.h
	include/alibabacloud/linkwan/model/SubmitKpmEncryptedNodeTupleOrderRequest.h
	include/alibabacloud/linkwan/model/SubmitKpmEncryptedNodeTupleOrderResult.h
	include/alibabacloud/linkwan/model/SubmitNodeLocalConfigAddingTaskRequest.h
	include/alibabacloud/linkwan/model/SubmitNodeLocalConfigAddingTaskResult.h
	include/alibabacloud/linkwan/model/SubmitNodeLocalConfigDeletingTaskRequest.h
	include/alibabacloud/linkwan/model/SubmitNodeLocalConfigDeletingTaskResult.h
	include/alibabacloud/linkwan/model/SubmitNodeTupleOrderRequest.h
	include/alibabacloud/linkwan/model/SubmitNodeTupleOrderResult.h
	include/alibabacloud/linkwan/model/UnbindJoinPermissionFromNodeGroupRequest.h
	include/alibabacloud/linkwan/model/UnbindJoinPermissionFromNodeGroupResult.h
	include/alibabacloud/linkwan/model/UpdateDataDispatchConfigRequest.h
	include/alibabacloud/linkwan/model/UpdateDataDispatchConfigResult.h
	include/alibabacloud/linkwan/model/UpdateDataDispatchEnablingStateRequest.h
	include/alibabacloud/linkwan/model/UpdateDataDispatchEnablingStateResult.h
	include/alibabacloud/linkwan/model/UpdateGatewayRequest.h
	include/alibabacloud/linkwan/model/UpdateGatewayResult.h
	include/alibabacloud/linkwan/model/UpdateGatewayEnablingStateRequest.h
	include/alibabacloud/linkwan/model/UpdateGatewayEnablingStateResult.h
	include/alibabacloud/linkwan/model/UpdateGatewaySshCtrlRequest.h
	include/alibabacloud/linkwan/model/UpdateGatewaySshCtrlResult.h
	include/alibabacloud/linkwan/model/UpdateNodeEnablingStateRequest.h
	include/alibabacloud/linkwan/model/UpdateNodeEnablingStateResult.h
	include/alibabacloud/linkwan/model/UpdateNodeGroupRequest.h
	include/alibabacloud/linkwan/model/UpdateNodeGroupResult.h
	include/alibabacloud/linkwan/model/UpdateNotificationsHandleStateRequest.h
	include/alibabacloud/linkwan/model/UpdateNotificationsHandleStateResult.h
	include/alibabacloud/linkwan/model/UpdateOwnedLocalJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/UpdateOwnedLocalJoinPermissionResult.h
	include/alibabacloud/linkwan/model/UpdateOwnedLocalJoinPermissionEnablingStateRequest.h
	include/alibabacloud/linkwan/model/UpdateOwnedLocalJoinPermissionEnablingStateResult.h
	include/alibabacloud/linkwan/model/UpdateRoamingJoinPermissionRequest.h
	include/alibabacloud/linkwan/model/UpdateRoamingJoinPermissionResult.h
	include/alibabacloud/linkwan/model/UpdateRoamingJoinPermissionEnablingStateRequest.h
	include/alibabacloud/linkwan/model/UpdateRoamingJoinPermissionEnablingStateResult.h
	include/alibabacloud/linkwan/model/UpdateUserIsolationStateRequest.h
	include/alibabacloud/linkwan/model/UpdateUserIsolationStateResult.h )

set(linkwan_src 
	src/LinkWANClient.cc
	src/model/AcceptJoinPermissionAuthOrderRequest.cc
	src/model/AcceptJoinPermissionAuthOrderResult.cc
	src/model/AddNodeToGroupRequest.cc
	src/model/AddNodeToGroupResult.cc
	src/model/ApplyRoamingJoinPermissionRequest.cc
	src/model/ApplyRoamingJoinPermissionResult.cc
	src/model/BindJoinPermissionToNodeGroupRequest.cc
	src/model/BindJoinPermissionToNodeGroupResult.cc
	src/model/CancelJoinPermissionAuthOrderRequest.cc
	src/model/CancelJoinPermissionAuthOrderResult.cc
	src/model/CheckCloudProductOpenStatusRequest.cc
	src/model/CheckCloudProductOpenStatusResult.cc
	src/model/CheckUserChargeStatusRequest.cc
	src/model/CheckUserChargeStatusResult.cc
	src/model/CountGatewayTupleOrdersRequest.cc
	src/model/CountGatewayTupleOrdersResult.cc
	src/model/CountGatewaysRequest.cc
	src/model/CountGatewaysResult.cc
	src/model/CountNodeGroupsRequest.cc
	src/model/CountNodeGroupsResult.cc
	src/model/CountNodeTupleOrdersRequest.cc
	src/model/CountNodeTupleOrdersResult.cc
	src/model/CountNodesByNodeGroupIdRequest.cc
	src/model/CountNodesByNodeGroupIdResult.cc
	src/model/CountNodesByOwnedJoinPermissionIdRequest.cc
	src/model/CountNodesByOwnedJoinPermissionIdResult.cc
	src/model/CountNotificationsRequest.cc
	src/model/CountNotificationsResult.cc
	src/model/CountOwnedJoinPermissionsRequest.cc
	src/model/CountOwnedJoinPermissionsResult.cc
	src/model/CountRentedJoinPermissionsRequest.cc
	src/model/CountRentedJoinPermissionsResult.cc
	src/model/CreateCustomLocalJoinPermissionRequest.cc
	src/model/CreateCustomLocalJoinPermissionResult.cc
	src/model/CreateGatewayRequest.cc
	src/model/CreateGatewayResult.cc
	src/model/CreateLocalJoinPermissionRequest.cc
	src/model/CreateLocalJoinPermissionResult.cc
	src/model/CreateNodeGroupRequest.cc
	src/model/CreateNodeGroupResult.cc
	src/model/DeleteGatewayRequest.cc
	src/model/DeleteGatewayResult.cc
	src/model/DeleteLocalJoinPermissionRequest.cc
	src/model/DeleteLocalJoinPermissionResult.cc
	src/model/DeleteNodeGroupRequest.cc
	src/model/DeleteNodeGroupResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/GetFreqBandPlanGroupRequest.cc
	src/model/GetFreqBandPlanGroupResult.cc
	src/model/GetGatewayRequest.cc
	src/model/GetGatewayResult.cc
	src/model/GetGatewayPacketStatRequest.cc
	src/model/GetGatewayPacketStatResult.cc
	src/model/GetGatewayStatusStatRequest.cc
	src/model/GetGatewayStatusStatResult.cc
	src/model/GetGatewayTransferPacketsDownloadUrlRequest.cc
	src/model/GetGatewayTransferPacketsDownloadUrlResult.cc
	src/model/GetGatewayTupleOrderRequest.cc
	src/model/GetGatewayTupleOrderResult.cc
	src/model/GetGatewayTuplesDownloadUrlRequest.cc
	src/model/GetGatewayTuplesDownloadUrlResult.cc
	src/model/GetJoinPermissionAuthOrderRequest.cc
	src/model/GetJoinPermissionAuthOrderResult.cc
	src/model/GetLocalConfigSyncTaskRequest.cc
	src/model/GetLocalConfigSyncTaskResult.cc
	src/model/GetNodeRequest.cc
	src/model/GetNodeResult.cc
	src/model/GetNodeGroupRequest.cc
	src/model/GetNodeGroupResult.cc
	src/model/GetNodeGroupTransferPacketsDownloadUrlRequest.cc
	src/model/GetNodeGroupTransferPacketsDownloadUrlResult.cc
	src/model/GetNodeLocalConfigRequest.cc
	src/model/GetNodeLocalConfigResult.cc
	src/model/GetNodeTransferPacketRequest.cc
	src/model/GetNodeTransferPacketResult.cc
	src/model/GetNodeTransferPacketsDownloadUrlRequest.cc
	src/model/GetNodeTransferPacketsDownloadUrlResult.cc
	src/model/GetNodeTupleOrderRequest.cc
	src/model/GetNodeTupleOrderResult.cc
	src/model/GetNodeTuplesDownloadUrlRequest.cc
	src/model/GetNodeTuplesDownloadUrlResult.cc
	src/model/GetNotificationRequest.cc
	src/model/GetNotificationResult.cc
	src/model/GetOwnedJoinPermissionRequest.cc
	src/model/GetOwnedJoinPermissionResult.cc
	src/model/GetRentedJoinPermissionRequest.cc
	src/model/GetRentedJoinPermissionResult.cc
	src/model/GetUserLicenseRequest.cc
	src/model/GetUserLicenseResult.cc
	src/model/GetUserNetProfileDescriptionRequest.cc
	src/model/GetUserNetProfileDescriptionResult.cc
	src/model/ListActivatedFeaturesRequest.cc
	src/model/ListActivatedFeaturesResult.cc
	src/model/ListActiveGatewaysRequest.cc
	src/model/ListActiveGatewaysResult.cc
	src/model/ListFreqBandPlanGroupsRequest.cc
	src/model/ListFreqBandPlanGroupsResult.cc
	src/model/ListGatewayLocalConfigsRequest.cc
	src/model/ListGatewayLocalConfigsResult.cc
	src/model/ListGatewayOnlineRecordsRequest.cc
	src/model/ListGatewayOnlineRecordsResult.cc
	src/model/ListGatewayTransferFlowStatsRequest.cc
	src/model/ListGatewayTransferFlowStatsResult.cc
	src/model/ListGatewayTransferPacketsRequest.cc
	src/model/ListGatewayTransferPacketsResult.cc
	src/model/ListGatewayTupleOrdersRequest.cc
	src/model/ListGatewayTupleOrdersResult.cc
	src/model/ListGatewaysRequest.cc
	src/model/ListGatewaysResult.cc
	src/model/ListGatewaysGisInfoRequest.cc
	src/model/ListGatewaysGisInfoResult.cc
	src/model/ListGatewaysPacketStatRequest.cc
	src/model/ListGatewaysPacketStatResult.cc
	src/model/ListNodeGroupTransferFlowStatsRequest.cc
	src/model/ListNodeGroupTransferFlowStatsResult.cc
	src/model/ListNodeGroupTransferPacketsRequest.cc
	src/model/ListNodeGroupTransferPacketsResult.cc
	src/model/ListNodeGroupsRequest.cc
	src/model/ListNodeGroupsResult.cc
	src/model/ListNodeGroupsPacketStatRequest.cc
	src/model/ListNodeGroupsPacketStatResult.cc
	src/model/ListNodeTransferPacketPathsRequest.cc
	src/model/ListNodeTransferPacketPathsResult.cc
	src/model/ListNodeTransferPacketsRequest.cc
	src/model/ListNodeTransferPacketsResult.cc
	src/model/ListNodeTupleOrdersRequest.cc
	src/model/ListNodeTupleOrdersResult.cc
	src/model/ListNodesByNodeGroupIdRequest.cc
	src/model/ListNodesByNodeGroupIdResult.cc
	src/model/ListNodesByOwnedJoinPermissionIdRequest.cc
	src/model/ListNodesByOwnedJoinPermissionIdResult.cc
	src/model/ListNotificationsRequest.cc
	src/model/ListNotificationsResult.cc
	src/model/ListOwnedJoinPermissionsRequest.cc
	src/model/ListOwnedJoinPermissionsResult.cc
	src/model/ListRentedJoinPermissionsRequest.cc
	src/model/ListRentedJoinPermissionsResult.cc
	src/model/ListTransferPacketRequest.cc
	src/model/ListTransferPacketResult.cc
	src/model/RejectJoinPermissionAuthOrderRequest.cc
	src/model/RejectJoinPermissionAuthOrderResult.cc
	src/model/RemoveNodeFromGroupRequest.cc
	src/model/RemoveNodeFromGroupResult.cc
	src/model/ReturnJoinPermissionRequest.cc
	src/model/ReturnJoinPermissionResult.cc
	src/model/SendUnicastCommandRequest.cc
	src/model/SendUnicastCommandResult.cc
	src/model/SubmitGatewayLocalConfigAddingTaskRequest.cc
	src/model/SubmitGatewayLocalConfigAddingTaskResult.cc
	src/model/SubmitGatewayLocalConfigDeletingTaskRequest.cc
	src/model/SubmitGatewayLocalConfigDeletingTaskResult.cc
	src/model/SubmitGatewayTupleOrderRequest.cc
	src/model/SubmitGatewayTupleOrderResult.cc
	src/model/SubmitJoinPermissionAuthOrderRequest.cc
	src/model/SubmitJoinPermissionAuthOrderResult.cc
	src/model/SubmitKpmEncryptedNodeTupleOrderRequest.cc
	src/model/SubmitKpmEncryptedNodeTupleOrderResult.cc
	src/model/SubmitNodeLocalConfigAddingTaskRequest.cc
	src/model/SubmitNodeLocalConfigAddingTaskResult.cc
	src/model/SubmitNodeLocalConfigDeletingTaskRequest.cc
	src/model/SubmitNodeLocalConfigDeletingTaskResult.cc
	src/model/SubmitNodeTupleOrderRequest.cc
	src/model/SubmitNodeTupleOrderResult.cc
	src/model/UnbindJoinPermissionFromNodeGroupRequest.cc
	src/model/UnbindJoinPermissionFromNodeGroupResult.cc
	src/model/UpdateDataDispatchConfigRequest.cc
	src/model/UpdateDataDispatchConfigResult.cc
	src/model/UpdateDataDispatchEnablingStateRequest.cc
	src/model/UpdateDataDispatchEnablingStateResult.cc
	src/model/UpdateGatewayRequest.cc
	src/model/UpdateGatewayResult.cc
	src/model/UpdateGatewayEnablingStateRequest.cc
	src/model/UpdateGatewayEnablingStateResult.cc
	src/model/UpdateGatewaySshCtrlRequest.cc
	src/model/UpdateGatewaySshCtrlResult.cc
	src/model/UpdateNodeEnablingStateRequest.cc
	src/model/UpdateNodeEnablingStateResult.cc
	src/model/UpdateNodeGroupRequest.cc
	src/model/UpdateNodeGroupResult.cc
	src/model/UpdateNotificationsHandleStateRequest.cc
	src/model/UpdateNotificationsHandleStateResult.cc
	src/model/UpdateOwnedLocalJoinPermissionRequest.cc
	src/model/UpdateOwnedLocalJoinPermissionResult.cc
	src/model/UpdateOwnedLocalJoinPermissionEnablingStateRequest.cc
	src/model/UpdateOwnedLocalJoinPermissionEnablingStateResult.cc
	src/model/UpdateRoamingJoinPermissionRequest.cc
	src/model/UpdateRoamingJoinPermissionResult.cc
	src/model/UpdateRoamingJoinPermissionEnablingStateRequest.cc
	src/model/UpdateRoamingJoinPermissionEnablingStateResult.cc
	src/model/UpdateUserIsolationStateRequest.cc
	src/model/UpdateUserIsolationStateResult.cc )

add_library(linkwan ${LIB_TYPE}
	${linkwan_public_header}
	${linkwan_public_header_model}
	${linkwan_src})

set_target_properties(linkwan
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}linkwan
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(linkwan
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LINKWAN_LIBRARY)
endif()

target_include_directories(linkwan
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(linkwan
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(linkwan
		jsoncpp)
	target_include_directories(linkwan
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(linkwan
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(linkwan
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(linkwan
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(linkwan
		jsoncpp)
endif()

install(FILES ${linkwan_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/linkwan)
install(FILES ${linkwan_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/linkwan/model)
install(TARGETS linkwan
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)