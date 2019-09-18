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

#ifndef ALIBABACLOUD_ROS_ROSCLIENT_H_
#define ALIBABACLOUD_ROS_ROSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "ROSExport.h"
#include "model/AbandonStackRequest.h"
#include "model/AbandonStackResult.h"
#include "model/CancelUpdateStackRequest.h"
#include "model/CancelUpdateStackResult.h"
#include "model/ContinueCreateStackRequest.h"
#include "model/ContinueCreateStackResult.h"
#include "model/CreateChangeSetRequest.h"
#include "model/CreateChangeSetResult.h"
#include "model/CreateStacksRequest.h"
#include "model/CreateStacksResult.h"
#include "model/DeleteChangeSetRequest.h"
#include "model/DeleteChangeSetResult.h"
#include "model/DeleteStackRequest.h"
#include "model/DeleteStackResult.h"
#include "model/DescribeChangeSetDetailRequest.h"
#include "model/DescribeChangeSetDetailResult.h"
#include "model/DescribeChangeSetsRequest.h"
#include "model/DescribeChangeSetsResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeResourceDetailRequest.h"
#include "model/DescribeResourceDetailResult.h"
#include "model/DescribeResourceTypeDetailRequest.h"
#include "model/DescribeResourceTypeDetailResult.h"
#include "model/DescribeResourceTypeTemplateRequest.h"
#include "model/DescribeResourceTypeTemplateResult.h"
#include "model/DescribeResourceTypesRequest.h"
#include "model/DescribeResourceTypesResult.h"
#include "model/DescribeResourcesRequest.h"
#include "model/DescribeResourcesResult.h"
#include "model/DescribeStackDetailRequest.h"
#include "model/DescribeStackDetailResult.h"
#include "model/DescribeStacksRequest.h"
#include "model/DescribeStacksResult.h"
#include "model/DescribeTemplateRequest.h"
#include "model/DescribeTemplateResult.h"
#include "model/DoActionsRequest.h"
#include "model/DoActionsResult.h"
#include "model/ExecuteChangeSetRequest.h"
#include "model/ExecuteChangeSetResult.h"
#include "model/GetStackPolicyRequest.h"
#include "model/GetStackPolicyResult.h"
#include "model/InquiryStackRequest.h"
#include "model/InquiryStackResult.h"
#include "model/PreviewStackRequest.h"
#include "model/PreviewStackResult.h"
#include "model/SetStackPolicyRequest.h"
#include "model/SetStackPolicyResult.h"
#include "model/UpdateStackRequest.h"
#include "model/UpdateStackResult.h"
#include "model/ValidateTemplateRequest.h"
#include "model/ValidateTemplateResult.h"
#include "model/WaitConditionsRequest.h"
#include "model/WaitConditionsResult.h"


