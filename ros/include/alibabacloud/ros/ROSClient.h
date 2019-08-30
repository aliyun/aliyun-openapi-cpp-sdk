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
#include <alibabacloud/core/RpcServiceClient.h>
#include "ROSExport.h"
#include "model/ListStacksRequest.h"
#include "model/ListStacksResult.h"
#include "model/GetChangeSetRequest.h"
#include "model/GetChangeSetResult.h"
#include "model/ValidateTemplateRequest.h"
#include "model/ValidateTemplateResult.h"
#include "model/UpdateStackRequest.h"
#include "model/UpdateStackResult.h"
#include "model/GetStackResourceRequest.h"
#include "model/GetStackResourceResult.h"
#include "model/ListResourceTypesRequest.h"
#include "model/ListResourceTypesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetResourceTypeTemplateRequest.h"
#include "model/GetResourceTypeTemplateResult.h"
#include "model/CreateStackRequest.h"
#include "model/CreateStackResult.h"
#include "model/DeleteStackRequest.h"
#include "model/DeleteStackResult.h"
#include "model/GetTemplateEstimateCostRequest.h"
#include "model/GetTemplateEstimateCostResult.h"
#include "model/ContinueCreateStackRequest.h"
#include "model/ContinueCreateStackResult.h"
#include "model/GetResourceTypeRequest.h"
#include "model/GetResourceTypeResult.h"
#include "model/DeleteChangeSetRequest.h"
#include "model/DeleteChangeSetResult.h"
#include "model/PreviewStackRequest.h"
#include "model/PreviewStackResult.h"
#include "model/SignalResourceRequest.h"
#include "model/SignalResourceResult.h"
#include "model/ExecuteChangeSetRequest.h"
#include "model/ExecuteChangeSetResult.h"
#include "model/SetStackPolicyRequest.h"
#include "model/SetStackPolicyResult.h"
#include "model/CreateChangeSetRequest.h"
#include "model/CreateChangeSetResult.h"
#include "model/GetTemplateRequest.h"
#include "model/GetTemplateResult.h"
#include "model/ListStackEventsRequest.h"
#include "model/ListStackEventsResult.h"
#include "model/GetStackRequest.h"
#include "model/GetStackResult.h"
#include "model/GetStackPolicyRequest.h"
#include "model/GetStackPolicyResult.h"
#include "model/CancelUpdateStackRequest.h"
#include "model/CancelUpdateStackResult.h"
#include "model/ListStackResourcesRequest.h"
#include "model/ListStackResourcesResult.h"
#include "model/ListChangeSetsRequest.h"
#include "model/ListChangeSetsResult.h"


