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

#ifndef ALIBABACLOUD_IOT_IOTCLIENT_H_
#define ALIBABACLOUD_IOT_IOTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IotExport.h"
#include "model/QueryAppDeviceListRequest.h"
#include "model/QueryAppDeviceListResult.h"
#include "model/DeleteTopicRouteTableRequest.h"
#include "model/DeleteTopicRouteTableResult.h"
#include "model/QueryDeviceGroupListRequest.h"
#include "model/QueryDeviceGroupListResult.h"
#include "model/QueryDeviceEventDataRequest.h"
#include "model/QueryDeviceEventDataResult.h"
#include "model/GetDeviceStatusRequest.h"
#include "model/GetDeviceStatusResult.h"
#include "model/DeleteDeviceRequest.h"
#include "model/DeleteDeviceResult.h"
#include "model/CreateDeviceGroupRequest.h"
#include "model/CreateDeviceGroupResult.h"
#include "model/EnableThingRequest.h"
#include "model/EnableThingResult.h"
#include "model/RRpcRequest.h"
#include "model/RRpcResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/QueryProductTopicRequest.h"
#include "model/QueryProductTopicResult.h"
#include "model/GetThingTopoRequest.h"
#include "model/GetThingTopoResult.h"
#include "model/QueryPageByApplyIdRequest.h"
#include "model/QueryPageByApplyIdResult.h"
#include "model/ForceSetDeviceGroupTagRequest.h"
#include "model/ForceSetDeviceGroupTagResult.h"
#include "model/CreateTopicRouteTableRequest.h"
#include "model/CreateTopicRouteTableResult.h"
#include "model/CreateProductRequest.h"
#include "model/CreateProductResult.h"
#include "model/UpdateRuleRequest.h"
#include "model/UpdateRuleResult.h"
#include "model/QueryDevicePropertyDataRequest.h"
#include "model/QueryDevicePropertyDataResult.h"
#include "model/UpdateDeviceGroupRequest.h"
#include "model/UpdateDeviceGroupResult.h"
#include "model/DeleteDeviceGroupRequest.h"
#include "model/DeleteDeviceGroupResult.h"
#include "model/QueryDevicePropRequest.h"
#include "model/QueryDevicePropResult.h"
#include "model/DeleteDevicePropRequest.h"
#include "model/DeleteDevicePropResult.h"
#include "model/StopRuleRequest.h"
#include "model/StopRuleResult.h"
#include "model/QueryDeviceGroupByDeviceRequest.h"
#include "model/QueryDeviceGroupByDeviceResult.h"
#include "model/QueryDeviceDetailRequest.h"
#include "model/QueryDeviceDetailResult.h"
#include "model/NotifyAddThingTopoRequest.h"
#include "model/NotifyAddThingTopoResult.h"
#include "model/InvokeThingServiceRequest.h"
#include "model/InvokeThingServiceResult.h"
#include "model/ListRuleActionsRequest.h"
#include "model/ListRuleActionsResult.h"
#include "model/BatchCheckDeviceNamesRequest.h"
#include "model/BatchCheckDeviceNamesResult.h"
#include "model/UpdateProductTopicRequest.h"
#include "model/UpdateProductTopicResult.h"
#include "model/UpdateRuleActionRequest.h"
#include "model/UpdateRuleActionResult.h"
#include "model/UpdateProductRequest.h"
#include "model/UpdateProductResult.h"
#include "model/QueryProductRequest.h"
#include "model/QueryProductResult.h"
#include "model/UpdateDeviceShadowRequest.h"
#include "model/UpdateDeviceShadowResult.h"
#include "model/QueryBatchRegisterDeviceStatusRequest.h"
#include "model/QueryBatchRegisterDeviceStatusResult.h"
#include "model/SetDevicePropertyRequest.h"
#include "model/SetDevicePropertyResult.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"
#include "model/QueryDeviceRequest.h"
#include "model/QueryDeviceResult.h"
#include "model/BatchDeleteDeviceGroupRelationsRequest.h"
#include "model/BatchDeleteDeviceGroupRelationsResult.h"
#include "model/QueryDeviceGroupTagListRequest.h"
#include "model/QueryDeviceGroupTagListResult.h"
#include "model/ListRuleRequest.h"
#include "model/ListRuleResult.h"
#include "model/QueryTopicRouteTableRequest.h"
#include "model/QueryTopicRouteTableResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/StartRuleRequest.h"
#include "model/StartRuleResult.h"
#include "model/QueryProductListRequest.h"
#include "model/QueryProductListResult.h"
#include "model/QueryDevicePropertyStatusRequest.h"
#include "model/QueryDevicePropertyStatusResult.h"
#include "model/QueryDeviceStatisticsRequest.h"
#include "model/QueryDeviceStatisticsResult.h"
#include "model/PubRequest.h"
#include "model/PubResult.h"
#include "model/DeleteProductRequest.h"
#include "model/DeleteProductResult.h"
#include "model/SaveDevicePropRequest.h"
#include "model/SaveDevicePropResult.h"
#include "model/DeleteProductTopicRequest.h"
#include "model/DeleteProductTopicResult.h"
#include "model/QueryDeviceServiceDataRequest.h"
#include "model/QueryDeviceServiceDataResult.h"
#include "model/BatchRegisterDeviceWithApplyIdRequest.h"
#include "model/BatchRegisterDeviceWithApplyIdResult.h"
#include "model/DisableThingRequest.h"
#include "model/DisableThingResult.h"
#include "model/CreateProductTopicRequest.h"
#include "model/CreateProductTopicResult.h"
#include "model/RemoveThingTopoRequest.h"
#include "model/RemoveThingTopoResult.h"
#include "model/QueryTopicReverseRouteTableRequest.h"
#include "model/QueryTopicReverseRouteTableResult.h"
#include "model/BatchGetDeviceStateRequest.h"
#include "model/BatchGetDeviceStateResult.h"
#include "model/GetRuleActionRequest.h"
#include "model/GetRuleActionResult.h"
#include "model/BatchAddDeviceGroupRelationsRequest.h"
#include "model/BatchAddDeviceGroupRelationsResult.h"
#include "model/GetRuleRequest.h"
#include "model/GetRuleResult.h"
#include "model/GetDeviceShadowRequest.h"
#include "model/GetDeviceShadowResult.h"
#include "model/GetGatewayBySubDeviceRequest.h"
#include "model/GetGatewayBySubDeviceResult.h"
#include "model/CreateRuleActionRequest.h"
#include "model/CreateRuleActionResult.h"
#include "model/QueryDeviceGroupInfoRequest.h"
#include "model/QueryDeviceGroupInfoResult.h"
#include "model/BatchRegisterDeviceRequest.h"
#include "model/BatchRegisterDeviceResult.h"
#include "model/DeleteRuleActionRequest.h"
#include "model/DeleteRuleActionResult.h"
#include "model/PubBroadcastRequest.h"
#include "model/PubBroadcastResult.h"


