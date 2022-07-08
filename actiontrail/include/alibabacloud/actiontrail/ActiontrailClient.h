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

#ifndef ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_
#define ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ActiontrailExport.h"
#include "model/CreateDeliveryHistoryJobRequest.h"
#include "model/CreateDeliveryHistoryJobResult.h"
#include "model/CreateTrailRequest.h"
#include "model/CreateTrailResult.h"
#include "model/DeleteDeliveryHistoryJobRequest.h"
#include "model/DeleteDeliveryHistoryJobResult.h"
#include "model/DeleteTrailRequest.h"
#include "model/DeleteTrailResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeTrailsRequest.h"
#include "model/DescribeTrailsResult.h"
#include "model/GetAccessKeyLastUsedEventsRequest.h"
#include "model/GetAccessKeyLastUsedEventsResult.h"
#include "model/GetAccessKeyLastUsedInfoRequest.h"
#include "model/GetAccessKeyLastUsedInfoResult.h"
#include "model/GetAccessKeyLastUsedIpsRequest.h"
#include "model/GetAccessKeyLastUsedIpsResult.h"
#include "model/GetAccessKeyLastUsedProductsRequest.h"
#include "model/GetAccessKeyLastUsedProductsResult.h"
#include "model/GetAccessKeyLastUsedResourcesRequest.h"
#include "model/GetAccessKeyLastUsedResourcesResult.h"
#include "model/GetDeliveryHistoryJobRequest.h"
#include "model/GetDeliveryHistoryJobResult.h"
#include "model/GetTrailStatusRequest.h"
#include "model/GetTrailStatusResult.h"
#include "model/ListDeliveryHistoryJobsRequest.h"
#include "model/ListDeliveryHistoryJobsResult.h"
#include "model/LookupEventsRequest.h"
#include "model/LookupEventsResult.h"
#include "model/StartLoggingRequest.h"
#include "model/StartLoggingResult.h"
#include "model/StopLoggingRequest.h"
#include "model/StopLoggingResult.h"
#include "model/UpdateTrailRequest.h"
#include "model/UpdateTrailResult.h"


