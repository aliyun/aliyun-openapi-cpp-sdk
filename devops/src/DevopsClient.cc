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

#include <alibabacloud/devops/DevopsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

namespace
{
	const std::string SERVICE_NAME = "devops";
}

DevopsClient::DevopsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DevopsClient::DevopsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DevopsClient::DevopsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DevopsClient::~DevopsClient()
{}

DevopsClient::AddGroupMemberOutcome DevopsClient::addGroupMember(const AddGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGroupMemberOutcome(AddGroupMemberResult(outcome.result()));
	else
		return AddGroupMemberOutcome(outcome.error());
}

void DevopsClient::addGroupMemberAsync(const AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::AddGroupMemberOutcomeCallable DevopsClient::addGroupMemberCallable(const AddGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->addGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::AddPipelineRelationsOutcome DevopsClient::addPipelineRelations(const AddPipelineRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPipelineRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPipelineRelationsOutcome(AddPipelineRelationsResult(outcome.result()));
	else
		return AddPipelineRelationsOutcome(outcome.error());
}

void DevopsClient::addPipelineRelationsAsync(const AddPipelineRelationsRequest& request, const AddPipelineRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPipelineRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::AddPipelineRelationsOutcomeCallable DevopsClient::addPipelineRelationsCallable(const AddPipelineRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPipelineRelationsOutcome()>>(
			[this, request]()
			{
			return this->addPipelineRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::AddRepositoryMemberOutcome DevopsClient::addRepositoryMember(const AddRepositoryMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRepositoryMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRepositoryMemberOutcome(AddRepositoryMemberResult(outcome.result()));
	else
		return AddRepositoryMemberOutcome(outcome.error());
}

void DevopsClient::addRepositoryMemberAsync(const AddRepositoryMemberRequest& request, const AddRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::AddRepositoryMemberOutcomeCallable DevopsClient::addRepositoryMemberCallable(const AddRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->addRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::AddWebhookOutcome DevopsClient::addWebhook(const AddWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddWebhookOutcome(AddWebhookResult(outcome.result()));
	else
		return AddWebhookOutcome(outcome.error());
}

void DevopsClient::addWebhookAsync(const AddWebhookRequest& request, const AddWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::AddWebhookOutcomeCallable DevopsClient::addWebhookCallable(const AddWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddWebhookOutcome()>>(
			[this, request]()
			{
			return this->addWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CloseMergeRequestOutcome DevopsClient::closeMergeRequest(const CloseMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseMergeRequestOutcome(CloseMergeRequestResult(outcome.result()));
	else
		return CloseMergeRequestOutcome(outcome.error());
}

void DevopsClient::closeMergeRequestAsync(const CloseMergeRequestRequest& request, const CloseMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CloseMergeRequestOutcomeCallable DevopsClient::closeMergeRequestCallable(const CloseMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->closeMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateAppMembersOutcome DevopsClient::createAppMembers(const CreateAppMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppMembersOutcome(CreateAppMembersResult(outcome.result()));
	else
		return CreateAppMembersOutcome(outcome.error());
}

void DevopsClient::createAppMembersAsync(const CreateAppMembersRequest& request, const CreateAppMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateAppMembersOutcomeCallable DevopsClient::createAppMembersCallable(const CreateAppMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppMembersOutcome()>>(
			[this, request]()
			{
			return this->createAppMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateBranchOutcome DevopsClient::createBranch(const CreateBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBranchOutcome(CreateBranchResult(outcome.result()));
	else
		return CreateBranchOutcome(outcome.error());
}

void DevopsClient::createBranchAsync(const CreateBranchRequest& request, const CreateBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateBranchOutcomeCallable DevopsClient::createBranchCallable(const CreateBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBranchOutcome()>>(
			[this, request]()
			{
			return this->createBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateCheckRunOutcome DevopsClient::createCheckRun(const CreateCheckRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCheckRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCheckRunOutcome(CreateCheckRunResult(outcome.result()));
	else
		return CreateCheckRunOutcome(outcome.error());
}

void DevopsClient::createCheckRunAsync(const CreateCheckRunRequest& request, const CreateCheckRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCheckRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateCheckRunOutcomeCallable DevopsClient::createCheckRunCallable(const CreateCheckRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCheckRunOutcome()>>(
			[this, request]()
			{
			return this->createCheckRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateCommentOutcome DevopsClient::createComment(const CreateCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommentOutcome(CreateCommentResult(outcome.result()));
	else
		return CreateCommentOutcome(outcome.error());
}

void DevopsClient::createCommentAsync(const CreateCommentRequest& request, const CreateCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateCommentOutcomeCallable DevopsClient::createCommentCallable(const CreateCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommentOutcome()>>(
			[this, request]()
			{
			return this->createComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateCommitStatusOutcome DevopsClient::createCommitStatus(const CreateCommitStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommitStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommitStatusOutcome(CreateCommitStatusResult(outcome.result()));
	else
		return CreateCommitStatusOutcome(outcome.error());
}

void DevopsClient::createCommitStatusAsync(const CreateCommitStatusRequest& request, const CreateCommitStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommitStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateCommitStatusOutcomeCallable DevopsClient::createCommitStatusCallable(const CreateCommitStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommitStatusOutcome()>>(
			[this, request]()
			{
			return this->createCommitStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateCommitWithMultipleFilesOutcome DevopsClient::createCommitWithMultipleFiles(const CreateCommitWithMultipleFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommitWithMultipleFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommitWithMultipleFilesOutcome(CreateCommitWithMultipleFilesResult(outcome.result()));
	else
		return CreateCommitWithMultipleFilesOutcome(outcome.error());
}

void DevopsClient::createCommitWithMultipleFilesAsync(const CreateCommitWithMultipleFilesRequest& request, const CreateCommitWithMultipleFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommitWithMultipleFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateCommitWithMultipleFilesOutcomeCallable DevopsClient::createCommitWithMultipleFilesCallable(const CreateCommitWithMultipleFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommitWithMultipleFilesOutcome()>>(
			[this, request]()
			{
			return this->createCommitWithMultipleFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateDeployKeyOutcome DevopsClient::createDeployKey(const CreateDeployKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeployKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeployKeyOutcome(CreateDeployKeyResult(outcome.result()));
	else
		return CreateDeployKeyOutcome(outcome.error());
}

void DevopsClient::createDeployKeyAsync(const CreateDeployKeyRequest& request, const CreateDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeployKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateDeployKeyOutcomeCallable DevopsClient::createDeployKeyCallable(const CreateDeployKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeployKeyOutcome()>>(
			[this, request]()
			{
			return this->createDeployKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateFileOutcome DevopsClient::createFile(const CreateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileOutcome(CreateFileResult(outcome.result()));
	else
		return CreateFileOutcome(outcome.error());
}

void DevopsClient::createFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateFileOutcomeCallable DevopsClient::createFileCallable(const CreateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileOutcome()>>(
			[this, request]()
			{
			return this->createFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateFlowTagOutcome DevopsClient::createFlowTag(const CreateFlowTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowTagOutcome(CreateFlowTagResult(outcome.result()));
	else
		return CreateFlowTagOutcome(outcome.error());
}

void DevopsClient::createFlowTagAsync(const CreateFlowTagRequest& request, const CreateFlowTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateFlowTagOutcomeCallable DevopsClient::createFlowTagCallable(const CreateFlowTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowTagOutcome()>>(
			[this, request]()
			{
			return this->createFlowTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateFlowTagGroupOutcome DevopsClient::createFlowTagGroup(const CreateFlowTagGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFlowTagGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFlowTagGroupOutcome(CreateFlowTagGroupResult(outcome.result()));
	else
		return CreateFlowTagGroupOutcome(outcome.error());
}

void DevopsClient::createFlowTagGroupAsync(const CreateFlowTagGroupRequest& request, const CreateFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFlowTagGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateFlowTagGroupOutcomeCallable DevopsClient::createFlowTagGroupCallable(const CreateFlowTagGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFlowTagGroupOutcome()>>(
			[this, request]()
			{
			return this->createFlowTagGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateHostGroupOutcome DevopsClient::createHostGroup(const CreateHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHostGroupOutcome(CreateHostGroupResult(outcome.result()));
	else
		return CreateHostGroupOutcome(outcome.error());
}

void DevopsClient::createHostGroupAsync(const CreateHostGroupRequest& request, const CreateHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateHostGroupOutcomeCallable DevopsClient::createHostGroupCallable(const CreateHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHostGroupOutcome()>>(
			[this, request]()
			{
			return this->createHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateMergeRequestOutcome DevopsClient::createMergeRequest(const CreateMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMergeRequestOutcome(CreateMergeRequestResult(outcome.result()));
	else
		return CreateMergeRequestOutcome(outcome.error());
}

void DevopsClient::createMergeRequestAsync(const CreateMergeRequestRequest& request, const CreateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateMergeRequestOutcomeCallable DevopsClient::createMergeRequestCallable(const CreateMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->createMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateOAuthTokenOutcome DevopsClient::createOAuthToken(const CreateOAuthTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOAuthTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOAuthTokenOutcome(CreateOAuthTokenResult(outcome.result()));
	else
		return CreateOAuthTokenOutcome(outcome.error());
}

void DevopsClient::createOAuthTokenAsync(const CreateOAuthTokenRequest& request, const CreateOAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOAuthToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateOAuthTokenOutcomeCallable DevopsClient::createOAuthTokenCallable(const CreateOAuthTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOAuthTokenOutcome()>>(
			[this, request]()
			{
			return this->createOAuthToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreatePipelineOutcome DevopsClient::createPipeline(const CreatePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelineOutcome(CreatePipelineResult(outcome.result()));
	else
		return CreatePipelineOutcome(outcome.error());
}

void DevopsClient::createPipelineAsync(const CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreatePipelineOutcomeCallable DevopsClient::createPipelineCallable(const CreatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelineOutcome()>>(
			[this, request]()
			{
			return this->createPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreatePipelineGroupOutcome DevopsClient::createPipelineGroup(const CreatePipelineGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePipelineGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePipelineGroupOutcome(CreatePipelineGroupResult(outcome.result()));
	else
		return CreatePipelineGroupOutcome(outcome.error());
}

void DevopsClient::createPipelineGroupAsync(const CreatePipelineGroupRequest& request, const CreatePipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPipelineGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreatePipelineGroupOutcomeCallable DevopsClient::createPipelineGroupCallable(const CreatePipelineGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePipelineGroupOutcome()>>(
			[this, request]()
			{
			return this->createPipelineGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateProjectOutcome DevopsClient::createProject(const CreateProjectRequest &request) const
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

void DevopsClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateProjectOutcomeCallable DevopsClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateProjectLabelOutcome DevopsClient::createProjectLabel(const CreateProjectLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectLabelOutcome(CreateProjectLabelResult(outcome.result()));
	else
		return CreateProjectLabelOutcome(outcome.error());
}

void DevopsClient::createProjectLabelAsync(const CreateProjectLabelRequest& request, const CreateProjectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProjectLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateProjectLabelOutcomeCallable DevopsClient::createProjectLabelCallable(const CreateProjectLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectLabelOutcome()>>(
			[this, request]()
			{
			return this->createProjectLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateProtectdBranchOutcome DevopsClient::createProtectdBranch(const CreateProtectdBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProtectdBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProtectdBranchOutcome(CreateProtectdBranchResult(outcome.result()));
	else
		return CreateProtectdBranchOutcome(outcome.error());
}

void DevopsClient::createProtectdBranchAsync(const CreateProtectdBranchRequest& request, const CreateProtectdBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProtectdBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateProtectdBranchOutcomeCallable DevopsClient::createProtectdBranchCallable(const CreateProtectdBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProtectdBranchOutcome()>>(
			[this, request]()
			{
			return this->createProtectdBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreatePushRuleOutcome DevopsClient::createPushRule(const CreatePushRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePushRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePushRuleOutcome(CreatePushRuleResult(outcome.result()));
	else
		return CreatePushRuleOutcome(outcome.error());
}

void DevopsClient::createPushRuleAsync(const CreatePushRuleRequest& request, const CreatePushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPushRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreatePushRuleOutcomeCallable DevopsClient::createPushRuleCallable(const CreatePushRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePushRuleOutcome()>>(
			[this, request]()
			{
			return this->createPushRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateRepositoryOutcome DevopsClient::createRepository(const CreateRepositoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRepositoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRepositoryOutcome(CreateRepositoryResult(outcome.result()));
	else
		return CreateRepositoryOutcome(outcome.error());
}

void DevopsClient::createRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateRepositoryOutcomeCallable DevopsClient::createRepositoryCallable(const CreateRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRepositoryOutcome()>>(
			[this, request]()
			{
			return this->createRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateRepositoryGroupOutcome DevopsClient::createRepositoryGroup(const CreateRepositoryGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRepositoryGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRepositoryGroupOutcome(CreateRepositoryGroupResult(outcome.result()));
	else
		return CreateRepositoryGroupOutcome(outcome.error());
}

void DevopsClient::createRepositoryGroupAsync(const CreateRepositoryGroupRequest& request, const CreateRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRepositoryGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateRepositoryGroupOutcomeCallable DevopsClient::createRepositoryGroupCallable(const CreateRepositoryGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRepositoryGroupOutcome()>>(
			[this, request]()
			{
			return this->createRepositoryGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateResourceMemberOutcome DevopsClient::createResourceMember(const CreateResourceMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceMemberOutcome(CreateResourceMemberResult(outcome.result()));
	else
		return CreateResourceMemberOutcome(outcome.error());
}

void DevopsClient::createResourceMemberAsync(const CreateResourceMemberRequest& request, const CreateResourceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateResourceMemberOutcomeCallable DevopsClient::createResourceMemberCallable(const CreateResourceMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceMemberOutcome()>>(
			[this, request]()
			{
			return this->createResourceMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateServiceAuthOutcome DevopsClient::createServiceAuth(const CreateServiceAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceAuthOutcome(CreateServiceAuthResult(outcome.result()));
	else
		return CreateServiceAuthOutcome(outcome.error());
}

void DevopsClient::createServiceAuthAsync(const CreateServiceAuthRequest& request, const CreateServiceAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateServiceAuthOutcomeCallable DevopsClient::createServiceAuthCallable(const CreateServiceAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceAuthOutcome()>>(
			[this, request]()
			{
			return this->createServiceAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateServiceConnectionOutcome DevopsClient::createServiceConnection(const CreateServiceConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceConnectionOutcome(CreateServiceConnectionResult(outcome.result()));
	else
		return CreateServiceConnectionOutcome(outcome.error());
}

void DevopsClient::createServiceConnectionAsync(const CreateServiceConnectionRequest& request, const CreateServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateServiceConnectionOutcomeCallable DevopsClient::createServiceConnectionCallable(const CreateServiceConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceConnectionOutcome()>>(
			[this, request]()
			{
			return this->createServiceConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateServiceCredentialOutcome DevopsClient::createServiceCredential(const CreateServiceCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceCredentialOutcome(CreateServiceCredentialResult(outcome.result()));
	else
		return CreateServiceCredentialOutcome(outcome.error());
}

void DevopsClient::createServiceCredentialAsync(const CreateServiceCredentialRequest& request, const CreateServiceCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateServiceCredentialOutcomeCallable DevopsClient::createServiceCredentialCallable(const CreateServiceCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceCredentialOutcome()>>(
			[this, request]()
			{
			return this->createServiceCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateSprintOutcome DevopsClient::createSprint(const CreateSprintRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSprintOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSprintOutcome(CreateSprintResult(outcome.result()));
	else
		return CreateSprintOutcome(outcome.error());
}

void DevopsClient::createSprintAsync(const CreateSprintRequest& request, const CreateSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSprint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateSprintOutcomeCallable DevopsClient::createSprintCallable(const CreateSprintRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSprintOutcome()>>(
			[this, request]()
			{
			return this->createSprint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateSshKeyOutcome DevopsClient::createSshKey(const CreateSshKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSshKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSshKeyOutcome(CreateSshKeyResult(outcome.result()));
	else
		return CreateSshKeyOutcome(outcome.error());
}

void DevopsClient::createSshKeyAsync(const CreateSshKeyRequest& request, const CreateSshKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSshKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateSshKeyOutcomeCallable DevopsClient::createSshKeyCallable(const CreateSshKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSshKeyOutcome()>>(
			[this, request]()
			{
			return this->createSshKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateTagOutcome DevopsClient::createTag(const CreateTagRequest &request) const
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

void DevopsClient::createTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateTagOutcomeCallable DevopsClient::createTagCallable(const CreateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
			[this, request]()
			{
			return this->createTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateTestCaseOutcome DevopsClient::createTestCase(const CreateTestCaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTestCaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTestCaseOutcome(CreateTestCaseResult(outcome.result()));
	else
		return CreateTestCaseOutcome(outcome.error());
}

void DevopsClient::createTestCaseAsync(const CreateTestCaseRequest& request, const CreateTestCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTestCase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateTestCaseOutcomeCallable DevopsClient::createTestCaseCallable(const CreateTestCaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTestCaseOutcome()>>(
			[this, request]()
			{
			return this->createTestCase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateUserKeyOutcome DevopsClient::createUserKey(const CreateUserKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserKeyOutcome(CreateUserKeyResult(outcome.result()));
	else
		return CreateUserKeyOutcome(outcome.error());
}

void DevopsClient::createUserKeyAsync(const CreateUserKeyRequest& request, const CreateUserKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateUserKeyOutcomeCallable DevopsClient::createUserKeyCallable(const CreateUserKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserKeyOutcome()>>(
			[this, request]()
			{
			return this->createUserKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateVariableGroupOutcome DevopsClient::createVariableGroup(const CreateVariableGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVariableGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVariableGroupOutcome(CreateVariableGroupResult(outcome.result()));
	else
		return CreateVariableGroupOutcome(outcome.error());
}

void DevopsClient::createVariableGroupAsync(const CreateVariableGroupRequest& request, const CreateVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVariableGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateVariableGroupOutcomeCallable DevopsClient::createVariableGroupCallable(const CreateVariableGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVariableGroupOutcome()>>(
			[this, request]()
			{
			return this->createVariableGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateWorkitemOutcome DevopsClient::createWorkitem(const CreateWorkitemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkitemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkitemOutcome(CreateWorkitemResult(outcome.result()));
	else
		return CreateWorkitemOutcome(outcome.error());
}

void DevopsClient::createWorkitemAsync(const CreateWorkitemRequest& request, const CreateWorkitemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkitem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateWorkitemOutcomeCallable DevopsClient::createWorkitemCallable(const CreateWorkitemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkitemOutcome()>>(
			[this, request]()
			{
			return this->createWorkitem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateWorkitemCommentOutcome DevopsClient::createWorkitemComment(const CreateWorkitemCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkitemCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkitemCommentOutcome(CreateWorkitemCommentResult(outcome.result()));
	else
		return CreateWorkitemCommentOutcome(outcome.error());
}

void DevopsClient::createWorkitemCommentAsync(const CreateWorkitemCommentRequest& request, const CreateWorkitemCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkitemComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateWorkitemCommentOutcomeCallable DevopsClient::createWorkitemCommentCallable(const CreateWorkitemCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkitemCommentOutcome()>>(
			[this, request]()
			{
			return this->createWorkitemComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateWorkitemEstimateOutcome DevopsClient::createWorkitemEstimate(const CreateWorkitemEstimateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkitemEstimateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkitemEstimateOutcome(CreateWorkitemEstimateResult(outcome.result()));
	else
		return CreateWorkitemEstimateOutcome(outcome.error());
}

void DevopsClient::createWorkitemEstimateAsync(const CreateWorkitemEstimateRequest& request, const CreateWorkitemEstimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkitemEstimate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateWorkitemEstimateOutcomeCallable DevopsClient::createWorkitemEstimateCallable(const CreateWorkitemEstimateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkitemEstimateOutcome()>>(
			[this, request]()
			{
			return this->createWorkitemEstimate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateWorkitemRecordOutcome DevopsClient::createWorkitemRecord(const CreateWorkitemRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkitemRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkitemRecordOutcome(CreateWorkitemRecordResult(outcome.result()));
	else
		return CreateWorkitemRecordOutcome(outcome.error());
}

void DevopsClient::createWorkitemRecordAsync(const CreateWorkitemRecordRequest& request, const CreateWorkitemRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkitemRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateWorkitemRecordOutcomeCallable DevopsClient::createWorkitemRecordCallable(const CreateWorkitemRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkitemRecordOutcome()>>(
			[this, request]()
			{
			return this->createWorkitemRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateWorkitemV2Outcome DevopsClient::createWorkitemV2(const CreateWorkitemV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkitemV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkitemV2Outcome(CreateWorkitemV2Result(outcome.result()));
	else
		return CreateWorkitemV2Outcome(outcome.error());
}

void DevopsClient::createWorkitemV2Async(const CreateWorkitemV2Request& request, const CreateWorkitemV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkitemV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateWorkitemV2OutcomeCallable DevopsClient::createWorkitemV2Callable(const CreateWorkitemV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkitemV2Outcome()>>(
			[this, request]()
			{
			return this->createWorkitemV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::CreateWorkspaceOutcome DevopsClient::createWorkspace(const CreateWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWorkspaceOutcome(CreateWorkspaceResult(outcome.result()));
	else
		return CreateWorkspaceOutcome(outcome.error());
}

void DevopsClient::createWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::CreateWorkspaceOutcomeCallable DevopsClient::createWorkspaceCallable(const CreateWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->createWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteAppMemberOutcome DevopsClient::deleteAppMember(const DeleteAppMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppMemberOutcome(DeleteAppMemberResult(outcome.result()));
	else
		return DeleteAppMemberOutcome(outcome.error());
}

void DevopsClient::deleteAppMemberAsync(const DeleteAppMemberRequest& request, const DeleteAppMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteAppMemberOutcomeCallable DevopsClient::deleteAppMemberCallable(const DeleteAppMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteAppMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteBranchOutcome DevopsClient::deleteBranch(const DeleteBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBranchOutcome(DeleteBranchResult(outcome.result()));
	else
		return DeleteBranchOutcome(outcome.error());
}

void DevopsClient::deleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteBranchOutcomeCallable DevopsClient::deleteBranchCallable(const DeleteBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBranchOutcome()>>(
			[this, request]()
			{
			return this->deleteBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteFileOutcome DevopsClient::deleteFile(const DeleteFileRequest &request) const
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

void DevopsClient::deleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteFileOutcomeCallable DevopsClient::deleteFileCallable(const DeleteFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
			[this, request]()
			{
			return this->deleteFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteFlowTagOutcome DevopsClient::deleteFlowTag(const DeleteFlowTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowTagOutcome(DeleteFlowTagResult(outcome.result()));
	else
		return DeleteFlowTagOutcome(outcome.error());
}

void DevopsClient::deleteFlowTagAsync(const DeleteFlowTagRequest& request, const DeleteFlowTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteFlowTagOutcomeCallable DevopsClient::deleteFlowTagCallable(const DeleteFlowTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowTagOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteFlowTagGroupOutcome DevopsClient::deleteFlowTagGroup(const DeleteFlowTagGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFlowTagGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFlowTagGroupOutcome(DeleteFlowTagGroupResult(outcome.result()));
	else
		return DeleteFlowTagGroupOutcome(outcome.error());
}

void DevopsClient::deleteFlowTagGroupAsync(const DeleteFlowTagGroupRequest& request, const DeleteFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFlowTagGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteFlowTagGroupOutcomeCallable DevopsClient::deleteFlowTagGroupCallable(const DeleteFlowTagGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFlowTagGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteFlowTagGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteGroupMemberOutcome DevopsClient::deleteGroupMember(const DeleteGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupMemberOutcome(DeleteGroupMemberResult(outcome.result()));
	else
		return DeleteGroupMemberOutcome(outcome.error());
}

void DevopsClient::deleteGroupMemberAsync(const DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteGroupMemberOutcomeCallable DevopsClient::deleteGroupMemberCallable(const DeleteGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteHostGroupOutcome DevopsClient::deleteHostGroup(const DeleteHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHostGroupOutcome(DeleteHostGroupResult(outcome.result()));
	else
		return DeleteHostGroupOutcome(outcome.error());
}

void DevopsClient::deleteHostGroupAsync(const DeleteHostGroupRequest& request, const DeleteHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteHostGroupOutcomeCallable DevopsClient::deleteHostGroupCallable(const DeleteHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHostGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeletePipelineOutcome DevopsClient::deletePipeline(const DeletePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePipelineOutcome(DeletePipelineResult(outcome.result()));
	else
		return DeletePipelineOutcome(outcome.error());
}

void DevopsClient::deletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeletePipelineOutcomeCallable DevopsClient::deletePipelineCallable(const DeletePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelineOutcome()>>(
			[this, request]()
			{
			return this->deletePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeletePipelineGroupOutcome DevopsClient::deletePipelineGroup(const DeletePipelineGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePipelineGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePipelineGroupOutcome(DeletePipelineGroupResult(outcome.result()));
	else
		return DeletePipelineGroupOutcome(outcome.error());
}

void DevopsClient::deletePipelineGroupAsync(const DeletePipelineGroupRequest& request, const DeletePipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipelineGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeletePipelineGroupOutcomeCallable DevopsClient::deletePipelineGroupCallable(const DeletePipelineGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelineGroupOutcome()>>(
			[this, request]()
			{
			return this->deletePipelineGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeletePipelineRelationsOutcome DevopsClient::deletePipelineRelations(const DeletePipelineRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePipelineRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePipelineRelationsOutcome(DeletePipelineRelationsResult(outcome.result()));
	else
		return DeletePipelineRelationsOutcome(outcome.error());
}

void DevopsClient::deletePipelineRelationsAsync(const DeletePipelineRelationsRequest& request, const DeletePipelineRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePipelineRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeletePipelineRelationsOutcomeCallable DevopsClient::deletePipelineRelationsCallable(const DeletePipelineRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePipelineRelationsOutcome()>>(
			[this, request]()
			{
			return this->deletePipelineRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteProjectOutcome DevopsClient::deleteProject(const DeleteProjectRequest &request) const
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

void DevopsClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteProjectOutcomeCallable DevopsClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteProjectLabelOutcome DevopsClient::deleteProjectLabel(const DeleteProjectLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectLabelOutcome(DeleteProjectLabelResult(outcome.result()));
	else
		return DeleteProjectLabelOutcome(outcome.error());
}

void DevopsClient::deleteProjectLabelAsync(const DeleteProjectLabelRequest& request, const DeleteProjectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProjectLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteProjectLabelOutcomeCallable DevopsClient::deleteProjectLabelCallable(const DeleteProjectLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectLabelOutcome()>>(
			[this, request]()
			{
			return this->deleteProjectLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteProtectedBranchOutcome DevopsClient::deleteProtectedBranch(const DeleteProtectedBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProtectedBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProtectedBranchOutcome(DeleteProtectedBranchResult(outcome.result()));
	else
		return DeleteProtectedBranchOutcome(outcome.error());
}

void DevopsClient::deleteProtectedBranchAsync(const DeleteProtectedBranchRequest& request, const DeleteProtectedBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProtectedBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteProtectedBranchOutcomeCallable DevopsClient::deleteProtectedBranchCallable(const DeleteProtectedBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProtectedBranchOutcome()>>(
			[this, request]()
			{
			return this->deleteProtectedBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeletePushRuleOutcome DevopsClient::deletePushRule(const DeletePushRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePushRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePushRuleOutcome(DeletePushRuleResult(outcome.result()));
	else
		return DeletePushRuleOutcome(outcome.error());
}

void DevopsClient::deletePushRuleAsync(const DeletePushRuleRequest& request, const DeletePushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePushRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeletePushRuleOutcomeCallable DevopsClient::deletePushRuleCallable(const DeletePushRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePushRuleOutcome()>>(
			[this, request]()
			{
			return this->deletePushRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteRepositoryOutcome DevopsClient::deleteRepository(const DeleteRepositoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryOutcome(DeleteRepositoryResult(outcome.result()));
	else
		return DeleteRepositoryOutcome(outcome.error());
}

void DevopsClient::deleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteRepositoryOutcomeCallable DevopsClient::deleteRepositoryCallable(const DeleteRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryOutcome()>>(
			[this, request]()
			{
			return this->deleteRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteRepositoryGroupOutcome DevopsClient::deleteRepositoryGroup(const DeleteRepositoryGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryGroupOutcome(DeleteRepositoryGroupResult(outcome.result()));
	else
		return DeleteRepositoryGroupOutcome(outcome.error());
}

void DevopsClient::deleteRepositoryGroupAsync(const DeleteRepositoryGroupRequest& request, const DeleteRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteRepositoryGroupOutcomeCallable DevopsClient::deleteRepositoryGroupCallable(const DeleteRepositoryGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteRepositoryMemberOutcome DevopsClient::deleteRepositoryMember(const DeleteRepositoryMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryMemberOutcome(DeleteRepositoryMemberResult(outcome.result()));
	else
		return DeleteRepositoryMemberOutcome(outcome.error());
}

void DevopsClient::deleteRepositoryMemberAsync(const DeleteRepositoryMemberRequest& request, const DeleteRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteRepositoryMemberOutcomeCallable DevopsClient::deleteRepositoryMemberCallable(const DeleteRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteRepositoryWebhookOutcome DevopsClient::deleteRepositoryWebhook(const DeleteRepositoryWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryWebhookOutcome(DeleteRepositoryWebhookResult(outcome.result()));
	else
		return DeleteRepositoryWebhookOutcome(outcome.error());
}

void DevopsClient::deleteRepositoryWebhookAsync(const DeleteRepositoryWebhookRequest& request, const DeleteRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteRepositoryWebhookOutcomeCallable DevopsClient::deleteRepositoryWebhookCallable(const DeleteRepositoryWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryWebhookOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteResourceMemberOutcome DevopsClient::deleteResourceMember(const DeleteResourceMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteResourceMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteResourceMemberOutcome(DeleteResourceMemberResult(outcome.result()));
	else
		return DeleteResourceMemberOutcome(outcome.error());
}

void DevopsClient::deleteResourceMemberAsync(const DeleteResourceMemberRequest& request, const DeleteResourceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteResourceMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteResourceMemberOutcomeCallable DevopsClient::deleteResourceMemberCallable(const DeleteResourceMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteResourceMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteResourceMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteTagOutcome DevopsClient::deleteTag(const DeleteTagRequest &request) const
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

void DevopsClient::deleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteTagOutcomeCallable DevopsClient::deleteTagCallable(const DeleteTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagOutcome()>>(
			[this, request]()
			{
			return this->deleteTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteUserKeyOutcome DevopsClient::deleteUserKey(const DeleteUserKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserKeyOutcome(DeleteUserKeyResult(outcome.result()));
	else
		return DeleteUserKeyOutcome(outcome.error());
}

void DevopsClient::deleteUserKeyAsync(const DeleteUserKeyRequest& request, const DeleteUserKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteUserKeyOutcomeCallable DevopsClient::deleteUserKeyCallable(const DeleteUserKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserKeyOutcome()>>(
			[this, request]()
			{
			return this->deleteUserKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteVariableGroupOutcome DevopsClient::deleteVariableGroup(const DeleteVariableGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVariableGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVariableGroupOutcome(DeleteVariableGroupResult(outcome.result()));
	else
		return DeleteVariableGroupOutcome(outcome.error());
}

void DevopsClient::deleteVariableGroupAsync(const DeleteVariableGroupRequest& request, const DeleteVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVariableGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteVariableGroupOutcomeCallable DevopsClient::deleteVariableGroupCallable(const DeleteVariableGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVariableGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteVariableGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteWorkitemOutcome DevopsClient::deleteWorkitem(const DeleteWorkitemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWorkitemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWorkitemOutcome(DeleteWorkitemResult(outcome.result()));
	else
		return DeleteWorkitemOutcome(outcome.error());
}

void DevopsClient::deleteWorkitemAsync(const DeleteWorkitemRequest& request, const DeleteWorkitemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWorkitem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteWorkitemOutcomeCallable DevopsClient::deleteWorkitemCallable(const DeleteWorkitemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWorkitemOutcome()>>(
			[this, request]()
			{
			return this->deleteWorkitem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteWorkitemAllCommentOutcome DevopsClient::deleteWorkitemAllComment(const DeleteWorkitemAllCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWorkitemAllCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWorkitemAllCommentOutcome(DeleteWorkitemAllCommentResult(outcome.result()));
	else
		return DeleteWorkitemAllCommentOutcome(outcome.error());
}

void DevopsClient::deleteWorkitemAllCommentAsync(const DeleteWorkitemAllCommentRequest& request, const DeleteWorkitemAllCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWorkitemAllComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteWorkitemAllCommentOutcomeCallable DevopsClient::deleteWorkitemAllCommentCallable(const DeleteWorkitemAllCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWorkitemAllCommentOutcome()>>(
			[this, request]()
			{
			return this->deleteWorkitemAllComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::DeleteWorkitemCommentOutcome DevopsClient::deleteWorkitemComment(const DeleteWorkitemCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWorkitemCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWorkitemCommentOutcome(DeleteWorkitemCommentResult(outcome.result()));
	else
		return DeleteWorkitemCommentOutcome(outcome.error());
}

void DevopsClient::deleteWorkitemCommentAsync(const DeleteWorkitemCommentRequest& request, const DeleteWorkitemCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWorkitemComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::DeleteWorkitemCommentOutcomeCallable DevopsClient::deleteWorkitemCommentCallable(const DeleteWorkitemCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWorkitemCommentOutcome()>>(
			[this, request]()
			{
			return this->deleteWorkitemComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::EnableDeployKeyOutcome DevopsClient::enableDeployKey(const EnableDeployKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableDeployKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableDeployKeyOutcome(EnableDeployKeyResult(outcome.result()));
	else
		return EnableDeployKeyOutcome(outcome.error());
}

void DevopsClient::enableDeployKeyAsync(const EnableDeployKeyRequest& request, const EnableDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableDeployKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::EnableDeployKeyOutcomeCallable DevopsClient::enableDeployKeyCallable(const EnableDeployKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableDeployKeyOutcome()>>(
			[this, request]()
			{
			return this->enableDeployKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::FrozenWorkspaceOutcome DevopsClient::frozenWorkspace(const FrozenWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FrozenWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FrozenWorkspaceOutcome(FrozenWorkspaceResult(outcome.result()));
	else
		return FrozenWorkspaceOutcome(outcome.error());
}

void DevopsClient::frozenWorkspaceAsync(const FrozenWorkspaceRequest& request, const FrozenWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, frozenWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::FrozenWorkspaceOutcomeCallable DevopsClient::frozenWorkspaceCallable(const FrozenWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FrozenWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->frozenWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetApplicationOutcome DevopsClient::getApplication(const GetApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetApplicationOutcome(GetApplicationResult(outcome.result()));
	else
		return GetApplicationOutcome(outcome.error());
}

void DevopsClient::getApplicationAsync(const GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetApplicationOutcomeCallable DevopsClient::getApplicationCallable(const GetApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetApplicationOutcome()>>(
			[this, request]()
			{
			return this->getApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetBranchInfoOutcome DevopsClient::getBranchInfo(const GetBranchInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBranchInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBranchInfoOutcome(GetBranchInfoResult(outcome.result()));
	else
		return GetBranchInfoOutcome(outcome.error());
}

void DevopsClient::getBranchInfoAsync(const GetBranchInfoRequest& request, const GetBranchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBranchInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetBranchInfoOutcomeCallable DevopsClient::getBranchInfoCallable(const GetBranchInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBranchInfoOutcome()>>(
			[this, request]()
			{
			return this->getBranchInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetCheckRunOutcome DevopsClient::getCheckRun(const GetCheckRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckRunOutcome(GetCheckRunResult(outcome.result()));
	else
		return GetCheckRunOutcome(outcome.error());
}

void DevopsClient::getCheckRunAsync(const GetCheckRunRequest& request, const GetCheckRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetCheckRunOutcomeCallable DevopsClient::getCheckRunCallable(const GetCheckRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckRunOutcome()>>(
			[this, request]()
			{
			return this->getCheckRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetCodeupOrganizationOutcome DevopsClient::getCodeupOrganization(const GetCodeupOrganizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCodeupOrganizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCodeupOrganizationOutcome(GetCodeupOrganizationResult(outcome.result()));
	else
		return GetCodeupOrganizationOutcome(outcome.error());
}

void DevopsClient::getCodeupOrganizationAsync(const GetCodeupOrganizationRequest& request, const GetCodeupOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCodeupOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetCodeupOrganizationOutcomeCallable DevopsClient::getCodeupOrganizationCallable(const GetCodeupOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCodeupOrganizationOutcome()>>(
			[this, request]()
			{
			return this->getCodeupOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetCompareDetailOutcome DevopsClient::getCompareDetail(const GetCompareDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompareDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompareDetailOutcome(GetCompareDetailResult(outcome.result()));
	else
		return GetCompareDetailOutcome(outcome.error());
}

void DevopsClient::getCompareDetailAsync(const GetCompareDetailRequest& request, const GetCompareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompareDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetCompareDetailOutcomeCallable DevopsClient::getCompareDetailCallable(const GetCompareDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompareDetailOutcome()>>(
			[this, request]()
			{
			return this->getCompareDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetCustomFieldOptionOutcome DevopsClient::getCustomFieldOption(const GetCustomFieldOptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomFieldOptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomFieldOptionOutcome(GetCustomFieldOptionResult(outcome.result()));
	else
		return GetCustomFieldOptionOutcome(outcome.error());
}

void DevopsClient::getCustomFieldOptionAsync(const GetCustomFieldOptionRequest& request, const GetCustomFieldOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomFieldOption(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetCustomFieldOptionOutcomeCallable DevopsClient::getCustomFieldOptionCallable(const GetCustomFieldOptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomFieldOptionOutcome()>>(
			[this, request]()
			{
			return this->getCustomFieldOption(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetFileBlobsOutcome DevopsClient::getFileBlobs(const GetFileBlobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileBlobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileBlobsOutcome(GetFileBlobsResult(outcome.result()));
	else
		return GetFileBlobsOutcome(outcome.error());
}

void DevopsClient::getFileBlobsAsync(const GetFileBlobsRequest& request, const GetFileBlobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileBlobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetFileBlobsOutcomeCallable DevopsClient::getFileBlobsCallable(const GetFileBlobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileBlobsOutcome()>>(
			[this, request]()
			{
			return this->getFileBlobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetFileLastCommitOutcome DevopsClient::getFileLastCommit(const GetFileLastCommitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileLastCommitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileLastCommitOutcome(GetFileLastCommitResult(outcome.result()));
	else
		return GetFileLastCommitOutcome(outcome.error());
}

void DevopsClient::getFileLastCommitAsync(const GetFileLastCommitRequest& request, const GetFileLastCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileLastCommit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetFileLastCommitOutcomeCallable DevopsClient::getFileLastCommitCallable(const GetFileLastCommitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileLastCommitOutcome()>>(
			[this, request]()
			{
			return this->getFileLastCommit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetFlowTagGroupOutcome DevopsClient::getFlowTagGroup(const GetFlowTagGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFlowTagGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFlowTagGroupOutcome(GetFlowTagGroupResult(outcome.result()));
	else
		return GetFlowTagGroupOutcome(outcome.error());
}

void DevopsClient::getFlowTagGroupAsync(const GetFlowTagGroupRequest& request, const GetFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFlowTagGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetFlowTagGroupOutcomeCallable DevopsClient::getFlowTagGroupCallable(const GetFlowTagGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFlowTagGroupOutcome()>>(
			[this, request]()
			{
			return this->getFlowTagGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetGroupByPathOutcome DevopsClient::getGroupByPath(const GetGroupByPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupByPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupByPathOutcome(GetGroupByPathResult(outcome.result()));
	else
		return GetGroupByPathOutcome(outcome.error());
}

void DevopsClient::getGroupByPathAsync(const GetGroupByPathRequest& request, const GetGroupByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupByPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetGroupByPathOutcomeCallable DevopsClient::getGroupByPathCallable(const GetGroupByPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupByPathOutcome()>>(
			[this, request]()
			{
			return this->getGroupByPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetGroupDetailOutcome DevopsClient::getGroupDetail(const GetGroupDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupDetailOutcome(GetGroupDetailResult(outcome.result()));
	else
		return GetGroupDetailOutcome(outcome.error());
}

void DevopsClient::getGroupDetailAsync(const GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetGroupDetailOutcomeCallable DevopsClient::getGroupDetailCallable(const GetGroupDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupDetailOutcome()>>(
			[this, request]()
			{
			return this->getGroupDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetHostGroupOutcome DevopsClient::getHostGroup(const GetHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHostGroupOutcome(GetHostGroupResult(outcome.result()));
	else
		return GetHostGroupOutcome(outcome.error());
}

void DevopsClient::getHostGroupAsync(const GetHostGroupRequest& request, const GetHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetHostGroupOutcomeCallable DevopsClient::getHostGroupCallable(const GetHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHostGroupOutcome()>>(
			[this, request]()
			{
			return this->getHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetMergeRequestOutcome DevopsClient::getMergeRequest(const GetMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMergeRequestOutcome(GetMergeRequestResult(outcome.result()));
	else
		return GetMergeRequestOutcome(outcome.error());
}

void DevopsClient::getMergeRequestAsync(const GetMergeRequestRequest& request, const GetMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetMergeRequestOutcomeCallable DevopsClient::getMergeRequestCallable(const GetMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->getMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetMergeRequestChangeTreeOutcome DevopsClient::getMergeRequestChangeTree(const GetMergeRequestChangeTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMergeRequestChangeTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMergeRequestChangeTreeOutcome(GetMergeRequestChangeTreeResult(outcome.result()));
	else
		return GetMergeRequestChangeTreeOutcome(outcome.error());
}

void DevopsClient::getMergeRequestChangeTreeAsync(const GetMergeRequestChangeTreeRequest& request, const GetMergeRequestChangeTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMergeRequestChangeTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetMergeRequestChangeTreeOutcomeCallable DevopsClient::getMergeRequestChangeTreeCallable(const GetMergeRequestChangeTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMergeRequestChangeTreeOutcome()>>(
			[this, request]()
			{
			return this->getMergeRequestChangeTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetOrganizationMemberOutcome DevopsClient::getOrganizationMember(const GetOrganizationMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrganizationMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrganizationMemberOutcome(GetOrganizationMemberResult(outcome.result()));
	else
		return GetOrganizationMemberOutcome(outcome.error());
}

void DevopsClient::getOrganizationMemberAsync(const GetOrganizationMemberRequest& request, const GetOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrganizationMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetOrganizationMemberOutcomeCallable DevopsClient::getOrganizationMemberCallable(const GetOrganizationMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrganizationMemberOutcome()>>(
			[this, request]()
			{
			return this->getOrganizationMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPipelineOutcome DevopsClient::getPipeline(const GetPipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineOutcome(GetPipelineResult(outcome.result()));
	else
		return GetPipelineOutcome(outcome.error());
}

void DevopsClient::getPipelineAsync(const GetPipelineRequest& request, const GetPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPipelineOutcomeCallable DevopsClient::getPipelineCallable(const GetPipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineOutcome()>>(
			[this, request]()
			{
			return this->getPipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPipelineArtifactUrlOutcome DevopsClient::getPipelineArtifactUrl(const GetPipelineArtifactUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineArtifactUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineArtifactUrlOutcome(GetPipelineArtifactUrlResult(outcome.result()));
	else
		return GetPipelineArtifactUrlOutcome(outcome.error());
}

void DevopsClient::getPipelineArtifactUrlAsync(const GetPipelineArtifactUrlRequest& request, const GetPipelineArtifactUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineArtifactUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPipelineArtifactUrlOutcomeCallable DevopsClient::getPipelineArtifactUrlCallable(const GetPipelineArtifactUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineArtifactUrlOutcome()>>(
			[this, request]()
			{
			return this->getPipelineArtifactUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPipelineEmasArtifactUrlOutcome DevopsClient::getPipelineEmasArtifactUrl(const GetPipelineEmasArtifactUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineEmasArtifactUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineEmasArtifactUrlOutcome(GetPipelineEmasArtifactUrlResult(outcome.result()));
	else
		return GetPipelineEmasArtifactUrlOutcome(outcome.error());
}

void DevopsClient::getPipelineEmasArtifactUrlAsync(const GetPipelineEmasArtifactUrlRequest& request, const GetPipelineEmasArtifactUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineEmasArtifactUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPipelineEmasArtifactUrlOutcomeCallable DevopsClient::getPipelineEmasArtifactUrlCallable(const GetPipelineEmasArtifactUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineEmasArtifactUrlOutcome()>>(
			[this, request]()
			{
			return this->getPipelineEmasArtifactUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPipelineGroupOutcome DevopsClient::getPipelineGroup(const GetPipelineGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineGroupOutcome(GetPipelineGroupResult(outcome.result()));
	else
		return GetPipelineGroupOutcome(outcome.error());
}

void DevopsClient::getPipelineGroupAsync(const GetPipelineGroupRequest& request, const GetPipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPipelineGroupOutcomeCallable DevopsClient::getPipelineGroupCallable(const GetPipelineGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineGroupOutcome()>>(
			[this, request]()
			{
			return this->getPipelineGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPipelineRunOutcome DevopsClient::getPipelineRun(const GetPipelineRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineRunOutcome(GetPipelineRunResult(outcome.result()));
	else
		return GetPipelineRunOutcome(outcome.error());
}

void DevopsClient::getPipelineRunAsync(const GetPipelineRunRequest& request, const GetPipelineRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPipelineRunOutcomeCallable DevopsClient::getPipelineRunCallable(const GetPipelineRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineRunOutcome()>>(
			[this, request]()
			{
			return this->getPipelineRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPipelineScanReportUrlOutcome DevopsClient::getPipelineScanReportUrl(const GetPipelineScanReportUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPipelineScanReportUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPipelineScanReportUrlOutcome(GetPipelineScanReportUrlResult(outcome.result()));
	else
		return GetPipelineScanReportUrlOutcome(outcome.error());
}

void DevopsClient::getPipelineScanReportUrlAsync(const GetPipelineScanReportUrlRequest& request, const GetPipelineScanReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPipelineScanReportUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPipelineScanReportUrlOutcomeCallable DevopsClient::getPipelineScanReportUrlCallable(const GetPipelineScanReportUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPipelineScanReportUrlOutcome()>>(
			[this, request]()
			{
			return this->getPipelineScanReportUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetProjectInfoOutcome DevopsClient::getProjectInfo(const GetProjectInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectInfoOutcome(GetProjectInfoResult(outcome.result()));
	else
		return GetProjectInfoOutcome(outcome.error());
}

void DevopsClient::getProjectInfoAsync(const GetProjectInfoRequest& request, const GetProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetProjectInfoOutcomeCallable DevopsClient::getProjectInfoCallable(const GetProjectInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectInfoOutcome()>>(
			[this, request]()
			{
			return this->getProjectInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetProjectMemberOutcome DevopsClient::getProjectMember(const GetProjectMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectMemberOutcome(GetProjectMemberResult(outcome.result()));
	else
		return GetProjectMemberOutcome(outcome.error());
}

void DevopsClient::getProjectMemberAsync(const GetProjectMemberRequest& request, const GetProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetProjectMemberOutcomeCallable DevopsClient::getProjectMemberCallable(const GetProjectMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectMemberOutcome()>>(
			[this, request]()
			{
			return this->getProjectMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetPushRuleOutcome DevopsClient::getPushRule(const GetPushRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPushRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPushRuleOutcome(GetPushRuleResult(outcome.result()));
	else
		return GetPushRuleOutcome(outcome.error());
}

void DevopsClient::getPushRuleAsync(const GetPushRuleRequest& request, const GetPushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPushRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetPushRuleOutcomeCallable DevopsClient::getPushRuleCallable(const GetPushRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPushRuleOutcome()>>(
			[this, request]()
			{
			return this->getPushRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetRepositoryOutcome DevopsClient::getRepository(const GetRepositoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRepositoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRepositoryOutcome(GetRepositoryResult(outcome.result()));
	else
		return GetRepositoryOutcome(outcome.error());
}

void DevopsClient::getRepositoryAsync(const GetRepositoryRequest& request, const GetRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetRepositoryOutcomeCallable DevopsClient::getRepositoryCallable(const GetRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryOutcome()>>(
			[this, request]()
			{
			return this->getRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetRepositoryCommitOutcome DevopsClient::getRepositoryCommit(const GetRepositoryCommitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRepositoryCommitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRepositoryCommitOutcome(GetRepositoryCommitResult(outcome.result()));
	else
		return GetRepositoryCommitOutcome(outcome.error());
}

void DevopsClient::getRepositoryCommitAsync(const GetRepositoryCommitRequest& request, const GetRepositoryCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepositoryCommit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetRepositoryCommitOutcomeCallable DevopsClient::getRepositoryCommitCallable(const GetRepositoryCommitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryCommitOutcome()>>(
			[this, request]()
			{
			return this->getRepositoryCommit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetRepositoryTagOutcome DevopsClient::getRepositoryTag(const GetRepositoryTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRepositoryTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRepositoryTagOutcome(GetRepositoryTagResult(outcome.result()));
	else
		return GetRepositoryTagOutcome(outcome.error());
}

void DevopsClient::getRepositoryTagAsync(const GetRepositoryTagRequest& request, const GetRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepositoryTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetRepositoryTagOutcomeCallable DevopsClient::getRepositoryTagCallable(const GetRepositoryTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryTagOutcome()>>(
			[this, request]()
			{
			return this->getRepositoryTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetSearchCodePreviewOutcome DevopsClient::getSearchCodePreview(const GetSearchCodePreviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSearchCodePreviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSearchCodePreviewOutcome(GetSearchCodePreviewResult(outcome.result()));
	else
		return GetSearchCodePreviewOutcome(outcome.error());
}

void DevopsClient::getSearchCodePreviewAsync(const GetSearchCodePreviewRequest& request, const GetSearchCodePreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSearchCodePreview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetSearchCodePreviewOutcomeCallable DevopsClient::getSearchCodePreviewCallable(const GetSearchCodePreviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSearchCodePreviewOutcome()>>(
			[this, request]()
			{
			return this->getSearchCodePreview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetSprintInfoOutcome DevopsClient::getSprintInfo(const GetSprintInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSprintInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSprintInfoOutcome(GetSprintInfoResult(outcome.result()));
	else
		return GetSprintInfoOutcome(outcome.error());
}

void DevopsClient::getSprintInfoAsync(const GetSprintInfoRequest& request, const GetSprintInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSprintInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetSprintInfoOutcomeCallable DevopsClient::getSprintInfoCallable(const GetSprintInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSprintInfoOutcome()>>(
			[this, request]()
			{
			return this->getSprintInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetTestResultListOutcome DevopsClient::getTestResultList(const GetTestResultListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTestResultListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTestResultListOutcome(GetTestResultListResult(outcome.result()));
	else
		return GetTestResultListOutcome(outcome.error());
}

void DevopsClient::getTestResultListAsync(const GetTestResultListRequest& request, const GetTestResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTestResultList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetTestResultListOutcomeCallable DevopsClient::getTestResultListCallable(const GetTestResultListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTestResultListOutcome()>>(
			[this, request]()
			{
			return this->getTestResultList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetTestcaseListOutcome DevopsClient::getTestcaseList(const GetTestcaseListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTestcaseListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTestcaseListOutcome(GetTestcaseListResult(outcome.result()));
	else
		return GetTestcaseListOutcome(outcome.error());
}

void DevopsClient::getTestcaseListAsync(const GetTestcaseListRequest& request, const GetTestcaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTestcaseList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetTestcaseListOutcomeCallable DevopsClient::getTestcaseListCallable(const GetTestcaseListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTestcaseListOutcome()>>(
			[this, request]()
			{
			return this->getTestcaseList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetUserInfoOutcome DevopsClient::getUserInfo(const GetUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInfoOutcome(GetUserInfoResult(outcome.result()));
	else
		return GetUserInfoOutcome(outcome.error());
}

void DevopsClient::getUserInfoAsync(const GetUserInfoRequest& request, const GetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetUserInfoOutcomeCallable DevopsClient::getUserInfoCallable(const GetUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetVMDeployOrderOutcome DevopsClient::getVMDeployOrder(const GetVMDeployOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVMDeployOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVMDeployOrderOutcome(GetVMDeployOrderResult(outcome.result()));
	else
		return GetVMDeployOrderOutcome(outcome.error());
}

void DevopsClient::getVMDeployOrderAsync(const GetVMDeployOrderRequest& request, const GetVMDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVMDeployOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetVMDeployOrderOutcomeCallable DevopsClient::getVMDeployOrderCallable(const GetVMDeployOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVMDeployOrderOutcome()>>(
			[this, request]()
			{
			return this->getVMDeployOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetVariableGroupOutcome DevopsClient::getVariableGroup(const GetVariableGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVariableGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVariableGroupOutcome(GetVariableGroupResult(outcome.result()));
	else
		return GetVariableGroupOutcome(outcome.error());
}

void DevopsClient::getVariableGroupAsync(const GetVariableGroupRequest& request, const GetVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVariableGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetVariableGroupOutcomeCallable DevopsClient::getVariableGroupCallable(const GetVariableGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVariableGroupOutcome()>>(
			[this, request]()
			{
			return this->getVariableGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkItemActivityOutcome DevopsClient::getWorkItemActivity(const GetWorkItemActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkItemActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkItemActivityOutcome(GetWorkItemActivityResult(outcome.result()));
	else
		return GetWorkItemActivityOutcome(outcome.error());
}

void DevopsClient::getWorkItemActivityAsync(const GetWorkItemActivityRequest& request, const GetWorkItemActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkItemActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkItemActivityOutcomeCallable DevopsClient::getWorkItemActivityCallable(const GetWorkItemActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkItemActivityOutcome()>>(
			[this, request]()
			{
			return this->getWorkItemActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkItemInfoOutcome DevopsClient::getWorkItemInfo(const GetWorkItemInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkItemInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkItemInfoOutcome(GetWorkItemInfoResult(outcome.result()));
	else
		return GetWorkItemInfoOutcome(outcome.error());
}

void DevopsClient::getWorkItemInfoAsync(const GetWorkItemInfoRequest& request, const GetWorkItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkItemInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkItemInfoOutcomeCallable DevopsClient::getWorkItemInfoCallable(const GetWorkItemInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkItemInfoOutcome()>>(
			[this, request]()
			{
			return this->getWorkItemInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkItemWorkFlowInfoOutcome DevopsClient::getWorkItemWorkFlowInfo(const GetWorkItemWorkFlowInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkItemWorkFlowInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkItemWorkFlowInfoOutcome(GetWorkItemWorkFlowInfoResult(outcome.result()));
	else
		return GetWorkItemWorkFlowInfoOutcome(outcome.error());
}

void DevopsClient::getWorkItemWorkFlowInfoAsync(const GetWorkItemWorkFlowInfoRequest& request, const GetWorkItemWorkFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkItemWorkFlowInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkItemWorkFlowInfoOutcomeCallable DevopsClient::getWorkItemWorkFlowInfoCallable(const GetWorkItemWorkFlowInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkItemWorkFlowInfoOutcome()>>(
			[this, request]()
			{
			return this->getWorkItemWorkFlowInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkitemAttachmentCreatemetaOutcome DevopsClient::getWorkitemAttachmentCreatemeta(const GetWorkitemAttachmentCreatemetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkitemAttachmentCreatemetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkitemAttachmentCreatemetaOutcome(GetWorkitemAttachmentCreatemetaResult(outcome.result()));
	else
		return GetWorkitemAttachmentCreatemetaOutcome(outcome.error());
}

void DevopsClient::getWorkitemAttachmentCreatemetaAsync(const GetWorkitemAttachmentCreatemetaRequest& request, const GetWorkitemAttachmentCreatemetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkitemAttachmentCreatemeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkitemAttachmentCreatemetaOutcomeCallable DevopsClient::getWorkitemAttachmentCreatemetaCallable(const GetWorkitemAttachmentCreatemetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkitemAttachmentCreatemetaOutcome()>>(
			[this, request]()
			{
			return this->getWorkitemAttachmentCreatemeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkitemCommentListOutcome DevopsClient::getWorkitemCommentList(const GetWorkitemCommentListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkitemCommentListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkitemCommentListOutcome(GetWorkitemCommentListResult(outcome.result()));
	else
		return GetWorkitemCommentListOutcome(outcome.error());
}

void DevopsClient::getWorkitemCommentListAsync(const GetWorkitemCommentListRequest& request, const GetWorkitemCommentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkitemCommentList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkitemCommentListOutcomeCallable DevopsClient::getWorkitemCommentListCallable(const GetWorkitemCommentListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkitemCommentListOutcome()>>(
			[this, request]()
			{
			return this->getWorkitemCommentList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkitemFileOutcome DevopsClient::getWorkitemFile(const GetWorkitemFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkitemFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkitemFileOutcome(GetWorkitemFileResult(outcome.result()));
	else
		return GetWorkitemFileOutcome(outcome.error());
}

void DevopsClient::getWorkitemFileAsync(const GetWorkitemFileRequest& request, const GetWorkitemFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkitemFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkitemFileOutcomeCallable DevopsClient::getWorkitemFileCallable(const GetWorkitemFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkitemFileOutcome()>>(
			[this, request]()
			{
			return this->getWorkitemFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkitemRelationsOutcome DevopsClient::getWorkitemRelations(const GetWorkitemRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkitemRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkitemRelationsOutcome(GetWorkitemRelationsResult(outcome.result()));
	else
		return GetWorkitemRelationsOutcome(outcome.error());
}

void DevopsClient::getWorkitemRelationsAsync(const GetWorkitemRelationsRequest& request, const GetWorkitemRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkitemRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkitemRelationsOutcomeCallable DevopsClient::getWorkitemRelationsCallable(const GetWorkitemRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkitemRelationsOutcome()>>(
			[this, request]()
			{
			return this->getWorkitemRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkitemTimeTypeListOutcome DevopsClient::getWorkitemTimeTypeList(const GetWorkitemTimeTypeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkitemTimeTypeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkitemTimeTypeListOutcome(GetWorkitemTimeTypeListResult(outcome.result()));
	else
		return GetWorkitemTimeTypeListOutcome(outcome.error());
}

void DevopsClient::getWorkitemTimeTypeListAsync(const GetWorkitemTimeTypeListRequest& request, const GetWorkitemTimeTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkitemTimeTypeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkitemTimeTypeListOutcomeCallable DevopsClient::getWorkitemTimeTypeListCallable(const GetWorkitemTimeTypeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkitemTimeTypeListOutcome()>>(
			[this, request]()
			{
			return this->getWorkitemTimeTypeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::GetWorkspaceOutcome DevopsClient::getWorkspace(const GetWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkspaceOutcome(GetWorkspaceResult(outcome.result()));
	else
		return GetWorkspaceOutcome(outcome.error());
}

void DevopsClient::getWorkspaceAsync(const GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::GetWorkspaceOutcomeCallable DevopsClient::getWorkspaceCallable(const GetWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->getWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::JoinPipelineGroupOutcome DevopsClient::joinPipelineGroup(const JoinPipelineGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinPipelineGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinPipelineGroupOutcome(JoinPipelineGroupResult(outcome.result()));
	else
		return JoinPipelineGroupOutcome(outcome.error());
}

void DevopsClient::joinPipelineGroupAsync(const JoinPipelineGroupRequest& request, const JoinPipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinPipelineGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::JoinPipelineGroupOutcomeCallable DevopsClient::joinPipelineGroupCallable(const JoinPipelineGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinPipelineGroupOutcome()>>(
			[this, request]()
			{
			return this->joinPipelineGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::LinkMergeRequestLabelOutcome DevopsClient::linkMergeRequestLabel(const LinkMergeRequestLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LinkMergeRequestLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LinkMergeRequestLabelOutcome(LinkMergeRequestLabelResult(outcome.result()));
	else
		return LinkMergeRequestLabelOutcome(outcome.error());
}

void DevopsClient::linkMergeRequestLabelAsync(const LinkMergeRequestLabelRequest& request, const LinkMergeRequestLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, linkMergeRequestLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::LinkMergeRequestLabelOutcomeCallable DevopsClient::linkMergeRequestLabelCallable(const LinkMergeRequestLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LinkMergeRequestLabelOutcome()>>(
			[this, request]()
			{
			return this->linkMergeRequestLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListApplicationMembersOutcome DevopsClient::listApplicationMembers(const ListApplicationMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationMembersOutcome(ListApplicationMembersResult(outcome.result()));
	else
		return ListApplicationMembersOutcome(outcome.error());
}

void DevopsClient::listApplicationMembersAsync(const ListApplicationMembersRequest& request, const ListApplicationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListApplicationMembersOutcomeCallable DevopsClient::listApplicationMembersCallable(const ListApplicationMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationMembersOutcome()>>(
			[this, request]()
			{
			return this->listApplicationMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListApplicationsOutcome DevopsClient::listApplications(const ListApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationsOutcome(ListApplicationsResult(outcome.result()));
	else
		return ListApplicationsOutcome(outcome.error());
}

void DevopsClient::listApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListApplicationsOutcomeCallable DevopsClient::listApplicationsCallable(const ListApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListCheckRunsOutcome DevopsClient::listCheckRuns(const ListCheckRunsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckRunsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckRunsOutcome(ListCheckRunsResult(outcome.result()));
	else
		return ListCheckRunsOutcome(outcome.error());
}

void DevopsClient::listCheckRunsAsync(const ListCheckRunsRequest& request, const ListCheckRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckRuns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListCheckRunsOutcomeCallable DevopsClient::listCheckRunsCallable(const ListCheckRunsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckRunsOutcome()>>(
			[this, request]()
			{
			return this->listCheckRuns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListCommitStatusesOutcome DevopsClient::listCommitStatuses(const ListCommitStatusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommitStatusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommitStatusesOutcome(ListCommitStatusesResult(outcome.result()));
	else
		return ListCommitStatusesOutcome(outcome.error());
}

void DevopsClient::listCommitStatusesAsync(const ListCommitStatusesRequest& request, const ListCommitStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommitStatuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListCommitStatusesOutcomeCallable DevopsClient::listCommitStatusesCallable(const ListCommitStatusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommitStatusesOutcome()>>(
			[this, request]()
			{
			return this->listCommitStatuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListFlowTagGroupsOutcome DevopsClient::listFlowTagGroups(const ListFlowTagGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFlowTagGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFlowTagGroupsOutcome(ListFlowTagGroupsResult(outcome.result()));
	else
		return ListFlowTagGroupsOutcome(outcome.error());
}

void DevopsClient::listFlowTagGroupsAsync(const ListFlowTagGroupsRequest& request, const ListFlowTagGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFlowTagGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListFlowTagGroupsOutcomeCallable DevopsClient::listFlowTagGroupsCallable(const ListFlowTagGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFlowTagGroupsOutcome()>>(
			[this, request]()
			{
			return this->listFlowTagGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListGroupMemberOutcome DevopsClient::listGroupMember(const ListGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupMemberOutcome(ListGroupMemberResult(outcome.result()));
	else
		return ListGroupMemberOutcome(outcome.error());
}

void DevopsClient::listGroupMemberAsync(const ListGroupMemberRequest& request, const ListGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListGroupMemberOutcomeCallable DevopsClient::listGroupMemberCallable(const ListGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->listGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListGroupRepositoriesOutcome DevopsClient::listGroupRepositories(const ListGroupRepositoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupRepositoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupRepositoriesOutcome(ListGroupRepositoriesResult(outcome.result()));
	else
		return ListGroupRepositoriesOutcome(outcome.error());
}

void DevopsClient::listGroupRepositoriesAsync(const ListGroupRepositoriesRequest& request, const ListGroupRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupRepositories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListGroupRepositoriesOutcomeCallable DevopsClient::listGroupRepositoriesCallable(const ListGroupRepositoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupRepositoriesOutcome()>>(
			[this, request]()
			{
			return this->listGroupRepositories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListHostGroupsOutcome DevopsClient::listHostGroups(const ListHostGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHostGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHostGroupsOutcome(ListHostGroupsResult(outcome.result()));
	else
		return ListHostGroupsOutcome(outcome.error());
}

void DevopsClient::listHostGroupsAsync(const ListHostGroupsRequest& request, const ListHostGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHostGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListHostGroupsOutcomeCallable DevopsClient::listHostGroupsCallable(const ListHostGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHostGroupsOutcome()>>(
			[this, request]()
			{
			return this->listHostGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListJoinedOrganizationsOutcome DevopsClient::listJoinedOrganizations(const ListJoinedOrganizationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJoinedOrganizationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJoinedOrganizationsOutcome(ListJoinedOrganizationsResult(outcome.result()));
	else
		return ListJoinedOrganizationsOutcome(outcome.error());
}

void DevopsClient::listJoinedOrganizationsAsync(const ListJoinedOrganizationsRequest& request, const ListJoinedOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJoinedOrganizations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListJoinedOrganizationsOutcomeCallable DevopsClient::listJoinedOrganizationsCallable(const ListJoinedOrganizationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJoinedOrganizationsOutcome()>>(
			[this, request]()
			{
			return this->listJoinedOrganizations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListMergeRequestCommentsOutcome DevopsClient::listMergeRequestComments(const ListMergeRequestCommentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMergeRequestCommentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMergeRequestCommentsOutcome(ListMergeRequestCommentsResult(outcome.result()));
	else
		return ListMergeRequestCommentsOutcome(outcome.error());
}

void DevopsClient::listMergeRequestCommentsAsync(const ListMergeRequestCommentsRequest& request, const ListMergeRequestCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequestComments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListMergeRequestCommentsOutcomeCallable DevopsClient::listMergeRequestCommentsCallable(const ListMergeRequestCommentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestCommentsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequestComments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListMergeRequestFilesReadsOutcome DevopsClient::listMergeRequestFilesReads(const ListMergeRequestFilesReadsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMergeRequestFilesReadsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMergeRequestFilesReadsOutcome(ListMergeRequestFilesReadsResult(outcome.result()));
	else
		return ListMergeRequestFilesReadsOutcome(outcome.error());
}

void DevopsClient::listMergeRequestFilesReadsAsync(const ListMergeRequestFilesReadsRequest& request, const ListMergeRequestFilesReadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequestFilesReads(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListMergeRequestFilesReadsOutcomeCallable DevopsClient::listMergeRequestFilesReadsCallable(const ListMergeRequestFilesReadsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestFilesReadsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequestFilesReads(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListMergeRequestLabelsOutcome DevopsClient::listMergeRequestLabels(const ListMergeRequestLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMergeRequestLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMergeRequestLabelsOutcome(ListMergeRequestLabelsResult(outcome.result()));
	else
		return ListMergeRequestLabelsOutcome(outcome.error());
}

void DevopsClient::listMergeRequestLabelsAsync(const ListMergeRequestLabelsRequest& request, const ListMergeRequestLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequestLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListMergeRequestLabelsOutcomeCallable DevopsClient::listMergeRequestLabelsCallable(const ListMergeRequestLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestLabelsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequestLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListMergeRequestPatchSetsOutcome DevopsClient::listMergeRequestPatchSets(const ListMergeRequestPatchSetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMergeRequestPatchSetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMergeRequestPatchSetsOutcome(ListMergeRequestPatchSetsResult(outcome.result()));
	else
		return ListMergeRequestPatchSetsOutcome(outcome.error());
}

void DevopsClient::listMergeRequestPatchSetsAsync(const ListMergeRequestPatchSetsRequest& request, const ListMergeRequestPatchSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequestPatchSets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListMergeRequestPatchSetsOutcomeCallable DevopsClient::listMergeRequestPatchSetsCallable(const ListMergeRequestPatchSetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestPatchSetsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequestPatchSets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListMergeRequestsOutcome DevopsClient::listMergeRequests(const ListMergeRequestsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMergeRequestsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMergeRequestsOutcome(ListMergeRequestsResult(outcome.result()));
	else
		return ListMergeRequestsOutcome(outcome.error());
}

void DevopsClient::listMergeRequestsAsync(const ListMergeRequestsRequest& request, const ListMergeRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequests(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListMergeRequestsOutcomeCallable DevopsClient::listMergeRequestsCallable(const ListMergeRequestsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequests(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListOrganizationMembersOutcome DevopsClient::listOrganizationMembers(const ListOrganizationMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationMembersOutcome(ListOrganizationMembersResult(outcome.result()));
	else
		return ListOrganizationMembersOutcome(outcome.error());
}

void DevopsClient::listOrganizationMembersAsync(const ListOrganizationMembersRequest& request, const ListOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListOrganizationMembersOutcomeCallable DevopsClient::listOrganizationMembersCallable(const ListOrganizationMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationMembersOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListOrganizationsOutcome DevopsClient::listOrganizations(const ListOrganizationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationsOutcome(ListOrganizationsResult(outcome.result()));
	else
		return ListOrganizationsOutcome(outcome.error());
}

void DevopsClient::listOrganizationsAsync(const ListOrganizationsRequest& request, const ListOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListOrganizationsOutcomeCallable DevopsClient::listOrganizationsCallable(const ListOrganizationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationsOutcome()>>(
			[this, request]()
			{
			return this->listOrganizations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelineGroupPipelinesOutcome DevopsClient::listPipelineGroupPipelines(const ListPipelineGroupPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineGroupPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineGroupPipelinesOutcome(ListPipelineGroupPipelinesResult(outcome.result()));
	else
		return ListPipelineGroupPipelinesOutcome(outcome.error());
}

void DevopsClient::listPipelineGroupPipelinesAsync(const ListPipelineGroupPipelinesRequest& request, const ListPipelineGroupPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineGroupPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelineGroupPipelinesOutcomeCallable DevopsClient::listPipelineGroupPipelinesCallable(const ListPipelineGroupPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineGroupPipelinesOutcome()>>(
			[this, request]()
			{
			return this->listPipelineGroupPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelineGroupsOutcome DevopsClient::listPipelineGroups(const ListPipelineGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineGroupsOutcome(ListPipelineGroupsResult(outcome.result()));
	else
		return ListPipelineGroupsOutcome(outcome.error());
}

void DevopsClient::listPipelineGroupsAsync(const ListPipelineGroupsRequest& request, const ListPipelineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelineGroupsOutcomeCallable DevopsClient::listPipelineGroupsCallable(const ListPipelineGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineGroupsOutcome()>>(
			[this, request]()
			{
			return this->listPipelineGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelineJobHistorysOutcome DevopsClient::listPipelineJobHistorys(const ListPipelineJobHistorysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineJobHistorysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineJobHistorysOutcome(ListPipelineJobHistorysResult(outcome.result()));
	else
		return ListPipelineJobHistorysOutcome(outcome.error());
}

void DevopsClient::listPipelineJobHistorysAsync(const ListPipelineJobHistorysRequest& request, const ListPipelineJobHistorysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineJobHistorys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelineJobHistorysOutcomeCallable DevopsClient::listPipelineJobHistorysCallable(const ListPipelineJobHistorysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineJobHistorysOutcome()>>(
			[this, request]()
			{
			return this->listPipelineJobHistorys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelineJobsOutcome DevopsClient::listPipelineJobs(const ListPipelineJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineJobsOutcome(ListPipelineJobsResult(outcome.result()));
	else
		return ListPipelineJobsOutcome(outcome.error());
}

void DevopsClient::listPipelineJobsAsync(const ListPipelineJobsRequest& request, const ListPipelineJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelineJobsOutcomeCallable DevopsClient::listPipelineJobsCallable(const ListPipelineJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineJobsOutcome()>>(
			[this, request]()
			{
			return this->listPipelineJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelineRelationsOutcome DevopsClient::listPipelineRelations(const ListPipelineRelationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineRelationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineRelationsOutcome(ListPipelineRelationsResult(outcome.result()));
	else
		return ListPipelineRelationsOutcome(outcome.error());
}

void DevopsClient::listPipelineRelationsAsync(const ListPipelineRelationsRequest& request, const ListPipelineRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineRelations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelineRelationsOutcomeCallable DevopsClient::listPipelineRelationsCallable(const ListPipelineRelationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineRelationsOutcome()>>(
			[this, request]()
			{
			return this->listPipelineRelations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelineRunsOutcome DevopsClient::listPipelineRuns(const ListPipelineRunsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelineRunsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelineRunsOutcome(ListPipelineRunsResult(outcome.result()));
	else
		return ListPipelineRunsOutcome(outcome.error());
}

void DevopsClient::listPipelineRunsAsync(const ListPipelineRunsRequest& request, const ListPipelineRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelineRuns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelineRunsOutcomeCallable DevopsClient::listPipelineRunsCallable(const ListPipelineRunsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelineRunsOutcome()>>(
			[this, request]()
			{
			return this->listPipelineRuns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPipelinesOutcome DevopsClient::listPipelines(const ListPipelinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPipelinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPipelinesOutcome(ListPipelinesResult(outcome.result()));
	else
		return ListPipelinesOutcome(outcome.error());
}

void DevopsClient::listPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPipelines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPipelinesOutcomeCallable DevopsClient::listPipelinesCallable(const ListPipelinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPipelinesOutcome()>>(
			[this, request]()
			{
			return this->listPipelines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListProjectLabelsOutcome DevopsClient::listProjectLabels(const ListProjectLabelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectLabelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectLabelsOutcome(ListProjectLabelsResult(outcome.result()));
	else
		return ListProjectLabelsOutcome(outcome.error());
}

void DevopsClient::listProjectLabelsAsync(const ListProjectLabelsRequest& request, const ListProjectLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectLabels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListProjectLabelsOutcomeCallable DevopsClient::listProjectLabelsCallable(const ListProjectLabelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectLabelsOutcome()>>(
			[this, request]()
			{
			return this->listProjectLabels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListProjectMembersOutcome DevopsClient::listProjectMembers(const ListProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectMembersOutcome(ListProjectMembersResult(outcome.result()));
	else
		return ListProjectMembersOutcome(outcome.error());
}

void DevopsClient::listProjectMembersAsync(const ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListProjectMembersOutcomeCallable DevopsClient::listProjectMembersCallable(const ListProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->listProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListProjectTemplatesOutcome DevopsClient::listProjectTemplates(const ListProjectTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectTemplatesOutcome(ListProjectTemplatesResult(outcome.result()));
	else
		return ListProjectTemplatesOutcome(outcome.error());
}

void DevopsClient::listProjectTemplatesAsync(const ListProjectTemplatesRequest& request, const ListProjectTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListProjectTemplatesOutcomeCallable DevopsClient::listProjectTemplatesCallable(const ListProjectTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listProjectTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListProjectWorkitemTypesOutcome DevopsClient::listProjectWorkitemTypes(const ListProjectWorkitemTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectWorkitemTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectWorkitemTypesOutcome(ListProjectWorkitemTypesResult(outcome.result()));
	else
		return ListProjectWorkitemTypesOutcome(outcome.error());
}

void DevopsClient::listProjectWorkitemTypesAsync(const ListProjectWorkitemTypesRequest& request, const ListProjectWorkitemTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectWorkitemTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListProjectWorkitemTypesOutcomeCallable DevopsClient::listProjectWorkitemTypesCallable(const ListProjectWorkitemTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectWorkitemTypesOutcome()>>(
			[this, request]()
			{
			return this->listProjectWorkitemTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListProjectsOutcome DevopsClient::listProjects(const ListProjectsRequest &request) const
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

void DevopsClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListProjectsOutcomeCallable DevopsClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListProtectedBranchesOutcome DevopsClient::listProtectedBranches(const ListProtectedBranchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProtectedBranchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProtectedBranchesOutcome(ListProtectedBranchesResult(outcome.result()));
	else
		return ListProtectedBranchesOutcome(outcome.error());
}

void DevopsClient::listProtectedBranchesAsync(const ListProtectedBranchesRequest& request, const ListProtectedBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProtectedBranches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListProtectedBranchesOutcomeCallable DevopsClient::listProtectedBranchesCallable(const ListProtectedBranchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProtectedBranchesOutcome()>>(
			[this, request]()
			{
			return this->listProtectedBranches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListPushRulesOutcome DevopsClient::listPushRules(const ListPushRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPushRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPushRulesOutcome(ListPushRulesResult(outcome.result()));
	else
		return ListPushRulesOutcome(outcome.error());
}

void DevopsClient::listPushRulesAsync(const ListPushRulesRequest& request, const ListPushRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPushRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListPushRulesOutcomeCallable DevopsClient::listPushRulesCallable(const ListPushRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPushRulesOutcome()>>(
			[this, request]()
			{
			return this->listPushRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoriesOutcome DevopsClient::listRepositories(const ListRepositoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoriesOutcome(ListRepositoriesResult(outcome.result()));
	else
		return ListRepositoriesOutcome(outcome.error());
}

void DevopsClient::listRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoriesOutcomeCallable DevopsClient::listRepositoriesCallable(const ListRepositoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoriesOutcome()>>(
			[this, request]()
			{
			return this->listRepositories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryBranchesOutcome DevopsClient::listRepositoryBranches(const ListRepositoryBranchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryBranchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryBranchesOutcome(ListRepositoryBranchesResult(outcome.result()));
	else
		return ListRepositoryBranchesOutcome(outcome.error());
}

void DevopsClient::listRepositoryBranchesAsync(const ListRepositoryBranchesRequest& request, const ListRepositoryBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryBranches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryBranchesOutcomeCallable DevopsClient::listRepositoryBranchesCallable(const ListRepositoryBranchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryBranchesOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryBranches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryCommitDiffOutcome DevopsClient::listRepositoryCommitDiff(const ListRepositoryCommitDiffRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryCommitDiffOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryCommitDiffOutcome(ListRepositoryCommitDiffResult(outcome.result()));
	else
		return ListRepositoryCommitDiffOutcome(outcome.error());
}

void DevopsClient::listRepositoryCommitDiffAsync(const ListRepositoryCommitDiffRequest& request, const ListRepositoryCommitDiffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryCommitDiff(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryCommitDiffOutcomeCallable DevopsClient::listRepositoryCommitDiffCallable(const ListRepositoryCommitDiffRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryCommitDiffOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryCommitDiff(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryCommitsOutcome DevopsClient::listRepositoryCommits(const ListRepositoryCommitsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryCommitsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryCommitsOutcome(ListRepositoryCommitsResult(outcome.result()));
	else
		return ListRepositoryCommitsOutcome(outcome.error());
}

void DevopsClient::listRepositoryCommitsAsync(const ListRepositoryCommitsRequest& request, const ListRepositoryCommitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryCommits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryCommitsOutcomeCallable DevopsClient::listRepositoryCommitsCallable(const ListRepositoryCommitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryCommitsOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryCommits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryGroupsOutcome DevopsClient::listRepositoryGroups(const ListRepositoryGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryGroupsOutcome(ListRepositoryGroupsResult(outcome.result()));
	else
		return ListRepositoryGroupsOutcome(outcome.error());
}

void DevopsClient::listRepositoryGroupsAsync(const ListRepositoryGroupsRequest& request, const ListRepositoryGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryGroupsOutcomeCallable DevopsClient::listRepositoryGroupsCallable(const ListRepositoryGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryGroupsOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryMemberWithInheritedOutcome DevopsClient::listRepositoryMemberWithInherited(const ListRepositoryMemberWithInheritedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryMemberWithInheritedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryMemberWithInheritedOutcome(ListRepositoryMemberWithInheritedResult(outcome.result()));
	else
		return ListRepositoryMemberWithInheritedOutcome(outcome.error());
}

void DevopsClient::listRepositoryMemberWithInheritedAsync(const ListRepositoryMemberWithInheritedRequest& request, const ListRepositoryMemberWithInheritedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryMemberWithInherited(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryMemberWithInheritedOutcomeCallable DevopsClient::listRepositoryMemberWithInheritedCallable(const ListRepositoryMemberWithInheritedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryMemberWithInheritedOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryMemberWithInherited(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryTagsOutcome DevopsClient::listRepositoryTags(const ListRepositoryTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryTagsOutcome(ListRepositoryTagsResult(outcome.result()));
	else
		return ListRepositoryTagsOutcome(outcome.error());
}

void DevopsClient::listRepositoryTagsAsync(const ListRepositoryTagsRequest& request, const ListRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryTagsOutcomeCallable DevopsClient::listRepositoryTagsCallable(const ListRepositoryTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryTagsOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryTreeOutcome DevopsClient::listRepositoryTree(const ListRepositoryTreeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryTreeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryTreeOutcome(ListRepositoryTreeResult(outcome.result()));
	else
		return ListRepositoryTreeOutcome(outcome.error());
}

void DevopsClient::listRepositoryTreeAsync(const ListRepositoryTreeRequest& request, const ListRepositoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryTreeOutcomeCallable DevopsClient::listRepositoryTreeCallable(const ListRepositoryTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryTreeOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListRepositoryWebhookOutcome DevopsClient::listRepositoryWebhook(const ListRepositoryWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryWebhookOutcome(ListRepositoryWebhookResult(outcome.result()));
	else
		return ListRepositoryWebhookOutcome(outcome.error());
}

void DevopsClient::listRepositoryWebhookAsync(const ListRepositoryWebhookRequest& request, const ListRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListRepositoryWebhookOutcomeCallable DevopsClient::listRepositoryWebhookCallable(const ListRepositoryWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryWebhookOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListResourceMembersOutcome DevopsClient::listResourceMembers(const ListResourceMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceMembersOutcome(ListResourceMembersResult(outcome.result()));
	else
		return ListResourceMembersOutcome(outcome.error());
}

void DevopsClient::listResourceMembersAsync(const ListResourceMembersRequest& request, const ListResourceMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListResourceMembersOutcomeCallable DevopsClient::listResourceMembersCallable(const ListResourceMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceMembersOutcome()>>(
			[this, request]()
			{
			return this->listResourceMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListSearchCommitOutcome DevopsClient::listSearchCommit(const ListSearchCommitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSearchCommitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSearchCommitOutcome(ListSearchCommitResult(outcome.result()));
	else
		return ListSearchCommitOutcome(outcome.error());
}

void DevopsClient::listSearchCommitAsync(const ListSearchCommitRequest& request, const ListSearchCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSearchCommit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListSearchCommitOutcomeCallable DevopsClient::listSearchCommitCallable(const ListSearchCommitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSearchCommitOutcome()>>(
			[this, request]()
			{
			return this->listSearchCommit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListSearchRepositoryOutcome DevopsClient::listSearchRepository(const ListSearchRepositoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSearchRepositoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSearchRepositoryOutcome(ListSearchRepositoryResult(outcome.result()));
	else
		return ListSearchRepositoryOutcome(outcome.error());
}

void DevopsClient::listSearchRepositoryAsync(const ListSearchRepositoryRequest& request, const ListSearchRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSearchRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListSearchRepositoryOutcomeCallable DevopsClient::listSearchRepositoryCallable(const ListSearchRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSearchRepositoryOutcome()>>(
			[this, request]()
			{
			return this->listSearchRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListSearchSourceCodeOutcome DevopsClient::listSearchSourceCode(const ListSearchSourceCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSearchSourceCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSearchSourceCodeOutcome(ListSearchSourceCodeResult(outcome.result()));
	else
		return ListSearchSourceCodeOutcome(outcome.error());
}

void DevopsClient::listSearchSourceCodeAsync(const ListSearchSourceCodeRequest& request, const ListSearchSourceCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSearchSourceCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListSearchSourceCodeOutcomeCallable DevopsClient::listSearchSourceCodeCallable(const ListSearchSourceCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSearchSourceCodeOutcome()>>(
			[this, request]()
			{
			return this->listSearchSourceCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListServiceAuthsOutcome DevopsClient::listServiceAuths(const ListServiceAuthsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceAuthsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceAuthsOutcome(ListServiceAuthsResult(outcome.result()));
	else
		return ListServiceAuthsOutcome(outcome.error());
}

void DevopsClient::listServiceAuthsAsync(const ListServiceAuthsRequest& request, const ListServiceAuthsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceAuths(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListServiceAuthsOutcomeCallable DevopsClient::listServiceAuthsCallable(const ListServiceAuthsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceAuthsOutcome()>>(
			[this, request]()
			{
			return this->listServiceAuths(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListServiceConnectionsOutcome DevopsClient::listServiceConnections(const ListServiceConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceConnectionsOutcome(ListServiceConnectionsResult(outcome.result()));
	else
		return ListServiceConnectionsOutcome(outcome.error());
}

void DevopsClient::listServiceConnectionsAsync(const ListServiceConnectionsRequest& request, const ListServiceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListServiceConnectionsOutcomeCallable DevopsClient::listServiceConnectionsCallable(const ListServiceConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listServiceConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListServiceCredentialsOutcome DevopsClient::listServiceCredentials(const ListServiceCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServiceCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServiceCredentialsOutcome(ListServiceCredentialsResult(outcome.result()));
	else
		return ListServiceCredentialsOutcome(outcome.error());
}

void DevopsClient::listServiceCredentialsAsync(const ListServiceCredentialsRequest& request, const ListServiceCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServiceCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListServiceCredentialsOutcomeCallable DevopsClient::listServiceCredentialsCallable(const ListServiceCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServiceCredentialsOutcome()>>(
			[this, request]()
			{
			return this->listServiceCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListSprintsOutcome DevopsClient::listSprints(const ListSprintsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSprintsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSprintsOutcome(ListSprintsResult(outcome.result()));
	else
		return ListSprintsOutcome(outcome.error());
}

void DevopsClient::listSprintsAsync(const ListSprintsRequest& request, const ListSprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSprints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListSprintsOutcomeCallable DevopsClient::listSprintsCallable(const ListSprintsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSprintsOutcome()>>(
			[this, request]()
			{
			return this->listSprints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListTestCaseFieldsOutcome DevopsClient::listTestCaseFields(const ListTestCaseFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTestCaseFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTestCaseFieldsOutcome(ListTestCaseFieldsResult(outcome.result()));
	else
		return ListTestCaseFieldsOutcome(outcome.error());
}

void DevopsClient::listTestCaseFieldsAsync(const ListTestCaseFieldsRequest& request, const ListTestCaseFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTestCaseFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListTestCaseFieldsOutcomeCallable DevopsClient::listTestCaseFieldsCallable(const ListTestCaseFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTestCaseFieldsOutcome()>>(
			[this, request]()
			{
			return this->listTestCaseFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListUserDrawRecordByPkOutcome DevopsClient::listUserDrawRecordByPk(const ListUserDrawRecordByPkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserDrawRecordByPkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserDrawRecordByPkOutcome(ListUserDrawRecordByPkResult(outcome.result()));
	else
		return ListUserDrawRecordByPkOutcome(outcome.error());
}

void DevopsClient::listUserDrawRecordByPkAsync(const ListUserDrawRecordByPkRequest& request, const ListUserDrawRecordByPkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserDrawRecordByPk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListUserDrawRecordByPkOutcomeCallable DevopsClient::listUserDrawRecordByPkCallable(const ListUserDrawRecordByPkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserDrawRecordByPkOutcome()>>(
			[this, request]()
			{
			return this->listUserDrawRecordByPk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListUserKeysOutcome DevopsClient::listUserKeys(const ListUserKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserKeysOutcome(ListUserKeysResult(outcome.result()));
	else
		return ListUserKeysOutcome(outcome.error());
}

void DevopsClient::listUserKeysAsync(const ListUserKeysRequest& request, const ListUserKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListUserKeysOutcomeCallable DevopsClient::listUserKeysCallable(const ListUserKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserKeysOutcome()>>(
			[this, request]()
			{
			return this->listUserKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListUserResourcesOutcome DevopsClient::listUserResources(const ListUserResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserResourcesOutcome(ListUserResourcesResult(outcome.result()));
	else
		return ListUserResourcesOutcome(outcome.error());
}

void DevopsClient::listUserResourcesAsync(const ListUserResourcesRequest& request, const ListUserResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListUserResourcesOutcomeCallable DevopsClient::listUserResourcesCallable(const ListUserResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserResourcesOutcome()>>(
			[this, request]()
			{
			return this->listUserResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListVariableGroupsOutcome DevopsClient::listVariableGroups(const ListVariableGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVariableGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVariableGroupsOutcome(ListVariableGroupsResult(outcome.result()));
	else
		return ListVariableGroupsOutcome(outcome.error());
}

void DevopsClient::listVariableGroupsAsync(const ListVariableGroupsRequest& request, const ListVariableGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVariableGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListVariableGroupsOutcomeCallable DevopsClient::listVariableGroupsCallable(const ListVariableGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVariableGroupsOutcome()>>(
			[this, request]()
			{
			return this->listVariableGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkItemAllFieldsOutcome DevopsClient::listWorkItemAllFields(const ListWorkItemAllFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkItemAllFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkItemAllFieldsOutcome(ListWorkItemAllFieldsResult(outcome.result()));
	else
		return ListWorkItemAllFieldsOutcome(outcome.error());
}

void DevopsClient::listWorkItemAllFieldsAsync(const ListWorkItemAllFieldsRequest& request, const ListWorkItemAllFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkItemAllFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkItemAllFieldsOutcomeCallable DevopsClient::listWorkItemAllFieldsCallable(const ListWorkItemAllFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkItemAllFieldsOutcome()>>(
			[this, request]()
			{
			return this->listWorkItemAllFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkItemWorkFlowStatusOutcome DevopsClient::listWorkItemWorkFlowStatus(const ListWorkItemWorkFlowStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkItemWorkFlowStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkItemWorkFlowStatusOutcome(ListWorkItemWorkFlowStatusResult(outcome.result()));
	else
		return ListWorkItemWorkFlowStatusOutcome(outcome.error());
}

void DevopsClient::listWorkItemWorkFlowStatusAsync(const ListWorkItemWorkFlowStatusRequest& request, const ListWorkItemWorkFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkItemWorkFlowStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkItemWorkFlowStatusOutcomeCallable DevopsClient::listWorkItemWorkFlowStatusCallable(const ListWorkItemWorkFlowStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkItemWorkFlowStatusOutcome()>>(
			[this, request]()
			{
			return this->listWorkItemWorkFlowStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkitemAttachmentsOutcome DevopsClient::listWorkitemAttachments(const ListWorkitemAttachmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkitemAttachmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkitemAttachmentsOutcome(ListWorkitemAttachmentsResult(outcome.result()));
	else
		return ListWorkitemAttachmentsOutcome(outcome.error());
}

void DevopsClient::listWorkitemAttachmentsAsync(const ListWorkitemAttachmentsRequest& request, const ListWorkitemAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkitemAttachments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkitemAttachmentsOutcomeCallable DevopsClient::listWorkitemAttachmentsCallable(const ListWorkitemAttachmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkitemAttachmentsOutcome()>>(
			[this, request]()
			{
			return this->listWorkitemAttachments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkitemEstimateOutcome DevopsClient::listWorkitemEstimate(const ListWorkitemEstimateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkitemEstimateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkitemEstimateOutcome(ListWorkitemEstimateResult(outcome.result()));
	else
		return ListWorkitemEstimateOutcome(outcome.error());
}

void DevopsClient::listWorkitemEstimateAsync(const ListWorkitemEstimateRequest& request, const ListWorkitemEstimateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkitemEstimate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkitemEstimateOutcomeCallable DevopsClient::listWorkitemEstimateCallable(const ListWorkitemEstimateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkitemEstimateOutcome()>>(
			[this, request]()
			{
			return this->listWorkitemEstimate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkitemTimeOutcome DevopsClient::listWorkitemTime(const ListWorkitemTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkitemTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkitemTimeOutcome(ListWorkitemTimeResult(outcome.result()));
	else
		return ListWorkitemTimeOutcome(outcome.error());
}

void DevopsClient::listWorkitemTimeAsync(const ListWorkitemTimeRequest& request, const ListWorkitemTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkitemTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkitemTimeOutcomeCallable DevopsClient::listWorkitemTimeCallable(const ListWorkitemTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkitemTimeOutcome()>>(
			[this, request]()
			{
			return this->listWorkitemTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkitemsOutcome DevopsClient::listWorkitems(const ListWorkitemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkitemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkitemsOutcome(ListWorkitemsResult(outcome.result()));
	else
		return ListWorkitemsOutcome(outcome.error());
}

void DevopsClient::listWorkitemsAsync(const ListWorkitemsRequest& request, const ListWorkitemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkitems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkitemsOutcomeCallable DevopsClient::listWorkitemsCallable(const ListWorkitemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkitemsOutcome()>>(
			[this, request]()
			{
			return this->listWorkitems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ListWorkspacesOutcome DevopsClient::listWorkspaces(const ListWorkspacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkspacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkspacesOutcome(ListWorkspacesResult(outcome.result()));
	else
		return ListWorkspacesOutcome(outcome.error());
}

void DevopsClient::listWorkspacesAsync(const ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkspaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ListWorkspacesOutcomeCallable DevopsClient::listWorkspacesCallable(const ListWorkspacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkspacesOutcome()>>(
			[this, request]()
			{
			return this->listWorkspaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::LogPipelineJobRunOutcome DevopsClient::logPipelineJobRun(const LogPipelineJobRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LogPipelineJobRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LogPipelineJobRunOutcome(LogPipelineJobRunResult(outcome.result()));
	else
		return LogPipelineJobRunOutcome(outcome.error());
}

void DevopsClient::logPipelineJobRunAsync(const LogPipelineJobRunRequest& request, const LogPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, logPipelineJobRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::LogPipelineJobRunOutcomeCallable DevopsClient::logPipelineJobRunCallable(const LogPipelineJobRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LogPipelineJobRunOutcome()>>(
			[this, request]()
			{
			return this->logPipelineJobRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::LogVMDeployMachineOutcome DevopsClient::logVMDeployMachine(const LogVMDeployMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LogVMDeployMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LogVMDeployMachineOutcome(LogVMDeployMachineResult(outcome.result()));
	else
		return LogVMDeployMachineOutcome(outcome.error());
}

void DevopsClient::logVMDeployMachineAsync(const LogVMDeployMachineRequest& request, const LogVMDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, logVMDeployMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::LogVMDeployMachineOutcomeCallable DevopsClient::logVMDeployMachineCallable(const LogVMDeployMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LogVMDeployMachineOutcome()>>(
			[this, request]()
			{
			return this->logVMDeployMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::MergeMergeRequestOutcome DevopsClient::mergeMergeRequest(const MergeMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MergeMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MergeMergeRequestOutcome(MergeMergeRequestResult(outcome.result()));
	else
		return MergeMergeRequestOutcome(outcome.error());
}

void DevopsClient::mergeMergeRequestAsync(const MergeMergeRequestRequest& request, const MergeMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mergeMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::MergeMergeRequestOutcomeCallable DevopsClient::mergeMergeRequestCallable(const MergeMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MergeMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->mergeMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::PassPipelineValidateOutcome DevopsClient::passPipelineValidate(const PassPipelineValidateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PassPipelineValidateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PassPipelineValidateOutcome(PassPipelineValidateResult(outcome.result()));
	else
		return PassPipelineValidateOutcome(outcome.error());
}

void DevopsClient::passPipelineValidateAsync(const PassPipelineValidateRequest& request, const PassPipelineValidateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, passPipelineValidate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::PassPipelineValidateOutcomeCallable DevopsClient::passPipelineValidateCallable(const PassPipelineValidateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PassPipelineValidateOutcome()>>(
			[this, request]()
			{
			return this->passPipelineValidate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::RefusePipelineValidateOutcome DevopsClient::refusePipelineValidate(const RefusePipelineValidateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefusePipelineValidateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefusePipelineValidateOutcome(RefusePipelineValidateResult(outcome.result()));
	else
		return RefusePipelineValidateOutcome(outcome.error());
}

void DevopsClient::refusePipelineValidateAsync(const RefusePipelineValidateRequest& request, const RefusePipelineValidateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refusePipelineValidate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::RefusePipelineValidateOutcomeCallable DevopsClient::refusePipelineValidateCallable(const RefusePipelineValidateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefusePipelineValidateOutcome()>>(
			[this, request]()
			{
			return this->refusePipelineValidate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ReleaseWorkspaceOutcome DevopsClient::releaseWorkspace(const ReleaseWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseWorkspaceOutcome(ReleaseWorkspaceResult(outcome.result()));
	else
		return ReleaseWorkspaceOutcome(outcome.error());
}

void DevopsClient::releaseWorkspaceAsync(const ReleaseWorkspaceRequest& request, const ReleaseWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ReleaseWorkspaceOutcomeCallable DevopsClient::releaseWorkspaceCallable(const ReleaseWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->releaseWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ReopenMergeRequestOutcome DevopsClient::reopenMergeRequest(const ReopenMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReopenMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReopenMergeRequestOutcome(ReopenMergeRequestResult(outcome.result()));
	else
		return ReopenMergeRequestOutcome(outcome.error());
}

void DevopsClient::reopenMergeRequestAsync(const ReopenMergeRequestRequest& request, const ReopenMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reopenMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ReopenMergeRequestOutcomeCallable DevopsClient::reopenMergeRequestCallable(const ReopenMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReopenMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->reopenMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ResetSshKeyOutcome DevopsClient::resetSshKey(const ResetSshKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSshKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSshKeyOutcome(ResetSshKeyResult(outcome.result()));
	else
		return ResetSshKeyOutcome(outcome.error());
}

void DevopsClient::resetSshKeyAsync(const ResetSshKeyRequest& request, const ResetSshKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSshKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ResetSshKeyOutcomeCallable DevopsClient::resetSshKeyCallable(const ResetSshKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSshKeyOutcome()>>(
			[this, request]()
			{
			return this->resetSshKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ResumeVMDeployOrderOutcome DevopsClient::resumeVMDeployOrder(const ResumeVMDeployOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeVMDeployOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeVMDeployOrderOutcome(ResumeVMDeployOrderResult(outcome.result()));
	else
		return ResumeVMDeployOrderOutcome(outcome.error());
}

void DevopsClient::resumeVMDeployOrderAsync(const ResumeVMDeployOrderRequest& request, const ResumeVMDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeVMDeployOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ResumeVMDeployOrderOutcomeCallable DevopsClient::resumeVMDeployOrderCallable(const ResumeVMDeployOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeVMDeployOrderOutcome()>>(
			[this, request]()
			{
			return this->resumeVMDeployOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::RetryPipelineJobRunOutcome DevopsClient::retryPipelineJobRun(const RetryPipelineJobRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryPipelineJobRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryPipelineJobRunOutcome(RetryPipelineJobRunResult(outcome.result()));
	else
		return RetryPipelineJobRunOutcome(outcome.error());
}

void DevopsClient::retryPipelineJobRunAsync(const RetryPipelineJobRunRequest& request, const RetryPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryPipelineJobRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::RetryPipelineJobRunOutcomeCallable DevopsClient::retryPipelineJobRunCallable(const RetryPipelineJobRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryPipelineJobRunOutcome()>>(
			[this, request]()
			{
			return this->retryPipelineJobRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::RetryVMDeployMachineOutcome DevopsClient::retryVMDeployMachine(const RetryVMDeployMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryVMDeployMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryVMDeployMachineOutcome(RetryVMDeployMachineResult(outcome.result()));
	else
		return RetryVMDeployMachineOutcome(outcome.error());
}

void DevopsClient::retryVMDeployMachineAsync(const RetryVMDeployMachineRequest& request, const RetryVMDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryVMDeployMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::RetryVMDeployMachineOutcomeCallable DevopsClient::retryVMDeployMachineCallable(const RetryVMDeployMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryVMDeployMachineOutcome()>>(
			[this, request]()
			{
			return this->retryVMDeployMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::ReviewMergeRequestOutcome DevopsClient::reviewMergeRequest(const ReviewMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReviewMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReviewMergeRequestOutcome(ReviewMergeRequestResult(outcome.result()));
	else
		return ReviewMergeRequestOutcome(outcome.error());
}

void DevopsClient::reviewMergeRequestAsync(const ReviewMergeRequestRequest& request, const ReviewMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reviewMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::ReviewMergeRequestOutcomeCallable DevopsClient::reviewMergeRequestCallable(const ReviewMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReviewMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->reviewMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::SkipPipelineJobRunOutcome DevopsClient::skipPipelineJobRun(const SkipPipelineJobRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SkipPipelineJobRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SkipPipelineJobRunOutcome(SkipPipelineJobRunResult(outcome.result()));
	else
		return SkipPipelineJobRunOutcome(outcome.error());
}

void DevopsClient::skipPipelineJobRunAsync(const SkipPipelineJobRunRequest& request, const SkipPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, skipPipelineJobRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::SkipPipelineJobRunOutcomeCallable DevopsClient::skipPipelineJobRunCallable(const SkipPipelineJobRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SkipPipelineJobRunOutcome()>>(
			[this, request]()
			{
			return this->skipPipelineJobRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::SkipVMDeployMachineOutcome DevopsClient::skipVMDeployMachine(const SkipVMDeployMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SkipVMDeployMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SkipVMDeployMachineOutcome(SkipVMDeployMachineResult(outcome.result()));
	else
		return SkipVMDeployMachineOutcome(outcome.error());
}

void DevopsClient::skipVMDeployMachineAsync(const SkipVMDeployMachineRequest& request, const SkipVMDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, skipVMDeployMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::SkipVMDeployMachineOutcomeCallable DevopsClient::skipVMDeployMachineCallable(const SkipVMDeployMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SkipVMDeployMachineOutcome()>>(
			[this, request]()
			{
			return this->skipVMDeployMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::StartPipelineRunOutcome DevopsClient::startPipelineRun(const StartPipelineRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPipelineRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPipelineRunOutcome(StartPipelineRunResult(outcome.result()));
	else
		return StartPipelineRunOutcome(outcome.error());
}

void DevopsClient::startPipelineRunAsync(const StartPipelineRunRequest& request, const StartPipelineRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPipelineRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::StartPipelineRunOutcomeCallable DevopsClient::startPipelineRunCallable(const StartPipelineRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPipelineRunOutcome()>>(
			[this, request]()
			{
			return this->startPipelineRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::StopPipelineJobRunOutcome DevopsClient::stopPipelineJobRun(const StopPipelineJobRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopPipelineJobRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopPipelineJobRunOutcome(StopPipelineJobRunResult(outcome.result()));
	else
		return StopPipelineJobRunOutcome(outcome.error());
}

void DevopsClient::stopPipelineJobRunAsync(const StopPipelineJobRunRequest& request, const StopPipelineJobRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopPipelineJobRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::StopPipelineJobRunOutcomeCallable DevopsClient::stopPipelineJobRunCallable(const StopPipelineJobRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopPipelineJobRunOutcome()>>(
			[this, request]()
			{
			return this->stopPipelineJobRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::StopPipelineRunOutcome DevopsClient::stopPipelineRun(const StopPipelineRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopPipelineRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopPipelineRunOutcome(StopPipelineRunResult(outcome.result()));
	else
		return StopPipelineRunOutcome(outcome.error());
}

void DevopsClient::stopPipelineRunAsync(const StopPipelineRunRequest& request, const StopPipelineRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopPipelineRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::StopPipelineRunOutcomeCallable DevopsClient::stopPipelineRunCallable(const StopPipelineRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopPipelineRunOutcome()>>(
			[this, request]()
			{
			return this->stopPipelineRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::StopVMDeployOrderOutcome DevopsClient::stopVMDeployOrder(const StopVMDeployOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopVMDeployOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopVMDeployOrderOutcome(StopVMDeployOrderResult(outcome.result()));
	else
		return StopVMDeployOrderOutcome(outcome.error());
}

void DevopsClient::stopVMDeployOrderAsync(const StopVMDeployOrderRequest& request, const StopVMDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopVMDeployOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::StopVMDeployOrderOutcomeCallable DevopsClient::stopVMDeployOrderCallable(const StopVMDeployOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopVMDeployOrderOutcome()>>(
			[this, request]()
			{
			return this->stopVMDeployOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::TransferRepositoryOutcome DevopsClient::transferRepository(const TransferRepositoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferRepositoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferRepositoryOutcome(TransferRepositoryResult(outcome.result()));
	else
		return TransferRepositoryOutcome(outcome.error());
}

void DevopsClient::transferRepositoryAsync(const TransferRepositoryRequest& request, const TransferRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::TransferRepositoryOutcomeCallable DevopsClient::transferRepositoryCallable(const TransferRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferRepositoryOutcome()>>(
			[this, request]()
			{
			return this->transferRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::TriggerRepositoryMirrorSyncOutcome DevopsClient::triggerRepositoryMirrorSync(const TriggerRepositoryMirrorSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerRepositoryMirrorSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerRepositoryMirrorSyncOutcome(TriggerRepositoryMirrorSyncResult(outcome.result()));
	else
		return TriggerRepositoryMirrorSyncOutcome(outcome.error());
}

void DevopsClient::triggerRepositoryMirrorSyncAsync(const TriggerRepositoryMirrorSyncRequest& request, const TriggerRepositoryMirrorSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerRepositoryMirrorSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::TriggerRepositoryMirrorSyncOutcomeCallable DevopsClient::triggerRepositoryMirrorSyncCallable(const TriggerRepositoryMirrorSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerRepositoryMirrorSyncOutcome()>>(
			[this, request]()
			{
			return this->triggerRepositoryMirrorSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateAppMemberOutcome DevopsClient::updateAppMember(const UpdateAppMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAppMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAppMemberOutcome(UpdateAppMemberResult(outcome.result()));
	else
		return UpdateAppMemberOutcome(outcome.error());
}

void DevopsClient::updateAppMemberAsync(const UpdateAppMemberRequest& request, const UpdateAppMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAppMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateAppMemberOutcomeCallable DevopsClient::updateAppMemberCallable(const UpdateAppMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAppMemberOutcome()>>(
			[this, request]()
			{
			return this->updateAppMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateApplicationOutcome DevopsClient::updateApplication(const UpdateApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationOutcome(UpdateApplicationResult(outcome.result()));
	else
		return UpdateApplicationOutcome(outcome.error());
}

void DevopsClient::updateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateApplicationOutcomeCallable DevopsClient::updateApplicationCallable(const UpdateApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationOutcome()>>(
			[this, request]()
			{
			return this->updateApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateCheckRunOutcome DevopsClient::updateCheckRun(const UpdateCheckRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCheckRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCheckRunOutcome(UpdateCheckRunResult(outcome.result()));
	else
		return UpdateCheckRunOutcome(outcome.error());
}

void DevopsClient::updateCheckRunAsync(const UpdateCheckRunRequest& request, const UpdateCheckRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCheckRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateCheckRunOutcomeCallable DevopsClient::updateCheckRunCallable(const UpdateCheckRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCheckRunOutcome()>>(
			[this, request]()
			{
			return this->updateCheckRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateFileOutcome DevopsClient::updateFile(const UpdateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFileOutcome(UpdateFileResult(outcome.result()));
	else
		return UpdateFileOutcome(outcome.error());
}

void DevopsClient::updateFileAsync(const UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateFileOutcomeCallable DevopsClient::updateFileCallable(const UpdateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFileOutcome()>>(
			[this, request]()
			{
			return this->updateFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateFlowTagOutcome DevopsClient::updateFlowTag(const UpdateFlowTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFlowTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFlowTagOutcome(UpdateFlowTagResult(outcome.result()));
	else
		return UpdateFlowTagOutcome(outcome.error());
}

void DevopsClient::updateFlowTagAsync(const UpdateFlowTagRequest& request, const UpdateFlowTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFlowTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateFlowTagOutcomeCallable DevopsClient::updateFlowTagCallable(const UpdateFlowTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFlowTagOutcome()>>(
			[this, request]()
			{
			return this->updateFlowTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateFlowTagGroupOutcome DevopsClient::updateFlowTagGroup(const UpdateFlowTagGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFlowTagGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFlowTagGroupOutcome(UpdateFlowTagGroupResult(outcome.result()));
	else
		return UpdateFlowTagGroupOutcome(outcome.error());
}

void DevopsClient::updateFlowTagGroupAsync(const UpdateFlowTagGroupRequest& request, const UpdateFlowTagGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFlowTagGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateFlowTagGroupOutcomeCallable DevopsClient::updateFlowTagGroupCallable(const UpdateFlowTagGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFlowTagGroupOutcome()>>(
			[this, request]()
			{
			return this->updateFlowTagGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateGroupOutcome DevopsClient::updateGroup(const UpdateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGroupOutcome(UpdateGroupResult(outcome.result()));
	else
		return UpdateGroupOutcome(outcome.error());
}

void DevopsClient::updateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateGroupOutcomeCallable DevopsClient::updateGroupCallable(const UpdateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
			[this, request]()
			{
			return this->updateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateGroupMemberOutcome DevopsClient::updateGroupMember(const UpdateGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGroupMemberOutcome(UpdateGroupMemberResult(outcome.result()));
	else
		return UpdateGroupMemberOutcome(outcome.error());
}

void DevopsClient::updateGroupMemberAsync(const UpdateGroupMemberRequest& request, const UpdateGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateGroupMemberOutcomeCallable DevopsClient::updateGroupMemberCallable(const UpdateGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->updateGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateHostGroupOutcome DevopsClient::updateHostGroup(const UpdateHostGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHostGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHostGroupOutcome(UpdateHostGroupResult(outcome.result()));
	else
		return UpdateHostGroupOutcome(outcome.error());
}

void DevopsClient::updateHostGroupAsync(const UpdateHostGroupRequest& request, const UpdateHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHostGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateHostGroupOutcomeCallable DevopsClient::updateHostGroupCallable(const UpdateHostGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHostGroupOutcome()>>(
			[this, request]()
			{
			return this->updateHostGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateMergeRequestOutcome DevopsClient::updateMergeRequest(const UpdateMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMergeRequestOutcome(UpdateMergeRequestResult(outcome.result()));
	else
		return UpdateMergeRequestOutcome(outcome.error());
}

void DevopsClient::updateMergeRequestAsync(const UpdateMergeRequestRequest& request, const UpdateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateMergeRequestOutcomeCallable DevopsClient::updateMergeRequestCallable(const UpdateMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->updateMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateMergeRequestPersonnelOutcome DevopsClient::updateMergeRequestPersonnel(const UpdateMergeRequestPersonnelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMergeRequestPersonnelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMergeRequestPersonnelOutcome(UpdateMergeRequestPersonnelResult(outcome.result()));
	else
		return UpdateMergeRequestPersonnelOutcome(outcome.error());
}

void DevopsClient::updateMergeRequestPersonnelAsync(const UpdateMergeRequestPersonnelRequest& request, const UpdateMergeRequestPersonnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMergeRequestPersonnel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateMergeRequestPersonnelOutcomeCallable DevopsClient::updateMergeRequestPersonnelCallable(const UpdateMergeRequestPersonnelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMergeRequestPersonnelOutcome()>>(
			[this, request]()
			{
			return this->updateMergeRequestPersonnel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdatePipelineOutcome DevopsClient::updatePipeline(const UpdatePipelineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineOutcome(UpdatePipelineResult(outcome.result()));
	else
		return UpdatePipelineOutcome(outcome.error());
}

void DevopsClient::updatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipeline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdatePipelineOutcomeCallable DevopsClient::updatePipelineCallable(const UpdatePipelineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineOutcome()>>(
			[this, request]()
			{
			return this->updatePipeline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdatePipelineBaseInfoOutcome DevopsClient::updatePipelineBaseInfo(const UpdatePipelineBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineBaseInfoOutcome(UpdatePipelineBaseInfoResult(outcome.result()));
	else
		return UpdatePipelineBaseInfoOutcome(outcome.error());
}

void DevopsClient::updatePipelineBaseInfoAsync(const UpdatePipelineBaseInfoRequest& request, const UpdatePipelineBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipelineBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdatePipelineBaseInfoOutcomeCallable DevopsClient::updatePipelineBaseInfoCallable(const UpdatePipelineBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->updatePipelineBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdatePipelineGroupOutcome DevopsClient::updatePipelineGroup(const UpdatePipelineGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePipelineGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePipelineGroupOutcome(UpdatePipelineGroupResult(outcome.result()));
	else
		return UpdatePipelineGroupOutcome(outcome.error());
}

void DevopsClient::updatePipelineGroupAsync(const UpdatePipelineGroupRequest& request, const UpdatePipelineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePipelineGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdatePipelineGroupOutcomeCallable DevopsClient::updatePipelineGroupCallable(const UpdatePipelineGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePipelineGroupOutcome()>>(
			[this, request]()
			{
			return this->updatePipelineGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateProjectFieldOutcome DevopsClient::updateProjectField(const UpdateProjectFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectFieldOutcome(UpdateProjectFieldResult(outcome.result()));
	else
		return UpdateProjectFieldOutcome(outcome.error());
}

void DevopsClient::updateProjectFieldAsync(const UpdateProjectFieldRequest& request, const UpdateProjectFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateProjectFieldOutcomeCallable DevopsClient::updateProjectFieldCallable(const UpdateProjectFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectFieldOutcome()>>(
			[this, request]()
			{
			return this->updateProjectField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateProjectLabelOutcome DevopsClient::updateProjectLabel(const UpdateProjectLabelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectLabelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectLabelOutcome(UpdateProjectLabelResult(outcome.result()));
	else
		return UpdateProjectLabelOutcome(outcome.error());
}

void DevopsClient::updateProjectLabelAsync(const UpdateProjectLabelRequest& request, const UpdateProjectLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectLabel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateProjectLabelOutcomeCallable DevopsClient::updateProjectLabelCallable(const UpdateProjectLabelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectLabelOutcome()>>(
			[this, request]()
			{
			return this->updateProjectLabel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateProjectMemberOutcome DevopsClient::updateProjectMember(const UpdateProjectMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProjectMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProjectMemberOutcome(UpdateProjectMemberResult(outcome.result()));
	else
		return UpdateProjectMemberOutcome(outcome.error());
}

void DevopsClient::updateProjectMemberAsync(const UpdateProjectMemberRequest& request, const UpdateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProjectMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateProjectMemberOutcomeCallable DevopsClient::updateProjectMemberCallable(const UpdateProjectMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProjectMemberOutcome()>>(
			[this, request]()
			{
			return this->updateProjectMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateProtectedBranchesOutcome DevopsClient::updateProtectedBranches(const UpdateProtectedBranchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProtectedBranchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProtectedBranchesOutcome(UpdateProtectedBranchesResult(outcome.result()));
	else
		return UpdateProtectedBranchesOutcome(outcome.error());
}

void DevopsClient::updateProtectedBranchesAsync(const UpdateProtectedBranchesRequest& request, const UpdateProtectedBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProtectedBranches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateProtectedBranchesOutcomeCallable DevopsClient::updateProtectedBranchesCallable(const UpdateProtectedBranchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProtectedBranchesOutcome()>>(
			[this, request]()
			{
			return this->updateProtectedBranches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdatePushReviewOnOffOutcome DevopsClient::updatePushReviewOnOff(const UpdatePushReviewOnOffRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePushReviewOnOffOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePushReviewOnOffOutcome(UpdatePushReviewOnOffResult(outcome.result()));
	else
		return UpdatePushReviewOnOffOutcome(outcome.error());
}

void DevopsClient::updatePushReviewOnOffAsync(const UpdatePushReviewOnOffRequest& request, const UpdatePushReviewOnOffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePushReviewOnOff(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdatePushReviewOnOffOutcomeCallable DevopsClient::updatePushReviewOnOffCallable(const UpdatePushReviewOnOffRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePushReviewOnOffOutcome()>>(
			[this, request]()
			{
			return this->updatePushReviewOnOff(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdatePushRuleOutcome DevopsClient::updatePushRule(const UpdatePushRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePushRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePushRuleOutcome(UpdatePushRuleResult(outcome.result()));
	else
		return UpdatePushRuleOutcome(outcome.error());
}

void DevopsClient::updatePushRuleAsync(const UpdatePushRuleRequest& request, const UpdatePushRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePushRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdatePushRuleOutcomeCallable DevopsClient::updatePushRuleCallable(const UpdatePushRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePushRuleOutcome()>>(
			[this, request]()
			{
			return this->updatePushRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateRepositoryOutcome DevopsClient::updateRepository(const UpdateRepositoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRepositoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRepositoryOutcome(UpdateRepositoryResult(outcome.result()));
	else
		return UpdateRepositoryOutcome(outcome.error());
}

void DevopsClient::updateRepositoryAsync(const UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateRepositoryOutcomeCallable DevopsClient::updateRepositoryCallable(const UpdateRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRepositoryOutcome()>>(
			[this, request]()
			{
			return this->updateRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateRepositoryMemberOutcome DevopsClient::updateRepositoryMember(const UpdateRepositoryMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRepositoryMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRepositoryMemberOutcome(UpdateRepositoryMemberResult(outcome.result()));
	else
		return UpdateRepositoryMemberOutcome(outcome.error());
}

void DevopsClient::updateRepositoryMemberAsync(const UpdateRepositoryMemberRequest& request, const UpdateRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateRepositoryMemberOutcomeCallable DevopsClient::updateRepositoryMemberCallable(const UpdateRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->updateRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateResourceMemberOutcome DevopsClient::updateResourceMember(const UpdateResourceMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateResourceMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateResourceMemberOutcome(UpdateResourceMemberResult(outcome.result()));
	else
		return UpdateResourceMemberOutcome(outcome.error());
}

void DevopsClient::updateResourceMemberAsync(const UpdateResourceMemberRequest& request, const UpdateResourceMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateResourceMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateResourceMemberOutcomeCallable DevopsClient::updateResourceMemberCallable(const UpdateResourceMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateResourceMemberOutcome()>>(
			[this, request]()
			{
			return this->updateResourceMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateTestCaseOutcome DevopsClient::updateTestCase(const UpdateTestCaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTestCaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTestCaseOutcome(UpdateTestCaseResult(outcome.result()));
	else
		return UpdateTestCaseOutcome(outcome.error());
}

void DevopsClient::updateTestCaseAsync(const UpdateTestCaseRequest& request, const UpdateTestCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTestCase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateTestCaseOutcomeCallable DevopsClient::updateTestCaseCallable(const UpdateTestCaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTestCaseOutcome()>>(
			[this, request]()
			{
			return this->updateTestCase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateTestResultOutcome DevopsClient::updateTestResult(const UpdateTestResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTestResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTestResultOutcome(UpdateTestResultResult(outcome.result()));
	else
		return UpdateTestResultOutcome(outcome.error());
}

void DevopsClient::updateTestResultAsync(const UpdateTestResultRequest& request, const UpdateTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTestResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateTestResultOutcomeCallable DevopsClient::updateTestResultCallable(const UpdateTestResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTestResultOutcome()>>(
			[this, request]()
			{
			return this->updateTestResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateVariableGroupOutcome DevopsClient::updateVariableGroup(const UpdateVariableGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVariableGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVariableGroupOutcome(UpdateVariableGroupResult(outcome.result()));
	else
		return UpdateVariableGroupOutcome(outcome.error());
}

void DevopsClient::updateVariableGroupAsync(const UpdateVariableGroupRequest& request, const UpdateVariableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVariableGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateVariableGroupOutcomeCallable DevopsClient::updateVariableGroupCallable(const UpdateVariableGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVariableGroupOutcome()>>(
			[this, request]()
			{
			return this->updateVariableGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateWorkItemOutcome DevopsClient::updateWorkItem(const UpdateWorkItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkItemOutcome(UpdateWorkItemResult(outcome.result()));
	else
		return UpdateWorkItemOutcome(outcome.error());
}

void DevopsClient::updateWorkItemAsync(const UpdateWorkItemRequest& request, const UpdateWorkItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateWorkItemOutcomeCallable DevopsClient::updateWorkItemCallable(const UpdateWorkItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkItemOutcome()>>(
			[this, request]()
			{
			return this->updateWorkItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateWorkitemCommentOutcome DevopsClient::updateWorkitemComment(const UpdateWorkitemCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkitemCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkitemCommentOutcome(UpdateWorkitemCommentResult(outcome.result()));
	else
		return UpdateWorkitemCommentOutcome(outcome.error());
}

void DevopsClient::updateWorkitemCommentAsync(const UpdateWorkitemCommentRequest& request, const UpdateWorkitemCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkitemComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateWorkitemCommentOutcomeCallable DevopsClient::updateWorkitemCommentCallable(const UpdateWorkitemCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkitemCommentOutcome()>>(
			[this, request]()
			{
			return this->updateWorkitemComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::UpdateWorkitemFieldOutcome DevopsClient::updateWorkitemField(const UpdateWorkitemFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkitemFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkitemFieldOutcome(UpdateWorkitemFieldResult(outcome.result()));
	else
		return UpdateWorkitemFieldOutcome(outcome.error());
}

void DevopsClient::updateWorkitemFieldAsync(const UpdateWorkitemFieldRequest& request, const UpdateWorkitemFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkitemField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::UpdateWorkitemFieldOutcomeCallable DevopsClient::updateWorkitemFieldCallable(const UpdateWorkitemFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkitemFieldOutcome()>>(
			[this, request]()
			{
			return this->updateWorkitemField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DevopsClient::WorkitemAttachmentCreateOutcome DevopsClient::workitemAttachmentCreate(const WorkitemAttachmentCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WorkitemAttachmentCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WorkitemAttachmentCreateOutcome(WorkitemAttachmentCreateResult(outcome.result()));
	else
		return WorkitemAttachmentCreateOutcome(outcome.error());
}

void DevopsClient::workitemAttachmentCreateAsync(const WorkitemAttachmentCreateRequest& request, const WorkitemAttachmentCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, workitemAttachmentCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DevopsClient::WorkitemAttachmentCreateOutcomeCallable DevopsClient::workitemAttachmentCreateCallable(const WorkitemAttachmentCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WorkitemAttachmentCreateOutcome()>>(
			[this, request]()
			{
			return this->workitemAttachmentCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

