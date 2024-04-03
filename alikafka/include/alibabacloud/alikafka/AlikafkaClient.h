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

#ifndef ALIBABACLOUD_ALIKAFKA_ALIKAFKACLIENT_H_
#define ALIBABACLOUD_ALIKAFKA_ALIKAFKACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AlikafkaExport.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/ConvertPostPayOrderRequest.h"
#include "model/ConvertPostPayOrderResult.h"
#include "model/CreateAclRequest.h"
#include "model/CreateAclResult.h"
#include "model/CreateConsumerGroupRequest.h"
#include "model/CreateConsumerGroupResult.h"
#include "model/CreatePostPayOrderRequest.h"
#include "model/CreatePostPayOrderResult.h"
#include "model/CreatePrePayOrderRequest.h"
#include "model/CreatePrePayOrderResult.h"
#include "model/CreateSaslUserRequest.h"
#include "model/CreateSaslUserResult.h"
#include "model/CreateTopicRequest.h"
#include "model/CreateTopicResult.h"
#include "model/DeleteAclRequest.h"
#include "model/DeleteAclResult.h"
#include "model/DeleteConsumerGroupRequest.h"
#include "model/DeleteConsumerGroupResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteSaslUserRequest.h"
#include "model/DeleteSaslUserResult.h"
#include "model/DeleteTopicRequest.h"
#include "model/DeleteTopicResult.h"
#include "model/DescribeAclsRequest.h"
#include "model/DescribeAclsResult.h"
#include "model/DescribeSaslUsersRequest.h"
#include "model/DescribeSaslUsersResult.h"
#include "model/EnableAutoGroupCreationRequest.h"
#include "model/EnableAutoGroupCreationResult.h"
#include "model/EnableAutoTopicCreationRequest.h"
#include "model/EnableAutoTopicCreationResult.h"
#include "model/GetAllInstanceIdListRequest.h"
#include "model/GetAllInstanceIdListResult.h"
#include "model/GetAllowedIpListRequest.h"
#include "model/GetAllowedIpListResult.h"
#include "model/GetConsumerListRequest.h"
#include "model/GetConsumerListResult.h"
#include "model/GetConsumerProgressRequest.h"
#include "model/GetConsumerProgressResult.h"
#include "model/GetInstanceListRequest.h"
#include "model/GetInstanceListResult.h"
#include "model/GetQuotaTipRequest.h"
#include "model/GetQuotaTipResult.h"
#include "model/GetTopicListRequest.h"
#include "model/GetTopicListResult.h"
#include "model/GetTopicStatusRequest.h"
#include "model/GetTopicStatusResult.h"
#include "model/GetTopicSubscribeStatusRequest.h"
#include "model/GetTopicSubscribeStatusResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyInstanceNameRequest.h"
#include "model/ModifyInstanceNameResult.h"
#include "model/ModifyPartitionNumRequest.h"
#include "model/ModifyPartitionNumResult.h"
#include "model/ModifyTopicRemarkRequest.h"
#include "model/ModifyTopicRemarkResult.h"
#include "model/QueryMessageRequest.h"
#include "model/QueryMessageResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/ReopenInstanceRequest.h"
#include "model/ReopenInstanceResult.h"
#include "model/StartInstanceRequest.h"
#include "model/StartInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAllowedIpRequest.h"
#include "model/UpdateAllowedIpResult.h"
#include "model/UpdateConsumerOffsetRequest.h"
#include "model/UpdateConsumerOffsetResult.h"
#include "model/UpdateInstanceConfigRequest.h"
#include "model/UpdateInstanceConfigResult.h"
#include "model/UpdateTopicConfigRequest.h"
#include "model/UpdateTopicConfigResult.h"
#include "model/UpgradeInstanceVersionRequest.h"
#include "model/UpgradeInstanceVersionResult.h"
#include "model/UpgradePostPayOrderRequest.h"
#include "model/UpgradePostPayOrderResult.h"
#include "model/UpgradePrePayOrderRequest.h"
#include "model/UpgradePrePayOrderResult.h"


