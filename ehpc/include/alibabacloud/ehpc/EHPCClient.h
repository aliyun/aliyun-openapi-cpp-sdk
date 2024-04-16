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

#ifndef ALIBABACLOUD_EHPC_EHPCCLIENT_H_
#define ALIBABACLOUD_EHPC_EHPCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EHPCExport.h"
#include "model/AddImageRequest.h"
#include "model/AddImageResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/DeleteJobsRequest.h"
#include "model/DeleteJobsResult.h"
#include "model/DescribeJobMetricDataRequest.h"
#include "model/DescribeJobMetricDataResult.h"
#include "model/DescribeJobMetricLastRequest.h"
#include "model/DescribeJobMetricLastResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/GetJobRequest.h"
#include "model/GetJobResult.h"
#include "model/ListExecutorsRequest.h"
#include "model/ListExecutorsResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListJobExecutorsRequest.h"
#include "model/ListJobExecutorsResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/RemoveImageRequest.h"
#include "model/RemoveImageResult.h"


namespace AlibabaCloud
{
	namespace EHPC
	{
		class ALIBABACLOUD_EHPC_EXPORT EHPCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddImageResult> AddImageOutcome;
			typedef std::future<AddImageOutcome> AddImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddImageRequest&, const AddImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddImageAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobsResult> DeleteJobsOutcome;
			typedef std::future<DeleteJobsOutcome> DeleteJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteJobsRequest&, const DeleteJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobMetricDataResult> DescribeJobMetricDataOutcome;
			typedef std::future<DescribeJobMetricDataOutcome> DescribeJobMetricDataOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeJobMetricDataRequest&, const DescribeJobMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobMetricLastResult> DescribeJobMetricLastOutcome;
			typedef std::future<DescribeJobMetricLastOutcome> DescribeJobMetricLastOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeJobMetricLastRequest&, const DescribeJobMetricLastOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobMetricLastAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::GetJobResult> GetJobOutcome;
			typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetJobRequest&, const GetJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobAsyncHandler;
			typedef Outcome<Error, Model::ListExecutorsResult> ListExecutorsOutcome;
			typedef std::future<ListExecutorsOutcome> ListExecutorsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListExecutorsRequest&, const ListExecutorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutorsAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutorsResult> ListJobExecutorsOutcome;
			typedef std::future<ListJobExecutorsOutcome> ListJobExecutorsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListJobExecutorsRequest&, const ListJobExecutorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutorsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::RemoveImageResult> RemoveImageOutcome;
			typedef std::future<RemoveImageOutcome> RemoveImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::RemoveImageRequest&, const RemoveImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveImageAsyncHandler;

			EHPCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EHPCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EHPCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EHPCClient();
			AddImageOutcome addImage(const Model::AddImageRequest &request)const;
			void addImageAsync(const Model::AddImageRequest& request, const AddImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddImageOutcomeCallable addImageCallable(const Model::AddImageRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			DeleteJobsOutcome deleteJobs(const Model::DeleteJobsRequest &request)const;
			void deleteJobsAsync(const Model::DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobsOutcomeCallable deleteJobsCallable(const Model::DeleteJobsRequest& request) const;
			DescribeJobMetricDataOutcome describeJobMetricData(const Model::DescribeJobMetricDataRequest &request)const;
			void describeJobMetricDataAsync(const Model::DescribeJobMetricDataRequest& request, const DescribeJobMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobMetricDataOutcomeCallable describeJobMetricDataCallable(const Model::DescribeJobMetricDataRequest& request) const;
			DescribeJobMetricLastOutcome describeJobMetricLast(const Model::DescribeJobMetricLastRequest &request)const;
			void describeJobMetricLastAsync(const Model::DescribeJobMetricLastRequest& request, const DescribeJobMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobMetricLastOutcomeCallable describeJobMetricLastCallable(const Model::DescribeJobMetricLastRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			GetJobOutcome getJob(const Model::GetJobRequest &request)const;
			void getJobAsync(const Model::GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobOutcomeCallable getJobCallable(const Model::GetJobRequest& request) const;
			ListExecutorsOutcome listExecutors(const Model::ListExecutorsRequest &request)const;
			void listExecutorsAsync(const Model::ListExecutorsRequest& request, const ListExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutorsOutcomeCallable listExecutorsCallable(const Model::ListExecutorsRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			ListJobExecutorsOutcome listJobExecutors(const Model::ListJobExecutorsRequest &request)const;
			void listJobExecutorsAsync(const Model::ListJobExecutorsRequest& request, const ListJobExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutorsOutcomeCallable listJobExecutorsCallable(const Model::ListJobExecutorsRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			RemoveImageOutcome removeImage(const Model::RemoveImageRequest &request)const;
			void removeImageAsync(const Model::RemoveImageRequest& request, const RemoveImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveImageOutcomeCallable removeImageCallable(const Model::RemoveImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EHPC_EHPCCLIENT_H_
