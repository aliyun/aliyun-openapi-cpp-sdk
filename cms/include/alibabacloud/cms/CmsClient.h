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

#ifndef ALIBABACLOUD_CMS_CMSCLIENT_H_
#define ALIBABACLOUD_CMS_CMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CmsExport.h"
#include "model/ProfileSetRequest.h"
#include "model/ProfileSetResult.h"
#include "model/ListProductOfActiceAlertRequest.h"
#include "model/ListProductOfActiceAlertResult.h"
#include "model/DeleteCustomMetricRequest.h"
#include "model/DeleteCustomMetricResult.h"
#include "model/GetNotifyPolicyRequest.h"
#include "model/GetNotifyPolicyResult.h"
#include "model/NodeUninstallRequest.h"
#include "model/NodeUninstallResult.h"
#include "model/QueryCustomEventCountRequest.h"
#include "model/QueryCustomEventCountResult.h"
#include "model/UpdateMyGroupInstancesRequest.h"
#include "model/UpdateMyGroupInstancesResult.h"
#include "model/ProfileGetRequest.h"
#include "model/ProfileGetResult.h"
#include "model/PutSystemEventRequest.h"
#include "model/PutSystemEventResult.h"
#include "model/QueryCustomMetricListRequest.h"
#include "model/QueryCustomMetricListResult.h"
#include "model/EnableActiveAlertRequest.h"
#include "model/EnableActiveAlertResult.h"
#include "model/QuerySystemEventDetailRequest.h"
#include "model/QuerySystemEventDetailResult.h"
#include "model/CreateNotifyPolicyRequest.h"
#include "model/CreateNotifyPolicyResult.h"
#include "model/DeleteAlarmRequest.h"
#include "model/DeleteAlarmResult.h"
#include "model/NodeListRequest.h"
#include "model/NodeListResult.h"
#include "model/NodeProcessesRequest.h"
#include "model/NodeProcessesResult.h"
#include "model/ListMyGroupCategoriesRequest.h"
#include "model/ListMyGroupCategoriesResult.h"
#include "model/QueryMetricListRequest.h"
#include "model/QueryMetricListResult.h"
#include "model/ListMyGroupInstancesDetailsRequest.h"
#include "model/ListMyGroupInstancesDetailsResult.h"
#include "model/DisableAlarmRequest.h"
#include "model/DisableAlarmResult.h"
#include "model/PutCustomMetricRequest.h"
#include "model/PutCustomMetricResult.h"
#include "model/DeleteMyGroupsRequest.h"
#include "model/DeleteMyGroupsResult.h"
#include "model/QueryMetricLastRequest.h"
#include "model/QueryMetricLastResult.h"
#include "model/QuerySystemEventHistogramRequest.h"
#include "model/QuerySystemEventHistogramResult.h"
#include "model/DescribeAlarmHistoryRequest.h"
#include "model/DescribeAlarmHistoryResult.h"
#include "model/NodeStatusRequest.h"
#include "model/NodeStatusResult.h"
#include "model/DeleteMyGroupInstancesRequest.h"
#include "model/DeleteMyGroupInstancesResult.h"
#include "model/ListProductOfActiveAlertRequest.h"
#include "model/ListProductOfActiveAlertResult.h"
#include "model/CreateMyGroupsRequest.h"
#include "model/CreateMyGroupsResult.h"
#include "model/CreateAlarmRequest.h"
#include "model/CreateAlarmResult.h"
#include "model/ListActiveAlertRuleRequest.h"
#include "model/ListActiveAlertRuleResult.h"
#include "model/ListMyGroupsRequest.h"
#include "model/ListMyGroupsResult.h"
#include "model/DeleteNotifyPolicyRequest.h"
#include "model/DeleteNotifyPolicyResult.h"
#include "model/AddMyGroupInstancesRequest.h"
#include "model/AddMyGroupInstancesResult.h"
#include "model/NodeProcessDeleteRequest.h"
#include "model/NodeProcessDeleteResult.h"
#include "model/UpdateMyGroupsRequest.h"
#include "model/UpdateMyGroupsResult.h"
#include "model/QuerySystemEventCountRequest.h"
#include "model/QuerySystemEventCountResult.h"
#include "model/ListMyGroupInstancesRequest.h"
#include "model/ListMyGroupInstancesResult.h"
#include "model/AccessKeyGetRequest.h"
#include "model/AccessKeyGetResult.h"
#include "model/EnableActiceAlertRequest.h"
#include "model/EnableActiceAlertResult.h"
#include "model/PutMetricDataRequest.h"
#include "model/PutMetricDataResult.h"
#include "model/DisableActiveAlertRequest.h"
#include "model/DisableActiveAlertResult.h"
#include "model/DisableActiceAlertRequest.h"
#include "model/DisableActiceAlertResult.h"
#include "model/ListAlarmRequest.h"
#include "model/ListAlarmResult.h"
#include "model/NodeInstallRequest.h"
#include "model/NodeInstallResult.h"
#include "model/QueryCustomEventHistogramRequest.h"
#include "model/QueryCustomEventHistogramResult.h"
#include "model/PutEventRequest.h"
#include "model/PutEventResult.h"
#include "model/ListAlarmHistoryRequest.h"
#include "model/ListAlarmHistoryResult.h"
#include "model/NodeStatusListRequest.h"
#include "model/NodeStatusListResult.h"
#include "model/ListContactGroupRequest.h"
#include "model/ListContactGroupResult.h"
#include "model/GetMyGroupsRequest.h"
#include "model/GetMyGroupsResult.h"
#include "model/ListNotifyPolicyRequest.h"
#include "model/ListNotifyPolicyResult.h"
#include "model/UpdateAlarmRequest.h"
#include "model/UpdateAlarmResult.h"
#include "model/NodeProcessCreateRequest.h"
#include "model/NodeProcessCreateResult.h"
#include "model/EnableAlarmRequest.h"
#include "model/EnableAlarmResult.h"
#include "model/QueryCustomEventDetailRequest.h"
#include "model/QueryCustomEventDetailResult.h"


