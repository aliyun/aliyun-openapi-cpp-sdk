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

#include <alibabacloud/tdsr/TdsrClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Tdsr;
using namespace AlibabaCloud::Tdsr::Model;

namespace
{
	const std::string SERVICE_NAME = "tdsr";
}

TdsrClient::TdsrClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

TdsrClient::TdsrClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

TdsrClient::TdsrClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

TdsrClient::~TdsrClient()
{}

TdsrClient::CheckPermissionOutcome TdsrClient::checkPermission(const CheckPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckPermissionOutcome(CheckPermissionResult(outcome.result()));
	else
		return CheckPermissionOutcome(outcome.error());
}

void TdsrClient::checkPermissionAsync(const CheckPermissionRequest& request, const CheckPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::CheckPermissionOutcomeCallable TdsrClient::checkPermissionCallable(const CheckPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckPermissionOutcome()>>(
			[this, request]()
			{
			return this->checkPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::CheckResourceOutcome TdsrClient::checkResource(const CheckResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckResourceOutcome(CheckResourceResult(outcome.result()));
	else
		return CheckResourceOutcome(outcome.error());
}

void TdsrClient::checkResourceAsync(const CheckResourceRequest& request, const CheckResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::CheckResourceOutcomeCallable TdsrClient::checkResourceCallable(const CheckResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckResourceOutcome()>>(
			[this, request]()
			{
			return this->checkResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::CreateProjectOutcome TdsrClient::createProject(const CreateProjectRequest &request) const
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

void TdsrClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::CreateProjectOutcomeCallable TdsrClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::CreateSceneOutcome TdsrClient::createScene(const CreateSceneRequest &request) const
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

void TdsrClient::createSceneAsync(const CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::CreateSceneOutcomeCallable TdsrClient::createSceneCallable(const CreateSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSceneOutcome()>>(
			[this, request]()
			{
			return this->createScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::DeleteFileOutcome TdsrClient::deleteFile(const DeleteFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileOutcome(DeleteFileResult(outcome.result()));
	else
		return DeleteFileOutcome(outcome.error());
}

void TdsrClient::deleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::DeleteFileOutcomeCallable TdsrClient::deleteFileCallable(const DeleteFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
			[this, request]()
			{
			return this->deleteFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::DeleteProjectOutcome TdsrClient::deleteProject(const DeleteProjectRequest &request) const
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

void TdsrClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::DeleteProjectOutcomeCallable TdsrClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::GetHotspotConfigOutcome TdsrClient::getHotspotConfig(const GetHotspotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotspotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotspotConfigOutcome(GetHotspotConfigResult(outcome.result()));
	else
		return GetHotspotConfigOutcome(outcome.error());
}

void TdsrClient::getHotspotConfigAsync(const GetHotspotConfigRequest& request, const GetHotspotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotspotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::GetHotspotConfigOutcomeCallable TdsrClient::getHotspotConfigCallable(const GetHotspotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotspotConfigOutcome()>>(
			[this, request]()
			{
			return this->getHotspotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::GetHotspotTagOutcome TdsrClient::getHotspotTag(const GetHotspotTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotspotTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotspotTagOutcome(GetHotspotTagResult(outcome.result()));
	else
		return GetHotspotTagOutcome(outcome.error());
}

void TdsrClient::getHotspotTagAsync(const GetHotspotTagRequest& request, const GetHotspotTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotspotTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::GetHotspotTagOutcomeCallable TdsrClient::getHotspotTagCallable(const GetHotspotTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotspotTagOutcome()>>(
			[this, request]()
			{
			return this->getHotspotTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::GetPolicyOutcome TdsrClient::getPolicy(const GetPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPolicyOutcome(GetPolicyResult(outcome.result()));
	else
		return GetPolicyOutcome(outcome.error());
}

void TdsrClient::getPolicyAsync(const GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::GetPolicyOutcomeCallable TdsrClient::getPolicyCallable(const GetPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPolicyOutcome()>>(
			[this, request]()
			{
			return this->getPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::GetSceneDataOutcome TdsrClient::getSceneData(const GetSceneDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSceneDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSceneDataOutcome(GetSceneDataResult(outcome.result()));
	else
		return GetSceneDataOutcome(outcome.error());
}

void TdsrClient::getSceneDataAsync(const GetSceneDataRequest& request, const GetSceneDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSceneData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::GetSceneDataOutcomeCallable TdsrClient::getSceneDataCallable(const GetSceneDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSceneDataOutcome()>>(
			[this, request]()
			{
			return this->getSceneData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::GetSceneListOutcome TdsrClient::getSceneList(const GetSceneListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSceneListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSceneListOutcome(GetSceneListResult(outcome.result()));
	else
		return GetSceneListOutcome(outcome.error());
}

void TdsrClient::getSceneListAsync(const GetSceneListRequest& request, const GetSceneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSceneList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::GetSceneListOutcomeCallable TdsrClient::getSceneListCallable(const GetSceneListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSceneListOutcome()>>(
			[this, request]()
			{
			return this->getSceneList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::GetWindowConfigOutcome TdsrClient::getWindowConfig(const GetWindowConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWindowConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWindowConfigOutcome(GetWindowConfigResult(outcome.result()));
	else
		return GetWindowConfigOutcome(outcome.error());
}

void TdsrClient::getWindowConfigAsync(const GetWindowConfigRequest& request, const GetWindowConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWindowConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::GetWindowConfigOutcomeCallable TdsrClient::getWindowConfigCallable(const GetWindowConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWindowConfigOutcome()>>(
			[this, request]()
			{
			return this->getWindowConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::ListMainScenesOutcome TdsrClient::listMainScenes(const ListMainScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMainScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMainScenesOutcome(ListMainScenesResult(outcome.result()));
	else
		return ListMainScenesOutcome(outcome.error());
}

void TdsrClient::listMainScenesAsync(const ListMainScenesRequest& request, const ListMainScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMainScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::ListMainScenesOutcomeCallable TdsrClient::listMainScenesCallable(const ListMainScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMainScenesOutcome()>>(
			[this, request]()
			{
			return this->listMainScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::ListScenesOutcome TdsrClient::listScenes(const ListScenesRequest &request) const
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

void TdsrClient::listScenesAsync(const ListScenesRequest& request, const ListScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::ListScenesOutcomeCallable TdsrClient::listScenesCallable(const ListScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenesOutcome()>>(
			[this, request]()
			{
			return this->listScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::PublishHotspotOutcome TdsrClient::publishHotspot(const PublishHotspotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishHotspotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishHotspotOutcome(PublishHotspotResult(outcome.result()));
	else
		return PublishHotspotOutcome(outcome.error());
}

void TdsrClient::publishHotspotAsync(const PublishHotspotRequest& request, const PublishHotspotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishHotspot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::PublishHotspotOutcomeCallable TdsrClient::publishHotspotCallable(const PublishHotspotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishHotspotOutcome()>>(
			[this, request]()
			{
			return this->publishHotspot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::SaveFileOutcome TdsrClient::saveFile(const SaveFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveFileOutcome(SaveFileResult(outcome.result()));
	else
		return SaveFileOutcome(outcome.error());
}

void TdsrClient::saveFileAsync(const SaveFileRequest& request, const SaveFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::SaveFileOutcomeCallable TdsrClient::saveFileCallable(const SaveFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveFileOutcome()>>(
			[this, request]()
			{
			return this->saveFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::SaveHotspotConfigOutcome TdsrClient::saveHotspotConfig(const SaveHotspotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveHotspotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveHotspotConfigOutcome(SaveHotspotConfigResult(outcome.result()));
	else
		return SaveHotspotConfigOutcome(outcome.error());
}

void TdsrClient::saveHotspotConfigAsync(const SaveHotspotConfigRequest& request, const SaveHotspotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveHotspotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::SaveHotspotConfigOutcomeCallable TdsrClient::saveHotspotConfigCallable(const SaveHotspotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveHotspotConfigOutcome()>>(
			[this, request]()
			{
			return this->saveHotspotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TdsrClient::SaveHotspotTagOutcome TdsrClient::saveHotspotTag(const SaveHotspotTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveHotspotTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveHotspotTagOutcome(SaveHotspotTagResult(outcome.result()));
	else
		return SaveHotspotTagOutcome(outcome.error());
}

void TdsrClient::saveHotspotTagAsync(const SaveHotspotTagRequest& request, const SaveHotspotTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveHotspotTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TdsrClient::SaveHotspotTagOutcomeCallable TdsrClient::saveHotspotTagCallable(const SaveHotspotTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveHotspotTagOutcome()>>(
			[this, request]()
			{
			return this->saveHotspotTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