namespace AlibabaCloud
{
	namespace Actiontrail
	{
		class ALIBABACLOUD_ACTIONTRAIL_EXPORT ActiontrailClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateDeliveryHistoryJobResult> CreateDeliveryHistoryJobOutcome;
			typedef std::future<CreateDeliveryHistoryJobOutcome> CreateDeliveryHistoryJobOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::CreateDeliveryHistoryJobRequest&, const CreateDeliveryHistoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeliveryHistoryJobAsyncHandler;
			typedef Outcome<Error, Model::CreateTrailResult> CreateTrailOutcome;
			typedef std::future<CreateTrailOutcome> CreateTrailOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::CreateTrailRequest&, const CreateTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrailAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeliveryHistoryJobResult> DeleteDeliveryHistoryJobOutcome;
			typedef std::future<DeleteDeliveryHistoryJobOutcome> DeleteDeliveryHistoryJobOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DeleteDeliveryHistoryJobRequest&, const DeleteDeliveryHistoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeliveryHistoryJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrailResult> DeleteTrailOutcome;
			typedef std::future<DeleteTrailOutcome> DeleteTrailOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DeleteTrailRequest&, const DeleteTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrailsResult> DescribeTrailsOutcome;
			typedef std::future<DescribeTrailsOutcome> DescribeTrailsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DescribeTrailsRequest&, const DescribeTrailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrailsAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedEventsResult> GetAccessKeyLastUsedEventsOutcome;
			typedef std::future<GetAccessKeyLastUsedEventsOutcome> GetAccessKeyLastUsedEventsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetAccessKeyLastUsedEventsRequest&, const GetAccessKeyLastUsedEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedEventsAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedInfoResult> GetAccessKeyLastUsedInfoOutcome;
			typedef std::future<GetAccessKeyLastUsedInfoOutcome> GetAccessKeyLastUsedInfoOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetAccessKeyLastUsedInfoRequest&, const GetAccessKeyLastUsedInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedInfoAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedIpsResult> GetAccessKeyLastUsedIpsOutcome;
			typedef std::future<GetAccessKeyLastUsedIpsOutcome> GetAccessKeyLastUsedIpsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetAccessKeyLastUsedIpsRequest&, const GetAccessKeyLastUsedIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedIpsAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedProductsResult> GetAccessKeyLastUsedProductsOutcome;
			typedef std::future<GetAccessKeyLastUsedProductsOutcome> GetAccessKeyLastUsedProductsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetAccessKeyLastUsedProductsRequest&, const GetAccessKeyLastUsedProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedProductsAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedResourcesResult> GetAccessKeyLastUsedResourcesOutcome;
			typedef std::future<GetAccessKeyLastUsedResourcesOutcome> GetAccessKeyLastUsedResourcesOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetAccessKeyLastUsedResourcesRequest&, const GetAccessKeyLastUsedResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedResourcesAsyncHandler;
			typedef Outcome<Error, Model::GetDeliveryHistoryJobResult> GetDeliveryHistoryJobOutcome;
			typedef std::future<GetDeliveryHistoryJobOutcome> GetDeliveryHistoryJobOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetDeliveryHistoryJobRequest&, const GetDeliveryHistoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeliveryHistoryJobAsyncHandler;
			typedef Outcome<Error, Model::GetTrailStatusResult> GetTrailStatusOutcome;
			typedef std::future<GetTrailStatusOutcome> GetTrailStatusOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetTrailStatusRequest&, const GetTrailStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTrailStatusAsyncHandler;
			typedef Outcome<Error, Model::ListDeliveryHistoryJobsResult> ListDeliveryHistoryJobsOutcome;
			typedef std::future<ListDeliveryHistoryJobsOutcome> ListDeliveryHistoryJobsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::ListDeliveryHistoryJobsRequest&, const ListDeliveryHistoryJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeliveryHistoryJobsAsyncHandler;
			typedef Outcome<Error, Model::LookupEventsResult> LookupEventsOutcome;
			typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::LookupEventsRequest&, const LookupEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LookupEventsAsyncHandler;
			typedef Outcome<Error, Model::StartLoggingResult> StartLoggingOutcome;
			typedef std::future<StartLoggingOutcome> StartLoggingOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::StartLoggingRequest&, const StartLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLoggingAsyncHandler;
			typedef Outcome<Error, Model::StopLoggingResult> StopLoggingOutcome;
			typedef std::future<StopLoggingOutcome> StopLoggingOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::StopLoggingRequest&, const StopLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLoggingAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrailResult> UpdateTrailOutcome;
			typedef std::future<UpdateTrailOutcome> UpdateTrailOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::UpdateTrailRequest&, const UpdateTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrailAsyncHandler;

			ActiontrailClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ActiontrailClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ActiontrailClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ActiontrailClient();
			CreateDeliveryHistoryJobOutcome createDeliveryHistoryJob(const Model::CreateDeliveryHistoryJobRequest &request)const;
			void createDeliveryHistoryJobAsync(const Model::CreateDeliveryHistoryJobRequest& request, const CreateDeliveryHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeliveryHistoryJobOutcomeCallable createDeliveryHistoryJobCallable(const Model::CreateDeliveryHistoryJobRequest& request) const;
			CreateTrailOutcome createTrail(const Model::CreateTrailRequest &request)const;
			void createTrailAsync(const Model::CreateTrailRequest& request, const CreateTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrailOutcomeCallable createTrailCallable(const Model::CreateTrailRequest& request) const;
			DeleteDeliveryHistoryJobOutcome deleteDeliveryHistoryJob(const Model::DeleteDeliveryHistoryJobRequest &request)const;
			void deleteDeliveryHistoryJobAsync(const Model::DeleteDeliveryHistoryJobRequest& request, const DeleteDeliveryHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeliveryHistoryJobOutcomeCallable deleteDeliveryHistoryJobCallable(const Model::DeleteDeliveryHistoryJobRequest& request) const;
			DeleteTrailOutcome deleteTrail(const Model::DeleteTrailRequest &request)const;
			void deleteTrailAsync(const Model::DeleteTrailRequest& request, const DeleteTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrailOutcomeCallable deleteTrailCallable(const Model::DeleteTrailRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeTrailsOutcome describeTrails(const Model::DescribeTrailsRequest &request)const;
			void describeTrailsAsync(const Model::DescribeTrailsRequest& request, const DescribeTrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrailsOutcomeCallable describeTrailsCallable(const Model::DescribeTrailsRequest& request) const;
			GetAccessKeyLastUsedEventsOutcome getAccessKeyLastUsedEvents(const Model::GetAccessKeyLastUsedEventsRequest &request)const;
			void getAccessKeyLastUsedEventsAsync(const Model::GetAccessKeyLastUsedEventsRequest& request, const GetAccessKeyLastUsedEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedEventsOutcomeCallable getAccessKeyLastUsedEventsCallable(const Model::GetAccessKeyLastUsedEventsRequest& request) const;
			GetAccessKeyLastUsedInfoOutcome getAccessKeyLastUsedInfo(const Model::GetAccessKeyLastUsedInfoRequest &request)const;
			void getAccessKeyLastUsedInfoAsync(const Model::GetAccessKeyLastUsedInfoRequest& request, const GetAccessKeyLastUsedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedInfoOutcomeCallable getAccessKeyLastUsedInfoCallable(const Model::GetAccessKeyLastUsedInfoRequest& request) const;
			GetAccessKeyLastUsedIpsOutcome getAccessKeyLastUsedIps(const Model::GetAccessKeyLastUsedIpsRequest &request)const;
			void getAccessKeyLastUsedIpsAsync(const Model::GetAccessKeyLastUsedIpsRequest& request, const GetAccessKeyLastUsedIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedIpsOutcomeCallable getAccessKeyLastUsedIpsCallable(const Model::GetAccessKeyLastUsedIpsRequest& request) const;
			GetAccessKeyLastUsedProductsOutcome getAccessKeyLastUsedProducts(const Model::GetAccessKeyLastUsedProductsRequest &request)const;
			void getAccessKeyLastUsedProductsAsync(const Model::GetAccessKeyLastUsedProductsRequest& request, const GetAccessKeyLastUsedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedProductsOutcomeCallable getAccessKeyLastUsedProductsCallable(const Model::GetAccessKeyLastUsedProductsRequest& request) const;
			GetAccessKeyLastUsedResourcesOutcome getAccessKeyLastUsedResources(const Model::GetAccessKeyLastUsedResourcesRequest &request)const;
			void getAccessKeyLastUsedResourcesAsync(const Model::GetAccessKeyLastUsedResourcesRequest& request, const GetAccessKeyLastUsedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedResourcesOutcomeCallable getAccessKeyLastUsedResourcesCallable(const Model::GetAccessKeyLastUsedResourcesRequest& request) const;
			GetDeliveryHistoryJobOutcome getDeliveryHistoryJob(const Model::GetDeliveryHistoryJobRequest &request)const;
			void getDeliveryHistoryJobAsync(const Model::GetDeliveryHistoryJobRequest& request, const GetDeliveryHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeliveryHistoryJobOutcomeCallable getDeliveryHistoryJobCallable(const Model::GetDeliveryHistoryJobRequest& request) const;
			GetTrailStatusOutcome getTrailStatus(const Model::GetTrailStatusRequest &request)const;
			void getTrailStatusAsync(const Model::GetTrailStatusRequest& request, const GetTrailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTrailStatusOutcomeCallable getTrailStatusCallable(const Model::GetTrailStatusRequest& request) const;
			ListDeliveryHistoryJobsOutcome listDeliveryHistoryJobs(const Model::ListDeliveryHistoryJobsRequest &request)const;
			void listDeliveryHistoryJobsAsync(const Model::ListDeliveryHistoryJobsRequest& request, const ListDeliveryHistoryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeliveryHistoryJobsOutcomeCallable listDeliveryHistoryJobsCallable(const Model::ListDeliveryHistoryJobsRequest& request) const;
			LookupEventsOutcome lookupEvents(const Model::LookupEventsRequest &request)const;
			void lookupEventsAsync(const Model::LookupEventsRequest& request, const LookupEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LookupEventsOutcomeCallable lookupEventsCallable(const Model::LookupEventsRequest& request) const;
			StartLoggingOutcome startLogging(const Model::StartLoggingRequest &request)const;
			void startLoggingAsync(const Model::StartLoggingRequest& request, const StartLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLoggingOutcomeCallable startLoggingCallable(const Model::StartLoggingRequest& request) const;
			StopLoggingOutcome stopLogging(const Model::StopLoggingRequest &request)const;
			void stopLoggingAsync(const Model::StopLoggingRequest& request, const StopLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLoggingOutcomeCallable stopLoggingCallable(const Model::StopLoggingRequest& request) const;
			UpdateTrailOutcome updateTrail(const Model::UpdateTrailRequest &request)const;
			void updateTrailAsync(const Model::UpdateTrailRequest& request, const UpdateTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrailOutcomeCallable updateTrailCallable(const Model::UpdateTrailRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_
