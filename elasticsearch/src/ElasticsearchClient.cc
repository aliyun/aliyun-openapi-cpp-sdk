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

#include <alibabacloud/elasticsearch/ElasticsearchClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

namespace
{
	const std::string SERVICE_NAME = "elasticsearch";
}

ElasticsearchClient::ElasticsearchClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elasticsearch");
}

ElasticsearchClient::ElasticsearchClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elasticsearch");
}

ElasticsearchClient::ElasticsearchClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elasticsearch");
}

ElasticsearchClient::~ElasticsearchClient()
{}

ElasticsearchClient::ActivateZonesOutcome ElasticsearchClient::activateZones(const ActivateZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateZonesOutcome(ActivateZonesResult(outcome.result()));
	else
		return ActivateZonesOutcome(outcome.error());
}

void ElasticsearchClient::activateZonesAsync(const ActivateZonesRequest& request, const ActivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ActivateZonesOutcomeCallable ElasticsearchClient::activateZonesCallable(const ActivateZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateZonesOutcome()>>(
			[this, request]()
			{
			return this->activateZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::AddConnectableClusterOutcome ElasticsearchClient::addConnectableCluster(const AddConnectableClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddConnectableClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddConnectableClusterOutcome(AddConnectableClusterResult(outcome.result()));
	else
		return AddConnectableClusterOutcome(outcome.error());
}

void ElasticsearchClient::addConnectableClusterAsync(const AddConnectableClusterRequest& request, const AddConnectableClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addConnectableCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::AddConnectableClusterOutcomeCallable ElasticsearchClient::addConnectableClusterCallable(const AddConnectableClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddConnectableClusterOutcome()>>(
			[this, request]()
			{
			return this->addConnectableCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::AddSnapshotRepoOutcome ElasticsearchClient::addSnapshotRepo(const AddSnapshotRepoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSnapshotRepoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSnapshotRepoOutcome(AddSnapshotRepoResult(outcome.result()));
	else
		return AddSnapshotRepoOutcome(outcome.error());
}

void ElasticsearchClient::addSnapshotRepoAsync(const AddSnapshotRepoRequest& request, const AddSnapshotRepoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSnapshotRepo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::AddSnapshotRepoOutcomeCallable ElasticsearchClient::addSnapshotRepoCallable(const AddSnapshotRepoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSnapshotRepoOutcome()>>(
			[this, request]()
			{
			return this->addSnapshotRepo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CancelDeletionOutcome ElasticsearchClient::cancelDeletion(const CancelDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDeletionOutcome(CancelDeletionResult(outcome.result()));
	else
		return CancelDeletionOutcome(outcome.error());
}

void ElasticsearchClient::cancelDeletionAsync(const CancelDeletionRequest& request, const CancelDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CancelDeletionOutcomeCallable ElasticsearchClient::cancelDeletionCallable(const CancelDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDeletionOutcome()>>(
			[this, request]()
			{
			return this->cancelDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CancelLogstashDeletionOutcome ElasticsearchClient::cancelLogstashDeletion(const CancelLogstashDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelLogstashDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelLogstashDeletionOutcome(CancelLogstashDeletionResult(outcome.result()));
	else
		return CancelLogstashDeletionOutcome(outcome.error());
}

void ElasticsearchClient::cancelLogstashDeletionAsync(const CancelLogstashDeletionRequest& request, const CancelLogstashDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelLogstashDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CancelLogstashDeletionOutcomeCallable ElasticsearchClient::cancelLogstashDeletionCallable(const CancelLogstashDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelLogstashDeletionOutcome()>>(
			[this, request]()
			{
			return this->cancelLogstashDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CancelTaskOutcome ElasticsearchClient::cancelTask(const CancelTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelTaskOutcome(CancelTaskResult(outcome.result()));
	else
		return CancelTaskOutcome(outcome.error());
}

void ElasticsearchClient::cancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CancelTaskOutcomeCallable ElasticsearchClient::cancelTaskCallable(const CancelTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CapacityPlanOutcome ElasticsearchClient::capacityPlan(const CapacityPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CapacityPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CapacityPlanOutcome(CapacityPlanResult(outcome.result()));
	else
		return CapacityPlanOutcome(outcome.error());
}

void ElasticsearchClient::capacityPlanAsync(const CapacityPlanRequest& request, const CapacityPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, capacityPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CapacityPlanOutcomeCallable ElasticsearchClient::capacityPlanCallable(const CapacityPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CapacityPlanOutcome()>>(
			[this, request]()
			{
			return this->capacityPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CloseDiagnosisOutcome ElasticsearchClient::closeDiagnosis(const CloseDiagnosisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseDiagnosisOutcome(CloseDiagnosisResult(outcome.result()));
	else
		return CloseDiagnosisOutcome(outcome.error());
}

void ElasticsearchClient::closeDiagnosisAsync(const CloseDiagnosisRequest& request, const CloseDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CloseDiagnosisOutcomeCallable ElasticsearchClient::closeDiagnosisCallable(const CloseDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->closeDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CloseHttpsOutcome ElasticsearchClient::closeHttps(const CloseHttpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseHttpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseHttpsOutcome(CloseHttpsResult(outcome.result()));
	else
		return CloseHttpsOutcome(outcome.error());
}

void ElasticsearchClient::closeHttpsAsync(const CloseHttpsRequest& request, const CloseHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeHttps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CloseHttpsOutcomeCallable ElasticsearchClient::closeHttpsCallable(const CloseHttpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseHttpsOutcome()>>(
			[this, request]()
			{
			return this->closeHttps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CloseManagedIndexOutcome ElasticsearchClient::closeManagedIndex(const CloseManagedIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseManagedIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseManagedIndexOutcome(CloseManagedIndexResult(outcome.result()));
	else
		return CloseManagedIndexOutcome(outcome.error());
}

void ElasticsearchClient::closeManagedIndexAsync(const CloseManagedIndexRequest& request, const CloseManagedIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeManagedIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CloseManagedIndexOutcomeCallable ElasticsearchClient::closeManagedIndexCallable(const CloseManagedIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseManagedIndexOutcome()>>(
			[this, request]()
			{
			return this->closeManagedIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateCollectorOutcome ElasticsearchClient::createCollector(const CreateCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCollectorOutcome(CreateCollectorResult(outcome.result()));
	else
		return CreateCollectorOutcome(outcome.error());
}

void ElasticsearchClient::createCollectorAsync(const CreateCollectorRequest& request, const CreateCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateCollectorOutcomeCallable ElasticsearchClient::createCollectorCallable(const CreateCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCollectorOutcome()>>(
			[this, request]()
			{
			return this->createCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateComponentIndexOutcome ElasticsearchClient::createComponentIndex(const CreateComponentIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateComponentIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateComponentIndexOutcome(CreateComponentIndexResult(outcome.result()));
	else
		return CreateComponentIndexOutcome(outcome.error());
}

void ElasticsearchClient::createComponentIndexAsync(const CreateComponentIndexRequest& request, const CreateComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createComponentIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateComponentIndexOutcomeCallable ElasticsearchClient::createComponentIndexCallable(const CreateComponentIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateComponentIndexOutcome()>>(
			[this, request]()
			{
			return this->createComponentIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateDataStreamOutcome ElasticsearchClient::createDataStream(const CreateDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataStreamOutcome(CreateDataStreamResult(outcome.result()));
	else
		return CreateDataStreamOutcome(outcome.error());
}

void ElasticsearchClient::createDataStreamAsync(const CreateDataStreamRequest& request, const CreateDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateDataStreamOutcomeCallable ElasticsearchClient::createDataStreamCallable(const CreateDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataStreamOutcome()>>(
			[this, request]()
			{
			return this->createDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateILMPolicyOutcome ElasticsearchClient::createILMPolicy(const CreateILMPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateILMPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateILMPolicyOutcome(CreateILMPolicyResult(outcome.result()));
	else
		return CreateILMPolicyOutcome(outcome.error());
}

void ElasticsearchClient::createILMPolicyAsync(const CreateILMPolicyRequest& request, const CreateILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createILMPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateILMPolicyOutcomeCallable ElasticsearchClient::createILMPolicyCallable(const CreateILMPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateILMPolicyOutcome()>>(
			[this, request]()
			{
			return this->createILMPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateIndexTemplateOutcome ElasticsearchClient::createIndexTemplate(const CreateIndexTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIndexTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIndexTemplateOutcome(CreateIndexTemplateResult(outcome.result()));
	else
		return CreateIndexTemplateOutcome(outcome.error());
}

void ElasticsearchClient::createIndexTemplateAsync(const CreateIndexTemplateRequest& request, const CreateIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIndexTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateIndexTemplateOutcomeCallable ElasticsearchClient::createIndexTemplateCallable(const CreateIndexTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIndexTemplateOutcome()>>(
			[this, request]()
			{
			return this->createIndexTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateInstanceOutcome ElasticsearchClient::createInstance(const CreateInstanceRequest &request) const
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

void ElasticsearchClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateInstanceOutcomeCallable ElasticsearchClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateLogstashOutcome ElasticsearchClient::createLogstash(const CreateLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogstashOutcome(CreateLogstashResult(outcome.result()));
	else
		return CreateLogstashOutcome(outcome.error());
}

void ElasticsearchClient::createLogstashAsync(const CreateLogstashRequest& request, const CreateLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateLogstashOutcomeCallable ElasticsearchClient::createLogstashCallable(const CreateLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogstashOutcome()>>(
			[this, request]()
			{
			return this->createLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreatePipelinesOutcome ElasticsearchClient::createPipelines(const CreatePipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelinesOutcome(CreatePipelinesResult(outcome.result()));
	else
		return CreatePipelinesOutcome(outcome.error());
}

void ElasticsearchClient::createPipelinesAsync(const CreatePipelinesRequest& request, const CreatePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreatePipelinesOutcomeCallable ElasticsearchClient::createPipelinesCallable(const CreatePipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelinesOutcome()>>(
			[this, request]()
			{
			return this->createPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateSnapshotOutcome ElasticsearchClient::createSnapshot(const CreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnapshotOutcome(CreateSnapshotResult(outcome.result()));
	else
		return CreateSnapshotOutcome(outcome.error());
}

void ElasticsearchClient::createSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateSnapshotOutcomeCallable ElasticsearchClient::createSnapshotCallable(const CreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateVpcEndpointOutcome ElasticsearchClient::createVpcEndpoint(const CreateVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpcEndpointOutcome(CreateVpcEndpointResult(outcome.result()));
	else
		return CreateVpcEndpointOutcome(outcome.error());
}

void ElasticsearchClient::createVpcEndpointAsync(const CreateVpcEndpointRequest& request, const CreateVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateVpcEndpointOutcomeCallable ElasticsearchClient::createVpcEndpointCallable(const CreateVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->createVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeactivateZonesOutcome ElasticsearchClient::deactivateZones(const DeactivateZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateZonesOutcome(DeactivateZonesResult(outcome.result()));
	else
		return DeactivateZonesOutcome(outcome.error());
}

void ElasticsearchClient::deactivateZonesAsync(const DeactivateZonesRequest& request, const DeactivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeactivateZonesOutcomeCallable ElasticsearchClient::deactivateZonesCallable(const DeactivateZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateZonesOutcome()>>(
			[this, request]()
			{
			return this->deactivateZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteCollectorOutcome ElasticsearchClient::deleteCollector(const DeleteCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCollectorOutcome(DeleteCollectorResult(outcome.result()));
	else
		return DeleteCollectorOutcome(outcome.error());
}

void ElasticsearchClient::deleteCollectorAsync(const DeleteCollectorRequest& request, const DeleteCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteCollectorOutcomeCallable ElasticsearchClient::deleteCollectorCallable(const DeleteCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCollectorOutcome()>>(
			[this, request]()
			{
			return this->deleteCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteComponentIndexOutcome ElasticsearchClient::deleteComponentIndex(const DeleteComponentIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteComponentIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteComponentIndexOutcome(DeleteComponentIndexResult(outcome.result()));
	else
		return DeleteComponentIndexOutcome(outcome.error());
}

void ElasticsearchClient::deleteComponentIndexAsync(const DeleteComponentIndexRequest& request, const DeleteComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteComponentIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteComponentIndexOutcomeCallable ElasticsearchClient::deleteComponentIndexCallable(const DeleteComponentIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteComponentIndexOutcome()>>(
			[this, request]()
			{
			return this->deleteComponentIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteConnectedClusterOutcome ElasticsearchClient::deleteConnectedCluster(const DeleteConnectedClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConnectedClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConnectedClusterOutcome(DeleteConnectedClusterResult(outcome.result()));
	else
		return DeleteConnectedClusterOutcome(outcome.error());
}

void ElasticsearchClient::deleteConnectedClusterAsync(const DeleteConnectedClusterRequest& request, const DeleteConnectedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConnectedCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteConnectedClusterOutcomeCallable ElasticsearchClient::deleteConnectedClusterCallable(const DeleteConnectedClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConnectedClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteConnectedCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteDataStreamOutcome ElasticsearchClient::deleteDataStream(const DeleteDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataStreamOutcome(DeleteDataStreamResult(outcome.result()));
	else
		return DeleteDataStreamOutcome(outcome.error());
}

void ElasticsearchClient::deleteDataStreamAsync(const DeleteDataStreamRequest& request, const DeleteDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteDataStreamOutcomeCallable ElasticsearchClient::deleteDataStreamCallable(const DeleteDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataStreamOutcome()>>(
			[this, request]()
			{
			return this->deleteDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteDataTaskOutcome ElasticsearchClient::deleteDataTask(const DeleteDataTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataTaskOutcome(DeleteDataTaskResult(outcome.result()));
	else
		return DeleteDataTaskOutcome(outcome.error());
}

void ElasticsearchClient::deleteDataTaskAsync(const DeleteDataTaskRequest& request, const DeleteDataTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteDataTaskOutcomeCallable ElasticsearchClient::deleteDataTaskCallable(const DeleteDataTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteDataTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteDeprecatedTemplateOutcome ElasticsearchClient::deleteDeprecatedTemplate(const DeleteDeprecatedTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeprecatedTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeprecatedTemplateOutcome(DeleteDeprecatedTemplateResult(outcome.result()));
	else
		return DeleteDeprecatedTemplateOutcome(outcome.error());
}

void ElasticsearchClient::deleteDeprecatedTemplateAsync(const DeleteDeprecatedTemplateRequest& request, const DeleteDeprecatedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDeprecatedTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteDeprecatedTemplateOutcomeCallable ElasticsearchClient::deleteDeprecatedTemplateCallable(const DeleteDeprecatedTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeprecatedTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteDeprecatedTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteILMPolicyOutcome ElasticsearchClient::deleteILMPolicy(const DeleteILMPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteILMPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteILMPolicyOutcome(DeleteILMPolicyResult(outcome.result()));
	else
		return DeleteILMPolicyOutcome(outcome.error());
}

void ElasticsearchClient::deleteILMPolicyAsync(const DeleteILMPolicyRequest& request, const DeleteILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteILMPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteILMPolicyOutcomeCallable ElasticsearchClient::deleteILMPolicyCallable(const DeleteILMPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteILMPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteILMPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteIndexTemplateOutcome ElasticsearchClient::deleteIndexTemplate(const DeleteIndexTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIndexTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIndexTemplateOutcome(DeleteIndexTemplateResult(outcome.result()));
	else
		return DeleteIndexTemplateOutcome(outcome.error());
}

void ElasticsearchClient::deleteIndexTemplateAsync(const DeleteIndexTemplateRequest& request, const DeleteIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIndexTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteIndexTemplateOutcomeCallable ElasticsearchClient::deleteIndexTemplateCallable(const DeleteIndexTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIndexTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteIndexTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteInstanceOutcome ElasticsearchClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void ElasticsearchClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteInstanceOutcomeCallable ElasticsearchClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteLogstashOutcome ElasticsearchClient::deleteLogstash(const DeleteLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogstashOutcome(DeleteLogstashResult(outcome.result()));
	else
		return DeleteLogstashOutcome(outcome.error());
}

void ElasticsearchClient::deleteLogstashAsync(const DeleteLogstashRequest& request, const DeleteLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteLogstashOutcomeCallable ElasticsearchClient::deleteLogstashCallable(const DeleteLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogstashOutcome()>>(
			[this, request]()
			{
			return this->deleteLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeletePipelinesOutcome ElasticsearchClient::deletePipelines(const DeletePipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePipelinesOutcome(DeletePipelinesResult(outcome.result()));
	else
		return DeletePipelinesOutcome(outcome.error());
}

void ElasticsearchClient::deletePipelinesAsync(const DeletePipelinesRequest& request, const DeletePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeletePipelinesOutcomeCallable ElasticsearchClient::deletePipelinesCallable(const DeletePipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelinesOutcome()>>(
			[this, request]()
			{
			return this->deletePipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteSnapshotRepoOutcome ElasticsearchClient::deleteSnapshotRepo(const DeleteSnapshotRepoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotRepoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotRepoOutcome(DeleteSnapshotRepoResult(outcome.result()));
	else
		return DeleteSnapshotRepoOutcome(outcome.error());
}

void ElasticsearchClient::deleteSnapshotRepoAsync(const DeleteSnapshotRepoRequest& request, const DeleteSnapshotRepoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshotRepo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteSnapshotRepoOutcomeCallable ElasticsearchClient::deleteSnapshotRepoCallable(const DeleteSnapshotRepoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotRepoOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshotRepo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteVpcEndpointOutcome ElasticsearchClient::deleteVpcEndpoint(const DeleteVpcEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcEndpointOutcome(DeleteVpcEndpointResult(outcome.result()));
	else
		return DeleteVpcEndpointOutcome(outcome.error());
}

void ElasticsearchClient::deleteVpcEndpointAsync(const DeleteVpcEndpointRequest& request, const DeleteVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpcEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteVpcEndpointOutcomeCallable ElasticsearchClient::deleteVpcEndpointCallable(const DeleteVpcEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcEndpointOutcome()>>(
			[this, request]()
			{
			return this->deleteVpcEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeAckOperatorOutcome ElasticsearchClient::describeAckOperator(const DescribeAckOperatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAckOperatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAckOperatorOutcome(DescribeAckOperatorResult(outcome.result()));
	else
		return DescribeAckOperatorOutcome(outcome.error());
}

void ElasticsearchClient::describeAckOperatorAsync(const DescribeAckOperatorRequest& request, const DescribeAckOperatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAckOperator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeAckOperatorOutcomeCallable ElasticsearchClient::describeAckOperatorCallable(const DescribeAckOperatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAckOperatorOutcome()>>(
			[this, request]()
			{
			return this->describeAckOperator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeApmOutcome ElasticsearchClient::describeApm(const DescribeApmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApmOutcome(DescribeApmResult(outcome.result()));
	else
		return DescribeApmOutcome(outcome.error());
}

void ElasticsearchClient::describeApmAsync(const DescribeApmRequest& request, const DescribeApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeApmOutcomeCallable ElasticsearchClient::describeApmCallable(const DescribeApmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApmOutcome()>>(
			[this, request]()
			{
			return this->describeApm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeCollectorOutcome ElasticsearchClient::describeCollector(const DescribeCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCollectorOutcome(DescribeCollectorResult(outcome.result()));
	else
		return DescribeCollectorOutcome(outcome.error());
}

void ElasticsearchClient::describeCollectorAsync(const DescribeCollectorRequest& request, const DescribeCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeCollectorOutcomeCallable ElasticsearchClient::describeCollectorCallable(const DescribeCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCollectorOutcome()>>(
			[this, request]()
			{
			return this->describeCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeComponentIndexOutcome ElasticsearchClient::describeComponentIndex(const DescribeComponentIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeComponentIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeComponentIndexOutcome(DescribeComponentIndexResult(outcome.result()));
	else
		return DescribeComponentIndexOutcome(outcome.error());
}

void ElasticsearchClient::describeComponentIndexAsync(const DescribeComponentIndexRequest& request, const DescribeComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeComponentIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeComponentIndexOutcomeCallable ElasticsearchClient::describeComponentIndexCallable(const DescribeComponentIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeComponentIndexOutcome()>>(
			[this, request]()
			{
			return this->describeComponentIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeConnectableClustersOutcome ElasticsearchClient::describeConnectableClusters(const DescribeConnectableClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConnectableClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConnectableClustersOutcome(DescribeConnectableClustersResult(outcome.result()));
	else
		return DescribeConnectableClustersOutcome(outcome.error());
}

void ElasticsearchClient::describeConnectableClustersAsync(const DescribeConnectableClustersRequest& request, const DescribeConnectableClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConnectableClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeConnectableClustersOutcomeCallable ElasticsearchClient::describeConnectableClustersCallable(const DescribeConnectableClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConnectableClustersOutcome()>>(
			[this, request]()
			{
			return this->describeConnectableClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeDeprecatedTemplateOutcome ElasticsearchClient::describeDeprecatedTemplate(const DescribeDeprecatedTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeprecatedTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeprecatedTemplateOutcome(DescribeDeprecatedTemplateResult(outcome.result()));
	else
		return DescribeDeprecatedTemplateOutcome(outcome.error());
}

void ElasticsearchClient::describeDeprecatedTemplateAsync(const DescribeDeprecatedTemplateRequest& request, const DescribeDeprecatedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeprecatedTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeDeprecatedTemplateOutcomeCallable ElasticsearchClient::describeDeprecatedTemplateCallable(const DescribeDeprecatedTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeprecatedTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeDeprecatedTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeDiagnoseReportOutcome ElasticsearchClient::describeDiagnoseReport(const DescribeDiagnoseReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnoseReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnoseReportOutcome(DescribeDiagnoseReportResult(outcome.result()));
	else
		return DescribeDiagnoseReportOutcome(outcome.error());
}

void ElasticsearchClient::describeDiagnoseReportAsync(const DescribeDiagnoseReportRequest& request, const DescribeDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnoseReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeDiagnoseReportOutcomeCallable ElasticsearchClient::describeDiagnoseReportCallable(const DescribeDiagnoseReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnoseReportOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnoseReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeDiagnosisSettingsOutcome ElasticsearchClient::describeDiagnosisSettings(const DescribeDiagnosisSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDiagnosisSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDiagnosisSettingsOutcome(DescribeDiagnosisSettingsResult(outcome.result()));
	else
		return DescribeDiagnosisSettingsOutcome(outcome.error());
}

void ElasticsearchClient::describeDiagnosisSettingsAsync(const DescribeDiagnosisSettingsRequest& request, const DescribeDiagnosisSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDiagnosisSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeDiagnosisSettingsOutcomeCallable ElasticsearchClient::describeDiagnosisSettingsCallable(const DescribeDiagnosisSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDiagnosisSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeDiagnosisSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeDynamicSettingsOutcome ElasticsearchClient::describeDynamicSettings(const DescribeDynamicSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDynamicSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDynamicSettingsOutcome(DescribeDynamicSettingsResult(outcome.result()));
	else
		return DescribeDynamicSettingsOutcome(outcome.error());
}

void ElasticsearchClient::describeDynamicSettingsAsync(const DescribeDynamicSettingsRequest& request, const DescribeDynamicSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDynamicSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeDynamicSettingsOutcomeCallable ElasticsearchClient::describeDynamicSettingsCallable(const DescribeDynamicSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDynamicSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeDynamicSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeElasticsearchHealthOutcome ElasticsearchClient::describeElasticsearchHealth(const DescribeElasticsearchHealthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticsearchHealthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticsearchHealthOutcome(DescribeElasticsearchHealthResult(outcome.result()));
	else
		return DescribeElasticsearchHealthOutcome(outcome.error());
}

void ElasticsearchClient::describeElasticsearchHealthAsync(const DescribeElasticsearchHealthRequest& request, const DescribeElasticsearchHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticsearchHealth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeElasticsearchHealthOutcomeCallable ElasticsearchClient::describeElasticsearchHealthCallable(const DescribeElasticsearchHealthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticsearchHealthOutcome()>>(
			[this, request]()
			{
			return this->describeElasticsearchHealth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeILMPolicyOutcome ElasticsearchClient::describeILMPolicy(const DescribeILMPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeILMPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeILMPolicyOutcome(DescribeILMPolicyResult(outcome.result()));
	else
		return DescribeILMPolicyOutcome(outcome.error());
}

void ElasticsearchClient::describeILMPolicyAsync(const DescribeILMPolicyRequest& request, const DescribeILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeILMPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeILMPolicyOutcomeCallable ElasticsearchClient::describeILMPolicyCallable(const DescribeILMPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeILMPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeILMPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeIndexTemplateOutcome ElasticsearchClient::describeIndexTemplate(const DescribeIndexTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIndexTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIndexTemplateOutcome(DescribeIndexTemplateResult(outcome.result()));
	else
		return DescribeIndexTemplateOutcome(outcome.error());
}

void ElasticsearchClient::describeIndexTemplateAsync(const DescribeIndexTemplateRequest& request, const DescribeIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIndexTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeIndexTemplateOutcomeCallable ElasticsearchClient::describeIndexTemplateCallable(const DescribeIndexTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIndexTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeIndexTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeInstanceOutcome ElasticsearchClient::describeInstance(const DescribeInstanceRequest &request) const
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

void ElasticsearchClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeInstanceOutcomeCallable ElasticsearchClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeKibanaSettingsOutcome ElasticsearchClient::describeKibanaSettings(const DescribeKibanaSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKibanaSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKibanaSettingsOutcome(DescribeKibanaSettingsResult(outcome.result()));
	else
		return DescribeKibanaSettingsOutcome(outcome.error());
}

void ElasticsearchClient::describeKibanaSettingsAsync(const DescribeKibanaSettingsRequest& request, const DescribeKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKibanaSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeKibanaSettingsOutcomeCallable ElasticsearchClient::describeKibanaSettingsCallable(const DescribeKibanaSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKibanaSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeKibanaSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeLogstashOutcome ElasticsearchClient::describeLogstash(const DescribeLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogstashOutcome(DescribeLogstashResult(outcome.result()));
	else
		return DescribeLogstashOutcome(outcome.error());
}

void ElasticsearchClient::describeLogstashAsync(const DescribeLogstashRequest& request, const DescribeLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeLogstashOutcomeCallable ElasticsearchClient::describeLogstashCallable(const DescribeLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogstashOutcome()>>(
			[this, request]()
			{
			return this->describeLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribePipelineOutcome ElasticsearchClient::describePipeline(const DescribePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePipelineOutcome(DescribePipelineResult(outcome.result()));
	else
		return DescribePipelineOutcome(outcome.error());
}

void ElasticsearchClient::describePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribePipelineOutcomeCallable ElasticsearchClient::describePipelineCallable(const DescribePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePipelineOutcome()>>(
			[this, request]()
			{
			return this->describePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribePipelineManagementConfigOutcome ElasticsearchClient::describePipelineManagementConfig(const DescribePipelineManagementConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePipelineManagementConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePipelineManagementConfigOutcome(DescribePipelineManagementConfigResult(outcome.result()));
	else
		return DescribePipelineManagementConfigOutcome(outcome.error());
}

void ElasticsearchClient::describePipelineManagementConfigAsync(const DescribePipelineManagementConfigRequest& request, const DescribePipelineManagementConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePipelineManagementConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribePipelineManagementConfigOutcomeCallable ElasticsearchClient::describePipelineManagementConfigCallable(const DescribePipelineManagementConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePipelineManagementConfigOutcome()>>(
			[this, request]()
			{
			return this->describePipelineManagementConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeRegionsOutcome ElasticsearchClient::describeRegions(const DescribeRegionsRequest &request) const
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

void ElasticsearchClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeRegionsOutcomeCallable ElasticsearchClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeSnapshotSettingOutcome ElasticsearchClient::describeSnapshotSetting(const DescribeSnapshotSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotSettingOutcome(DescribeSnapshotSettingResult(outcome.result()));
	else
		return DescribeSnapshotSettingOutcome(outcome.error());
}

void ElasticsearchClient::describeSnapshotSettingAsync(const DescribeSnapshotSettingRequest& request, const DescribeSnapshotSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshotSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeSnapshotSettingOutcomeCallable ElasticsearchClient::describeSnapshotSettingCallable(const DescribeSnapshotSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotSettingOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshotSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeTemplatesOutcome ElasticsearchClient::describeTemplates(const DescribeTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplatesOutcome(DescribeTemplatesResult(outcome.result()));
	else
		return DescribeTemplatesOutcome(outcome.error());
}

void ElasticsearchClient::describeTemplatesAsync(const DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeTemplatesOutcomeCallable ElasticsearchClient::describeTemplatesCallable(const DescribeTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeXpackMonitorConfigOutcome ElasticsearchClient::describeXpackMonitorConfig(const DescribeXpackMonitorConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeXpackMonitorConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeXpackMonitorConfigOutcome(DescribeXpackMonitorConfigResult(outcome.result()));
	else
		return DescribeXpackMonitorConfigOutcome(outcome.error());
}

void ElasticsearchClient::describeXpackMonitorConfigAsync(const DescribeXpackMonitorConfigRequest& request, const DescribeXpackMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeXpackMonitorConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeXpackMonitorConfigOutcomeCallable ElasticsearchClient::describeXpackMonitorConfigCallable(const DescribeXpackMonitorConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeXpackMonitorConfigOutcome()>>(
			[this, request]()
			{
			return this->describeXpackMonitorConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DiagnoseInstanceOutcome ElasticsearchClient::diagnoseInstance(const DiagnoseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DiagnoseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DiagnoseInstanceOutcome(DiagnoseInstanceResult(outcome.result()));
	else
		return DiagnoseInstanceOutcome(outcome.error());
}

void ElasticsearchClient::diagnoseInstanceAsync(const DiagnoseInstanceRequest& request, const DiagnoseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, diagnoseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DiagnoseInstanceOutcomeCallable ElasticsearchClient::diagnoseInstanceCallable(const DiagnoseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DiagnoseInstanceOutcome()>>(
			[this, request]()
			{
			return this->diagnoseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DisableKibanaPvlNetworkOutcome ElasticsearchClient::disableKibanaPvlNetwork(const DisableKibanaPvlNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableKibanaPvlNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableKibanaPvlNetworkOutcome(DisableKibanaPvlNetworkResult(outcome.result()));
	else
		return DisableKibanaPvlNetworkOutcome(outcome.error());
}

void ElasticsearchClient::disableKibanaPvlNetworkAsync(const DisableKibanaPvlNetworkRequest& request, const DisableKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableKibanaPvlNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DisableKibanaPvlNetworkOutcomeCallable ElasticsearchClient::disableKibanaPvlNetworkCallable(const DisableKibanaPvlNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableKibanaPvlNetworkOutcome()>>(
			[this, request]()
			{
			return this->disableKibanaPvlNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::EnableKibanaPvlNetworkOutcome ElasticsearchClient::enableKibanaPvlNetwork(const EnableKibanaPvlNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableKibanaPvlNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableKibanaPvlNetworkOutcome(EnableKibanaPvlNetworkResult(outcome.result()));
	else
		return EnableKibanaPvlNetworkOutcome(outcome.error());
}

void ElasticsearchClient::enableKibanaPvlNetworkAsync(const EnableKibanaPvlNetworkRequest& request, const EnableKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableKibanaPvlNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::EnableKibanaPvlNetworkOutcomeCallable ElasticsearchClient::enableKibanaPvlNetworkCallable(const EnableKibanaPvlNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableKibanaPvlNetworkOutcome()>>(
			[this, request]()
			{
			return this->enableKibanaPvlNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::EstimatedLogstashRestartTimeOutcome ElasticsearchClient::estimatedLogstashRestartTime(const EstimatedLogstashRestartTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstimatedLogstashRestartTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstimatedLogstashRestartTimeOutcome(EstimatedLogstashRestartTimeResult(outcome.result()));
	else
		return EstimatedLogstashRestartTimeOutcome(outcome.error());
}

void ElasticsearchClient::estimatedLogstashRestartTimeAsync(const EstimatedLogstashRestartTimeRequest& request, const EstimatedLogstashRestartTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, estimatedLogstashRestartTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::EstimatedLogstashRestartTimeOutcomeCallable ElasticsearchClient::estimatedLogstashRestartTimeCallable(const EstimatedLogstashRestartTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstimatedLogstashRestartTimeOutcome()>>(
			[this, request]()
			{
			return this->estimatedLogstashRestartTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::EstimatedRestartTimeOutcome ElasticsearchClient::estimatedRestartTime(const EstimatedRestartTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstimatedRestartTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstimatedRestartTimeOutcome(EstimatedRestartTimeResult(outcome.result()));
	else
		return EstimatedRestartTimeOutcome(outcome.error());
}

void ElasticsearchClient::estimatedRestartTimeAsync(const EstimatedRestartTimeRequest& request, const EstimatedRestartTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, estimatedRestartTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::EstimatedRestartTimeOutcomeCallable ElasticsearchClient::estimatedRestartTimeCallable(const EstimatedRestartTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstimatedRestartTimeOutcome()>>(
			[this, request]()
			{
			return this->estimatedRestartTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetClusterDataInformationOutcome ElasticsearchClient::getClusterDataInformation(const GetClusterDataInformationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterDataInformationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterDataInformationOutcome(GetClusterDataInformationResult(outcome.result()));
	else
		return GetClusterDataInformationOutcome(outcome.error());
}

void ElasticsearchClient::getClusterDataInformationAsync(const GetClusterDataInformationRequest& request, const GetClusterDataInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterDataInformation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetClusterDataInformationOutcomeCallable ElasticsearchClient::getClusterDataInformationCallable(const GetClusterDataInformationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterDataInformationOutcome()>>(
			[this, request]()
			{
			return this->getClusterDataInformation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetElastictaskOutcome ElasticsearchClient::getElastictask(const GetElastictaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetElastictaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetElastictaskOutcome(GetElastictaskResult(outcome.result()));
	else
		return GetElastictaskOutcome(outcome.error());
}

void ElasticsearchClient::getElastictaskAsync(const GetElastictaskRequest& request, const GetElastictaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getElastictask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetElastictaskOutcomeCallable ElasticsearchClient::getElastictaskCallable(const GetElastictaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetElastictaskOutcome()>>(
			[this, request]()
			{
			return this->getElastictask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetEmonGrafanaAlertsOutcome ElasticsearchClient::getEmonGrafanaAlerts(const GetEmonGrafanaAlertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEmonGrafanaAlertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEmonGrafanaAlertsOutcome(GetEmonGrafanaAlertsResult(outcome.result()));
	else
		return GetEmonGrafanaAlertsOutcome(outcome.error());
}

void ElasticsearchClient::getEmonGrafanaAlertsAsync(const GetEmonGrafanaAlertsRequest& request, const GetEmonGrafanaAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEmonGrafanaAlerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetEmonGrafanaAlertsOutcomeCallable ElasticsearchClient::getEmonGrafanaAlertsCallable(const GetEmonGrafanaAlertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEmonGrafanaAlertsOutcome()>>(
			[this, request]()
			{
			return this->getEmonGrafanaAlerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetEmonGrafanaDashboardsOutcome ElasticsearchClient::getEmonGrafanaDashboards(const GetEmonGrafanaDashboardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEmonGrafanaDashboardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEmonGrafanaDashboardsOutcome(GetEmonGrafanaDashboardsResult(outcome.result()));
	else
		return GetEmonGrafanaDashboardsOutcome(outcome.error());
}

void ElasticsearchClient::getEmonGrafanaDashboardsAsync(const GetEmonGrafanaDashboardsRequest& request, const GetEmonGrafanaDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEmonGrafanaDashboards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetEmonGrafanaDashboardsOutcomeCallable ElasticsearchClient::getEmonGrafanaDashboardsCallable(const GetEmonGrafanaDashboardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEmonGrafanaDashboardsOutcome()>>(
			[this, request]()
			{
			return this->getEmonGrafanaDashboards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetEmonMonitorDataOutcome ElasticsearchClient::getEmonMonitorData(const GetEmonMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEmonMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEmonMonitorDataOutcome(GetEmonMonitorDataResult(outcome.result()));
	else
		return GetEmonMonitorDataOutcome(outcome.error());
}

void ElasticsearchClient::getEmonMonitorDataAsync(const GetEmonMonitorDataRequest& request, const GetEmonMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEmonMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetEmonMonitorDataOutcomeCallable ElasticsearchClient::getEmonMonitorDataCallable(const GetEmonMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEmonMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->getEmonMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetOpenStoreUsageOutcome ElasticsearchClient::getOpenStoreUsage(const GetOpenStoreUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpenStoreUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpenStoreUsageOutcome(GetOpenStoreUsageResult(outcome.result()));
	else
		return GetOpenStoreUsageOutcome(outcome.error());
}

void ElasticsearchClient::getOpenStoreUsageAsync(const GetOpenStoreUsageRequest& request, const GetOpenStoreUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpenStoreUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetOpenStoreUsageOutcomeCallable ElasticsearchClient::getOpenStoreUsageCallable(const GetOpenStoreUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpenStoreUsageOutcome()>>(
			[this, request]()
			{
			return this->getOpenStoreUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetRegionConfigurationOutcome ElasticsearchClient::getRegionConfiguration(const GetRegionConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionConfigurationOutcome(GetRegionConfigurationResult(outcome.result()));
	else
		return GetRegionConfigurationOutcome(outcome.error());
}

void ElasticsearchClient::getRegionConfigurationAsync(const GetRegionConfigurationRequest& request, const GetRegionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetRegionConfigurationOutcomeCallable ElasticsearchClient::getRegionConfigurationCallable(const GetRegionConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getRegionConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetRegionalInstanceConfigOutcome ElasticsearchClient::getRegionalInstanceConfig(const GetRegionalInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionalInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionalInstanceConfigOutcome(GetRegionalInstanceConfigResult(outcome.result()));
	else
		return GetRegionalInstanceConfigOutcome(outcome.error());
}

void ElasticsearchClient::getRegionalInstanceConfigAsync(const GetRegionalInstanceConfigRequest& request, const GetRegionalInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionalInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetRegionalInstanceConfigOutcomeCallable ElasticsearchClient::getRegionalInstanceConfigCallable(const GetRegionalInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionalInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->getRegionalInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetSuggestShrinkableNodesOutcome ElasticsearchClient::getSuggestShrinkableNodes(const GetSuggestShrinkableNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSuggestShrinkableNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSuggestShrinkableNodesOutcome(GetSuggestShrinkableNodesResult(outcome.result()));
	else
		return GetSuggestShrinkableNodesOutcome(outcome.error());
}

void ElasticsearchClient::getSuggestShrinkableNodesAsync(const GetSuggestShrinkableNodesRequest& request, const GetSuggestShrinkableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSuggestShrinkableNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetSuggestShrinkableNodesOutcomeCallable ElasticsearchClient::getSuggestShrinkableNodesCallable(const GetSuggestShrinkableNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSuggestShrinkableNodesOutcome()>>(
			[this, request]()
			{
			return this->getSuggestShrinkableNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetTransferableNodesOutcome ElasticsearchClient::getTransferableNodes(const GetTransferableNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTransferableNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTransferableNodesOutcome(GetTransferableNodesResult(outcome.result()));
	else
		return GetTransferableNodesOutcome(outcome.error());
}

void ElasticsearchClient::getTransferableNodesAsync(const GetTransferableNodesRequest& request, const GetTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTransferableNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetTransferableNodesOutcomeCallable ElasticsearchClient::getTransferableNodesCallable(const GetTransferableNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTransferableNodesOutcome()>>(
			[this, request]()
			{
			return this->getTransferableNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InitializeOperationRoleOutcome ElasticsearchClient::initializeOperationRole(const InitializeOperationRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeOperationRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeOperationRoleOutcome(InitializeOperationRoleResult(outcome.result()));
	else
		return InitializeOperationRoleOutcome(outcome.error());
}

void ElasticsearchClient::initializeOperationRoleAsync(const InitializeOperationRoleRequest& request, const InitializeOperationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeOperationRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InitializeOperationRoleOutcomeCallable ElasticsearchClient::initializeOperationRoleCallable(const InitializeOperationRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeOperationRoleOutcome()>>(
			[this, request]()
			{
			return this->initializeOperationRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallAckOperatorOutcome ElasticsearchClient::installAckOperator(const InstallAckOperatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallAckOperatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallAckOperatorOutcome(InstallAckOperatorResult(outcome.result()));
	else
		return InstallAckOperatorOutcome(outcome.error());
}

void ElasticsearchClient::installAckOperatorAsync(const InstallAckOperatorRequest& request, const InstallAckOperatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installAckOperator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallAckOperatorOutcomeCallable ElasticsearchClient::installAckOperatorCallable(const InstallAckOperatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallAckOperatorOutcome()>>(
			[this, request]()
			{
			return this->installAckOperator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallKibanaSystemPluginOutcome ElasticsearchClient::installKibanaSystemPlugin(const InstallKibanaSystemPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallKibanaSystemPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallKibanaSystemPluginOutcome(InstallKibanaSystemPluginResult(outcome.result()));
	else
		return InstallKibanaSystemPluginOutcome(outcome.error());
}

void ElasticsearchClient::installKibanaSystemPluginAsync(const InstallKibanaSystemPluginRequest& request, const InstallKibanaSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installKibanaSystemPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallKibanaSystemPluginOutcomeCallable ElasticsearchClient::installKibanaSystemPluginCallable(const InstallKibanaSystemPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallKibanaSystemPluginOutcome()>>(
			[this, request]()
			{
			return this->installKibanaSystemPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallLogstashSystemPluginOutcome ElasticsearchClient::installLogstashSystemPlugin(const InstallLogstashSystemPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallLogstashSystemPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallLogstashSystemPluginOutcome(InstallLogstashSystemPluginResult(outcome.result()));
	else
		return InstallLogstashSystemPluginOutcome(outcome.error());
}

void ElasticsearchClient::installLogstashSystemPluginAsync(const InstallLogstashSystemPluginRequest& request, const InstallLogstashSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installLogstashSystemPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallLogstashSystemPluginOutcomeCallable ElasticsearchClient::installLogstashSystemPluginCallable(const InstallLogstashSystemPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallLogstashSystemPluginOutcome()>>(
			[this, request]()
			{
			return this->installLogstashSystemPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallSystemPluginOutcome ElasticsearchClient::installSystemPlugin(const InstallSystemPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallSystemPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallSystemPluginOutcome(InstallSystemPluginResult(outcome.result()));
	else
		return InstallSystemPluginOutcome(outcome.error());
}

void ElasticsearchClient::installSystemPluginAsync(const InstallSystemPluginRequest& request, const InstallSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installSystemPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallSystemPluginOutcomeCallable ElasticsearchClient::installSystemPluginCallable(const InstallSystemPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallSystemPluginOutcome()>>(
			[this, request]()
			{
			return this->installSystemPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallUserPluginsOutcome ElasticsearchClient::installUserPlugins(const InstallUserPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallUserPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallUserPluginsOutcome(InstallUserPluginsResult(outcome.result()));
	else
		return InstallUserPluginsOutcome(outcome.error());
}

void ElasticsearchClient::installUserPluginsAsync(const InstallUserPluginsRequest& request, const InstallUserPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installUserPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallUserPluginsOutcomeCallable ElasticsearchClient::installUserPluginsCallable(const InstallUserPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallUserPluginsOutcome()>>(
			[this, request]()
			{
			return this->installUserPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InterruptElasticsearchTaskOutcome ElasticsearchClient::interruptElasticsearchTask(const InterruptElasticsearchTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InterruptElasticsearchTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InterruptElasticsearchTaskOutcome(InterruptElasticsearchTaskResult(outcome.result()));
	else
		return InterruptElasticsearchTaskOutcome(outcome.error());
}

void ElasticsearchClient::interruptElasticsearchTaskAsync(const InterruptElasticsearchTaskRequest& request, const InterruptElasticsearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, interruptElasticsearchTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InterruptElasticsearchTaskOutcomeCallable ElasticsearchClient::interruptElasticsearchTaskCallable(const InterruptElasticsearchTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InterruptElasticsearchTaskOutcome()>>(
			[this, request]()
			{
			return this->interruptElasticsearchTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InterruptLogstashTaskOutcome ElasticsearchClient::interruptLogstashTask(const InterruptLogstashTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InterruptLogstashTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InterruptLogstashTaskOutcome(InterruptLogstashTaskResult(outcome.result()));
	else
		return InterruptLogstashTaskOutcome(outcome.error());
}

void ElasticsearchClient::interruptLogstashTaskAsync(const InterruptLogstashTaskRequest& request, const InterruptLogstashTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, interruptLogstashTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InterruptLogstashTaskOutcomeCallable ElasticsearchClient::interruptLogstashTaskCallable(const InterruptLogstashTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InterruptLogstashTaskOutcome()>>(
			[this, request]()
			{
			return this->interruptLogstashTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListAckClustersOutcome ElasticsearchClient::listAckClusters(const ListAckClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAckClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAckClustersOutcome(ListAckClustersResult(outcome.result()));
	else
		return ListAckClustersOutcome(outcome.error());
}

void ElasticsearchClient::listAckClustersAsync(const ListAckClustersRequest& request, const ListAckClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAckClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListAckClustersOutcomeCallable ElasticsearchClient::listAckClustersCallable(const ListAckClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAckClustersOutcome()>>(
			[this, request]()
			{
			return this->listAckClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListAckNamespacesOutcome ElasticsearchClient::listAckNamespaces(const ListAckNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAckNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAckNamespacesOutcome(ListAckNamespacesResult(outcome.result()));
	else
		return ListAckNamespacesOutcome(outcome.error());
}

void ElasticsearchClient::listAckNamespacesAsync(const ListAckNamespacesRequest& request, const ListAckNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAckNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListAckNamespacesOutcomeCallable ElasticsearchClient::listAckNamespacesCallable(const ListAckNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAckNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listAckNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListActionRecordsOutcome ElasticsearchClient::listActionRecords(const ListActionRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActionRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActionRecordsOutcome(ListActionRecordsResult(outcome.result()));
	else
		return ListActionRecordsOutcome(outcome.error());
}

void ElasticsearchClient::listActionRecordsAsync(const ListActionRecordsRequest& request, const ListActionRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActionRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListActionRecordsOutcomeCallable ElasticsearchClient::listActionRecordsCallable(const ListActionRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActionRecordsOutcome()>>(
			[this, request]()
			{
			return this->listActionRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListAllNodeOutcome ElasticsearchClient::listAllNode(const ListAllNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllNodeOutcome(ListAllNodeResult(outcome.result()));
	else
		return ListAllNodeOutcome(outcome.error());
}

void ElasticsearchClient::listAllNodeAsync(const ListAllNodeRequest& request, const ListAllNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListAllNodeOutcomeCallable ElasticsearchClient::listAllNodeCallable(const ListAllNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllNodeOutcome()>>(
			[this, request]()
			{
			return this->listAllNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListAlternativeSnapshotReposOutcome ElasticsearchClient::listAlternativeSnapshotRepos(const ListAlternativeSnapshotReposRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlternativeSnapshotReposOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlternativeSnapshotReposOutcome(ListAlternativeSnapshotReposResult(outcome.result()));
	else
		return ListAlternativeSnapshotReposOutcome(outcome.error());
}

void ElasticsearchClient::listAlternativeSnapshotReposAsync(const ListAlternativeSnapshotReposRequest& request, const ListAlternativeSnapshotReposAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlternativeSnapshotRepos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListAlternativeSnapshotReposOutcomeCallable ElasticsearchClient::listAlternativeSnapshotReposCallable(const ListAlternativeSnapshotReposRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlternativeSnapshotReposOutcome()>>(
			[this, request]()
			{
			return this->listAlternativeSnapshotRepos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListApmOutcome ElasticsearchClient::listApm(const ListApmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApmOutcome(ListApmResult(outcome.result()));
	else
		return ListApmOutcome(outcome.error());
}

void ElasticsearchClient::listApmAsync(const ListApmRequest& request, const ListApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListApmOutcomeCallable ElasticsearchClient::listApmCallable(const ListApmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApmOutcome()>>(
			[this, request]()
			{
			return this->listApm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListAvailableEsInstanceIdsOutcome ElasticsearchClient::listAvailableEsInstanceIds(const ListAvailableEsInstanceIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAvailableEsInstanceIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAvailableEsInstanceIdsOutcome(ListAvailableEsInstanceIdsResult(outcome.result()));
	else
		return ListAvailableEsInstanceIdsOutcome(outcome.error());
}

void ElasticsearchClient::listAvailableEsInstanceIdsAsync(const ListAvailableEsInstanceIdsRequest& request, const ListAvailableEsInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAvailableEsInstanceIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListAvailableEsInstanceIdsOutcomeCallable ElasticsearchClient::listAvailableEsInstanceIdsCallable(const ListAvailableEsInstanceIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAvailableEsInstanceIdsOutcome()>>(
			[this, request]()
			{
			return this->listAvailableEsInstanceIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListCollectorsOutcome ElasticsearchClient::listCollectors(const ListCollectorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCollectorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCollectorsOutcome(ListCollectorsResult(outcome.result()));
	else
		return ListCollectorsOutcome(outcome.error());
}

void ElasticsearchClient::listCollectorsAsync(const ListCollectorsRequest& request, const ListCollectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCollectors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListCollectorsOutcomeCallable ElasticsearchClient::listCollectorsCallable(const ListCollectorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCollectorsOutcome()>>(
			[this, request]()
			{
			return this->listCollectors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListComponentIndicesOutcome ElasticsearchClient::listComponentIndices(const ListComponentIndicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListComponentIndicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListComponentIndicesOutcome(ListComponentIndicesResult(outcome.result()));
	else
		return ListComponentIndicesOutcome(outcome.error());
}

void ElasticsearchClient::listComponentIndicesAsync(const ListComponentIndicesRequest& request, const ListComponentIndicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listComponentIndices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListComponentIndicesOutcomeCallable ElasticsearchClient::listComponentIndicesCallable(const ListComponentIndicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListComponentIndicesOutcome()>>(
			[this, request]()
			{
			return this->listComponentIndices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListConnectedClustersOutcome ElasticsearchClient::listConnectedClusters(const ListConnectedClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConnectedClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConnectedClustersOutcome(ListConnectedClustersResult(outcome.result()));
	else
		return ListConnectedClustersOutcome(outcome.error());
}

void ElasticsearchClient::listConnectedClustersAsync(const ListConnectedClustersRequest& request, const ListConnectedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConnectedClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListConnectedClustersOutcomeCallable ElasticsearchClient::listConnectedClustersCallable(const ListConnectedClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConnectedClustersOutcome()>>(
			[this, request]()
			{
			return this->listConnectedClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDataStreamsOutcome ElasticsearchClient::listDataStreams(const ListDataStreamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataStreamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataStreamsOutcome(ListDataStreamsResult(outcome.result()));
	else
		return ListDataStreamsOutcome(outcome.error());
}

void ElasticsearchClient::listDataStreamsAsync(const ListDataStreamsRequest& request, const ListDataStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataStreams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDataStreamsOutcomeCallable ElasticsearchClient::listDataStreamsCallable(const ListDataStreamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataStreamsOutcome()>>(
			[this, request]()
			{
			return this->listDataStreams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDataTasksOutcome ElasticsearchClient::listDataTasks(const ListDataTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataTasksOutcome(ListDataTasksResult(outcome.result()));
	else
		return ListDataTasksOutcome(outcome.error());
}

void ElasticsearchClient::listDataTasksAsync(const ListDataTasksRequest& request, const ListDataTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDataTasksOutcomeCallable ElasticsearchClient::listDataTasksCallable(const ListDataTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataTasksOutcome()>>(
			[this, request]()
			{
			return this->listDataTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDefaultCollectorConfigurationsOutcome ElasticsearchClient::listDefaultCollectorConfigurations(const ListDefaultCollectorConfigurationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDefaultCollectorConfigurationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDefaultCollectorConfigurationsOutcome(ListDefaultCollectorConfigurationsResult(outcome.result()));
	else
		return ListDefaultCollectorConfigurationsOutcome(outcome.error());
}

void ElasticsearchClient::listDefaultCollectorConfigurationsAsync(const ListDefaultCollectorConfigurationsRequest& request, const ListDefaultCollectorConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDefaultCollectorConfigurations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDefaultCollectorConfigurationsOutcomeCallable ElasticsearchClient::listDefaultCollectorConfigurationsCallable(const ListDefaultCollectorConfigurationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDefaultCollectorConfigurationsOutcome()>>(
			[this, request]()
			{
			return this->listDefaultCollectorConfigurations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDeprecatedTemplatesOutcome ElasticsearchClient::listDeprecatedTemplates(const ListDeprecatedTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeprecatedTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeprecatedTemplatesOutcome(ListDeprecatedTemplatesResult(outcome.result()));
	else
		return ListDeprecatedTemplatesOutcome(outcome.error());
}

void ElasticsearchClient::listDeprecatedTemplatesAsync(const ListDeprecatedTemplatesRequest& request, const ListDeprecatedTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeprecatedTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDeprecatedTemplatesOutcomeCallable ElasticsearchClient::listDeprecatedTemplatesCallable(const ListDeprecatedTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeprecatedTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listDeprecatedTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDiagnoseIndicesOutcome ElasticsearchClient::listDiagnoseIndices(const ListDiagnoseIndicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiagnoseIndicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiagnoseIndicesOutcome(ListDiagnoseIndicesResult(outcome.result()));
	else
		return ListDiagnoseIndicesOutcome(outcome.error());
}

void ElasticsearchClient::listDiagnoseIndicesAsync(const ListDiagnoseIndicesRequest& request, const ListDiagnoseIndicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiagnoseIndices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDiagnoseIndicesOutcomeCallable ElasticsearchClient::listDiagnoseIndicesCallable(const ListDiagnoseIndicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiagnoseIndicesOutcome()>>(
			[this, request]()
			{
			return this->listDiagnoseIndices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDiagnoseReportOutcome ElasticsearchClient::listDiagnoseReport(const ListDiagnoseReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiagnoseReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiagnoseReportOutcome(ListDiagnoseReportResult(outcome.result()));
	else
		return ListDiagnoseReportOutcome(outcome.error());
}

void ElasticsearchClient::listDiagnoseReportAsync(const ListDiagnoseReportRequest& request, const ListDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiagnoseReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDiagnoseReportOutcomeCallable ElasticsearchClient::listDiagnoseReportCallable(const ListDiagnoseReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiagnoseReportOutcome()>>(
			[this, request]()
			{
			return this->listDiagnoseReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDiagnoseReportIdsOutcome ElasticsearchClient::listDiagnoseReportIds(const ListDiagnoseReportIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiagnoseReportIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiagnoseReportIdsOutcome(ListDiagnoseReportIdsResult(outcome.result()));
	else
		return ListDiagnoseReportIdsOutcome(outcome.error());
}

void ElasticsearchClient::listDiagnoseReportIdsAsync(const ListDiagnoseReportIdsRequest& request, const ListDiagnoseReportIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiagnoseReportIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDiagnoseReportIdsOutcomeCallable ElasticsearchClient::listDiagnoseReportIdsCallable(const ListDiagnoseReportIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiagnoseReportIdsOutcome()>>(
			[this, request]()
			{
			return this->listDiagnoseReportIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDiagnosisItemsOutcome ElasticsearchClient::listDiagnosisItems(const ListDiagnosisItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDiagnosisItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDiagnosisItemsOutcome(ListDiagnosisItemsResult(outcome.result()));
	else
		return ListDiagnosisItemsOutcome(outcome.error());
}

void ElasticsearchClient::listDiagnosisItemsAsync(const ListDiagnosisItemsRequest& request, const ListDiagnosisItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDiagnosisItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDiagnosisItemsOutcomeCallable ElasticsearchClient::listDiagnosisItemsCallable(const ListDiagnosisItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDiagnosisItemsOutcome()>>(
			[this, request]()
			{
			return this->listDiagnosisItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDictInformationOutcome ElasticsearchClient::listDictInformation(const ListDictInformationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDictInformationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDictInformationOutcome(ListDictInformationResult(outcome.result()));
	else
		return ListDictInformationOutcome(outcome.error());
}

void ElasticsearchClient::listDictInformationAsync(const ListDictInformationRequest& request, const ListDictInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDictInformation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDictInformationOutcomeCallable ElasticsearchClient::listDictInformationCallable(const ListDictInformationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDictInformationOutcome()>>(
			[this, request]()
			{
			return this->listDictInformation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListDictsOutcome ElasticsearchClient::listDicts(const ListDictsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDictsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDictsOutcome(ListDictsResult(outcome.result()));
	else
		return ListDictsOutcome(outcome.error());
}

void ElasticsearchClient::listDictsAsync(const ListDictsRequest& request, const ListDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDicts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListDictsOutcomeCallable ElasticsearchClient::listDictsCallable(const ListDictsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDictsOutcome()>>(
			[this, request]()
			{
			return this->listDicts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListEcsInstancesOutcome ElasticsearchClient::listEcsInstances(const ListEcsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEcsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEcsInstancesOutcome(ListEcsInstancesResult(outcome.result()));
	else
		return ListEcsInstancesOutcome(outcome.error());
}

void ElasticsearchClient::listEcsInstancesAsync(const ListEcsInstancesRequest& request, const ListEcsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEcsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListEcsInstancesOutcomeCallable ElasticsearchClient::listEcsInstancesCallable(const ListEcsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEcsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listEcsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListExtendfilesOutcome ElasticsearchClient::listExtendfiles(const ListExtendfilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExtendfilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExtendfilesOutcome(ListExtendfilesResult(outcome.result()));
	else
		return ListExtendfilesOutcome(outcome.error());
}

void ElasticsearchClient::listExtendfilesAsync(const ListExtendfilesRequest& request, const ListExtendfilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExtendfiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListExtendfilesOutcomeCallable ElasticsearchClient::listExtendfilesCallable(const ListExtendfilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExtendfilesOutcome()>>(
			[this, request]()
			{
			return this->listExtendfiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListILMPoliciesOutcome ElasticsearchClient::listILMPolicies(const ListILMPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListILMPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListILMPoliciesOutcome(ListILMPoliciesResult(outcome.result()));
	else
		return ListILMPoliciesOutcome(outcome.error());
}

void ElasticsearchClient::listILMPoliciesAsync(const ListILMPoliciesRequest& request, const ListILMPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listILMPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListILMPoliciesOutcomeCallable ElasticsearchClient::listILMPoliciesCallable(const ListILMPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListILMPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listILMPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListIndexTemplatesOutcome ElasticsearchClient::listIndexTemplates(const ListIndexTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIndexTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIndexTemplatesOutcome(ListIndexTemplatesResult(outcome.result()));
	else
		return ListIndexTemplatesOutcome(outcome.error());
}

void ElasticsearchClient::listIndexTemplatesAsync(const ListIndexTemplatesRequest& request, const ListIndexTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIndexTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListIndexTemplatesOutcomeCallable ElasticsearchClient::listIndexTemplatesCallable(const ListIndexTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIndexTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listIndexTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListInstanceOutcome ElasticsearchClient::listInstance(const ListInstanceRequest &request) const
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

void ElasticsearchClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListInstanceOutcomeCallable ElasticsearchClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListInstanceHistoryEventsOutcome ElasticsearchClient::listInstanceHistoryEvents(const ListInstanceHistoryEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceHistoryEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceHistoryEventsOutcome(ListInstanceHistoryEventsResult(outcome.result()));
	else
		return ListInstanceHistoryEventsOutcome(outcome.error());
}

void ElasticsearchClient::listInstanceHistoryEventsAsync(const ListInstanceHistoryEventsRequest& request, const ListInstanceHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceHistoryEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListInstanceHistoryEventsOutcomeCallable ElasticsearchClient::listInstanceHistoryEventsCallable(const ListInstanceHistoryEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceHistoryEventsOutcome()>>(
			[this, request]()
			{
			return this->listInstanceHistoryEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListInstanceIndicesOutcome ElasticsearchClient::listInstanceIndices(const ListInstanceIndicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceIndicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceIndicesOutcome(ListInstanceIndicesResult(outcome.result()));
	else
		return ListInstanceIndicesOutcome(outcome.error());
}

void ElasticsearchClient::listInstanceIndicesAsync(const ListInstanceIndicesRequest& request, const ListInstanceIndicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceIndices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListInstanceIndicesOutcomeCallable ElasticsearchClient::listInstanceIndicesCallable(const ListInstanceIndicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceIndicesOutcome()>>(
			[this, request]()
			{
			return this->listInstanceIndices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListKibanaPluginsOutcome ElasticsearchClient::listKibanaPlugins(const ListKibanaPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKibanaPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKibanaPluginsOutcome(ListKibanaPluginsResult(outcome.result()));
	else
		return ListKibanaPluginsOutcome(outcome.error());
}

void ElasticsearchClient::listKibanaPluginsAsync(const ListKibanaPluginsRequest& request, const ListKibanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKibanaPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListKibanaPluginsOutcomeCallable ElasticsearchClient::listKibanaPluginsCallable(const ListKibanaPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKibanaPluginsOutcome()>>(
			[this, request]()
			{
			return this->listKibanaPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListKibanaPvlNetworkOutcome ElasticsearchClient::listKibanaPvlNetwork(const ListKibanaPvlNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKibanaPvlNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKibanaPvlNetworkOutcome(ListKibanaPvlNetworkResult(outcome.result()));
	else
		return ListKibanaPvlNetworkOutcome(outcome.error());
}

void ElasticsearchClient::listKibanaPvlNetworkAsync(const ListKibanaPvlNetworkRequest& request, const ListKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKibanaPvlNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListKibanaPvlNetworkOutcomeCallable ElasticsearchClient::listKibanaPvlNetworkCallable(const ListKibanaPvlNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKibanaPvlNetworkOutcome()>>(
			[this, request]()
			{
			return this->listKibanaPvlNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListLogstashOutcome ElasticsearchClient::listLogstash(const ListLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogstashOutcome(ListLogstashResult(outcome.result()));
	else
		return ListLogstashOutcome(outcome.error());
}

void ElasticsearchClient::listLogstashAsync(const ListLogstashRequest& request, const ListLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListLogstashOutcomeCallable ElasticsearchClient::listLogstashCallable(const ListLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogstashOutcome()>>(
			[this, request]()
			{
			return this->listLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListLogstashLogOutcome ElasticsearchClient::listLogstashLog(const ListLogstashLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogstashLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogstashLogOutcome(ListLogstashLogResult(outcome.result()));
	else
		return ListLogstashLogOutcome(outcome.error());
}

void ElasticsearchClient::listLogstashLogAsync(const ListLogstashLogRequest& request, const ListLogstashLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogstashLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListLogstashLogOutcomeCallable ElasticsearchClient::listLogstashLogCallable(const ListLogstashLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogstashLogOutcome()>>(
			[this, request]()
			{
			return this->listLogstashLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListLogstashPluginsOutcome ElasticsearchClient::listLogstashPlugins(const ListLogstashPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLogstashPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLogstashPluginsOutcome(ListLogstashPluginsResult(outcome.result()));
	else
		return ListLogstashPluginsOutcome(outcome.error());
}

void ElasticsearchClient::listLogstashPluginsAsync(const ListLogstashPluginsRequest& request, const ListLogstashPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLogstashPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListLogstashPluginsOutcomeCallable ElasticsearchClient::listLogstashPluginsCallable(const ListLogstashPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLogstashPluginsOutcome()>>(
			[this, request]()
			{
			return this->listLogstashPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListNodesOutcome ElasticsearchClient::listNodes(const ListNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesOutcome(ListNodesResult(outcome.result()));
	else
		return ListNodesOutcome(outcome.error());
}

void ElasticsearchClient::listNodesAsync(const ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListNodesOutcomeCallable ElasticsearchClient::listNodesCallable(const ListNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesOutcome()>>(
			[this, request]()
			{
			return this->listNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListPipelineOutcome ElasticsearchClient::listPipeline(const ListPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineOutcome(ListPipelineResult(outcome.result()));
	else
		return ListPipelineOutcome(outcome.error());
}

void ElasticsearchClient::listPipelineAsync(const ListPipelineRequest& request, const ListPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListPipelineOutcomeCallable ElasticsearchClient::listPipelineCallable(const ListPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineOutcome()>>(
			[this, request]()
			{
			return this->listPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListPipelineIdsOutcome ElasticsearchClient::listPipelineIds(const ListPipelineIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineIdsOutcome(ListPipelineIdsResult(outcome.result()));
	else
		return ListPipelineIdsOutcome(outcome.error());
}

void ElasticsearchClient::listPipelineIdsAsync(const ListPipelineIdsRequest& request, const ListPipelineIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListPipelineIdsOutcomeCallable ElasticsearchClient::listPipelineIdsCallable(const ListPipelineIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineIdsOutcome()>>(
			[this, request]()
			{
			return this->listPipelineIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListPluginsOutcome ElasticsearchClient::listPlugins(const ListPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPluginsOutcome(ListPluginsResult(outcome.result()));
	else
		return ListPluginsOutcome(outcome.error());
}

void ElasticsearchClient::listPluginsAsync(const ListPluginsRequest& request, const ListPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListPluginsOutcomeCallable ElasticsearchClient::listPluginsCallable(const ListPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPluginsOutcome()>>(
			[this, request]()
			{
			return this->listPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListSearchLogOutcome ElasticsearchClient::listSearchLog(const ListSearchLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSearchLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSearchLogOutcome(ListSearchLogResult(outcome.result()));
	else
		return ListSearchLogOutcome(outcome.error());
}

void ElasticsearchClient::listSearchLogAsync(const ListSearchLogRequest& request, const ListSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSearchLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListSearchLogOutcomeCallable ElasticsearchClient::listSearchLogCallable(const ListSearchLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSearchLogOutcome()>>(
			[this, request]()
			{
			return this->listSearchLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListShardRecoveriesOutcome ElasticsearchClient::listShardRecoveries(const ListShardRecoveriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListShardRecoveriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListShardRecoveriesOutcome(ListShardRecoveriesResult(outcome.result()));
	else
		return ListShardRecoveriesOutcome(outcome.error());
}

void ElasticsearchClient::listShardRecoveriesAsync(const ListShardRecoveriesRequest& request, const ListShardRecoveriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listShardRecoveries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListShardRecoveriesOutcomeCallable ElasticsearchClient::listShardRecoveriesCallable(const ListShardRecoveriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListShardRecoveriesOutcome()>>(
			[this, request]()
			{
			return this->listShardRecoveries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListSnapshotReposByInstanceIdOutcome ElasticsearchClient::listSnapshotReposByInstanceId(const ListSnapshotReposByInstanceIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSnapshotReposByInstanceIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSnapshotReposByInstanceIdOutcome(ListSnapshotReposByInstanceIdResult(outcome.result()));
	else
		return ListSnapshotReposByInstanceIdOutcome(outcome.error());
}

void ElasticsearchClient::listSnapshotReposByInstanceIdAsync(const ListSnapshotReposByInstanceIdRequest& request, const ListSnapshotReposByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSnapshotReposByInstanceId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListSnapshotReposByInstanceIdOutcomeCallable ElasticsearchClient::listSnapshotReposByInstanceIdCallable(const ListSnapshotReposByInstanceIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSnapshotReposByInstanceIdOutcome()>>(
			[this, request]()
			{
			return this->listSnapshotReposByInstanceId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListTagResourcesOutcome ElasticsearchClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void ElasticsearchClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListTagResourcesOutcomeCallable ElasticsearchClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListTagsOutcome ElasticsearchClient::listTags(const ListTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsOutcome(ListTagsResult(outcome.result()));
	else
		return ListTagsOutcome(outcome.error());
}

void ElasticsearchClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListTagsOutcomeCallable ElasticsearchClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListVpcEndpointsOutcome ElasticsearchClient::listVpcEndpoints(const ListVpcEndpointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVpcEndpointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVpcEndpointsOutcome(ListVpcEndpointsResult(outcome.result()));
	else
		return ListVpcEndpointsOutcome(outcome.error());
}

void ElasticsearchClient::listVpcEndpointsAsync(const ListVpcEndpointsRequest& request, const ListVpcEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVpcEndpoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListVpcEndpointsOutcomeCallable ElasticsearchClient::listVpcEndpointsCallable(const ListVpcEndpointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVpcEndpointsOutcome()>>(
			[this, request]()
			{
			return this->listVpcEndpoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::MigrateToOtherZoneOutcome ElasticsearchClient::migrateToOtherZone(const MigrateToOtherZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateToOtherZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateToOtherZoneOutcome(MigrateToOtherZoneResult(outcome.result()));
	else
		return MigrateToOtherZoneOutcome(outcome.error());
}

void ElasticsearchClient::migrateToOtherZoneAsync(const MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateToOtherZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::MigrateToOtherZoneOutcomeCallable ElasticsearchClient::migrateToOtherZoneCallable(const MigrateToOtherZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateToOtherZoneOutcome()>>(
			[this, request]()
			{
			return this->migrateToOtherZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ModifyDeployMachineOutcome ElasticsearchClient::modifyDeployMachine(const ModifyDeployMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeployMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeployMachineOutcome(ModifyDeployMachineResult(outcome.result()));
	else
		return ModifyDeployMachineOutcome(outcome.error());
}

void ElasticsearchClient::modifyDeployMachineAsync(const ModifyDeployMachineRequest& request, const ModifyDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeployMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ModifyDeployMachineOutcomeCallable ElasticsearchClient::modifyDeployMachineCallable(const ModifyDeployMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeployMachineOutcome()>>(
			[this, request]()
			{
			return this->modifyDeployMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ModifyElastictaskOutcome ElasticsearchClient::modifyElastictask(const ModifyElastictaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyElastictaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyElastictaskOutcome(ModifyElastictaskResult(outcome.result()));
	else
		return ModifyElastictaskOutcome(outcome.error());
}

void ElasticsearchClient::modifyElastictaskAsync(const ModifyElastictaskRequest& request, const ModifyElastictaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyElastictask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ModifyElastictaskOutcomeCallable ElasticsearchClient::modifyElastictaskCallable(const ModifyElastictaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyElastictaskOutcome()>>(
			[this, request]()
			{
			return this->modifyElastictask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ModifyInstanceMaintainTimeOutcome ElasticsearchClient::modifyInstanceMaintainTime(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceMaintainTimeOutcome(ModifyInstanceMaintainTimeResult(outcome.result()));
	else
		return ModifyInstanceMaintainTimeOutcome(outcome.error());
}

void ElasticsearchClient::modifyInstanceMaintainTimeAsync(const ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceMaintainTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ModifyInstanceMaintainTimeOutcomeCallable ElasticsearchClient::modifyInstanceMaintainTimeCallable(const ModifyInstanceMaintainTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceMaintainTimeOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceMaintainTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ModifyWhiteIpsOutcome ElasticsearchClient::modifyWhiteIps(const ModifyWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWhiteIpsOutcome(ModifyWhiteIpsResult(outcome.result()));
	else
		return ModifyWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::modifyWhiteIpsAsync(const ModifyWhiteIpsRequest& request, const ModifyWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ModifyWhiteIpsOutcomeCallable ElasticsearchClient::modifyWhiteIpsCallable(const ModifyWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->modifyWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::MoveResourceGroupOutcome ElasticsearchClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourceGroupOutcome(MoveResourceGroupResult(outcome.result()));
	else
		return MoveResourceGroupOutcome(outcome.error());
}

void ElasticsearchClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::MoveResourceGroupOutcomeCallable ElasticsearchClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::OpenDiagnosisOutcome ElasticsearchClient::openDiagnosis(const OpenDiagnosisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenDiagnosisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenDiagnosisOutcome(OpenDiagnosisResult(outcome.result()));
	else
		return OpenDiagnosisOutcome(outcome.error());
}

void ElasticsearchClient::openDiagnosisAsync(const OpenDiagnosisRequest& request, const OpenDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openDiagnosis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::OpenDiagnosisOutcomeCallable ElasticsearchClient::openDiagnosisCallable(const OpenDiagnosisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenDiagnosisOutcome()>>(
			[this, request]()
			{
			return this->openDiagnosis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::OpenHttpsOutcome ElasticsearchClient::openHttps(const OpenHttpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenHttpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenHttpsOutcome(OpenHttpsResult(outcome.result()));
	else
		return OpenHttpsOutcome(outcome.error());
}

void ElasticsearchClient::openHttpsAsync(const OpenHttpsRequest& request, const OpenHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openHttps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::OpenHttpsOutcomeCallable ElasticsearchClient::openHttpsCallable(const OpenHttpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenHttpsOutcome()>>(
			[this, request]()
			{
			return this->openHttps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::PostEmonTryAlarmRuleOutcome ElasticsearchClient::postEmonTryAlarmRule(const PostEmonTryAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PostEmonTryAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PostEmonTryAlarmRuleOutcome(PostEmonTryAlarmRuleResult(outcome.result()));
	else
		return PostEmonTryAlarmRuleOutcome(outcome.error());
}

void ElasticsearchClient::postEmonTryAlarmRuleAsync(const PostEmonTryAlarmRuleRequest& request, const PostEmonTryAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, postEmonTryAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::PostEmonTryAlarmRuleOutcomeCallable ElasticsearchClient::postEmonTryAlarmRuleCallable(const PostEmonTryAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PostEmonTryAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->postEmonTryAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RecommendTemplatesOutcome ElasticsearchClient::recommendTemplates(const RecommendTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecommendTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecommendTemplatesOutcome(RecommendTemplatesResult(outcome.result()));
	else
		return RecommendTemplatesOutcome(outcome.error());
}

void ElasticsearchClient::recommendTemplatesAsync(const RecommendTemplatesRequest& request, const RecommendTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recommendTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RecommendTemplatesOutcomeCallable ElasticsearchClient::recommendTemplatesCallable(const RecommendTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecommendTemplatesOutcome()>>(
			[this, request]()
			{
			return this->recommendTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ReinstallCollectorOutcome ElasticsearchClient::reinstallCollector(const ReinstallCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReinstallCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReinstallCollectorOutcome(ReinstallCollectorResult(outcome.result()));
	else
		return ReinstallCollectorOutcome(outcome.error());
}

void ElasticsearchClient::reinstallCollectorAsync(const ReinstallCollectorRequest& request, const ReinstallCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reinstallCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ReinstallCollectorOutcomeCallable ElasticsearchClient::reinstallCollectorCallable(const ReinstallCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReinstallCollectorOutcome()>>(
			[this, request]()
			{
			return this->reinstallCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RemoveApmOutcome ElasticsearchClient::removeApm(const RemoveApmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveApmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveApmOutcome(RemoveApmResult(outcome.result()));
	else
		return RemoveApmOutcome(outcome.error());
}

void ElasticsearchClient::removeApmAsync(const RemoveApmRequest& request, const RemoveApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeApm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RemoveApmOutcomeCallable ElasticsearchClient::removeApmCallable(const RemoveApmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveApmOutcome()>>(
			[this, request]()
			{
			return this->removeApm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RenewInstanceOutcome ElasticsearchClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void ElasticsearchClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RenewInstanceOutcomeCallable ElasticsearchClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RenewLogstashOutcome ElasticsearchClient::renewLogstash(const RenewLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewLogstashOutcome(RenewLogstashResult(outcome.result()));
	else
		return RenewLogstashOutcome(outcome.error());
}

void ElasticsearchClient::renewLogstashAsync(const RenewLogstashRequest& request, const RenewLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RenewLogstashOutcomeCallable ElasticsearchClient::renewLogstashCallable(const RenewLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewLogstashOutcome()>>(
			[this, request]()
			{
			return this->renewLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RestartCollectorOutcome ElasticsearchClient::restartCollector(const RestartCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartCollectorOutcome(RestartCollectorResult(outcome.result()));
	else
		return RestartCollectorOutcome(outcome.error());
}

void ElasticsearchClient::restartCollectorAsync(const RestartCollectorRequest& request, const RestartCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RestartCollectorOutcomeCallable ElasticsearchClient::restartCollectorCallable(const RestartCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartCollectorOutcome()>>(
			[this, request]()
			{
			return this->restartCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RestartInstanceOutcome ElasticsearchClient::restartInstance(const RestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstanceOutcome(RestartInstanceResult(outcome.result()));
	else
		return RestartInstanceOutcome(outcome.error());
}

void ElasticsearchClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RestartInstanceOutcomeCallable ElasticsearchClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RestartLogstashOutcome ElasticsearchClient::restartLogstash(const RestartLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartLogstashOutcome(RestartLogstashResult(outcome.result()));
	else
		return RestartLogstashOutcome(outcome.error());
}

void ElasticsearchClient::restartLogstashAsync(const RestartLogstashRequest& request, const RestartLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RestartLogstashOutcomeCallable ElasticsearchClient::restartLogstashCallable(const RestartLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartLogstashOutcome()>>(
			[this, request]()
			{
			return this->restartLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ResumeElasticsearchTaskOutcome ElasticsearchClient::resumeElasticsearchTask(const ResumeElasticsearchTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeElasticsearchTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeElasticsearchTaskOutcome(ResumeElasticsearchTaskResult(outcome.result()));
	else
		return ResumeElasticsearchTaskOutcome(outcome.error());
}

void ElasticsearchClient::resumeElasticsearchTaskAsync(const ResumeElasticsearchTaskRequest& request, const ResumeElasticsearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeElasticsearchTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ResumeElasticsearchTaskOutcomeCallable ElasticsearchClient::resumeElasticsearchTaskCallable(const ResumeElasticsearchTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeElasticsearchTaskOutcome()>>(
			[this, request]()
			{
			return this->resumeElasticsearchTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ResumeLogstashTaskOutcome ElasticsearchClient::resumeLogstashTask(const ResumeLogstashTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeLogstashTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeLogstashTaskOutcome(ResumeLogstashTaskResult(outcome.result()));
	else
		return ResumeLogstashTaskOutcome(outcome.error());
}

void ElasticsearchClient::resumeLogstashTaskAsync(const ResumeLogstashTaskRequest& request, const ResumeLogstashTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeLogstashTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ResumeLogstashTaskOutcomeCallable ElasticsearchClient::resumeLogstashTaskCallable(const ResumeLogstashTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeLogstashTaskOutcome()>>(
			[this, request]()
			{
			return this->resumeLogstashTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RolloverDataStreamOutcome ElasticsearchClient::rolloverDataStream(const RolloverDataStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RolloverDataStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RolloverDataStreamOutcome(RolloverDataStreamResult(outcome.result()));
	else
		return RolloverDataStreamOutcome(outcome.error());
}

void ElasticsearchClient::rolloverDataStreamAsync(const RolloverDataStreamRequest& request, const RolloverDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rolloverDataStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RolloverDataStreamOutcomeCallable ElasticsearchClient::rolloverDataStreamCallable(const RolloverDataStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RolloverDataStreamOutcome()>>(
			[this, request]()
			{
			return this->rolloverDataStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RunPipelinesOutcome ElasticsearchClient::runPipelines(const RunPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunPipelinesOutcome(RunPipelinesResult(outcome.result()));
	else
		return RunPipelinesOutcome(outcome.error());
}

void ElasticsearchClient::runPipelinesAsync(const RunPipelinesRequest& request, const RunPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RunPipelinesOutcomeCallable ElasticsearchClient::runPipelinesCallable(const RunPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunPipelinesOutcome()>>(
			[this, request]()
			{
			return this->runPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ShrinkNodeOutcome ElasticsearchClient::shrinkNode(const ShrinkNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShrinkNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShrinkNodeOutcome(ShrinkNodeResult(outcome.result()));
	else
		return ShrinkNodeOutcome(outcome.error());
}

void ElasticsearchClient::shrinkNodeAsync(const ShrinkNodeRequest& request, const ShrinkNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shrinkNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ShrinkNodeOutcomeCallable ElasticsearchClient::shrinkNodeCallable(const ShrinkNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShrinkNodeOutcome()>>(
			[this, request]()
			{
			return this->shrinkNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::StartApmOutcome ElasticsearchClient::startApm(const StartApmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartApmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartApmOutcome(StartApmResult(outcome.result()));
	else
		return StartApmOutcome(outcome.error());
}

void ElasticsearchClient::startApmAsync(const StartApmRequest& request, const StartApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startApm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::StartApmOutcomeCallable ElasticsearchClient::startApmCallable(const StartApmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartApmOutcome()>>(
			[this, request]()
			{
			return this->startApm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::StartCollectorOutcome ElasticsearchClient::startCollector(const StartCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCollectorOutcome(StartCollectorResult(outcome.result()));
	else
		return StartCollectorOutcome(outcome.error());
}

void ElasticsearchClient::startCollectorAsync(const StartCollectorRequest& request, const StartCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::StartCollectorOutcomeCallable ElasticsearchClient::startCollectorCallable(const StartCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCollectorOutcome()>>(
			[this, request]()
			{
			return this->startCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::StopApmOutcome ElasticsearchClient::stopApm(const StopApmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopApmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopApmOutcome(StopApmResult(outcome.result()));
	else
		return StopApmOutcome(outcome.error());
}

void ElasticsearchClient::stopApmAsync(const StopApmRequest& request, const StopApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopApm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::StopApmOutcomeCallable ElasticsearchClient::stopApmCallable(const StopApmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopApmOutcome()>>(
			[this, request]()
			{
			return this->stopApm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::StopCollectorOutcome ElasticsearchClient::stopCollector(const StopCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCollectorOutcome(StopCollectorResult(outcome.result()));
	else
		return StopCollectorOutcome(outcome.error());
}

void ElasticsearchClient::stopCollectorAsync(const StopCollectorRequest& request, const StopCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::StopCollectorOutcomeCallable ElasticsearchClient::stopCollectorCallable(const StopCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCollectorOutcome()>>(
			[this, request]()
			{
			return this->stopCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::StopPipelinesOutcome ElasticsearchClient::stopPipelines(const StopPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopPipelinesOutcome(StopPipelinesResult(outcome.result()));
	else
		return StopPipelinesOutcome(outcome.error());
}

void ElasticsearchClient::stopPipelinesAsync(const StopPipelinesRequest& request, const StopPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::StopPipelinesOutcomeCallable ElasticsearchClient::stopPipelinesCallable(const StopPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopPipelinesOutcome()>>(
			[this, request]()
			{
			return this->stopPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::TagResourcesOutcome ElasticsearchClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void ElasticsearchClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::TagResourcesOutcomeCallable ElasticsearchClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::TransferNodeOutcome ElasticsearchClient::transferNode(const TransferNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferNodeOutcome(TransferNodeResult(outcome.result()));
	else
		return TransferNodeOutcome(outcome.error());
}

void ElasticsearchClient::transferNodeAsync(const TransferNodeRequest& request, const TransferNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::TransferNodeOutcomeCallable ElasticsearchClient::transferNodeCallable(const TransferNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferNodeOutcome()>>(
			[this, request]()
			{
			return this->transferNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::TriggerNetworkOutcome ElasticsearchClient::triggerNetwork(const TriggerNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerNetworkOutcome(TriggerNetworkResult(outcome.result()));
	else
		return TriggerNetworkOutcome(outcome.error());
}

void ElasticsearchClient::triggerNetworkAsync(const TriggerNetworkRequest& request, const TriggerNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::TriggerNetworkOutcomeCallable ElasticsearchClient::triggerNetworkCallable(const TriggerNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerNetworkOutcome()>>(
			[this, request]()
			{
			return this->triggerNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UninstallKibanaPluginOutcome ElasticsearchClient::uninstallKibanaPlugin(const UninstallKibanaPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallKibanaPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallKibanaPluginOutcome(UninstallKibanaPluginResult(outcome.result()));
	else
		return UninstallKibanaPluginOutcome(outcome.error());
}

void ElasticsearchClient::uninstallKibanaPluginAsync(const UninstallKibanaPluginRequest& request, const UninstallKibanaPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallKibanaPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UninstallKibanaPluginOutcomeCallable ElasticsearchClient::uninstallKibanaPluginCallable(const UninstallKibanaPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallKibanaPluginOutcome()>>(
			[this, request]()
			{
			return this->uninstallKibanaPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UninstallLogstashPluginOutcome ElasticsearchClient::uninstallLogstashPlugin(const UninstallLogstashPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallLogstashPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallLogstashPluginOutcome(UninstallLogstashPluginResult(outcome.result()));
	else
		return UninstallLogstashPluginOutcome(outcome.error());
}

void ElasticsearchClient::uninstallLogstashPluginAsync(const UninstallLogstashPluginRequest& request, const UninstallLogstashPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallLogstashPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UninstallLogstashPluginOutcomeCallable ElasticsearchClient::uninstallLogstashPluginCallable(const UninstallLogstashPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallLogstashPluginOutcome()>>(
			[this, request]()
			{
			return this->uninstallLogstashPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UninstallPluginOutcome ElasticsearchClient::uninstallPlugin(const UninstallPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallPluginOutcome(UninstallPluginResult(outcome.result()));
	else
		return UninstallPluginOutcome(outcome.error());
}

void ElasticsearchClient::uninstallPluginAsync(const UninstallPluginRequest& request, const UninstallPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UninstallPluginOutcomeCallable ElasticsearchClient::uninstallPluginCallable(const UninstallPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallPluginOutcome()>>(
			[this, request]()
			{
			return this->uninstallPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UntagResourcesOutcome ElasticsearchClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void ElasticsearchClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UntagResourcesOutcomeCallable ElasticsearchClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateAdminPasswordOutcome ElasticsearchClient::updateAdminPassword(const UpdateAdminPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAdminPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAdminPasswordOutcome(UpdateAdminPasswordResult(outcome.result()));
	else
		return UpdateAdminPasswordOutcome(outcome.error());
}

void ElasticsearchClient::updateAdminPasswordAsync(const UpdateAdminPasswordRequest& request, const UpdateAdminPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAdminPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateAdminPasswordOutcomeCallable ElasticsearchClient::updateAdminPasswordCallable(const UpdateAdminPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAdminPasswordOutcome()>>(
			[this, request]()
			{
			return this->updateAdminPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateAdvancedSettingOutcome ElasticsearchClient::updateAdvancedSetting(const UpdateAdvancedSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAdvancedSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAdvancedSettingOutcome(UpdateAdvancedSettingResult(outcome.result()));
	else
		return UpdateAdvancedSettingOutcome(outcome.error());
}

void ElasticsearchClient::updateAdvancedSettingAsync(const UpdateAdvancedSettingRequest& request, const UpdateAdvancedSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAdvancedSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateAdvancedSettingOutcomeCallable ElasticsearchClient::updateAdvancedSettingCallable(const UpdateAdvancedSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAdvancedSettingOutcome()>>(
			[this, request]()
			{
			return this->updateAdvancedSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateAliwsDictOutcome ElasticsearchClient::updateAliwsDict(const UpdateAliwsDictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAliwsDictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAliwsDictOutcome(UpdateAliwsDictResult(outcome.result()));
	else
		return UpdateAliwsDictOutcome(outcome.error());
}

void ElasticsearchClient::updateAliwsDictAsync(const UpdateAliwsDictRequest& request, const UpdateAliwsDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAliwsDict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateAliwsDictOutcomeCallable ElasticsearchClient::updateAliwsDictCallable(const UpdateAliwsDictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAliwsDictOutcome()>>(
			[this, request]()
			{
			return this->updateAliwsDict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateApmOutcome ElasticsearchClient::updateApm(const UpdateApmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApmOutcome(UpdateApmResult(outcome.result()));
	else
		return UpdateApmOutcome(outcome.error());
}

void ElasticsearchClient::updateApmAsync(const UpdateApmRequest& request, const UpdateApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateApmOutcomeCallable ElasticsearchClient::updateApmCallable(const UpdateApmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApmOutcome()>>(
			[this, request]()
			{
			return this->updateApm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateBlackIpsOutcome ElasticsearchClient::updateBlackIps(const UpdateBlackIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBlackIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBlackIpsOutcome(UpdateBlackIpsResult(outcome.result()));
	else
		return UpdateBlackIpsOutcome(outcome.error());
}

void ElasticsearchClient::updateBlackIpsAsync(const UpdateBlackIpsRequest& request, const UpdateBlackIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBlackIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateBlackIpsOutcomeCallable ElasticsearchClient::updateBlackIpsCallable(const UpdateBlackIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBlackIpsOutcome()>>(
			[this, request]()
			{
			return this->updateBlackIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateCollectorOutcome ElasticsearchClient::updateCollector(const UpdateCollectorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCollectorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCollectorOutcome(UpdateCollectorResult(outcome.result()));
	else
		return UpdateCollectorOutcome(outcome.error());
}

void ElasticsearchClient::updateCollectorAsync(const UpdateCollectorRequest& request, const UpdateCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCollector(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateCollectorOutcomeCallable ElasticsearchClient::updateCollectorCallable(const UpdateCollectorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCollectorOutcome()>>(
			[this, request]()
			{
			return this->updateCollector(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateCollectorNameOutcome ElasticsearchClient::updateCollectorName(const UpdateCollectorNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCollectorNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCollectorNameOutcome(UpdateCollectorNameResult(outcome.result()));
	else
		return UpdateCollectorNameOutcome(outcome.error());
}

void ElasticsearchClient::updateCollectorNameAsync(const UpdateCollectorNameRequest& request, const UpdateCollectorNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCollectorName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateCollectorNameOutcomeCallable ElasticsearchClient::updateCollectorNameCallable(const UpdateCollectorNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCollectorNameOutcome()>>(
			[this, request]()
			{
			return this->updateCollectorName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateComponentIndexOutcome ElasticsearchClient::updateComponentIndex(const UpdateComponentIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateComponentIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateComponentIndexOutcome(UpdateComponentIndexResult(outcome.result()));
	else
		return UpdateComponentIndexOutcome(outcome.error());
}

void ElasticsearchClient::updateComponentIndexAsync(const UpdateComponentIndexRequest& request, const UpdateComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateComponentIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateComponentIndexOutcomeCallable ElasticsearchClient::updateComponentIndexCallable(const UpdateComponentIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateComponentIndexOutcome()>>(
			[this, request]()
			{
			return this->updateComponentIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateDescriptionOutcome ElasticsearchClient::updateDescription(const UpdateDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDescriptionOutcome(UpdateDescriptionResult(outcome.result()));
	else
		return UpdateDescriptionOutcome(outcome.error());
}

void ElasticsearchClient::updateDescriptionAsync(const UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateDescriptionOutcomeCallable ElasticsearchClient::updateDescriptionCallable(const UpdateDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateDiagnosisSettingsOutcome ElasticsearchClient::updateDiagnosisSettings(const UpdateDiagnosisSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDiagnosisSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDiagnosisSettingsOutcome(UpdateDiagnosisSettingsResult(outcome.result()));
	else
		return UpdateDiagnosisSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateDiagnosisSettingsAsync(const UpdateDiagnosisSettingsRequest& request, const UpdateDiagnosisSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDiagnosisSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateDiagnosisSettingsOutcomeCallable ElasticsearchClient::updateDiagnosisSettingsCallable(const UpdateDiagnosisSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDiagnosisSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateDiagnosisSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateDictOutcome ElasticsearchClient::updateDict(const UpdateDictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDictOutcome(UpdateDictResult(outcome.result()));
	else
		return UpdateDictOutcome(outcome.error());
}

void ElasticsearchClient::updateDictAsync(const UpdateDictRequest& request, const UpdateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateDictOutcomeCallable ElasticsearchClient::updateDictCallable(const UpdateDictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDictOutcome()>>(
			[this, request]()
			{
			return this->updateDict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateDynamicSettingsOutcome ElasticsearchClient::updateDynamicSettings(const UpdateDynamicSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDynamicSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDynamicSettingsOutcome(UpdateDynamicSettingsResult(outcome.result()));
	else
		return UpdateDynamicSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateDynamicSettingsAsync(const UpdateDynamicSettingsRequest& request, const UpdateDynamicSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDynamicSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateDynamicSettingsOutcomeCallable ElasticsearchClient::updateDynamicSettingsCallable(const UpdateDynamicSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDynamicSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateDynamicSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateExtendConfigOutcome ElasticsearchClient::updateExtendConfig(const UpdateExtendConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExtendConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExtendConfigOutcome(UpdateExtendConfigResult(outcome.result()));
	else
		return UpdateExtendConfigOutcome(outcome.error());
}

void ElasticsearchClient::updateExtendConfigAsync(const UpdateExtendConfigRequest& request, const UpdateExtendConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExtendConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateExtendConfigOutcomeCallable ElasticsearchClient::updateExtendConfigCallable(const UpdateExtendConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExtendConfigOutcome()>>(
			[this, request]()
			{
			return this->updateExtendConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateExtendfilesOutcome ElasticsearchClient::updateExtendfiles(const UpdateExtendfilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateExtendfilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateExtendfilesOutcome(UpdateExtendfilesResult(outcome.result()));
	else
		return UpdateExtendfilesOutcome(outcome.error());
}

void ElasticsearchClient::updateExtendfilesAsync(const UpdateExtendfilesRequest& request, const UpdateExtendfilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateExtendfiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateExtendfilesOutcomeCallable ElasticsearchClient::updateExtendfilesCallable(const UpdateExtendfilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateExtendfilesOutcome()>>(
			[this, request]()
			{
			return this->updateExtendfiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateHotIkDictsOutcome ElasticsearchClient::updateHotIkDicts(const UpdateHotIkDictsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHotIkDictsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHotIkDictsOutcome(UpdateHotIkDictsResult(outcome.result()));
	else
		return UpdateHotIkDictsOutcome(outcome.error());
}

void ElasticsearchClient::updateHotIkDictsAsync(const UpdateHotIkDictsRequest& request, const UpdateHotIkDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHotIkDicts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateHotIkDictsOutcomeCallable ElasticsearchClient::updateHotIkDictsCallable(const UpdateHotIkDictsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHotIkDictsOutcome()>>(
			[this, request]()
			{
			return this->updateHotIkDicts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateILMPolicyOutcome ElasticsearchClient::updateILMPolicy(const UpdateILMPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateILMPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateILMPolicyOutcome(UpdateILMPolicyResult(outcome.result()));
	else
		return UpdateILMPolicyOutcome(outcome.error());
}

void ElasticsearchClient::updateILMPolicyAsync(const UpdateILMPolicyRequest& request, const UpdateILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateILMPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateILMPolicyOutcomeCallable ElasticsearchClient::updateILMPolicyCallable(const UpdateILMPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateILMPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateILMPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateIndexTemplateOutcome ElasticsearchClient::updateIndexTemplate(const UpdateIndexTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIndexTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIndexTemplateOutcome(UpdateIndexTemplateResult(outcome.result()));
	else
		return UpdateIndexTemplateOutcome(outcome.error());
}

void ElasticsearchClient::updateIndexTemplateAsync(const UpdateIndexTemplateRequest& request, const UpdateIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIndexTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateIndexTemplateOutcomeCallable ElasticsearchClient::updateIndexTemplateCallable(const UpdateIndexTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIndexTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateIndexTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateInstanceOutcome ElasticsearchClient::updateInstance(const UpdateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceOutcome(UpdateInstanceResult(outcome.result()));
	else
		return UpdateInstanceOutcome(outcome.error());
}

void ElasticsearchClient::updateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateInstanceOutcomeCallable ElasticsearchClient::updateInstanceCallable(const UpdateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateInstanceChargeTypeOutcome ElasticsearchClient::updateInstanceChargeType(const UpdateInstanceChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceChargeTypeOutcome(UpdateInstanceChargeTypeResult(outcome.result()));
	else
		return UpdateInstanceChargeTypeOutcome(outcome.error());
}

void ElasticsearchClient::updateInstanceChargeTypeAsync(const UpdateInstanceChargeTypeRequest& request, const UpdateInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateInstanceChargeTypeOutcomeCallable ElasticsearchClient::updateInstanceChargeTypeCallable(const UpdateInstanceChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateInstanceSettingsOutcome ElasticsearchClient::updateInstanceSettings(const UpdateInstanceSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceSettingsOutcome(UpdateInstanceSettingsResult(outcome.result()));
	else
		return UpdateInstanceSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateInstanceSettingsAsync(const UpdateInstanceSettingsRequest& request, const UpdateInstanceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateInstanceSettingsOutcomeCallable ElasticsearchClient::updateInstanceSettingsCallable(const UpdateInstanceSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateKibanaPvlNetworkOutcome ElasticsearchClient::updateKibanaPvlNetwork(const UpdateKibanaPvlNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKibanaPvlNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKibanaPvlNetworkOutcome(UpdateKibanaPvlNetworkResult(outcome.result()));
	else
		return UpdateKibanaPvlNetworkOutcome(outcome.error());
}

void ElasticsearchClient::updateKibanaPvlNetworkAsync(const UpdateKibanaPvlNetworkRequest& request, const UpdateKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKibanaPvlNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateKibanaPvlNetworkOutcomeCallable ElasticsearchClient::updateKibanaPvlNetworkCallable(const UpdateKibanaPvlNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKibanaPvlNetworkOutcome()>>(
			[this, request]()
			{
			return this->updateKibanaPvlNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateKibanaSettingsOutcome ElasticsearchClient::updateKibanaSettings(const UpdateKibanaSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKibanaSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKibanaSettingsOutcome(UpdateKibanaSettingsResult(outcome.result()));
	else
		return UpdateKibanaSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateKibanaSettingsAsync(const UpdateKibanaSettingsRequest& request, const UpdateKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKibanaSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateKibanaSettingsOutcomeCallable ElasticsearchClient::updateKibanaSettingsCallable(const UpdateKibanaSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKibanaSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateKibanaSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateKibanaWhiteIpsOutcome ElasticsearchClient::updateKibanaWhiteIps(const UpdateKibanaWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKibanaWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKibanaWhiteIpsOutcome(UpdateKibanaWhiteIpsResult(outcome.result()));
	else
		return UpdateKibanaWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updateKibanaWhiteIpsAsync(const UpdateKibanaWhiteIpsRequest& request, const UpdateKibanaWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKibanaWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateKibanaWhiteIpsOutcomeCallable ElasticsearchClient::updateKibanaWhiteIpsCallable(const UpdateKibanaWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKibanaWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updateKibanaWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateLogstashOutcome ElasticsearchClient::updateLogstash(const UpdateLogstashRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLogstashOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLogstashOutcome(UpdateLogstashResult(outcome.result()));
	else
		return UpdateLogstashOutcome(outcome.error());
}

void ElasticsearchClient::updateLogstashAsync(const UpdateLogstashRequest& request, const UpdateLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLogstash(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateLogstashOutcomeCallable ElasticsearchClient::updateLogstashCallable(const UpdateLogstashRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLogstashOutcome()>>(
			[this, request]()
			{
			return this->updateLogstash(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateLogstashChargeTypeOutcome ElasticsearchClient::updateLogstashChargeType(const UpdateLogstashChargeTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLogstashChargeTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLogstashChargeTypeOutcome(UpdateLogstashChargeTypeResult(outcome.result()));
	else
		return UpdateLogstashChargeTypeOutcome(outcome.error());
}

void ElasticsearchClient::updateLogstashChargeTypeAsync(const UpdateLogstashChargeTypeRequest& request, const UpdateLogstashChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLogstashChargeType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateLogstashChargeTypeOutcomeCallable ElasticsearchClient::updateLogstashChargeTypeCallable(const UpdateLogstashChargeTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLogstashChargeTypeOutcome()>>(
			[this, request]()
			{
			return this->updateLogstashChargeType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateLogstashDescriptionOutcome ElasticsearchClient::updateLogstashDescription(const UpdateLogstashDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLogstashDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLogstashDescriptionOutcome(UpdateLogstashDescriptionResult(outcome.result()));
	else
		return UpdateLogstashDescriptionOutcome(outcome.error());
}

void ElasticsearchClient::updateLogstashDescriptionAsync(const UpdateLogstashDescriptionRequest& request, const UpdateLogstashDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLogstashDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateLogstashDescriptionOutcomeCallable ElasticsearchClient::updateLogstashDescriptionCallable(const UpdateLogstashDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLogstashDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateLogstashDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateLogstashSettingsOutcome ElasticsearchClient::updateLogstashSettings(const UpdateLogstashSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLogstashSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLogstashSettingsOutcome(UpdateLogstashSettingsResult(outcome.result()));
	else
		return UpdateLogstashSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateLogstashSettingsAsync(const UpdateLogstashSettingsRequest& request, const UpdateLogstashSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLogstashSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateLogstashSettingsOutcomeCallable ElasticsearchClient::updateLogstashSettingsCallable(const UpdateLogstashSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLogstashSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateLogstashSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePipelineManagementConfigOutcome ElasticsearchClient::updatePipelineManagementConfig(const UpdatePipelineManagementConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineManagementConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineManagementConfigOutcome(UpdatePipelineManagementConfigResult(outcome.result()));
	else
		return UpdatePipelineManagementConfigOutcome(outcome.error());
}

void ElasticsearchClient::updatePipelineManagementConfigAsync(const UpdatePipelineManagementConfigRequest& request, const UpdatePipelineManagementConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipelineManagementConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePipelineManagementConfigOutcomeCallable ElasticsearchClient::updatePipelineManagementConfigCallable(const UpdatePipelineManagementConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineManagementConfigOutcome()>>(
			[this, request]()
			{
			return this->updatePipelineManagementConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePipelinesOutcome ElasticsearchClient::updatePipelines(const UpdatePipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelinesOutcome(UpdatePipelinesResult(outcome.result()));
	else
		return UpdatePipelinesOutcome(outcome.error());
}

void ElasticsearchClient::updatePipelinesAsync(const UpdatePipelinesRequest& request, const UpdatePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePipelinesOutcomeCallable ElasticsearchClient::updatePipelinesCallable(const UpdatePipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelinesOutcome()>>(
			[this, request]()
			{
			return this->updatePipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePrivateNetworkWhiteIpsOutcome ElasticsearchClient::updatePrivateNetworkWhiteIps(const UpdatePrivateNetworkWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrivateNetworkWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrivateNetworkWhiteIpsOutcome(UpdatePrivateNetworkWhiteIpsResult(outcome.result()));
	else
		return UpdatePrivateNetworkWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updatePrivateNetworkWhiteIpsAsync(const UpdatePrivateNetworkWhiteIpsRequest& request, const UpdatePrivateNetworkWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrivateNetworkWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePrivateNetworkWhiteIpsOutcomeCallable ElasticsearchClient::updatePrivateNetworkWhiteIpsCallable(const UpdatePrivateNetworkWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrivateNetworkWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updatePrivateNetworkWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePublicNetworkOutcome ElasticsearchClient::updatePublicNetwork(const UpdatePublicNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePublicNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePublicNetworkOutcome(UpdatePublicNetworkResult(outcome.result()));
	else
		return UpdatePublicNetworkOutcome(outcome.error());
}

void ElasticsearchClient::updatePublicNetworkAsync(const UpdatePublicNetworkRequest& request, const UpdatePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePublicNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePublicNetworkOutcomeCallable ElasticsearchClient::updatePublicNetworkCallable(const UpdatePublicNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePublicNetworkOutcome()>>(
			[this, request]()
			{
			return this->updatePublicNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePublicWhiteIpsOutcome ElasticsearchClient::updatePublicWhiteIps(const UpdatePublicWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePublicWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePublicWhiteIpsOutcome(UpdatePublicWhiteIpsResult(outcome.result()));
	else
		return UpdatePublicWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updatePublicWhiteIpsAsync(const UpdatePublicWhiteIpsRequest& request, const UpdatePublicWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePublicWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePublicWhiteIpsOutcomeCallable ElasticsearchClient::updatePublicWhiteIpsCallable(const UpdatePublicWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePublicWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updatePublicWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateReadWritePolicyOutcome ElasticsearchClient::updateReadWritePolicy(const UpdateReadWritePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateReadWritePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateReadWritePolicyOutcome(UpdateReadWritePolicyResult(outcome.result()));
	else
		return UpdateReadWritePolicyOutcome(outcome.error());
}

void ElasticsearchClient::updateReadWritePolicyAsync(const UpdateReadWritePolicyRequest& request, const UpdateReadWritePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateReadWritePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateReadWritePolicyOutcomeCallable ElasticsearchClient::updateReadWritePolicyCallable(const UpdateReadWritePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateReadWritePolicyOutcome()>>(
			[this, request]()
			{
			return this->updateReadWritePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateSnapshotSettingOutcome ElasticsearchClient::updateSnapshotSetting(const UpdateSnapshotSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSnapshotSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSnapshotSettingOutcome(UpdateSnapshotSettingResult(outcome.result()));
	else
		return UpdateSnapshotSettingOutcome(outcome.error());
}

void ElasticsearchClient::updateSnapshotSettingAsync(const UpdateSnapshotSettingRequest& request, const UpdateSnapshotSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSnapshotSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateSnapshotSettingOutcomeCallable ElasticsearchClient::updateSnapshotSettingCallable(const UpdateSnapshotSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSnapshotSettingOutcome()>>(
			[this, request]()
			{
			return this->updateSnapshotSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateSynonymsDictsOutcome ElasticsearchClient::updateSynonymsDicts(const UpdateSynonymsDictsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSynonymsDictsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSynonymsDictsOutcome(UpdateSynonymsDictsResult(outcome.result()));
	else
		return UpdateSynonymsDictsOutcome(outcome.error());
}

void ElasticsearchClient::updateSynonymsDictsAsync(const UpdateSynonymsDictsRequest& request, const UpdateSynonymsDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSynonymsDicts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateSynonymsDictsOutcomeCallable ElasticsearchClient::updateSynonymsDictsCallable(const UpdateSynonymsDictsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSynonymsDictsOutcome()>>(
			[this, request]()
			{
			return this->updateSynonymsDicts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateTemplateOutcome ElasticsearchClient::updateTemplate(const UpdateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTemplateOutcome(UpdateTemplateResult(outcome.result()));
	else
		return UpdateTemplateOutcome(outcome.error());
}

void ElasticsearchClient::updateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateTemplateOutcomeCallable ElasticsearchClient::updateTemplateCallable(const UpdateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateWhiteIpsOutcome ElasticsearchClient::updateWhiteIps(const UpdateWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWhiteIpsOutcome(UpdateWhiteIpsResult(outcome.result()));
	else
		return UpdateWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updateWhiteIpsAsync(const UpdateWhiteIpsRequest& request, const UpdateWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateWhiteIpsOutcomeCallable ElasticsearchClient::updateWhiteIpsCallable(const UpdateWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updateWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateXpackMonitorConfigOutcome ElasticsearchClient::updateXpackMonitorConfig(const UpdateXpackMonitorConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateXpackMonitorConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateXpackMonitorConfigOutcome(UpdateXpackMonitorConfigResult(outcome.result()));
	else
		return UpdateXpackMonitorConfigOutcome(outcome.error());
}

void ElasticsearchClient::updateXpackMonitorConfigAsync(const UpdateXpackMonitorConfigRequest& request, const UpdateXpackMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateXpackMonitorConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateXpackMonitorConfigOutcomeCallable ElasticsearchClient::updateXpackMonitorConfigCallable(const UpdateXpackMonitorConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateXpackMonitorConfigOutcome()>>(
			[this, request]()
			{
			return this->updateXpackMonitorConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpgradeEngineVersionOutcome ElasticsearchClient::upgradeEngineVersion(const UpgradeEngineVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeEngineVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeEngineVersionOutcome(UpgradeEngineVersionResult(outcome.result()));
	else
		return UpgradeEngineVersionOutcome(outcome.error());
}

void ElasticsearchClient::upgradeEngineVersionAsync(const UpgradeEngineVersionRequest& request, const UpgradeEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeEngineVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpgradeEngineVersionOutcomeCallable ElasticsearchClient::upgradeEngineVersionCallable(const UpgradeEngineVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeEngineVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeEngineVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ValidateConnectionOutcome ElasticsearchClient::validateConnection(const ValidateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateConnectionOutcome(ValidateConnectionResult(outcome.result()));
	else
		return ValidateConnectionOutcome(outcome.error());
}

void ElasticsearchClient::validateConnectionAsync(const ValidateConnectionRequest& request, const ValidateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ValidateConnectionOutcomeCallable ElasticsearchClient::validateConnectionCallable(const ValidateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateConnectionOutcome()>>(
			[this, request]()
			{
			return this->validateConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ValidateShrinkNodesOutcome ElasticsearchClient::validateShrinkNodes(const ValidateShrinkNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateShrinkNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateShrinkNodesOutcome(ValidateShrinkNodesResult(outcome.result()));
	else
		return ValidateShrinkNodesOutcome(outcome.error());
}

void ElasticsearchClient::validateShrinkNodesAsync(const ValidateShrinkNodesRequest& request, const ValidateShrinkNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateShrinkNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ValidateShrinkNodesOutcomeCallable ElasticsearchClient::validateShrinkNodesCallable(const ValidateShrinkNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateShrinkNodesOutcome()>>(
			[this, request]()
			{
			return this->validateShrinkNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ValidateSlrPermissionOutcome ElasticsearchClient::validateSlrPermission(const ValidateSlrPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateSlrPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateSlrPermissionOutcome(ValidateSlrPermissionResult(outcome.result()));
	else
		return ValidateSlrPermissionOutcome(outcome.error());
}

void ElasticsearchClient::validateSlrPermissionAsync(const ValidateSlrPermissionRequest& request, const ValidateSlrPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateSlrPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ValidateSlrPermissionOutcomeCallable ElasticsearchClient::validateSlrPermissionCallable(const ValidateSlrPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateSlrPermissionOutcome()>>(
			[this, request]()
			{
			return this->validateSlrPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ValidateTransferableNodesOutcome ElasticsearchClient::validateTransferableNodes(const ValidateTransferableNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateTransferableNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateTransferableNodesOutcome(ValidateTransferableNodesResult(outcome.result()));
	else
		return ValidateTransferableNodesOutcome(outcome.error());
}

void ElasticsearchClient::validateTransferableNodesAsync(const ValidateTransferableNodesRequest& request, const ValidateTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateTransferableNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ValidateTransferableNodesOutcomeCallable ElasticsearchClient::validateTransferableNodesCallable(const ValidateTransferableNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateTransferableNodesOutcome()>>(
			[this, request]()
			{
			return this->validateTransferableNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

