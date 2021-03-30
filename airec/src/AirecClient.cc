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

#include <alibabacloud/airec/AirecClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

namespace
{
	const std::string SERVICE_NAME = "Airec";
}

AirecClient::AirecClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "airec");
}

AirecClient::AirecClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "airec");
}

AirecClient::AirecClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "airec");
}

AirecClient::~AirecClient()
{}

AirecClient::AttachDatasetOutcome AirecClient::attachDataset(const AttachDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachDatasetOutcome(AttachDatasetResult(outcome.result()));
	else
		return AttachDatasetOutcome(outcome.error());
}

void AirecClient::attachDatasetAsync(const AttachDatasetRequest& request, const AttachDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::AttachDatasetOutcomeCallable AirecClient::attachDatasetCallable(const AttachDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachDatasetOutcome()>>(
			[this, request]()
			{
			return this->attachDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::AttachIndexVersionOutcome AirecClient::attachIndexVersion(const AttachIndexVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachIndexVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachIndexVersionOutcome(AttachIndexVersionResult(outcome.result()));
	else
		return AttachIndexVersionOutcome(outcome.error());
}

void AirecClient::attachIndexVersionAsync(const AttachIndexVersionRequest& request, const AttachIndexVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachIndexVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::AttachIndexVersionOutcomeCallable AirecClient::attachIndexVersionCallable(const AttachIndexVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachIndexVersionOutcome()>>(
			[this, request]()
			{
			return this->attachIndexVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CheckRankingModelReachableOutcome AirecClient::checkRankingModelReachable(const CheckRankingModelReachableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckRankingModelReachableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckRankingModelReachableOutcome(CheckRankingModelReachableResult(outcome.result()));
	else
		return CheckRankingModelReachableOutcome(outcome.error());
}

void AirecClient::checkRankingModelReachableAsync(const CheckRankingModelReachableRequest& request, const CheckRankingModelReachableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkRankingModelReachable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CheckRankingModelReachableOutcomeCallable AirecClient::checkRankingModelReachableCallable(const CheckRankingModelReachableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckRankingModelReachableOutcome()>>(
			[this, request]()
			{
			return this->checkRankingModelReachable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CloneExperimentOutcome AirecClient::cloneExperiment(const CloneExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloneExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloneExperimentOutcome(CloneExperimentResult(outcome.result()));
	else
		return CloneExperimentOutcome(outcome.error());
}

void AirecClient::cloneExperimentAsync(const CloneExperimentRequest& request, const CloneExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cloneExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CloneExperimentOutcomeCallable AirecClient::cloneExperimentCallable(const CloneExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloneExperimentOutcome()>>(
			[this, request]()
			{
			return this->cloneExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateFilteringAlgorithmOutcome AirecClient::createFilteringAlgorithm(const CreateFilteringAlgorithmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFilteringAlgorithmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFilteringAlgorithmOutcome(CreateFilteringAlgorithmResult(outcome.result()));
	else
		return CreateFilteringAlgorithmOutcome(outcome.error());
}

void AirecClient::createFilteringAlgorithmAsync(const CreateFilteringAlgorithmRequest& request, const CreateFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFilteringAlgorithm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateFilteringAlgorithmOutcomeCallable AirecClient::createFilteringAlgorithmCallable(const CreateFilteringAlgorithmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFilteringAlgorithmOutcome()>>(
			[this, request]()
			{
			return this->createFilteringAlgorithm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateInstanceOutcome AirecClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void AirecClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateInstanceOutcomeCallable AirecClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateRankingModelOutcome AirecClient::createRankingModel(const CreateRankingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRankingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRankingModelOutcome(CreateRankingModelResult(outcome.result()));
	else
		return CreateRankingModelOutcome(outcome.error());
}

void AirecClient::createRankingModelAsync(const CreateRankingModelRequest& request, const CreateRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRankingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateRankingModelOutcomeCallable AirecClient::createRankingModelCallable(const CreateRankingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRankingModelOutcome()>>(
			[this, request]()
			{
			return this->createRankingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateRuleOutcome AirecClient::createRule(const CreateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRuleOutcome(CreateRuleResult(outcome.result()));
	else
		return CreateRuleOutcome(outcome.error());
}

void AirecClient::createRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateRuleOutcomeCallable AirecClient::createRuleCallable(const CreateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
			[this, request]()
			{
			return this->createRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::CreateSceneOutcome AirecClient::createScene(const CreateSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSceneOutcome(CreateSceneResult(outcome.result()));
	else
		return CreateSceneOutcome(outcome.error());
}

void AirecClient::createSceneAsync(const CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::CreateSceneOutcomeCallable AirecClient::createSceneCallable(const CreateSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSceneOutcome()>>(
			[this, request]()
			{
			return this->createScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DecribeRankingModelOutcome AirecClient::decribeRankingModel(const DecribeRankingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecribeRankingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecribeRankingModelOutcome(DecribeRankingModelResult(outcome.result()));
	else
		return DecribeRankingModelOutcome(outcome.error());
}

void AirecClient::decribeRankingModelAsync(const DecribeRankingModelRequest& request, const DecribeRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decribeRankingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DecribeRankingModelOutcomeCallable AirecClient::decribeRankingModelCallable(const DecribeRankingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecribeRankingModelOutcome()>>(
			[this, request]()
			{
			return this->decribeRankingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteDataSetOutcome AirecClient::deleteDataSet(const DeleteDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSetOutcome(DeleteDataSetResult(outcome.result()));
	else
		return DeleteDataSetOutcome(outcome.error());
}

void AirecClient::deleteDataSetAsync(const DeleteDataSetRequest& request, const DeleteDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteDataSetOutcomeCallable AirecClient::deleteDataSetCallable(const DeleteDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSetOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteExperimentOutcome AirecClient::deleteExperiment(const DeleteExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExperimentOutcome(DeleteExperimentResult(outcome.result()));
	else
		return DeleteExperimentOutcome(outcome.error());
}

void AirecClient::deleteExperimentAsync(const DeleteExperimentRequest& request, const DeleteExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteExperimentOutcomeCallable AirecClient::deleteExperimentCallable(const DeleteExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExperimentOutcome()>>(
			[this, request]()
			{
			return this->deleteExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteFilteringAlgorithmOutcome AirecClient::deleteFilteringAlgorithm(const DeleteFilteringAlgorithmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFilteringAlgorithmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFilteringAlgorithmOutcome(DeleteFilteringAlgorithmResult(outcome.result()));
	else
		return DeleteFilteringAlgorithmOutcome(outcome.error());
}

void AirecClient::deleteFilteringAlgorithmAsync(const DeleteFilteringAlgorithmRequest& request, const DeleteFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFilteringAlgorithm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteFilteringAlgorithmOutcomeCallable AirecClient::deleteFilteringAlgorithmCallable(const DeleteFilteringAlgorithmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFilteringAlgorithmOutcome()>>(
			[this, request]()
			{
			return this->deleteFilteringAlgorithm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteRankingModelOutcome AirecClient::deleteRankingModel(const DeleteRankingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRankingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRankingModelOutcome(DeleteRankingModelResult(outcome.result()));
	else
		return DeleteRankingModelOutcome(outcome.error());
}

void AirecClient::deleteRankingModelAsync(const DeleteRankingModelRequest& request, const DeleteRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRankingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteRankingModelOutcomeCallable AirecClient::deleteRankingModelCallable(const DeleteRankingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRankingModelOutcome()>>(
			[this, request]()
			{
			return this->deleteRankingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DeleteSceneOutcome AirecClient::deleteScene(const DeleteSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSceneOutcome(DeleteSceneResult(outcome.result()));
	else
		return DeleteSceneOutcome(outcome.error());
}

void AirecClient::deleteSceneAsync(const DeleteSceneRequest& request, const DeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DeleteSceneOutcomeCallable AirecClient::deleteSceneCallable(const DeleteSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSceneOutcome()>>(
			[this, request]()
			{
			return this->deleteScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeBaseExperimentOutcome AirecClient::describeBaseExperiment(const DescribeBaseExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBaseExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBaseExperimentOutcome(DescribeBaseExperimentResult(outcome.result()));
	else
		return DescribeBaseExperimentOutcome(outcome.error());
}

void AirecClient::describeBaseExperimentAsync(const DescribeBaseExperimentRequest& request, const DescribeBaseExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBaseExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeBaseExperimentOutcomeCallable AirecClient::describeBaseExperimentCallable(const DescribeBaseExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBaseExperimentOutcome()>>(
			[this, request]()
			{
			return this->describeBaseExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeDataSetMessageOutcome AirecClient::describeDataSetMessage(const DescribeDataSetMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSetMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSetMessageOutcome(DescribeDataSetMessageResult(outcome.result()));
	else
		return DescribeDataSetMessageOutcome(outcome.error());
}

void AirecClient::describeDataSetMessageAsync(const DescribeDataSetMessageRequest& request, const DescribeDataSetMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSetMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeDataSetMessageOutcomeCallable AirecClient::describeDataSetMessageCallable(const DescribeDataSetMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSetMessageOutcome()>>(
			[this, request]()
			{
			return this->describeDataSetMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeDefaultAlgorithmsOutcome AirecClient::describeDefaultAlgorithms(const DescribeDefaultAlgorithmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDefaultAlgorithmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDefaultAlgorithmsOutcome(DescribeDefaultAlgorithmsResult(outcome.result()));
	else
		return DescribeDefaultAlgorithmsOutcome(outcome.error());
}

void AirecClient::describeDefaultAlgorithmsAsync(const DescribeDefaultAlgorithmsRequest& request, const DescribeDefaultAlgorithmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDefaultAlgorithms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeDefaultAlgorithmsOutcomeCallable AirecClient::describeDefaultAlgorithmsCallable(const DescribeDefaultAlgorithmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDefaultAlgorithmsOutcome()>>(
			[this, request]()
			{
			return this->describeDefaultAlgorithms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeExperimentOutcome AirecClient::describeExperiment(const DescribeExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExperimentOutcome(DescribeExperimentResult(outcome.result()));
	else
		return DescribeExperimentOutcome(outcome.error());
}

void AirecClient::describeExperimentAsync(const DescribeExperimentRequest& request, const DescribeExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeExperimentOutcomeCallable AirecClient::describeExperimentCallable(const DescribeExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExperimentOutcome()>>(
			[this, request]()
			{
			return this->describeExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeExperimentEnvOutcome AirecClient::describeExperimentEnv(const DescribeExperimentEnvRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExperimentEnvOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExperimentEnvOutcome(DescribeExperimentEnvResult(outcome.result()));
	else
		return DescribeExperimentEnvOutcome(outcome.error());
}

void AirecClient::describeExperimentEnvAsync(const DescribeExperimentEnvRequest& request, const DescribeExperimentEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExperimentEnv(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeExperimentEnvOutcomeCallable AirecClient::describeExperimentEnvCallable(const DescribeExperimentEnvRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExperimentEnvOutcome()>>(
			[this, request]()
			{
			return this->describeExperimentEnv(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeExperimentEnvProgressOutcome AirecClient::describeExperimentEnvProgress(const DescribeExperimentEnvProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExperimentEnvProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExperimentEnvProgressOutcome(DescribeExperimentEnvProgressResult(outcome.result()));
	else
		return DescribeExperimentEnvProgressOutcome(outcome.error());
}

void AirecClient::describeExperimentEnvProgressAsync(const DescribeExperimentEnvProgressRequest& request, const DescribeExperimentEnvProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExperimentEnvProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeExperimentEnvProgressOutcomeCallable AirecClient::describeExperimentEnvProgressCallable(const DescribeExperimentEnvProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExperimentEnvProgressOutcome()>>(
			[this, request]()
			{
			return this->describeExperimentEnvProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeFilteringAlgorithmOutcome AirecClient::describeFilteringAlgorithm(const DescribeFilteringAlgorithmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFilteringAlgorithmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFilteringAlgorithmOutcome(DescribeFilteringAlgorithmResult(outcome.result()));
	else
		return DescribeFilteringAlgorithmOutcome(outcome.error());
}

void AirecClient::describeFilteringAlgorithmAsync(const DescribeFilteringAlgorithmRequest& request, const DescribeFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFilteringAlgorithm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeFilteringAlgorithmOutcomeCallable AirecClient::describeFilteringAlgorithmCallable(const DescribeFilteringAlgorithmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFilteringAlgorithmOutcome()>>(
			[this, request]()
			{
			return this->describeFilteringAlgorithm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeInstanceOutcome AirecClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void AirecClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeInstanceOutcomeCallable AirecClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeLatestTaskOutcome AirecClient::describeLatestTask(const DescribeLatestTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLatestTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLatestTaskOutcome(DescribeLatestTaskResult(outcome.result()));
	else
		return DescribeLatestTaskOutcome(outcome.error());
}

void AirecClient::describeLatestTaskAsync(const DescribeLatestTaskRequest& request, const DescribeLatestTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLatestTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeLatestTaskOutcomeCallable AirecClient::describeLatestTaskCallable(const DescribeLatestTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLatestTaskOutcome()>>(
			[this, request]()
			{
			return this->describeLatestTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeQuotaOutcome AirecClient::describeQuota(const DescribeQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQuotaOutcome(DescribeQuotaResult(outcome.result()));
	else
		return DescribeQuotaOutcome(outcome.error());
}

void AirecClient::describeQuotaAsync(const DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeQuotaOutcomeCallable AirecClient::describeQuotaCallable(const DescribeQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeRegionsOutcome AirecClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void AirecClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeRegionsOutcomeCallable AirecClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeRuleOutcome AirecClient::describeRule(const DescribeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRuleOutcome(DescribeRuleResult(outcome.result()));
	else
		return DescribeRuleOutcome(outcome.error());
}

void AirecClient::describeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeRuleOutcomeCallable AirecClient::describeRuleCallable(const DescribeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRuleOutcome()>>(
			[this, request]()
			{
			return this->describeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSceneOutcome AirecClient::describeScene(const DescribeSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneOutcome(DescribeSceneResult(outcome.result()));
	else
		return DescribeSceneOutcome(outcome.error());
}

void AirecClient::describeSceneAsync(const DescribeSceneRequest& request, const DescribeSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSceneOutcomeCallable AirecClient::describeSceneCallable(const DescribeSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneOutcome()>>(
			[this, request]()
			{
			return this->describeScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSceneBucketOutcome AirecClient::describeSceneBucket(const DescribeSceneBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneBucketOutcome(DescribeSceneBucketResult(outcome.result()));
	else
		return DescribeSceneBucketOutcome(outcome.error());
}

void AirecClient::describeSceneBucketAsync(const DescribeSceneBucketRequest& request, const DescribeSceneBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSceneBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSceneBucketOutcomeCallable AirecClient::describeSceneBucketCallable(const DescribeSceneBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneBucketOutcome()>>(
			[this, request]()
			{
			return this->describeSceneBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSceneThroughputOutcome AirecClient::describeSceneThroughput(const DescribeSceneThroughputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSceneThroughputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSceneThroughputOutcome(DescribeSceneThroughputResult(outcome.result()));
	else
		return DescribeSceneThroughputOutcome(outcome.error());
}

void AirecClient::describeSceneThroughputAsync(const DescribeSceneThroughputRequest& request, const DescribeSceneThroughputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSceneThroughput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSceneThroughputOutcomeCallable AirecClient::describeSceneThroughputCallable(const DescribeSceneThroughputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSceneThroughputOutcome()>>(
			[this, request]()
			{
			return this->describeSceneThroughput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSyncReportDetailOutcome AirecClient::describeSyncReportDetail(const DescribeSyncReportDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSyncReportDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSyncReportDetailOutcome(DescribeSyncReportDetailResult(outcome.result()));
	else
		return DescribeSyncReportDetailOutcome(outcome.error());
}

void AirecClient::describeSyncReportDetailAsync(const DescribeSyncReportDetailRequest& request, const DescribeSyncReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSyncReportDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSyncReportDetailOutcomeCallable AirecClient::describeSyncReportDetailCallable(const DescribeSyncReportDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSyncReportDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSyncReportDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeSyncReportOutliersOutcome AirecClient::describeSyncReportOutliers(const DescribeSyncReportOutliersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSyncReportOutliersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSyncReportOutliersOutcome(DescribeSyncReportOutliersResult(outcome.result()));
	else
		return DescribeSyncReportOutliersOutcome(outcome.error());
}

void AirecClient::describeSyncReportOutliersAsync(const DescribeSyncReportOutliersRequest& request, const DescribeSyncReportOutliersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSyncReportOutliers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeSyncReportOutliersOutcomeCallable AirecClient::describeSyncReportOutliersCallable(const DescribeSyncReportOutliersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSyncReportOutliersOutcome()>>(
			[this, request]()
			{
			return this->describeSyncReportOutliers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DescribeUserMetricsOutcome AirecClient::describeUserMetrics(const DescribeUserMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserMetricsOutcome(DescribeUserMetricsResult(outcome.result()));
	else
		return DescribeUserMetricsOutcome(outcome.error());
}

void AirecClient::describeUserMetricsAsync(const DescribeUserMetricsRequest& request, const DescribeUserMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DescribeUserMetricsOutcomeCallable AirecClient::describeUserMetricsCallable(const DescribeUserMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserMetricsOutcome()>>(
			[this, request]()
			{
			return this->describeUserMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::DowngradeInstanceOutcome AirecClient::downgradeInstance(const DowngradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DowngradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DowngradeInstanceOutcome(DowngradeInstanceResult(outcome.result()));
	else
		return DowngradeInstanceOutcome(outcome.error());
}

void AirecClient::downgradeInstanceAsync(const DowngradeInstanceRequest& request, const DowngradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::DowngradeInstanceOutcomeCallable AirecClient::downgradeInstanceCallable(const DowngradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DowngradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->downgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::EnableExperimentOutcome AirecClient::enableExperiment(const EnableExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableExperimentOutcome(EnableExperimentResult(outcome.result()));
	else
		return EnableExperimentOutcome(outcome.error());
}

void AirecClient::enableExperimentAsync(const EnableExperimentRequest& request, const EnableExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::EnableExperimentOutcomeCallable AirecClient::enableExperimentCallable(const EnableExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableExperimentOutcome()>>(
			[this, request]()
			{
			return this->enableExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardDetailsOutcome AirecClient::listDashboardDetails(const ListDashboardDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardDetailsOutcome(ListDashboardDetailsResult(outcome.result()));
	else
		return ListDashboardDetailsOutcome(outcome.error());
}

void AirecClient::listDashboardDetailsAsync(const ListDashboardDetailsRequest& request, const ListDashboardDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardDetailsOutcomeCallable AirecClient::listDashboardDetailsCallable(const ListDashboardDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardDetailsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardDetailsFlowsOutcome AirecClient::listDashboardDetailsFlows(const ListDashboardDetailsFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardDetailsFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardDetailsFlowsOutcome(ListDashboardDetailsFlowsResult(outcome.result()));
	else
		return ListDashboardDetailsFlowsOutcome(outcome.error());
}

void AirecClient::listDashboardDetailsFlowsAsync(const ListDashboardDetailsFlowsRequest& request, const ListDashboardDetailsFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardDetailsFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardDetailsFlowsOutcomeCallable AirecClient::listDashboardDetailsFlowsCallable(const ListDashboardDetailsFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardDetailsFlowsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardDetailsFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardMetricsOutcome AirecClient::listDashboardMetrics(const ListDashboardMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardMetricsOutcome(ListDashboardMetricsResult(outcome.result()));
	else
		return ListDashboardMetricsOutcome(outcome.error());
}

void AirecClient::listDashboardMetricsAsync(const ListDashboardMetricsRequest& request, const ListDashboardMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardMetricsOutcomeCallable AirecClient::listDashboardMetricsCallable(const ListDashboardMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardMetricsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDashboardMetricsFlowsOutcome AirecClient::listDashboardMetricsFlows(const ListDashboardMetricsFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardMetricsFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardMetricsFlowsOutcome(ListDashboardMetricsFlowsResult(outcome.result()));
	else
		return ListDashboardMetricsFlowsOutcome(outcome.error());
}

void AirecClient::listDashboardMetricsFlowsAsync(const ListDashboardMetricsFlowsRequest& request, const ListDashboardMetricsFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardMetricsFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDashboardMetricsFlowsOutcomeCallable AirecClient::listDashboardMetricsFlowsCallable(const ListDashboardMetricsFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardMetricsFlowsOutcome()>>(
			[this, request]()
			{
			return this->listDashboardMetricsFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDataSetOutcome AirecClient::listDataSet(const ListDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSetOutcome(ListDataSetResult(outcome.result()));
	else
		return ListDataSetOutcome(outcome.error());
}

void AirecClient::listDataSetAsync(const ListDataSetRequest& request, const ListDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDataSetOutcomeCallable AirecClient::listDataSetCallable(const ListDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSetOutcome()>>(
			[this, request]()
			{
			return this->listDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListDataSourceOutcome AirecClient::listDataSource(const ListDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourceOutcome(ListDataSourceResult(outcome.result()));
	else
		return ListDataSourceOutcome(outcome.error());
}

void AirecClient::listDataSourceAsync(const ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListDataSourceOutcomeCallable AirecClient::listDataSourceCallable(const ListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListExperimentsOutcome AirecClient::listExperiments(const ListExperimentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExperimentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExperimentsOutcome(ListExperimentsResult(outcome.result()));
	else
		return ListExperimentsOutcome(outcome.error());
}

void AirecClient::listExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExperiments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListExperimentsOutcomeCallable AirecClient::listExperimentsCallable(const ListExperimentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExperimentsOutcome()>>(
			[this, request]()
			{
			return this->listExperiments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListFilteringAlgorithmsOutcome AirecClient::listFilteringAlgorithms(const ListFilteringAlgorithmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFilteringAlgorithmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFilteringAlgorithmsOutcome(ListFilteringAlgorithmsResult(outcome.result()));
	else
		return ListFilteringAlgorithmsOutcome(outcome.error());
}

void AirecClient::listFilteringAlgorithmsAsync(const ListFilteringAlgorithmsRequest& request, const ListFilteringAlgorithmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFilteringAlgorithms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListFilteringAlgorithmsOutcomeCallable AirecClient::listFilteringAlgorithmsCallable(const ListFilteringAlgorithmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFilteringAlgorithmsOutcome()>>(
			[this, request]()
			{
			return this->listFilteringAlgorithms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListIndexVersionsOutcome AirecClient::listIndexVersions(const ListIndexVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIndexVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIndexVersionsOutcome(ListIndexVersionsResult(outcome.result()));
	else
		return ListIndexVersionsOutcome(outcome.error());
}

void AirecClient::listIndexVersionsAsync(const ListIndexVersionsRequest& request, const ListIndexVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIndexVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListIndexVersionsOutcomeCallable AirecClient::listIndexVersionsCallable(const ListIndexVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIndexVersionsOutcome()>>(
			[this, request]()
			{
			return this->listIndexVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListInstanceOutcome AirecClient::listInstance(const ListInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceOutcome(ListInstanceResult(outcome.result()));
	else
		return ListInstanceOutcome(outcome.error());
}

void AirecClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListInstanceOutcomeCallable AirecClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListInstanceTaskOutcome AirecClient::listInstanceTask(const ListInstanceTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceTaskOutcome(ListInstanceTaskResult(outcome.result()));
	else
		return ListInstanceTaskOutcome(outcome.error());
}

void AirecClient::listInstanceTaskAsync(const ListInstanceTaskRequest& request, const ListInstanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListInstanceTaskOutcomeCallable AirecClient::listInstanceTaskCallable(const ListInstanceTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceTaskOutcome()>>(
			[this, request]()
			{
			return this->listInstanceTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListItemsOutcome AirecClient::listItems(const ListItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListItemsOutcome(ListItemsResult(outcome.result()));
	else
		return ListItemsOutcome(outcome.error());
}

void AirecClient::listItemsAsync(const ListItemsRequest& request, const ListItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListItemsOutcomeCallable AirecClient::listItemsCallable(const ListItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListItemsOutcome()>>(
			[this, request]()
			{
			return this->listItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListLogsOutcome AirecClient::listLogs(const ListLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogsOutcome(ListLogsResult(outcome.result()));
	else
		return ListLogsOutcome(outcome.error());
}

void AirecClient::listLogsAsync(const ListLogsRequest& request, const ListLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListLogsOutcomeCallable AirecClient::listLogsCallable(const ListLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogsOutcome()>>(
			[this, request]()
			{
			return this->listLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListMixCategoriesOutcome AirecClient::listMixCategories(const ListMixCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMixCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMixCategoriesOutcome(ListMixCategoriesResult(outcome.result()));
	else
		return ListMixCategoriesOutcome(outcome.error());
}

void AirecClient::listMixCategoriesAsync(const ListMixCategoriesRequest& request, const ListMixCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMixCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListMixCategoriesOutcomeCallable AirecClient::listMixCategoriesCallable(const ListMixCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMixCategoriesOutcome()>>(
			[this, request]()
			{
			return this->listMixCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRankingModelsOutcome AirecClient::listRankingModels(const ListRankingModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRankingModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRankingModelsOutcome(ListRankingModelsResult(outcome.result()));
	else
		return ListRankingModelsOutcome(outcome.error());
}

void AirecClient::listRankingModelsAsync(const ListRankingModelsRequest& request, const ListRankingModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRankingModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRankingModelsOutcomeCallable AirecClient::listRankingModelsCallable(const ListRankingModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRankingModelsOutcome()>>(
			[this, request]()
			{
			return this->listRankingModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRuleConditionsOutcome AirecClient::listRuleConditions(const ListRuleConditionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleConditionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleConditionsOutcome(ListRuleConditionsResult(outcome.result()));
	else
		return ListRuleConditionsOutcome(outcome.error());
}

void AirecClient::listRuleConditionsAsync(const ListRuleConditionsRequest& request, const ListRuleConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleConditions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRuleConditionsOutcomeCallable AirecClient::listRuleConditionsCallable(const ListRuleConditionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleConditionsOutcome()>>(
			[this, request]()
			{
			return this->listRuleConditions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRuleTasksOutcome AirecClient::listRuleTasks(const ListRuleTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleTasksOutcome(ListRuleTasksResult(outcome.result()));
	else
		return ListRuleTasksOutcome(outcome.error());
}

void AirecClient::listRuleTasksAsync(const ListRuleTasksRequest& request, const ListRuleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRuleTasksOutcomeCallable AirecClient::listRuleTasksCallable(const ListRuleTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleTasksOutcome()>>(
			[this, request]()
			{
			return this->listRuleTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListRulesOutcome AirecClient::listRules(const ListRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRulesOutcome(ListRulesResult(outcome.result()));
	else
		return ListRulesOutcome(outcome.error());
}

void AirecClient::listRulesAsync(const ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListRulesOutcomeCallable AirecClient::listRulesCallable(const ListRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRulesOutcome()>>(
			[this, request]()
			{
			return this->listRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListSceneItemsOutcome AirecClient::listSceneItems(const ListSceneItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSceneItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSceneItemsOutcome(ListSceneItemsResult(outcome.result()));
	else
		return ListSceneItemsOutcome(outcome.error());
}

void AirecClient::listSceneItemsAsync(const ListSceneItemsRequest& request, const ListSceneItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSceneItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListSceneItemsOutcomeCallable AirecClient::listSceneItemsCallable(const ListSceneItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSceneItemsOutcome()>>(
			[this, request]()
			{
			return this->listSceneItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListSceneParametersOutcome AirecClient::listSceneParameters(const ListSceneParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSceneParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSceneParametersOutcome(ListSceneParametersResult(outcome.result()));
	else
		return ListSceneParametersOutcome(outcome.error());
}

void AirecClient::listSceneParametersAsync(const ListSceneParametersRequest& request, const ListSceneParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSceneParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListSceneParametersOutcomeCallable AirecClient::listSceneParametersCallable(const ListSceneParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSceneParametersOutcome()>>(
			[this, request]()
			{
			return this->listSceneParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListScenesOutcome AirecClient::listScenes(const ListScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenesOutcome(ListScenesResult(outcome.result()));
	else
		return ListScenesOutcome(outcome.error());
}

void AirecClient::listScenesAsync(const ListScenesRequest& request, const ListScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListScenesOutcomeCallable AirecClient::listScenesCallable(const ListScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenesOutcome()>>(
			[this, request]()
			{
			return this->listScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListUmengAppkeysOutcome AirecClient::listUmengAppkeys(const ListUmengAppkeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUmengAppkeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUmengAppkeysOutcome(ListUmengAppkeysResult(outcome.result()));
	else
		return ListUmengAppkeysOutcome(outcome.error());
}

void AirecClient::listUmengAppkeysAsync(const ListUmengAppkeysRequest& request, const ListUmengAppkeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUmengAppkeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListUmengAppkeysOutcomeCallable AirecClient::listUmengAppkeysCallable(const ListUmengAppkeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUmengAppkeysOutcome()>>(
			[this, request]()
			{
			return this->listUmengAppkeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ListUserClustersOutcome AirecClient::listUserClusters(const ListUserClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserClustersOutcome(ListUserClustersResult(outcome.result()));
	else
		return ListUserClustersOutcome(outcome.error());
}

void AirecClient::listUserClustersAsync(const ListUserClustersRequest& request, const ListUserClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ListUserClustersOutcomeCallable AirecClient::listUserClustersCallable(const ListUserClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserClustersOutcome()>>(
			[this, request]()
			{
			return this->listUserClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyDataSourceOutcome AirecClient::modifyDataSource(const ModifyDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDataSourceOutcome(ModifyDataSourceResult(outcome.result()));
	else
		return ModifyDataSourceOutcome(outcome.error());
}

void AirecClient::modifyDataSourceAsync(const ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyDataSourceOutcomeCallable AirecClient::modifyDataSourceCallable(const ModifyDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDataSourceOutcome()>>(
			[this, request]()
			{
			return this->modifyDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyFilteringAlgorithmMetaOutcome AirecClient::modifyFilteringAlgorithmMeta(const ModifyFilteringAlgorithmMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFilteringAlgorithmMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFilteringAlgorithmMetaOutcome(ModifyFilteringAlgorithmMetaResult(outcome.result()));
	else
		return ModifyFilteringAlgorithmMetaOutcome(outcome.error());
}

void AirecClient::modifyFilteringAlgorithmMetaAsync(const ModifyFilteringAlgorithmMetaRequest& request, const ModifyFilteringAlgorithmMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFilteringAlgorithmMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyFilteringAlgorithmMetaOutcomeCallable AirecClient::modifyFilteringAlgorithmMetaCallable(const ModifyFilteringAlgorithmMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFilteringAlgorithmMetaOutcome()>>(
			[this, request]()
			{
			return this->modifyFilteringAlgorithmMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyInstanceOutcome AirecClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void AirecClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyInstanceOutcomeCallable AirecClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyItemsOutcome AirecClient::modifyItems(const ModifyItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyItemsOutcome(ModifyItemsResult(outcome.result()));
	else
		return ModifyItemsOutcome(outcome.error());
}

void AirecClient::modifyItemsAsync(const ModifyItemsRequest& request, const ModifyItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyItemsOutcomeCallable AirecClient::modifyItemsCallable(const ModifyItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyItemsOutcome()>>(
			[this, request]()
			{
			return this->modifyItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyRankingModelOutcome AirecClient::modifyRankingModel(const ModifyRankingModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRankingModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRankingModelOutcome(ModifyRankingModelResult(outcome.result()));
	else
		return ModifyRankingModelOutcome(outcome.error());
}

void AirecClient::modifyRankingModelAsync(const ModifyRankingModelRequest& request, const ModifyRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRankingModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyRankingModelOutcomeCallable AirecClient::modifyRankingModelCallable(const ModifyRankingModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRankingModelOutcome()>>(
			[this, request]()
			{
			return this->modifyRankingModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifyRuleOutcome AirecClient::modifyRule(const ModifyRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRuleOutcome(ModifyRuleResult(outcome.result()));
	else
		return ModifyRuleOutcome(outcome.error());
}

void AirecClient::modifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifyRuleOutcomeCallable AirecClient::modifyRuleCallable(const ModifyRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ModifySceneOutcome AirecClient::modifyScene(const ModifySceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySceneOutcome(ModifySceneResult(outcome.result()));
	else
		return ModifySceneOutcome(outcome.error());
}

void AirecClient::modifySceneAsync(const ModifySceneRequest& request, const ModifySceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ModifySceneOutcomeCallable AirecClient::modifySceneCallable(const ModifySceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySceneOutcome()>>(
			[this, request]()
			{
			return this->modifyScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::OfflineFilteringAlgorithmOutcome AirecClient::offlineFilteringAlgorithm(const OfflineFilteringAlgorithmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineFilteringAlgorithmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineFilteringAlgorithmOutcome(OfflineFilteringAlgorithmResult(outcome.result()));
	else
		return OfflineFilteringAlgorithmOutcome(outcome.error());
}

void AirecClient::offlineFilteringAlgorithmAsync(const OfflineFilteringAlgorithmRequest& request, const OfflineFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineFilteringAlgorithm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::OfflineFilteringAlgorithmOutcomeCallable AirecClient::offlineFilteringAlgorithmCallable(const OfflineFilteringAlgorithmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineFilteringAlgorithmOutcome()>>(
			[this, request]()
			{
			return this->offlineFilteringAlgorithm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::PublishRuleOutcome AirecClient::publishRule(const PublishRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishRuleOutcome(PublishRuleResult(outcome.result()));
	else
		return PublishRuleOutcome(outcome.error());
}

void AirecClient::publishRuleAsync(const PublishRuleRequest& request, const PublishRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::PublishRuleOutcomeCallable AirecClient::publishRuleCallable(const PublishRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishRuleOutcome()>>(
			[this, request]()
			{
			return this->publishRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::PushDocumentOutcome AirecClient::pushDocument(const PushDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushDocumentOutcome(PushDocumentResult(outcome.result()));
	else
		return PushDocumentOutcome(outcome.error());
}

void AirecClient::pushDocumentAsync(const PushDocumentRequest& request, const PushDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::PushDocumentOutcomeCallable AirecClient::pushDocumentCallable(const PushDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushDocumentOutcome()>>(
			[this, request]()
			{
			return this->pushDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::PushInterventionOutcome AirecClient::pushIntervention(const PushInterventionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushInterventionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushInterventionOutcome(PushInterventionResult(outcome.result()));
	else
		return PushInterventionOutcome(outcome.error());
}

void AirecClient::pushInterventionAsync(const PushInterventionRequest& request, const PushInterventionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushIntervention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::PushInterventionOutcomeCallable AirecClient::pushInterventionCallable(const PushInterventionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushInterventionOutcome()>>(
			[this, request]()
			{
			return this->pushIntervention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryDataMessageOutcome AirecClient::queryDataMessage(const QueryDataMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataMessageOutcome(QueryDataMessageResult(outcome.result()));
	else
		return QueryDataMessageOutcome(outcome.error());
}

void AirecClient::queryDataMessageAsync(const QueryDataMessageRequest& request, const QueryDataMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryDataMessageOutcomeCallable AirecClient::queryDataMessageCallable(const QueryDataMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataMessageOutcome()>>(
			[this, request]()
			{
			return this->queryDataMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryDataMessageStatisticsOutcome AirecClient::queryDataMessageStatistics(const QueryDataMessageStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataMessageStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataMessageStatisticsOutcome(QueryDataMessageStatisticsResult(outcome.result()));
	else
		return QueryDataMessageStatisticsOutcome(outcome.error());
}

void AirecClient::queryDataMessageStatisticsAsync(const QueryDataMessageStatisticsRequest& request, const QueryDataMessageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataMessageStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryDataMessageStatisticsOutcomeCallable AirecClient::queryDataMessageStatisticsCallable(const QueryDataMessageStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataMessageStatisticsOutcome()>>(
			[this, request]()
			{
			return this->queryDataMessageStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryExceptionHistoryOutcome AirecClient::queryExceptionHistory(const QueryExceptionHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryExceptionHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryExceptionHistoryOutcome(QueryExceptionHistoryResult(outcome.result()));
	else
		return QueryExceptionHistoryOutcome(outcome.error());
}

void AirecClient::queryExceptionHistoryAsync(const QueryExceptionHistoryRequest& request, const QueryExceptionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryExceptionHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryExceptionHistoryOutcomeCallable AirecClient::queryExceptionHistoryCallable(const QueryExceptionHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryExceptionHistoryOutcome()>>(
			[this, request]()
			{
			return this->queryExceptionHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QueryRawDataOutcome AirecClient::queryRawData(const QueryRawDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRawDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRawDataOutcome(QueryRawDataResult(outcome.result()));
	else
		return QueryRawDataOutcome(outcome.error());
}

void AirecClient::queryRawDataAsync(const QueryRawDataRequest& request, const QueryRawDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRawData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QueryRawDataOutcomeCallable AirecClient::queryRawDataCallable(const QueryRawDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRawDataOutcome()>>(
			[this, request]()
			{
			return this->queryRawData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QuerySingleAggregationReportOutcome AirecClient::querySingleAggregationReport(const QuerySingleAggregationReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySingleAggregationReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySingleAggregationReportOutcome(QuerySingleAggregationReportResult(outcome.result()));
	else
		return QuerySingleAggregationReportOutcome(outcome.error());
}

void AirecClient::querySingleAggregationReportAsync(const QuerySingleAggregationReportRequest& request, const QuerySingleAggregationReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySingleAggregationReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QuerySingleAggregationReportOutcomeCallable AirecClient::querySingleAggregationReportCallable(const QuerySingleAggregationReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySingleAggregationReportOutcome()>>(
			[this, request]()
			{
			return this->querySingleAggregationReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QuerySingleReportOutcome AirecClient::querySingleReport(const QuerySingleReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySingleReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySingleReportOutcome(QuerySingleReportResult(outcome.result()));
	else
		return QuerySingleReportOutcome(outcome.error());
}

void AirecClient::querySingleReportAsync(const QuerySingleReportRequest& request, const QuerySingleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySingleReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QuerySingleReportOutcomeCallable AirecClient::querySingleReportCallable(const QuerySingleReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySingleReportOutcome()>>(
			[this, request]()
			{
			return this->querySingleReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::QuerySyncReportAggregationOutcome AirecClient::querySyncReportAggregation(const QuerySyncReportAggregationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySyncReportAggregationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySyncReportAggregationOutcome(QuerySyncReportAggregationResult(outcome.result()));
	else
		return QuerySyncReportAggregationOutcome(outcome.error());
}

void AirecClient::querySyncReportAggregationAsync(const QuerySyncReportAggregationRequest& request, const QuerySyncReportAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySyncReportAggregation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::QuerySyncReportAggregationOutcomeCallable AirecClient::querySyncReportAggregationCallable(const QuerySyncReportAggregationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySyncReportAggregationOutcome()>>(
			[this, request]()
			{
			return this->querySyncReportAggregation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::RebuildIndexOutcome AirecClient::rebuildIndex(const RebuildIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebuildIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebuildIndexOutcome(RebuildIndexResult(outcome.result()));
	else
		return RebuildIndexOutcome(outcome.error());
}

void AirecClient::rebuildIndexAsync(const RebuildIndexRequest& request, const RebuildIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebuildIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::RebuildIndexOutcomeCallable AirecClient::rebuildIndexCallable(const RebuildIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebuildIndexOutcome()>>(
			[this, request]()
			{
			return this->rebuildIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::RecommendOutcome AirecClient::recommend(const RecommendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecommendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecommendOutcome(RecommendResult(outcome.result()));
	else
		return RecommendOutcome(outcome.error());
}

void AirecClient::recommendAsync(const RecommendRequest& request, const RecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recommend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::RecommendOutcomeCallable AirecClient::recommendCallable(const RecommendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecommendOutcome()>>(
			[this, request]()
			{
			return this->recommend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::RunInstanceOutcome AirecClient::runInstance(const RunInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunInstanceOutcome(RunInstanceResult(outcome.result()));
	else
		return RunInstanceOutcome(outcome.error());
}

void AirecClient::runInstanceAsync(const RunInstanceRequest& request, const RunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::RunInstanceOutcomeCallable AirecClient::runInstanceCallable(const RunInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunInstanceOutcome()>>(
			[this, request]()
			{
			return this->runInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::StopDataSetOutcome AirecClient::stopDataSet(const StopDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDataSetOutcome(StopDataSetResult(outcome.result()));
	else
		return StopDataSetOutcome(outcome.error());
}

void AirecClient::stopDataSetAsync(const StopDataSetRequest& request, const StopDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::StopDataSetOutcomeCallable AirecClient::stopDataSetCallable(const StopDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDataSetOutcome()>>(
			[this, request]()
			{
			return this->stopDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::UnLockIndexVersionOutcome AirecClient::unLockIndexVersion(const UnLockIndexVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnLockIndexVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnLockIndexVersionOutcome(UnLockIndexVersionResult(outcome.result()));
	else
		return UnLockIndexVersionOutcome(outcome.error());
}

void AirecClient::unLockIndexVersionAsync(const UnLockIndexVersionRequest& request, const UnLockIndexVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unLockIndexVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::UnLockIndexVersionOutcomeCallable AirecClient::unLockIndexVersionCallable(const UnLockIndexVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnLockIndexVersionOutcome()>>(
			[this, request]()
			{
			return this->unLockIndexVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::UpdateExperimentBasicInfoOutcome AirecClient::updateExperimentBasicInfo(const UpdateExperimentBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExperimentBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExperimentBasicInfoOutcome(UpdateExperimentBasicInfoResult(outcome.result()));
	else
		return UpdateExperimentBasicInfoOutcome(outcome.error());
}

void AirecClient::updateExperimentBasicInfoAsync(const UpdateExperimentBasicInfoRequest& request, const UpdateExperimentBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExperimentBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::UpdateExperimentBasicInfoOutcomeCallable AirecClient::updateExperimentBasicInfoCallable(const UpdateExperimentBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExperimentBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->updateExperimentBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::UpdateExperimentConfigOutcome AirecClient::updateExperimentConfig(const UpdateExperimentConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExperimentConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExperimentConfigOutcome(UpdateExperimentConfigResult(outcome.result()));
	else
		return UpdateExperimentConfigOutcome(outcome.error());
}

void AirecClient::updateExperimentConfigAsync(const UpdateExperimentConfigRequest& request, const UpdateExperimentConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExperimentConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::UpdateExperimentConfigOutcomeCallable AirecClient::updateExperimentConfigCallable(const UpdateExperimentConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExperimentConfigOutcome()>>(
			[this, request]()
			{
			return this->updateExperimentConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::UpdateExperimentStatusOutcome AirecClient::updateExperimentStatus(const UpdateExperimentStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExperimentStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExperimentStatusOutcome(UpdateExperimentStatusResult(outcome.result()));
	else
		return UpdateExperimentStatusOutcome(outcome.error());
}

void AirecClient::updateExperimentStatusAsync(const UpdateExperimentStatusRequest& request, const UpdateExperimentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExperimentStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::UpdateExperimentStatusOutcomeCallable AirecClient::updateExperimentStatusCallable(const UpdateExperimentStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExperimentStatusOutcome()>>(
			[this, request]()
			{
			return this->updateExperimentStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::UpgradeInstanceOutcome AirecClient::upgradeInstance(const UpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceOutcome(UpgradeInstanceResult(outcome.result()));
	else
		return UpgradeInstanceOutcome(outcome.error());
}

void AirecClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::UpgradeInstanceOutcomeCallable AirecClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AirecClient::ValidateInstanceOutcome AirecClient::validateInstance(const ValidateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateInstanceOutcome(ValidateInstanceResult(outcome.result()));
	else
		return ValidateInstanceOutcome(outcome.error());
}

void AirecClient::validateInstanceAsync(const ValidateInstanceRequest& request, const ValidateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AirecClient::ValidateInstanceOutcomeCallable AirecClient::validateInstanceCallable(const ValidateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateInstanceOutcome()>>(
			[this, request]()
			{
			return this->validateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