namespace AlibabaCloud
{
	namespace ROS
	{
		class ALIBABACLOUD_ROS_EXPORT ROSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ListStacksResult> ListStacksOutcome;
			typedef std::future<ListStacksOutcome> ListStacksOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ListStacksRequest&, const ListStacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStacksAsyncHandler;
			typedef Outcome<Error, Model::GetChangeSetResult> GetChangeSetOutcome;
			typedef std::future<GetChangeSetOutcome> GetChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetChangeSetRequest&, const GetChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChangeSetAsyncHandler;
			typedef Outcome<Error, Model::ValidateTemplateResult> ValidateTemplateOutcome;
			typedef std::future<ValidateTemplateOutcome> ValidateTemplateOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ValidateTemplateRequest&, const ValidateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateStackResult> UpdateStackOutcome;
			typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::UpdateStackRequest&, const UpdateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStackAsyncHandler;
			typedef Outcome<Error, Model::GetStackResourceResult> GetStackResourceOutcome;
			typedef std::future<GetStackResourceOutcome> GetStackResourceOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetStackResourceRequest&, const GetStackResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackResourceAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTypesResult> ListResourceTypesOutcome;
			typedef std::future<ListResourceTypesOutcome> ListResourceTypesOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ListResourceTypesRequest&, const ListResourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetResourceTypeTemplateResult> GetResourceTypeTemplateOutcome;
			typedef std::future<GetResourceTypeTemplateOutcome> GetResourceTypeTemplateOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetResourceTypeTemplateRequest&, const GetResourceTypeTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceTypeTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateStackResult> CreateStackOutcome;
			typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::CreateStackRequest&, const CreateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStackAsyncHandler;
			typedef Outcome<Error, Model::DeleteStackResult> DeleteStackOutcome;
			typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DeleteStackRequest&, const DeleteStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStackAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateEstimateCostResult> GetTemplateEstimateCostOutcome;
			typedef std::future<GetTemplateEstimateCostOutcome> GetTemplateEstimateCostOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetTemplateEstimateCostRequest&, const GetTemplateEstimateCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateEstimateCostAsyncHandler;
			typedef Outcome<Error, Model::ContinueCreateStackResult> ContinueCreateStackOutcome;
			typedef std::future<ContinueCreateStackOutcome> ContinueCreateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ContinueCreateStackRequest&, const ContinueCreateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinueCreateStackAsyncHandler;
			typedef Outcome<Error, Model::GetResourceTypeResult> GetResourceTypeOutcome;
			typedef std::future<GetResourceTypeOutcome> GetResourceTypeOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetResourceTypeRequest&, const GetResourceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceTypeAsyncHandler;
			typedef Outcome<Error, Model::DeleteChangeSetResult> DeleteChangeSetOutcome;
			typedef std::future<DeleteChangeSetOutcome> DeleteChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::DeleteChangeSetRequest&, const DeleteChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteChangeSetAsyncHandler;
			typedef Outcome<Error, Model::PreviewStackResult> PreviewStackOutcome;
			typedef std::future<PreviewStackOutcome> PreviewStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::PreviewStackRequest&, const PreviewStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewStackAsyncHandler;
			typedef Outcome<Error, Model::SignalResourceResult> SignalResourceOutcome;
			typedef std::future<SignalResourceOutcome> SignalResourceOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::SignalResourceRequest&, const SignalResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SignalResourceAsyncHandler;
			typedef Outcome<Error, Model::ExecuteChangeSetResult> ExecuteChangeSetOutcome;
			typedef std::future<ExecuteChangeSetOutcome> ExecuteChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ExecuteChangeSetRequest&, const ExecuteChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteChangeSetAsyncHandler;
			typedef Outcome<Error, Model::SetStackPolicyResult> SetStackPolicyOutcome;
			typedef std::future<SetStackPolicyOutcome> SetStackPolicyOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::SetStackPolicyRequest&, const SetStackPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetStackPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateChangeSetResult> CreateChangeSetOutcome;
			typedef std::future<CreateChangeSetOutcome> CreateChangeSetOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::CreateChangeSetRequest&, const CreateChangeSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateChangeSetAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateResult> GetTemplateOutcome;
			typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetTemplateRequest&, const GetTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListStackEventsResult> ListStackEventsOutcome;
			typedef std::future<ListStackEventsOutcome> ListStackEventsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ListStackEventsRequest&, const ListStackEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStackEventsAsyncHandler;
			typedef Outcome<Error, Model::GetStackResult> GetStackOutcome;
			typedef std::future<GetStackOutcome> GetStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetStackRequest&, const GetStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackAsyncHandler;
			typedef Outcome<Error, Model::GetStackPolicyResult> GetStackPolicyOutcome;
			typedef std::future<GetStackPolicyOutcome> GetStackPolicyOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::GetStackPolicyRequest&, const GetStackPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackPolicyAsyncHandler;
			typedef Outcome<Error, Model::CancelUpdateStackResult> CancelUpdateStackOutcome;
			typedef std::future<CancelUpdateStackOutcome> CancelUpdateStackOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::CancelUpdateStackRequest&, const CancelUpdateStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelUpdateStackAsyncHandler;
			typedef Outcome<Error, Model::ListStackResourcesResult> ListStackResourcesOutcome;
			typedef std::future<ListStackResourcesOutcome> ListStackResourcesOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ListStackResourcesRequest&, const ListStackResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStackResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListChangeSetsResult> ListChangeSetsOutcome;
			typedef std::future<ListChangeSetsOutcome> ListChangeSetsOutcomeCallable;
			typedef std::function<void(const ROSClient*, const Model::ListChangeSetsRequest&, const ListChangeSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChangeSetsAsyncHandler;

			ROSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ROSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ROSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ROSClient();
			ListStacksOutcome listStacks(const Model::ListStacksRequest &request)const;
			void listStacksAsync(const Model::ListStacksRequest& request, const ListStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStacksOutcomeCallable listStacksCallable(const Model::ListStacksRequest& request) const;
			GetChangeSetOutcome getChangeSet(const Model::GetChangeSetRequest &request)const;
			void getChangeSetAsync(const Model::GetChangeSetRequest& request, const GetChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChangeSetOutcomeCallable getChangeSetCallable(const Model::GetChangeSetRequest& request) const;
			ValidateTemplateOutcome validateTemplate(const Model::ValidateTemplateRequest &request)const;
			void validateTemplateAsync(const Model::ValidateTemplateRequest& request, const ValidateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateTemplateOutcomeCallable validateTemplateCallable(const Model::ValidateTemplateRequest& request) const;
			UpdateStackOutcome updateStack(const Model::UpdateStackRequest &request)const;
			void updateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStackOutcomeCallable updateStackCallable(const Model::UpdateStackRequest& request) const;
			GetStackResourceOutcome getStackResource(const Model::GetStackResourceRequest &request)const;
			void getStackResourceAsync(const Model::GetStackResourceRequest& request, const GetStackResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackResourceOutcomeCallable getStackResourceCallable(const Model::GetStackResourceRequest& request) const;
			ListResourceTypesOutcome listResourceTypes(const Model::ListResourceTypesRequest &request)const;
			void listResourceTypesAsync(const Model::ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTypesOutcomeCallable listResourceTypesCallable(const Model::ListResourceTypesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetResourceTypeTemplateOutcome getResourceTypeTemplate(const Model::GetResourceTypeTemplateRequest &request)const;
			void getResourceTypeTemplateAsync(const Model::GetResourceTypeTemplateRequest& request, const GetResourceTypeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceTypeTemplateOutcomeCallable getResourceTypeTemplateCallable(const Model::GetResourceTypeTemplateRequest& request) const;
			CreateStackOutcome createStack(const Model::CreateStackRequest &request)const;
			void createStackAsync(const Model::CreateStackRequest& request, const CreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStackOutcomeCallable createStackCallable(const Model::CreateStackRequest& request) const;
			DeleteStackOutcome deleteStack(const Model::DeleteStackRequest &request)const;
			void deleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStackOutcomeCallable deleteStackCallable(const Model::DeleteStackRequest& request) const;
			GetTemplateEstimateCostOutcome getTemplateEstimateCost(const Model::GetTemplateEstimateCostRequest &request)const;
			void getTemplateEstimateCostAsync(const Model::GetTemplateEstimateCostRequest& request, const GetTemplateEstimateCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateEstimateCostOutcomeCallable getTemplateEstimateCostCallable(const Model::GetTemplateEstimateCostRequest& request) const;
			ContinueCreateStackOutcome continueCreateStack(const Model::ContinueCreateStackRequest &request)const;
			void continueCreateStackAsync(const Model::ContinueCreateStackRequest& request, const ContinueCreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinueCreateStackOutcomeCallable continueCreateStackCallable(const Model::ContinueCreateStackRequest& request) const;
			GetResourceTypeOutcome getResourceType(const Model::GetResourceTypeRequest &request)const;
			void getResourceTypeAsync(const Model::GetResourceTypeRequest& request, const GetResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceTypeOutcomeCallable getResourceTypeCallable(const Model::GetResourceTypeRequest& request) const;
			DeleteChangeSetOutcome deleteChangeSet(const Model::DeleteChangeSetRequest &request)const;
			void deleteChangeSetAsync(const Model::DeleteChangeSetRequest& request, const DeleteChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteChangeSetOutcomeCallable deleteChangeSetCallable(const Model::DeleteChangeSetRequest& request) const;
			PreviewStackOutcome previewStack(const Model::PreviewStackRequest &request)const;
			void previewStackAsync(const Model::PreviewStackRequest& request, const PreviewStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewStackOutcomeCallable previewStackCallable(const Model::PreviewStackRequest& request) const;
			SignalResourceOutcome signalResource(const Model::SignalResourceRequest &request)const;
			void signalResourceAsync(const Model::SignalResourceRequest& request, const SignalResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SignalResourceOutcomeCallable signalResourceCallable(const Model::SignalResourceRequest& request) const;
			ExecuteChangeSetOutcome executeChangeSet(const Model::ExecuteChangeSetRequest &request)const;
			void executeChangeSetAsync(const Model::ExecuteChangeSetRequest& request, const ExecuteChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteChangeSetOutcomeCallable executeChangeSetCallable(const Model::ExecuteChangeSetRequest& request) const;
			SetStackPolicyOutcome setStackPolicy(const Model::SetStackPolicyRequest &request)const;
			void setStackPolicyAsync(const Model::SetStackPolicyRequest& request, const SetStackPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetStackPolicyOutcomeCallable setStackPolicyCallable(const Model::SetStackPolicyRequest& request) const;
			CreateChangeSetOutcome createChangeSet(const Model::CreateChangeSetRequest &request)const;
			void createChangeSetAsync(const Model::CreateChangeSetRequest& request, const CreateChangeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateChangeSetOutcomeCallable createChangeSetCallable(const Model::CreateChangeSetRequest& request) const;
			GetTemplateOutcome getTemplate(const Model::GetTemplateRequest &request)const;
			void getTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateOutcomeCallable getTemplateCallable(const Model::GetTemplateRequest& request) const;
			ListStackEventsOutcome listStackEvents(const Model::ListStackEventsRequest &request)const;
			void listStackEventsAsync(const Model::ListStackEventsRequest& request, const ListStackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStackEventsOutcomeCallable listStackEventsCallable(const Model::ListStackEventsRequest& request) const;
			GetStackOutcome getStack(const Model::GetStackRequest &request)const;
			void getStackAsync(const Model::GetStackRequest& request, const GetStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackOutcomeCallable getStackCallable(const Model::GetStackRequest& request) const;
			GetStackPolicyOutcome getStackPolicy(const Model::GetStackPolicyRequest &request)const;
			void getStackPolicyAsync(const Model::GetStackPolicyRequest& request, const GetStackPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackPolicyOutcomeCallable getStackPolicyCallable(const Model::GetStackPolicyRequest& request) const;
			CancelUpdateStackOutcome cancelUpdateStack(const Model::CancelUpdateStackRequest &request)const;
			void cancelUpdateStackAsync(const Model::CancelUpdateStackRequest& request, const CancelUpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelUpdateStackOutcomeCallable cancelUpdateStackCallable(const Model::CancelUpdateStackRequest& request) const;
			ListStackResourcesOutcome listStackResources(const Model::ListStackResourcesRequest &request)const;
			void listStackResourcesAsync(const Model::ListStackResourcesRequest& request, const ListStackResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStackResourcesOutcomeCallable listStackResourcesCallable(const Model::ListStackResourcesRequest& request) const;
			ListChangeSetsOutcome listChangeSets(const Model::ListChangeSetsRequest &request)const;
			void listChangeSetsAsync(const Model::ListChangeSetsRequest& request, const ListChangeSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChangeSetsOutcomeCallable listChangeSetsCallable(const Model::ListChangeSetsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ROS_ROSCLIENT_H_
