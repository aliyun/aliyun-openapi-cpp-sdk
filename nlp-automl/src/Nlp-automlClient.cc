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

#include <alibabacloud/nlp-automl/Nlp_automlClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Nlp_automl;
using namespace AlibabaCloud::Nlp_automl::Model;

namespace
{
	const std::string SERVICE_NAME = "nlp-automl";
}

Nlp_automlClient::Nlp_automlClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlpautoml");
}

Nlp_automlClient::Nlp_automlClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlpautoml");
}

Nlp_automlClient::Nlp_automlClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "nlpautoml");
}

Nlp_automlClient::~Nlp_automlClient()
{}

Nlp_automlClient::AddMTInterveneWordOutcome Nlp_automlClient::addMTInterveneWord(const AddMTInterveneWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMTInterveneWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMTInterveneWordOutcome(AddMTInterveneWordResult(outcome.result()));
	else
		return AddMTInterveneWordOutcome(outcome.error());
}

void Nlp_automlClient::addMTInterveneWordAsync(const AddMTInterveneWordRequest& request, const AddMTInterveneWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMTInterveneWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::AddMTInterveneWordOutcomeCallable Nlp_automlClient::addMTInterveneWordCallable(const AddMTInterveneWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMTInterveneWordOutcome()>>(
			[this, request]()
			{
			return this->addMTInterveneWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::AddMtIntervenePackageOutcome Nlp_automlClient::addMtIntervenePackage(const AddMtIntervenePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMtIntervenePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMtIntervenePackageOutcome(AddMtIntervenePackageResult(outcome.result()));
	else
		return AddMtIntervenePackageOutcome(outcome.error());
}

void Nlp_automlClient::addMtIntervenePackageAsync(const AddMtIntervenePackageRequest& request, const AddMtIntervenePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMtIntervenePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::AddMtIntervenePackageOutcomeCallable Nlp_automlClient::addMtIntervenePackageCallable(const AddMtIntervenePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMtIntervenePackageOutcome()>>(
			[this, request]()
			{
			return this->addMtIntervenePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::BindIntervenePackageAndModelOutcome Nlp_automlClient::bindIntervenePackageAndModel(const BindIntervenePackageAndModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindIntervenePackageAndModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindIntervenePackageAndModelOutcome(BindIntervenePackageAndModelResult(outcome.result()));
	else
		return BindIntervenePackageAndModelOutcome(outcome.error());
}

void Nlp_automlClient::bindIntervenePackageAndModelAsync(const BindIntervenePackageAndModelRequest& request, const BindIntervenePackageAndModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindIntervenePackageAndModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::BindIntervenePackageAndModelOutcomeCallable Nlp_automlClient::bindIntervenePackageAndModelCallable(const BindIntervenePackageAndModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindIntervenePackageAndModelOutcome()>>(
			[this, request]()
			{
			return this->bindIntervenePackageAndModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::CreateAsyncPredictOutcome Nlp_automlClient::createAsyncPredict(const CreateAsyncPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAsyncPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAsyncPredictOutcome(CreateAsyncPredictResult(outcome.result()));
	else
		return CreateAsyncPredictOutcome(outcome.error());
}

void Nlp_automlClient::createAsyncPredictAsync(const CreateAsyncPredictRequest& request, const CreateAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAsyncPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::CreateAsyncPredictOutcomeCallable Nlp_automlClient::createAsyncPredictCallable(const CreateAsyncPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAsyncPredictOutcome()>>(
			[this, request]()
			{
			return this->createAsyncPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::CreateDatasetOutcome Nlp_automlClient::createDataset(const CreateDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasetOutcome(CreateDatasetResult(outcome.result()));
	else
		return CreateDatasetOutcome(outcome.error());
}

void Nlp_automlClient::createDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::CreateDatasetOutcomeCallable Nlp_automlClient::createDatasetCallable(const CreateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetOutcome()>>(
			[this, request]()
			{
			return this->createDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::CreateDatasetRecordOutcome Nlp_automlClient::createDatasetRecord(const CreateDatasetRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasetRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasetRecordOutcome(CreateDatasetRecordResult(outcome.result()));
	else
		return CreateDatasetRecordOutcome(outcome.error());
}

void Nlp_automlClient::createDatasetRecordAsync(const CreateDatasetRecordRequest& request, const CreateDatasetRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatasetRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::CreateDatasetRecordOutcomeCallable Nlp_automlClient::createDatasetRecordCallable(const CreateDatasetRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetRecordOutcome()>>(
			[this, request]()
			{
			return this->createDatasetRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::CreateModelOutcome Nlp_automlClient::createModel(const CreateModelRequest &request) const
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

void Nlp_automlClient::createModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::CreateModelOutcomeCallable Nlp_automlClient::createModelCallable(const CreateModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelOutcome()>>(
			[this, request]()
			{
			return this->createModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::CreateProjectOutcome Nlp_automlClient::createProject(const CreateProjectRequest &request) const
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

void Nlp_automlClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::CreateProjectOutcomeCallable Nlp_automlClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::DeleteModelOutcome Nlp_automlClient::deleteModel(const DeleteModelRequest &request) const
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

void Nlp_automlClient::deleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::DeleteModelOutcomeCallable Nlp_automlClient::deleteModelCallable(const DeleteModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteModelOutcome()>>(
			[this, request]()
			{
			return this->deleteModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::DeployModelOutcome Nlp_automlClient::deployModel(const DeployModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployModelOutcome(DeployModelResult(outcome.result()));
	else
		return DeployModelOutcome(outcome.error());
}

void Nlp_automlClient::deployModelAsync(const DeployModelRequest& request, const DeployModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::DeployModelOutcomeCallable Nlp_automlClient::deployModelCallable(const DeployModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployModelOutcome()>>(
			[this, request]()
			{
			return this->deployModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetAsyncPredictOutcome Nlp_automlClient::getAsyncPredict(const GetAsyncPredictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncPredictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncPredictOutcome(GetAsyncPredictResult(outcome.result()));
	else
		return GetAsyncPredictOutcome(outcome.error());
}

void Nlp_automlClient::getAsyncPredictAsync(const GetAsyncPredictRequest& request, const GetAsyncPredictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncPredict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetAsyncPredictOutcomeCallable Nlp_automlClient::getAsyncPredictCallable(const GetAsyncPredictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncPredictOutcome()>>(
			[this, request]()
			{
			return this->getAsyncPredict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetModelOutcome Nlp_automlClient::getModel(const GetModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelOutcome(GetModelResult(outcome.result()));
	else
		return GetModelOutcome(outcome.error());
}

void Nlp_automlClient::getModelAsync(const GetModelRequest& request, const GetModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetModelOutcomeCallable Nlp_automlClient::getModelCallable(const GetModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelOutcome()>>(
			[this, request]()
			{
			return this->getModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetPredictDocOutcome Nlp_automlClient::getPredictDoc(const GetPredictDocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPredictDocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPredictDocOutcome(GetPredictDocResult(outcome.result()));
	else
		return GetPredictDocOutcome(outcome.error());
}

void Nlp_automlClient::getPredictDocAsync(const GetPredictDocRequest& request, const GetPredictDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPredictDoc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetPredictDocOutcomeCallable Nlp_automlClient::getPredictDocCallable(const GetPredictDocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPredictDocOutcome()>>(
			[this, request]()
			{
			return this->getPredictDoc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::GetPredictResultOutcome Nlp_automlClient::getPredictResult(const GetPredictResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPredictResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPredictResultOutcome(GetPredictResultResult(outcome.result()));
	else
		return GetPredictResultOutcome(outcome.error());
}

void Nlp_automlClient::getPredictResultAsync(const GetPredictResultRequest& request, const GetPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPredictResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::GetPredictResultOutcomeCallable Nlp_automlClient::getPredictResultCallable(const GetPredictResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPredictResultOutcome()>>(
			[this, request]()
			{
			return this->getPredictResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::InvokeActionOutcome Nlp_automlClient::invokeAction(const InvokeActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeActionOutcome(InvokeActionResult(outcome.result()));
	else
		return InvokeActionOutcome(outcome.error());
}

void Nlp_automlClient::invokeActionAsync(const InvokeActionRequest& request, const InvokeActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::InvokeActionOutcomeCallable Nlp_automlClient::invokeActionCallable(const InvokeActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeActionOutcome()>>(
			[this, request]()
			{
			return this->invokeAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::ListDatasetOutcome Nlp_automlClient::listDataset(const ListDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasetOutcome(ListDatasetResult(outcome.result()));
	else
		return ListDatasetOutcome(outcome.error());
}

void Nlp_automlClient::listDatasetAsync(const ListDatasetRequest& request, const ListDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::ListDatasetOutcomeCallable Nlp_automlClient::listDatasetCallable(const ListDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasetOutcome()>>(
			[this, request]()
			{
			return this->listDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::ListModelsOutcome Nlp_automlClient::listModels(const ListModelsRequest &request) const
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

void Nlp_automlClient::listModelsAsync(const ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::ListModelsOutcomeCallable Nlp_automlClient::listModelsCallable(const ListModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModelsOutcome()>>(
			[this, request]()
			{
			return this->listModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::PredictMTModelOutcome Nlp_automlClient::predictMTModel(const PredictMTModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictMTModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictMTModelOutcome(PredictMTModelResult(outcome.result()));
	else
		return PredictMTModelOutcome(outcome.error());
}

void Nlp_automlClient::predictMTModelAsync(const PredictMTModelRequest& request, const PredictMTModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictMTModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::PredictMTModelOutcomeCallable Nlp_automlClient::predictMTModelCallable(const PredictMTModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictMTModelOutcome()>>(
			[this, request]()
			{
			return this->predictMTModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::PredictMTModelByDocOutcome Nlp_automlClient::predictMTModelByDoc(const PredictMTModelByDocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PredictMTModelByDocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PredictMTModelByDocOutcome(PredictMTModelByDocResult(outcome.result()));
	else
		return PredictMTModelByDocOutcome(outcome.error());
}

void Nlp_automlClient::predictMTModelByDocAsync(const PredictMTModelByDocRequest& request, const PredictMTModelByDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, predictMTModelByDoc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::PredictMTModelByDocOutcomeCallable Nlp_automlClient::predictMTModelByDocCallable(const PredictMTModelByDocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PredictMTModelByDocOutcome()>>(
			[this, request]()
			{
			return this->predictMTModelByDoc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::RunContactReviewOutcome Nlp_automlClient::runContactReview(const RunContactReviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunContactReviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunContactReviewOutcome(RunContactReviewResult(outcome.result()));
	else
		return RunContactReviewOutcome(outcome.error());
}

void Nlp_automlClient::runContactReviewAsync(const RunContactReviewRequest& request, const RunContactReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runContactReview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::RunContactReviewOutcomeCallable Nlp_automlClient::runContactReviewCallable(const RunContactReviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunContactReviewOutcome()>>(
			[this, request]()
			{
			return this->runContactReview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::RunPreTrainServiceOutcome Nlp_automlClient::runPreTrainService(const RunPreTrainServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunPreTrainServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunPreTrainServiceOutcome(RunPreTrainServiceResult(outcome.result()));
	else
		return RunPreTrainServiceOutcome(outcome.error());
}

void Nlp_automlClient::runPreTrainServiceAsync(const RunPreTrainServiceRequest& request, const RunPreTrainServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runPreTrainService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::RunPreTrainServiceOutcomeCallable Nlp_automlClient::runPreTrainServiceCallable(const RunPreTrainServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunPreTrainServiceOutcome()>>(
			[this, request]()
			{
			return this->runPreTrainService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Nlp_automlClient::RunSmartCallServiceOutcome Nlp_automlClient::runSmartCallService(const RunSmartCallServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunSmartCallServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunSmartCallServiceOutcome(RunSmartCallServiceResult(outcome.result()));
	else
		return RunSmartCallServiceOutcome(outcome.error());
}

void Nlp_automlClient::runSmartCallServiceAsync(const RunSmartCallServiceRequest& request, const RunSmartCallServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runSmartCallService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Nlp_automlClient::RunSmartCallServiceOutcomeCallable Nlp_automlClient::runSmartCallServiceCallable(const RunSmartCallServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunSmartCallServiceOutcome()>>(
			[this, request]()
			{
			return this->runSmartCallService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

