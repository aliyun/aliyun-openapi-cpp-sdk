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

#include <alibabacloud/airegistry/AIRegistryClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

namespace
{
	const std::string SERVICE_NAME = "AIRegistry";
}

AIRegistryClient::AIRegistryClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "AIRegistry");
}

AIRegistryClient::AIRegistryClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "AIRegistry");
}

AIRegistryClient::AIRegistryClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "AIRegistry");
}

AIRegistryClient::~AIRegistryClient()
{}

AIRegistryClient::CreateNamespaceOutcome AIRegistryClient::createNamespace(const CreateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNamespaceOutcome(CreateNamespaceResult(outcome.result()));
	else
		return CreateNamespaceOutcome(outcome.error());
}

void AIRegistryClient::createNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::CreateNamespaceOutcomeCallable AIRegistryClient::createNamespaceCallable(const CreateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::CreatePromptOutcome AIRegistryClient::createPrompt(const CreatePromptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePromptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePromptOutcome(CreatePromptResult(outcome.result()));
	else
		return CreatePromptOutcome(outcome.error());
}

void AIRegistryClient::createPromptAsync(const CreatePromptRequest& request, const CreatePromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrompt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::CreatePromptOutcomeCallable AIRegistryClient::createPromptCallable(const CreatePromptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePromptOutcome()>>(
			[this, request]()
			{
			return this->createPrompt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::CreatePromptVersionOutcome AIRegistryClient::createPromptVersion(const CreatePromptVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePromptVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePromptVersionOutcome(CreatePromptVersionResult(outcome.result()));
	else
		return CreatePromptVersionOutcome(outcome.error());
}

void AIRegistryClient::createPromptVersionAsync(const CreatePromptVersionRequest& request, const CreatePromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPromptVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::CreatePromptVersionOutcomeCallable AIRegistryClient::createPromptVersionCallable(const CreatePromptVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePromptVersionOutcome()>>(
			[this, request]()
			{
			return this->createPromptVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::CreateSkillDraftOutcome AIRegistryClient::createSkillDraft(const CreateSkillDraftRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSkillDraftOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSkillDraftOutcome(CreateSkillDraftResult(outcome.result()));
	else
		return CreateSkillDraftOutcome(outcome.error());
}

void AIRegistryClient::createSkillDraftAsync(const CreateSkillDraftRequest& request, const CreateSkillDraftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSkillDraft(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::CreateSkillDraftOutcomeCallable AIRegistryClient::createSkillDraftCallable(const CreateSkillDraftRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSkillDraftOutcome()>>(
			[this, request]()
			{
			return this->createSkillDraft(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::DeleteNamespaceOutcome AIRegistryClient::deleteNamespace(const DeleteNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.result()));
	else
		return DeleteNamespaceOutcome(outcome.error());
}

void AIRegistryClient::deleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::DeleteNamespaceOutcomeCallable AIRegistryClient::deleteNamespaceCallable(const DeleteNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::DeletePromptOutcome AIRegistryClient::deletePrompt(const DeletePromptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePromptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePromptOutcome(DeletePromptResult(outcome.result()));
	else
		return DeletePromptOutcome(outcome.error());
}

void AIRegistryClient::deletePromptAsync(const DeletePromptRequest& request, const DeletePromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrompt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::DeletePromptOutcomeCallable AIRegistryClient::deletePromptCallable(const DeletePromptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePromptOutcome()>>(
			[this, request]()
			{
			return this->deletePrompt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::DeleteSkillOutcome AIRegistryClient::deleteSkill(const DeleteSkillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSkillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSkillOutcome(DeleteSkillResult(outcome.result()));
	else
		return DeleteSkillOutcome(outcome.error());
}

void AIRegistryClient::deleteSkillAsync(const DeleteSkillRequest& request, const DeleteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSkill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::DeleteSkillOutcomeCallable AIRegistryClient::deleteSkillCallable(const DeleteSkillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSkillOutcome()>>(
			[this, request]()
			{
			return this->deleteSkill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::DownloadSkillVersionViaOssOutcome AIRegistryClient::downloadSkillVersionViaOss(const DownloadSkillVersionViaOssRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadSkillVersionViaOssOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadSkillVersionViaOssOutcome(DownloadSkillVersionViaOssResult(outcome.result()));
	else
		return DownloadSkillVersionViaOssOutcome(outcome.error());
}

void AIRegistryClient::downloadSkillVersionViaOssAsync(const DownloadSkillVersionViaOssRequest& request, const DownloadSkillVersionViaOssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadSkillVersionViaOss(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::DownloadSkillVersionViaOssOutcomeCallable AIRegistryClient::downloadSkillVersionViaOssCallable(const DownloadSkillVersionViaOssRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadSkillVersionViaOssOutcome()>>(
			[this, request]()
			{
			return this->downloadSkillVersionViaOss(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::ForcePublishSkillVersionOutcome AIRegistryClient::forcePublishSkillVersion(const ForcePublishSkillVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ForcePublishSkillVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForcePublishSkillVersionOutcome(ForcePublishSkillVersionResult(outcome.result()));
	else
		return ForcePublishSkillVersionOutcome(outcome.error());
}

void AIRegistryClient::forcePublishSkillVersionAsync(const ForcePublishSkillVersionRequest& request, const ForcePublishSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forcePublishSkillVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::ForcePublishSkillVersionOutcomeCallable AIRegistryClient::forcePublishSkillVersionCallable(const ForcePublishSkillVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForcePublishSkillVersionOutcome()>>(
			[this, request]()
			{
			return this->forcePublishSkillVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::GetNamespaceOutcome AIRegistryClient::getNamespace(const GetNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNamespaceOutcome(GetNamespaceResult(outcome.result()));
	else
		return GetNamespaceOutcome(outcome.error());
}

void AIRegistryClient::getNamespaceAsync(const GetNamespaceRequest& request, const GetNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::GetNamespaceOutcomeCallable AIRegistryClient::getNamespaceCallable(const GetNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNamespaceOutcome()>>(
			[this, request]()
			{
			return this->getNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::GetPromptOutcome AIRegistryClient::getPrompt(const GetPromptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPromptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPromptOutcome(GetPromptResult(outcome.result()));
	else
		return GetPromptOutcome(outcome.error());
}

void AIRegistryClient::getPromptAsync(const GetPromptRequest& request, const GetPromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrompt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::GetPromptOutcomeCallable AIRegistryClient::getPromptCallable(const GetPromptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPromptOutcome()>>(
			[this, request]()
			{
			return this->getPrompt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::GetPromptVersionOutcome AIRegistryClient::getPromptVersion(const GetPromptVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPromptVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPromptVersionOutcome(GetPromptVersionResult(outcome.result()));
	else
		return GetPromptVersionOutcome(outcome.error());
}

void AIRegistryClient::getPromptVersionAsync(const GetPromptVersionRequest& request, const GetPromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPromptVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::GetPromptVersionOutcomeCallable AIRegistryClient::getPromptVersionCallable(const GetPromptVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPromptVersionOutcome()>>(
			[this, request]()
			{
			return this->getPromptVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::GetSkillDetailOutcome AIRegistryClient::getSkillDetail(const GetSkillDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSkillDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSkillDetailOutcome(GetSkillDetailResult(outcome.result()));
	else
		return GetSkillDetailOutcome(outcome.error());
}

void AIRegistryClient::getSkillDetailAsync(const GetSkillDetailRequest& request, const GetSkillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSkillDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::GetSkillDetailOutcomeCallable AIRegistryClient::getSkillDetailCallable(const GetSkillDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSkillDetailOutcome()>>(
			[this, request]()
			{
			return this->getSkillDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::GetSkillImportFileUrlOutcome AIRegistryClient::getSkillImportFileUrl(const GetSkillImportFileUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSkillImportFileUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSkillImportFileUrlOutcome(GetSkillImportFileUrlResult(outcome.result()));
	else
		return GetSkillImportFileUrlOutcome(outcome.error());
}

void AIRegistryClient::getSkillImportFileUrlAsync(const GetSkillImportFileUrlRequest& request, const GetSkillImportFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSkillImportFileUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::GetSkillImportFileUrlOutcomeCallable AIRegistryClient::getSkillImportFileUrlCallable(const GetSkillImportFileUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSkillImportFileUrlOutcome()>>(
			[this, request]()
			{
			return this->getSkillImportFileUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::GetSkillVersionDetailOutcome AIRegistryClient::getSkillVersionDetail(const GetSkillVersionDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSkillVersionDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSkillVersionDetailOutcome(GetSkillVersionDetailResult(outcome.result()));
	else
		return GetSkillVersionDetailOutcome(outcome.error());
}

void AIRegistryClient::getSkillVersionDetailAsync(const GetSkillVersionDetailRequest& request, const GetSkillVersionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSkillVersionDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::GetSkillVersionDetailOutcomeCallable AIRegistryClient::getSkillVersionDetailCallable(const GetSkillVersionDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSkillVersionDetailOutcome()>>(
			[this, request]()
			{
			return this->getSkillVersionDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::ListNamespacesOutcome AIRegistryClient::listNamespaces(const ListNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamespacesOutcome(ListNamespacesResult(outcome.result()));
	else
		return ListNamespacesOutcome(outcome.error());
}

void AIRegistryClient::listNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::ListNamespacesOutcomeCallable AIRegistryClient::listNamespacesCallable(const ListNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::ListPromptVersionsOutcome AIRegistryClient::listPromptVersions(const ListPromptVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPromptVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPromptVersionsOutcome(ListPromptVersionsResult(outcome.result()));
	else
		return ListPromptVersionsOutcome(outcome.error());
}

void AIRegistryClient::listPromptVersionsAsync(const ListPromptVersionsRequest& request, const ListPromptVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPromptVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::ListPromptVersionsOutcomeCallable AIRegistryClient::listPromptVersionsCallable(const ListPromptVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPromptVersionsOutcome()>>(
			[this, request]()
			{
			return this->listPromptVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::ListPromptsOutcome AIRegistryClient::listPrompts(const ListPromptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPromptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPromptsOutcome(ListPromptsResult(outcome.result()));
	else
		return ListPromptsOutcome(outcome.error());
}

void AIRegistryClient::listPromptsAsync(const ListPromptsRequest& request, const ListPromptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrompts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::ListPromptsOutcomeCallable AIRegistryClient::listPromptsCallable(const ListPromptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPromptsOutcome()>>(
			[this, request]()
			{
			return this->listPrompts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::ListSkillsOutcome AIRegistryClient::listSkills(const ListSkillsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillsOutcome(ListSkillsResult(outcome.result()));
	else
		return ListSkillsOutcome(outcome.error());
}

void AIRegistryClient::listSkillsAsync(const ListSkillsRequest& request, const ListSkillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkills(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::ListSkillsOutcomeCallable AIRegistryClient::listSkillsCallable(const ListSkillsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillsOutcome()>>(
			[this, request]()
			{
			return this->listSkills(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::OfflineSkillOutcome AIRegistryClient::offlineSkill(const OfflineSkillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineSkillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineSkillOutcome(OfflineSkillResult(outcome.result()));
	else
		return OfflineSkillOutcome(outcome.error());
}

void AIRegistryClient::offlineSkillAsync(const OfflineSkillRequest& request, const OfflineSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineSkill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::OfflineSkillOutcomeCallable AIRegistryClient::offlineSkillCallable(const OfflineSkillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineSkillOutcome()>>(
			[this, request]()
			{
			return this->offlineSkill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::OnlineSkillOutcome AIRegistryClient::onlineSkill(const OnlineSkillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnlineSkillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnlineSkillOutcome(OnlineSkillResult(outcome.result()));
	else
		return OnlineSkillOutcome(outcome.error());
}

void AIRegistryClient::onlineSkillAsync(const OnlineSkillRequest& request, const OnlineSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onlineSkill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::OnlineSkillOutcomeCallable AIRegistryClient::onlineSkillCallable(const OnlineSkillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnlineSkillOutcome()>>(
			[this, request]()
			{
			return this->onlineSkill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::PublishSkillVersionOutcome AIRegistryClient::publishSkillVersion(const PublishSkillVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishSkillVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishSkillVersionOutcome(PublishSkillVersionResult(outcome.result()));
	else
		return PublishSkillVersionOutcome(outcome.error());
}

void AIRegistryClient::publishSkillVersionAsync(const PublishSkillVersionRequest& request, const PublishSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishSkillVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::PublishSkillVersionOutcomeCallable AIRegistryClient::publishSkillVersionCallable(const PublishSkillVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishSkillVersionOutcome()>>(
			[this, request]()
			{
			return this->publishSkillVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::RedraftSkillVersionOutcome AIRegistryClient::redraftSkillVersion(const RedraftSkillVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RedraftSkillVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RedraftSkillVersionOutcome(RedraftSkillVersionResult(outcome.result()));
	else
		return RedraftSkillVersionOutcome(outcome.error());
}

void AIRegistryClient::redraftSkillVersionAsync(const RedraftSkillVersionRequest& request, const RedraftSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, redraftSkillVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::RedraftSkillVersionOutcomeCallable AIRegistryClient::redraftSkillVersionCallable(const RedraftSkillVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RedraftSkillVersionOutcome()>>(
			[this, request]()
			{
			return this->redraftSkillVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::SubmitPromptVersionOutcome AIRegistryClient::submitPromptVersion(const SubmitPromptVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitPromptVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitPromptVersionOutcome(SubmitPromptVersionResult(outcome.result()));
	else
		return SubmitPromptVersionOutcome(outcome.error());
}

void AIRegistryClient::submitPromptVersionAsync(const SubmitPromptVersionRequest& request, const SubmitPromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitPromptVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::SubmitPromptVersionOutcomeCallable AIRegistryClient::submitPromptVersionCallable(const SubmitPromptVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitPromptVersionOutcome()>>(
			[this, request]()
			{
			return this->submitPromptVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::SubmitSkillVersionOutcome AIRegistryClient::submitSkillVersion(const SubmitSkillVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSkillVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSkillVersionOutcome(SubmitSkillVersionResult(outcome.result()));
	else
		return SubmitSkillVersionOutcome(outcome.error());
}

void AIRegistryClient::submitSkillVersionAsync(const SubmitSkillVersionRequest& request, const SubmitSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSkillVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::SubmitSkillVersionOutcomeCallable AIRegistryClient::submitSkillVersionCallable(const SubmitSkillVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSkillVersionOutcome()>>(
			[this, request]()
			{
			return this->submitSkillVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdateNamespaceOutcome AIRegistryClient::updateNamespace(const UpdateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNamespaceOutcome(UpdateNamespaceResult(outcome.result()));
	else
		return UpdateNamespaceOutcome(outcome.error());
}

void AIRegistryClient::updateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdateNamespaceOutcomeCallable AIRegistryClient::updateNamespaceCallable(const UpdateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->updateNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdatePromptOutcome AIRegistryClient::updatePrompt(const UpdatePromptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePromptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePromptOutcome(UpdatePromptResult(outcome.result()));
	else
		return UpdatePromptOutcome(outcome.error());
}

void AIRegistryClient::updatePromptAsync(const UpdatePromptRequest& request, const UpdatePromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrompt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdatePromptOutcomeCallable AIRegistryClient::updatePromptCallable(const UpdatePromptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePromptOutcome()>>(
			[this, request]()
			{
			return this->updatePrompt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdatePromptVersionOutcome AIRegistryClient::updatePromptVersion(const UpdatePromptVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePromptVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePromptVersionOutcome(UpdatePromptVersionResult(outcome.result()));
	else
		return UpdatePromptVersionOutcome(outcome.error());
}

void AIRegistryClient::updatePromptVersionAsync(const UpdatePromptVersionRequest& request, const UpdatePromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePromptVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdatePromptVersionOutcomeCallable AIRegistryClient::updatePromptVersionCallable(const UpdatePromptVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePromptVersionOutcome()>>(
			[this, request]()
			{
			return this->updatePromptVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdateSkillBizTagsOutcome AIRegistryClient::updateSkillBizTags(const UpdateSkillBizTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSkillBizTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSkillBizTagsOutcome(UpdateSkillBizTagsResult(outcome.result()));
	else
		return UpdateSkillBizTagsOutcome(outcome.error());
}

void AIRegistryClient::updateSkillBizTagsAsync(const UpdateSkillBizTagsRequest& request, const UpdateSkillBizTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSkillBizTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdateSkillBizTagsOutcomeCallable AIRegistryClient::updateSkillBizTagsCallable(const UpdateSkillBizTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSkillBizTagsOutcome()>>(
			[this, request]()
			{
			return this->updateSkillBizTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdateSkillDraftOutcome AIRegistryClient::updateSkillDraft(const UpdateSkillDraftRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSkillDraftOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSkillDraftOutcome(UpdateSkillDraftResult(outcome.result()));
	else
		return UpdateSkillDraftOutcome(outcome.error());
}

void AIRegistryClient::updateSkillDraftAsync(const UpdateSkillDraftRequest& request, const UpdateSkillDraftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSkillDraft(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdateSkillDraftOutcomeCallable AIRegistryClient::updateSkillDraftCallable(const UpdateSkillDraftRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSkillDraftOutcome()>>(
			[this, request]()
			{
			return this->updateSkillDraft(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdateSkillLabelsOutcome AIRegistryClient::updateSkillLabels(const UpdateSkillLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSkillLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSkillLabelsOutcome(UpdateSkillLabelsResult(outcome.result()));
	else
		return UpdateSkillLabelsOutcome(outcome.error());
}

void AIRegistryClient::updateSkillLabelsAsync(const UpdateSkillLabelsRequest& request, const UpdateSkillLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSkillLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdateSkillLabelsOutcomeCallable AIRegistryClient::updateSkillLabelsCallable(const UpdateSkillLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSkillLabelsOutcome()>>(
			[this, request]()
			{
			return this->updateSkillLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UpdateSkillScopeOutcome AIRegistryClient::updateSkillScope(const UpdateSkillScopeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSkillScopeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSkillScopeOutcome(UpdateSkillScopeResult(outcome.result()));
	else
		return UpdateSkillScopeOutcome(outcome.error());
}

void AIRegistryClient::updateSkillScopeAsync(const UpdateSkillScopeRequest& request, const UpdateSkillScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSkillScope(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UpdateSkillScopeOutcomeCallable AIRegistryClient::updateSkillScopeCallable(const UpdateSkillScopeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSkillScopeOutcome()>>(
			[this, request]()
			{
			return this->updateSkillScope(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIRegistryClient::UploadSkillViaOssOutcome AIRegistryClient::uploadSkillViaOss(const UploadSkillViaOssRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadSkillViaOssOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadSkillViaOssOutcome(UploadSkillViaOssResult(outcome.result()));
	else
		return UploadSkillViaOssOutcome(outcome.error());
}

void AIRegistryClient::uploadSkillViaOssAsync(const UploadSkillViaOssRequest& request, const UploadSkillViaOssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadSkillViaOss(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIRegistryClient::UploadSkillViaOssOutcomeCallable AIRegistryClient::uploadSkillViaOssCallable(const UploadSkillViaOssRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadSkillViaOssOutcome()>>(
			[this, request]()
			{
			return this->uploadSkillViaOss(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