namespace AlibabaCloud
{
	namespace Iot
	{
		class ALIBABACLOUD_IOT_EXPORT IotClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::QueryAppDeviceListResult> QueryAppDeviceListOutcome;
			typedef std::future<QueryAppDeviceListOutcome> QueryAppDeviceListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryAppDeviceListRequest&, const QueryAppDeviceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAppDeviceListAsyncHandler;
			typedef Outcome<Error, Model::DeleteTopicRouteTableResult> DeleteTopicRouteTableOutcome;
			typedef std::future<DeleteTopicRouteTableOutcome> DeleteTopicRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteTopicRouteTableRequest&, const DeleteTopicRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicRouteTableAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupListResult> QueryDeviceGroupListOutcome;
			typedef std::future<QueryDeviceGroupListOutcome> QueryDeviceGroupListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupListRequest&, const QueryDeviceGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupListAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceEventDataResult> QueryDeviceEventDataOutcome;
			typedef std::future<QueryDeviceEventDataOutcome> QueryDeviceEventDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceEventDataRequest&, const QueryDeviceEventDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceEventDataAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceStatusResult> GetDeviceStatusOutcome;
			typedef std::future<GetDeviceStatusOutcome> GetDeviceStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDeviceStatusRequest&, const GetDeviceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceStatusAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceResult> DeleteDeviceOutcome;
			typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceRequest&, const DeleteDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceGroupResult> CreateDeviceGroupOutcome;
			typedef std::future<CreateDeviceGroupOutcome> CreateDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateDeviceGroupRequest&, const CreateDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::EnableThingResult> EnableThingOutcome;
			typedef std::future<EnableThingOutcome> EnableThingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::EnableThingRequest&, const EnableThingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableThingAsyncHandler;
			typedef Outcome<Error, Model::RRpcResult> RRpcOutcome;
			typedef std::future<RRpcOutcome> RRpcOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RRpcRequest&, const RRpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RRpcAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryProductTopicResult> QueryProductTopicOutcome;
			typedef std::future<QueryProductTopicOutcome> QueryProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductTopicRequest&, const QueryProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductTopicAsyncHandler;
			typedef Outcome<Error, Model::GetThingTopoResult> GetThingTopoOutcome;
			typedef std::future<GetThingTopoOutcome> GetThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetThingTopoRequest&, const GetThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetThingTopoAsyncHandler;
			typedef Outcome<Error, Model::QueryPageByApplyIdResult> QueryPageByApplyIdOutcome;
			typedef std::future<QueryPageByApplyIdOutcome> QueryPageByApplyIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryPageByApplyIdRequest&, const QueryPageByApplyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPageByApplyIdAsyncHandler;
			typedef Outcome<Error, Model::ForceSetDeviceGroupTagResult> ForceSetDeviceGroupTagOutcome;
			typedef std::future<ForceSetDeviceGroupTagOutcome> ForceSetDeviceGroupTagOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ForceSetDeviceGroupTagRequest&, const ForceSetDeviceGroupTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForceSetDeviceGroupTagAsyncHandler;
			typedef Outcome<Error, Model::CreateTopicRouteTableResult> CreateTopicRouteTableOutcome;
			typedef std::future<CreateTopicRouteTableOutcome> CreateTopicRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateTopicRouteTableRequest&, const CreateTopicRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicRouteTableAsyncHandler;
			typedef Outcome<Error, Model::CreateProductResult> CreateProductOutcome;
			typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateProductRequest&, const CreateProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleResult> UpdateRuleOutcome;
			typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateRuleRequest&, const UpdateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropertyDataResult> QueryDevicePropertyDataOutcome;
			typedef std::future<QueryDevicePropertyDataOutcome> QueryDevicePropertyDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropertyDataRequest&, const QueryDevicePropertyDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropertyDataAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceGroupResult> UpdateDeviceGroupOutcome;
			typedef std::future<UpdateDeviceGroupOutcome> UpdateDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateDeviceGroupRequest&, const UpdateDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceGroupResult> DeleteDeviceGroupOutcome;
			typedef std::future<DeleteDeviceGroupOutcome> DeleteDeviceGroupOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDeviceGroupRequest&, const DeleteDeviceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropResult> QueryDevicePropOutcome;
			typedef std::future<QueryDevicePropOutcome> QueryDevicePropOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropRequest&, const QueryDevicePropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevicePropResult> DeleteDevicePropOutcome;
			typedef std::future<DeleteDevicePropOutcome> DeleteDevicePropOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteDevicePropRequest&, const DeleteDevicePropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevicePropAsyncHandler;
			typedef Outcome<Error, Model::StopRuleResult> StopRuleOutcome;
			typedef std::future<StopRuleOutcome> StopRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::StopRuleRequest&, const StopRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupByDeviceResult> QueryDeviceGroupByDeviceOutcome;
			typedef std::future<QueryDeviceGroupByDeviceOutcome> QueryDeviceGroupByDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupByDeviceRequest&, const QueryDeviceGroupByDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupByDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceDetailResult> QueryDeviceDetailOutcome;
			typedef std::future<QueryDeviceDetailOutcome> QueryDeviceDetailOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceDetailRequest&, const QueryDeviceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceDetailAsyncHandler;
			typedef Outcome<Error, Model::NotifyAddThingTopoResult> NotifyAddThingTopoOutcome;
			typedef std::future<NotifyAddThingTopoOutcome> NotifyAddThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::NotifyAddThingTopoRequest&, const NotifyAddThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyAddThingTopoAsyncHandler;
			typedef Outcome<Error, Model::InvokeThingServiceResult> InvokeThingServiceOutcome;
			typedef std::future<InvokeThingServiceOutcome> InvokeThingServiceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::InvokeThingServiceRequest&, const InvokeThingServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeThingServiceAsyncHandler;
			typedef Outcome<Error, Model::ListRuleActionsResult> ListRuleActionsOutcome;
			typedef std::future<ListRuleActionsOutcome> ListRuleActionsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListRuleActionsRequest&, const ListRuleActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleActionsAsyncHandler;
			typedef Outcome<Error, Model::BatchCheckDeviceNamesResult> BatchCheckDeviceNamesOutcome;
			typedef std::future<BatchCheckDeviceNamesOutcome> BatchCheckDeviceNamesOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchCheckDeviceNamesRequest&, const BatchCheckDeviceNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCheckDeviceNamesAsyncHandler;
			typedef Outcome<Error, Model::UpdateProductTopicResult> UpdateProductTopicOutcome;
			typedef std::future<UpdateProductTopicOutcome> UpdateProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateProductTopicRequest&, const UpdateProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductTopicAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleActionResult> UpdateRuleActionOutcome;
			typedef std::future<UpdateRuleActionOutcome> UpdateRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateRuleActionRequest&, const UpdateRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleActionAsyncHandler;
			typedef Outcome<Error, Model::UpdateProductResult> UpdateProductOutcome;
			typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateProductRequest&, const UpdateProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductAsyncHandler;
			typedef Outcome<Error, Model::QueryProductResult> QueryProductOutcome;
			typedef std::future<QueryProductOutcome> QueryProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductRequest&, const QueryProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceShadowResult> UpdateDeviceShadowOutcome;
			typedef std::future<UpdateDeviceShadowOutcome> UpdateDeviceShadowOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::UpdateDeviceShadowRequest&, const UpdateDeviceShadowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceShadowAsyncHandler;
			typedef Outcome<Error, Model::QueryBatchRegisterDeviceStatusResult> QueryBatchRegisterDeviceStatusOutcome;
			typedef std::future<QueryBatchRegisterDeviceStatusOutcome> QueryBatchRegisterDeviceStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryBatchRegisterDeviceStatusRequest&, const QueryBatchRegisterDeviceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBatchRegisterDeviceStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDevicePropertyResult> SetDevicePropertyOutcome;
			typedef std::future<SetDevicePropertyOutcome> SetDevicePropertyOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SetDevicePropertyRequest&, const SetDevicePropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDevicePropertyAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceResult> QueryDeviceOutcome;
			typedef std::future<QueryDeviceOutcome> QueryDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceRequest&, const QueryDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDeviceGroupRelationsResult> BatchDeleteDeviceGroupRelationsOutcome;
			typedef std::future<BatchDeleteDeviceGroupRelationsOutcome> BatchDeleteDeviceGroupRelationsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchDeleteDeviceGroupRelationsRequest&, const BatchDeleteDeviceGroupRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDeviceGroupRelationsAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupTagListResult> QueryDeviceGroupTagListOutcome;
			typedef std::future<QueryDeviceGroupTagListOutcome> QueryDeviceGroupTagListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupTagListRequest&, const QueryDeviceGroupTagListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupTagListAsyncHandler;
			typedef Outcome<Error, Model::ListRuleResult> ListRuleOutcome;
			typedef std::future<ListRuleOutcome> ListRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::ListRuleRequest&, const ListRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryTopicRouteTableResult> QueryTopicRouteTableOutcome;
			typedef std::future<QueryTopicRouteTableOutcome> QueryTopicRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryTopicRouteTableRequest&, const QueryTopicRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTopicRouteTableAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::StartRuleResult> StartRuleOutcome;
			typedef std::future<StartRuleOutcome> StartRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::StartRuleRequest&, const StartRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryProductListResult> QueryProductListOutcome;
			typedef std::future<QueryProductListOutcome> QueryProductListOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryProductListRequest&, const QueryProductListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryProductListAsyncHandler;
			typedef Outcome<Error, Model::QueryDevicePropertyStatusResult> QueryDevicePropertyStatusOutcome;
			typedef std::future<QueryDevicePropertyStatusOutcome> QueryDevicePropertyStatusOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDevicePropertyStatusRequest&, const QueryDevicePropertyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDevicePropertyStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceStatisticsResult> QueryDeviceStatisticsOutcome;
			typedef std::future<QueryDeviceStatisticsOutcome> QueryDeviceStatisticsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceStatisticsRequest&, const QueryDeviceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::PubResult> PubOutcome;
			typedef std::future<PubOutcome> PubOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PubRequest&, const PubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PubAsyncHandler;
			typedef Outcome<Error, Model::DeleteProductResult> DeleteProductOutcome;
			typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteProductRequest&, const DeleteProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
			typedef Outcome<Error, Model::SaveDevicePropResult> SaveDevicePropOutcome;
			typedef std::future<SaveDevicePropOutcome> SaveDevicePropOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::SaveDevicePropRequest&, const SaveDevicePropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveDevicePropAsyncHandler;
			typedef Outcome<Error, Model::DeleteProductTopicResult> DeleteProductTopicOutcome;
			typedef std::future<DeleteProductTopicOutcome> DeleteProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteProductTopicRequest&, const DeleteProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductTopicAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceServiceDataResult> QueryDeviceServiceDataOutcome;
			typedef std::future<QueryDeviceServiceDataOutcome> QueryDeviceServiceDataOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceServiceDataRequest&, const QueryDeviceServiceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceServiceDataAsyncHandler;
			typedef Outcome<Error, Model::BatchRegisterDeviceWithApplyIdResult> BatchRegisterDeviceWithApplyIdOutcome;
			typedef std::future<BatchRegisterDeviceWithApplyIdOutcome> BatchRegisterDeviceWithApplyIdOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchRegisterDeviceWithApplyIdRequest&, const BatchRegisterDeviceWithApplyIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterDeviceWithApplyIdAsyncHandler;
			typedef Outcome<Error, Model::DisableThingResult> DisableThingOutcome;
			typedef std::future<DisableThingOutcome> DisableThingOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DisableThingRequest&, const DisableThingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableThingAsyncHandler;
			typedef Outcome<Error, Model::CreateProductTopicResult> CreateProductTopicOutcome;
			typedef std::future<CreateProductTopicOutcome> CreateProductTopicOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateProductTopicRequest&, const CreateProductTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductTopicAsyncHandler;
			typedef Outcome<Error, Model::RemoveThingTopoResult> RemoveThingTopoOutcome;
			typedef std::future<RemoveThingTopoOutcome> RemoveThingTopoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::RemoveThingTopoRequest&, const RemoveThingTopoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveThingTopoAsyncHandler;
			typedef Outcome<Error, Model::QueryTopicReverseRouteTableResult> QueryTopicReverseRouteTableOutcome;
			typedef std::future<QueryTopicReverseRouteTableOutcome> QueryTopicReverseRouteTableOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryTopicReverseRouteTableRequest&, const QueryTopicReverseRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTopicReverseRouteTableAsyncHandler;
			typedef Outcome<Error, Model::BatchGetDeviceStateResult> BatchGetDeviceStateOutcome;
			typedef std::future<BatchGetDeviceStateOutcome> BatchGetDeviceStateOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchGetDeviceStateRequest&, const BatchGetDeviceStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetDeviceStateAsyncHandler;
			typedef Outcome<Error, Model::GetRuleActionResult> GetRuleActionOutcome;
			typedef std::future<GetRuleActionOutcome> GetRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetRuleActionRequest&, const GetRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleActionAsyncHandler;
			typedef Outcome<Error, Model::BatchAddDeviceGroupRelationsResult> BatchAddDeviceGroupRelationsOutcome;
			typedef std::future<BatchAddDeviceGroupRelationsOutcome> BatchAddDeviceGroupRelationsOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchAddDeviceGroupRelationsRequest&, const BatchAddDeviceGroupRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddDeviceGroupRelationsAsyncHandler;
			typedef Outcome<Error, Model::GetRuleResult> GetRuleOutcome;
			typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetRuleRequest&, const GetRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceShadowResult> GetDeviceShadowOutcome;
			typedef std::future<GetDeviceShadowOutcome> GetDeviceShadowOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetDeviceShadowRequest&, const GetDeviceShadowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceShadowAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayBySubDeviceResult> GetGatewayBySubDeviceOutcome;
			typedef std::future<GetGatewayBySubDeviceOutcome> GetGatewayBySubDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::GetGatewayBySubDeviceRequest&, const GetGatewayBySubDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayBySubDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleActionResult> CreateRuleActionOutcome;
			typedef std::future<CreateRuleActionOutcome> CreateRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::CreateRuleActionRequest&, const CreateRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleActionAsyncHandler;
			typedef Outcome<Error, Model::QueryDeviceGroupInfoResult> QueryDeviceGroupInfoOutcome;
			typedef std::future<QueryDeviceGroupInfoOutcome> QueryDeviceGroupInfoOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::QueryDeviceGroupInfoRequest&, const QueryDeviceGroupInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDeviceGroupInfoAsyncHandler;
			typedef Outcome<Error, Model::BatchRegisterDeviceResult> BatchRegisterDeviceOutcome;
			typedef std::future<BatchRegisterDeviceOutcome> BatchRegisterDeviceOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::BatchRegisterDeviceRequest&, const BatchRegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleActionResult> DeleteRuleActionOutcome;
			typedef std::future<DeleteRuleActionOutcome> DeleteRuleActionOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::DeleteRuleActionRequest&, const DeleteRuleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleActionAsyncHandler;
			typedef Outcome<Error, Model::PubBroadcastResult> PubBroadcastOutcome;
			typedef std::future<PubBroadcastOutcome> PubBroadcastOutcomeCallable;
			typedef std::function<void(const IotClient*, const Model::PubBroadcastRequest&, const PubBroadcastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PubBroadcastAsyncHandler;

			IotClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IotClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IotClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IotClient();
			QueryAppDeviceListOutcome queryAppDeviceList(const Model::QueryAppDeviceListRequest &request)const;
			void queryAppDeviceListAsync(const Model::QueryAppDeviceListRequest& request, const QueryAppDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAppDeviceListOutcomeCallable queryAppDeviceListCallable(const Model::QueryAppDeviceListRequest& request) const;
			DeleteTopicRouteTableOutcome deleteTopicRouteTable(const Model::DeleteTopicRouteTableRequest &request)const;
			void deleteTopicRouteTableAsync(const Model::DeleteTopicRouteTableRequest& request, const DeleteTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTopicRouteTableOutcomeCallable deleteTopicRouteTableCallable(const Model::DeleteTopicRouteTableRequest& request) const;
			QueryDeviceGroupListOutcome queryDeviceGroupList(const Model::QueryDeviceGroupListRequest &request)const;
			void queryDeviceGroupListAsync(const Model::QueryDeviceGroupListRequest& request, const QueryDeviceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupListOutcomeCallable queryDeviceGroupListCallable(const Model::QueryDeviceGroupListRequest& request) const;
			QueryDeviceEventDataOutcome queryDeviceEventData(const Model::QueryDeviceEventDataRequest &request)const;
			void queryDeviceEventDataAsync(const Model::QueryDeviceEventDataRequest& request, const QueryDeviceEventDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceEventDataOutcomeCallable queryDeviceEventDataCallable(const Model::QueryDeviceEventDataRequest& request) const;
			GetDeviceStatusOutcome getDeviceStatus(const Model::GetDeviceStatusRequest &request)const;
			void getDeviceStatusAsync(const Model::GetDeviceStatusRequest& request, const GetDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceStatusOutcomeCallable getDeviceStatusCallable(const Model::GetDeviceStatusRequest& request) const;
			DeleteDeviceOutcome deleteDevice(const Model::DeleteDeviceRequest &request)const;
			void deleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceOutcomeCallable deleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;
			CreateDeviceGroupOutcome createDeviceGroup(const Model::CreateDeviceGroupRequest &request)const;
			void createDeviceGroupAsync(const Model::CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceGroupOutcomeCallable createDeviceGroupCallable(const Model::CreateDeviceGroupRequest& request) const;
			EnableThingOutcome enableThing(const Model::EnableThingRequest &request)const;
			void enableThingAsync(const Model::EnableThingRequest& request, const EnableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableThingOutcomeCallable enableThingCallable(const Model::EnableThingRequest& request) const;
			RRpcOutcome rRpc(const Model::RRpcRequest &request)const;
			void rRpcAsync(const Model::RRpcRequest& request, const RRpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RRpcOutcomeCallable rRpcCallable(const Model::RRpcRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			QueryProductTopicOutcome queryProductTopic(const Model::QueryProductTopicRequest &request)const;
			void queryProductTopicAsync(const Model::QueryProductTopicRequest& request, const QueryProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductTopicOutcomeCallable queryProductTopicCallable(const Model::QueryProductTopicRequest& request) const;
			GetThingTopoOutcome getThingTopo(const Model::GetThingTopoRequest &request)const;
			void getThingTopoAsync(const Model::GetThingTopoRequest& request, const GetThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetThingTopoOutcomeCallable getThingTopoCallable(const Model::GetThingTopoRequest& request) const;
			QueryPageByApplyIdOutcome queryPageByApplyId(const Model::QueryPageByApplyIdRequest &request)const;
			void queryPageByApplyIdAsync(const Model::QueryPageByApplyIdRequest& request, const QueryPageByApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPageByApplyIdOutcomeCallable queryPageByApplyIdCallable(const Model::QueryPageByApplyIdRequest& request) const;
			ForceSetDeviceGroupTagOutcome forceSetDeviceGroupTag(const Model::ForceSetDeviceGroupTagRequest &request)const;
			void forceSetDeviceGroupTagAsync(const Model::ForceSetDeviceGroupTagRequest& request, const ForceSetDeviceGroupTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForceSetDeviceGroupTagOutcomeCallable forceSetDeviceGroupTagCallable(const Model::ForceSetDeviceGroupTagRequest& request) const;
			CreateTopicRouteTableOutcome createTopicRouteTable(const Model::CreateTopicRouteTableRequest &request)const;
			void createTopicRouteTableAsync(const Model::CreateTopicRouteTableRequest& request, const CreateTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTopicRouteTableOutcomeCallable createTopicRouteTableCallable(const Model::CreateTopicRouteTableRequest& request) const;
			CreateProductOutcome createProduct(const Model::CreateProductRequest &request)const;
			void createProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProductOutcomeCallable createProductCallable(const Model::CreateProductRequest& request) const;
			UpdateRuleOutcome updateRule(const Model::UpdateRuleRequest &request)const;
			void updateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleOutcomeCallable updateRuleCallable(const Model::UpdateRuleRequest& request) const;
			QueryDevicePropertyDataOutcome queryDevicePropertyData(const Model::QueryDevicePropertyDataRequest &request)const;
			void queryDevicePropertyDataAsync(const Model::QueryDevicePropertyDataRequest& request, const QueryDevicePropertyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropertyDataOutcomeCallable queryDevicePropertyDataCallable(const Model::QueryDevicePropertyDataRequest& request) const;
			UpdateDeviceGroupOutcome updateDeviceGroup(const Model::UpdateDeviceGroupRequest &request)const;
			void updateDeviceGroupAsync(const Model::UpdateDeviceGroupRequest& request, const UpdateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceGroupOutcomeCallable updateDeviceGroupCallable(const Model::UpdateDeviceGroupRequest& request) const;
			DeleteDeviceGroupOutcome deleteDeviceGroup(const Model::DeleteDeviceGroupRequest &request)const;
			void deleteDeviceGroupAsync(const Model::DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceGroupOutcomeCallable deleteDeviceGroupCallable(const Model::DeleteDeviceGroupRequest& request) const;
			QueryDevicePropOutcome queryDeviceProp(const Model::QueryDevicePropRequest &request)const;
			void queryDevicePropAsync(const Model::QueryDevicePropRequest& request, const QueryDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropOutcomeCallable queryDevicePropCallable(const Model::QueryDevicePropRequest& request) const;
			DeleteDevicePropOutcome deleteDeviceProp(const Model::DeleteDevicePropRequest &request)const;
			void deleteDevicePropAsync(const Model::DeleteDevicePropRequest& request, const DeleteDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevicePropOutcomeCallable deleteDevicePropCallable(const Model::DeleteDevicePropRequest& request) const;
			StopRuleOutcome stopRule(const Model::StopRuleRequest &request)const;
			void stopRuleAsync(const Model::StopRuleRequest& request, const StopRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRuleOutcomeCallable stopRuleCallable(const Model::StopRuleRequest& request) const;
			QueryDeviceGroupByDeviceOutcome queryDeviceGroupByDevice(const Model::QueryDeviceGroupByDeviceRequest &request)const;
			void queryDeviceGroupByDeviceAsync(const Model::QueryDeviceGroupByDeviceRequest& request, const QueryDeviceGroupByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupByDeviceOutcomeCallable queryDeviceGroupByDeviceCallable(const Model::QueryDeviceGroupByDeviceRequest& request) const;
			QueryDeviceDetailOutcome queryDeviceDetail(const Model::QueryDeviceDetailRequest &request)const;
			void queryDeviceDetailAsync(const Model::QueryDeviceDetailRequest& request, const QueryDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceDetailOutcomeCallable queryDeviceDetailCallable(const Model::QueryDeviceDetailRequest& request) const;
			NotifyAddThingTopoOutcome notifyAddThingTopo(const Model::NotifyAddThingTopoRequest &request)const;
			void notifyAddThingTopoAsync(const Model::NotifyAddThingTopoRequest& request, const NotifyAddThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyAddThingTopoOutcomeCallable notifyAddThingTopoCallable(const Model::NotifyAddThingTopoRequest& request) const;
			InvokeThingServiceOutcome invokeThingService(const Model::InvokeThingServiceRequest &request)const;
			void invokeThingServiceAsync(const Model::InvokeThingServiceRequest& request, const InvokeThingServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeThingServiceOutcomeCallable invokeThingServiceCallable(const Model::InvokeThingServiceRequest& request) const;
			ListRuleActionsOutcome listRuleActions(const Model::ListRuleActionsRequest &request)const;
			void listRuleActionsAsync(const Model::ListRuleActionsRequest& request, const ListRuleActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleActionsOutcomeCallable listRuleActionsCallable(const Model::ListRuleActionsRequest& request) const;
			BatchCheckDeviceNamesOutcome batchCheckDeviceNames(const Model::BatchCheckDeviceNamesRequest &request)const;
			void batchCheckDeviceNamesAsync(const Model::BatchCheckDeviceNamesRequest& request, const BatchCheckDeviceNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCheckDeviceNamesOutcomeCallable batchCheckDeviceNamesCallable(const Model::BatchCheckDeviceNamesRequest& request) const;
			UpdateProductTopicOutcome updateProductTopic(const Model::UpdateProductTopicRequest &request)const;
			void updateProductTopicAsync(const Model::UpdateProductTopicRequest& request, const UpdateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProductTopicOutcomeCallable updateProductTopicCallable(const Model::UpdateProductTopicRequest& request) const;
			UpdateRuleActionOutcome updateRuleAction(const Model::UpdateRuleActionRequest &request)const;
			void updateRuleActionAsync(const Model::UpdateRuleActionRequest& request, const UpdateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleActionOutcomeCallable updateRuleActionCallable(const Model::UpdateRuleActionRequest& request) const;
			UpdateProductOutcome updateProduct(const Model::UpdateProductRequest &request)const;
			void updateProductAsync(const Model::UpdateProductRequest& request, const UpdateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProductOutcomeCallable updateProductCallable(const Model::UpdateProductRequest& request) const;
			QueryProductOutcome queryProduct(const Model::QueryProductRequest &request)const;
			void queryProductAsync(const Model::QueryProductRequest& request, const QueryProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductOutcomeCallable queryProductCallable(const Model::QueryProductRequest& request) const;
			UpdateDeviceShadowOutcome updateDeviceShadow(const Model::UpdateDeviceShadowRequest &request)const;
			void updateDeviceShadowAsync(const Model::UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceShadowOutcomeCallable updateDeviceShadowCallable(const Model::UpdateDeviceShadowRequest& request) const;
			QueryBatchRegisterDeviceStatusOutcome queryBatchRegisterDeviceStatus(const Model::QueryBatchRegisterDeviceStatusRequest &request)const;
			void queryBatchRegisterDeviceStatusAsync(const Model::QueryBatchRegisterDeviceStatusRequest& request, const QueryBatchRegisterDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBatchRegisterDeviceStatusOutcomeCallable queryBatchRegisterDeviceStatusCallable(const Model::QueryBatchRegisterDeviceStatusRequest& request) const;
			SetDevicePropertyOutcome setDeviceProperty(const Model::SetDevicePropertyRequest &request)const;
			void setDevicePropertyAsync(const Model::SetDevicePropertyRequest& request, const SetDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDevicePropertyOutcomeCallable setDevicePropertyCallable(const Model::SetDevicePropertyRequest& request) const;
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
			QueryDeviceOutcome queryDevice(const Model::QueryDeviceRequest &request)const;
			void queryDeviceAsync(const Model::QueryDeviceRequest& request, const QueryDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceOutcomeCallable queryDeviceCallable(const Model::QueryDeviceRequest& request) const;
			BatchDeleteDeviceGroupRelationsOutcome batchDeleteDeviceGroupRelations(const Model::BatchDeleteDeviceGroupRelationsRequest &request)const;
			void batchDeleteDeviceGroupRelationsAsync(const Model::BatchDeleteDeviceGroupRelationsRequest& request, const BatchDeleteDeviceGroupRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDeviceGroupRelationsOutcomeCallable batchDeleteDeviceGroupRelationsCallable(const Model::BatchDeleteDeviceGroupRelationsRequest& request) const;
			QueryDeviceGroupTagListOutcome queryDeviceGroupTagList(const Model::QueryDeviceGroupTagListRequest &request)const;
			void queryDeviceGroupTagListAsync(const Model::QueryDeviceGroupTagListRequest& request, const QueryDeviceGroupTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupTagListOutcomeCallable queryDeviceGroupTagListCallable(const Model::QueryDeviceGroupTagListRequest& request) const;
			ListRuleOutcome listRule(const Model::ListRuleRequest &request)const;
			void listRuleAsync(const Model::ListRuleRequest& request, const ListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleOutcomeCallable listRuleCallable(const Model::ListRuleRequest& request) const;
			QueryTopicRouteTableOutcome queryTopicRouteTable(const Model::QueryTopicRouteTableRequest &request)const;
			void queryTopicRouteTableAsync(const Model::QueryTopicRouteTableRequest& request, const QueryTopicRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTopicRouteTableOutcomeCallable queryTopicRouteTableCallable(const Model::QueryTopicRouteTableRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			StartRuleOutcome startRule(const Model::StartRuleRequest &request)const;
			void startRuleAsync(const Model::StartRuleRequest& request, const StartRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRuleOutcomeCallable startRuleCallable(const Model::StartRuleRequest& request) const;
			QueryProductListOutcome queryProductList(const Model::QueryProductListRequest &request)const;
			void queryProductListAsync(const Model::QueryProductListRequest& request, const QueryProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryProductListOutcomeCallable queryProductListCallable(const Model::QueryProductListRequest& request) const;
			QueryDevicePropertyStatusOutcome queryDevicePropertyStatus(const Model::QueryDevicePropertyStatusRequest &request)const;
			void queryDevicePropertyStatusAsync(const Model::QueryDevicePropertyStatusRequest& request, const QueryDevicePropertyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDevicePropertyStatusOutcomeCallable queryDevicePropertyStatusCallable(const Model::QueryDevicePropertyStatusRequest& request) const;
			QueryDeviceStatisticsOutcome queryDeviceStatistics(const Model::QueryDeviceStatisticsRequest &request)const;
			void queryDeviceStatisticsAsync(const Model::QueryDeviceStatisticsRequest& request, const QueryDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceStatisticsOutcomeCallable queryDeviceStatisticsCallable(const Model::QueryDeviceStatisticsRequest& request) const;
			PubOutcome pub(const Model::PubRequest &request)const;
			void pubAsync(const Model::PubRequest& request, const PubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PubOutcomeCallable pubCallable(const Model::PubRequest& request) const;
			DeleteProductOutcome deleteProduct(const Model::DeleteProductRequest &request)const;
			void deleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProductOutcomeCallable deleteProductCallable(const Model::DeleteProductRequest& request) const;
			SaveDevicePropOutcome saveDeviceProp(const Model::SaveDevicePropRequest &request)const;
			void saveDevicePropAsync(const Model::SaveDevicePropRequest& request, const SaveDevicePropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveDevicePropOutcomeCallable saveDevicePropCallable(const Model::SaveDevicePropRequest& request) const;
			DeleteProductTopicOutcome deleteProductTopic(const Model::DeleteProductTopicRequest &request)const;
			void deleteProductTopicAsync(const Model::DeleteProductTopicRequest& request, const DeleteProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProductTopicOutcomeCallable deleteProductTopicCallable(const Model::DeleteProductTopicRequest& request) const;
			QueryDeviceServiceDataOutcome queryDeviceServiceData(const Model::QueryDeviceServiceDataRequest &request)const;
			void queryDeviceServiceDataAsync(const Model::QueryDeviceServiceDataRequest& request, const QueryDeviceServiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceServiceDataOutcomeCallable queryDeviceServiceDataCallable(const Model::QueryDeviceServiceDataRequest& request) const;
			BatchRegisterDeviceWithApplyIdOutcome batchRegisterDeviceWithApplyId(const Model::BatchRegisterDeviceWithApplyIdRequest &request)const;
			void batchRegisterDeviceWithApplyIdAsync(const Model::BatchRegisterDeviceWithApplyIdRequest& request, const BatchRegisterDeviceWithApplyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRegisterDeviceWithApplyIdOutcomeCallable batchRegisterDeviceWithApplyIdCallable(const Model::BatchRegisterDeviceWithApplyIdRequest& request) const;
			DisableThingOutcome disableThing(const Model::DisableThingRequest &request)const;
			void disableThingAsync(const Model::DisableThingRequest& request, const DisableThingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableThingOutcomeCallable disableThingCallable(const Model::DisableThingRequest& request) const;
			CreateProductTopicOutcome createProductTopic(const Model::CreateProductTopicRequest &request)const;
			void createProductTopicAsync(const Model::CreateProductTopicRequest& request, const CreateProductTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProductTopicOutcomeCallable createProductTopicCallable(const Model::CreateProductTopicRequest& request) const;
			RemoveThingTopoOutcome removeThingTopo(const Model::RemoveThingTopoRequest &request)const;
			void removeThingTopoAsync(const Model::RemoveThingTopoRequest& request, const RemoveThingTopoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveThingTopoOutcomeCallable removeThingTopoCallable(const Model::RemoveThingTopoRequest& request) const;
			QueryTopicReverseRouteTableOutcome queryTopicReverseRouteTable(const Model::QueryTopicReverseRouteTableRequest &request)const;
			void queryTopicReverseRouteTableAsync(const Model::QueryTopicReverseRouteTableRequest& request, const QueryTopicReverseRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTopicReverseRouteTableOutcomeCallable queryTopicReverseRouteTableCallable(const Model::QueryTopicReverseRouteTableRequest& request) const;
			BatchGetDeviceStateOutcome batchGetDeviceState(const Model::BatchGetDeviceStateRequest &request)const;
			void batchGetDeviceStateAsync(const Model::BatchGetDeviceStateRequest& request, const BatchGetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetDeviceStateOutcomeCallable batchGetDeviceStateCallable(const Model::BatchGetDeviceStateRequest& request) const;
			GetRuleActionOutcome getRuleAction(const Model::GetRuleActionRequest &request)const;
			void getRuleActionAsync(const Model::GetRuleActionRequest& request, const GetRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleActionOutcomeCallable getRuleActionCallable(const Model::GetRuleActionRequest& request) const;
			BatchAddDeviceGroupRelationsOutcome batchAddDeviceGroupRelations(const Model::BatchAddDeviceGroupRelationsRequest &request)const;
			void batchAddDeviceGroupRelationsAsync(const Model::BatchAddDeviceGroupRelationsRequest& request, const BatchAddDeviceGroupRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddDeviceGroupRelationsOutcomeCallable batchAddDeviceGroupRelationsCallable(const Model::BatchAddDeviceGroupRelationsRequest& request) const;
			GetRuleOutcome getRule(const Model::GetRuleRequest &request)const;
			void getRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleOutcomeCallable getRuleCallable(const Model::GetRuleRequest& request) const;
			GetDeviceShadowOutcome getDeviceShadow(const Model::GetDeviceShadowRequest &request)const;
			void getDeviceShadowAsync(const Model::GetDeviceShadowRequest& request, const GetDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceShadowOutcomeCallable getDeviceShadowCallable(const Model::GetDeviceShadowRequest& request) const;
			GetGatewayBySubDeviceOutcome getGatewayBySubDevice(const Model::GetGatewayBySubDeviceRequest &request)const;
			void getGatewayBySubDeviceAsync(const Model::GetGatewayBySubDeviceRequest& request, const GetGatewayBySubDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayBySubDeviceOutcomeCallable getGatewayBySubDeviceCallable(const Model::GetGatewayBySubDeviceRequest& request) const;
			CreateRuleActionOutcome createRuleAction(const Model::CreateRuleActionRequest &request)const;
			void createRuleActionAsync(const Model::CreateRuleActionRequest& request, const CreateRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleActionOutcomeCallable createRuleActionCallable(const Model::CreateRuleActionRequest& request) const;
			QueryDeviceGroupInfoOutcome queryDeviceGroupInfo(const Model::QueryDeviceGroupInfoRequest &request)const;
			void queryDeviceGroupInfoAsync(const Model::QueryDeviceGroupInfoRequest& request, const QueryDeviceGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDeviceGroupInfoOutcomeCallable queryDeviceGroupInfoCallable(const Model::QueryDeviceGroupInfoRequest& request) const;
			BatchRegisterDeviceOutcome batchRegisterDevice(const Model::BatchRegisterDeviceRequest &request)const;
			void batchRegisterDeviceAsync(const Model::BatchRegisterDeviceRequest& request, const BatchRegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRegisterDeviceOutcomeCallable batchRegisterDeviceCallable(const Model::BatchRegisterDeviceRequest& request) const;
			DeleteRuleActionOutcome deleteRuleAction(const Model::DeleteRuleActionRequest &request)const;
			void deleteRuleActionAsync(const Model::DeleteRuleActionRequest& request, const DeleteRuleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleActionOutcomeCallable deleteRuleActionCallable(const Model::DeleteRuleActionRequest& request) const;
			PubBroadcastOutcome pubBroadcast(const Model::PubBroadcastRequest &request)const;
			void pubBroadcastAsync(const Model::PubBroadcastRequest& request, const PubBroadcastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PubBroadcastOutcomeCallable pubBroadcastCallable(const Model::PubBroadcastRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IOT_IOTCLIENT_H_
