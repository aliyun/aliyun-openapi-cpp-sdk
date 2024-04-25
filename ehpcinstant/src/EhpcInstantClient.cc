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

#include <alibabacloud/ehpcinstant/EhpcInstantClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::EhpcInstant;
using namespace AlibabaCloud::EhpcInstant::Model;

namespace
{
	const std::string SERVICE_NAME = "EhpcInstant";
}

EhpcInstantClient::EhpcInstantClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EhpcInstantClient::EhpcInstantClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EhpcInstantClient::EhpcInstantClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EhpcInstantClient::~EhpcInstantClient()
{}

EhpcInstantClient::AddImageOutcome EhpcInstantClient::addImage(const AddImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddImageOutcome(AddImageResult(outcome.result()));
	else
		return AddImageOutcome(outcome.error());
}

void EhpcInstantClient::addImageAsync(const AddImageRequest& request, const AddImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::AddImageOutcomeCallable EhpcInstantClient::addImageCallable(const AddImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddImageOutcome()>>(
			[this, request]()
			{
			return this->addImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::CreateJobOutcome EhpcInstantClient::createJob(const CreateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobOutcome(CreateJobResult(outcome.result()));
	else
		return CreateJobOutcome(outcome.error());
}

void EhpcInstantClient::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::CreateJobOutcomeCallable EhpcInstantClient::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::DeleteJobsOutcome EhpcInstantClient::deleteJobs(const DeleteJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobsOutcome(DeleteJobsResult(outcome.result()));
	else
		return DeleteJobsOutcome(outcome.error());
}

void EhpcInstantClient::deleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::DeleteJobsOutcomeCallable EhpcInstantClient::deleteJobsCallable(const DeleteJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobsOutcome()>>(
			[this, request]()
			{
			return this->deleteJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::DescribeJobMetricDataOutcome EhpcInstantClient::describeJobMetricData(const DescribeJobMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobMetricDataOutcome(DescribeJobMetricDataResult(outcome.result()));
	else
		return DescribeJobMetricDataOutcome(outcome.error());
}

void EhpcInstantClient::describeJobMetricDataAsync(const DescribeJobMetricDataRequest& request, const DescribeJobMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::DescribeJobMetricDataOutcomeCallable EhpcInstantClient::describeJobMetricDataCallable(const DescribeJobMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeJobMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::DescribeJobMetricLastOutcome EhpcInstantClient::describeJobMetricLast(const DescribeJobMetricLastRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobMetricLastOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobMetricLastOutcome(DescribeJobMetricLastResult(outcome.result()));
	else
		return DescribeJobMetricLastOutcome(outcome.error());
}

void EhpcInstantClient::describeJobMetricLastAsync(const DescribeJobMetricLastRequest& request, const DescribeJobMetricLastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobMetricLast(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::DescribeJobMetricLastOutcomeCallable EhpcInstantClient::describeJobMetricLastCallable(const DescribeJobMetricLastRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobMetricLastOutcome()>>(
			[this, request]()
			{
			return this->describeJobMetricLast(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::GetImageOutcome EhpcInstantClient::getImage(const GetImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageOutcome(GetImageResult(outcome.result()));
	else
		return GetImageOutcome(outcome.error());
}

void EhpcInstantClient::getImageAsync(const GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::GetImageOutcomeCallable EhpcInstantClient::getImageCallable(const GetImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageOutcome()>>(
			[this, request]()
			{
			return this->getImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::GetJobOutcome EhpcInstantClient::getJob(const GetJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobOutcome(GetJobResult(outcome.result()));
	else
		return GetJobOutcome(outcome.error());
}

void EhpcInstantClient::getJobAsync(const GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::GetJobOutcomeCallable EhpcInstantClient::getJobCallable(const GetJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobOutcome()>>(
			[this, request]()
			{
			return this->getJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::ListExecutorsOutcome EhpcInstantClient::listExecutors(const ListExecutorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExecutorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExecutorsOutcome(ListExecutorsResult(outcome.result()));
	else
		return ListExecutorsOutcome(outcome.error());
}

void EhpcInstantClient::listExecutorsAsync(const ListExecutorsRequest& request, const ListExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExecutors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::ListExecutorsOutcomeCallable EhpcInstantClient::listExecutorsCallable(const ListExecutorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExecutorsOutcome()>>(
			[this, request]()
			{
			return this->listExecutors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::ListImagesOutcome EhpcInstantClient::listImages(const ListImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImagesOutcome(ListImagesResult(outcome.result()));
	else
		return ListImagesOutcome(outcome.error());
}

void EhpcInstantClient::listImagesAsync(const ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::ListImagesOutcomeCallable EhpcInstantClient::listImagesCallable(const ListImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImagesOutcome()>>(
			[this, request]()
			{
			return this->listImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::ListJobExecutorsOutcome EhpcInstantClient::listJobExecutors(const ListJobExecutorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobExecutorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobExecutorsOutcome(ListJobExecutorsResult(outcome.result()));
	else
		return ListJobExecutorsOutcome(outcome.error());
}

void EhpcInstantClient::listJobExecutorsAsync(const ListJobExecutorsRequest& request, const ListJobExecutorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobExecutors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::ListJobExecutorsOutcomeCallable EhpcInstantClient::listJobExecutorsCallable(const ListJobExecutorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobExecutorsOutcome()>>(
			[this, request]()
			{
			return this->listJobExecutors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::ListJobsOutcome EhpcInstantClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void EhpcInstantClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::ListJobsOutcomeCallable EhpcInstantClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EhpcInstantClient::RemoveImageOutcome EhpcInstantClient::removeImage(const RemoveImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveImageOutcome(RemoveImageResult(outcome.result()));
	else
		return RemoveImageOutcome(outcome.error());
}

void EhpcInstantClient::removeImageAsync(const RemoveImageRequest& request, const RemoveImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EhpcInstantClient::RemoveImageOutcomeCallable EhpcInstantClient::removeImageCallable(const RemoveImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveImageOutcome()>>(
			[this, request]()
			{
			return this->removeImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