namespace AlibabaCloud
{
	namespace Cms
	{
		class ALIBABACLOUD_CMS_EXPORT CmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ProfileSetResult> ProfileSetOutcome;			
			typedef std::future<ProfileSetOutcome> ProfileSetOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ProfileSetRequest&, const ProfileSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileSetAsyncHandler;
			typedef Outcome<Error, Model::ListProductOfActiceAlertResult> ListProductOfActiceAlertOutcome;			
			typedef std::future<ListProductOfActiceAlertOutcome> ListProductOfActiceAlertOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListProductOfActiceAlertRequest&, const ListProductOfActiceAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductOfActiceAlertAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomMetricResult> DeleteCustomMetricOutcome;			
			typedef std::future<DeleteCustomMetricOutcome> DeleteCustomMetricOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DeleteCustomMetricRequest&, const DeleteCustomMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomMetricAsyncHandler;
			typedef Outcome<Error, Model::GetNotifyPolicyResult> GetNotifyPolicyOutcome;			
			typedef std::future<GetNotifyPolicyOutcome> GetNotifyPolicyOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::GetNotifyPolicyRequest&, const GetNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::NodeUninstallResult> NodeUninstallOutcome;			
			typedef std::future<NodeUninstallOutcome> NodeUninstallOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeUninstallRequest&, const NodeUninstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeUninstallAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomEventCountResult> QueryCustomEventCountOutcome;			
			typedef std::future<QueryCustomEventCountOutcome> QueryCustomEventCountOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QueryCustomEventCountRequest&, const QueryCustomEventCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomEventCountAsyncHandler;
			typedef Outcome<Error, Model::UpdateMyGroupInstancesResult> UpdateMyGroupInstancesOutcome;			
			typedef std::future<UpdateMyGroupInstancesOutcome> UpdateMyGroupInstancesOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::UpdateMyGroupInstancesRequest&, const UpdateMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::ProfileGetResult> ProfileGetOutcome;			
			typedef std::future<ProfileGetOutcome> ProfileGetOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ProfileGetRequest&, const ProfileGetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProfileGetAsyncHandler;
			typedef Outcome<Error, Model::PutSystemEventResult> PutSystemEventOutcome;			
			typedef std::future<PutSystemEventOutcome> PutSystemEventOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::PutSystemEventRequest&, const PutSystemEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutSystemEventAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomMetricListResult> QueryCustomMetricListOutcome;			
			typedef std::future<QueryCustomMetricListOutcome> QueryCustomMetricListOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QueryCustomMetricListRequest&, const QueryCustomMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomMetricListAsyncHandler;
			typedef Outcome<Error, Model::EnableActiveAlertResult> EnableActiveAlertOutcome;			
			typedef std::future<EnableActiveAlertOutcome> EnableActiveAlertOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::EnableActiveAlertRequest&, const EnableActiveAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableActiveAlertAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventDetailResult> QuerySystemEventDetailOutcome;			
			typedef std::future<QuerySystemEventDetailOutcome> QuerySystemEventDetailOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventDetailRequest&, const QuerySystemEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventDetailAsyncHandler;
			typedef Outcome<Error, Model::CreateNotifyPolicyResult> CreateNotifyPolicyOutcome;			
			typedef std::future<CreateNotifyPolicyOutcome> CreateNotifyPolicyOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::CreateNotifyPolicyRequest&, const CreateNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlarmResult> DeleteAlarmOutcome;			
			typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DeleteAlarmRequest&, const DeleteAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
			typedef Outcome<Error, Model::NodeListResult> NodeListOutcome;			
			typedef std::future<NodeListOutcome> NodeListOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeListRequest&, const NodeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeListAsyncHandler;
			typedef Outcome<Error, Model::NodeProcessesResult> NodeProcessesOutcome;			
			typedef std::future<NodeProcessesOutcome> NodeProcessesOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeProcessesRequest&, const NodeProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeProcessesAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupCategoriesResult> ListMyGroupCategoriesOutcome;			
			typedef std::future<ListMyGroupCategoriesOutcome> ListMyGroupCategoriesOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupCategoriesRequest&, const ListMyGroupCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupCategoriesAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricListResult> QueryMetricListOutcome;			
			typedef std::future<QueryMetricListOutcome> QueryMetricListOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QueryMetricListRequest&, const QueryMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricListAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupInstancesDetailsResult> ListMyGroupInstancesDetailsOutcome;			
			typedef std::future<ListMyGroupInstancesDetailsOutcome> ListMyGroupInstancesDetailsOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupInstancesDetailsRequest&, const ListMyGroupInstancesDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupInstancesDetailsAsyncHandler;
			typedef Outcome<Error, Model::DisableAlarmResult> DisableAlarmOutcome;			
			typedef std::future<DisableAlarmOutcome> DisableAlarmOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DisableAlarmRequest&, const DisableAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAlarmAsyncHandler;
			typedef Outcome<Error, Model::PutCustomMetricResult> PutCustomMetricOutcome;			
			typedef std::future<PutCustomMetricOutcome> PutCustomMetricOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::PutCustomMetricRequest&, const PutCustomMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutCustomMetricAsyncHandler;
			typedef Outcome<Error, Model::DeleteMyGroupsResult> DeleteMyGroupsOutcome;			
			typedef std::future<DeleteMyGroupsOutcome> DeleteMyGroupsOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DeleteMyGroupsRequest&, const DeleteMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricLastResult> QueryMetricLastOutcome;			
			typedef std::future<QueryMetricLastOutcome> QueryMetricLastOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QueryMetricLastRequest&, const QueryMetricLastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricLastAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventHistogramResult> QuerySystemEventHistogramOutcome;			
			typedef std::future<QuerySystemEventHistogramOutcome> QuerySystemEventHistogramOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventHistogramRequest&, const QuerySystemEventHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmHistoryResult> DescribeAlarmHistoryOutcome;			
			typedef std::future<DescribeAlarmHistoryOutcome> DescribeAlarmHistoryOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DescribeAlarmHistoryRequest&, const DescribeAlarmHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoryAsyncHandler;
			typedef Outcome<Error, Model::NodeStatusResult> NodeStatusOutcome;			
			typedef std::future<NodeStatusOutcome> NodeStatusOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeStatusRequest&, const NodeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeStatusAsyncHandler;
			typedef Outcome<Error, Model::DeleteMyGroupInstancesResult> DeleteMyGroupInstancesOutcome;			
			typedef std::future<DeleteMyGroupInstancesOutcome> DeleteMyGroupInstancesOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DeleteMyGroupInstancesRequest&, const DeleteMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListProductOfActiveAlertResult> ListProductOfActiveAlertOutcome;			
			typedef std::future<ListProductOfActiveAlertOutcome> ListProductOfActiveAlertOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListProductOfActiveAlertRequest&, const ListProductOfActiveAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductOfActiveAlertAsyncHandler;
			typedef Outcome<Error, Model::CreateMyGroupsResult> CreateMyGroupsOutcome;			
			typedef std::future<CreateMyGroupsOutcome> CreateMyGroupsOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::CreateMyGroupsRequest&, const CreateMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::CreateAlarmResult> CreateAlarmOutcome;			
			typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::CreateAlarmRequest&, const CreateAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
			typedef Outcome<Error, Model::ListActiveAlertRuleResult> ListActiveAlertRuleOutcome;			
			typedef std::future<ListActiveAlertRuleOutcome> ListActiveAlertRuleOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListActiveAlertRuleRequest&, const ListActiveAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActiveAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupsResult> ListMyGroupsOutcome;			
			typedef std::future<ListMyGroupsOutcome> ListMyGroupsOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupsRequest&, const ListMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNotifyPolicyResult> DeleteNotifyPolicyOutcome;			
			typedef std::future<DeleteNotifyPolicyOutcome> DeleteNotifyPolicyOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DeleteNotifyPolicyRequest&, const DeleteNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::AddMyGroupInstancesResult> AddMyGroupInstancesOutcome;			
			typedef std::future<AddMyGroupInstancesOutcome> AddMyGroupInstancesOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::AddMyGroupInstancesRequest&, const AddMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::NodeProcessDeleteResult> NodeProcessDeleteOutcome;			
			typedef std::future<NodeProcessDeleteOutcome> NodeProcessDeleteOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeProcessDeleteRequest&, const NodeProcessDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeProcessDeleteAsyncHandler;
			typedef Outcome<Error, Model::UpdateMyGroupsResult> UpdateMyGroupsOutcome;			
			typedef std::future<UpdateMyGroupsOutcome> UpdateMyGroupsOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::UpdateMyGroupsRequest&, const UpdateMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::QuerySystemEventCountResult> QuerySystemEventCountOutcome;			
			typedef std::future<QuerySystemEventCountOutcome> QuerySystemEventCountOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QuerySystemEventCountRequest&, const QuerySystemEventCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySystemEventCountAsyncHandler;
			typedef Outcome<Error, Model::ListMyGroupInstancesResult> ListMyGroupInstancesOutcome;			
			typedef std::future<ListMyGroupInstancesOutcome> ListMyGroupInstancesOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListMyGroupInstancesRequest&, const ListMyGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMyGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::AccessKeyGetResult> AccessKeyGetOutcome;			
			typedef std::future<AccessKeyGetOutcome> AccessKeyGetOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::AccessKeyGetRequest&, const AccessKeyGetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AccessKeyGetAsyncHandler;
			typedef Outcome<Error, Model::EnableActiceAlertResult> EnableActiceAlertOutcome;			
			typedef std::future<EnableActiceAlertOutcome> EnableActiceAlertOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::EnableActiceAlertRequest&, const EnableActiceAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableActiceAlertAsyncHandler;
			typedef Outcome<Error, Model::PutMetricDataResult> PutMetricDataOutcome;			
			typedef std::future<PutMetricDataOutcome> PutMetricDataOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::PutMetricDataRequest&, const PutMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DisableActiveAlertResult> DisableActiveAlertOutcome;			
			typedef std::future<DisableActiveAlertOutcome> DisableActiveAlertOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DisableActiveAlertRequest&, const DisableActiveAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableActiveAlertAsyncHandler;
			typedef Outcome<Error, Model::DisableActiceAlertResult> DisableActiceAlertOutcome;			
			typedef std::future<DisableActiceAlertOutcome> DisableActiceAlertOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::DisableActiceAlertRequest&, const DisableActiceAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableActiceAlertAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmResult> ListAlarmOutcome;			
			typedef std::future<ListAlarmOutcome> ListAlarmOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListAlarmRequest&, const ListAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmAsyncHandler;
			typedef Outcome<Error, Model::NodeInstallResult> NodeInstallOutcome;			
			typedef std::future<NodeInstallOutcome> NodeInstallOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeInstallRequest&, const NodeInstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeInstallAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomEventHistogramResult> QueryCustomEventHistogramOutcome;			
			typedef std::future<QueryCustomEventHistogramOutcome> QueryCustomEventHistogramOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QueryCustomEventHistogramRequest&, const QueryCustomEventHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomEventHistogramAsyncHandler;
			typedef Outcome<Error, Model::PutEventResult> PutEventOutcome;			
			typedef std::future<PutEventOutcome> PutEventOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::PutEventRequest&, const PutEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutEventAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmHistoryResult> ListAlarmHistoryOutcome;			
			typedef std::future<ListAlarmHistoryOutcome> ListAlarmHistoryOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListAlarmHistoryRequest&, const ListAlarmHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmHistoryAsyncHandler;
			typedef Outcome<Error, Model::NodeStatusListResult> NodeStatusListOutcome;			
			typedef std::future<NodeStatusListOutcome> NodeStatusListOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeStatusListRequest&, const NodeStatusListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeStatusListAsyncHandler;
			typedef Outcome<Error, Model::ListContactGroupResult> ListContactGroupOutcome;			
			typedef std::future<ListContactGroupOutcome> ListContactGroupOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListContactGroupRequest&, const ListContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContactGroupAsyncHandler;
			typedef Outcome<Error, Model::GetMyGroupsResult> GetMyGroupsOutcome;			
			typedef std::future<GetMyGroupsOutcome> GetMyGroupsOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::GetMyGroupsRequest&, const GetMyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMyGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListNotifyPolicyResult> ListNotifyPolicyOutcome;			
			typedef std::future<ListNotifyPolicyOutcome> ListNotifyPolicyOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::ListNotifyPolicyRequest&, const ListNotifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlarmResult> UpdateAlarmOutcome;			
			typedef std::future<UpdateAlarmOutcome> UpdateAlarmOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::UpdateAlarmRequest&, const UpdateAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlarmAsyncHandler;
			typedef Outcome<Error, Model::NodeProcessCreateResult> NodeProcessCreateOutcome;			
			typedef std::future<NodeProcessCreateOutcome> NodeProcessCreateOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::NodeProcessCreateRequest&, const NodeProcessCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NodeProcessCreateAsyncHandler;
			typedef Outcome<Error, Model::EnableAlarmResult> EnableAlarmOutcome;			
			typedef std::future<EnableAlarmOutcome> EnableAlarmOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::EnableAlarmRequest&, const EnableAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAlarmAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomEventDetailResult> QueryCustomEventDetailOutcome;			
			typedef std::future<QueryCustomEventDetailOutcome> QueryCustomEventDetailOutcomeCallable;			
			typedef std::function<void(const CmsClient*, const Model::QueryCustomEventDetailRequest&, const QueryCustomEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomEventDetailAsyncHandler;

			CmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CmsClient();
            ProfileSetOutcome profileSet(const Model::ProfileSetRequest &request)const;
            void profileSetAsync(const Model::ProfileSetRequest& request, const ProfileSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ProfileSetOutcomeCallable profileSetCallable(const Model::ProfileSetRequest& request) const;
            ListProductOfActiceAlertOutcome listProductOfActiceAlert(const Model::ListProductOfActiceAlertRequest &request)const;
            void listProductOfActiceAlertAsync(const Model::ListProductOfActiceAlertRequest& request, const ListProductOfActiceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListProductOfActiceAlertOutcomeCallable listProductOfActiceAlertCallable(const Model::ListProductOfActiceAlertRequest& request) const;
            DeleteCustomMetricOutcome deleteCustomMetric(const Model::DeleteCustomMetricRequest &request)const;
            void deleteCustomMetricAsync(const Model::DeleteCustomMetricRequest& request, const DeleteCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteCustomMetricOutcomeCallable deleteCustomMetricCallable(const Model::DeleteCustomMetricRequest& request) const;
            GetNotifyPolicyOutcome getNotifyPolicy(const Model::GetNotifyPolicyRequest &request)const;
            void getNotifyPolicyAsync(const Model::GetNotifyPolicyRequest& request, const GetNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetNotifyPolicyOutcomeCallable getNotifyPolicyCallable(const Model::GetNotifyPolicyRequest& request) const;
            NodeUninstallOutcome nodeUninstall(const Model::NodeUninstallRequest &request)const;
            void nodeUninstallAsync(const Model::NodeUninstallRequest& request, const NodeUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeUninstallOutcomeCallable nodeUninstallCallable(const Model::NodeUninstallRequest& request) const;
            QueryCustomEventCountOutcome queryCustomEventCount(const Model::QueryCustomEventCountRequest &request)const;
            void queryCustomEventCountAsync(const Model::QueryCustomEventCountRequest& request, const QueryCustomEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryCustomEventCountOutcomeCallable queryCustomEventCountCallable(const Model::QueryCustomEventCountRequest& request) const;
            UpdateMyGroupInstancesOutcome updateMyGroupInstances(const Model::UpdateMyGroupInstancesRequest &request)const;
            void updateMyGroupInstancesAsync(const Model::UpdateMyGroupInstancesRequest& request, const UpdateMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpdateMyGroupInstancesOutcomeCallable updateMyGroupInstancesCallable(const Model::UpdateMyGroupInstancesRequest& request) const;
            ProfileGetOutcome profileGet(const Model::ProfileGetRequest &request)const;
            void profileGetAsync(const Model::ProfileGetRequest& request, const ProfileGetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ProfileGetOutcomeCallable profileGetCallable(const Model::ProfileGetRequest& request) const;
            PutSystemEventOutcome putSystemEvent(const Model::PutSystemEventRequest &request)const;
            void putSystemEventAsync(const Model::PutSystemEventRequest& request, const PutSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PutSystemEventOutcomeCallable putSystemEventCallable(const Model::PutSystemEventRequest& request) const;
            QueryCustomMetricListOutcome queryCustomMetricList(const Model::QueryCustomMetricListRequest &request)const;
            void queryCustomMetricListAsync(const Model::QueryCustomMetricListRequest& request, const QueryCustomMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryCustomMetricListOutcomeCallable queryCustomMetricListCallable(const Model::QueryCustomMetricListRequest& request) const;
            EnableActiveAlertOutcome enableActiveAlert(const Model::EnableActiveAlertRequest &request)const;
            void enableActiveAlertAsync(const Model::EnableActiveAlertRequest& request, const EnableActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EnableActiveAlertOutcomeCallable enableActiveAlertCallable(const Model::EnableActiveAlertRequest& request) const;
            QuerySystemEventDetailOutcome querySystemEventDetail(const Model::QuerySystemEventDetailRequest &request)const;
            void querySystemEventDetailAsync(const Model::QuerySystemEventDetailRequest& request, const QuerySystemEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QuerySystemEventDetailOutcomeCallable querySystemEventDetailCallable(const Model::QuerySystemEventDetailRequest& request) const;
            CreateNotifyPolicyOutcome createNotifyPolicy(const Model::CreateNotifyPolicyRequest &request)const;
            void createNotifyPolicyAsync(const Model::CreateNotifyPolicyRequest& request, const CreateNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateNotifyPolicyOutcomeCallable createNotifyPolicyCallable(const Model::CreateNotifyPolicyRequest& request) const;
            DeleteAlarmOutcome deleteAlarm(const Model::DeleteAlarmRequest &request)const;
            void deleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteAlarmOutcomeCallable deleteAlarmCallable(const Model::DeleteAlarmRequest& request) const;
            NodeListOutcome nodeList(const Model::NodeListRequest &request)const;
            void nodeListAsync(const Model::NodeListRequest& request, const NodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeListOutcomeCallable nodeListCallable(const Model::NodeListRequest& request) const;
            NodeProcessesOutcome nodeProcesses(const Model::NodeProcessesRequest &request)const;
            void nodeProcessesAsync(const Model::NodeProcessesRequest& request, const NodeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeProcessesOutcomeCallable nodeProcessesCallable(const Model::NodeProcessesRequest& request) const;
            ListMyGroupCategoriesOutcome listMyGroupCategories(const Model::ListMyGroupCategoriesRequest &request)const;
            void listMyGroupCategoriesAsync(const Model::ListMyGroupCategoriesRequest& request, const ListMyGroupCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListMyGroupCategoriesOutcomeCallable listMyGroupCategoriesCallable(const Model::ListMyGroupCategoriesRequest& request) const;
            QueryMetricListOutcome queryMetricList(const Model::QueryMetricListRequest &request)const;
            void queryMetricListAsync(const Model::QueryMetricListRequest& request, const QueryMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryMetricListOutcomeCallable queryMetricListCallable(const Model::QueryMetricListRequest& request) const;
            ListMyGroupInstancesDetailsOutcome listMyGroupInstancesDetails(const Model::ListMyGroupInstancesDetailsRequest &request)const;
            void listMyGroupInstancesDetailsAsync(const Model::ListMyGroupInstancesDetailsRequest& request, const ListMyGroupInstancesDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListMyGroupInstancesDetailsOutcomeCallable listMyGroupInstancesDetailsCallable(const Model::ListMyGroupInstancesDetailsRequest& request) const;
            DisableAlarmOutcome disableAlarm(const Model::DisableAlarmRequest &request)const;
            void disableAlarmAsync(const Model::DisableAlarmRequest& request, const DisableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DisableAlarmOutcomeCallable disableAlarmCallable(const Model::DisableAlarmRequest& request) const;
            PutCustomMetricOutcome putCustomMetric(const Model::PutCustomMetricRequest &request)const;
            void putCustomMetricAsync(const Model::PutCustomMetricRequest& request, const PutCustomMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PutCustomMetricOutcomeCallable putCustomMetricCallable(const Model::PutCustomMetricRequest& request) const;
            DeleteMyGroupsOutcome deleteMyGroups(const Model::DeleteMyGroupsRequest &request)const;
            void deleteMyGroupsAsync(const Model::DeleteMyGroupsRequest& request, const DeleteMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteMyGroupsOutcomeCallable deleteMyGroupsCallable(const Model::DeleteMyGroupsRequest& request) const;
            QueryMetricLastOutcome queryMetricLast(const Model::QueryMetricLastRequest &request)const;
            void queryMetricLastAsync(const Model::QueryMetricLastRequest& request, const QueryMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryMetricLastOutcomeCallable queryMetricLastCallable(const Model::QueryMetricLastRequest& request) const;
            QuerySystemEventHistogramOutcome querySystemEventHistogram(const Model::QuerySystemEventHistogramRequest &request)const;
            void querySystemEventHistogramAsync(const Model::QuerySystemEventHistogramRequest& request, const QuerySystemEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QuerySystemEventHistogramOutcomeCallable querySystemEventHistogramCallable(const Model::QuerySystemEventHistogramRequest& request) const;
            DescribeAlarmHistoryOutcome describeAlarmHistory(const Model::DescribeAlarmHistoryRequest &request)const;
            void describeAlarmHistoryAsync(const Model::DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAlarmHistoryOutcomeCallable describeAlarmHistoryCallable(const Model::DescribeAlarmHistoryRequest& request) const;
            NodeStatusOutcome nodeStatus(const Model::NodeStatusRequest &request)const;
            void nodeStatusAsync(const Model::NodeStatusRequest& request, const NodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeStatusOutcomeCallable nodeStatusCallable(const Model::NodeStatusRequest& request) const;
            DeleteMyGroupInstancesOutcome deleteMyGroupInstances(const Model::DeleteMyGroupInstancesRequest &request)const;
            void deleteMyGroupInstancesAsync(const Model::DeleteMyGroupInstancesRequest& request, const DeleteMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteMyGroupInstancesOutcomeCallable deleteMyGroupInstancesCallable(const Model::DeleteMyGroupInstancesRequest& request) const;
            ListProductOfActiveAlertOutcome listProductOfActiveAlert(const Model::ListProductOfActiveAlertRequest &request)const;
            void listProductOfActiveAlertAsync(const Model::ListProductOfActiveAlertRequest& request, const ListProductOfActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListProductOfActiveAlertOutcomeCallable listProductOfActiveAlertCallable(const Model::ListProductOfActiveAlertRequest& request) const;
            CreateMyGroupsOutcome createMyGroups(const Model::CreateMyGroupsRequest &request)const;
            void createMyGroupsAsync(const Model::CreateMyGroupsRequest& request, const CreateMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateMyGroupsOutcomeCallable createMyGroupsCallable(const Model::CreateMyGroupsRequest& request) const;
            CreateAlarmOutcome createAlarm(const Model::CreateAlarmRequest &request)const;
            void createAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateAlarmOutcomeCallable createAlarmCallable(const Model::CreateAlarmRequest& request) const;
            ListActiveAlertRuleOutcome listActiveAlertRule(const Model::ListActiveAlertRuleRequest &request)const;
            void listActiveAlertRuleAsync(const Model::ListActiveAlertRuleRequest& request, const ListActiveAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListActiveAlertRuleOutcomeCallable listActiveAlertRuleCallable(const Model::ListActiveAlertRuleRequest& request) const;
            ListMyGroupsOutcome listMyGroups(const Model::ListMyGroupsRequest &request)const;
            void listMyGroupsAsync(const Model::ListMyGroupsRequest& request, const ListMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListMyGroupsOutcomeCallable listMyGroupsCallable(const Model::ListMyGroupsRequest& request) const;
            DeleteNotifyPolicyOutcome deleteNotifyPolicy(const Model::DeleteNotifyPolicyRequest &request)const;
            void deleteNotifyPolicyAsync(const Model::DeleteNotifyPolicyRequest& request, const DeleteNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteNotifyPolicyOutcomeCallable deleteNotifyPolicyCallable(const Model::DeleteNotifyPolicyRequest& request) const;
            AddMyGroupInstancesOutcome addMyGroupInstances(const Model::AddMyGroupInstancesRequest &request)const;
            void addMyGroupInstancesAsync(const Model::AddMyGroupInstancesRequest& request, const AddMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddMyGroupInstancesOutcomeCallable addMyGroupInstancesCallable(const Model::AddMyGroupInstancesRequest& request) const;
            NodeProcessDeleteOutcome nodeProcessDelete(const Model::NodeProcessDeleteRequest &request)const;
            void nodeProcessDeleteAsync(const Model::NodeProcessDeleteRequest& request, const NodeProcessDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeProcessDeleteOutcomeCallable nodeProcessDeleteCallable(const Model::NodeProcessDeleteRequest& request) const;
            UpdateMyGroupsOutcome updateMyGroups(const Model::UpdateMyGroupsRequest &request)const;
            void updateMyGroupsAsync(const Model::UpdateMyGroupsRequest& request, const UpdateMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpdateMyGroupsOutcomeCallable updateMyGroupsCallable(const Model::UpdateMyGroupsRequest& request) const;
            QuerySystemEventCountOutcome querySystemEventCount(const Model::QuerySystemEventCountRequest &request)const;
            void querySystemEventCountAsync(const Model::QuerySystemEventCountRequest& request, const QuerySystemEventCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QuerySystemEventCountOutcomeCallable querySystemEventCountCallable(const Model::QuerySystemEventCountRequest& request) const;
            ListMyGroupInstancesOutcome listMyGroupInstances(const Model::ListMyGroupInstancesRequest &request)const;
            void listMyGroupInstancesAsync(const Model::ListMyGroupInstancesRequest& request, const ListMyGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListMyGroupInstancesOutcomeCallable listMyGroupInstancesCallable(const Model::ListMyGroupInstancesRequest& request) const;
            AccessKeyGetOutcome accessKeyGet(const Model::AccessKeyGetRequest &request)const;
            void accessKeyGetAsync(const Model::AccessKeyGetRequest& request, const AccessKeyGetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AccessKeyGetOutcomeCallable accessKeyGetCallable(const Model::AccessKeyGetRequest& request) const;
            EnableActiceAlertOutcome enableActiceAlert(const Model::EnableActiceAlertRequest &request)const;
            void enableActiceAlertAsync(const Model::EnableActiceAlertRequest& request, const EnableActiceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EnableActiceAlertOutcomeCallable enableActiceAlertCallable(const Model::EnableActiceAlertRequest& request) const;
            PutMetricDataOutcome putMetricData(const Model::PutMetricDataRequest &request)const;
            void putMetricDataAsync(const Model::PutMetricDataRequest& request, const PutMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PutMetricDataOutcomeCallable putMetricDataCallable(const Model::PutMetricDataRequest& request) const;
            DisableActiveAlertOutcome disableActiveAlert(const Model::DisableActiveAlertRequest &request)const;
            void disableActiveAlertAsync(const Model::DisableActiveAlertRequest& request, const DisableActiveAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DisableActiveAlertOutcomeCallable disableActiveAlertCallable(const Model::DisableActiveAlertRequest& request) const;
            DisableActiceAlertOutcome disableActiceAlert(const Model::DisableActiceAlertRequest &request)const;
            void disableActiceAlertAsync(const Model::DisableActiceAlertRequest& request, const DisableActiceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DisableActiceAlertOutcomeCallable disableActiceAlertCallable(const Model::DisableActiceAlertRequest& request) const;
            ListAlarmOutcome listAlarm(const Model::ListAlarmRequest &request)const;
            void listAlarmAsync(const Model::ListAlarmRequest& request, const ListAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListAlarmOutcomeCallable listAlarmCallable(const Model::ListAlarmRequest& request) const;
            NodeInstallOutcome nodeInstall(const Model::NodeInstallRequest &request)const;
            void nodeInstallAsync(const Model::NodeInstallRequest& request, const NodeInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeInstallOutcomeCallable nodeInstallCallable(const Model::NodeInstallRequest& request) const;
            QueryCustomEventHistogramOutcome queryCustomEventHistogram(const Model::QueryCustomEventHistogramRequest &request)const;
            void queryCustomEventHistogramAsync(const Model::QueryCustomEventHistogramRequest& request, const QueryCustomEventHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryCustomEventHistogramOutcomeCallable queryCustomEventHistogramCallable(const Model::QueryCustomEventHistogramRequest& request) const;
            PutEventOutcome putEvent(const Model::PutEventRequest &request)const;
            void putEventAsync(const Model::PutEventRequest& request, const PutEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            PutEventOutcomeCallable putEventCallable(const Model::PutEventRequest& request) const;
            ListAlarmHistoryOutcome listAlarmHistory(const Model::ListAlarmHistoryRequest &request)const;
            void listAlarmHistoryAsync(const Model::ListAlarmHistoryRequest& request, const ListAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListAlarmHistoryOutcomeCallable listAlarmHistoryCallable(const Model::ListAlarmHistoryRequest& request) const;
            NodeStatusListOutcome nodeStatusList(const Model::NodeStatusListRequest &request)const;
            void nodeStatusListAsync(const Model::NodeStatusListRequest& request, const NodeStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeStatusListOutcomeCallable nodeStatusListCallable(const Model::NodeStatusListRequest& request) const;
            ListContactGroupOutcome listContactGroup(const Model::ListContactGroupRequest &request)const;
            void listContactGroupAsync(const Model::ListContactGroupRequest& request, const ListContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListContactGroupOutcomeCallable listContactGroupCallable(const Model::ListContactGroupRequest& request) const;
            GetMyGroupsOutcome getMyGroups(const Model::GetMyGroupsRequest &request)const;
            void getMyGroupsAsync(const Model::GetMyGroupsRequest& request, const GetMyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetMyGroupsOutcomeCallable getMyGroupsCallable(const Model::GetMyGroupsRequest& request) const;
            ListNotifyPolicyOutcome listNotifyPolicy(const Model::ListNotifyPolicyRequest &request)const;
            void listNotifyPolicyAsync(const Model::ListNotifyPolicyRequest& request, const ListNotifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListNotifyPolicyOutcomeCallable listNotifyPolicyCallable(const Model::ListNotifyPolicyRequest& request) const;
            UpdateAlarmOutcome updateAlarm(const Model::UpdateAlarmRequest &request)const;
            void updateAlarmAsync(const Model::UpdateAlarmRequest& request, const UpdateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpdateAlarmOutcomeCallable updateAlarmCallable(const Model::UpdateAlarmRequest& request) const;
            NodeProcessCreateOutcome nodeProcessCreate(const Model::NodeProcessCreateRequest &request)const;
            void nodeProcessCreateAsync(const Model::NodeProcessCreateRequest& request, const NodeProcessCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            NodeProcessCreateOutcomeCallable nodeProcessCreateCallable(const Model::NodeProcessCreateRequest& request) const;
            EnableAlarmOutcome enableAlarm(const Model::EnableAlarmRequest &request)const;
            void enableAlarmAsync(const Model::EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EnableAlarmOutcomeCallable enableAlarmCallable(const Model::EnableAlarmRequest& request) const;
            QueryCustomEventDetailOutcome queryCustomEventDetail(const Model::QueryCustomEventDetailRequest &request)const;
            void queryCustomEventDetailAsync(const Model::QueryCustomEventDetailRequest& request, const QueryCustomEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryCustomEventDetailOutcomeCallable queryCustomEventDetailCallable(const Model::QueryCustomEventDetailRequest& request) const;
	
		private:
			virtual EndpointOutcome endpoint()const override;
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CMS_CMSCLIENT_H_
