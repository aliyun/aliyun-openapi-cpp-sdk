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

#include <alibabacloud/opensearch/OpenSearchClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

namespace
{
	const std::string SERVICE_NAME = "OpenSearch";
}

OpenSearchClient::OpenSearchClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "opensearch");
}

OpenSearchClient::OpenSearchClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "opensearch");
}

OpenSearchClient::OpenSearchClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "opensearch");
}

OpenSearchClient::~OpenSearchClient()
{}

OpenSearchClient::CompileSortScriptOutcome OpenSearchClient::compileSortScript(const CompileSortScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompileSortScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompileSortScriptOutcome(CompileSortScriptResult(outcome.result()));
	else
		return CompileSortScriptOutcome(outcome.error());
}

void OpenSearchClient::compileSortScriptAsync(const CompileSortScriptRequest& request, const CompileSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, compileSortScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CompileSortScriptOutcomeCallable OpenSearchClient::compileSortScriptCallable(const CompileSortScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompileSortScriptOutcome()>>(
			[this, request]()
			{
			return this->compileSortScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateABTestExperimentOutcome OpenSearchClient::createABTestExperiment(const CreateABTestExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateABTestExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateABTestExperimentOutcome(CreateABTestExperimentResult(outcome.result()));
	else
		return CreateABTestExperimentOutcome(outcome.error());
}

void OpenSearchClient::createABTestExperimentAsync(const CreateABTestExperimentRequest& request, const CreateABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createABTestExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateABTestExperimentOutcomeCallable OpenSearchClient::createABTestExperimentCallable(const CreateABTestExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateABTestExperimentOutcome()>>(
			[this, request]()
			{
			return this->createABTestExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateABTestGroupOutcome OpenSearchClient::createABTestGroup(const CreateABTestGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateABTestGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateABTestGroupOutcome(CreateABTestGroupResult(outcome.result()));
	else
		return CreateABTestGroupOutcome(outcome.error());
}

void OpenSearchClient::createABTestGroupAsync(const CreateABTestGroupRequest& request, const CreateABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createABTestGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateABTestGroupOutcomeCallable OpenSearchClient::createABTestGroupCallable(const CreateABTestGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateABTestGroupOutcome()>>(
			[this, request]()
			{
			return this->createABTestGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateABTestSceneOutcome OpenSearchClient::createABTestScene(const CreateABTestSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateABTestSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateABTestSceneOutcome(CreateABTestSceneResult(outcome.result()));
	else
		return CreateABTestSceneOutcome(outcome.error());
}

void OpenSearchClient::createABTestSceneAsync(const CreateABTestSceneRequest& request, const CreateABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createABTestScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateABTestSceneOutcomeCallable OpenSearchClient::createABTestSceneCallable(const CreateABTestSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateABTestSceneOutcome()>>(
			[this, request]()
			{
			return this->createABTestScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateAppOutcome OpenSearchClient::createApp(const CreateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppOutcome(CreateAppResult(outcome.result()));
	else
		return CreateAppOutcome(outcome.error());
}

void OpenSearchClient::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateAppOutcomeCallable OpenSearchClient::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateAppGroupOutcome OpenSearchClient::createAppGroup(const CreateAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppGroupOutcome(CreateAppGroupResult(outcome.result()));
	else
		return CreateAppGroupOutcome(outcome.error());
}

void OpenSearchClient::createAppGroupAsync(const CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateAppGroupOutcomeCallable OpenSearchClient::createAppGroupCallable(const CreateAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppGroupOutcome()>>(
			[this, request]()
			{
			return this->createAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateDataCollectionOutcome OpenSearchClient::createDataCollection(const CreateDataCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataCollectionOutcome(CreateDataCollectionResult(outcome.result()));
	else
		return CreateDataCollectionOutcome(outcome.error());
}

void OpenSearchClient::createDataCollectionAsync(const CreateDataCollectionRequest& request, const CreateDataCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateDataCollectionOutcomeCallable OpenSearchClient::createDataCollectionCallable(const CreateDataCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataCollectionOutcome()>>(
			[this, request]()
			{
			return this->createDataCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateFirstRankOutcome OpenSearchClient::createFirstRank(const CreateFirstRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFirstRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFirstRankOutcome(CreateFirstRankResult(outcome.result()));
	else
		return CreateFirstRankOutcome(outcome.error());
}

void OpenSearchClient::createFirstRankAsync(const CreateFirstRankRequest& request, const CreateFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFirstRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateFirstRankOutcomeCallable OpenSearchClient::createFirstRankCallable(const CreateFirstRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFirstRankOutcome()>>(
			[this, request]()
			{
			return this->createFirstRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateInterventionDictionaryOutcome OpenSearchClient::createInterventionDictionary(const CreateInterventionDictionaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInterventionDictionaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInterventionDictionaryOutcome(CreateInterventionDictionaryResult(outcome.result()));
	else
		return CreateInterventionDictionaryOutcome(outcome.error());
}

void OpenSearchClient::createInterventionDictionaryAsync(const CreateInterventionDictionaryRequest& request, const CreateInterventionDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInterventionDictionary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateInterventionDictionaryOutcomeCallable OpenSearchClient::createInterventionDictionaryCallable(const CreateInterventionDictionaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInterventionDictionaryOutcome()>>(
			[this, request]()
			{
			return this->createInterventionDictionary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateModelOutcome OpenSearchClient::createModel(const CreateModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateModelOutcome(CreateModelResult(outcome.result()));
	else
		return CreateModelOutcome(outcome.error());
}

void OpenSearchClient::createModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateModelOutcomeCallable OpenSearchClient::createModelCallable(const CreateModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelOutcome()>>(
			[this, request]()
			{
			return this->createModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateQueryProcessorOutcome OpenSearchClient::createQueryProcessor(const CreateQueryProcessorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQueryProcessorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQueryProcessorOutcome(CreateQueryProcessorResult(outcome.result()));
	else
		return CreateQueryProcessorOutcome(outcome.error());
}

void OpenSearchClient::createQueryProcessorAsync(const CreateQueryProcessorRequest& request, const CreateQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQueryProcessor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateQueryProcessorOutcomeCallable OpenSearchClient::createQueryProcessorCallable(const CreateQueryProcessorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQueryProcessorOutcome()>>(
			[this, request]()
			{
			return this->createQueryProcessor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateScheduledTaskOutcome OpenSearchClient::createScheduledTask(const CreateScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScheduledTaskOutcome(CreateScheduledTaskResult(outcome.result()));
	else
		return CreateScheduledTaskOutcome(outcome.error());
}

void OpenSearchClient::createScheduledTaskAsync(const CreateScheduledTaskRequest& request, const CreateScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateScheduledTaskOutcomeCallable OpenSearchClient::createScheduledTaskCallable(const CreateScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->createScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateSecondRankOutcome OpenSearchClient::createSecondRank(const CreateSecondRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecondRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecondRankOutcome(CreateSecondRankResult(outcome.result()));
	else
		return CreateSecondRankOutcome(outcome.error());
}

void OpenSearchClient::createSecondRankAsync(const CreateSecondRankRequest& request, const CreateSecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecondRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateSecondRankOutcomeCallable OpenSearchClient::createSecondRankCallable(const CreateSecondRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecondRankOutcome()>>(
			[this, request]()
			{
			return this->createSecondRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateSortScriptOutcome OpenSearchClient::createSortScript(const CreateSortScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSortScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSortScriptOutcome(CreateSortScriptResult(outcome.result()));
	else
		return CreateSortScriptOutcome(outcome.error());
}

void OpenSearchClient::createSortScriptAsync(const CreateSortScriptRequest& request, const CreateSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSortScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateSortScriptOutcomeCallable OpenSearchClient::createSortScriptCallable(const CreateSortScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSortScriptOutcome()>>(
			[this, request]()
			{
			return this->createSortScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::CreateUserAnalyzerOutcome OpenSearchClient::createUserAnalyzer(const CreateUserAnalyzerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserAnalyzerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserAnalyzerOutcome(CreateUserAnalyzerResult(outcome.result()));
	else
		return CreateUserAnalyzerOutcome(outcome.error());
}

void OpenSearchClient::createUserAnalyzerAsync(const CreateUserAnalyzerRequest& request, const CreateUserAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserAnalyzer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::CreateUserAnalyzerOutcomeCallable OpenSearchClient::createUserAnalyzerCallable(const CreateUserAnalyzerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserAnalyzerOutcome()>>(
			[this, request]()
			{
			return this->createUserAnalyzer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DeleteABTestExperimentOutcome OpenSearchClient::deleteABTestExperiment(const DeleteABTestExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteABTestExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteABTestExperimentOutcome(DeleteABTestExperimentResult(outcome.result()));
	else
		return DeleteABTestExperimentOutcome(outcome.error());
}

void OpenSearchClient::deleteABTestExperimentAsync(const DeleteABTestExperimentRequest& request, const DeleteABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteABTestExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DeleteABTestExperimentOutcomeCallable OpenSearchClient::deleteABTestExperimentCallable(const DeleteABTestExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteABTestExperimentOutcome()>>(
			[this, request]()
			{
			return this->deleteABTestExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DeleteABTestGroupOutcome OpenSearchClient::deleteABTestGroup(const DeleteABTestGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteABTestGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteABTestGroupOutcome(DeleteABTestGroupResult(outcome.result()));
	else
		return DeleteABTestGroupOutcome(outcome.error());
}

void OpenSearchClient::deleteABTestGroupAsync(const DeleteABTestGroupRequest& request, const DeleteABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteABTestGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DeleteABTestGroupOutcomeCallable OpenSearchClient::deleteABTestGroupCallable(const DeleteABTestGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteABTestGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteABTestGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DeleteABTestSceneOutcome OpenSearchClient::deleteABTestScene(const DeleteABTestSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteABTestSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteABTestSceneOutcome(DeleteABTestSceneResult(outcome.result()));
	else
		return DeleteABTestSceneOutcome(outcome.error());
}

void OpenSearchClient::deleteABTestSceneAsync(const DeleteABTestSceneRequest& request, const DeleteABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteABTestScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DeleteABTestSceneOutcomeCallable OpenSearchClient::deleteABTestSceneCallable(const DeleteABTestSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteABTestSceneOutcome()>>(
			[this, request]()
			{
			return this->deleteABTestScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DeleteModelOutcome OpenSearchClient::deleteModel(const DeleteModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteModelOutcome(DeleteModelResult(outcome.result()));
	else
		return DeleteModelOutcome(outcome.error());
}

void OpenSearchClient::deleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DeleteModelOutcomeCallable OpenSearchClient::deleteModelCallable(const DeleteModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteModelOutcome()>>(
			[this, request]()
			{
			return this->deleteModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DeleteSortScriptOutcome OpenSearchClient::deleteSortScript(const DeleteSortScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSortScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSortScriptOutcome(DeleteSortScriptResult(outcome.result()));
	else
		return DeleteSortScriptOutcome(outcome.error());
}

void OpenSearchClient::deleteSortScriptAsync(const DeleteSortScriptRequest& request, const DeleteSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSortScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DeleteSortScriptOutcomeCallable OpenSearchClient::deleteSortScriptCallable(const DeleteSortScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSortScriptOutcome()>>(
			[this, request]()
			{
			return this->deleteSortScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DeleteSortScriptFileOutcome OpenSearchClient::deleteSortScriptFile(const DeleteSortScriptFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSortScriptFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSortScriptFileOutcome(DeleteSortScriptFileResult(outcome.result()));
	else
		return DeleteSortScriptFileOutcome(outcome.error());
}

void OpenSearchClient::deleteSortScriptFileAsync(const DeleteSortScriptFileRequest& request, const DeleteSortScriptFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSortScriptFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DeleteSortScriptFileOutcomeCallable OpenSearchClient::deleteSortScriptFileCallable(const DeleteSortScriptFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSortScriptFileOutcome()>>(
			[this, request]()
			{
			return this->deleteSortScriptFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeABTestExperimentOutcome OpenSearchClient::describeABTestExperiment(const DescribeABTestExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeABTestExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeABTestExperimentOutcome(DescribeABTestExperimentResult(outcome.result()));
	else
		return DescribeABTestExperimentOutcome(outcome.error());
}

void OpenSearchClient::describeABTestExperimentAsync(const DescribeABTestExperimentRequest& request, const DescribeABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeABTestExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeABTestExperimentOutcomeCallable OpenSearchClient::describeABTestExperimentCallable(const DescribeABTestExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeABTestExperimentOutcome()>>(
			[this, request]()
			{
			return this->describeABTestExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeABTestGroupOutcome OpenSearchClient::describeABTestGroup(const DescribeABTestGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeABTestGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeABTestGroupOutcome(DescribeABTestGroupResult(outcome.result()));
	else
		return DescribeABTestGroupOutcome(outcome.error());
}

void OpenSearchClient::describeABTestGroupAsync(const DescribeABTestGroupRequest& request, const DescribeABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeABTestGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeABTestGroupOutcomeCallable OpenSearchClient::describeABTestGroupCallable(const DescribeABTestGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeABTestGroupOutcome()>>(
			[this, request]()
			{
			return this->describeABTestGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeABTestSceneOutcome OpenSearchClient::describeABTestScene(const DescribeABTestSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeABTestSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeABTestSceneOutcome(DescribeABTestSceneResult(outcome.result()));
	else
		return DescribeABTestSceneOutcome(outcome.error());
}

void OpenSearchClient::describeABTestSceneAsync(const DescribeABTestSceneRequest& request, const DescribeABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeABTestScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeABTestSceneOutcomeCallable OpenSearchClient::describeABTestSceneCallable(const DescribeABTestSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeABTestSceneOutcome()>>(
			[this, request]()
			{
			return this->describeABTestScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeAppOutcome OpenSearchClient::describeApp(const DescribeAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppOutcome(DescribeAppResult(outcome.result()));
	else
		return DescribeAppOutcome(outcome.error());
}

void OpenSearchClient::describeAppAsync(const DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeAppOutcomeCallable OpenSearchClient::describeAppCallable(const DescribeAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppOutcome()>>(
			[this, request]()
			{
			return this->describeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeAppGroupOutcome OpenSearchClient::describeAppGroup(const DescribeAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppGroupOutcome(DescribeAppGroupResult(outcome.result()));
	else
		return DescribeAppGroupOutcome(outcome.error());
}

void OpenSearchClient::describeAppGroupAsync(const DescribeAppGroupRequest& request, const DescribeAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeAppGroupOutcomeCallable OpenSearchClient::describeAppGroupCallable(const DescribeAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppGroupOutcome()>>(
			[this, request]()
			{
			return this->describeAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeAppGroupDataReportOutcome OpenSearchClient::describeAppGroupDataReport(const DescribeAppGroupDataReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppGroupDataReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppGroupDataReportOutcome(DescribeAppGroupDataReportResult(outcome.result()));
	else
		return DescribeAppGroupDataReportOutcome(outcome.error());
}

void OpenSearchClient::describeAppGroupDataReportAsync(const DescribeAppGroupDataReportRequest& request, const DescribeAppGroupDataReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppGroupDataReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeAppGroupDataReportOutcomeCallable OpenSearchClient::describeAppGroupDataReportCallable(const DescribeAppGroupDataReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppGroupDataReportOutcome()>>(
			[this, request]()
			{
			return this->describeAppGroupDataReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeAppStatisticsOutcome OpenSearchClient::describeAppStatistics(const DescribeAppStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppStatisticsOutcome(DescribeAppStatisticsResult(outcome.result()));
	else
		return DescribeAppStatisticsOutcome(outcome.error());
}

void OpenSearchClient::describeAppStatisticsAsync(const DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeAppStatisticsOutcomeCallable OpenSearchClient::describeAppStatisticsCallable(const DescribeAppStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeAppStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeAppsOutcome OpenSearchClient::describeApps(const DescribeAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppsOutcome(DescribeAppsResult(outcome.result()));
	else
		return DescribeAppsOutcome(outcome.error());
}

void OpenSearchClient::describeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeAppsOutcomeCallable OpenSearchClient::describeAppsCallable(const DescribeAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppsOutcome()>>(
			[this, request]()
			{
			return this->describeApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeDataCollctionOutcome OpenSearchClient::describeDataCollction(const DescribeDataCollctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataCollctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataCollctionOutcome(DescribeDataCollctionResult(outcome.result()));
	else
		return DescribeDataCollctionOutcome(outcome.error());
}

void OpenSearchClient::describeDataCollctionAsync(const DescribeDataCollctionRequest& request, const DescribeDataCollctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataCollction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeDataCollctionOutcomeCallable OpenSearchClient::describeDataCollctionCallable(const DescribeDataCollctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataCollctionOutcome()>>(
			[this, request]()
			{
			return this->describeDataCollction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeFirstRankOutcome OpenSearchClient::describeFirstRank(const DescribeFirstRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFirstRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFirstRankOutcome(DescribeFirstRankResult(outcome.result()));
	else
		return DescribeFirstRankOutcome(outcome.error());
}

void OpenSearchClient::describeFirstRankAsync(const DescribeFirstRankRequest& request, const DescribeFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFirstRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeFirstRankOutcomeCallable OpenSearchClient::describeFirstRankCallable(const DescribeFirstRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFirstRankOutcome()>>(
			[this, request]()
			{
			return this->describeFirstRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeInterventionDictionaryOutcome OpenSearchClient::describeInterventionDictionary(const DescribeInterventionDictionaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInterventionDictionaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInterventionDictionaryOutcome(DescribeInterventionDictionaryResult(outcome.result()));
	else
		return DescribeInterventionDictionaryOutcome(outcome.error());
}

void OpenSearchClient::describeInterventionDictionaryAsync(const DescribeInterventionDictionaryRequest& request, const DescribeInterventionDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInterventionDictionary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeInterventionDictionaryOutcomeCallable OpenSearchClient::describeInterventionDictionaryCallable(const DescribeInterventionDictionaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInterventionDictionaryOutcome()>>(
			[this, request]()
			{
			return this->describeInterventionDictionary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeModelOutcome OpenSearchClient::describeModel(const DescribeModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModelOutcome(DescribeModelResult(outcome.result()));
	else
		return DescribeModelOutcome(outcome.error());
}

void OpenSearchClient::describeModelAsync(const DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeModelOutcomeCallable OpenSearchClient::describeModelCallable(const DescribeModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModelOutcome()>>(
			[this, request]()
			{
			return this->describeModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeQueryProcessorOutcome OpenSearchClient::describeQueryProcessor(const DescribeQueryProcessorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQueryProcessorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQueryProcessorOutcome(DescribeQueryProcessorResult(outcome.result()));
	else
		return DescribeQueryProcessorOutcome(outcome.error());
}

void OpenSearchClient::describeQueryProcessorAsync(const DescribeQueryProcessorRequest& request, const DescribeQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQueryProcessor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeQueryProcessorOutcomeCallable OpenSearchClient::describeQueryProcessorCallable(const DescribeQueryProcessorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQueryProcessorOutcome()>>(
			[this, request]()
			{
			return this->describeQueryProcessor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeRegionOutcome OpenSearchClient::describeRegion(const DescribeRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionOutcome(DescribeRegionResult(outcome.result()));
	else
		return DescribeRegionOutcome(outcome.error());
}

void OpenSearchClient::describeRegionAsync(const DescribeRegionRequest& request, const DescribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeRegionOutcomeCallable OpenSearchClient::describeRegionCallable(const DescribeRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionOutcome()>>(
			[this, request]()
			{
			return this->describeRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeRegionsOutcome OpenSearchClient::describeRegions(const DescribeRegionsRequest &request) const
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

void OpenSearchClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeRegionsOutcomeCallable OpenSearchClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeScheduledTaskOutcome OpenSearchClient::describeScheduledTask(const DescribeScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScheduledTaskOutcome(DescribeScheduledTaskResult(outcome.result()));
	else
		return DescribeScheduledTaskOutcome(outcome.error());
}

void OpenSearchClient::describeScheduledTaskAsync(const DescribeScheduledTaskRequest& request, const DescribeScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeScheduledTaskOutcomeCallable OpenSearchClient::describeScheduledTaskCallable(const DescribeScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->describeScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeSecondRankOutcome OpenSearchClient::describeSecondRank(const DescribeSecondRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecondRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecondRankOutcome(DescribeSecondRankResult(outcome.result()));
	else
		return DescribeSecondRankOutcome(outcome.error());
}

void OpenSearchClient::describeSecondRankAsync(const DescribeSecondRankRequest& request, const DescribeSecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecondRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeSecondRankOutcomeCallable OpenSearchClient::describeSecondRankCallable(const DescribeSecondRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecondRankOutcome()>>(
			[this, request]()
			{
			return this->describeSecondRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeSlowQueryStatusOutcome OpenSearchClient::describeSlowQueryStatus(const DescribeSlowQueryStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlowQueryStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlowQueryStatusOutcome(DescribeSlowQueryStatusResult(outcome.result()));
	else
		return DescribeSlowQueryStatusOutcome(outcome.error());
}

void OpenSearchClient::describeSlowQueryStatusAsync(const DescribeSlowQueryStatusRequest& request, const DescribeSlowQueryStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlowQueryStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeSlowQueryStatusOutcomeCallable OpenSearchClient::describeSlowQueryStatusCallable(const DescribeSlowQueryStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlowQueryStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSlowQueryStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DescribeUserAnalyzerOutcome OpenSearchClient::describeUserAnalyzer(const DescribeUserAnalyzerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserAnalyzerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserAnalyzerOutcome(DescribeUserAnalyzerResult(outcome.result()));
	else
		return DescribeUserAnalyzerOutcome(outcome.error());
}

void OpenSearchClient::describeUserAnalyzerAsync(const DescribeUserAnalyzerRequest& request, const DescribeUserAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserAnalyzer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DescribeUserAnalyzerOutcomeCallable OpenSearchClient::describeUserAnalyzerCallable(const DescribeUserAnalyzerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserAnalyzerOutcome()>>(
			[this, request]()
			{
			return this->describeUserAnalyzer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::DisableSlowQueryOutcome OpenSearchClient::disableSlowQuery(const DisableSlowQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableSlowQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableSlowQueryOutcome(DisableSlowQueryResult(outcome.result()));
	else
		return DisableSlowQueryOutcome(outcome.error());
}

void OpenSearchClient::disableSlowQueryAsync(const DisableSlowQueryRequest& request, const DisableSlowQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableSlowQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::DisableSlowQueryOutcomeCallable OpenSearchClient::disableSlowQueryCallable(const DisableSlowQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableSlowQueryOutcome()>>(
			[this, request]()
			{
			return this->disableSlowQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::EnableSlowQueryOutcome OpenSearchClient::enableSlowQuery(const EnableSlowQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableSlowQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableSlowQueryOutcome(EnableSlowQueryResult(outcome.result()));
	else
		return EnableSlowQueryOutcome(outcome.error());
}

void OpenSearchClient::enableSlowQueryAsync(const EnableSlowQueryRequest& request, const EnableSlowQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableSlowQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::EnableSlowQueryOutcomeCallable OpenSearchClient::enableSlowQueryCallable(const EnableSlowQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableSlowQueryOutcome()>>(
			[this, request]()
			{
			return this->enableSlowQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetModelProgressOutcome OpenSearchClient::getModelProgress(const GetModelProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelProgressOutcome(GetModelProgressResult(outcome.result()));
	else
		return GetModelProgressOutcome(outcome.error());
}

void OpenSearchClient::getModelProgressAsync(const GetModelProgressRequest& request, const GetModelProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetModelProgressOutcomeCallable OpenSearchClient::getModelProgressCallable(const GetModelProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelProgressOutcome()>>(
			[this, request]()
			{
			return this->getModelProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetModelReportOutcome OpenSearchClient::getModelReport(const GetModelReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelReportOutcome(GetModelReportResult(outcome.result()));
	else
		return GetModelReportOutcome(outcome.error());
}

void OpenSearchClient::getModelReportAsync(const GetModelReportRequest& request, const GetModelReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetModelReportOutcomeCallable OpenSearchClient::getModelReportCallable(const GetModelReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelReportOutcome()>>(
			[this, request]()
			{
			return this->getModelReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetScriptFileNamesOutcome OpenSearchClient::getScriptFileNames(const GetScriptFileNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScriptFileNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScriptFileNamesOutcome(GetScriptFileNamesResult(outcome.result()));
	else
		return GetScriptFileNamesOutcome(outcome.error());
}

void OpenSearchClient::getScriptFileNamesAsync(const GetScriptFileNamesRequest& request, const GetScriptFileNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScriptFileNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetScriptFileNamesOutcomeCallable OpenSearchClient::getScriptFileNamesCallable(const GetScriptFileNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScriptFileNamesOutcome()>>(
			[this, request]()
			{
			return this->getScriptFileNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetSortScriptOutcome OpenSearchClient::getSortScript(const GetSortScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSortScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSortScriptOutcome(GetSortScriptResult(outcome.result()));
	else
		return GetSortScriptOutcome(outcome.error());
}

void OpenSearchClient::getSortScriptAsync(const GetSortScriptRequest& request, const GetSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSortScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetSortScriptOutcomeCallable OpenSearchClient::getSortScriptCallable(const GetSortScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSortScriptOutcome()>>(
			[this, request]()
			{
			return this->getSortScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetSortScriptFileOutcome OpenSearchClient::getSortScriptFile(const GetSortScriptFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSortScriptFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSortScriptFileOutcome(GetSortScriptFileResult(outcome.result()));
	else
		return GetSortScriptFileOutcome(outcome.error());
}

void OpenSearchClient::getSortScriptFileAsync(const GetSortScriptFileRequest& request, const GetSortScriptFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSortScriptFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetSortScriptFileOutcomeCallable OpenSearchClient::getSortScriptFileCallable(const GetSortScriptFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSortScriptFileOutcome()>>(
			[this, request]()
			{
			return this->getSortScriptFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetValidationErrorOutcome OpenSearchClient::getValidationError(const GetValidationErrorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetValidationErrorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetValidationErrorOutcome(GetValidationErrorResult(outcome.result()));
	else
		return GetValidationErrorOutcome(outcome.error());
}

void OpenSearchClient::getValidationErrorAsync(const GetValidationErrorRequest& request, const GetValidationErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getValidationError(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetValidationErrorOutcomeCallable OpenSearchClient::getValidationErrorCallable(const GetValidationErrorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetValidationErrorOutcome()>>(
			[this, request]()
			{
			return this->getValidationError(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::GetValidationReportOutcome OpenSearchClient::getValidationReport(const GetValidationReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetValidationReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetValidationReportOutcome(GetValidationReportResult(outcome.result()));
	else
		return GetValidationReportOutcome(outcome.error());
}

void OpenSearchClient::getValidationReportAsync(const GetValidationReportRequest& request, const GetValidationReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getValidationReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::GetValidationReportOutcomeCallable OpenSearchClient::getValidationReportCallable(const GetValidationReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetValidationReportOutcome()>>(
			[this, request]()
			{
			return this->getValidationReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListABTestExperimentsOutcome OpenSearchClient::listABTestExperiments(const ListABTestExperimentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListABTestExperimentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListABTestExperimentsOutcome(ListABTestExperimentsResult(outcome.result()));
	else
		return ListABTestExperimentsOutcome(outcome.error());
}

void OpenSearchClient::listABTestExperimentsAsync(const ListABTestExperimentsRequest& request, const ListABTestExperimentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listABTestExperiments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListABTestExperimentsOutcomeCallable OpenSearchClient::listABTestExperimentsCallable(const ListABTestExperimentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListABTestExperimentsOutcome()>>(
			[this, request]()
			{
			return this->listABTestExperiments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListABTestFixedFlowDividersOutcome OpenSearchClient::listABTestFixedFlowDividers(const ListABTestFixedFlowDividersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListABTestFixedFlowDividersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListABTestFixedFlowDividersOutcome(ListABTestFixedFlowDividersResult(outcome.result()));
	else
		return ListABTestFixedFlowDividersOutcome(outcome.error());
}

void OpenSearchClient::listABTestFixedFlowDividersAsync(const ListABTestFixedFlowDividersRequest& request, const ListABTestFixedFlowDividersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listABTestFixedFlowDividers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListABTestFixedFlowDividersOutcomeCallable OpenSearchClient::listABTestFixedFlowDividersCallable(const ListABTestFixedFlowDividersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListABTestFixedFlowDividersOutcome()>>(
			[this, request]()
			{
			return this->listABTestFixedFlowDividers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListABTestGroupsOutcome OpenSearchClient::listABTestGroups(const ListABTestGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListABTestGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListABTestGroupsOutcome(ListABTestGroupsResult(outcome.result()));
	else
		return ListABTestGroupsOutcome(outcome.error());
}

void OpenSearchClient::listABTestGroupsAsync(const ListABTestGroupsRequest& request, const ListABTestGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listABTestGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListABTestGroupsOutcomeCallable OpenSearchClient::listABTestGroupsCallable(const ListABTestGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListABTestGroupsOutcome()>>(
			[this, request]()
			{
			return this->listABTestGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListABTestMetricsOutcome OpenSearchClient::listABTestMetrics(const ListABTestMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListABTestMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListABTestMetricsOutcome(ListABTestMetricsResult(outcome.result()));
	else
		return ListABTestMetricsOutcome(outcome.error());
}

void OpenSearchClient::listABTestMetricsAsync(const ListABTestMetricsRequest& request, const ListABTestMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listABTestMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListABTestMetricsOutcomeCallable OpenSearchClient::listABTestMetricsCallable(const ListABTestMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListABTestMetricsOutcome()>>(
			[this, request]()
			{
			return this->listABTestMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListABTestScenesOutcome OpenSearchClient::listABTestScenes(const ListABTestScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListABTestScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListABTestScenesOutcome(ListABTestScenesResult(outcome.result()));
	else
		return ListABTestScenesOutcome(outcome.error());
}

void OpenSearchClient::listABTestScenesAsync(const ListABTestScenesRequest& request, const ListABTestScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listABTestScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListABTestScenesOutcomeCallable OpenSearchClient::listABTestScenesCallable(const ListABTestScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListABTestScenesOutcome()>>(
			[this, request]()
			{
			return this->listABTestScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListAppGroupErrorsOutcome OpenSearchClient::listAppGroupErrors(const ListAppGroupErrorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppGroupErrorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppGroupErrorsOutcome(ListAppGroupErrorsResult(outcome.result()));
	else
		return ListAppGroupErrorsOutcome(outcome.error());
}

void OpenSearchClient::listAppGroupErrorsAsync(const ListAppGroupErrorsRequest& request, const ListAppGroupErrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppGroupErrors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListAppGroupErrorsOutcomeCallable OpenSearchClient::listAppGroupErrorsCallable(const ListAppGroupErrorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppGroupErrorsOutcome()>>(
			[this, request]()
			{
			return this->listAppGroupErrors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListAppGroupMetricsOutcome OpenSearchClient::listAppGroupMetrics(const ListAppGroupMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppGroupMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppGroupMetricsOutcome(ListAppGroupMetricsResult(outcome.result()));
	else
		return ListAppGroupMetricsOutcome(outcome.error());
}

void OpenSearchClient::listAppGroupMetricsAsync(const ListAppGroupMetricsRequest& request, const ListAppGroupMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppGroupMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListAppGroupMetricsOutcomeCallable OpenSearchClient::listAppGroupMetricsCallable(const ListAppGroupMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppGroupMetricsOutcome()>>(
			[this, request]()
			{
			return this->listAppGroupMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListAppGroupsOutcome OpenSearchClient::listAppGroups(const ListAppGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppGroupsOutcome(ListAppGroupsResult(outcome.result()));
	else
		return ListAppGroupsOutcome(outcome.error());
}

void OpenSearchClient::listAppGroupsAsync(const ListAppGroupsRequest& request, const ListAppGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListAppGroupsOutcomeCallable OpenSearchClient::listAppGroupsCallable(const ListAppGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppGroupsOutcome()>>(
			[this, request]()
			{
			return this->listAppGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListAppsOutcome OpenSearchClient::listApps(const ListAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppsOutcome(ListAppsResult(outcome.result()));
	else
		return ListAppsOutcome(outcome.error());
}

void OpenSearchClient::listAppsAsync(const ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListAppsOutcomeCallable OpenSearchClient::listAppsCallable(const ListAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppsOutcome()>>(
			[this, request]()
			{
			return this->listApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListDataCollectionsOutcome OpenSearchClient::listDataCollections(const ListDataCollectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataCollectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataCollectionsOutcome(ListDataCollectionsResult(outcome.result()));
	else
		return ListDataCollectionsOutcome(outcome.error());
}

void OpenSearchClient::listDataCollectionsAsync(const ListDataCollectionsRequest& request, const ListDataCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataCollections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListDataCollectionsOutcomeCallable OpenSearchClient::listDataCollectionsCallable(const ListDataCollectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataCollectionsOutcome()>>(
			[this, request]()
			{
			return this->listDataCollections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListDeployedAlgorithmModelsOutcome OpenSearchClient::listDeployedAlgorithmModels(const ListDeployedAlgorithmModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeployedAlgorithmModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeployedAlgorithmModelsOutcome(ListDeployedAlgorithmModelsResult(outcome.result()));
	else
		return ListDeployedAlgorithmModelsOutcome(outcome.error());
}

void OpenSearchClient::listDeployedAlgorithmModelsAsync(const ListDeployedAlgorithmModelsRequest& request, const ListDeployedAlgorithmModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeployedAlgorithmModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListDeployedAlgorithmModelsOutcomeCallable OpenSearchClient::listDeployedAlgorithmModelsCallable(const ListDeployedAlgorithmModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeployedAlgorithmModelsOutcome()>>(
			[this, request]()
			{
			return this->listDeployedAlgorithmModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListFirstRanksOutcome OpenSearchClient::listFirstRanks(const ListFirstRanksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFirstRanksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFirstRanksOutcome(ListFirstRanksResult(outcome.result()));
	else
		return ListFirstRanksOutcome(outcome.error());
}

void OpenSearchClient::listFirstRanksAsync(const ListFirstRanksRequest& request, const ListFirstRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFirstRanks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListFirstRanksOutcomeCallable OpenSearchClient::listFirstRanksCallable(const ListFirstRanksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFirstRanksOutcome()>>(
			[this, request]()
			{
			return this->listFirstRanks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListInterventionDictionariesOutcome OpenSearchClient::listInterventionDictionaries(const ListInterventionDictionariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterventionDictionariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterventionDictionariesOutcome(ListInterventionDictionariesResult(outcome.result()));
	else
		return ListInterventionDictionariesOutcome(outcome.error());
}

void OpenSearchClient::listInterventionDictionariesAsync(const ListInterventionDictionariesRequest& request, const ListInterventionDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterventionDictionaries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListInterventionDictionariesOutcomeCallable OpenSearchClient::listInterventionDictionariesCallable(const ListInterventionDictionariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterventionDictionariesOutcome()>>(
			[this, request]()
			{
			return this->listInterventionDictionaries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListInterventionDictionaryEntriesOutcome OpenSearchClient::listInterventionDictionaryEntries(const ListInterventionDictionaryEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterventionDictionaryEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterventionDictionaryEntriesOutcome(ListInterventionDictionaryEntriesResult(outcome.result()));
	else
		return ListInterventionDictionaryEntriesOutcome(outcome.error());
}

void OpenSearchClient::listInterventionDictionaryEntriesAsync(const ListInterventionDictionaryEntriesRequest& request, const ListInterventionDictionaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterventionDictionaryEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListInterventionDictionaryEntriesOutcomeCallable OpenSearchClient::listInterventionDictionaryEntriesCallable(const ListInterventionDictionaryEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterventionDictionaryEntriesOutcome()>>(
			[this, request]()
			{
			return this->listInterventionDictionaryEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListInterventionDictionaryNerResultsOutcome OpenSearchClient::listInterventionDictionaryNerResults(const ListInterventionDictionaryNerResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterventionDictionaryNerResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterventionDictionaryNerResultsOutcome(ListInterventionDictionaryNerResultsResult(outcome.result()));
	else
		return ListInterventionDictionaryNerResultsOutcome(outcome.error());
}

void OpenSearchClient::listInterventionDictionaryNerResultsAsync(const ListInterventionDictionaryNerResultsRequest& request, const ListInterventionDictionaryNerResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterventionDictionaryNerResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListInterventionDictionaryNerResultsOutcomeCallable OpenSearchClient::listInterventionDictionaryNerResultsCallable(const ListInterventionDictionaryNerResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterventionDictionaryNerResultsOutcome()>>(
			[this, request]()
			{
			return this->listInterventionDictionaryNerResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListInterventionDictionaryRelatedEntitiesOutcome OpenSearchClient::listInterventionDictionaryRelatedEntities(const ListInterventionDictionaryRelatedEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterventionDictionaryRelatedEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterventionDictionaryRelatedEntitiesOutcome(ListInterventionDictionaryRelatedEntitiesResult(outcome.result()));
	else
		return ListInterventionDictionaryRelatedEntitiesOutcome(outcome.error());
}

void OpenSearchClient::listInterventionDictionaryRelatedEntitiesAsync(const ListInterventionDictionaryRelatedEntitiesRequest& request, const ListInterventionDictionaryRelatedEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterventionDictionaryRelatedEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListInterventionDictionaryRelatedEntitiesOutcomeCallable OpenSearchClient::listInterventionDictionaryRelatedEntitiesCallable(const ListInterventionDictionaryRelatedEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterventionDictionaryRelatedEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listInterventionDictionaryRelatedEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListModelsOutcome OpenSearchClient::listModels(const ListModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListModelsOutcome(ListModelsResult(outcome.result()));
	else
		return ListModelsOutcome(outcome.error());
}

void OpenSearchClient::listModelsAsync(const ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListModelsOutcomeCallable OpenSearchClient::listModelsCallable(const ListModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModelsOutcome()>>(
			[this, request]()
			{
			return this->listModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListQueryProcessorNersOutcome OpenSearchClient::listQueryProcessorNers(const ListQueryProcessorNersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueryProcessorNersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueryProcessorNersOutcome(ListQueryProcessorNersResult(outcome.result()));
	else
		return ListQueryProcessorNersOutcome(outcome.error());
}

void OpenSearchClient::listQueryProcessorNersAsync(const ListQueryProcessorNersRequest& request, const ListQueryProcessorNersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueryProcessorNers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListQueryProcessorNersOutcomeCallable OpenSearchClient::listQueryProcessorNersCallable(const ListQueryProcessorNersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueryProcessorNersOutcome()>>(
			[this, request]()
			{
			return this->listQueryProcessorNers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListQueryProcessorsOutcome OpenSearchClient::listQueryProcessors(const ListQueryProcessorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueryProcessorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueryProcessorsOutcome(ListQueryProcessorsResult(outcome.result()));
	else
		return ListQueryProcessorsOutcome(outcome.error());
}

void OpenSearchClient::listQueryProcessorsAsync(const ListQueryProcessorsRequest& request, const ListQueryProcessorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueryProcessors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListQueryProcessorsOutcomeCallable OpenSearchClient::listQueryProcessorsCallable(const ListQueryProcessorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueryProcessorsOutcome()>>(
			[this, request]()
			{
			return this->listQueryProcessors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListScheduledTasksOutcome OpenSearchClient::listScheduledTasks(const ListScheduledTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScheduledTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScheduledTasksOutcome(ListScheduledTasksResult(outcome.result()));
	else
		return ListScheduledTasksOutcome(outcome.error());
}

void OpenSearchClient::listScheduledTasksAsync(const ListScheduledTasksRequest& request, const ListScheduledTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScheduledTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListScheduledTasksOutcomeCallable OpenSearchClient::listScheduledTasksCallable(const ListScheduledTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScheduledTasksOutcome()>>(
			[this, request]()
			{
			return this->listScheduledTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListSecondRanksOutcome OpenSearchClient::listSecondRanks(const ListSecondRanksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecondRanksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecondRanksOutcome(ListSecondRanksResult(outcome.result()));
	else
		return ListSecondRanksOutcome(outcome.error());
}

void OpenSearchClient::listSecondRanksAsync(const ListSecondRanksRequest& request, const ListSecondRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecondRanks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListSecondRanksOutcomeCallable OpenSearchClient::listSecondRanksCallable(const ListSecondRanksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecondRanksOutcome()>>(
			[this, request]()
			{
			return this->listSecondRanks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListSlowQueryCategoriesOutcome OpenSearchClient::listSlowQueryCategories(const ListSlowQueryCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSlowQueryCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSlowQueryCategoriesOutcome(ListSlowQueryCategoriesResult(outcome.result()));
	else
		return ListSlowQueryCategoriesOutcome(outcome.error());
}

void OpenSearchClient::listSlowQueryCategoriesAsync(const ListSlowQueryCategoriesRequest& request, const ListSlowQueryCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSlowQueryCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListSlowQueryCategoriesOutcomeCallable OpenSearchClient::listSlowQueryCategoriesCallable(const ListSlowQueryCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSlowQueryCategoriesOutcome()>>(
			[this, request]()
			{
			return this->listSlowQueryCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListSlowQueryQueriesOutcome OpenSearchClient::listSlowQueryQueries(const ListSlowQueryQueriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSlowQueryQueriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSlowQueryQueriesOutcome(ListSlowQueryQueriesResult(outcome.result()));
	else
		return ListSlowQueryQueriesOutcome(outcome.error());
}

void OpenSearchClient::listSlowQueryQueriesAsync(const ListSlowQueryQueriesRequest& request, const ListSlowQueryQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSlowQueryQueries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListSlowQueryQueriesOutcomeCallable OpenSearchClient::listSlowQueryQueriesCallable(const ListSlowQueryQueriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSlowQueryQueriesOutcome()>>(
			[this, request]()
			{
			return this->listSlowQueryQueries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListSortExpressionsOutcome OpenSearchClient::listSortExpressions(const ListSortExpressionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSortExpressionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSortExpressionsOutcome(ListSortExpressionsResult(outcome.result()));
	else
		return ListSortExpressionsOutcome(outcome.error());
}

void OpenSearchClient::listSortExpressionsAsync(const ListSortExpressionsRequest& request, const ListSortExpressionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSortExpressions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListSortExpressionsOutcomeCallable OpenSearchClient::listSortExpressionsCallable(const ListSortExpressionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSortExpressionsOutcome()>>(
			[this, request]()
			{
			return this->listSortExpressions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListSortScriptsOutcome OpenSearchClient::listSortScripts(const ListSortScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSortScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSortScriptsOutcome(ListSortScriptsResult(outcome.result()));
	else
		return ListSortScriptsOutcome(outcome.error());
}

void OpenSearchClient::listSortScriptsAsync(const ListSortScriptsRequest& request, const ListSortScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSortScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListSortScriptsOutcomeCallable OpenSearchClient::listSortScriptsCallable(const ListSortScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSortScriptsOutcome()>>(
			[this, request]()
			{
			return this->listSortScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListStatisticLogsOutcome OpenSearchClient::listStatisticLogs(const ListStatisticLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStatisticLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStatisticLogsOutcome(ListStatisticLogsResult(outcome.result()));
	else
		return ListStatisticLogsOutcome(outcome.error());
}

void OpenSearchClient::listStatisticLogsAsync(const ListStatisticLogsRequest& request, const ListStatisticLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStatisticLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListStatisticLogsOutcomeCallable OpenSearchClient::listStatisticLogsCallable(const ListStatisticLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStatisticLogsOutcome()>>(
			[this, request]()
			{
			return this->listStatisticLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListStatisticReportOutcome OpenSearchClient::listStatisticReport(const ListStatisticReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListStatisticReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListStatisticReportOutcome(ListStatisticReportResult(outcome.result()));
	else
		return ListStatisticReportOutcome(outcome.error());
}

void OpenSearchClient::listStatisticReportAsync(const ListStatisticReportRequest& request, const ListStatisticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listStatisticReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListStatisticReportOutcomeCallable OpenSearchClient::listStatisticReportCallable(const ListStatisticReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListStatisticReportOutcome()>>(
			[this, request]()
			{
			return this->listStatisticReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListUserAnalyzerEntriesOutcome OpenSearchClient::listUserAnalyzerEntries(const ListUserAnalyzerEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserAnalyzerEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserAnalyzerEntriesOutcome(ListUserAnalyzerEntriesResult(outcome.result()));
	else
		return ListUserAnalyzerEntriesOutcome(outcome.error());
}

void OpenSearchClient::listUserAnalyzerEntriesAsync(const ListUserAnalyzerEntriesRequest& request, const ListUserAnalyzerEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserAnalyzerEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListUserAnalyzerEntriesOutcomeCallable OpenSearchClient::listUserAnalyzerEntriesCallable(const ListUserAnalyzerEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserAnalyzerEntriesOutcome()>>(
			[this, request]()
			{
			return this->listUserAnalyzerEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ListUserAnalyzersOutcome OpenSearchClient::listUserAnalyzers(const ListUserAnalyzersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserAnalyzersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserAnalyzersOutcome(ListUserAnalyzersResult(outcome.result()));
	else
		return ListUserAnalyzersOutcome(outcome.error());
}

void OpenSearchClient::listUserAnalyzersAsync(const ListUserAnalyzersRequest& request, const ListUserAnalyzersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserAnalyzers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ListUserAnalyzersOutcomeCallable OpenSearchClient::listUserAnalyzersCallable(const ListUserAnalyzersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserAnalyzersOutcome()>>(
			[this, request]()
			{
			return this->listUserAnalyzers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifyAppGroupOutcome OpenSearchClient::modifyAppGroup(const ModifyAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppGroupOutcome(ModifyAppGroupResult(outcome.result()));
	else
		return ModifyAppGroupOutcome(outcome.error());
}

void OpenSearchClient::modifyAppGroupAsync(const ModifyAppGroupRequest& request, const ModifyAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifyAppGroupOutcomeCallable OpenSearchClient::modifyAppGroupCallable(const ModifyAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifyAppGroupQuotaOutcome OpenSearchClient::modifyAppGroupQuota(const ModifyAppGroupQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppGroupQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppGroupQuotaOutcome(ModifyAppGroupQuotaResult(outcome.result()));
	else
		return ModifyAppGroupQuotaOutcome(outcome.error());
}

void OpenSearchClient::modifyAppGroupQuotaAsync(const ModifyAppGroupQuotaRequest& request, const ModifyAppGroupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAppGroupQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifyAppGroupQuotaOutcomeCallable OpenSearchClient::modifyAppGroupQuotaCallable(const ModifyAppGroupQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppGroupQuotaOutcome()>>(
			[this, request]()
			{
			return this->modifyAppGroupQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifyFirstRankOutcome OpenSearchClient::modifyFirstRank(const ModifyFirstRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyFirstRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyFirstRankOutcome(ModifyFirstRankResult(outcome.result()));
	else
		return ModifyFirstRankOutcome(outcome.error());
}

void OpenSearchClient::modifyFirstRankAsync(const ModifyFirstRankRequest& request, const ModifyFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyFirstRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifyFirstRankOutcomeCallable OpenSearchClient::modifyFirstRankCallable(const ModifyFirstRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyFirstRankOutcome()>>(
			[this, request]()
			{
			return this->modifyFirstRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifyModelOutcome OpenSearchClient::modifyModel(const ModifyModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyModelOutcome(ModifyModelResult(outcome.result()));
	else
		return ModifyModelOutcome(outcome.error());
}

void OpenSearchClient::modifyModelAsync(const ModifyModelRequest& request, const ModifyModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifyModelOutcomeCallable OpenSearchClient::modifyModelCallable(const ModifyModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyModelOutcome()>>(
			[this, request]()
			{
			return this->modifyModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifyQueryProcessorOutcome OpenSearchClient::modifyQueryProcessor(const ModifyQueryProcessorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyQueryProcessorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyQueryProcessorOutcome(ModifyQueryProcessorResult(outcome.result()));
	else
		return ModifyQueryProcessorOutcome(outcome.error());
}

void OpenSearchClient::modifyQueryProcessorAsync(const ModifyQueryProcessorRequest& request, const ModifyQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyQueryProcessor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifyQueryProcessorOutcomeCallable OpenSearchClient::modifyQueryProcessorCallable(const ModifyQueryProcessorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyQueryProcessorOutcome()>>(
			[this, request]()
			{
			return this->modifyQueryProcessor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifyScheduledTaskOutcome OpenSearchClient::modifyScheduledTask(const ModifyScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScheduledTaskOutcome(ModifyScheduledTaskResult(outcome.result()));
	else
		return ModifyScheduledTaskOutcome(outcome.error());
}

void OpenSearchClient::modifyScheduledTaskAsync(const ModifyScheduledTaskRequest& request, const ModifyScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifyScheduledTaskOutcomeCallable OpenSearchClient::modifyScheduledTaskCallable(const ModifyScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ModifySecondRankOutcome OpenSearchClient::modifySecondRank(const ModifySecondRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecondRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecondRankOutcome(ModifySecondRankResult(outcome.result()));
	else
		return ModifySecondRankOutcome(outcome.error());
}

void OpenSearchClient::modifySecondRankAsync(const ModifySecondRankRequest& request, const ModifySecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecondRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ModifySecondRankOutcomeCallable OpenSearchClient::modifySecondRankCallable(const ModifySecondRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecondRankOutcome()>>(
			[this, request]()
			{
			return this->modifySecondRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::PreviewModelOutcome OpenSearchClient::previewModel(const PreviewModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreviewModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreviewModelOutcome(PreviewModelResult(outcome.result()));
	else
		return PreviewModelOutcome(outcome.error());
}

void OpenSearchClient::previewModelAsync(const PreviewModelRequest& request, const PreviewModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, previewModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::PreviewModelOutcomeCallable OpenSearchClient::previewModelCallable(const PreviewModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreviewModelOutcome()>>(
			[this, request]()
			{
			return this->previewModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::PushInterventionDictionaryEntriesOutcome OpenSearchClient::pushInterventionDictionaryEntries(const PushInterventionDictionaryEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushInterventionDictionaryEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushInterventionDictionaryEntriesOutcome(PushInterventionDictionaryEntriesResult(outcome.result()));
	else
		return PushInterventionDictionaryEntriesOutcome(outcome.error());
}

void OpenSearchClient::pushInterventionDictionaryEntriesAsync(const PushInterventionDictionaryEntriesRequest& request, const PushInterventionDictionaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushInterventionDictionaryEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::PushInterventionDictionaryEntriesOutcomeCallable OpenSearchClient::pushInterventionDictionaryEntriesCallable(const PushInterventionDictionaryEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushInterventionDictionaryEntriesOutcome()>>(
			[this, request]()
			{
			return this->pushInterventionDictionaryEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::PushUserAnalyzerEntriesOutcome OpenSearchClient::pushUserAnalyzerEntries(const PushUserAnalyzerEntriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushUserAnalyzerEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushUserAnalyzerEntriesOutcome(PushUserAnalyzerEntriesResult(outcome.result()));
	else
		return PushUserAnalyzerEntriesOutcome(outcome.error());
}

void OpenSearchClient::pushUserAnalyzerEntriesAsync(const PushUserAnalyzerEntriesRequest& request, const PushUserAnalyzerEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushUserAnalyzerEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::PushUserAnalyzerEntriesOutcomeCallable OpenSearchClient::pushUserAnalyzerEntriesCallable(const PushUserAnalyzerEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushUserAnalyzerEntriesOutcome()>>(
			[this, request]()
			{
			return this->pushUserAnalyzerEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RankPreviewQueryOutcome OpenSearchClient::rankPreviewQuery(const RankPreviewQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RankPreviewQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RankPreviewQueryOutcome(RankPreviewQueryResult(outcome.result()));
	else
		return RankPreviewQueryOutcome(outcome.error());
}

void OpenSearchClient::rankPreviewQueryAsync(const RankPreviewQueryRequest& request, const RankPreviewQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rankPreviewQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RankPreviewQueryOutcomeCallable OpenSearchClient::rankPreviewQueryCallable(const RankPreviewQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RankPreviewQueryOutcome()>>(
			[this, request]()
			{
			return this->rankPreviewQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ReleaseSortScriptOutcome OpenSearchClient::releaseSortScript(const ReleaseSortScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseSortScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseSortScriptOutcome(ReleaseSortScriptResult(outcome.result()));
	else
		return ReleaseSortScriptOutcome(outcome.error());
}

void OpenSearchClient::releaseSortScriptAsync(const ReleaseSortScriptRequest& request, const ReleaseSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseSortScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ReleaseSortScriptOutcomeCallable OpenSearchClient::releaseSortScriptCallable(const ReleaseSortScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseSortScriptOutcome()>>(
			[this, request]()
			{
			return this->releaseSortScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveAppOutcome OpenSearchClient::removeApp(const RemoveAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAppOutcome(RemoveAppResult(outcome.result()));
	else
		return RemoveAppOutcome(outcome.error());
}

void OpenSearchClient::removeAppAsync(const RemoveAppRequest& request, const RemoveAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveAppOutcomeCallable OpenSearchClient::removeAppCallable(const RemoveAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAppOutcome()>>(
			[this, request]()
			{
			return this->removeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveAppGroupOutcome OpenSearchClient::removeAppGroup(const RemoveAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAppGroupOutcome(RemoveAppGroupResult(outcome.result()));
	else
		return RemoveAppGroupOutcome(outcome.error());
}

void OpenSearchClient::removeAppGroupAsync(const RemoveAppGroupRequest& request, const RemoveAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveAppGroupOutcomeCallable OpenSearchClient::removeAppGroupCallable(const RemoveAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAppGroupOutcome()>>(
			[this, request]()
			{
			return this->removeAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveDataCollectionOutcome OpenSearchClient::removeDataCollection(const RemoveDataCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDataCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDataCollectionOutcome(RemoveDataCollectionResult(outcome.result()));
	else
		return RemoveDataCollectionOutcome(outcome.error());
}

void OpenSearchClient::removeDataCollectionAsync(const RemoveDataCollectionRequest& request, const RemoveDataCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDataCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveDataCollectionOutcomeCallable OpenSearchClient::removeDataCollectionCallable(const RemoveDataCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDataCollectionOutcome()>>(
			[this, request]()
			{
			return this->removeDataCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveFirstRankOutcome OpenSearchClient::removeFirstRank(const RemoveFirstRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveFirstRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveFirstRankOutcome(RemoveFirstRankResult(outcome.result()));
	else
		return RemoveFirstRankOutcome(outcome.error());
}

void OpenSearchClient::removeFirstRankAsync(const RemoveFirstRankRequest& request, const RemoveFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeFirstRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveFirstRankOutcomeCallable OpenSearchClient::removeFirstRankCallable(const RemoveFirstRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveFirstRankOutcome()>>(
			[this, request]()
			{
			return this->removeFirstRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveInterventionDictionaryOutcome OpenSearchClient::removeInterventionDictionary(const RemoveInterventionDictionaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveInterventionDictionaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveInterventionDictionaryOutcome(RemoveInterventionDictionaryResult(outcome.result()));
	else
		return RemoveInterventionDictionaryOutcome(outcome.error());
}

void OpenSearchClient::removeInterventionDictionaryAsync(const RemoveInterventionDictionaryRequest& request, const RemoveInterventionDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeInterventionDictionary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveInterventionDictionaryOutcomeCallable OpenSearchClient::removeInterventionDictionaryCallable(const RemoveInterventionDictionaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveInterventionDictionaryOutcome()>>(
			[this, request]()
			{
			return this->removeInterventionDictionary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveQueryProcessorOutcome OpenSearchClient::removeQueryProcessor(const RemoveQueryProcessorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveQueryProcessorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveQueryProcessorOutcome(RemoveQueryProcessorResult(outcome.result()));
	else
		return RemoveQueryProcessorOutcome(outcome.error());
}

void OpenSearchClient::removeQueryProcessorAsync(const RemoveQueryProcessorRequest& request, const RemoveQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeQueryProcessor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveQueryProcessorOutcomeCallable OpenSearchClient::removeQueryProcessorCallable(const RemoveQueryProcessorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveQueryProcessorOutcome()>>(
			[this, request]()
			{
			return this->removeQueryProcessor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveScheduledTaskOutcome OpenSearchClient::removeScheduledTask(const RemoveScheduledTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveScheduledTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveScheduledTaskOutcome(RemoveScheduledTaskResult(outcome.result()));
	else
		return RemoveScheduledTaskOutcome(outcome.error());
}

void OpenSearchClient::removeScheduledTaskAsync(const RemoveScheduledTaskRequest& request, const RemoveScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeScheduledTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveScheduledTaskOutcomeCallable OpenSearchClient::removeScheduledTaskCallable(const RemoveScheduledTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveScheduledTaskOutcome()>>(
			[this, request]()
			{
			return this->removeScheduledTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveSecondRankOutcome OpenSearchClient::removeSecondRank(const RemoveSecondRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSecondRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSecondRankOutcome(RemoveSecondRankResult(outcome.result()));
	else
		return RemoveSecondRankOutcome(outcome.error());
}

void OpenSearchClient::removeSecondRankAsync(const RemoveSecondRankRequest& request, const RemoveSecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSecondRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveSecondRankOutcomeCallable OpenSearchClient::removeSecondRankCallable(const RemoveSecondRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSecondRankOutcome()>>(
			[this, request]()
			{
			return this->removeSecondRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RemoveUserAnalyzerOutcome OpenSearchClient::removeUserAnalyzer(const RemoveUserAnalyzerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserAnalyzerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserAnalyzerOutcome(RemoveUserAnalyzerResult(outcome.result()));
	else
		return RemoveUserAnalyzerOutcome(outcome.error());
}

void OpenSearchClient::removeUserAnalyzerAsync(const RemoveUserAnalyzerRequest& request, const RemoveUserAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserAnalyzer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RemoveUserAnalyzerOutcomeCallable OpenSearchClient::removeUserAnalyzerCallable(const RemoveUserAnalyzerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserAnalyzerOutcome()>>(
			[this, request]()
			{
			return this->removeUserAnalyzer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::RenewAppGroupOutcome OpenSearchClient::renewAppGroup(const RenewAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewAppGroupOutcome(RenewAppGroupResult(outcome.result()));
	else
		return RenewAppGroupOutcome(outcome.error());
}

void OpenSearchClient::renewAppGroupAsync(const RenewAppGroupRequest& request, const RenewAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::RenewAppGroupOutcomeCallable OpenSearchClient::renewAppGroupCallable(const RenewAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewAppGroupOutcome()>>(
			[this, request]()
			{
			return this->renewAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::ReplaceAppGroupCommodityCodeOutcome OpenSearchClient::replaceAppGroupCommodityCode(const ReplaceAppGroupCommodityCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReplaceAppGroupCommodityCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReplaceAppGroupCommodityCodeOutcome(ReplaceAppGroupCommodityCodeResult(outcome.result()));
	else
		return ReplaceAppGroupCommodityCodeOutcome(outcome.error());
}

void OpenSearchClient::replaceAppGroupCommodityCodeAsync(const ReplaceAppGroupCommodityCodeRequest& request, const ReplaceAppGroupCommodityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, replaceAppGroupCommodityCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::ReplaceAppGroupCommodityCodeOutcomeCallable OpenSearchClient::replaceAppGroupCommodityCodeCallable(const ReplaceAppGroupCommodityCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReplaceAppGroupCommodityCodeOutcome()>>(
			[this, request]()
			{
			return this->replaceAppGroupCommodityCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::SaveSortScriptFileOutcome OpenSearchClient::saveSortScriptFile(const SaveSortScriptFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSortScriptFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSortScriptFileOutcome(SaveSortScriptFileResult(outcome.result()));
	else
		return SaveSortScriptFileOutcome(outcome.error());
}

void OpenSearchClient::saveSortScriptFileAsync(const SaveSortScriptFileRequest& request, const SaveSortScriptFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSortScriptFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::SaveSortScriptFileOutcomeCallable OpenSearchClient::saveSortScriptFileCallable(const SaveSortScriptFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSortScriptFileOutcome()>>(
			[this, request]()
			{
			return this->saveSortScriptFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::StartSlowQueryAnalyzerOutcome OpenSearchClient::startSlowQueryAnalyzer(const StartSlowQueryAnalyzerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartSlowQueryAnalyzerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartSlowQueryAnalyzerOutcome(StartSlowQueryAnalyzerResult(outcome.result()));
	else
		return StartSlowQueryAnalyzerOutcome(outcome.error());
}

void OpenSearchClient::startSlowQueryAnalyzerAsync(const StartSlowQueryAnalyzerRequest& request, const StartSlowQueryAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startSlowQueryAnalyzer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::StartSlowQueryAnalyzerOutcomeCallable OpenSearchClient::startSlowQueryAnalyzerCallable(const StartSlowQueryAnalyzerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartSlowQueryAnalyzerOutcome()>>(
			[this, request]()
			{
			return this->startSlowQueryAnalyzer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::TrainModelOutcome OpenSearchClient::trainModel(const TrainModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TrainModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TrainModelOutcome(TrainModelResult(outcome.result()));
	else
		return TrainModelOutcome(outcome.error());
}

void OpenSearchClient::trainModelAsync(const TrainModelRequest& request, const TrainModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, trainModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::TrainModelOutcomeCallable OpenSearchClient::trainModelCallable(const TrainModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TrainModelOutcome()>>(
			[this, request]()
			{
			return this->trainModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::UpdateABTestExperimentOutcome OpenSearchClient::updateABTestExperiment(const UpdateABTestExperimentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateABTestExperimentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateABTestExperimentOutcome(UpdateABTestExperimentResult(outcome.result()));
	else
		return UpdateABTestExperimentOutcome(outcome.error());
}

void OpenSearchClient::updateABTestExperimentAsync(const UpdateABTestExperimentRequest& request, const UpdateABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateABTestExperiment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::UpdateABTestExperimentOutcomeCallable OpenSearchClient::updateABTestExperimentCallable(const UpdateABTestExperimentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateABTestExperimentOutcome()>>(
			[this, request]()
			{
			return this->updateABTestExperiment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::UpdateABTestFixedFlowDividersOutcome OpenSearchClient::updateABTestFixedFlowDividers(const UpdateABTestFixedFlowDividersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateABTestFixedFlowDividersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateABTestFixedFlowDividersOutcome(UpdateABTestFixedFlowDividersResult(outcome.result()));
	else
		return UpdateABTestFixedFlowDividersOutcome(outcome.error());
}

void OpenSearchClient::updateABTestFixedFlowDividersAsync(const UpdateABTestFixedFlowDividersRequest& request, const UpdateABTestFixedFlowDividersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateABTestFixedFlowDividers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::UpdateABTestFixedFlowDividersOutcomeCallable OpenSearchClient::updateABTestFixedFlowDividersCallable(const UpdateABTestFixedFlowDividersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateABTestFixedFlowDividersOutcome()>>(
			[this, request]()
			{
			return this->updateABTestFixedFlowDividers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::UpdateABTestGroupOutcome OpenSearchClient::updateABTestGroup(const UpdateABTestGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateABTestGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateABTestGroupOutcome(UpdateABTestGroupResult(outcome.result()));
	else
		return UpdateABTestGroupOutcome(outcome.error());
}

void OpenSearchClient::updateABTestGroupAsync(const UpdateABTestGroupRequest& request, const UpdateABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateABTestGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::UpdateABTestGroupOutcomeCallable OpenSearchClient::updateABTestGroupCallable(const UpdateABTestGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateABTestGroupOutcome()>>(
			[this, request]()
			{
			return this->updateABTestGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::UpdateABTestSceneOutcome OpenSearchClient::updateABTestScene(const UpdateABTestSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateABTestSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateABTestSceneOutcome(UpdateABTestSceneResult(outcome.result()));
	else
		return UpdateABTestSceneOutcome(outcome.error());
}

void OpenSearchClient::updateABTestSceneAsync(const UpdateABTestSceneRequest& request, const UpdateABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateABTestScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::UpdateABTestSceneOutcomeCallable OpenSearchClient::updateABTestSceneCallable(const UpdateABTestSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateABTestSceneOutcome()>>(
			[this, request]()
			{
			return this->updateABTestScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::UpdateFetchFieldsOutcome OpenSearchClient::updateFetchFields(const UpdateFetchFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFetchFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFetchFieldsOutcome(UpdateFetchFieldsResult(outcome.result()));
	else
		return UpdateFetchFieldsOutcome(outcome.error());
}

void OpenSearchClient::updateFetchFieldsAsync(const UpdateFetchFieldsRequest& request, const UpdateFetchFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFetchFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::UpdateFetchFieldsOutcomeCallable OpenSearchClient::updateFetchFieldsCallable(const UpdateFetchFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFetchFieldsOutcome()>>(
			[this, request]()
			{
			return this->updateFetchFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenSearchClient::UpdateSummariesOutcome OpenSearchClient::updateSummaries(const UpdateSummariesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSummariesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSummariesOutcome(UpdateSummariesResult(outcome.result()));
	else
		return UpdateSummariesOutcome(outcome.error());
}

void OpenSearchClient::updateSummariesAsync(const UpdateSummariesRequest& request, const UpdateSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSummaries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenSearchClient::UpdateSummariesOutcomeCallable OpenSearchClient::updateSummariesCallable(const UpdateSummariesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSummariesOutcome()>>(
			[this, request]()
			{
			return this->updateSummaries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

