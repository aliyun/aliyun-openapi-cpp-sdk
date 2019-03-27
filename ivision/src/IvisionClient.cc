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

#include <alibabacloud/ivision/IvisionClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

namespace
{
	const std::string SERVICE_NAME = "ivision";
}

IvisionClient::IvisionClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ivision");
}

IvisionClient::IvisionClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ivision");
}

IvisionClient::IvisionClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ivision");
}

IvisionClient::~IvisionClient()
{}

IvisionClient::TrainProjectOutcome IvisionClient::trainProject(const TrainProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TrainProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TrainProjectOutcome(TrainProjectResult(outcome.result()));
	else
		return TrainProjectOutcome(outcome.error());
}

void IvisionClient::trainProjectAsync(const TrainProjectRequest& request, const TrainProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, trainProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::TrainProjectOutcomeCallable IvisionClient::trainProjectCallable(const TrainProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TrainProjectOutcome()>>(
			[this, request]()
			{
			return this->trainProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateTagOutcome IvisionClient::createTag(const CreateTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagOutcome(CreateTagResult(outcome.result()));
	else
		return CreateTagOutcome(outcome.error());
}

void IvisionClient::createTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateTagOutcomeCallable IvisionClient::createTagCallable(const CreateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
			[this, request]()
			{
			return this->createTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeTrainResultOutcome IvisionClient::describeTrainResult(const DescribeTrainResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrainResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrainResultOutcome(DescribeTrainResultResult(outcome.result()));
	else
		return DescribeTrainResultOutcome(outcome.error());
}

void IvisionClient::describeTrainResultAsync(const DescribeTrainResultRequest& request, const DescribeTrainResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTrainResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeTrainResultOutcomeCallable IvisionClient::describeTrainResultCallable(const DescribeTrainResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrainResultOutcome()>>(
			[this, request]()
			{
			return this->describeTrainResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::StartStreamPredictOutcome IvisionClient::startStreamPredict(const StartStreamPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartStreamPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartStreamPredictOutcome(StartStreamPredictResult(outcome.result()));
	else
		return StartStreamPredictOutcome(outcome.error());
}

void IvisionClient::startStreamPredictAsync(const StartStreamPredictRequest& request, const StartStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startStreamPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::StartStreamPredictOutcomeCallable IvisionClient::startStreamPredictCallable(const StartStreamPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartStreamPredictOutcome()>>(
			[this, request]()
			{
			return this->startStreamPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateProjectOutcome IvisionClient::createProject(const CreateProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectOutcome(CreateProjectResult(outcome.result()));
	else
		return CreateProjectOutcome(outcome.error());
}

void IvisionClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateProjectOutcomeCallable IvisionClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeIterationsOutcome IvisionClient::describeIterations(const DescribeIterationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIterationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIterationsOutcome(DescribeIterationsResult(outcome.result()));
	else
		return DescribeIterationsOutcome(outcome.error());
}

void IvisionClient::describeIterationsAsync(const DescribeIterationsRequest& request, const DescribeIterationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIterations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeIterationsOutcomeCallable IvisionClient::describeIterationsCallable(const DescribeIterationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIterationsOutcome()>>(
			[this, request]()
			{
			return this->describeIterations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeTrainDatasByIdsOutcome IvisionClient::describeTrainDatasByIds(const DescribeTrainDatasByIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrainDatasByIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrainDatasByIdsOutcome(DescribeTrainDatasByIdsResult(outcome.result()));
	else
		return DescribeTrainDatasByIdsOutcome(outcome.error());
}

void IvisionClient::describeTrainDatasByIdsAsync(const DescribeTrainDatasByIdsRequest& request, const DescribeTrainDatasByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTrainDatasByIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeTrainDatasByIdsOutcomeCallable IvisionClient::describeTrainDatasByIdsCallable(const DescribeTrainDatasByIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrainDatasByIdsOutcome()>>(
			[this, request]()
			{
			return this->describeTrainDatasByIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateTrainDataRegionTagOutcome IvisionClient::createTrainDataRegionTag(const CreateTrainDataRegionTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrainDataRegionTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrainDataRegionTagOutcome(CreateTrainDataRegionTagResult(outcome.result()));
	else
		return CreateTrainDataRegionTagOutcome(outcome.error());
}

void IvisionClient::createTrainDataRegionTagAsync(const CreateTrainDataRegionTagRequest& request, const CreateTrainDataRegionTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrainDataRegionTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateTrainDataRegionTagOutcomeCallable IvisionClient::createTrainDataRegionTagCallable(const CreateTrainDataRegionTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrainDataRegionTagOutcome()>>(
			[this, request]()
			{
			return this->createTrainDataRegionTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateTrainDatasFromPredictionOutcome IvisionClient::createTrainDatasFromPrediction(const CreateTrainDatasFromPredictionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrainDatasFromPredictionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrainDatasFromPredictionOutcome(CreateTrainDatasFromPredictionResult(outcome.result()));
	else
		return CreateTrainDatasFromPredictionOutcome(outcome.error());
}

void IvisionClient::createTrainDatasFromPredictionAsync(const CreateTrainDatasFromPredictionRequest& request, const CreateTrainDatasFromPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrainDatasFromPrediction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateTrainDatasFromPredictionOutcomeCallable IvisionClient::createTrainDatasFromPredictionCallable(const CreateTrainDatasFromPredictionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrainDatasFromPredictionOutcome()>>(
			[this, request]()
			{
			return this->createTrainDatasFromPrediction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::ModifyTagAttributeOutcome IvisionClient::modifyTagAttribute(const ModifyTagAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTagAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTagAttributeOutcome(ModifyTagAttributeResult(outcome.result()));
	else
		return ModifyTagAttributeOutcome(outcome.error());
}

void IvisionClient::modifyTagAttributeAsync(const ModifyTagAttributeRequest& request, const ModifyTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTagAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::ModifyTagAttributeOutcomeCallable IvisionClient::modifyTagAttributeCallable(const ModifyTagAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTagAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyTagAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateTrainDataTagOutcome IvisionClient::createTrainDataTag(const CreateTrainDataTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrainDataTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrainDataTagOutcome(CreateTrainDataTagResult(outcome.result()));
	else
		return CreateTrainDataTagOutcome(outcome.error());
}

void IvisionClient::createTrainDataTagAsync(const CreateTrainDataTagRequest& request, const CreateTrainDataTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrainDataTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateTrainDataTagOutcomeCallable IvisionClient::createTrainDataTagCallable(const CreateTrainDataTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrainDataTagOutcome()>>(
			[this, request]()
			{
			return this->createTrainDataTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::StopStreamPredictOutcome IvisionClient::stopStreamPredict(const StopStreamPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopStreamPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopStreamPredictOutcome(StopStreamPredictResult(outcome.result()));
	else
		return StopStreamPredictOutcome(outcome.error());
}

void IvisionClient::stopStreamPredictAsync(const StopStreamPredictRequest& request, const StopStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopStreamPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::StopStreamPredictOutcomeCallable IvisionClient::stopStreamPredictCallable(const StopStreamPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopStreamPredictOutcome()>>(
			[this, request]()
			{
			return this->stopStreamPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeleteTagOutcome IvisionClient::deleteTag(const DeleteTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagOutcome(DeleteTagResult(outcome.result()));
	else
		return DeleteTagOutcome(outcome.error());
}

void IvisionClient::deleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeleteTagOutcomeCallable IvisionClient::deleteTagCallable(const DeleteTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
			[this, request]()
			{
			return this->deleteTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeStreamPredictsOutcome IvisionClient::describeStreamPredicts(const DescribeStreamPredictsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamPredictsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamPredictsOutcome(DescribeStreamPredictsResult(outcome.result()));
	else
		return DescribeStreamPredictsOutcome(outcome.error());
}

void IvisionClient::describeStreamPredictsAsync(const DescribeStreamPredictsRequest& request, const DescribeStreamPredictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStreamPredicts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeStreamPredictsOutcomeCallable IvisionClient::describeStreamPredictsCallable(const DescribeStreamPredictsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamPredictsOutcome()>>(
			[this, request]()
			{
			return this->describeStreamPredicts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::ModifyTrainDataTagAttributeOutcome IvisionClient::modifyTrainDataTagAttribute(const ModifyTrainDataTagAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTrainDataTagAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTrainDataTagAttributeOutcome(ModifyTrainDataTagAttributeResult(outcome.result()));
	else
		return ModifyTrainDataTagAttributeOutcome(outcome.error());
}

void IvisionClient::modifyTrainDataTagAttributeAsync(const ModifyTrainDataTagAttributeRequest& request, const ModifyTrainDataTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTrainDataTagAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::ModifyTrainDataTagAttributeOutcomeCallable IvisionClient::modifyTrainDataTagAttributeCallable(const ModifyTrainDataTagAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTrainDataTagAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyTrainDataTagAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::ModifyTrainDataRegionTagAttributeOutcome IvisionClient::modifyTrainDataRegionTagAttribute(const ModifyTrainDataRegionTagAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTrainDataRegionTagAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTrainDataRegionTagAttributeOutcome(ModifyTrainDataRegionTagAttributeResult(outcome.result()));
	else
		return ModifyTrainDataRegionTagAttributeOutcome(outcome.error());
}

void IvisionClient::modifyTrainDataRegionTagAttributeAsync(const ModifyTrainDataRegionTagAttributeRequest& request, const ModifyTrainDataRegionTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTrainDataRegionTagAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::ModifyTrainDataRegionTagAttributeOutcomeCallable IvisionClient::modifyTrainDataRegionTagAttributeCallable(const ModifyTrainDataRegionTagAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTrainDataRegionTagAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyTrainDataRegionTagAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeTagsOutcome IvisionClient::describeTags(const DescribeTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagsOutcome(DescribeTagsResult(outcome.result()));
	else
		return DescribeTagsOutcome(outcome.error());
}

void IvisionClient::describeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeTagsOutcomeCallable IvisionClient::describeTagsCallable(const DescribeTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagsOutcome()>>(
			[this, request]()
			{
			return this->describeTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeStreamPredictResultOutcome IvisionClient::describeStreamPredictResult(const DescribeStreamPredictResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamPredictResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamPredictResultOutcome(DescribeStreamPredictResultResult(outcome.result()));
	else
		return DescribeStreamPredictResultOutcome(outcome.error());
}

void IvisionClient::describeStreamPredictResultAsync(const DescribeStreamPredictResultRequest& request, const DescribeStreamPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStreamPredictResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeStreamPredictResultOutcomeCallable IvisionClient::describeStreamPredictResultCallable(const DescribeStreamPredictResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamPredictResultOutcome()>>(
			[this, request]()
			{
			return this->describeStreamPredictResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateTrainDatasTagOutcome IvisionClient::createTrainDatasTag(const CreateTrainDatasTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrainDatasTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrainDatasTagOutcome(CreateTrainDatasTagResult(outcome.result()));
	else
		return CreateTrainDatasTagOutcome(outcome.error());
}

void IvisionClient::createTrainDatasTagAsync(const CreateTrainDatasTagRequest& request, const CreateTrainDatasTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrainDatasTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateTrainDatasTagOutcomeCallable IvisionClient::createTrainDatasTagCallable(const CreateTrainDatasTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrainDatasTagOutcome()>>(
			[this, request]()
			{
			return this->createTrainDatasTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeleteIterationOutcome IvisionClient::deleteIteration(const DeleteIterationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIterationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIterationOutcome(DeleteIterationResult(outcome.result()));
	else
		return DeleteIterationOutcome(outcome.error());
}

void IvisionClient::deleteIterationAsync(const DeleteIterationRequest& request, const DeleteIterationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIteration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeleteIterationOutcomeCallable IvisionClient::deleteIterationCallable(const DeleteIterationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIterationOutcome()>>(
			[this, request]()
			{
			return this->deleteIteration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeleteTrainDatasTagOutcome IvisionClient::deleteTrainDatasTag(const DeleteTrainDatasTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrainDatasTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrainDatasTagOutcome(DeleteTrainDatasTagResult(outcome.result()));
	else
		return DeleteTrainDatasTagOutcome(outcome.error());
}

void IvisionClient::deleteTrainDatasTagAsync(const DeleteTrainDatasTagRequest& request, const DeleteTrainDatasTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrainDatasTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeleteTrainDatasTagOutcomeCallable IvisionClient::deleteTrainDatasTagCallable(const DeleteTrainDatasTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrainDatasTagOutcome()>>(
			[this, request]()
			{
			return this->deleteTrainDatasTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateStreamPredictOutcome IvisionClient::createStreamPredict(const CreateStreamPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStreamPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStreamPredictOutcome(CreateStreamPredictResult(outcome.result()));
	else
		return CreateStreamPredictOutcome(outcome.error());
}

void IvisionClient::createStreamPredictAsync(const CreateStreamPredictRequest& request, const CreateStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStreamPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateStreamPredictOutcomeCallable IvisionClient::createStreamPredictCallable(const CreateStreamPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStreamPredictOutcome()>>(
			[this, request]()
			{
			return this->createStreamPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeleteStreamPredictOutcome IvisionClient::deleteStreamPredict(const DeleteStreamPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStreamPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStreamPredictOutcome(DeleteStreamPredictResult(outcome.result()));
	else
		return DeleteStreamPredictOutcome(outcome.error());
}

void IvisionClient::deleteStreamPredictAsync(const DeleteStreamPredictRequest& request, const DeleteStreamPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStreamPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeleteStreamPredictOutcomeCallable IvisionClient::deleteStreamPredictCallable(const DeleteStreamPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStreamPredictOutcome()>>(
			[this, request]()
			{
			return this->deleteStreamPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::ModifyProjectAttributeOutcome IvisionClient::modifyProjectAttribute(const ModifyProjectAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyProjectAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyProjectAttributeOutcome(ModifyProjectAttributeResult(outcome.result()));
	else
		return ModifyProjectAttributeOutcome(outcome.error());
}

void IvisionClient::modifyProjectAttributeAsync(const ModifyProjectAttributeRequest& request, const ModifyProjectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyProjectAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::ModifyProjectAttributeOutcomeCallable IvisionClient::modifyProjectAttributeCallable(const ModifyProjectAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyProjectAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyProjectAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeleteTrainDatasOutcome IvisionClient::deleteTrainDatas(const DeleteTrainDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrainDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrainDatasOutcome(DeleteTrainDatasResult(outcome.result()));
	else
		return DeleteTrainDatasOutcome(outcome.error());
}

void IvisionClient::deleteTrainDatasAsync(const DeleteTrainDatasRequest& request, const DeleteTrainDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrainDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeleteTrainDatasOutcomeCallable IvisionClient::deleteTrainDatasCallable(const DeleteTrainDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrainDatasOutcome()>>(
			[this, request]()
			{
			return this->deleteTrainDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeProjectsOutcome IvisionClient::describeProjects(const DescribeProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectsOutcome(DescribeProjectsResult(outcome.result()));
	else
		return DescribeProjectsOutcome(outcome.error());
}

void IvisionClient::describeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeProjectsOutcomeCallable IvisionClient::describeProjectsCallable(const DescribeProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectsOutcome()>>(
			[this, request]()
			{
			return this->describeProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeleteProjectOutcome IvisionClient::deleteProject(const DeleteProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectOutcome(DeleteProjectResult(outcome.result()));
	else
		return DeleteProjectOutcome(outcome.error());
}

void IvisionClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeleteProjectOutcomeCallable IvisionClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribePredictDatasOutcome IvisionClient::describePredictDatas(const DescribePredictDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePredictDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePredictDatasOutcome(DescribePredictDatasResult(outcome.result()));
	else
		return DescribePredictDatasOutcome(outcome.error());
}

void IvisionClient::describePredictDatasAsync(const DescribePredictDatasRequest& request, const DescribePredictDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePredictDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribePredictDatasOutcomeCallable IvisionClient::describePredictDatasCallable(const DescribePredictDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePredictDatasOutcome()>>(
			[this, request]()
			{
			return this->describePredictDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateTrainDatasFromUrlsOutcome IvisionClient::createTrainDatasFromUrls(const CreateTrainDatasFromUrlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrainDatasFromUrlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrainDatasFromUrlsOutcome(CreateTrainDatasFromUrlsResult(outcome.result()));
	else
		return CreateTrainDatasFromUrlsOutcome(outcome.error());
}

void IvisionClient::createTrainDatasFromUrlsAsync(const CreateTrainDatasFromUrlsRequest& request, const CreateTrainDatasFromUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrainDatasFromUrls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateTrainDatasFromUrlsOutcomeCallable IvisionClient::createTrainDatasFromUrlsCallable(const CreateTrainDatasFromUrlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrainDatasFromUrlsOutcome()>>(
			[this, request]()
			{
			return this->createTrainDatasFromUrls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DeletePredictDatasOutcome IvisionClient::deletePredictDatas(const DeletePredictDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePredictDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePredictDatasOutcome(DeletePredictDatasResult(outcome.result()));
	else
		return DeletePredictDatasOutcome(outcome.error());
}

void IvisionClient::deletePredictDatasAsync(const DeletePredictDatasRequest& request, const DeletePredictDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePredictDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DeletePredictDatasOutcomeCallable IvisionClient::deletePredictDatasCallable(const DeletePredictDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePredictDatasOutcome()>>(
			[this, request]()
			{
			return this->deletePredictDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::DescribeTrainDatasOutcome IvisionClient::describeTrainDatas(const DescribeTrainDatasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrainDatasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrainDatasOutcome(DescribeTrainDatasResult(outcome.result()));
	else
		return DescribeTrainDatasOutcome(outcome.error());
}

void IvisionClient::describeTrainDatasAsync(const DescribeTrainDatasRequest& request, const DescribeTrainDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTrainDatas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::DescribeTrainDatasOutcomeCallable IvisionClient::describeTrainDatasCallable(const DescribeTrainDatasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrainDatasOutcome()>>(
			[this, request]()
			{
			return this->describeTrainDatas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::CreateUploadTokenOutcome IvisionClient::createUploadToken(const CreateUploadTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUploadTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUploadTokenOutcome(CreateUploadTokenResult(outcome.result()));
	else
		return CreateUploadTokenOutcome(outcome.error());
}

void IvisionClient::createUploadTokenAsync(const CreateUploadTokenRequest& request, const CreateUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUploadToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::CreateUploadTokenOutcomeCallable IvisionClient::createUploadTokenCallable(const CreateUploadTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUploadTokenOutcome()>>(
			[this, request]()
			{
			return this->createUploadToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IvisionClient::PredictImageOutcome IvisionClient::predictImage(const PredictImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictImageOutcome(PredictImageResult(outcome.result()));
	else
		return PredictImageOutcome(outcome.error());
}

void IvisionClient::predictImageAsync(const PredictImageRequest& request, const PredictImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IvisionClient::PredictImageOutcomeCallable IvisionClient::predictImageCallable(const PredictImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictImageOutcome()>>(
			[this, request]()
			{
			return this->predictImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

