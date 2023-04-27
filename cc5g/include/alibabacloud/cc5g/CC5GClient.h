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

#ifndef ALIBABACLOUD_CC5G_CC5GCLIENT_H_
#define ALIBABACLOUD_CC5G_CC5GCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CC5GExport.h"
#include "model/AddDNSAuthorizationRuleRequest.h"
#include "model/AddDNSAuthorizationRuleResult.h"
#include "model/AddGroupDnsAuthorizationRuleRequest.h"
#include "model/AddGroupDnsAuthorizationRuleResult.h"
#include "model/AddWirelessCloudConnectorToGroupRequest.h"
#include "model/AddWirelessCloudConnectorToGroupResult.h"
#include "model/AttachVpcToNetLinkRequest.h"
#include "model/AttachVpcToNetLinkResult.h"
#include "model/CreateAuthorizationRuleRequest.h"
#include "model/CreateAuthorizationRuleResult.h"
#include "model/CreateBatchOperateCardsTaskRequest.h"
#include "model/CreateBatchOperateCardsTaskResult.h"
#include "model/CreateGroupAuthorizationRuleRequest.h"
#include "model/CreateGroupAuthorizationRuleResult.h"
#include "model/CreateIoTCloudConnectorBackhaulRouteRequest.h"
#include "model/CreateIoTCloudConnectorBackhaulRouteResult.h"
#include "model/CreateWirelessCloudConnectorRequest.h"
#include "model/CreateWirelessCloudConnectorResult.h"
#include "model/CreateWirelessCloudConnectorGroupRequest.h"
#include "model/CreateWirelessCloudConnectorGroupResult.h"
#include "model/DeleteAuthorizationRuleRequest.h"
#include "model/DeleteAuthorizationRuleResult.h"
#include "model/DeleteBatchOperateCardsTaskRequest.h"
#include "model/DeleteBatchOperateCardsTaskResult.h"
#include "model/DeleteGroupAuthorizationRuleRequest.h"
#include "model/DeleteGroupAuthorizationRuleResult.h"
#include "model/DeleteIoTCloudConnectorBackhaulRouteRequest.h"
#include "model/DeleteIoTCloudConnectorBackhaulRouteResult.h"
#include "model/DeleteWirelessCloudConnectorRequest.h"
#include "model/DeleteWirelessCloudConnectorResult.h"
#include "model/DeleteWirelessCloudConnectorGroupRequest.h"
#include "model/DeleteWirelessCloudConnectorGroupResult.h"
#include "model/DetachVpcFromNetLinkRequest.h"
#include "model/DetachVpcFromNetLinkResult.h"
#include "model/FailCardsRequest.h"
#include "model/FailCardsResult.h"
#include "model/GetCardRequest.h"
#include "model/GetCardResult.h"
#include "model/GetCardLockReasonRequest.h"
#include "model/GetCardLockReasonResult.h"
#include "model/GetCreateCustomerInformationRequest.h"
#include "model/GetCreateCustomerInformationResult.h"
#include "model/GetDiagnoseResultForSingleCardRequest.h"
#include "model/GetDiagnoseResultForSingleCardResult.h"
#include "model/GetWirelessCloudConnectorRequest.h"
#include "model/GetWirelessCloudConnectorResult.h"
#include "model/GrantNetLinkRequest.h"
#include "model/GrantNetLinkResult.h"
#include "model/ListAPNsRequest.h"
#include "model/ListAPNsResult.h"
#include "model/ListAuthorizationRulesRequest.h"
#include "model/ListAuthorizationRulesResult.h"
#include "model/ListBatchOperateCardsTasksRequest.h"
#include "model/ListBatchOperateCardsTasksResult.h"
#include "model/ListCardDayUsagesRequest.h"
#include "model/ListCardDayUsagesResult.h"
#include "model/ListCardUsagesRequest.h"
#include "model/ListCardUsagesResult.h"
#include "model/ListCardsRequest.h"
#include "model/ListCardsResult.h"
#include "model/ListDataPackagesRequest.h"
#include "model/ListDataPackagesResult.h"
#include "model/ListDiagnoseInfoForSingleCardRequest.h"
#include "model/ListDiagnoseInfoForSingleCardResult.h"
#include "model/ListGroupAuthorizationRulesRequest.h"
#include "model/ListGroupAuthorizationRulesResult.h"
#include "model/ListIoTCloudConnectorBackhaulRouteRequest.h"
#include "model/ListIoTCloudConnectorBackhaulRouteResult.h"
#include "model/ListOrdersRequest.h"
#include "model/ListOrdersResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListWirelessCloudConnectorGroupsRequest.h"
#include "model/ListWirelessCloudConnectorGroupsResult.h"
#include "model/ListWirelessCloudConnectorsRequest.h"
#include "model/ListWirelessCloudConnectorsResult.h"
#include "model/ListZonesRequest.h"
#include "model/ListZonesResult.h"
#include "model/LockCardsRequest.h"
#include "model/LockCardsResult.h"
#include "model/ModifyWirelessCloudConnectorFeatureRequest.h"
#include "model/ModifyWirelessCloudConnectorFeatureResult.h"
#include "model/OpenCc5gServiceRequest.h"
#include "model/OpenCc5gServiceResult.h"
#include "model/RebindCardsRequest.h"
#include "model/RebindCardsResult.h"
#include "model/RemoveWirelessCloudConnectorFromGroupRequest.h"
#include "model/RemoveWirelessCloudConnectorFromGroupResult.h"
#include "model/ResumeCardsRequest.h"
#include "model/ResumeCardsResult.h"
#include "model/RevokeNetLinkRequest.h"
#include "model/RevokeNetLinkResult.h"
#include "model/StopCardsRequest.h"
#include "model/StopCardsResult.h"
#include "model/SubmitDiagnoseTaskForSingleCardRequest.h"
#include "model/SubmitDiagnoseTaskForSingleCardResult.h"
#include "model/SwitchWirelessCloudConnectorToBusinessRequest.h"
#include "model/SwitchWirelessCloudConnectorToBusinessResult.h"
#include "model/UnlockCardsRequest.h"
#include "model/UnlockCardsResult.h"
#include "model/UpdateAuthorizationRuleRequest.h"
#include "model/UpdateAuthorizationRuleResult.h"
#include "model/UpdateBatchOperateCardsTaskRequest.h"
#include "model/UpdateBatchOperateCardsTaskResult.h"
#include "model/UpdateCardRequest.h"
#include "model/UpdateCardResult.h"
#include "model/UpdateDNSAuthorizationRuleRequest.h"
#include "model/UpdateDNSAuthorizationRuleResult.h"
#include "model/UpdateGroupAuthorizationRuleRequest.h"
#include "model/UpdateGroupAuthorizationRuleResult.h"
#include "model/UpdateGroupDnsAuthorizationRuleRequest.h"
#include "model/UpdateGroupDnsAuthorizationRuleResult.h"
#include "model/UpdateWirelessCloudConnectorRequest.h"
#include "model/UpdateWirelessCloudConnectorResult.h"
#include "model/UpdateWirelessCloudConnectorGroupRequest.h"
#include "model/UpdateWirelessCloudConnectorGroupResult.h"


