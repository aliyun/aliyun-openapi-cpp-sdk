/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_LINKWAN_LINKWANCLIENT_H_
#define ALIBABACLOUD_LINKWAN_LINKWANCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LinkWANExport.h"
#include "model/AcceptJoinPermissionAuthOrderRequest.h"
#include "model/AcceptJoinPermissionAuthOrderResult.h"
#include "model/AddNodeToGroupRequest.h"
#include "model/AddNodeToGroupResult.h"
#include "model/ApplyRoamingJoinPermissionRequest.h"
#include "model/ApplyRoamingJoinPermissionResult.h"
#include "model/BindJoinPermissionToNodeGroupRequest.h"
#include "model/BindJoinPermissionToNodeGroupResult.h"
#include "model/CancelJoinPermissionAuthOrderRequest.h"
#include "model/CancelJoinPermissionAuthOrderResult.h"
#include "model/CheckCloudProductOpenStatusRequest.h"
#include "model/CheckCloudProductOpenStatusResult.h"
#include "model/CheckUserChargeStatusRequest.h"
#include "model/CheckUserChargeStatusResult.h"
#include "model/CountGatewayTupleOrdersRequest.h"
#include "model/CountGatewayTupleOrdersResult.h"
#include "model/CountGatewaysRequest.h"
#include "model/CountGatewaysResult.h"
#include "model/CountNodeGroupsRequest.h"
#include "model/CountNodeGroupsResult.h"
#include "model/CountNodeTupleOrdersRequest.h"
#include "model/CountNodeTupleOrdersResult.h"
#include "model/CountNodesByNodeGroupIdRequest.h"
#include "model/CountNodesByNodeGroupIdResult.h"
#include "model/CountNodesByOwnedJoinPermissionIdRequest.h"
#include "model/CountNodesByOwnedJoinPermissionIdResult.h"
#include "model/CountNotificationsRequest.h"
#include "model/CountNotificationsResult.h"
#include "model/CountOwnedJoinPermissionsRequest.h"
#include "model/CountOwnedJoinPermissionsResult.h"
#include "model/CountRentedJoinPermissionsRequest.h"
#include "model/CountRentedJoinPermissionsResult.h"
#include "model/CreateCustomLocalJoinPermissionRequest.h"
#include "model/CreateCustomLocalJoinPermissionResult.h"
#include "model/CreateGatewayRequest.h"
#include "model/CreateGatewayResult.h"
#include "model/CreateLocalJoinPermissionRequest.h"
#include "model/CreateLocalJoinPermissionResult.h"
#include "model/CreateNodeGroupRequest.h"
#include "model/CreateNodeGroupResult.h"
#include "model/DeleteGatewayRequest.h"
#include "model/DeleteGatewayResult.h"
#include "model/DeleteLocalJoinPermissionRequest.h"
#include "model/DeleteLocalJoinPermissionResult.h"
#include "model/DeleteNodeGroupRequest.h"
#include "model/DeleteNodeGroupResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetFreqBandPlanGroupRequest.h"
#include "model/GetFreqBandPlanGroupResult.h"
#include "model/GetGatewayRequest.h"
#include "model/GetGatewayResult.h"
#include "model/GetGatewayPacketStatRequest.h"
#include "model/GetGatewayPacketStatResult.h"
#include "model/GetGatewayStatusStatRequest.h"
#include "model/GetGatewayStatusStatResult.h"
#include "model/GetGatewayTransferPacketsDownloadUrlRequest.h"
#include "model/GetGatewayTransferPacketsDownloadUrlResult.h"
#include "model/GetGatewayTupleOrderRequest.h"
#include "model/GetGatewayTupleOrderResult.h"
#include "model/GetGatewayTuplesDownloadUrlRequest.h"
#include "model/GetGatewayTuplesDownloadUrlResult.h"
#include "model/GetJoinPermissionAuthOrderRequest.h"
#include "model/GetJoinPermissionAuthOrderResult.h"
#include "model/GetLocalConfigSyncTaskRequest.h"
#include "model/GetLocalConfigSyncTaskResult.h"
#include "model/GetNodeRequest.h"
#include "model/GetNodeResult.h"
#include "model/GetNodeGroupRequest.h"
#include "model/GetNodeGroupResult.h"
#include "model/GetNodeGroupTransferPacketsDownloadUrlRequest.h"
#include "model/GetNodeGroupTransferPacketsDownloadUrlResult.h"
#include "model/GetNodeLocalConfigRequest.h"
#include "model/GetNodeLocalConfigResult.h"
#include "model/GetNodeTransferPacketRequest.h"
#include "model/GetNodeTransferPacketResult.h"
#include "model/GetNodeTransferPacketsDownloadUrlRequest.h"
#include "model/GetNodeTransferPacketsDownloadUrlResult.h"
#include "model/GetNodeTupleOrderRequest.h"
#include "model/GetNodeTupleOrderResult.h"
#include "model/GetNodeTuplesDownloadUrlRequest.h"
#include "model/GetNodeTuplesDownloadUrlResult.h"
#include "model/GetNotificationRequest.h"
#include "model/GetNotificationResult.h"
#include "model/GetOwnedJoinPermissionRequest.h"
#include "model/GetOwnedJoinPermissionResult.h"
#include "model/GetRentedJoinPermissionRequest.h"
#include "model/GetRentedJoinPermissionResult.h"
#include "model/GetUserLicenseRequest.h"
#include "model/GetUserLicenseResult.h"
#include "model/GetUserNetProfileDescriptionRequest.h"
#include "model/GetUserNetProfileDescriptionResult.h"
#include "model/ListActivatedFeaturesRequest.h"
#include "model/ListActivatedFeaturesResult.h"
#include "model/ListActiveGatewaysRequest.h"
#include "model/ListActiveGatewaysResult.h"
#include "model/ListFreqBandPlanGroupsRequest.h"
#include "model/ListFreqBandPlanGroupsResult.h"
#include "model/ListGatewayLocalConfigsRequest.h"
#include "model/ListGatewayLocalConfigsResult.h"
#include "model/ListGatewayOnlineRecordsRequest.h"
#include "model/ListGatewayOnlineRecordsResult.h"
#include "model/ListGatewayTransferFlowStatsRequest.h"
#include "model/ListGatewayTransferFlowStatsResult.h"
#include "model/ListGatewayTransferPacketsRequest.h"
#include "model/ListGatewayTransferPacketsResult.h"
#include "model/ListGatewayTupleOrdersRequest.h"
#include "model/ListGatewayTupleOrdersResult.h"
#include "model/ListGatewaysRequest.h"
#include "model/ListGatewaysResult.h"
#include "model/ListGatewaysGisInfoRequest.h"
#include "model/ListGatewaysGisInfoResult.h"
#include "model/ListGatewaysPacketStatRequest.h"
#include "model/ListGatewaysPacketStatResult.h"
#include "model/ListNodeGroupTransferFlowStatsRequest.h"
#include "model/ListNodeGroupTransferFlowStatsResult.h"
#include "model/ListNodeGroupTransferPacketsRequest.h"
#include "model/ListNodeGroupTransferPacketsResult.h"
#include "model/ListNodeGroupsRequest.h"
#include "model/ListNodeGroupsResult.h"
#include "model/ListNodeGroupsPacketStatRequest.h"
#include "model/ListNodeGroupsPacketStatResult.h"
#include "model/ListNodeTransferPacketPathsRequest.h"
#include "model/ListNodeTransferPacketPathsResult.h"
#include "model/ListNodeTransferPacketsRequest.h"
#include "model/ListNodeTransferPacketsResult.h"
#include "model/ListNodeTupleOrdersRequest.h"
#include "model/ListNodeTupleOrdersResult.h"
#include "model/ListNodesByNodeGroupIdRequest.h"
#include "model/ListNodesByNodeGroupIdResult.h"
#include "model/ListNodesByOwnedJoinPermissionIdRequest.h"
#include "model/ListNodesByOwnedJoinPermissionIdResult.h"
#include "model/ListNotificationsRequest.h"
#include "model/ListNotificationsResult.h"
#include "model/ListOwnedJoinPermissionsRequest.h"
#include "model/ListOwnedJoinPermissionsResult.h"
#include "model/ListRentedJoinPermissionsRequest.h"
#include "model/ListRentedJoinPermissionsResult.h"
#include "model/ListTransferPacketRequest.h"
#include "model/ListTransferPacketResult.h"
#include "model/RejectJoinPermissionAuthOrderRequest.h"
#include "model/RejectJoinPermissionAuthOrderResult.h"
#include "model/RemoveNodeFromGroupRequest.h"
#include "model/RemoveNodeFromGroupResult.h"
#include "model/ReturnJoinPermissionRequest.h"
#include "model/ReturnJoinPermissionResult.h"
#include "model/SendUnicastCommandRequest.h"
#include "model/SendUnicastCommandResult.h"
#include "model/SubmitGatewayLocalConfigAddingTaskRequest.h"
#include "model/SubmitGatewayLocalConfigAddingTaskResult.h"
#include "model/SubmitGatewayLocalConfigDeletingTaskRequest.h"
#include "model/SubmitGatewayLocalConfigDeletingTaskResult.h"
#include "model/SubmitGatewayTupleOrderRequest.h"
#include "model/SubmitGatewayTupleOrderResult.h"
#include "model/SubmitJoinPermissionAuthOrderRequest.h"
#include "model/SubmitJoinPermissionAuthOrderResult.h"
#include "model/SubmitKpmEncryptedNodeTupleOrderRequest.h"
#include "model/SubmitKpmEncryptedNodeTupleOrderResult.h"
#include "model/SubmitNodeLocalConfigAddingTaskRequest.h"
#include "model/SubmitNodeLocalConfigAddingTaskResult.h"
#include "model/SubmitNodeLocalConfigDeletingTaskRequest.h"
#include "model/SubmitNodeLocalConfigDeletingTaskResult.h"
#include "model/SubmitNodeTupleOrderRequest.h"
#include "model/SubmitNodeTupleOrderResult.h"
#include "model/UnbindJoinPermissionFromNodeGroupRequest.h"
#include "model/UnbindJoinPermissionFromNodeGroupResult.h"
#include "model/UpdateDataDispatchConfigRequest.h"
#include "model/UpdateDataDispatchConfigResult.h"
#include "model/UpdateDataDispatchEnablingStateRequest.h"
#include "model/UpdateDataDispatchEnablingStateResult.h"
#include "model/UpdateGatewayRequest.h"
#include "model/UpdateGatewayResult.h"
#include "model/UpdateGatewayEnablingStateRequest.h"
#include "model/UpdateGatewayEnablingStateResult.h"
#include "model/UpdateGatewaySshCtrlRequest.h"
#include "model/UpdateGatewaySshCtrlResult.h"
#include "model/UpdateNodeEnablingStateRequest.h"
#include "model/UpdateNodeEnablingStateResult.h"
#include "model/UpdateNodeGroupRequest.h"
#include "model/UpdateNodeGroupResult.h"
#include "model/UpdateNotificationsHandleStateRequest.h"
#include "model/UpdateNotificationsHandleStateResult.h"
#include "model/UpdateOwnedLocalJoinPermissionRequest.h"
#include "model/UpdateOwnedLocalJoinPermissionResult.h"
#include "model/UpdateOwnedLocalJoinPermissionEnablingStateRequest.h"
#include "model/UpdateOwnedLocalJoinPermissionEnablingStateResult.h"
#include "model/UpdateRoamingJoinPermissionRequest.h"
#include "model/UpdateRoamingJoinPermissionResult.h"
#include "model/UpdateRoamingJoinPermissionEnablingStateRequest.h"
#include "model/UpdateRoamingJoinPermissionEnablingStateResult.h"
#include "model/UpdateUserIsolationStateRequest.h"
#include "model/UpdateUserIsolationStateResult.h"