namespace AlibabaCloud
{
	namespace ROS
	{
		class ALIBABACLOUD_ROS_EXPORT ROSClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbandonStackResult> AbandonStackOutcome;
			typedef std::future<AbandonStackOutcome> AbandonStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::AbandonStackRequest&, const AbandonStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbandonStackAsyncHandler;
			typedef Outcome<Error, Model::CancelUpdateStackResult> CancelUpdateStackOutcome;
			typedef std::future<CancelUpdateStackOutcome> CancelUpdateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::CancelUpdateStackRequest&, const CancelUpdateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelUpdateStackAsyncHandler;
			typedef Outcome<Error, Model::ContinueCreateStackResult> ContinueCreateStackOutcome;
			typedef std::future<ContinueCreateStackOutcome> ContinueCreateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ContinueCreateStackRequest&, const ContinueCreateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinueCreateStackAsyncHandler;
			typedef Outcome<Error, Model::CreateChangeSetResult> CreateChangeSetOutcome;
			typedef std::future<CreateChangeSetOutcome> CreateChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::CreateChangeSetRequest&, const CreateChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChangeSetAsyncHandler;
			typedef Outcome<Error, Model::CreateStacksResult> CreateStacksOutcome;
			typedef std::future<CreateStacksOutcome> CreateStacksOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::CreateStacksRequest&, const CreateStacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStacksAsyncHandler;
			typedef Outcome<Error, Model::DeleteChangeSetResult> DeleteChangeSetOutcome;
			typedef std::future<DeleteChangeSetOutcome> DeleteChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DeleteChangeSetRequest&, const DeleteChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChangeSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteStackResult> DeleteStackOutcome;
			typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DeleteStackRequest&, const DeleteStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStackAsyncHandler;
			typedef Outcome<Error, Model::DescribeChangeSetDetailResult> DescribeChangeSetDetailOutcome;
			typedef std::future<DescribeChangeSetDetailOutcome> DescribeChangeSetDetailOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeChangeSetDetailRequest&, const DescribeChangeSetDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChangeSetDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeChangeSetsResult> DescribeChangeSetsOutcome;
			typedef std::future<DescribeChangeSetsOutcome> DescribeChangeSetsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeChangeSetsRequest&, const DescribeChangeSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChangeSetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceDetailResult> DescribeResourceDetailOutcome;
			typedef std::future<DescribeResourceDetailOutcome> DescribeResourceDetailOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeResourceDetailRequest&, const DescribeResourceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceTypeDetailResult> DescribeResourceTypeDetailOutcome;
			typedef std::future<DescribeResourceTypeDetailOutcome> DescribeResourceTypeDetailOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeResourceTypeDetailRequest&, const DescribeResourceTypeDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTypeDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceTypeTemplateResult> DescribeResourceTypeTemplateOutcome;
			typedef std::future<DescribeResourceTypeTemplateOutcome> DescribeResourceTypeTemplateOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeResourceTypeTemplateRequest&, const DescribeResourceTypeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTypeTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceTypesResult> DescribeResourceTypesOutcome;
			typedef std::future<DescribeResourceTypesOutcome> DescribeResourceTypesOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeResourceTypesRequest&, const DescribeResourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourcesResult> DescribeResourcesOutcome;
			typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeResourcesRequest&, const DescribeResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeStackDetailResult> DescribeStackDetailOutcome;
			typedef std::future<DescribeStackDetailOutcome> DescribeStackDetailOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeStackDetailRequest&, const DescribeStackDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStackDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStacksResult> DescribeStacksOutcome;
			typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeStacksRequest&, const DescribeStacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStacksAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplateResult> DescribeTemplateOutcome;
			typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeTemplateRequest&, const DescribeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAsyncHandler;
			typedef Outcome<Error, Model::DoActionsResult> DoActionsOutcome;
			typedef std::future<DoActionsOutcome> DoActionsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DoActionsRequest&, const DoActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DoActionsAsyncHandler;
			typedef Outcome<Error, Model::ExecuteChangeSetResult> ExecuteChangeSetOutcome;
			typedef std::future<ExecuteChangeSetOutcome> ExecuteChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ExecuteChangeSetRequest&, const ExecuteChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteChangeSetAsyncHandler;
			typedef Outcome<Error, Model::GetStackPolicyResult> GetStackPolicyOutcome;
			typedef std::future<GetStackPolicyOutcome> GetStackPolicyOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetStackPolicyRequest&, const GetStackPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackPolicyAsyncHandler;
			typedef Outcome<Error, Model::InquiryStackResult> InquiryStackOutcome;
			typedef std::future<InquiryStackOutcome> InquiryStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::InquiryStackRequest&, const InquiryStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InquiryStackAsyncHandler;
			typedef Outcome<Error, Model::PreviewStackResult> PreviewStackOutcome;
			typedef std::future<PreviewStackOutcome> PreviewStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::PreviewStackRequest&, const PreviewStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewStackAsyncHandler;
			typedef Outcome<Error, Model::SetStackPolicyResult> SetStackPolicyOutcome;
			typedef std::future<SetStackPolicyOutcome> SetStackPolicyOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::SetStackPolicyRequest&, const SetStackPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetStackPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateStackResult> UpdateStackOutcome;
			typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::UpdateStackRequest&, const UpdateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStackAsyncHandler;
			typedef Outcome<Error, Model::ValidateTemplateResult> ValidateTemplateOutcome;
			typedef std::future<ValidateTemplateOutcome> ValidateTemplateOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ValidateTemplateRequest&, const ValidateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateTemplateAsyncHandler;
			typedef Outcome<Error, Model::WaitConditionsResult> WaitConditionsOutcome;
			typedef std::future<WaitConditionsOutcome> WaitConditionsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::WaitConditionsRequest&, const WaitConditionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WaitConditionsAsyncHandler;

			ROSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ROSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ROSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ROSClient();
			AbandonStackOutcome abandonStack(const Model::AbandonStackRequest &request)const;
			void abandonStackAsync(const Model::AbandonStackRequest& request, const AbandonStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbandonStackOutcomeCallable abandonStackCallable(const Model::AbandonStackRequest& request) const;
			CancelUpdateStackOutcome cancelUpdateStack(const Model::CancelUpdateStackRequest &request)const;
			void cancelUpdateStackAsync(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelUpdateStackOutcomeCallable cancelUpdateStackCallable(const Model::CancelUpdateStackRequest& request) const;
			ContinueCreateStackOutcome continueCreateStack(const Model::ContinueCreateStackRequest &request)const;
			void continueCreateStackAsync(const Model::ContinueCreateStackRequest& request, const ContinueCreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinueCreateStackOutcomeCallable continueCreateStackCallable(const Model::ContinueCreateStackRequest& request) const;
			CreateChangeSetOutcome createChangeSet(const Model::CreateChangeSetRequest &request)const;
			void createChangeSetAsync(const Model::CreateChangeSetRequest& request, const CreateChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChangeSetOutcomeCallable createChangeSetCallable(const Model::CreateChangeSetRequest& request) const;
			CreateStacksOutcome createStacks(const Model::CreateStacksRequest &request)const;
			void createStacksAsync(const Model::CreateStacksRequest& request, const CreateStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStacksOutcomeCallable createStacksCallable(const Model::CreateStacksRequest& request) const;
			DeleteChangeSetOutcome deleteChangeSet(const Model::DeleteChangeSetRequest &request)const;
			void deleteChangeSetAsync(const Model::DeleteChangeSetRequest& request, const DeleteChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChangeSetOutcomeCallable deleteChangeSetCallable(const Model::DeleteChangeSetRequest& request) const;
			DeleteStackOutcome deleteStack(const Model::DeleteStackRequest &request)const;
			void deleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStackOutcomeCallable deleteStackCallable(const Model::DeleteStackRequest& request) const;
			DescribeChangeSetDetailOutcome describeChangeSetDetail(const Model::DescribeChangeSetDetailRequest &request)const;
			void describeChangeSetDetailAsync(const Model::DescribeChangeSetDetailRequest& request, const DescribeChangeSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChangeSetDetailOutcomeCallable describeChangeSetDetailCallable(const Model::DescribeChangeSetDetailRequest& request) const;
			DescribeChangeSetsOutcome describeChangeSets(const Model::DescribeChangeSetsRequest &request)const;
			void describeChangeSetsAsync(const Model::DescribeChangeSetsRequest& request, const DescribeChangeSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChangeSetsOutcomeCallable describeChangeSetsCallable(const Model::DescribeChangeSetsRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeResourceDetailOutcome describeResourceDetail(const Model::DescribeResourceDetailRequest &request)const;
			void describeResourceDetailAsync(const Model::DescribeResourceDetailRequest& request, const DescribeResourceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceDetailOutcomeCallable describeResourceDetailCallable(const Model::DescribeResourceDetailRequest& request) const;
			DescribeResourceTypeDetailOutcome describeResourceTypeDetail(const Model::DescribeResourceTypeDetailRequest &request)const;
			void describeResourceTypeDetailAsync(const Model::DescribeResourceTypeDetailRequest& request, const DescribeResourceTypeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceTypeDetailOutcomeCallable describeResourceTypeDetailCallable(const Model::DescribeResourceTypeDetailRequest& request) const;
			DescribeResourceTypeTemplateOutcome describeResourceTypeTemplate(const Model::DescribeResourceTypeTemplateRequest &request)const;
			void describeResourceTypeTemplateAsync(const Model::DescribeResourceTypeTemplateRequest& request, const DescribeResourceTypeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceTypeTemplateOutcomeCallable describeResourceTypeTemplateCallable(const Model::DescribeResourceTypeTemplateRequest& request) const;
			DescribeResourceTypesOutcome describeResourceTypes(const Model::DescribeResourceTypesRequest &request)const;
			void describeResourceTypesAsync(const Model::DescribeResourceTypesRequest& request, const DescribeResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceTypesOutcomeCallable describeResourceTypesCallable(const Model::DescribeResourceTypesRequest& request) const;
			DescribeResourcesOutcome describeResources(const Model::DescribeResourcesRequest &request)const;
			void describeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourcesOutcomeCallable describeResourcesCallable(const Model::DescribeResourcesRequest& request) const;
			DescribeStackDetailOutcome describeStackDetail(const Model::DescribeStackDetailRequest &request)const;
			void describeStackDetailAsync(const Model::DescribeStackDetailRequest& request, const DescribeStackDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStackDetailOutcomeCallable describeStackDetailCallable(const Model::DescribeStackDetailRequest& request) const;
			DescribeStacksOutcome describeStacks(const Model::DescribeStacksRequest &request)const;
			void describeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStacksOutcomeCallable describeStacksCallable(const Model::DescribeStacksRequest& request) const;
			DescribeTemplateOutcome describeTemplate(const Model::DescribeTemplateRequest &request)const;
			void describeTemplateAsync(const Model::DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplateOutcomeCallable describeTemplateCallable(const Model::DescribeTemplateRequest& request) const;
			DoActionsOutcome doActions(const Model::DoActionsRequest &request)const;
			void doActionsAsync(const Model::DoActionsRequest& request, const DoActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DoActionsOutcomeCallable doActionsCallable(const Model::DoActionsRequest& request) const;
			ExecuteChangeSetOutcome executeChangeSet(const Model::ExecuteChangeSetRequest &request)const;
			void executeChangeSetAsync(const Model::ExecuteChangeSetRequest& request, const ExecuteChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteChangeSetOutcomeCallable executeChangeSetCallable(const Model::ExecuteChangeSetRequest& request) const;
			GetStackPolicyOutcome getStackPolicy(const Model::GetStackPolicyRequest &request)const;
			void getStackPolicyAsync(const Model::GetStackPolicyRequest& request, const GetStackPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackPolicyOutcomeCallable getStackPolicyCallable(const Model::GetStackPolicyRequest& request) const;
			InquiryStackOutcome inquiryStack(const Model::InquiryStackRequest &request)const;
			void inquiryStackAsync(const Model::InquiryStackRequest& request, const InquiryStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InquiryStackOutcomeCallable inquiryStackCallable(const Model::InquiryStackRequest& request) const;
			PreviewStackOutcome previewStack(const Model::PreviewStackRequest &request)const;
			void previewStackAsync(const Model::PreviewStackRequest& request, const PreviewStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewStackOutcomeCallable previewStackCallable(const Model::PreviewStackRequest& request) const;
			SetStackPolicyOutcome setStackPolicy(const Model::SetStackPolicyRequest &request)const;
			void setStackPolicyAsync(const Model::SetStackPolicyRequest& request, const SetStackPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetStackPolicyOutcomeCallable setStackPolicyCallable(const Model::SetStackPolicyRequest& request) const;
			UpdateStackOutcome updateStack(const Model::UpdateStackRequest &request)const;
			void updateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStackOutcomeCallable updateStackCallable(const Model::UpdateStackRequest& request) const;
			ValidateTemplateOutcome validateTemplate(const Model::ValidateTemplateRequest &request)const;
			void validateTemplateAsync(const Model::ValidateTemplateRequest& request, const ValidateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateTemplateOutcomeCallable validateTemplateCallable(const Model::ValidateTemplateRequest& request) const;
			WaitConditionsOutcome waitConditions(const Model::WaitConditionsRequest &request)const;
			void waitConditionsAsync(const Model::WaitConditionsRequest& request, const WaitConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WaitConditionsOutcomeCallable waitConditionsCallable(const Model::WaitConditionsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ROS_ROSCLIENT_H_