namespace AlibabaCloud
{
	namespace CC5G
	{
		class ALIBABACLOUD_CC5G_EXPORT CC5GClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDNSAuthorizationRuleResult> AddDNSAuthorizationRuleOutcome;
			typedef std::future<AddDNSAuthorizationRuleOutcome> AddDNSAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::AddDNSAuthorizationRuleRequest&, const AddDNSAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDNSAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::AddGroupDnsAuthorizationRuleResult> AddGroupDnsAuthorizationRuleOutcome;
			typedef std::future<AddGroupDnsAuthorizationRuleOutcome> AddGroupDnsAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::AddGroupDnsAuthorizationRuleRequest&, const AddGroupDnsAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupDnsAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::AddWirelessCloudConnectorToGroupResult> AddWirelessCloudConnectorToGroupOutcome;
			typedef std::future<AddWirelessCloudConnectorToGroupOutcome> AddWirelessCloudConnectorToGroupOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::AddWirelessCloudConnectorToGroupRequest&, const AddWirelessCloudConnectorToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWirelessCloudConnectorToGroupAsyncHandler;
			typedef Outcome<Error, Model::AttachVpcToNetLinkResult> AttachVpcToNetLinkOutcome;
			typedef std::future<AttachVpcToNetLinkOutcome> AttachVpcToNetLinkOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::AttachVpcToNetLinkRequest&, const AttachVpcToNetLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachVpcToNetLinkAsyncHandler;
			typedef Outcome<Error, Model::CreateAuthorizationRuleResult> CreateAuthorizationRuleOutcome;
			typedef std::future<CreateAuthorizationRuleOutcome> CreateAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::CreateAuthorizationRuleRequest&, const CreateAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateBatchOperateCardsTaskResult> CreateBatchOperateCardsTaskOutcome;
			typedef std::future<CreateBatchOperateCardsTaskOutcome> CreateBatchOperateCardsTaskOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::CreateBatchOperateCardsTaskRequest&, const CreateBatchOperateCardsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchOperateCardsTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupAuthorizationRuleResult> CreateGroupAuthorizationRuleOutcome;
			typedef std::future<CreateGroupAuthorizationRuleOutcome> CreateGroupAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::CreateGroupAuthorizationRuleRequest&, const CreateGroupAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateIoTCloudConnectorBackhaulRouteResult> CreateIoTCloudConnectorBackhaulRouteOutcome;
			typedef std::future<CreateIoTCloudConnectorBackhaulRouteOutcome> CreateIoTCloudConnectorBackhaulRouteOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::CreateIoTCloudConnectorBackhaulRouteRequest&, const CreateIoTCloudConnectorBackhaulRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIoTCloudConnectorBackhaulRouteAsyncHandler;
			typedef Outcome<Error, Model::CreateWirelessCloudConnectorResult> CreateWirelessCloudConnectorOutcome;
			typedef std::future<CreateWirelessCloudConnectorOutcome> CreateWirelessCloudConnectorOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::CreateWirelessCloudConnectorRequest&, const CreateWirelessCloudConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWirelessCloudConnectorAsyncHandler;
			typedef Outcome<Error, Model::CreateWirelessCloudConnectorGroupResult> CreateWirelessCloudConnectorGroupOutcome;
			typedef std::future<CreateWirelessCloudConnectorGroupOutcome> CreateWirelessCloudConnectorGroupOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::CreateWirelessCloudConnectorGroupRequest&, const CreateWirelessCloudConnectorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWirelessCloudConnectorGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAuthorizationRuleResult> DeleteAuthorizationRuleOutcome;
			typedef std::future<DeleteAuthorizationRuleOutcome> DeleteAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DeleteAuthorizationRuleRequest&, const DeleteAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteBatchOperateCardsTaskResult> DeleteBatchOperateCardsTaskOutcome;
			typedef std::future<DeleteBatchOperateCardsTaskOutcome> DeleteBatchOperateCardsTaskOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DeleteBatchOperateCardsTaskRequest&, const DeleteBatchOperateCardsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBatchOperateCardsTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupAuthorizationRuleResult> DeleteGroupAuthorizationRuleOutcome;
			typedef std::future<DeleteGroupAuthorizationRuleOutcome> DeleteGroupAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DeleteGroupAuthorizationRuleRequest&, const DeleteGroupAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteIoTCloudConnectorBackhaulRouteResult> DeleteIoTCloudConnectorBackhaulRouteOutcome;
			typedef std::future<DeleteIoTCloudConnectorBackhaulRouteOutcome> DeleteIoTCloudConnectorBackhaulRouteOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DeleteIoTCloudConnectorBackhaulRouteRequest&, const DeleteIoTCloudConnectorBackhaulRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIoTCloudConnectorBackhaulRouteAsyncHandler;
			typedef Outcome<Error, Model::DeleteWirelessCloudConnectorResult> DeleteWirelessCloudConnectorOutcome;
			typedef std::future<DeleteWirelessCloudConnectorOutcome> DeleteWirelessCloudConnectorOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DeleteWirelessCloudConnectorRequest&, const DeleteWirelessCloudConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWirelessCloudConnectorAsyncHandler;
			typedef Outcome<Error, Model::DeleteWirelessCloudConnectorGroupResult> DeleteWirelessCloudConnectorGroupOutcome;
			typedef std::future<DeleteWirelessCloudConnectorGroupOutcome> DeleteWirelessCloudConnectorGroupOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DeleteWirelessCloudConnectorGroupRequest&, const DeleteWirelessCloudConnectorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWirelessCloudConnectorGroupAsyncHandler;
			typedef Outcome<Error, Model::DetachVpcFromNetLinkResult> DetachVpcFromNetLinkOutcome;
			typedef std::future<DetachVpcFromNetLinkOutcome> DetachVpcFromNetLinkOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::DetachVpcFromNetLinkRequest&, const DetachVpcFromNetLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachVpcFromNetLinkAsyncHandler;
			typedef Outcome<Error, Model::FailCardsResult> FailCardsOutcome;
			typedef std::future<FailCardsOutcome> FailCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::FailCardsRequest&, const FailCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FailCardsAsyncHandler;
			typedef Outcome<Error, Model::GetCardResult> GetCardOutcome;
			typedef std::future<GetCardOutcome> GetCardOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::GetCardRequest&, const GetCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCardAsyncHandler;
			typedef Outcome<Error, Model::GetCardLockReasonResult> GetCardLockReasonOutcome;
			typedef std::future<GetCardLockReasonOutcome> GetCardLockReasonOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::GetCardLockReasonRequest&, const GetCardLockReasonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCardLockReasonAsyncHandler;
			typedef Outcome<Error, Model::GetCreateCustomerInformationResult> GetCreateCustomerInformationOutcome;
			typedef std::future<GetCreateCustomerInformationOutcome> GetCreateCustomerInformationOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::GetCreateCustomerInformationRequest&, const GetCreateCustomerInformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreateCustomerInformationAsyncHandler;
			typedef Outcome<Error, Model::GetDiagnoseResultForSingleCardResult> GetDiagnoseResultForSingleCardOutcome;
			typedef std::future<GetDiagnoseResultForSingleCardOutcome> GetDiagnoseResultForSingleCardOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::GetDiagnoseResultForSingleCardRequest&, const GetDiagnoseResultForSingleCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDiagnoseResultForSingleCardAsyncHandler;
			typedef Outcome<Error, Model::GetWirelessCloudConnectorResult> GetWirelessCloudConnectorOutcome;
			typedef std::future<GetWirelessCloudConnectorOutcome> GetWirelessCloudConnectorOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::GetWirelessCloudConnectorRequest&, const GetWirelessCloudConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWirelessCloudConnectorAsyncHandler;
			typedef Outcome<Error, Model::GrantNetLinkResult> GrantNetLinkOutcome;
			typedef std::future<GrantNetLinkOutcome> GrantNetLinkOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::GrantNetLinkRequest&, const GrantNetLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantNetLinkAsyncHandler;
			typedef Outcome<Error, Model::ListAPNsResult> ListAPNsOutcome;
			typedef std::future<ListAPNsOutcome> ListAPNsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListAPNsRequest&, const ListAPNsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAPNsAsyncHandler;
			typedef Outcome<Error, Model::ListAuthorizationRulesResult> ListAuthorizationRulesOutcome;
			typedef std::future<ListAuthorizationRulesOutcome> ListAuthorizationRulesOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListAuthorizationRulesRequest&, const ListAuthorizationRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorizationRulesAsyncHandler;
			typedef Outcome<Error, Model::ListBatchOperateCardsTasksResult> ListBatchOperateCardsTasksOutcome;
			typedef std::future<ListBatchOperateCardsTasksOutcome> ListBatchOperateCardsTasksOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListBatchOperateCardsTasksRequest&, const ListBatchOperateCardsTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBatchOperateCardsTasksAsyncHandler;
			typedef Outcome<Error, Model::ListCardDayUsagesResult> ListCardDayUsagesOutcome;
			typedef std::future<ListCardDayUsagesOutcome> ListCardDayUsagesOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListCardDayUsagesRequest&, const ListCardDayUsagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCardDayUsagesAsyncHandler;
			typedef Outcome<Error, Model::ListCardUsagesResult> ListCardUsagesOutcome;
			typedef std::future<ListCardUsagesOutcome> ListCardUsagesOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListCardUsagesRequest&, const ListCardUsagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCardUsagesAsyncHandler;
			typedef Outcome<Error, Model::ListCardsResult> ListCardsOutcome;
			typedef std::future<ListCardsOutcome> ListCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListCardsRequest&, const ListCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCardsAsyncHandler;
			typedef Outcome<Error, Model::ListDataPackagesResult> ListDataPackagesOutcome;
			typedef std::future<ListDataPackagesOutcome> ListDataPackagesOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListDataPackagesRequest&, const ListDataPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataPackagesAsyncHandler;
			typedef Outcome<Error, Model::ListDiagnoseInfoForSingleCardResult> ListDiagnoseInfoForSingleCardOutcome;
			typedef std::future<ListDiagnoseInfoForSingleCardOutcome> ListDiagnoseInfoForSingleCardOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListDiagnoseInfoForSingleCardRequest&, const ListDiagnoseInfoForSingleCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiagnoseInfoForSingleCardAsyncHandler;
			typedef Outcome<Error, Model::ListGroupAuthorizationRulesResult> ListGroupAuthorizationRulesOutcome;
			typedef std::future<ListGroupAuthorizationRulesOutcome> ListGroupAuthorizationRulesOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListGroupAuthorizationRulesRequest&, const ListGroupAuthorizationRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupAuthorizationRulesAsyncHandler;
			typedef Outcome<Error, Model::ListIoTCloudConnectorBackhaulRouteResult> ListIoTCloudConnectorBackhaulRouteOutcome;
			typedef std::future<ListIoTCloudConnectorBackhaulRouteOutcome> ListIoTCloudConnectorBackhaulRouteOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListIoTCloudConnectorBackhaulRouteRequest&, const ListIoTCloudConnectorBackhaulRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIoTCloudConnectorBackhaulRouteAsyncHandler;
			typedef Outcome<Error, Model::ListOrdersResult> ListOrdersOutcome;
			typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListOrdersRequest&, const ListOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListWirelessCloudConnectorGroupsResult> ListWirelessCloudConnectorGroupsOutcome;
			typedef std::future<ListWirelessCloudConnectorGroupsOutcome> ListWirelessCloudConnectorGroupsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListWirelessCloudConnectorGroupsRequest&, const ListWirelessCloudConnectorGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWirelessCloudConnectorGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListWirelessCloudConnectorsResult> ListWirelessCloudConnectorsOutcome;
			typedef std::future<ListWirelessCloudConnectorsOutcome> ListWirelessCloudConnectorsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListWirelessCloudConnectorsRequest&, const ListWirelessCloudConnectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWirelessCloudConnectorsAsyncHandler;
			typedef Outcome<Error, Model::ListZonesResult> ListZonesOutcome;
			typedef std::future<ListZonesOutcome> ListZonesOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ListZonesRequest&, const ListZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListZonesAsyncHandler;
			typedef Outcome<Error, Model::LockCardsResult> LockCardsOutcome;
			typedef std::future<LockCardsOutcome> LockCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::LockCardsRequest&, const LockCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockCardsAsyncHandler;
			typedef Outcome<Error, Model::ModifyWirelessCloudConnectorFeatureResult> ModifyWirelessCloudConnectorFeatureOutcome;
			typedef std::future<ModifyWirelessCloudConnectorFeatureOutcome> ModifyWirelessCloudConnectorFeatureOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ModifyWirelessCloudConnectorFeatureRequest&, const ModifyWirelessCloudConnectorFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWirelessCloudConnectorFeatureAsyncHandler;
			typedef Outcome<Error, Model::OpenCc5gServiceResult> OpenCc5gServiceOutcome;
			typedef std::future<OpenCc5gServiceOutcome> OpenCc5gServiceOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::OpenCc5gServiceRequest&, const OpenCc5gServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenCc5gServiceAsyncHandler;
			typedef Outcome<Error, Model::RebindCardsResult> RebindCardsOutcome;
			typedef std::future<RebindCardsOutcome> RebindCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::RebindCardsRequest&, const RebindCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebindCardsAsyncHandler;
			typedef Outcome<Error, Model::RemoveWirelessCloudConnectorFromGroupResult> RemoveWirelessCloudConnectorFromGroupOutcome;
			typedef std::future<RemoveWirelessCloudConnectorFromGroupOutcome> RemoveWirelessCloudConnectorFromGroupOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::RemoveWirelessCloudConnectorFromGroupRequest&, const RemoveWirelessCloudConnectorFromGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWirelessCloudConnectorFromGroupAsyncHandler;
			typedef Outcome<Error, Model::ResumeCardsResult> ResumeCardsOutcome;
			typedef std::future<ResumeCardsOutcome> ResumeCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::ResumeCardsRequest&, const ResumeCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeCardsAsyncHandler;
			typedef Outcome<Error, Model::RevokeNetLinkResult> RevokeNetLinkOutcome;
			typedef std::future<RevokeNetLinkOutcome> RevokeNetLinkOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::RevokeNetLinkRequest&, const RevokeNetLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeNetLinkAsyncHandler;
			typedef Outcome<Error, Model::StopCardsResult> StopCardsOutcome;
			typedef std::future<StopCardsOutcome> StopCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::StopCardsRequest&, const StopCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCardsAsyncHandler;
			typedef Outcome<Error, Model::SubmitDiagnoseTaskForSingleCardResult> SubmitDiagnoseTaskForSingleCardOutcome;
			typedef std::future<SubmitDiagnoseTaskForSingleCardOutcome> SubmitDiagnoseTaskForSingleCardOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::SubmitDiagnoseTaskForSingleCardRequest&, const SubmitDiagnoseTaskForSingleCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDiagnoseTaskForSingleCardAsyncHandler;
			typedef Outcome<Error, Model::SwitchWirelessCloudConnectorToBusinessResult> SwitchWirelessCloudConnectorToBusinessOutcome;
			typedef std::future<SwitchWirelessCloudConnectorToBusinessOutcome> SwitchWirelessCloudConnectorToBusinessOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::SwitchWirelessCloudConnectorToBusinessRequest&, const SwitchWirelessCloudConnectorToBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchWirelessCloudConnectorToBusinessAsyncHandler;
			typedef Outcome<Error, Model::UnlockCardsResult> UnlockCardsOutcome;
			typedef std::future<UnlockCardsOutcome> UnlockCardsOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UnlockCardsRequest&, const UnlockCardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockCardsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuthorizationRuleResult> UpdateAuthorizationRuleOutcome;
			typedef std::future<UpdateAuthorizationRuleOutcome> UpdateAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateAuthorizationRuleRequest&, const UpdateAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateBatchOperateCardsTaskResult> UpdateBatchOperateCardsTaskOutcome;
			typedef std::future<UpdateBatchOperateCardsTaskOutcome> UpdateBatchOperateCardsTaskOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateBatchOperateCardsTaskRequest&, const UpdateBatchOperateCardsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBatchOperateCardsTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateCardResult> UpdateCardOutcome;
			typedef std::future<UpdateCardOutcome> UpdateCardOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateCardRequest&, const UpdateCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCardAsyncHandler;
			typedef Outcome<Error, Model::UpdateDNSAuthorizationRuleResult> UpdateDNSAuthorizationRuleOutcome;
			typedef std::future<UpdateDNSAuthorizationRuleOutcome> UpdateDNSAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateDNSAuthorizationRuleRequest&, const UpdateDNSAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDNSAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupAuthorizationRuleResult> UpdateGroupAuthorizationRuleOutcome;
			typedef std::future<UpdateGroupAuthorizationRuleOutcome> UpdateGroupAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateGroupAuthorizationRuleRequest&, const UpdateGroupAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupDnsAuthorizationRuleResult> UpdateGroupDnsAuthorizationRuleOutcome;
			typedef std::future<UpdateGroupDnsAuthorizationRuleOutcome> UpdateGroupDnsAuthorizationRuleOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateGroupDnsAuthorizationRuleRequest&, const UpdateGroupDnsAuthorizationRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupDnsAuthorizationRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateWirelessCloudConnectorResult> UpdateWirelessCloudConnectorOutcome;
			typedef std::future<UpdateWirelessCloudConnectorOutcome> UpdateWirelessCloudConnectorOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateWirelessCloudConnectorRequest&, const UpdateWirelessCloudConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWirelessCloudConnectorAsyncHandler;
			typedef Outcome<Error, Model::UpdateWirelessCloudConnectorGroupResult> UpdateWirelessCloudConnectorGroupOutcome;
			typedef std::future<UpdateWirelessCloudConnectorGroupOutcome> UpdateWirelessCloudConnectorGroupOutcomeCallable;
			typedef std::function<void(const CC5GClient*, const Model::UpdateWirelessCloudConnectorGroupRequest&, const UpdateWirelessCloudConnectorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWirelessCloudConnectorGroupAsyncHandler;

			CC5GClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CC5GClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CC5GClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CC5GClient();
			AddDNSAuthorizationRuleOutcome addDNSAuthorizationRule(const Model::AddDNSAuthorizationRuleRequest &request)const;
			void addDNSAuthorizationRuleAsync(const Model::AddDNSAuthorizationRuleRequest& request, const AddDNSAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDNSAuthorizationRuleOutcomeCallable addDNSAuthorizationRuleCallable(const Model::AddDNSAuthorizationRuleRequest& request) const;
			AddGroupDnsAuthorizationRuleOutcome addGroupDnsAuthorizationRule(const Model::AddGroupDnsAuthorizationRuleRequest &request)const;
			void addGroupDnsAuthorizationRuleAsync(const Model::AddGroupDnsAuthorizationRuleRequest& request, const AddGroupDnsAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGroupDnsAuthorizationRuleOutcomeCallable addGroupDnsAuthorizationRuleCallable(const Model::AddGroupDnsAuthorizationRuleRequest& request) const;
			AddWirelessCloudConnectorToGroupOutcome addWirelessCloudConnectorToGroup(const Model::AddWirelessCloudConnectorToGroupRequest &request)const;
			void addWirelessCloudConnectorToGroupAsync(const Model::AddWirelessCloudConnectorToGroupRequest& request, const AddWirelessCloudConnectorToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWirelessCloudConnectorToGroupOutcomeCallable addWirelessCloudConnectorToGroupCallable(const Model::AddWirelessCloudConnectorToGroupRequest& request) const;
			AttachVpcToNetLinkOutcome attachVpcToNetLink(const Model::AttachVpcToNetLinkRequest &request)const;
			void attachVpcToNetLinkAsync(const Model::AttachVpcToNetLinkRequest& request, const AttachVpcToNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachVpcToNetLinkOutcomeCallable attachVpcToNetLinkCallable(const Model::AttachVpcToNetLinkRequest& request) const;
			CreateAuthorizationRuleOutcome createAuthorizationRule(const Model::CreateAuthorizationRuleRequest &request)const;
			void createAuthorizationRuleAsync(const Model::CreateAuthorizationRuleRequest& request, const CreateAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuthorizationRuleOutcomeCallable createAuthorizationRuleCallable(const Model::CreateAuthorizationRuleRequest& request) const;
			CreateBatchOperateCardsTaskOutcome createBatchOperateCardsTask(const Model::CreateBatchOperateCardsTaskRequest &request)const;
			void createBatchOperateCardsTaskAsync(const Model::CreateBatchOperateCardsTaskRequest& request, const CreateBatchOperateCardsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBatchOperateCardsTaskOutcomeCallable createBatchOperateCardsTaskCallable(const Model::CreateBatchOperateCardsTaskRequest& request) const;
			CreateGroupAuthorizationRuleOutcome createGroupAuthorizationRule(const Model::CreateGroupAuthorizationRuleRequest &request)const;
			void createGroupAuthorizationRuleAsync(const Model::CreateGroupAuthorizationRuleRequest& request, const CreateGroupAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupAuthorizationRuleOutcomeCallable createGroupAuthorizationRuleCallable(const Model::CreateGroupAuthorizationRuleRequest& request) const;
			CreateIoTCloudConnectorBackhaulRouteOutcome createIoTCloudConnectorBackhaulRoute(const Model::CreateIoTCloudConnectorBackhaulRouteRequest &request)const;
			void createIoTCloudConnectorBackhaulRouteAsync(const Model::CreateIoTCloudConnectorBackhaulRouteRequest& request, const CreateIoTCloudConnectorBackhaulRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIoTCloudConnectorBackhaulRouteOutcomeCallable createIoTCloudConnectorBackhaulRouteCallable(const Model::CreateIoTCloudConnectorBackhaulRouteRequest& request) const;
			CreateWirelessCloudConnectorOutcome createWirelessCloudConnector(const Model::CreateWirelessCloudConnectorRequest &request)const;
			void createWirelessCloudConnectorAsync(const Model::CreateWirelessCloudConnectorRequest& request, const CreateWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWirelessCloudConnectorOutcomeCallable createWirelessCloudConnectorCallable(const Model::CreateWirelessCloudConnectorRequest& request) const;
			CreateWirelessCloudConnectorGroupOutcome createWirelessCloudConnectorGroup(const Model::CreateWirelessCloudConnectorGroupRequest &request)const;
			void createWirelessCloudConnectorGroupAsync(const Model::CreateWirelessCloudConnectorGroupRequest& request, const CreateWirelessCloudConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWirelessCloudConnectorGroupOutcomeCallable createWirelessCloudConnectorGroupCallable(const Model::CreateWirelessCloudConnectorGroupRequest& request) const;
			DeleteAuthorizationRuleOutcome deleteAuthorizationRule(const Model::DeleteAuthorizationRuleRequest &request)const;
			void deleteAuthorizationRuleAsync(const Model::DeleteAuthorizationRuleRequest& request, const DeleteAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAuthorizationRuleOutcomeCallable deleteAuthorizationRuleCallable(const Model::DeleteAuthorizationRuleRequest& request) const;
			DeleteBatchOperateCardsTaskOutcome deleteBatchOperateCardsTask(const Model::DeleteBatchOperateCardsTaskRequest &request)const;
			void deleteBatchOperateCardsTaskAsync(const Model::DeleteBatchOperateCardsTaskRequest& request, const DeleteBatchOperateCardsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBatchOperateCardsTaskOutcomeCallable deleteBatchOperateCardsTaskCallable(const Model::DeleteBatchOperateCardsTaskRequest& request) const;
			DeleteGroupAuthorizationRuleOutcome deleteGroupAuthorizationRule(const Model::DeleteGroupAuthorizationRuleRequest &request)const;
			void deleteGroupAuthorizationRuleAsync(const Model::DeleteGroupAuthorizationRuleRequest& request, const DeleteGroupAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupAuthorizationRuleOutcomeCallable deleteGroupAuthorizationRuleCallable(const Model::DeleteGroupAuthorizationRuleRequest& request) const;
			DeleteIoTCloudConnectorBackhaulRouteOutcome deleteIoTCloudConnectorBackhaulRoute(const Model::DeleteIoTCloudConnectorBackhaulRouteRequest &request)const;
			void deleteIoTCloudConnectorBackhaulRouteAsync(const Model::DeleteIoTCloudConnectorBackhaulRouteRequest& request, const DeleteIoTCloudConnectorBackhaulRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIoTCloudConnectorBackhaulRouteOutcomeCallable deleteIoTCloudConnectorBackhaulRouteCallable(const Model::DeleteIoTCloudConnectorBackhaulRouteRequest& request) const;
			DeleteWirelessCloudConnectorOutcome deleteWirelessCloudConnector(const Model::DeleteWirelessCloudConnectorRequest &request)const;
			void deleteWirelessCloudConnectorAsync(const Model::DeleteWirelessCloudConnectorRequest& request, const DeleteWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWirelessCloudConnectorOutcomeCallable deleteWirelessCloudConnectorCallable(const Model::DeleteWirelessCloudConnectorRequest& request) const;
			DeleteWirelessCloudConnectorGroupOutcome deleteWirelessCloudConnectorGroup(const Model::DeleteWirelessCloudConnectorGroupRequest &request)const;
			void deleteWirelessCloudConnectorGroupAsync(const Model::DeleteWirelessCloudConnectorGroupRequest& request, const DeleteWirelessCloudConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWirelessCloudConnectorGroupOutcomeCallable deleteWirelessCloudConnectorGroupCallable(const Model::DeleteWirelessCloudConnectorGroupRequest& request) const;
			DetachVpcFromNetLinkOutcome detachVpcFromNetLink(const Model::DetachVpcFromNetLinkRequest &request)const;
			void detachVpcFromNetLinkAsync(const Model::DetachVpcFromNetLinkRequest& request, const DetachVpcFromNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachVpcFromNetLinkOutcomeCallable detachVpcFromNetLinkCallable(const Model::DetachVpcFromNetLinkRequest& request) const;
			FailCardsOutcome failCards(const Model::FailCardsRequest &request)const;
			void failCardsAsync(const Model::FailCardsRequest& request, const FailCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FailCardsOutcomeCallable failCardsCallable(const Model::FailCardsRequest& request) const;
			GetCardOutcome getCard(const Model::GetCardRequest &request)const;
			void getCardAsync(const Model::GetCardRequest& request, const GetCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCardOutcomeCallable getCardCallable(const Model::GetCardRequest& request) const;
			GetCardLockReasonOutcome getCardLockReason(const Model::GetCardLockReasonRequest &request)const;
			void getCardLockReasonAsync(const Model::GetCardLockReasonRequest& request, const GetCardLockReasonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCardLockReasonOutcomeCallable getCardLockReasonCallable(const Model::GetCardLockReasonRequest& request) const;
			GetCreateCustomerInformationOutcome getCreateCustomerInformation(const Model::GetCreateCustomerInformationRequest &request)const;
			void getCreateCustomerInformationAsync(const Model::GetCreateCustomerInformationRequest& request, const GetCreateCustomerInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreateCustomerInformationOutcomeCallable getCreateCustomerInformationCallable(const Model::GetCreateCustomerInformationRequest& request) const;
			GetDiagnoseResultForSingleCardOutcome getDiagnoseResultForSingleCard(const Model::GetDiagnoseResultForSingleCardRequest &request)const;
			void getDiagnoseResultForSingleCardAsync(const Model::GetDiagnoseResultForSingleCardRequest& request, const GetDiagnoseResultForSingleCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDiagnoseResultForSingleCardOutcomeCallable getDiagnoseResultForSingleCardCallable(const Model::GetDiagnoseResultForSingleCardRequest& request) const;
			GetWirelessCloudConnectorOutcome getWirelessCloudConnector(const Model::GetWirelessCloudConnectorRequest &request)const;
			void getWirelessCloudConnectorAsync(const Model::GetWirelessCloudConnectorRequest& request, const GetWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWirelessCloudConnectorOutcomeCallable getWirelessCloudConnectorCallable(const Model::GetWirelessCloudConnectorRequest& request) const;
			GrantNetLinkOutcome grantNetLink(const Model::GrantNetLinkRequest &request)const;
			void grantNetLinkAsync(const Model::GrantNetLinkRequest& request, const GrantNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantNetLinkOutcomeCallable grantNetLinkCallable(const Model::GrantNetLinkRequest& request) const;
			ListAPNsOutcome listAPNs(const Model::ListAPNsRequest &request)const;
			void listAPNsAsync(const Model::ListAPNsRequest& request, const ListAPNsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAPNsOutcomeCallable listAPNsCallable(const Model::ListAPNsRequest& request) const;
			ListAuthorizationRulesOutcome listAuthorizationRules(const Model::ListAuthorizationRulesRequest &request)const;
			void listAuthorizationRulesAsync(const Model::ListAuthorizationRulesRequest& request, const ListAuthorizationRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuthorizationRulesOutcomeCallable listAuthorizationRulesCallable(const Model::ListAuthorizationRulesRequest& request) const;
			ListBatchOperateCardsTasksOutcome listBatchOperateCardsTasks(const Model::ListBatchOperateCardsTasksRequest &request)const;
			void listBatchOperateCardsTasksAsync(const Model::ListBatchOperateCardsTasksRequest& request, const ListBatchOperateCardsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBatchOperateCardsTasksOutcomeCallable listBatchOperateCardsTasksCallable(const Model::ListBatchOperateCardsTasksRequest& request) const;
			ListCardDayUsagesOutcome listCardDayUsages(const Model::ListCardDayUsagesRequest &request)const;
			void listCardDayUsagesAsync(const Model::ListCardDayUsagesRequest& request, const ListCardDayUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCardDayUsagesOutcomeCallable listCardDayUsagesCallable(const Model::ListCardDayUsagesRequest& request) const;
			ListCardUsagesOutcome listCardUsages(const Model::ListCardUsagesRequest &request)const;
			void listCardUsagesAsync(const Model::ListCardUsagesRequest& request, const ListCardUsagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCardUsagesOutcomeCallable listCardUsagesCallable(const Model::ListCardUsagesRequest& request) const;
			ListCardsOutcome listCards(const Model::ListCardsRequest &request)const;
			void listCardsAsync(const Model::ListCardsRequest& request, const ListCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCardsOutcomeCallable listCardsCallable(const Model::ListCardsRequest& request) const;
			ListDataPackagesOutcome listDataPackages(const Model::ListDataPackagesRequest &request)const;
			void listDataPackagesAsync(const Model::ListDataPackagesRequest& request, const ListDataPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataPackagesOutcomeCallable listDataPackagesCallable(const Model::ListDataPackagesRequest& request) const;
			ListDiagnoseInfoForSingleCardOutcome listDiagnoseInfoForSingleCard(const Model::ListDiagnoseInfoForSingleCardRequest &request)const;
			void listDiagnoseInfoForSingleCardAsync(const Model::ListDiagnoseInfoForSingleCardRequest& request, const ListDiagnoseInfoForSingleCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiagnoseInfoForSingleCardOutcomeCallable listDiagnoseInfoForSingleCardCallable(const Model::ListDiagnoseInfoForSingleCardRequest& request) const;
			ListGroupAuthorizationRulesOutcome listGroupAuthorizationRules(const Model::ListGroupAuthorizationRulesRequest &request)const;
			void listGroupAuthorizationRulesAsync(const Model::ListGroupAuthorizationRulesRequest& request, const ListGroupAuthorizationRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupAuthorizationRulesOutcomeCallable listGroupAuthorizationRulesCallable(const Model::ListGroupAuthorizationRulesRequest& request) const;
			ListIoTCloudConnectorBackhaulRouteOutcome listIoTCloudConnectorBackhaulRoute(const Model::ListIoTCloudConnectorBackhaulRouteRequest &request)const;
			void listIoTCloudConnectorBackhaulRouteAsync(const Model::ListIoTCloudConnectorBackhaulRouteRequest& request, const ListIoTCloudConnectorBackhaulRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIoTCloudConnectorBackhaulRouteOutcomeCallable listIoTCloudConnectorBackhaulRouteCallable(const Model::ListIoTCloudConnectorBackhaulRouteRequest& request) const;
			ListOrdersOutcome listOrders(const Model::ListOrdersRequest &request)const;
			void listOrdersAsync(const Model::ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrdersOutcomeCallable listOrdersCallable(const Model::ListOrdersRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListWirelessCloudConnectorGroupsOutcome listWirelessCloudConnectorGroups(const Model::ListWirelessCloudConnectorGroupsRequest &request)const;
			void listWirelessCloudConnectorGroupsAsync(const Model::ListWirelessCloudConnectorGroupsRequest& request, const ListWirelessCloudConnectorGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWirelessCloudConnectorGroupsOutcomeCallable listWirelessCloudConnectorGroupsCallable(const Model::ListWirelessCloudConnectorGroupsRequest& request) const;
			ListWirelessCloudConnectorsOutcome listWirelessCloudConnectors(const Model::ListWirelessCloudConnectorsRequest &request)const;
			void listWirelessCloudConnectorsAsync(const Model::ListWirelessCloudConnectorsRequest& request, const ListWirelessCloudConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWirelessCloudConnectorsOutcomeCallable listWirelessCloudConnectorsCallable(const Model::ListWirelessCloudConnectorsRequest& request) const;
			ListZonesOutcome listZones(const Model::ListZonesRequest &request)const;
			void listZonesAsync(const Model::ListZonesRequest& request, const ListZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListZonesOutcomeCallable listZonesCallable(const Model::ListZonesRequest& request) const;
			LockCardsOutcome lockCards(const Model::LockCardsRequest &request)const;
			void lockCardsAsync(const Model::LockCardsRequest& request, const LockCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockCardsOutcomeCallable lockCardsCallable(const Model::LockCardsRequest& request) const;
			ModifyWirelessCloudConnectorFeatureOutcome modifyWirelessCloudConnectorFeature(const Model::ModifyWirelessCloudConnectorFeatureRequest &request)const;
			void modifyWirelessCloudConnectorFeatureAsync(const Model::ModifyWirelessCloudConnectorFeatureRequest& request, const ModifyWirelessCloudConnectorFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWirelessCloudConnectorFeatureOutcomeCallable modifyWirelessCloudConnectorFeatureCallable(const Model::ModifyWirelessCloudConnectorFeatureRequest& request) const;
			OpenCc5gServiceOutcome openCc5gService(const Model::OpenCc5gServiceRequest &request)const;
			void openCc5gServiceAsync(const Model::OpenCc5gServiceRequest& request, const OpenCc5gServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenCc5gServiceOutcomeCallable openCc5gServiceCallable(const Model::OpenCc5gServiceRequest& request) const;
			RebindCardsOutcome rebindCards(const Model::RebindCardsRequest &request)const;
			void rebindCardsAsync(const Model::RebindCardsRequest& request, const RebindCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebindCardsOutcomeCallable rebindCardsCallable(const Model::RebindCardsRequest& request) const;
			RemoveWirelessCloudConnectorFromGroupOutcome removeWirelessCloudConnectorFromGroup(const Model::RemoveWirelessCloudConnectorFromGroupRequest &request)const;
			void removeWirelessCloudConnectorFromGroupAsync(const Model::RemoveWirelessCloudConnectorFromGroupRequest& request, const RemoveWirelessCloudConnectorFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveWirelessCloudConnectorFromGroupOutcomeCallable removeWirelessCloudConnectorFromGroupCallable(const Model::RemoveWirelessCloudConnectorFromGroupRequest& request) const;
			ResumeCardsOutcome resumeCards(const Model::ResumeCardsRequest &request)const;
			void resumeCardsAsync(const Model::ResumeCardsRequest& request, const ResumeCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeCardsOutcomeCallable resumeCardsCallable(const Model::ResumeCardsRequest& request) const;
			RevokeNetLinkOutcome revokeNetLink(const Model::RevokeNetLinkRequest &request)const;
			void revokeNetLinkAsync(const Model::RevokeNetLinkRequest& request, const RevokeNetLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeNetLinkOutcomeCallable revokeNetLinkCallable(const Model::RevokeNetLinkRequest& request) const;
			StopCardsOutcome stopCards(const Model::StopCardsRequest &request)const;
			void stopCardsAsync(const Model::StopCardsRequest& request, const StopCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCardsOutcomeCallable stopCardsCallable(const Model::StopCardsRequest& request) const;
			SubmitDiagnoseTaskForSingleCardOutcome submitDiagnoseTaskForSingleCard(const Model::SubmitDiagnoseTaskForSingleCardRequest &request)const;
			void submitDiagnoseTaskForSingleCardAsync(const Model::SubmitDiagnoseTaskForSingleCardRequest& request, const SubmitDiagnoseTaskForSingleCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDiagnoseTaskForSingleCardOutcomeCallable submitDiagnoseTaskForSingleCardCallable(const Model::SubmitDiagnoseTaskForSingleCardRequest& request) const;
			SwitchWirelessCloudConnectorToBusinessOutcome switchWirelessCloudConnectorToBusiness(const Model::SwitchWirelessCloudConnectorToBusinessRequest &request)const;
			void switchWirelessCloudConnectorToBusinessAsync(const Model::SwitchWirelessCloudConnectorToBusinessRequest& request, const SwitchWirelessCloudConnectorToBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchWirelessCloudConnectorToBusinessOutcomeCallable switchWirelessCloudConnectorToBusinessCallable(const Model::SwitchWirelessCloudConnectorToBusinessRequest& request) const;
			UnlockCardsOutcome unlockCards(const Model::UnlockCardsRequest &request)const;
			void unlockCardsAsync(const Model::UnlockCardsRequest& request, const UnlockCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockCardsOutcomeCallable unlockCardsCallable(const Model::UnlockCardsRequest& request) const;
			UpdateAuthorizationRuleOutcome updateAuthorizationRule(const Model::UpdateAuthorizationRuleRequest &request)const;
			void updateAuthorizationRuleAsync(const Model::UpdateAuthorizationRuleRequest& request, const UpdateAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuthorizationRuleOutcomeCallable updateAuthorizationRuleCallable(const Model::UpdateAuthorizationRuleRequest& request) const;
			UpdateBatchOperateCardsTaskOutcome updateBatchOperateCardsTask(const Model::UpdateBatchOperateCardsTaskRequest &request)const;
			void updateBatchOperateCardsTaskAsync(const Model::UpdateBatchOperateCardsTaskRequest& request, const UpdateBatchOperateCardsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBatchOperateCardsTaskOutcomeCallable updateBatchOperateCardsTaskCallable(const Model::UpdateBatchOperateCardsTaskRequest& request) const;
			UpdateCardOutcome updateCard(const Model::UpdateCardRequest &request)const;
			void updateCardAsync(const Model::UpdateCardRequest& request, const UpdateCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCardOutcomeCallable updateCardCallable(const Model::UpdateCardRequest& request) const;
			UpdateDNSAuthorizationRuleOutcome updateDNSAuthorizationRule(const Model::UpdateDNSAuthorizationRuleRequest &request)const;
			void updateDNSAuthorizationRuleAsync(const Model::UpdateDNSAuthorizationRuleRequest& request, const UpdateDNSAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDNSAuthorizationRuleOutcomeCallable updateDNSAuthorizationRuleCallable(const Model::UpdateDNSAuthorizationRuleRequest& request) const;
			UpdateGroupAuthorizationRuleOutcome updateGroupAuthorizationRule(const Model::UpdateGroupAuthorizationRuleRequest &request)const;
			void updateGroupAuthorizationRuleAsync(const Model::UpdateGroupAuthorizationRuleRequest& request, const UpdateGroupAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupAuthorizationRuleOutcomeCallable updateGroupAuthorizationRuleCallable(const Model::UpdateGroupAuthorizationRuleRequest& request) const;
			UpdateGroupDnsAuthorizationRuleOutcome updateGroupDnsAuthorizationRule(const Model::UpdateGroupDnsAuthorizationRuleRequest &request)const;
			void updateGroupDnsAuthorizationRuleAsync(const Model::UpdateGroupDnsAuthorizationRuleRequest& request, const UpdateGroupDnsAuthorizationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupDnsAuthorizationRuleOutcomeCallable updateGroupDnsAuthorizationRuleCallable(const Model::UpdateGroupDnsAuthorizationRuleRequest& request) const;
			UpdateWirelessCloudConnectorOutcome updateWirelessCloudConnector(const Model::UpdateWirelessCloudConnectorRequest &request)const;
			void updateWirelessCloudConnectorAsync(const Model::UpdateWirelessCloudConnectorRequest& request, const UpdateWirelessCloudConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWirelessCloudConnectorOutcomeCallable updateWirelessCloudConnectorCallable(const Model::UpdateWirelessCloudConnectorRequest& request) const;
			UpdateWirelessCloudConnectorGroupOutcome updateWirelessCloudConnectorGroup(const Model::UpdateWirelessCloudConnectorGroupRequest &request)const;
			void updateWirelessCloudConnectorGroupAsync(const Model::UpdateWirelessCloudConnectorGroupRequest& request, const UpdateWirelessCloudConnectorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWirelessCloudConnectorGroupOutcomeCallable updateWirelessCloudConnectorGroupCallable(const Model::UpdateWirelessCloudConnectorGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CC5G_CC5GCLIENT_H_