namespace AlibabaCloud
{
	namespace LinkWAN
	{
		class ALIBABACLOUD_LINKWAN_EXPORT LinkWANClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptJoinPermissionAuthOrderResult> AcceptJoinPermissionAuthOrderOutcome;
			typedef std::future<AcceptJoinPermissionAuthOrderOutcome> AcceptJoinPermissionAuthOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::AcceptJoinPermissionAuthOrderRequest&, const AcceptJoinPermissionAuthOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptJoinPermissionAuthOrderAsyncHandler;
			typedef Outcome<Error, Model::AddNodeToGroupResult> AddNodeToGroupOutcome;
			typedef std::future<AddNodeToGroupOutcome> AddNodeToGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::AddNodeToGroupRequest&, const AddNodeToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNodeToGroupAsyncHandler;
			typedef Outcome<Error, Model::ApplyRoamingJoinPermissionResult> ApplyRoamingJoinPermissionOutcome;
			typedef std::future<ApplyRoamingJoinPermissionOutcome> ApplyRoamingJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ApplyRoamingJoinPermissionRequest&, const ApplyRoamingJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyRoamingJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::BindJoinPermissionToNodeGroupResult> BindJoinPermissionToNodeGroupOutcome;
			typedef std::future<BindJoinPermissionToNodeGroupOutcome> BindJoinPermissionToNodeGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::BindJoinPermissionToNodeGroupRequest&, const BindJoinPermissionToNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindJoinPermissionToNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::CancelJoinPermissionAuthOrderResult> CancelJoinPermissionAuthOrderOutcome;
			typedef std::future<CancelJoinPermissionAuthOrderOutcome> CancelJoinPermissionAuthOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CancelJoinPermissionAuthOrderRequest&, const CancelJoinPermissionAuthOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJoinPermissionAuthOrderAsyncHandler;
			typedef Outcome<Error, Model::CheckCloudProductOpenStatusResult> CheckCloudProductOpenStatusOutcome;
			typedef std::future<CheckCloudProductOpenStatusOutcome> CheckCloudProductOpenStatusOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CheckCloudProductOpenStatusRequest&, const CheckCloudProductOpenStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCloudProductOpenStatusAsyncHandler;
			typedef Outcome<Error, Model::CheckUserChargeStatusResult> CheckUserChargeStatusOutcome;
			typedef std::future<CheckUserChargeStatusOutcome> CheckUserChargeStatusOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CheckUserChargeStatusRequest&, const CheckUserChargeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckUserChargeStatusAsyncHandler;
			typedef Outcome<Error, Model::CountGatewayTupleOrdersResult> CountGatewayTupleOrdersOutcome;
			typedef std::future<CountGatewayTupleOrdersOutcome> CountGatewayTupleOrdersOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountGatewayTupleOrdersRequest&, const CountGatewayTupleOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountGatewayTupleOrdersAsyncHandler;
			typedef Outcome<Error, Model::CountGatewaysResult> CountGatewaysOutcome;
			typedef std::future<CountGatewaysOutcome> CountGatewaysOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountGatewaysRequest&, const CountGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountGatewaysAsyncHandler;
			typedef Outcome<Error, Model::CountNodeGroupsResult> CountNodeGroupsOutcome;
			typedef std::future<CountNodeGroupsOutcome> CountNodeGroupsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountNodeGroupsRequest&, const CountNodeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountNodeGroupsAsyncHandler;
			typedef Outcome<Error, Model::CountNodeTupleOrdersResult> CountNodeTupleOrdersOutcome;
			typedef std::future<CountNodeTupleOrdersOutcome> CountNodeTupleOrdersOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountNodeTupleOrdersRequest&, const CountNodeTupleOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountNodeTupleOrdersAsyncHandler;
			typedef Outcome<Error, Model::CountNodesByNodeGroupIdResult> CountNodesByNodeGroupIdOutcome;
			typedef std::future<CountNodesByNodeGroupIdOutcome> CountNodesByNodeGroupIdOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountNodesByNodeGroupIdRequest&, const CountNodesByNodeGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountNodesByNodeGroupIdAsyncHandler;
			typedef Outcome<Error, Model::CountNodesByOwnedJoinPermissionIdResult> CountNodesByOwnedJoinPermissionIdOutcome;
			typedef std::future<CountNodesByOwnedJoinPermissionIdOutcome> CountNodesByOwnedJoinPermissionIdOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountNodesByOwnedJoinPermissionIdRequest&, const CountNodesByOwnedJoinPermissionIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountNodesByOwnedJoinPermissionIdAsyncHandler;
			typedef Outcome<Error, Model::CountNotificationsResult> CountNotificationsOutcome;
			typedef std::future<CountNotificationsOutcome> CountNotificationsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountNotificationsRequest&, const CountNotificationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountNotificationsAsyncHandler;
			typedef Outcome<Error, Model::CountOwnedJoinPermissionsResult> CountOwnedJoinPermissionsOutcome;
			typedef std::future<CountOwnedJoinPermissionsOutcome> CountOwnedJoinPermissionsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountOwnedJoinPermissionsRequest&, const CountOwnedJoinPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountOwnedJoinPermissionsAsyncHandler;
			typedef Outcome<Error, Model::CountRentedJoinPermissionsResult> CountRentedJoinPermissionsOutcome;
			typedef std::future<CountRentedJoinPermissionsOutcome> CountRentedJoinPermissionsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CountRentedJoinPermissionsRequest&, const CountRentedJoinPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountRentedJoinPermissionsAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomLocalJoinPermissionResult> CreateCustomLocalJoinPermissionOutcome;
			typedef std::future<CreateCustomLocalJoinPermissionOutcome> CreateCustomLocalJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CreateCustomLocalJoinPermissionRequest&, const CreateCustomLocalJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomLocalJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayResult> CreateGatewayOutcome;
			typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CreateGatewayRequest&, const CreateGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateLocalJoinPermissionResult> CreateLocalJoinPermissionOutcome;
			typedef std::future<CreateLocalJoinPermissionOutcome> CreateLocalJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CreateLocalJoinPermissionRequest&, const CreateLocalJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocalJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::CreateNodeGroupResult> CreateNodeGroupOutcome;
			typedef std::future<CreateNodeGroupOutcome> CreateNodeGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::CreateNodeGroupRequest&, const CreateNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayResult> DeleteGatewayOutcome;
			typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::DeleteGatewayRequest&, const DeleteGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteLocalJoinPermissionResult> DeleteLocalJoinPermissionOutcome;
			typedef std::future<DeleteLocalJoinPermissionOutcome> DeleteLocalJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::DeleteLocalJoinPermissionRequest&, const DeleteLocalJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLocalJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::DeleteNodeGroupResult> DeleteNodeGroupOutcome;
			typedef std::future<DeleteNodeGroupOutcome> DeleteNodeGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::DeleteNodeGroupRequest&, const DeleteNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetFreqBandPlanGroupResult> GetFreqBandPlanGroupOutcome;
			typedef std::future<GetFreqBandPlanGroupOutcome> GetFreqBandPlanGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetFreqBandPlanGroupRequest&, const GetFreqBandPlanGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFreqBandPlanGroupAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayResult> GetGatewayOutcome;
			typedef std::future<GetGatewayOutcome> GetGatewayOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetGatewayRequest&, const GetGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayPacketStatResult> GetGatewayPacketStatOutcome;
			typedef std::future<GetGatewayPacketStatOutcome> GetGatewayPacketStatOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetGatewayPacketStatRequest&, const GetGatewayPacketStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayPacketStatAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayStatusStatResult> GetGatewayStatusStatOutcome;
			typedef std::future<GetGatewayStatusStatOutcome> GetGatewayStatusStatOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetGatewayStatusStatRequest&, const GetGatewayStatusStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayStatusStatAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayTransferPacketsDownloadUrlResult> GetGatewayTransferPacketsDownloadUrlOutcome;
			typedef std::future<GetGatewayTransferPacketsDownloadUrlOutcome> GetGatewayTransferPacketsDownloadUrlOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetGatewayTransferPacketsDownloadUrlRequest&, const GetGatewayTransferPacketsDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayTransferPacketsDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayTupleOrderResult> GetGatewayTupleOrderOutcome;
			typedef std::future<GetGatewayTupleOrderOutcome> GetGatewayTupleOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetGatewayTupleOrderRequest&, const GetGatewayTupleOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayTupleOrderAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayTuplesDownloadUrlResult> GetGatewayTuplesDownloadUrlOutcome;
			typedef std::future<GetGatewayTuplesDownloadUrlOutcome> GetGatewayTuplesDownloadUrlOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetGatewayTuplesDownloadUrlRequest&, const GetGatewayTuplesDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayTuplesDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetJoinPermissionAuthOrderResult> GetJoinPermissionAuthOrderOutcome;
			typedef std::future<GetJoinPermissionAuthOrderOutcome> GetJoinPermissionAuthOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetJoinPermissionAuthOrderRequest&, const GetJoinPermissionAuthOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJoinPermissionAuthOrderAsyncHandler;
			typedef Outcome<Error, Model::GetLocalConfigSyncTaskResult> GetLocalConfigSyncTaskOutcome;
			typedef std::future<GetLocalConfigSyncTaskOutcome> GetLocalConfigSyncTaskOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetLocalConfigSyncTaskRequest&, const GetLocalConfigSyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLocalConfigSyncTaskAsyncHandler;
			typedef Outcome<Error, Model::GetNodeResult> GetNodeOutcome;
			typedef std::future<GetNodeOutcome> GetNodeOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeRequest&, const GetNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeAsyncHandler;
			typedef Outcome<Error, Model::GetNodeGroupResult> GetNodeGroupOutcome;
			typedef std::future<GetNodeGroupOutcome> GetNodeGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeGroupRequest&, const GetNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::GetNodeGroupTransferPacketsDownloadUrlResult> GetNodeGroupTransferPacketsDownloadUrlOutcome;
			typedef std::future<GetNodeGroupTransferPacketsDownloadUrlOutcome> GetNodeGroupTransferPacketsDownloadUrlOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeGroupTransferPacketsDownloadUrlRequest&, const GetNodeGroupTransferPacketsDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeGroupTransferPacketsDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetNodeLocalConfigResult> GetNodeLocalConfigOutcome;
			typedef std::future<GetNodeLocalConfigOutcome> GetNodeLocalConfigOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeLocalConfigRequest&, const GetNodeLocalConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeLocalConfigAsyncHandler;
			typedef Outcome<Error, Model::GetNodeTransferPacketResult> GetNodeTransferPacketOutcome;
			typedef std::future<GetNodeTransferPacketOutcome> GetNodeTransferPacketOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeTransferPacketRequest&, const GetNodeTransferPacketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeTransferPacketAsyncHandler;
			typedef Outcome<Error, Model::GetNodeTransferPacketsDownloadUrlResult> GetNodeTransferPacketsDownloadUrlOutcome;
			typedef std::future<GetNodeTransferPacketsDownloadUrlOutcome> GetNodeTransferPacketsDownloadUrlOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeTransferPacketsDownloadUrlRequest&, const GetNodeTransferPacketsDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeTransferPacketsDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetNodeTupleOrderResult> GetNodeTupleOrderOutcome;
			typedef std::future<GetNodeTupleOrderOutcome> GetNodeTupleOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeTupleOrderRequest&, const GetNodeTupleOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeTupleOrderAsyncHandler;
			typedef Outcome<Error, Model::GetNodeTuplesDownloadUrlResult> GetNodeTuplesDownloadUrlOutcome;
			typedef std::future<GetNodeTuplesDownloadUrlOutcome> GetNodeTuplesDownloadUrlOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNodeTuplesDownloadUrlRequest&, const GetNodeTuplesDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeTuplesDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetNotificationResult> GetNotificationOutcome;
			typedef std::future<GetNotificationOutcome> GetNotificationOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetNotificationRequest&, const GetNotificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNotificationAsyncHandler;
			typedef Outcome<Error, Model::GetOwnedJoinPermissionResult> GetOwnedJoinPermissionOutcome;
			typedef std::future<GetOwnedJoinPermissionOutcome> GetOwnedJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetOwnedJoinPermissionRequest&, const GetOwnedJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOwnedJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::GetRentedJoinPermissionResult> GetRentedJoinPermissionOutcome;
			typedef std::future<GetRentedJoinPermissionOutcome> GetRentedJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetRentedJoinPermissionRequest&, const GetRentedJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRentedJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::GetUserLicenseResult> GetUserLicenseOutcome;
			typedef std::future<GetUserLicenseOutcome> GetUserLicenseOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetUserLicenseRequest&, const GetUserLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserLicenseAsyncHandler;
			typedef Outcome<Error, Model::GetUserNetProfileDescriptionResult> GetUserNetProfileDescriptionOutcome;
			typedef std::future<GetUserNetProfileDescriptionOutcome> GetUserNetProfileDescriptionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::GetUserNetProfileDescriptionRequest&, const GetUserNetProfileDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserNetProfileDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ListActivatedFeaturesResult> ListActivatedFeaturesOutcome;
			typedef std::future<ListActivatedFeaturesOutcome> ListActivatedFeaturesOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListActivatedFeaturesRequest&, const ListActivatedFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActivatedFeaturesAsyncHandler;
			typedef Outcome<Error, Model::ListActiveGatewaysResult> ListActiveGatewaysOutcome;
			typedef std::future<ListActiveGatewaysOutcome> ListActiveGatewaysOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListActiveGatewaysRequest&, const ListActiveGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActiveGatewaysAsyncHandler;
			typedef Outcome<Error, Model::ListFreqBandPlanGroupsResult> ListFreqBandPlanGroupsOutcome;
			typedef std::future<ListFreqBandPlanGroupsOutcome> ListFreqBandPlanGroupsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListFreqBandPlanGroupsRequest&, const ListFreqBandPlanGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFreqBandPlanGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayLocalConfigsResult> ListGatewayLocalConfigsOutcome;
			typedef std::future<ListGatewayLocalConfigsOutcome> ListGatewayLocalConfigsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewayLocalConfigsRequest&, const ListGatewayLocalConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayLocalConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayOnlineRecordsResult> ListGatewayOnlineRecordsOutcome;
			typedef std::future<ListGatewayOnlineRecordsOutcome> ListGatewayOnlineRecordsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewayOnlineRecordsRequest&, const ListGatewayOnlineRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayOnlineRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayTransferFlowStatsResult> ListGatewayTransferFlowStatsOutcome;
			typedef std::future<ListGatewayTransferFlowStatsOutcome> ListGatewayTransferFlowStatsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewayTransferFlowStatsRequest&, const ListGatewayTransferFlowStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayTransferFlowStatsAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayTransferPacketsResult> ListGatewayTransferPacketsOutcome;
			typedef std::future<ListGatewayTransferPacketsOutcome> ListGatewayTransferPacketsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewayTransferPacketsRequest&, const ListGatewayTransferPacketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayTransferPacketsAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayTupleOrdersResult> ListGatewayTupleOrdersOutcome;
			typedef std::future<ListGatewayTupleOrdersOutcome> ListGatewayTupleOrdersOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewayTupleOrdersRequest&, const ListGatewayTupleOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayTupleOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListGatewaysResult> ListGatewaysOutcome;
			typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewaysRequest&, const ListGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewaysAsyncHandler;
			typedef Outcome<Error, Model::ListGatewaysGisInfoResult> ListGatewaysGisInfoOutcome;
			typedef std::future<ListGatewaysGisInfoOutcome> ListGatewaysGisInfoOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewaysGisInfoRequest&, const ListGatewaysGisInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewaysGisInfoAsyncHandler;
			typedef Outcome<Error, Model::ListGatewaysPacketStatResult> ListGatewaysPacketStatOutcome;
			typedef std::future<ListGatewaysPacketStatOutcome> ListGatewaysPacketStatOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListGatewaysPacketStatRequest&, const ListGatewaysPacketStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewaysPacketStatAsyncHandler;
			typedef Outcome<Error, Model::ListNodeGroupTransferFlowStatsResult> ListNodeGroupTransferFlowStatsOutcome;
			typedef std::future<ListNodeGroupTransferFlowStatsOutcome> ListNodeGroupTransferFlowStatsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeGroupTransferFlowStatsRequest&, const ListNodeGroupTransferFlowStatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeGroupTransferFlowStatsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeGroupTransferPacketsResult> ListNodeGroupTransferPacketsOutcome;
			typedef std::future<ListNodeGroupTransferPacketsOutcome> ListNodeGroupTransferPacketsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeGroupTransferPacketsRequest&, const ListNodeGroupTransferPacketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeGroupTransferPacketsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeGroupsResult> ListNodeGroupsOutcome;
			typedef std::future<ListNodeGroupsOutcome> ListNodeGroupsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeGroupsRequest&, const ListNodeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeGroupsPacketStatResult> ListNodeGroupsPacketStatOutcome;
			typedef std::future<ListNodeGroupsPacketStatOutcome> ListNodeGroupsPacketStatOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeGroupsPacketStatRequest&, const ListNodeGroupsPacketStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeGroupsPacketStatAsyncHandler;
			typedef Outcome<Error, Model::ListNodeTransferPacketPathsResult> ListNodeTransferPacketPathsOutcome;
			typedef std::future<ListNodeTransferPacketPathsOutcome> ListNodeTransferPacketPathsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeTransferPacketPathsRequest&, const ListNodeTransferPacketPathsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeTransferPacketPathsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeTransferPacketsResult> ListNodeTransferPacketsOutcome;
			typedef std::future<ListNodeTransferPacketsOutcome> ListNodeTransferPacketsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeTransferPacketsRequest&, const ListNodeTransferPacketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeTransferPacketsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeTupleOrdersResult> ListNodeTupleOrdersOutcome;
			typedef std::future<ListNodeTupleOrdersOutcome> ListNodeTupleOrdersOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodeTupleOrdersRequest&, const ListNodeTupleOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeTupleOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListNodesByNodeGroupIdResult> ListNodesByNodeGroupIdOutcome;
			typedef std::future<ListNodesByNodeGroupIdOutcome> ListNodesByNodeGroupIdOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodesByNodeGroupIdRequest&, const ListNodesByNodeGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesByNodeGroupIdAsyncHandler;
			typedef Outcome<Error, Model::ListNodesByOwnedJoinPermissionIdResult> ListNodesByOwnedJoinPermissionIdOutcome;
			typedef std::future<ListNodesByOwnedJoinPermissionIdOutcome> ListNodesByOwnedJoinPermissionIdOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNodesByOwnedJoinPermissionIdRequest&, const ListNodesByOwnedJoinPermissionIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesByOwnedJoinPermissionIdAsyncHandler;
			typedef Outcome<Error, Model::ListNotificationsResult> ListNotificationsOutcome;
			typedef std::future<ListNotificationsOutcome> ListNotificationsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListNotificationsRequest&, const ListNotificationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotificationsAsyncHandler;
			typedef Outcome<Error, Model::ListOwnedJoinPermissionsResult> ListOwnedJoinPermissionsOutcome;
			typedef std::future<ListOwnedJoinPermissionsOutcome> ListOwnedJoinPermissionsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListOwnedJoinPermissionsRequest&, const ListOwnedJoinPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOwnedJoinPermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListRentedJoinPermissionsResult> ListRentedJoinPermissionsOutcome;
			typedef std::future<ListRentedJoinPermissionsOutcome> ListRentedJoinPermissionsOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListRentedJoinPermissionsRequest&, const ListRentedJoinPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRentedJoinPermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListTransferPacketResult> ListTransferPacketOutcome;
			typedef std::future<ListTransferPacketOutcome> ListTransferPacketOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ListTransferPacketRequest&, const ListTransferPacketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransferPacketAsyncHandler;
			typedef Outcome<Error, Model::RejectJoinPermissionAuthOrderResult> RejectJoinPermissionAuthOrderOutcome;
			typedef std::future<RejectJoinPermissionAuthOrderOutcome> RejectJoinPermissionAuthOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::RejectJoinPermissionAuthOrderRequest&, const RejectJoinPermissionAuthOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectJoinPermissionAuthOrderAsyncHandler;
			typedef Outcome<Error, Model::RemoveNodeFromGroupResult> RemoveNodeFromGroupOutcome;
			typedef std::future<RemoveNodeFromGroupOutcome> RemoveNodeFromGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::RemoveNodeFromGroupRequest&, const RemoveNodeFromGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNodeFromGroupAsyncHandler;
			typedef Outcome<Error, Model::ReturnJoinPermissionResult> ReturnJoinPermissionOutcome;
			typedef std::future<ReturnJoinPermissionOutcome> ReturnJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::ReturnJoinPermissionRequest&, const ReturnJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReturnJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::SendUnicastCommandResult> SendUnicastCommandOutcome;
			typedef std::future<SendUnicastCommandOutcome> SendUnicastCommandOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SendUnicastCommandRequest&, const SendUnicastCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendUnicastCommandAsyncHandler;
			typedef Outcome<Error, Model::SubmitGatewayLocalConfigAddingTaskResult> SubmitGatewayLocalConfigAddingTaskOutcome;
			typedef std::future<SubmitGatewayLocalConfigAddingTaskOutcome> SubmitGatewayLocalConfigAddingTaskOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitGatewayLocalConfigAddingTaskRequest&, const SubmitGatewayLocalConfigAddingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitGatewayLocalConfigAddingTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitGatewayLocalConfigDeletingTaskResult> SubmitGatewayLocalConfigDeletingTaskOutcome;
			typedef std::future<SubmitGatewayLocalConfigDeletingTaskOutcome> SubmitGatewayLocalConfigDeletingTaskOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitGatewayLocalConfigDeletingTaskRequest&, const SubmitGatewayLocalConfigDeletingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitGatewayLocalConfigDeletingTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitGatewayTupleOrderResult> SubmitGatewayTupleOrderOutcome;
			typedef std::future<SubmitGatewayTupleOrderOutcome> SubmitGatewayTupleOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitGatewayTupleOrderRequest&, const SubmitGatewayTupleOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitGatewayTupleOrderAsyncHandler;
			typedef Outcome<Error, Model::SubmitJoinPermissionAuthOrderResult> SubmitJoinPermissionAuthOrderOutcome;
			typedef std::future<SubmitJoinPermissionAuthOrderOutcome> SubmitJoinPermissionAuthOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitJoinPermissionAuthOrderRequest&, const SubmitJoinPermissionAuthOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJoinPermissionAuthOrderAsyncHandler;
			typedef Outcome<Error, Model::SubmitKpmEncryptedNodeTupleOrderResult> SubmitKpmEncryptedNodeTupleOrderOutcome;
			typedef std::future<SubmitKpmEncryptedNodeTupleOrderOutcome> SubmitKpmEncryptedNodeTupleOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitKpmEncryptedNodeTupleOrderRequest&, const SubmitKpmEncryptedNodeTupleOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitKpmEncryptedNodeTupleOrderAsyncHandler;
			typedef Outcome<Error, Model::SubmitNodeLocalConfigAddingTaskResult> SubmitNodeLocalConfigAddingTaskOutcome;
			typedef std::future<SubmitNodeLocalConfigAddingTaskOutcome> SubmitNodeLocalConfigAddingTaskOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitNodeLocalConfigAddingTaskRequest&, const SubmitNodeLocalConfigAddingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitNodeLocalConfigAddingTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitNodeLocalConfigDeletingTaskResult> SubmitNodeLocalConfigDeletingTaskOutcome;
			typedef std::future<SubmitNodeLocalConfigDeletingTaskOutcome> SubmitNodeLocalConfigDeletingTaskOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitNodeLocalConfigDeletingTaskRequest&, const SubmitNodeLocalConfigDeletingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitNodeLocalConfigDeletingTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitNodeTupleOrderResult> SubmitNodeTupleOrderOutcome;
			typedef std::future<SubmitNodeTupleOrderOutcome> SubmitNodeTupleOrderOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::SubmitNodeTupleOrderRequest&, const SubmitNodeTupleOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitNodeTupleOrderAsyncHandler;
			typedef Outcome<Error, Model::UnbindJoinPermissionFromNodeGroupResult> UnbindJoinPermissionFromNodeGroupOutcome;
			typedef std::future<UnbindJoinPermissionFromNodeGroupOutcome> UnbindJoinPermissionFromNodeGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UnbindJoinPermissionFromNodeGroupRequest&, const UnbindJoinPermissionFromNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindJoinPermissionFromNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataDispatchConfigResult> UpdateDataDispatchConfigOutcome;
			typedef std::future<UpdateDataDispatchConfigOutcome> UpdateDataDispatchConfigOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateDataDispatchConfigRequest&, const UpdateDataDispatchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataDispatchConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataDispatchEnablingStateResult> UpdateDataDispatchEnablingStateOutcome;
			typedef std::future<UpdateDataDispatchEnablingStateOutcome> UpdateDataDispatchEnablingStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateDataDispatchEnablingStateRequest&, const UpdateDataDispatchEnablingStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataDispatchEnablingStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayResult> UpdateGatewayOutcome;
			typedef std::future<UpdateGatewayOutcome> UpdateGatewayOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateGatewayRequest&, const UpdateGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayEnablingStateResult> UpdateGatewayEnablingStateOutcome;
			typedef std::future<UpdateGatewayEnablingStateOutcome> UpdateGatewayEnablingStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateGatewayEnablingStateRequest&, const UpdateGatewayEnablingStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayEnablingStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewaySshCtrlResult> UpdateGatewaySshCtrlOutcome;
			typedef std::future<UpdateGatewaySshCtrlOutcome> UpdateGatewaySshCtrlOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateGatewaySshCtrlRequest&, const UpdateGatewaySshCtrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewaySshCtrlAsyncHandler;
			typedef Outcome<Error, Model::UpdateNodeEnablingStateResult> UpdateNodeEnablingStateOutcome;
			typedef std::future<UpdateNodeEnablingStateOutcome> UpdateNodeEnablingStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateNodeEnablingStateRequest&, const UpdateNodeEnablingStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNodeEnablingStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateNodeGroupResult> UpdateNodeGroupOutcome;
			typedef std::future<UpdateNodeGroupOutcome> UpdateNodeGroupOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateNodeGroupRequest&, const UpdateNodeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNodeGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateNotificationsHandleStateResult> UpdateNotificationsHandleStateOutcome;
			typedef std::future<UpdateNotificationsHandleStateOutcome> UpdateNotificationsHandleStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateNotificationsHandleStateRequest&, const UpdateNotificationsHandleStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNotificationsHandleStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateOwnedLocalJoinPermissionResult> UpdateOwnedLocalJoinPermissionOutcome;
			typedef std::future<UpdateOwnedLocalJoinPermissionOutcome> UpdateOwnedLocalJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateOwnedLocalJoinPermissionRequest&, const UpdateOwnedLocalJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOwnedLocalJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::UpdateOwnedLocalJoinPermissionEnablingStateResult> UpdateOwnedLocalJoinPermissionEnablingStateOutcome;
			typedef std::future<UpdateOwnedLocalJoinPermissionEnablingStateOutcome> UpdateOwnedLocalJoinPermissionEnablingStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateOwnedLocalJoinPermissionEnablingStateRequest&, const UpdateOwnedLocalJoinPermissionEnablingStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOwnedLocalJoinPermissionEnablingStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoamingJoinPermissionResult> UpdateRoamingJoinPermissionOutcome;
			typedef std::future<UpdateRoamingJoinPermissionOutcome> UpdateRoamingJoinPermissionOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateRoamingJoinPermissionRequest&, const UpdateRoamingJoinPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoamingJoinPermissionAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoamingJoinPermissionEnablingStateResult> UpdateRoamingJoinPermissionEnablingStateOutcome;
			typedef std::future<UpdateRoamingJoinPermissionEnablingStateOutcome> UpdateRoamingJoinPermissionEnablingStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateRoamingJoinPermissionEnablingStateRequest&, const UpdateRoamingJoinPermissionEnablingStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoamingJoinPermissionEnablingStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserIsolationStateResult> UpdateUserIsolationStateOutcome;
			typedef std::future<UpdateUserIsolationStateOutcome> UpdateUserIsolationStateOutcomeCallable;
			typedef std::function<void(const LinkWANClient*, const Model::UpdateUserIsolationStateRequest&, const UpdateUserIsolationStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserIsolationStateAsyncHandler;

			LinkWANClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LinkWANClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LinkWANClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LinkWANClient();
			AcceptJoinPermissionAuthOrderOutcome acceptJoinPermissionAuthOrder(const Model::AcceptJoinPermissionAuthOrderRequest &request)const;
			void acceptJoinPermissionAuthOrderAsync(const Model::AcceptJoinPermissionAuthOrderRequest& request, const AcceptJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptJoinPermissionAuthOrderOutcomeCallable acceptJoinPermissionAuthOrderCallable(const Model::AcceptJoinPermissionAuthOrderRequest& request) const;
			AddNodeToGroupOutcome addNodeToGroup(const Model::AddNodeToGroupRequest &request)const;
			void addNodeToGroupAsync(const Model::AddNodeToGroupRequest& request, const AddNodeToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNodeToGroupOutcomeCallable addNodeToGroupCallable(const Model::AddNodeToGroupRequest& request) const;
			ApplyRoamingJoinPermissionOutcome applyRoamingJoinPermission(const Model::ApplyRoamingJoinPermissionRequest &request)const;
			void applyRoamingJoinPermissionAsync(const Model::ApplyRoamingJoinPermissionRequest& request, const ApplyRoamingJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyRoamingJoinPermissionOutcomeCallable applyRoamingJoinPermissionCallable(const Model::ApplyRoamingJoinPermissionRequest& request) const;
			BindJoinPermissionToNodeGroupOutcome bindJoinPermissionToNodeGroup(const Model::BindJoinPermissionToNodeGroupRequest &request)const;
			void bindJoinPermissionToNodeGroupAsync(const Model::BindJoinPermissionToNodeGroupRequest& request, const BindJoinPermissionToNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindJoinPermissionToNodeGroupOutcomeCallable bindJoinPermissionToNodeGroupCallable(const Model::BindJoinPermissionToNodeGroupRequest& request) const;
			CancelJoinPermissionAuthOrderOutcome cancelJoinPermissionAuthOrder(const Model::CancelJoinPermissionAuthOrderRequest &request)const;
			void cancelJoinPermissionAuthOrderAsync(const Model::CancelJoinPermissionAuthOrderRequest& request, const CancelJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJoinPermissionAuthOrderOutcomeCallable cancelJoinPermissionAuthOrderCallable(const Model::CancelJoinPermissionAuthOrderRequest& request) const;
			CheckCloudProductOpenStatusOutcome checkCloudProductOpenStatus(const Model::CheckCloudProductOpenStatusRequest &request)const;
			void checkCloudProductOpenStatusAsync(const Model::CheckCloudProductOpenStatusRequest& request, const CheckCloudProductOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCloudProductOpenStatusOutcomeCallable checkCloudProductOpenStatusCallable(const Model::CheckCloudProductOpenStatusRequest& request) const;
			CheckUserChargeStatusOutcome checkUserChargeStatus(const Model::CheckUserChargeStatusRequest &request)const;
			void checkUserChargeStatusAsync(const Model::CheckUserChargeStatusRequest& request, const CheckUserChargeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckUserChargeStatusOutcomeCallable checkUserChargeStatusCallable(const Model::CheckUserChargeStatusRequest& request) const;
			CountGatewayTupleOrdersOutcome countGatewayTupleOrders(const Model::CountGatewayTupleOrdersRequest &request)const;
			void countGatewayTupleOrdersAsync(const Model::CountGatewayTupleOrdersRequest& request, const CountGatewayTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountGatewayTupleOrdersOutcomeCallable countGatewayTupleOrdersCallable(const Model::CountGatewayTupleOrdersRequest& request) const;
			CountGatewaysOutcome countGateways(const Model::CountGatewaysRequest &request)const;
			void countGatewaysAsync(const Model::CountGatewaysRequest& request, const CountGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountGatewaysOutcomeCallable countGatewaysCallable(const Model::CountGatewaysRequest& request) const;
			CountNodeGroupsOutcome countNodeGroups(const Model::CountNodeGroupsRequest &request)const;
			void countNodeGroupsAsync(const Model::CountNodeGroupsRequest& request, const CountNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountNodeGroupsOutcomeCallable countNodeGroupsCallable(const Model::CountNodeGroupsRequest& request) const;
			CountNodeTupleOrdersOutcome countNodeTupleOrders(const Model::CountNodeTupleOrdersRequest &request)const;
			void countNodeTupleOrdersAsync(const Model::CountNodeTupleOrdersRequest& request, const CountNodeTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountNodeTupleOrdersOutcomeCallable countNodeTupleOrdersCallable(const Model::CountNodeTupleOrdersRequest& request) const;
			CountNodesByNodeGroupIdOutcome countNodesByNodeGroupId(const Model::CountNodesByNodeGroupIdRequest &request)const;
			void countNodesByNodeGroupIdAsync(const Model::CountNodesByNodeGroupIdRequest& request, const CountNodesByNodeGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountNodesByNodeGroupIdOutcomeCallable countNodesByNodeGroupIdCallable(const Model::CountNodesByNodeGroupIdRequest& request) const;
			CountNodesByOwnedJoinPermissionIdOutcome countNodesByOwnedJoinPermissionId(const Model::CountNodesByOwnedJoinPermissionIdRequest &request)const;
			void countNodesByOwnedJoinPermissionIdAsync(const Model::CountNodesByOwnedJoinPermissionIdRequest& request, const CountNodesByOwnedJoinPermissionIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountNodesByOwnedJoinPermissionIdOutcomeCallable countNodesByOwnedJoinPermissionIdCallable(const Model::CountNodesByOwnedJoinPermissionIdRequest& request) const;
			CountNotificationsOutcome countNotifications(const Model::CountNotificationsRequest &request)const;
			void countNotificationsAsync(const Model::CountNotificationsRequest& request, const CountNotificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountNotificationsOutcomeCallable countNotificationsCallable(const Model::CountNotificationsRequest& request) const;
			CountOwnedJoinPermissionsOutcome countOwnedJoinPermissions(const Model::CountOwnedJoinPermissionsRequest &request)const;
			void countOwnedJoinPermissionsAsync(const Model::CountOwnedJoinPermissionsRequest& request, const CountOwnedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountOwnedJoinPermissionsOutcomeCallable countOwnedJoinPermissionsCallable(const Model::CountOwnedJoinPermissionsRequest& request) const;
			CountRentedJoinPermissionsOutcome countRentedJoinPermissions(const Model::CountRentedJoinPermissionsRequest &request)const;
			void countRentedJoinPermissionsAsync(const Model::CountRentedJoinPermissionsRequest& request, const CountRentedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountRentedJoinPermissionsOutcomeCallable countRentedJoinPermissionsCallable(const Model::CountRentedJoinPermissionsRequest& request) const;
			CreateCustomLocalJoinPermissionOutcome createCustomLocalJoinPermission(const Model::CreateCustomLocalJoinPermissionRequest &request)const;
			void createCustomLocalJoinPermissionAsync(const Model::CreateCustomLocalJoinPermissionRequest& request, const CreateCustomLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomLocalJoinPermissionOutcomeCallable createCustomLocalJoinPermissionCallable(const Model::CreateCustomLocalJoinPermissionRequest& request) const;
			CreateGatewayOutcome createGateway(const Model::CreateGatewayRequest &request)const;
			void createGatewayAsync(const Model::CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayOutcomeCallable createGatewayCallable(const Model::CreateGatewayRequest& request) const;
			CreateLocalJoinPermissionOutcome createLocalJoinPermission(const Model::CreateLocalJoinPermissionRequest &request)const;
			void createLocalJoinPermissionAsync(const Model::CreateLocalJoinPermissionRequest& request, const CreateLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLocalJoinPermissionOutcomeCallable createLocalJoinPermissionCallable(const Model::CreateLocalJoinPermissionRequest& request) const;
			CreateNodeGroupOutcome createNodeGroup(const Model::CreateNodeGroupRequest &request)const;
			void createNodeGroupAsync(const Model::CreateNodeGroupRequest& request, const CreateNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNodeGroupOutcomeCallable createNodeGroupCallable(const Model::CreateNodeGroupRequest& request) const;
			DeleteGatewayOutcome deleteGateway(const Model::DeleteGatewayRequest &request)const;
			void deleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayOutcomeCallable deleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;
			DeleteLocalJoinPermissionOutcome deleteLocalJoinPermission(const Model::DeleteLocalJoinPermissionRequest &request)const;
			void deleteLocalJoinPermissionAsync(const Model::DeleteLocalJoinPermissionRequest& request, const DeleteLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLocalJoinPermissionOutcomeCallable deleteLocalJoinPermissionCallable(const Model::DeleteLocalJoinPermissionRequest& request) const;
			DeleteNodeGroupOutcome deleteNodeGroup(const Model::DeleteNodeGroupRequest &request)const;
			void deleteNodeGroupAsync(const Model::DeleteNodeGroupRequest& request, const DeleteNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNodeGroupOutcomeCallable deleteNodeGroupCallable(const Model::DeleteNodeGroupRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetFreqBandPlanGroupOutcome getFreqBandPlanGroup(const Model::GetFreqBandPlanGroupRequest &request)const;
			void getFreqBandPlanGroupAsync(const Model::GetFreqBandPlanGroupRequest& request, const GetFreqBandPlanGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFreqBandPlanGroupOutcomeCallable getFreqBandPlanGroupCallable(const Model::GetFreqBandPlanGroupRequest& request) const;
			GetGatewayOutcome getGateway(const Model::GetGatewayRequest &request)const;
			void getGatewayAsync(const Model::GetGatewayRequest& request, const GetGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayOutcomeCallable getGatewayCallable(const Model::GetGatewayRequest& request) const;
			GetGatewayPacketStatOutcome getGatewayPacketStat(const Model::GetGatewayPacketStatRequest &request)const;
			void getGatewayPacketStatAsync(const Model::GetGatewayPacketStatRequest& request, const GetGatewayPacketStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayPacketStatOutcomeCallable getGatewayPacketStatCallable(const Model::GetGatewayPacketStatRequest& request) const;
			GetGatewayStatusStatOutcome getGatewayStatusStat(const Model::GetGatewayStatusStatRequest &request)const;
			void getGatewayStatusStatAsync(const Model::GetGatewayStatusStatRequest& request, const GetGatewayStatusStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayStatusStatOutcomeCallable getGatewayStatusStatCallable(const Model::GetGatewayStatusStatRequest& request) const;
			GetGatewayTransferPacketsDownloadUrlOutcome getGatewayTransferPacketsDownloadUrl(const Model::GetGatewayTransferPacketsDownloadUrlRequest &request)const;
			void getGatewayTransferPacketsDownloadUrlAsync(const Model::GetGatewayTransferPacketsDownloadUrlRequest& request, const GetGatewayTransferPacketsDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayTransferPacketsDownloadUrlOutcomeCallable getGatewayTransferPacketsDownloadUrlCallable(const Model::GetGatewayTransferPacketsDownloadUrlRequest& request) const;
			GetGatewayTupleOrderOutcome getGatewayTupleOrder(const Model::GetGatewayTupleOrderRequest &request)const;
			void getGatewayTupleOrderAsync(const Model::GetGatewayTupleOrderRequest& request, const GetGatewayTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayTupleOrderOutcomeCallable getGatewayTupleOrderCallable(const Model::GetGatewayTupleOrderRequest& request) const;
			GetGatewayTuplesDownloadUrlOutcome getGatewayTuplesDownloadUrl(const Model::GetGatewayTuplesDownloadUrlRequest &request)const;
			void getGatewayTuplesDownloadUrlAsync(const Model::GetGatewayTuplesDownloadUrlRequest& request, const GetGatewayTuplesDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayTuplesDownloadUrlOutcomeCallable getGatewayTuplesDownloadUrlCallable(const Model::GetGatewayTuplesDownloadUrlRequest& request) const;
			GetJoinPermissionAuthOrderOutcome getJoinPermissionAuthOrder(const Model::GetJoinPermissionAuthOrderRequest &request)const;
			void getJoinPermissionAuthOrderAsync(const Model::GetJoinPermissionAuthOrderRequest& request, const GetJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJoinPermissionAuthOrderOutcomeCallable getJoinPermissionAuthOrderCallable(const Model::GetJoinPermissionAuthOrderRequest& request) const;
			GetLocalConfigSyncTaskOutcome getLocalConfigSyncTask(const Model::GetLocalConfigSyncTaskRequest &request)const;
			void getLocalConfigSyncTaskAsync(const Model::GetLocalConfigSyncTaskRequest& request, const GetLocalConfigSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLocalConfigSyncTaskOutcomeCallable getLocalConfigSyncTaskCallable(const Model::GetLocalConfigSyncTaskRequest& request) const;
			GetNodeOutcome getNode(const Model::GetNodeRequest &request)const;
			void getNodeAsync(const Model::GetNodeRequest& request, const GetNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeOutcomeCallable getNodeCallable(const Model::GetNodeRequest& request) const;
			GetNodeGroupOutcome getNodeGroup(const Model::GetNodeGroupRequest &request)const;
			void getNodeGroupAsync(const Model::GetNodeGroupRequest& request, const GetNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeGroupOutcomeCallable getNodeGroupCallable(const Model::GetNodeGroupRequest& request) const;
			GetNodeGroupTransferPacketsDownloadUrlOutcome getNodeGroupTransferPacketsDownloadUrl(const Model::GetNodeGroupTransferPacketsDownloadUrlRequest &request)const;
			void getNodeGroupTransferPacketsDownloadUrlAsync(const Model::GetNodeGroupTransferPacketsDownloadUrlRequest& request, const GetNodeGroupTransferPacketsDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeGroupTransferPacketsDownloadUrlOutcomeCallable getNodeGroupTransferPacketsDownloadUrlCallable(const Model::GetNodeGroupTransferPacketsDownloadUrlRequest& request) const;
			GetNodeLocalConfigOutcome getNodeLocalConfig(const Model::GetNodeLocalConfigRequest &request)const;
			void getNodeLocalConfigAsync(const Model::GetNodeLocalConfigRequest& request, const GetNodeLocalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeLocalConfigOutcomeCallable getNodeLocalConfigCallable(const Model::GetNodeLocalConfigRequest& request) const;
			GetNodeTransferPacketOutcome getNodeTransferPacket(const Model::GetNodeTransferPacketRequest &request)const;
			void getNodeTransferPacketAsync(const Model::GetNodeTransferPacketRequest& request, const GetNodeTransferPacketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeTransferPacketOutcomeCallable getNodeTransferPacketCallable(const Model::GetNodeTransferPacketRequest& request) const;
			GetNodeTransferPacketsDownloadUrlOutcome getNodeTransferPacketsDownloadUrl(const Model::GetNodeTransferPacketsDownloadUrlRequest &request)const;
			void getNodeTransferPacketsDownloadUrlAsync(const Model::GetNodeTransferPacketsDownloadUrlRequest& request, const GetNodeTransferPacketsDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeTransferPacketsDownloadUrlOutcomeCallable getNodeTransferPacketsDownloadUrlCallable(const Model::GetNodeTransferPacketsDownloadUrlRequest& request) const;
			GetNodeTupleOrderOutcome getNodeTupleOrder(const Model::GetNodeTupleOrderRequest &request)const;
			void getNodeTupleOrderAsync(const Model::GetNodeTupleOrderRequest& request, const GetNodeTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeTupleOrderOutcomeCallable getNodeTupleOrderCallable(const Model::GetNodeTupleOrderRequest& request) const;
			GetNodeTuplesDownloadUrlOutcome getNodeTuplesDownloadUrl(const Model::GetNodeTuplesDownloadUrlRequest &request)const;
			void getNodeTuplesDownloadUrlAsync(const Model::GetNodeTuplesDownloadUrlRequest& request, const GetNodeTuplesDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeTuplesDownloadUrlOutcomeCallable getNodeTuplesDownloadUrlCallable(const Model::GetNodeTuplesDownloadUrlRequest& request) const;
			GetNotificationOutcome getNotification(const Model::GetNotificationRequest &request)const;
			void getNotificationAsync(const Model::GetNotificationRequest& request, const GetNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNotificationOutcomeCallable getNotificationCallable(const Model::GetNotificationRequest& request) const;
			GetOwnedJoinPermissionOutcome getOwnedJoinPermission(const Model::GetOwnedJoinPermissionRequest &request)const;
			void getOwnedJoinPermissionAsync(const Model::GetOwnedJoinPermissionRequest& request, const GetOwnedJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOwnedJoinPermissionOutcomeCallable getOwnedJoinPermissionCallable(const Model::GetOwnedJoinPermissionRequest& request) const;
			GetRentedJoinPermissionOutcome getRentedJoinPermission(const Model::GetRentedJoinPermissionRequest &request)const;
			void getRentedJoinPermissionAsync(const Model::GetRentedJoinPermissionRequest& request, const GetRentedJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRentedJoinPermissionOutcomeCallable getRentedJoinPermissionCallable(const Model::GetRentedJoinPermissionRequest& request) const;
			GetUserLicenseOutcome getUserLicense(const Model::GetUserLicenseRequest &request)const;
			void getUserLicenseAsync(const Model::GetUserLicenseRequest& request, const GetUserLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserLicenseOutcomeCallable getUserLicenseCallable(const Model::GetUserLicenseRequest& request) const;
			GetUserNetProfileDescriptionOutcome getUserNetProfileDescription(const Model::GetUserNetProfileDescriptionRequest &request)const;
			void getUserNetProfileDescriptionAsync(const Model::GetUserNetProfileDescriptionRequest& request, const GetUserNetProfileDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserNetProfileDescriptionOutcomeCallable getUserNetProfileDescriptionCallable(const Model::GetUserNetProfileDescriptionRequest& request) const;
			ListActivatedFeaturesOutcome listActivatedFeatures(const Model::ListActivatedFeaturesRequest &request)const;
			void listActivatedFeaturesAsync(const Model::ListActivatedFeaturesRequest& request, const ListActivatedFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActivatedFeaturesOutcomeCallable listActivatedFeaturesCallable(const Model::ListActivatedFeaturesRequest& request) const;
			ListActiveGatewaysOutcome listActiveGateways(const Model::ListActiveGatewaysRequest &request)const;
			void listActiveGatewaysAsync(const Model::ListActiveGatewaysRequest& request, const ListActiveGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActiveGatewaysOutcomeCallable listActiveGatewaysCallable(const Model::ListActiveGatewaysRequest& request) const;
			ListFreqBandPlanGroupsOutcome listFreqBandPlanGroups(const Model::ListFreqBandPlanGroupsRequest &request)const;
			void listFreqBandPlanGroupsAsync(const Model::ListFreqBandPlanGroupsRequest& request, const ListFreqBandPlanGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFreqBandPlanGroupsOutcomeCallable listFreqBandPlanGroupsCallable(const Model::ListFreqBandPlanGroupsRequest& request) const;
			ListGatewayLocalConfigsOutcome listGatewayLocalConfigs(const Model::ListGatewayLocalConfigsRequest &request)const;
			void listGatewayLocalConfigsAsync(const Model::ListGatewayLocalConfigsRequest& request, const ListGatewayLocalConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayLocalConfigsOutcomeCallable listGatewayLocalConfigsCallable(const Model::ListGatewayLocalConfigsRequest& request) const;
			ListGatewayOnlineRecordsOutcome listGatewayOnlineRecords(const Model::ListGatewayOnlineRecordsRequest &request)const;
			void listGatewayOnlineRecordsAsync(const Model::ListGatewayOnlineRecordsRequest& request, const ListGatewayOnlineRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayOnlineRecordsOutcomeCallable listGatewayOnlineRecordsCallable(const Model::ListGatewayOnlineRecordsRequest& request) const;
			ListGatewayTransferFlowStatsOutcome listGatewayTransferFlowStats(const Model::ListGatewayTransferFlowStatsRequest &request)const;
			void listGatewayTransferFlowStatsAsync(const Model::ListGatewayTransferFlowStatsRequest& request, const ListGatewayTransferFlowStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayTransferFlowStatsOutcomeCallable listGatewayTransferFlowStatsCallable(const Model::ListGatewayTransferFlowStatsRequest& request) const;
			ListGatewayTransferPacketsOutcome listGatewayTransferPackets(const Model::ListGatewayTransferPacketsRequest &request)const;
			void listGatewayTransferPacketsAsync(const Model::ListGatewayTransferPacketsRequest& request, const ListGatewayTransferPacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayTransferPacketsOutcomeCallable listGatewayTransferPacketsCallable(const Model::ListGatewayTransferPacketsRequest& request) const;
			ListGatewayTupleOrdersOutcome listGatewayTupleOrders(const Model::ListGatewayTupleOrdersRequest &request)const;
			void listGatewayTupleOrdersAsync(const Model::ListGatewayTupleOrdersRequest& request, const ListGatewayTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayTupleOrdersOutcomeCallable listGatewayTupleOrdersCallable(const Model::ListGatewayTupleOrdersRequest& request) const;
			ListGatewaysOutcome listGateways(const Model::ListGatewaysRequest &request)const;
			void listGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewaysOutcomeCallable listGatewaysCallable(const Model::ListGatewaysRequest& request) const;
			ListGatewaysGisInfoOutcome listGatewaysGisInfo(const Model::ListGatewaysGisInfoRequest &request)const;
			void listGatewaysGisInfoAsync(const Model::ListGatewaysGisInfoRequest& request, const ListGatewaysGisInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewaysGisInfoOutcomeCallable listGatewaysGisInfoCallable(const Model::ListGatewaysGisInfoRequest& request) const;
			ListGatewaysPacketStatOutcome listGatewaysPacketStat(const Model::ListGatewaysPacketStatRequest &request)const;
			void listGatewaysPacketStatAsync(const Model::ListGatewaysPacketStatRequest& request, const ListGatewaysPacketStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewaysPacketStatOutcomeCallable listGatewaysPacketStatCallable(const Model::ListGatewaysPacketStatRequest& request) const;
			ListNodeGroupTransferFlowStatsOutcome listNodeGroupTransferFlowStats(const Model::ListNodeGroupTransferFlowStatsRequest &request)const;
			void listNodeGroupTransferFlowStatsAsync(const Model::ListNodeGroupTransferFlowStatsRequest& request, const ListNodeGroupTransferFlowStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeGroupTransferFlowStatsOutcomeCallable listNodeGroupTransferFlowStatsCallable(const Model::ListNodeGroupTransferFlowStatsRequest& request) const;
			ListNodeGroupTransferPacketsOutcome listNodeGroupTransferPackets(const Model::ListNodeGroupTransferPacketsRequest &request)const;
			void listNodeGroupTransferPacketsAsync(const Model::ListNodeGroupTransferPacketsRequest& request, const ListNodeGroupTransferPacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeGroupTransferPacketsOutcomeCallable listNodeGroupTransferPacketsCallable(const Model::ListNodeGroupTransferPacketsRequest& request) const;
			ListNodeGroupsOutcome listNodeGroups(const Model::ListNodeGroupsRequest &request)const;
			void listNodeGroupsAsync(const Model::ListNodeGroupsRequest& request, const ListNodeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeGroupsOutcomeCallable listNodeGroupsCallable(const Model::ListNodeGroupsRequest& request) const;
			ListNodeGroupsPacketStatOutcome listNodeGroupsPacketStat(const Model::ListNodeGroupsPacketStatRequest &request)const;
			void listNodeGroupsPacketStatAsync(const Model::ListNodeGroupsPacketStatRequest& request, const ListNodeGroupsPacketStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeGroupsPacketStatOutcomeCallable listNodeGroupsPacketStatCallable(const Model::ListNodeGroupsPacketStatRequest& request) const;
			ListNodeTransferPacketPathsOutcome listNodeTransferPacketPaths(const Model::ListNodeTransferPacketPathsRequest &request)const;
			void listNodeTransferPacketPathsAsync(const Model::ListNodeTransferPacketPathsRequest& request, const ListNodeTransferPacketPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeTransferPacketPathsOutcomeCallable listNodeTransferPacketPathsCallable(const Model::ListNodeTransferPacketPathsRequest& request) const;
			ListNodeTransferPacketsOutcome listNodeTransferPackets(const Model::ListNodeTransferPacketsRequest &request)const;
			void listNodeTransferPacketsAsync(const Model::ListNodeTransferPacketsRequest& request, const ListNodeTransferPacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeTransferPacketsOutcomeCallable listNodeTransferPacketsCallable(const Model::ListNodeTransferPacketsRequest& request) const;
			ListNodeTupleOrdersOutcome listNodeTupleOrders(const Model::ListNodeTupleOrdersRequest &request)const;
			void listNodeTupleOrdersAsync(const Model::ListNodeTupleOrdersRequest& request, const ListNodeTupleOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeTupleOrdersOutcomeCallable listNodeTupleOrdersCallable(const Model::ListNodeTupleOrdersRequest& request) const;
			ListNodesByNodeGroupIdOutcome listNodesByNodeGroupId(const Model::ListNodesByNodeGroupIdRequest &request)const;
			void listNodesByNodeGroupIdAsync(const Model::ListNodesByNodeGroupIdRequest& request, const ListNodesByNodeGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesByNodeGroupIdOutcomeCallable listNodesByNodeGroupIdCallable(const Model::ListNodesByNodeGroupIdRequest& request) const;
			ListNodesByOwnedJoinPermissionIdOutcome listNodesByOwnedJoinPermissionId(const Model::ListNodesByOwnedJoinPermissionIdRequest &request)const;
			void listNodesByOwnedJoinPermissionIdAsync(const Model::ListNodesByOwnedJoinPermissionIdRequest& request, const ListNodesByOwnedJoinPermissionIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesByOwnedJoinPermissionIdOutcomeCallable listNodesByOwnedJoinPermissionIdCallable(const Model::ListNodesByOwnedJoinPermissionIdRequest& request) const;
			ListNotificationsOutcome listNotifications(const Model::ListNotificationsRequest &request)const;
			void listNotificationsAsync(const Model::ListNotificationsRequest& request, const ListNotificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotificationsOutcomeCallable listNotificationsCallable(const Model::ListNotificationsRequest& request) const;
			ListOwnedJoinPermissionsOutcome listOwnedJoinPermissions(const Model::ListOwnedJoinPermissionsRequest &request)const;
			void listOwnedJoinPermissionsAsync(const Model::ListOwnedJoinPermissionsRequest& request, const ListOwnedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOwnedJoinPermissionsOutcomeCallable listOwnedJoinPermissionsCallable(const Model::ListOwnedJoinPermissionsRequest& request) const;
			ListRentedJoinPermissionsOutcome listRentedJoinPermissions(const Model::ListRentedJoinPermissionsRequest &request)const;
			void listRentedJoinPermissionsAsync(const Model::ListRentedJoinPermissionsRequest& request, const ListRentedJoinPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRentedJoinPermissionsOutcomeCallable listRentedJoinPermissionsCallable(const Model::ListRentedJoinPermissionsRequest& request) const;
			ListTransferPacketOutcome listTransferPacket(const Model::ListTransferPacketRequest &request)const;
			void listTransferPacketAsync(const Model::ListTransferPacketRequest& request, const ListTransferPacketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransferPacketOutcomeCallable listTransferPacketCallable(const Model::ListTransferPacketRequest& request) const;
			RejectJoinPermissionAuthOrderOutcome rejectJoinPermissionAuthOrder(const Model::RejectJoinPermissionAuthOrderRequest &request)const;
			void rejectJoinPermissionAuthOrderAsync(const Model::RejectJoinPermissionAuthOrderRequest& request, const RejectJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectJoinPermissionAuthOrderOutcomeCallable rejectJoinPermissionAuthOrderCallable(const Model::RejectJoinPermissionAuthOrderRequest& request) const;
			RemoveNodeFromGroupOutcome removeNodeFromGroup(const Model::RemoveNodeFromGroupRequest &request)const;
			void removeNodeFromGroupAsync(const Model::RemoveNodeFromGroupRequest& request, const RemoveNodeFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveNodeFromGroupOutcomeCallable removeNodeFromGroupCallable(const Model::RemoveNodeFromGroupRequest& request) const;
			ReturnJoinPermissionOutcome returnJoinPermission(const Model::ReturnJoinPermissionRequest &request)const;
			void returnJoinPermissionAsync(const Model::ReturnJoinPermissionRequest& request, const ReturnJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReturnJoinPermissionOutcomeCallable returnJoinPermissionCallable(const Model::ReturnJoinPermissionRequest& request) const;
			SendUnicastCommandOutcome sendUnicastCommand(const Model::SendUnicastCommandRequest &request)const;
			void sendUnicastCommandAsync(const Model::SendUnicastCommandRequest& request, const SendUnicastCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendUnicastCommandOutcomeCallable sendUnicastCommandCallable(const Model::SendUnicastCommandRequest& request) const;
			SubmitGatewayLocalConfigAddingTaskOutcome submitGatewayLocalConfigAddingTask(const Model::SubmitGatewayLocalConfigAddingTaskRequest &request)const;
			void submitGatewayLocalConfigAddingTaskAsync(const Model::SubmitGatewayLocalConfigAddingTaskRequest& request, const SubmitGatewayLocalConfigAddingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitGatewayLocalConfigAddingTaskOutcomeCallable submitGatewayLocalConfigAddingTaskCallable(const Model::SubmitGatewayLocalConfigAddingTaskRequest& request) const;
			SubmitGatewayLocalConfigDeletingTaskOutcome submitGatewayLocalConfigDeletingTask(const Model::SubmitGatewayLocalConfigDeletingTaskRequest &request)const;
			void submitGatewayLocalConfigDeletingTaskAsync(const Model::SubmitGatewayLocalConfigDeletingTaskRequest& request, const SubmitGatewayLocalConfigDeletingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitGatewayLocalConfigDeletingTaskOutcomeCallable submitGatewayLocalConfigDeletingTaskCallable(const Model::SubmitGatewayLocalConfigDeletingTaskRequest& request) const;
			SubmitGatewayTupleOrderOutcome submitGatewayTupleOrder(const Model::SubmitGatewayTupleOrderRequest &request)const;
			void submitGatewayTupleOrderAsync(const Model::SubmitGatewayTupleOrderRequest& request, const SubmitGatewayTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitGatewayTupleOrderOutcomeCallable submitGatewayTupleOrderCallable(const Model::SubmitGatewayTupleOrderRequest& request) const;
			SubmitJoinPermissionAuthOrderOutcome submitJoinPermissionAuthOrder(const Model::SubmitJoinPermissionAuthOrderRequest &request)const;
			void submitJoinPermissionAuthOrderAsync(const Model::SubmitJoinPermissionAuthOrderRequest& request, const SubmitJoinPermissionAuthOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitJoinPermissionAuthOrderOutcomeCallable submitJoinPermissionAuthOrderCallable(const Model::SubmitJoinPermissionAuthOrderRequest& request) const;
			SubmitKpmEncryptedNodeTupleOrderOutcome submitKpmEncryptedNodeTupleOrder(const Model::SubmitKpmEncryptedNodeTupleOrderRequest &request)const;
			void submitKpmEncryptedNodeTupleOrderAsync(const Model::SubmitKpmEncryptedNodeTupleOrderRequest& request, const SubmitKpmEncryptedNodeTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitKpmEncryptedNodeTupleOrderOutcomeCallable submitKpmEncryptedNodeTupleOrderCallable(const Model::SubmitKpmEncryptedNodeTupleOrderRequest& request) const;
			SubmitNodeLocalConfigAddingTaskOutcome submitNodeLocalConfigAddingTask(const Model::SubmitNodeLocalConfigAddingTaskRequest &request)const;
			void submitNodeLocalConfigAddingTaskAsync(const Model::SubmitNodeLocalConfigAddingTaskRequest& request, const SubmitNodeLocalConfigAddingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitNodeLocalConfigAddingTaskOutcomeCallable submitNodeLocalConfigAddingTaskCallable(const Model::SubmitNodeLocalConfigAddingTaskRequest& request) const;
			SubmitNodeLocalConfigDeletingTaskOutcome submitNodeLocalConfigDeletingTask(const Model::SubmitNodeLocalConfigDeletingTaskRequest &request)const;
			void submitNodeLocalConfigDeletingTaskAsync(const Model::SubmitNodeLocalConfigDeletingTaskRequest& request, const SubmitNodeLocalConfigDeletingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitNodeLocalConfigDeletingTaskOutcomeCallable submitNodeLocalConfigDeletingTaskCallable(const Model::SubmitNodeLocalConfigDeletingTaskRequest& request) const;
			SubmitNodeTupleOrderOutcome submitNodeTupleOrder(const Model::SubmitNodeTupleOrderRequest &request)const;
			void submitNodeTupleOrderAsync(const Model::SubmitNodeTupleOrderRequest& request, const SubmitNodeTupleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitNodeTupleOrderOutcomeCallable submitNodeTupleOrderCallable(const Model::SubmitNodeTupleOrderRequest& request) const;
			UnbindJoinPermissionFromNodeGroupOutcome unbindJoinPermissionFromNodeGroup(const Model::UnbindJoinPermissionFromNodeGroupRequest &request)const;
			void unbindJoinPermissionFromNodeGroupAsync(const Model::UnbindJoinPermissionFromNodeGroupRequest& request, const UnbindJoinPermissionFromNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindJoinPermissionFromNodeGroupOutcomeCallable unbindJoinPermissionFromNodeGroupCallable(const Model::UnbindJoinPermissionFromNodeGroupRequest& request) const;
			UpdateDataDispatchConfigOutcome updateDataDispatchConfig(const Model::UpdateDataDispatchConfigRequest &request)const;
			void updateDataDispatchConfigAsync(const Model::UpdateDataDispatchConfigRequest& request, const UpdateDataDispatchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataDispatchConfigOutcomeCallable updateDataDispatchConfigCallable(const Model::UpdateDataDispatchConfigRequest& request) const;
			UpdateDataDispatchEnablingStateOutcome updateDataDispatchEnablingState(const Model::UpdateDataDispatchEnablingStateRequest &request)const;
			void updateDataDispatchEnablingStateAsync(const Model::UpdateDataDispatchEnablingStateRequest& request, const UpdateDataDispatchEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataDispatchEnablingStateOutcomeCallable updateDataDispatchEnablingStateCallable(const Model::UpdateDataDispatchEnablingStateRequest& request) const;
			UpdateGatewayOutcome updateGateway(const Model::UpdateGatewayRequest &request)const;
			void updateGatewayAsync(const Model::UpdateGatewayRequest& request, const UpdateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayOutcomeCallable updateGatewayCallable(const Model::UpdateGatewayRequest& request) const;
			UpdateGatewayEnablingStateOutcome updateGatewayEnablingState(const Model::UpdateGatewayEnablingStateRequest &request)const;
			void updateGatewayEnablingStateAsync(const Model::UpdateGatewayEnablingStateRequest& request, const UpdateGatewayEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayEnablingStateOutcomeCallable updateGatewayEnablingStateCallable(const Model::UpdateGatewayEnablingStateRequest& request) const;
			UpdateGatewaySshCtrlOutcome updateGatewaySshCtrl(const Model::UpdateGatewaySshCtrlRequest &request)const;
			void updateGatewaySshCtrlAsync(const Model::UpdateGatewaySshCtrlRequest& request, const UpdateGatewaySshCtrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewaySshCtrlOutcomeCallable updateGatewaySshCtrlCallable(const Model::UpdateGatewaySshCtrlRequest& request) const;
			UpdateNodeEnablingStateOutcome updateNodeEnablingState(const Model::UpdateNodeEnablingStateRequest &request)const;
			void updateNodeEnablingStateAsync(const Model::UpdateNodeEnablingStateRequest& request, const UpdateNodeEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNodeEnablingStateOutcomeCallable updateNodeEnablingStateCallable(const Model::UpdateNodeEnablingStateRequest& request) const;
			UpdateNodeGroupOutcome updateNodeGroup(const Model::UpdateNodeGroupRequest &request)const;
			void updateNodeGroupAsync(const Model::UpdateNodeGroupRequest& request, const UpdateNodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNodeGroupOutcomeCallable updateNodeGroupCallable(const Model::UpdateNodeGroupRequest& request) const;
			UpdateNotificationsHandleStateOutcome updateNotificationsHandleState(const Model::UpdateNotificationsHandleStateRequest &request)const;
			void updateNotificationsHandleStateAsync(const Model::UpdateNotificationsHandleStateRequest& request, const UpdateNotificationsHandleStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNotificationsHandleStateOutcomeCallable updateNotificationsHandleStateCallable(const Model::UpdateNotificationsHandleStateRequest& request) const;
			UpdateOwnedLocalJoinPermissionOutcome updateOwnedLocalJoinPermission(const Model::UpdateOwnedLocalJoinPermissionRequest &request)const;
			void updateOwnedLocalJoinPermissionAsync(const Model::UpdateOwnedLocalJoinPermissionRequest& request, const UpdateOwnedLocalJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOwnedLocalJoinPermissionOutcomeCallable updateOwnedLocalJoinPermissionCallable(const Model::UpdateOwnedLocalJoinPermissionRequest& request) const;
			UpdateOwnedLocalJoinPermissionEnablingStateOutcome updateOwnedLocalJoinPermissionEnablingState(const Model::UpdateOwnedLocalJoinPermissionEnablingStateRequest &request)const;
			void updateOwnedLocalJoinPermissionEnablingStateAsync(const Model::UpdateOwnedLocalJoinPermissionEnablingStateRequest& request, const UpdateOwnedLocalJoinPermissionEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOwnedLocalJoinPermissionEnablingStateOutcomeCallable updateOwnedLocalJoinPermissionEnablingStateCallable(const Model::UpdateOwnedLocalJoinPermissionEnablingStateRequest& request) const;
			UpdateRoamingJoinPermissionOutcome updateRoamingJoinPermission(const Model::UpdateRoamingJoinPermissionRequest &request)const;
			void updateRoamingJoinPermissionAsync(const Model::UpdateRoamingJoinPermissionRequest& request, const UpdateRoamingJoinPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoamingJoinPermissionOutcomeCallable updateRoamingJoinPermissionCallable(const Model::UpdateRoamingJoinPermissionRequest& request) const;
			UpdateRoamingJoinPermissionEnablingStateOutcome updateRoamingJoinPermissionEnablingState(const Model::UpdateRoamingJoinPermissionEnablingStateRequest &request)const;
			void updateRoamingJoinPermissionEnablingStateAsync(const Model::UpdateRoamingJoinPermissionEnablingStateRequest& request, const UpdateRoamingJoinPermissionEnablingStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoamingJoinPermissionEnablingStateOutcomeCallable updateRoamingJoinPermissionEnablingStateCallable(const Model::UpdateRoamingJoinPermissionEnablingStateRequest& request) const;
			UpdateUserIsolationStateOutcome updateUserIsolationState(const Model::UpdateUserIsolationStateRequest &request)const;
			void updateUserIsolationStateAsync(const Model::UpdateUserIsolationStateRequest& request, const UpdateUserIsolationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserIsolationStateOutcomeCallable updateUserIsolationStateCallable(const Model::UpdateUserIsolationStateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LINKWAN_LINKWANCLIENT_H_
