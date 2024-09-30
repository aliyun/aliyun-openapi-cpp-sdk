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

#ifndef ALIBABACLOUD_TAG_TAGCLIENT_H_
#define ALIBABACLOUD_TAG_TAGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "TagExport.h"
#include "model/AttachPolicyRequest.h"
#include "model/AttachPolicyResult.h"
#include "model/CheckCreatedByEnabledRequest.h"
#include "model/CheckCreatedByEnabledResult.h"
#include "model/CloseCreatedByRequest.h"
#include "model/CloseCreatedByResult.h"
#include "model/CreatePolicyRequest.h"
#include "model/CreatePolicyResult.h"
#include "model/CreateTagsRequest.h"
#include "model/CreateTagsResult.h"
#include "model/DeletePolicyRequest.h"
#include "model/DeletePolicyResult.h"
#include "model/DeleteTagRequest.h"
#include "model/DeleteTagResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DetachPolicyRequest.h"
#include "model/DetachPolicyResult.h"
#include "model/DisablePolicyTypeRequest.h"
#include "model/DisablePolicyTypeResult.h"
#include "model/EnablePolicyTypeRequest.h"
#include "model/EnablePolicyTypeResult.h"
#include "model/GenerateConfigRuleReportRequest.h"
#include "model/GenerateConfigRuleReportResult.h"
#include "model/GetConfigRuleReportRequest.h"
#include "model/GetConfigRuleReportResult.h"
#include "model/GetEffectivePolicyRequest.h"
#include "model/GetEffectivePolicyResult.h"
#include "model/GetPolicyRequest.h"
#include "model/GetPolicyResult.h"
#include "model/GetPolicyEnableStatusRequest.h"
#include "model/GetPolicyEnableStatusResult.h"
#include "model/ListConfigRulesForTargetRequest.h"
#include "model/ListConfigRulesForTargetResult.h"
#include "model/ListPoliciesRequest.h"
#include "model/ListPoliciesResult.h"
#include "model/ListPoliciesForTargetRequest.h"
#include "model/ListPoliciesForTargetResult.h"
#include "model/ListResourcesByTagRequest.h"
#include "model/ListResourcesByTagResult.h"
#include "model/ListSupportResourceTypesRequest.h"
#include "model/ListSupportResourceTypesResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ListTargetsForPolicyRequest.h"
#include "model/ListTargetsForPolicyResult.h"
#include "model/ModifyPolicyRequest.h"
#include "model/ModifyPolicyResult.h"
#include "model/OpenCreatedByRequest.h"
#include "model/OpenCreatedByResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Tag
	{
		class ALIBABACLOUD_TAG_EXPORT TagClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachPolicyResult> AttachPolicyOutcome;
			typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::AttachPolicyRequest&, const AttachPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyAsyncHandler;
			typedef Outcome<Error, Model::CheckCreatedByEnabledResult> CheckCreatedByEnabledOutcome;
			typedef std::future<CheckCreatedByEnabledOutcome> CheckCreatedByEnabledOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::CheckCreatedByEnabledRequest&, const CheckCreatedByEnabledOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCreatedByEnabledAsyncHandler;
			typedef Outcome<Error, Model::CloseCreatedByResult> CloseCreatedByOutcome;
			typedef std::future<CloseCreatedByOutcome> CloseCreatedByOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::CloseCreatedByRequest&, const CloseCreatedByOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseCreatedByAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyResult> CreatePolicyOutcome;
			typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::CreatePolicyRequest&, const CreatePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateTagsResult> CreateTagsOutcome;
			typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::CreateTagsRequest&, const CreateTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagsAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyResult> DeletePolicyOutcome;
			typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::DeletePolicyRequest&, const DeletePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagResult> DeleteTagOutcome;
			typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::DeleteTagRequest&, const DeleteTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DetachPolicyResult> DetachPolicyOutcome;
			typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::DetachPolicyRequest&, const DetachPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyAsyncHandler;
			typedef Outcome<Error, Model::DisablePolicyTypeResult> DisablePolicyTypeOutcome;
			typedef std::future<DisablePolicyTypeOutcome> DisablePolicyTypeOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::DisablePolicyTypeRequest&, const DisablePolicyTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisablePolicyTypeAsyncHandler;
			typedef Outcome<Error, Model::EnablePolicyTypeResult> EnablePolicyTypeOutcome;
			typedef std::future<EnablePolicyTypeOutcome> EnablePolicyTypeOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::EnablePolicyTypeRequest&, const EnablePolicyTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnablePolicyTypeAsyncHandler;
			typedef Outcome<Error, Model::GenerateConfigRuleReportResult> GenerateConfigRuleReportOutcome;
			typedef std::future<GenerateConfigRuleReportOutcome> GenerateConfigRuleReportOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::GenerateConfigRuleReportRequest&, const GenerateConfigRuleReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateConfigRuleReportAsyncHandler;
			typedef Outcome<Error, Model::GetConfigRuleReportResult> GetConfigRuleReportOutcome;
			typedef std::future<GetConfigRuleReportOutcome> GetConfigRuleReportOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::GetConfigRuleReportRequest&, const GetConfigRuleReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConfigRuleReportAsyncHandler;
			typedef Outcome<Error, Model::GetEffectivePolicyResult> GetEffectivePolicyOutcome;
			typedef std::future<GetEffectivePolicyOutcome> GetEffectivePolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::GetEffectivePolicyRequest&, const GetEffectivePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEffectivePolicyAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyResult> GetPolicyOutcome;
			typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::GetPolicyRequest&, const GetPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyEnableStatusResult> GetPolicyEnableStatusOutcome;
			typedef std::future<GetPolicyEnableStatusOutcome> GetPolicyEnableStatusOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::GetPolicyEnableStatusRequest&, const GetPolicyEnableStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyEnableStatusAsyncHandler;
			typedef Outcome<Error, Model::ListConfigRulesForTargetResult> ListConfigRulesForTargetOutcome;
			typedef std::future<ListConfigRulesForTargetOutcome> ListConfigRulesForTargetOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListConfigRulesForTargetRequest&, const ListConfigRulesForTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigRulesForTargetAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesResult> ListPoliciesOutcome;
			typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListPoliciesRequest&, const ListPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesForTargetResult> ListPoliciesForTargetOutcome;
			typedef std::future<ListPoliciesForTargetOutcome> ListPoliciesForTargetOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListPoliciesForTargetRequest&, const ListPoliciesForTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesForTargetAsyncHandler;
			typedef Outcome<Error, Model::ListResourcesByTagResult> ListResourcesByTagOutcome;
			typedef std::future<ListResourcesByTagOutcome> ListResourcesByTagOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListResourcesByTagRequest&, const ListResourcesByTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcesByTagAsyncHandler;
			typedef Outcome<Error, Model::ListSupportResourceTypesResult> ListSupportResourceTypesOutcome;
			typedef std::future<ListSupportResourceTypesOutcome> ListSupportResourceTypesOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListSupportResourceTypesRequest&, const ListSupportResourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSupportResourceTypesAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListTargetsForPolicyResult> ListTargetsForPolicyOutcome;
			typedef std::future<ListTargetsForPolicyOutcome> ListTargetsForPolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ListTargetsForPolicyRequest&, const ListTargetsForPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTargetsForPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyPolicyResult> ModifyPolicyOutcome;
			typedef std::future<ModifyPolicyOutcome> ModifyPolicyOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::ModifyPolicyRequest&, const ModifyPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyAsyncHandler;
			typedef Outcome<Error, Model::OpenCreatedByResult> OpenCreatedByOutcome;
			typedef std::future<OpenCreatedByOutcome> OpenCreatedByOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::OpenCreatedByRequest&, const OpenCreatedByOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenCreatedByAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const TagClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			TagClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TagClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TagClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TagClient();
			AttachPolicyOutcome attachPolicy(const Model::AttachPolicyRequest &request)const;
			void attachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPolicyOutcomeCallable attachPolicyCallable(const Model::AttachPolicyRequest& request) const;
			CheckCreatedByEnabledOutcome checkCreatedByEnabled(const Model::CheckCreatedByEnabledRequest &request)const;
			void checkCreatedByEnabledAsync(const Model::CheckCreatedByEnabledRequest& request, const CheckCreatedByEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCreatedByEnabledOutcomeCallable checkCreatedByEnabledCallable(const Model::CheckCreatedByEnabledRequest& request) const;
			CloseCreatedByOutcome closeCreatedBy(const Model::CloseCreatedByRequest &request)const;
			void closeCreatedByAsync(const Model::CloseCreatedByRequest& request, const CloseCreatedByAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseCreatedByOutcomeCallable closeCreatedByCallable(const Model::CloseCreatedByRequest& request) const;
			CreatePolicyOutcome createPolicy(const Model::CreatePolicyRequest &request)const;
			void createPolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyOutcomeCallable createPolicyCallable(const Model::CreatePolicyRequest& request) const;
			CreateTagsOutcome createTags(const Model::CreateTagsRequest &request)const;
			void createTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagsOutcomeCallable createTagsCallable(const Model::CreateTagsRequest& request) const;
			DeletePolicyOutcome deletePolicy(const Model::DeletePolicyRequest &request)const;
			void deletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyOutcomeCallable deletePolicyCallable(const Model::DeletePolicyRequest& request) const;
			DeleteTagOutcome deleteTag(const Model::DeleteTagRequest &request)const;
			void deleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagOutcomeCallable deleteTagCallable(const Model::DeleteTagRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DetachPolicyOutcome detachPolicy(const Model::DetachPolicyRequest &request)const;
			void detachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPolicyOutcomeCallable detachPolicyCallable(const Model::DetachPolicyRequest& request) const;
			DisablePolicyTypeOutcome disablePolicyType(const Model::DisablePolicyTypeRequest &request)const;
			void disablePolicyTypeAsync(const Model::DisablePolicyTypeRequest& request, const DisablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisablePolicyTypeOutcomeCallable disablePolicyTypeCallable(const Model::DisablePolicyTypeRequest& request) const;
			EnablePolicyTypeOutcome enablePolicyType(const Model::EnablePolicyTypeRequest &request)const;
			void enablePolicyTypeAsync(const Model::EnablePolicyTypeRequest& request, const EnablePolicyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnablePolicyTypeOutcomeCallable enablePolicyTypeCallable(const Model::EnablePolicyTypeRequest& request) const;
			GenerateConfigRuleReportOutcome generateConfigRuleReport(const Model::GenerateConfigRuleReportRequest &request)const;
			void generateConfigRuleReportAsync(const Model::GenerateConfigRuleReportRequest& request, const GenerateConfigRuleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateConfigRuleReportOutcomeCallable generateConfigRuleReportCallable(const Model::GenerateConfigRuleReportRequest& request) const;
			GetConfigRuleReportOutcome getConfigRuleReport(const Model::GetConfigRuleReportRequest &request)const;
			void getConfigRuleReportAsync(const Model::GetConfigRuleReportRequest& request, const GetConfigRuleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConfigRuleReportOutcomeCallable getConfigRuleReportCallable(const Model::GetConfigRuleReportRequest& request) const;
			GetEffectivePolicyOutcome getEffectivePolicy(const Model::GetEffectivePolicyRequest &request)const;
			void getEffectivePolicyAsync(const Model::GetEffectivePolicyRequest& request, const GetEffectivePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEffectivePolicyOutcomeCallable getEffectivePolicyCallable(const Model::GetEffectivePolicyRequest& request) const;
			GetPolicyOutcome getPolicy(const Model::GetPolicyRequest &request)const;
			void getPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyOutcomeCallable getPolicyCallable(const Model::GetPolicyRequest& request) const;
			GetPolicyEnableStatusOutcome getPolicyEnableStatus(const Model::GetPolicyEnableStatusRequest &request)const;
			void getPolicyEnableStatusAsync(const Model::GetPolicyEnableStatusRequest& request, const GetPolicyEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyEnableStatusOutcomeCallable getPolicyEnableStatusCallable(const Model::GetPolicyEnableStatusRequest& request) const;
			ListConfigRulesForTargetOutcome listConfigRulesForTarget(const Model::ListConfigRulesForTargetRequest &request)const;
			void listConfigRulesForTargetAsync(const Model::ListConfigRulesForTargetRequest& request, const ListConfigRulesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigRulesForTargetOutcomeCallable listConfigRulesForTargetCallable(const Model::ListConfigRulesForTargetRequest& request) const;
			ListPoliciesOutcome listPolicies(const Model::ListPoliciesRequest &request)const;
			void listPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesOutcomeCallable listPoliciesCallable(const Model::ListPoliciesRequest& request) const;
			ListPoliciesForTargetOutcome listPoliciesForTarget(const Model::ListPoliciesForTargetRequest &request)const;
			void listPoliciesForTargetAsync(const Model::ListPoliciesForTargetRequest& request, const ListPoliciesForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesForTargetOutcomeCallable listPoliciesForTargetCallable(const Model::ListPoliciesForTargetRequest& request) const;
			ListResourcesByTagOutcome listResourcesByTag(const Model::ListResourcesByTagRequest &request)const;
			void listResourcesByTagAsync(const Model::ListResourcesByTagRequest& request, const ListResourcesByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcesByTagOutcomeCallable listResourcesByTagCallable(const Model::ListResourcesByTagRequest& request) const;
			ListSupportResourceTypesOutcome listSupportResourceTypes(const Model::ListSupportResourceTypesRequest &request)const;
			void listSupportResourceTypesAsync(const Model::ListSupportResourceTypesRequest& request, const ListSupportResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSupportResourceTypesOutcomeCallable listSupportResourceTypesCallable(const Model::ListSupportResourceTypesRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ListTargetsForPolicyOutcome listTargetsForPolicy(const Model::ListTargetsForPolicyRequest &request)const;
			void listTargetsForPolicyAsync(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTargetsForPolicyOutcomeCallable listTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request) const;
			ModifyPolicyOutcome modifyPolicy(const Model::ModifyPolicyRequest &request)const;
			void modifyPolicyAsync(const Model::ModifyPolicyRequest& request, const ModifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPolicyOutcomeCallable modifyPolicyCallable(const Model::ModifyPolicyRequest& request) const;
			OpenCreatedByOutcome openCreatedBy(const Model::OpenCreatedByRequest &request)const;
			void openCreatedByAsync(const Model::OpenCreatedByRequest& request, const OpenCreatedByAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenCreatedByOutcomeCallable openCreatedByCallable(const Model::OpenCreatedByRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TAG_TAGCLIENT_H_