namespace AlibabaCloud
{
	namespace Alikafka
	{
		class ALIBABACLOUD_ALIKAFKA_EXPORT AlikafkaClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ConvertPostPayOrderResult> ConvertPostPayOrderOutcome;
			typedef std::future<ConvertPostPayOrderOutcome> ConvertPostPayOrderOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ConvertPostPayOrderRequest&, const ConvertPostPayOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertPostPayOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateAclResult> CreateAclOutcome;
			typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::CreateAclRequest&, const CreateAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
			typedef Outcome<Error, Model::CreateConsumerGroupResult> CreateConsumerGroupOutcome;
			typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::CreateConsumerGroupRequest&, const CreateConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::CreatePostPayOrderResult> CreatePostPayOrderOutcome;
			typedef std::future<CreatePostPayOrderOutcome> CreatePostPayOrderOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::CreatePostPayOrderRequest&, const CreatePostPayOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostPayOrderAsyncHandler;
			typedef Outcome<Error, Model::CreatePrePayOrderResult> CreatePrePayOrderOutcome;
			typedef std::future<CreatePrePayOrderOutcome> CreatePrePayOrderOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::CreatePrePayOrderRequest&, const CreatePrePayOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrePayOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateSaslUserResult> CreateSaslUserOutcome;
			typedef std::future<CreateSaslUserOutcome> CreateSaslUserOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::CreateSaslUserRequest&, const CreateSaslUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSaslUserAsyncHandler;
			typedef Outcome<Error, Model::CreateTopicResult> CreateTopicOutcome;
			typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::CreateTopicRequest&, const CreateTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
			typedef Outcome<Error, Model::DeleteAclResult> DeleteAclOutcome;
			typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DeleteAclRequest&, const DeleteAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsumerGroupResult> DeleteConsumerGroupOutcome;
			typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DeleteConsumerGroupRequest&, const DeleteConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSaslUserResult> DeleteSaslUserOutcome;
			typedef std::future<DeleteSaslUserOutcome> DeleteSaslUserOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DeleteSaslUserRequest&, const DeleteSaslUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSaslUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteTopicResult> DeleteTopicOutcome;
			typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DeleteTopicRequest&, const DeleteTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
			typedef Outcome<Error, Model::DescribeAclsResult> DescribeAclsOutcome;
			typedef std::future<DescribeAclsOutcome> DescribeAclsOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DescribeAclsRequest&, const DescribeAclsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSaslUsersResult> DescribeSaslUsersOutcome;
			typedef std::future<DescribeSaslUsersOutcome> DescribeSaslUsersOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::DescribeSaslUsersRequest&, const DescribeSaslUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSaslUsersAsyncHandler;
			typedef Outcome<Error, Model::EnableAutoGroupCreationResult> EnableAutoGroupCreationOutcome;
			typedef std::future<EnableAutoGroupCreationOutcome> EnableAutoGroupCreationOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::EnableAutoGroupCreationRequest&, const EnableAutoGroupCreationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoGroupCreationAsyncHandler;
			typedef Outcome<Error, Model::EnableAutoTopicCreationResult> EnableAutoTopicCreationOutcome;
			typedef std::future<EnableAutoTopicCreationOutcome> EnableAutoTopicCreationOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::EnableAutoTopicCreationRequest&, const EnableAutoTopicCreationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoTopicCreationAsyncHandler;
			typedef Outcome<Error, Model::GetAllInstanceIdListResult> GetAllInstanceIdListOutcome;
			typedef std::future<GetAllInstanceIdListOutcome> GetAllInstanceIdListOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetAllInstanceIdListRequest&, const GetAllInstanceIdListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllInstanceIdListAsyncHandler;
			typedef Outcome<Error, Model::GetAllowedIpListResult> GetAllowedIpListOutcome;
			typedef std::future<GetAllowedIpListOutcome> GetAllowedIpListOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetAllowedIpListRequest&, const GetAllowedIpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllowedIpListAsyncHandler;
			typedef Outcome<Error, Model::GetConsumerListResult> GetConsumerListOutcome;
			typedef std::future<GetConsumerListOutcome> GetConsumerListOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetConsumerListRequest&, const GetConsumerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConsumerListAsyncHandler;
			typedef Outcome<Error, Model::GetConsumerProgressResult> GetConsumerProgressOutcome;
			typedef std::future<GetConsumerProgressOutcome> GetConsumerProgressOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetConsumerProgressRequest&, const GetConsumerProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConsumerProgressAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceListResult> GetInstanceListOutcome;
			typedef std::future<GetInstanceListOutcome> GetInstanceListOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetInstanceListRequest&, const GetInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceListAsyncHandler;
			typedef Outcome<Error, Model::GetQuotaTipResult> GetQuotaTipOutcome;
			typedef std::future<GetQuotaTipOutcome> GetQuotaTipOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetQuotaTipRequest&, const GetQuotaTipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaTipAsyncHandler;
			typedef Outcome<Error, Model::GetTopicListResult> GetTopicListOutcome;
			typedef std::future<GetTopicListOutcome> GetTopicListOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetTopicListRequest&, const GetTopicListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicListAsyncHandler;
			typedef Outcome<Error, Model::GetTopicStatusResult> GetTopicStatusOutcome;
			typedef std::future<GetTopicStatusOutcome> GetTopicStatusOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetTopicStatusRequest&, const GetTopicStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicStatusAsyncHandler;
			typedef Outcome<Error, Model::GetTopicSubscribeStatusResult> GetTopicSubscribeStatusOutcome;
			typedef std::future<GetTopicSubscribeStatusOutcome> GetTopicSubscribeStatusOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::GetTopicSubscribeStatusRequest&, const GetTopicSubscribeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicSubscribeStatusAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNameResult> ModifyInstanceNameOutcome;
			typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ModifyInstanceNameRequest&, const ModifyInstanceNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyPartitionNumResult> ModifyPartitionNumOutcome;
			typedef std::future<ModifyPartitionNumOutcome> ModifyPartitionNumOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ModifyPartitionNumRequest&, const ModifyPartitionNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPartitionNumAsyncHandler;
			typedef Outcome<Error, Model::ModifyTopicRemarkResult> ModifyTopicRemarkOutcome;
			typedef std::future<ModifyTopicRemarkOutcome> ModifyTopicRemarkOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ModifyTopicRemarkRequest&, const ModifyTopicRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicRemarkAsyncHandler;
			typedef Outcome<Error, Model::QueryMessageResult> QueryMessageOutcome;
			typedef std::future<QueryMessageOutcome> QueryMessageOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::QueryMessageRequest&, const QueryMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMessageAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReopenInstanceResult> ReopenInstanceOutcome;
			typedef std::future<ReopenInstanceOutcome> ReopenInstanceOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::ReopenInstanceRequest&, const ReopenInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReopenInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartInstanceResult> StartInstanceOutcome;
			typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::StartInstanceRequest&, const StartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAllowedIpResult> UpdateAllowedIpOutcome;
			typedef std::future<UpdateAllowedIpOutcome> UpdateAllowedIpOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpdateAllowedIpRequest&, const UpdateAllowedIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAllowedIpAsyncHandler;
			typedef Outcome<Error, Model::UpdateConsumerOffsetResult> UpdateConsumerOffsetOutcome;
			typedef std::future<UpdateConsumerOffsetOutcome> UpdateConsumerOffsetOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpdateConsumerOffsetRequest&, const UpdateConsumerOffsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConsumerOffsetAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceConfigResult> UpdateInstanceConfigOutcome;
			typedef std::future<UpdateInstanceConfigOutcome> UpdateInstanceConfigOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpdateInstanceConfigRequest&, const UpdateInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateTopicConfigResult> UpdateTopicConfigOutcome;
			typedef std::future<UpdateTopicConfigOutcome> UpdateTopicConfigOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpdateTopicConfigRequest&, const UpdateTopicConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTopicConfigAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceVersionResult> UpgradeInstanceVersionOutcome;
			typedef std::future<UpgradeInstanceVersionOutcome> UpgradeInstanceVersionOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpgradeInstanceVersionRequest&, const UpgradeInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradePostPayOrderResult> UpgradePostPayOrderOutcome;
			typedef std::future<UpgradePostPayOrderOutcome> UpgradePostPayOrderOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpgradePostPayOrderRequest&, const UpgradePostPayOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradePostPayOrderAsyncHandler;
			typedef Outcome<Error, Model::UpgradePrePayOrderResult> UpgradePrePayOrderOutcome;
			typedef std::future<UpgradePrePayOrderOutcome> UpgradePrePayOrderOutcomeCallable;
			typedef std::function<void(const AlikafkaClient*, const Model::UpgradePrePayOrderRequest&, const UpgradePrePayOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradePrePayOrderAsyncHandler;

			AlikafkaClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AlikafkaClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AlikafkaClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AlikafkaClient();
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			ConvertPostPayOrderOutcome convertPostPayOrder(const Model::ConvertPostPayOrderRequest &request)const;
			void convertPostPayOrderAsync(const Model::ConvertPostPayOrderRequest& request, const ConvertPostPayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertPostPayOrderOutcomeCallable convertPostPayOrderCallable(const Model::ConvertPostPayOrderRequest& request) const;
			CreateAclOutcome createAcl(const Model::CreateAclRequest &request)const;
			void createAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAclOutcomeCallable createAclCallable(const Model::CreateAclRequest& request) const;
			CreateConsumerGroupOutcome createConsumerGroup(const Model::CreateConsumerGroupRequest &request)const;
			void createConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsumerGroupOutcomeCallable createConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request) const;
			CreatePostPayOrderOutcome createPostPayOrder(const Model::CreatePostPayOrderRequest &request)const;
			void createPostPayOrderAsync(const Model::CreatePostPayOrderRequest& request, const CreatePostPayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePostPayOrderOutcomeCallable createPostPayOrderCallable(const Model::CreatePostPayOrderRequest& request) const;
			CreatePrePayOrderOutcome createPrePayOrder(const Model::CreatePrePayOrderRequest &request)const;
			void createPrePayOrderAsync(const Model::CreatePrePayOrderRequest& request, const CreatePrePayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrePayOrderOutcomeCallable createPrePayOrderCallable(const Model::CreatePrePayOrderRequest& request) const;
			CreateSaslUserOutcome createSaslUser(const Model::CreateSaslUserRequest &request)const;
			void createSaslUserAsync(const Model::CreateSaslUserRequest& request, const CreateSaslUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSaslUserOutcomeCallable createSaslUserCallable(const Model::CreateSaslUserRequest& request) const;
			CreateTopicOutcome createTopic(const Model::CreateTopicRequest &request)const;
			void createTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTopicOutcomeCallable createTopicCallable(const Model::CreateTopicRequest& request) const;
			DeleteAclOutcome deleteAcl(const Model::DeleteAclRequest &request)const;
			void deleteAclAsync(const Model::DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAclOutcomeCallable deleteAclCallable(const Model::DeleteAclRequest& request) const;
			DeleteConsumerGroupOutcome deleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request)const;
			void deleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsumerGroupOutcomeCallable deleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteSaslUserOutcome deleteSaslUser(const Model::DeleteSaslUserRequest &request)const;
			void deleteSaslUserAsync(const Model::DeleteSaslUserRequest& request, const DeleteSaslUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSaslUserOutcomeCallable deleteSaslUserCallable(const Model::DeleteSaslUserRequest& request) const;
			DeleteTopicOutcome deleteTopic(const Model::DeleteTopicRequest &request)const;
			void deleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTopicOutcomeCallable deleteTopicCallable(const Model::DeleteTopicRequest& request) const;
			DescribeAclsOutcome describeAcls(const Model::DescribeAclsRequest &request)const;
			void describeAclsAsync(const Model::DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAclsOutcomeCallable describeAclsCallable(const Model::DescribeAclsRequest& request) const;
			DescribeSaslUsersOutcome describeSaslUsers(const Model::DescribeSaslUsersRequest &request)const;
			void describeSaslUsersAsync(const Model::DescribeSaslUsersRequest& request, const DescribeSaslUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSaslUsersOutcomeCallable describeSaslUsersCallable(const Model::DescribeSaslUsersRequest& request) const;
			EnableAutoGroupCreationOutcome enableAutoGroupCreation(const Model::EnableAutoGroupCreationRequest &request)const;
			void enableAutoGroupCreationAsync(const Model::EnableAutoGroupCreationRequest& request, const EnableAutoGroupCreationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAutoGroupCreationOutcomeCallable enableAutoGroupCreationCallable(const Model::EnableAutoGroupCreationRequest& request) const;
			EnableAutoTopicCreationOutcome enableAutoTopicCreation(const Model::EnableAutoTopicCreationRequest &request)const;
			void enableAutoTopicCreationAsync(const Model::EnableAutoTopicCreationRequest& request, const EnableAutoTopicCreationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAutoTopicCreationOutcomeCallable enableAutoTopicCreationCallable(const Model::EnableAutoTopicCreationRequest& request) const;
			GetAllInstanceIdListOutcome getAllInstanceIdList(const Model::GetAllInstanceIdListRequest &request)const;
			void getAllInstanceIdListAsync(const Model::GetAllInstanceIdListRequest& request, const GetAllInstanceIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllInstanceIdListOutcomeCallable getAllInstanceIdListCallable(const Model::GetAllInstanceIdListRequest& request) const;
			GetAllowedIpListOutcome getAllowedIpList(const Model::GetAllowedIpListRequest &request)const;
			void getAllowedIpListAsync(const Model::GetAllowedIpListRequest& request, const GetAllowedIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllowedIpListOutcomeCallable getAllowedIpListCallable(const Model::GetAllowedIpListRequest& request) const;
			GetConsumerListOutcome getConsumerList(const Model::GetConsumerListRequest &request)const;
			void getConsumerListAsync(const Model::GetConsumerListRequest& request, const GetConsumerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConsumerListOutcomeCallable getConsumerListCallable(const Model::GetConsumerListRequest& request) const;
			GetConsumerProgressOutcome getConsumerProgress(const Model::GetConsumerProgressRequest &request)const;
			void getConsumerProgressAsync(const Model::GetConsumerProgressRequest& request, const GetConsumerProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConsumerProgressOutcomeCallable getConsumerProgressCallable(const Model::GetConsumerProgressRequest& request) const;
			GetInstanceListOutcome getInstanceList(const Model::GetInstanceListRequest &request)const;
			void getInstanceListAsync(const Model::GetInstanceListRequest& request, const GetInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceListOutcomeCallable getInstanceListCallable(const Model::GetInstanceListRequest& request) const;
			GetQuotaTipOutcome getQuotaTip(const Model::GetQuotaTipRequest &request)const;
			void getQuotaTipAsync(const Model::GetQuotaTipRequest& request, const GetQuotaTipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaTipOutcomeCallable getQuotaTipCallable(const Model::GetQuotaTipRequest& request) const;
			GetTopicListOutcome getTopicList(const Model::GetTopicListRequest &request)const;
			void getTopicListAsync(const Model::GetTopicListRequest& request, const GetTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicListOutcomeCallable getTopicListCallable(const Model::GetTopicListRequest& request) const;
			GetTopicStatusOutcome getTopicStatus(const Model::GetTopicStatusRequest &request)const;
			void getTopicStatusAsync(const Model::GetTopicStatusRequest& request, const GetTopicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicStatusOutcomeCallable getTopicStatusCallable(const Model::GetTopicStatusRequest& request) const;
			GetTopicSubscribeStatusOutcome getTopicSubscribeStatus(const Model::GetTopicSubscribeStatusRequest &request)const;
			void getTopicSubscribeStatusAsync(const Model::GetTopicSubscribeStatusRequest& request, const GetTopicSubscribeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicSubscribeStatusOutcomeCallable getTopicSubscribeStatusCallable(const Model::GetTopicSubscribeStatusRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyInstanceNameOutcome modifyInstanceName(const Model::ModifyInstanceNameRequest &request)const;
			void modifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNameOutcomeCallable modifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request) const;
			ModifyPartitionNumOutcome modifyPartitionNum(const Model::ModifyPartitionNumRequest &request)const;
			void modifyPartitionNumAsync(const Model::ModifyPartitionNumRequest& request, const ModifyPartitionNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPartitionNumOutcomeCallable modifyPartitionNumCallable(const Model::ModifyPartitionNumRequest& request) const;
			ModifyTopicRemarkOutcome modifyTopicRemark(const Model::ModifyTopicRemarkRequest &request)const;
			void modifyTopicRemarkAsync(const Model::ModifyTopicRemarkRequest& request, const ModifyTopicRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTopicRemarkOutcomeCallable modifyTopicRemarkCallable(const Model::ModifyTopicRemarkRequest& request) const;
			QueryMessageOutcome queryMessage(const Model::QueryMessageRequest &request)const;
			void queryMessageAsync(const Model::QueryMessageRequest& request, const QueryMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMessageOutcomeCallable queryMessageCallable(const Model::QueryMessageRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			ReopenInstanceOutcome reopenInstance(const Model::ReopenInstanceRequest &request)const;
			void reopenInstanceAsync(const Model::ReopenInstanceRequest& request, const ReopenInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReopenInstanceOutcomeCallable reopenInstanceCallable(const Model::ReopenInstanceRequest& request) const;
			StartInstanceOutcome startInstance(const Model::StartInstanceRequest &request)const;
			void startInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstanceOutcomeCallable startInstanceCallable(const Model::StartInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAllowedIpOutcome updateAllowedIp(const Model::UpdateAllowedIpRequest &request)const;
			void updateAllowedIpAsync(const Model::UpdateAllowedIpRequest& request, const UpdateAllowedIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAllowedIpOutcomeCallable updateAllowedIpCallable(const Model::UpdateAllowedIpRequest& request) const;
			UpdateConsumerOffsetOutcome updateConsumerOffset(const Model::UpdateConsumerOffsetRequest &request)const;
			void updateConsumerOffsetAsync(const Model::UpdateConsumerOffsetRequest& request, const UpdateConsumerOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConsumerOffsetOutcomeCallable updateConsumerOffsetCallable(const Model::UpdateConsumerOffsetRequest& request) const;
			UpdateInstanceConfigOutcome updateInstanceConfig(const Model::UpdateInstanceConfigRequest &request)const;
			void updateInstanceConfigAsync(const Model::UpdateInstanceConfigRequest& request, const UpdateInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceConfigOutcomeCallable updateInstanceConfigCallable(const Model::UpdateInstanceConfigRequest& request) const;
			UpdateTopicConfigOutcome updateTopicConfig(const Model::UpdateTopicConfigRequest &request)const;
			void updateTopicConfigAsync(const Model::UpdateTopicConfigRequest& request, const UpdateTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTopicConfigOutcomeCallable updateTopicConfigCallable(const Model::UpdateTopicConfigRequest& request) const;
			UpgradeInstanceVersionOutcome upgradeInstanceVersion(const Model::UpgradeInstanceVersionRequest &request)const;
			void upgradeInstanceVersionAsync(const Model::UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceVersionOutcomeCallable upgradeInstanceVersionCallable(const Model::UpgradeInstanceVersionRequest& request) const;
			UpgradePostPayOrderOutcome upgradePostPayOrder(const Model::UpgradePostPayOrderRequest &request)const;
			void upgradePostPayOrderAsync(const Model::UpgradePostPayOrderRequest& request, const UpgradePostPayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradePostPayOrderOutcomeCallable upgradePostPayOrderCallable(const Model::UpgradePostPayOrderRequest& request) const;
			UpgradePrePayOrderOutcome upgradePrePayOrder(const Model::UpgradePrePayOrderRequest &request)const;
			void upgradePrePayOrderAsync(const Model::UpgradePrePayOrderRequest& request, const UpgradePrePayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradePrePayOrderOutcomeCallable upgradePrePayOrderCallable(const Model::UpgradePrePayOrderRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIKAFKA_ALIKAFKACLIENT_H_
