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

#include <alibabacloud/iqa/IqaClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Iqa;
using namespace AlibabaCloud::Iqa::Model;

namespace
{
	const std::string SERVICE_NAME = "iqa";
}

IqaClient::IqaClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "iqa");
}

IqaClient::IqaClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "iqa");
}

IqaClient::IqaClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "iqa");
}

IqaClient::~IqaClient()
{}

IqaClient::CreateProjectOutcome IqaClient::createProject(const CreateProjectRequest &request) const
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

void IqaClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::CreateProjectOutcomeCallable IqaClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::DeleteProjectOutcome IqaClient::deleteProject(const DeleteProjectRequest &request) const
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

void IqaClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::DeleteProjectOutcomeCallable IqaClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::DeployServiceOutcome IqaClient::deployService(const DeployServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployServiceOutcome(DeployServiceResult(outcome.result()));
	else
		return DeployServiceOutcome(outcome.error());
}

void IqaClient::deployServiceAsync(const DeployServiceRequest& request, const DeployServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::DeployServiceOutcomeCallable IqaClient::deployServiceCallable(const DeployServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployServiceOutcome()>>(
			[this, request]()
			{
			return this->deployService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::DescribeProjectOutcome IqaClient::describeProject(const DescribeProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeProjectOutcome(DescribeProjectResult(outcome.result()));
	else
		return DescribeProjectOutcome(outcome.error());
}

void IqaClient::describeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::DescribeProjectOutcomeCallable IqaClient::describeProjectCallable(const DescribeProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeProjectOutcome()>>(
			[this, request]()
			{
			return this->describeProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::GetPredictResultOutcome IqaClient::getPredictResult(const GetPredictResultRequest &request) const
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

void IqaClient::getPredictResultAsync(const GetPredictResultRequest& request, const GetPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPredictResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::GetPredictResultOutcomeCallable IqaClient::getPredictResultCallable(const GetPredictResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPredictResultOutcome()>>(
			[this, request]()
			{
			return this->getPredictResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::ListProjectsOutcome IqaClient::listProjects(const ListProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectsOutcome(ListProjectsResult(outcome.result()));
	else
		return ListProjectsOutcome(outcome.error());
}

void IqaClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::ListProjectsOutcomeCallable IqaClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::ModifiyProjectOutcome IqaClient::modifiyProject(const ModifiyProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifiyProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifiyProjectOutcome(ModifiyProjectResult(outcome.result()));
	else
		return ModifiyProjectOutcome(outcome.error());
}

void IqaClient::modifiyProjectAsync(const ModifiyProjectRequest& request, const ModifiyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifiyProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::ModifiyProjectOutcomeCallable IqaClient::modifiyProjectCallable(const ModifiyProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifiyProjectOutcome()>>(
			[this, request]()
			{
			return this->modifiyProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::UploadDictionaryOutcome IqaClient::uploadDictionary(const UploadDictionaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadDictionaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadDictionaryOutcome(UploadDictionaryResult(outcome.result()));
	else
		return UploadDictionaryOutcome(outcome.error());
}

void IqaClient::uploadDictionaryAsync(const UploadDictionaryRequest& request, const UploadDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadDictionary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::UploadDictionaryOutcomeCallable IqaClient::uploadDictionaryCallable(const UploadDictionaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadDictionaryOutcome()>>(
			[this, request]()
			{
			return this->uploadDictionary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

IqaClient::UploadDocumentOutcome IqaClient::uploadDocument(const UploadDocumentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadDocumentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadDocumentOutcome(UploadDocumentResult(outcome.result()));
	else
		return UploadDocumentOutcome(outcome.error());
}

void IqaClient::uploadDocumentAsync(const UploadDocumentRequest& request, const UploadDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadDocument(request), context);
	};

	asyncExecute(new Runnable(fn));
}

IqaClient::UploadDocumentOutcomeCallable IqaClient::uploadDocumentCallable(const UploadDocumentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadDocumentOutcome()>>(
			[this, request]()
			{
			return this->uploadDocument(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

