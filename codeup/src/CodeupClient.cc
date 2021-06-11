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

#include <alibabacloud/codeup/CodeupClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

namespace
{
	const std::string SERVICE_NAME = "codeup";
}

CodeupClient::CodeupClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CodeupClient::CodeupClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CodeupClient::CodeupClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CodeupClient::~CodeupClient()
{}

CodeupClient::AcceptMergeRequestOutcome CodeupClient::acceptMergeRequest(const AcceptMergeRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptMergeRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptMergeRequestOutcome(AcceptMergeRequestResult(outcome.result()));
	else
		return AcceptMergeRequestOutcome(outcome.error());
}

void CodeupClient::acceptMergeRequestAsync(const AcceptMergeRequestRequest& request, const AcceptMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::AcceptMergeRequestOutcomeCallable CodeupClient::acceptMergeRequestCallable(const AcceptMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->acceptMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::AddGroupMemberOutcome CodeupClient::addGroupMember(const AddGroupMemberRequest &request) const
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

void CodeupClient::addGroupMemberAsync(const AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::AddGroupMemberOutcomeCallable CodeupClient::addGroupMemberCallable(const AddGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->addGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::AddRepositoryMemberOutcome CodeupClient::addRepositoryMember(const AddRepositoryMemberRequest &request) const
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

void CodeupClient::addRepositoryMemberAsync(const AddRepositoryMemberRequest& request, const AddRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::AddRepositoryMemberOutcomeCallable CodeupClient::addRepositoryMemberCallable(const AddRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->addRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::AddWebhookOutcome CodeupClient::addWebhook(const AddWebhookRequest &request) const
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

void CodeupClient::addWebhookAsync(const AddWebhookRequest& request, const AddWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::AddWebhookOutcomeCallable CodeupClient::addWebhookCallable(const AddWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddWebhookOutcome()>>(
			[this, request]()
			{
			return this->addWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateBranchOutcome CodeupClient::createBranch(const CreateBranchRequest &request) const
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

void CodeupClient::createBranchAsync(const CreateBranchRequest& request, const CreateBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateBranchOutcomeCallable CodeupClient::createBranchCallable(const CreateBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBranchOutcome()>>(
			[this, request]()
			{
			return this->createBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateFileOutcome CodeupClient::createFile(const CreateFileRequest &request) const
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

void CodeupClient::createFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateFileOutcomeCallable CodeupClient::createFileCallable(const CreateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileOutcome()>>(
			[this, request]()
			{
			return this->createFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateMergeRequestOutcome CodeupClient::createMergeRequest(const CreateMergeRequestRequest &request) const
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

void CodeupClient::createMergeRequestAsync(const CreateMergeRequestRequest& request, const CreateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateMergeRequestOutcomeCallable CodeupClient::createMergeRequestCallable(const CreateMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->createMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateMergeRequestCommentOutcome CodeupClient::createMergeRequestComment(const CreateMergeRequestCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMergeRequestCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMergeRequestCommentOutcome(CreateMergeRequestCommentResult(outcome.result()));
	else
		return CreateMergeRequestCommentOutcome(outcome.error());
}

void CodeupClient::createMergeRequestCommentAsync(const CreateMergeRequestCommentRequest& request, const CreateMergeRequestCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMergeRequestComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateMergeRequestCommentOutcomeCallable CodeupClient::createMergeRequestCommentCallable(const CreateMergeRequestCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMergeRequestCommentOutcome()>>(
			[this, request]()
			{
			return this->createMergeRequestComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateRepositoryOutcome CodeupClient::createRepository(const CreateRepositoryRequest &request) const
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

void CodeupClient::createRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateRepositoryOutcomeCallable CodeupClient::createRepositoryCallable(const CreateRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRepositoryOutcome()>>(
			[this, request]()
			{
			return this->createRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateRepositoryDeployKeyOutcome CodeupClient::createRepositoryDeployKey(const CreateRepositoryDeployKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRepositoryDeployKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRepositoryDeployKeyOutcome(CreateRepositoryDeployKeyResult(outcome.result()));
	else
		return CreateRepositoryDeployKeyOutcome(outcome.error());
}

void CodeupClient::createRepositoryDeployKeyAsync(const CreateRepositoryDeployKeyRequest& request, const CreateRepositoryDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRepositoryDeployKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateRepositoryDeployKeyOutcomeCallable CodeupClient::createRepositoryDeployKeyCallable(const CreateRepositoryDeployKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRepositoryDeployKeyOutcome()>>(
			[this, request]()
			{
			return this->createRepositoryDeployKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateRepositoryGroupOutcome CodeupClient::createRepositoryGroup(const CreateRepositoryGroupRequest &request) const
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

void CodeupClient::createRepositoryGroupAsync(const CreateRepositoryGroupRequest& request, const CreateRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRepositoryGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateRepositoryGroupOutcomeCallable CodeupClient::createRepositoryGroupCallable(const CreateRepositoryGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRepositoryGroupOutcome()>>(
			[this, request]()
			{
			return this->createRepositoryGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateRepositoryProtectedBranchOutcome CodeupClient::createRepositoryProtectedBranch(const CreateRepositoryProtectedBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRepositoryProtectedBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRepositoryProtectedBranchOutcome(CreateRepositoryProtectedBranchResult(outcome.result()));
	else
		return CreateRepositoryProtectedBranchOutcome(outcome.error());
}

void CodeupClient::createRepositoryProtectedBranchAsync(const CreateRepositoryProtectedBranchRequest& request, const CreateRepositoryProtectedBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRepositoryProtectedBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateRepositoryProtectedBranchOutcomeCallable CodeupClient::createRepositoryProtectedBranchCallable(const CreateRepositoryProtectedBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRepositoryProtectedBranchOutcome()>>(
			[this, request]()
			{
			return this->createRepositoryProtectedBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateSshKeyOutcome CodeupClient::createSshKey(const CreateSshKeyRequest &request) const
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

void CodeupClient::createSshKeyAsync(const CreateSshKeyRequest& request, const CreateSshKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSshKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateSshKeyOutcomeCallable CodeupClient::createSshKeyCallable(const CreateSshKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSshKeyOutcome()>>(
			[this, request]()
			{
			return this->createSshKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::CreateTagOutcome CodeupClient::createTag(const CreateTagRequest &request) const
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

void CodeupClient::createTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::CreateTagOutcomeCallable CodeupClient::createTagCallable(const CreateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
			[this, request]()
			{
			return this->createTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteBranchOutcome CodeupClient::deleteBranch(const DeleteBranchRequest &request) const
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

void CodeupClient::deleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteBranchOutcomeCallable CodeupClient::deleteBranchCallable(const DeleteBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBranchOutcome()>>(
			[this, request]()
			{
			return this->deleteBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteFileOutcome CodeupClient::deleteFile(const DeleteFileRequest &request) const
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

void CodeupClient::deleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteFileOutcomeCallable CodeupClient::deleteFileCallable(const DeleteFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
			[this, request]()
			{
			return this->deleteFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteGroupMemberOutcome CodeupClient::deleteGroupMember(const DeleteGroupMemberRequest &request) const
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

void CodeupClient::deleteGroupMemberAsync(const DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteGroupMemberOutcomeCallable CodeupClient::deleteGroupMemberCallable(const DeleteGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryOutcome CodeupClient::deleteRepository(const DeleteRepositoryRequest &request) const
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

void CodeupClient::deleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryOutcomeCallable CodeupClient::deleteRepositoryCallable(const DeleteRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryOutcome()>>(
			[this, request]()
			{
			return this->deleteRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryGroupOutcome CodeupClient::deleteRepositoryGroup(const DeleteRepositoryGroupRequest &request) const
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

void CodeupClient::deleteRepositoryGroupAsync(const DeleteRepositoryGroupRequest& request, const DeleteRepositoryGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryGroupOutcomeCallable CodeupClient::deleteRepositoryGroupCallable(const DeleteRepositoryGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryMemberOutcome CodeupClient::deleteRepositoryMember(const DeleteRepositoryMemberRequest &request) const
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

void CodeupClient::deleteRepositoryMemberAsync(const DeleteRepositoryMemberRequest& request, const DeleteRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryMemberOutcomeCallable CodeupClient::deleteRepositoryMemberCallable(const DeleteRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryProtectedBranchOutcome CodeupClient::deleteRepositoryProtectedBranch(const DeleteRepositoryProtectedBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryProtectedBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryProtectedBranchOutcome(DeleteRepositoryProtectedBranchResult(outcome.result()));
	else
		return DeleteRepositoryProtectedBranchOutcome(outcome.error());
}

void CodeupClient::deleteRepositoryProtectedBranchAsync(const DeleteRepositoryProtectedBranchRequest& request, const DeleteRepositoryProtectedBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryProtectedBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryProtectedBranchOutcomeCallable CodeupClient::deleteRepositoryProtectedBranchCallable(const DeleteRepositoryProtectedBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryProtectedBranchOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryProtectedBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryTagOutcome CodeupClient::deleteRepositoryTag(const DeleteRepositoryTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryTagOutcome(DeleteRepositoryTagResult(outcome.result()));
	else
		return DeleteRepositoryTagOutcome(outcome.error());
}

void CodeupClient::deleteRepositoryTagAsync(const DeleteRepositoryTagRequest& request, const DeleteRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryTagOutcomeCallable CodeupClient::deleteRepositoryTagCallable(const DeleteRepositoryTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryTagOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryTagV2Outcome CodeupClient::deleteRepositoryTagV2(const DeleteRepositoryTagV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRepositoryTagV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRepositoryTagV2Outcome(DeleteRepositoryTagV2Result(outcome.result()));
	else
		return DeleteRepositoryTagV2Outcome(outcome.error());
}

void CodeupClient::deleteRepositoryTagV2Async(const DeleteRepositoryTagV2Request& request, const DeleteRepositoryTagV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryTagV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryTagV2OutcomeCallable CodeupClient::deleteRepositoryTagV2Callable(const DeleteRepositoryTagV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryTagV2Outcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryTagV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::DeleteRepositoryWebhookOutcome CodeupClient::deleteRepositoryWebhook(const DeleteRepositoryWebhookRequest &request) const
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

void CodeupClient::deleteRepositoryWebhookAsync(const DeleteRepositoryWebhookRequest& request, const DeleteRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRepositoryWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::DeleteRepositoryWebhookOutcomeCallable CodeupClient::deleteRepositoryWebhookCallable(const DeleteRepositoryWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRepositoryWebhookOutcome()>>(
			[this, request]()
			{
			return this->deleteRepositoryWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::EnableRepositoryDeployKeyOutcome CodeupClient::enableRepositoryDeployKey(const EnableRepositoryDeployKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableRepositoryDeployKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableRepositoryDeployKeyOutcome(EnableRepositoryDeployKeyResult(outcome.result()));
	else
		return EnableRepositoryDeployKeyOutcome(outcome.error());
}

void CodeupClient::enableRepositoryDeployKeyAsync(const EnableRepositoryDeployKeyRequest& request, const EnableRepositoryDeployKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableRepositoryDeployKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::EnableRepositoryDeployKeyOutcomeCallable CodeupClient::enableRepositoryDeployKeyCallable(const EnableRepositoryDeployKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableRepositoryDeployKeyOutcome()>>(
			[this, request]()
			{
			return this->enableRepositoryDeployKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetBranchInfoOutcome CodeupClient::getBranchInfo(const GetBranchInfoRequest &request) const
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

void CodeupClient::getBranchInfoAsync(const GetBranchInfoRequest& request, const GetBranchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBranchInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetBranchInfoOutcomeCallable CodeupClient::getBranchInfoCallable(const GetBranchInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBranchInfoOutcome()>>(
			[this, request]()
			{
			return this->getBranchInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetCodeCompletionOutcome CodeupClient::getCodeCompletion(const GetCodeCompletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCodeCompletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCodeCompletionOutcome(GetCodeCompletionResult(outcome.result()));
	else
		return GetCodeCompletionOutcome(outcome.error());
}

void CodeupClient::getCodeCompletionAsync(const GetCodeCompletionRequest& request, const GetCodeCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCodeCompletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetCodeCompletionOutcomeCallable CodeupClient::getCodeCompletionCallable(const GetCodeCompletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCodeCompletionOutcome()>>(
			[this, request]()
			{
			return this->getCodeCompletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetCodeupOrganizationOutcome CodeupClient::getCodeupOrganization(const GetCodeupOrganizationRequest &request) const
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

void CodeupClient::getCodeupOrganizationAsync(const GetCodeupOrganizationRequest& request, const GetCodeupOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCodeupOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetCodeupOrganizationOutcomeCallable CodeupClient::getCodeupOrganizationCallable(const GetCodeupOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCodeupOrganizationOutcome()>>(
			[this, request]()
			{
			return this->getCodeupOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetFileBlobsOutcome CodeupClient::getFileBlobs(const GetFileBlobsRequest &request) const
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

void CodeupClient::getFileBlobsAsync(const GetFileBlobsRequest& request, const GetFileBlobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileBlobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetFileBlobsOutcomeCallable CodeupClient::getFileBlobsCallable(const GetFileBlobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileBlobsOutcome()>>(
			[this, request]()
			{
			return this->getFileBlobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetGroupDetailOutcome CodeupClient::getGroupDetail(const GetGroupDetailRequest &request) const
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

void CodeupClient::getGroupDetailAsync(const GetGroupDetailRequest& request, const GetGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetGroupDetailOutcomeCallable CodeupClient::getGroupDetailCallable(const GetGroupDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupDetailOutcome()>>(
			[this, request]()
			{
			return this->getGroupDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetMergeRequestApproveStatusOutcome CodeupClient::getMergeRequestApproveStatus(const GetMergeRequestApproveStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMergeRequestApproveStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMergeRequestApproveStatusOutcome(GetMergeRequestApproveStatusResult(outcome.result()));
	else
		return GetMergeRequestApproveStatusOutcome(outcome.error());
}

void CodeupClient::getMergeRequestApproveStatusAsync(const GetMergeRequestApproveStatusRequest& request, const GetMergeRequestApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMergeRequestApproveStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetMergeRequestApproveStatusOutcomeCallable CodeupClient::getMergeRequestApproveStatusCallable(const GetMergeRequestApproveStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMergeRequestApproveStatusOutcome()>>(
			[this, request]()
			{
			return this->getMergeRequestApproveStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetMergeRequestDetailOutcome CodeupClient::getMergeRequestDetail(const GetMergeRequestDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMergeRequestDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMergeRequestDetailOutcome(GetMergeRequestDetailResult(outcome.result()));
	else
		return GetMergeRequestDetailOutcome(outcome.error());
}

void CodeupClient::getMergeRequestDetailAsync(const GetMergeRequestDetailRequest& request, const GetMergeRequestDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMergeRequestDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetMergeRequestDetailOutcomeCallable CodeupClient::getMergeRequestDetailCallable(const GetMergeRequestDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMergeRequestDetailOutcome()>>(
			[this, request]()
			{
			return this->getMergeRequestDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetMergeRequestSettingOutcome CodeupClient::getMergeRequestSetting(const GetMergeRequestSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMergeRequestSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMergeRequestSettingOutcome(GetMergeRequestSettingResult(outcome.result()));
	else
		return GetMergeRequestSettingOutcome(outcome.error());
}

void CodeupClient::getMergeRequestSettingAsync(const GetMergeRequestSettingRequest& request, const GetMergeRequestSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMergeRequestSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetMergeRequestSettingOutcomeCallable CodeupClient::getMergeRequestSettingCallable(const GetMergeRequestSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMergeRequestSettingOutcome()>>(
			[this, request]()
			{
			return this->getMergeRequestSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetOrganizationSecurityCenterStatusOutcome CodeupClient::getOrganizationSecurityCenterStatus(const GetOrganizationSecurityCenterStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrganizationSecurityCenterStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrganizationSecurityCenterStatusOutcome(GetOrganizationSecurityCenterStatusResult(outcome.result()));
	else
		return GetOrganizationSecurityCenterStatusOutcome(outcome.error());
}

void CodeupClient::getOrganizationSecurityCenterStatusAsync(const GetOrganizationSecurityCenterStatusRequest& request, const GetOrganizationSecurityCenterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrganizationSecurityCenterStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetOrganizationSecurityCenterStatusOutcomeCallable CodeupClient::getOrganizationSecurityCenterStatusCallable(const GetOrganizationSecurityCenterStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrganizationSecurityCenterStatusOutcome()>>(
			[this, request]()
			{
			return this->getOrganizationSecurityCenterStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetProjectMemberOutcome CodeupClient::getProjectMember(const GetProjectMemberRequest &request) const
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

void CodeupClient::getProjectMemberAsync(const GetProjectMemberRequest& request, const GetProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetProjectMemberOutcomeCallable CodeupClient::getProjectMemberCallable(const GetProjectMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectMemberOutcome()>>(
			[this, request]()
			{
			return this->getProjectMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetRepositoryCommitOutcome CodeupClient::getRepositoryCommit(const GetRepositoryCommitRequest &request) const
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

void CodeupClient::getRepositoryCommitAsync(const GetRepositoryCommitRequest& request, const GetRepositoryCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepositoryCommit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetRepositoryCommitOutcomeCallable CodeupClient::getRepositoryCommitCallable(const GetRepositoryCommitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryCommitOutcome()>>(
			[this, request]()
			{
			return this->getRepositoryCommit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetRepositoryInfoOutcome CodeupClient::getRepositoryInfo(const GetRepositoryInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRepositoryInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRepositoryInfoOutcome(GetRepositoryInfoResult(outcome.result()));
	else
		return GetRepositoryInfoOutcome(outcome.error());
}

void CodeupClient::getRepositoryInfoAsync(const GetRepositoryInfoRequest& request, const GetRepositoryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepositoryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetRepositoryInfoOutcomeCallable CodeupClient::getRepositoryInfoCallable(const GetRepositoryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryInfoOutcome()>>(
			[this, request]()
			{
			return this->getRepositoryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetRepositoryTagOutcome CodeupClient::getRepositoryTag(const GetRepositoryTagRequest &request) const
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

void CodeupClient::getRepositoryTagAsync(const GetRepositoryTagRequest& request, const GetRepositoryTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepositoryTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetRepositoryTagOutcomeCallable CodeupClient::getRepositoryTagCallable(const GetRepositoryTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryTagOutcome()>>(
			[this, request]()
			{
			return this->getRepositoryTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetRepositoryTagV2Outcome CodeupClient::getRepositoryTagV2(const GetRepositoryTagV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRepositoryTagV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRepositoryTagV2Outcome(GetRepositoryTagV2Result(outcome.result()));
	else
		return GetRepositoryTagV2Outcome(outcome.error());
}

void CodeupClient::getRepositoryTagV2Async(const GetRepositoryTagV2Request& request, const GetRepositoryTagV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepositoryTagV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetRepositoryTagV2OutcomeCallable CodeupClient::getRepositoryTagV2Callable(const GetRepositoryTagV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepositoryTagV2Outcome()>>(
			[this, request]()
			{
			return this->getRepositoryTagV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::GetUserInfoOutcome CodeupClient::getUserInfo(const GetUserInfoRequest &request) const
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

void CodeupClient::getUserInfoAsync(const GetUserInfoRequest& request, const GetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::GetUserInfoOutcomeCallable CodeupClient::getUserInfoCallable(const GetUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListGroupMemberOutcome CodeupClient::listGroupMember(const ListGroupMemberRequest &request) const
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

void CodeupClient::listGroupMemberAsync(const ListGroupMemberRequest& request, const ListGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListGroupMemberOutcomeCallable CodeupClient::listGroupMemberCallable(const ListGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->listGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListGroupRepositoriesOutcome CodeupClient::listGroupRepositories(const ListGroupRepositoriesRequest &request) const
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

void CodeupClient::listGroupRepositoriesAsync(const ListGroupRepositoriesRequest& request, const ListGroupRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroupRepositories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListGroupRepositoriesOutcomeCallable CodeupClient::listGroupRepositoriesCallable(const ListGroupRepositoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupRepositoriesOutcome()>>(
			[this, request]()
			{
			return this->listGroupRepositories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListGroupsOutcome CodeupClient::listGroups(const ListGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsOutcome(ListGroupsResult(outcome.result()));
	else
		return ListGroupsOutcome(outcome.error());
}

void CodeupClient::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListGroupsOutcomeCallable CodeupClient::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListMergeRequestCommentsOutcome CodeupClient::listMergeRequestComments(const ListMergeRequestCommentsRequest &request) const
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

void CodeupClient::listMergeRequestCommentsAsync(const ListMergeRequestCommentsRequest& request, const ListMergeRequestCommentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequestComments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListMergeRequestCommentsOutcomeCallable CodeupClient::listMergeRequestCommentsCallable(const ListMergeRequestCommentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestCommentsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequestComments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListMergeRequestsOutcome CodeupClient::listMergeRequests(const ListMergeRequestsRequest &request) const
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

void CodeupClient::listMergeRequestsAsync(const ListMergeRequestsRequest& request, const ListMergeRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMergeRequests(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListMergeRequestsOutcomeCallable CodeupClient::listMergeRequestsCallable(const ListMergeRequestsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMergeRequestsOutcome()>>(
			[this, request]()
			{
			return this->listMergeRequests(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListOrganizationSecurityScoresOutcome CodeupClient::listOrganizationSecurityScores(const ListOrganizationSecurityScoresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationSecurityScoresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationSecurityScoresOutcome(ListOrganizationSecurityScoresResult(outcome.result()));
	else
		return ListOrganizationSecurityScoresOutcome(outcome.error());
}

void CodeupClient::listOrganizationSecurityScoresAsync(const ListOrganizationSecurityScoresRequest& request, const ListOrganizationSecurityScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationSecurityScores(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListOrganizationSecurityScoresOutcomeCallable CodeupClient::listOrganizationSecurityScoresCallable(const ListOrganizationSecurityScoresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationSecurityScoresOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationSecurityScores(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListOrganizationsOutcome CodeupClient::listOrganizations(const ListOrganizationsRequest &request) const
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

void CodeupClient::listOrganizationsAsync(const ListOrganizationsRequest& request, const ListOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListOrganizationsOutcomeCallable CodeupClient::listOrganizationsCallable(const ListOrganizationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationsOutcome()>>(
			[this, request]()
			{
			return this->listOrganizations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoriesOutcome CodeupClient::listRepositories(const ListRepositoriesRequest &request) const
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

void CodeupClient::listRepositoriesAsync(const ListRepositoriesRequest& request, const ListRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoriesOutcomeCallable CodeupClient::listRepositoriesCallable(const ListRepositoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoriesOutcome()>>(
			[this, request]()
			{
			return this->listRepositories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryBranchesOutcome CodeupClient::listRepositoryBranches(const ListRepositoryBranchesRequest &request) const
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

void CodeupClient::listRepositoryBranchesAsync(const ListRepositoryBranchesRequest& request, const ListRepositoryBranchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryBranches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryBranchesOutcomeCallable CodeupClient::listRepositoryBranchesCallable(const ListRepositoryBranchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryBranchesOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryBranches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryCommitDiffOutcome CodeupClient::listRepositoryCommitDiff(const ListRepositoryCommitDiffRequest &request) const
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

void CodeupClient::listRepositoryCommitDiffAsync(const ListRepositoryCommitDiffRequest& request, const ListRepositoryCommitDiffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryCommitDiff(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryCommitDiffOutcomeCallable CodeupClient::listRepositoryCommitDiffCallable(const ListRepositoryCommitDiffRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryCommitDiffOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryCommitDiff(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryCommitsOutcome CodeupClient::listRepositoryCommits(const ListRepositoryCommitsRequest &request) const
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

void CodeupClient::listRepositoryCommitsAsync(const ListRepositoryCommitsRequest& request, const ListRepositoryCommitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryCommits(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryCommitsOutcomeCallable CodeupClient::listRepositoryCommitsCallable(const ListRepositoryCommitsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryCommitsOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryCommits(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryMemberOutcome CodeupClient::listRepositoryMember(const ListRepositoryMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRepositoryMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRepositoryMemberOutcome(ListRepositoryMemberResult(outcome.result()));
	else
		return ListRepositoryMemberOutcome(outcome.error());
}

void CodeupClient::listRepositoryMemberAsync(const ListRepositoryMemberRequest& request, const ListRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryMemberOutcomeCallable CodeupClient::listRepositoryMemberCallable(const ListRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryMemberWithInheritedOutcome CodeupClient::listRepositoryMemberWithInherited(const ListRepositoryMemberWithInheritedRequest &request) const
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

void CodeupClient::listRepositoryMemberWithInheritedAsync(const ListRepositoryMemberWithInheritedRequest& request, const ListRepositoryMemberWithInheritedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryMemberWithInherited(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryMemberWithInheritedOutcomeCallable CodeupClient::listRepositoryMemberWithInheritedCallable(const ListRepositoryMemberWithInheritedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryMemberWithInheritedOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryMemberWithInherited(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryTagsOutcome CodeupClient::listRepositoryTags(const ListRepositoryTagsRequest &request) const
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

void CodeupClient::listRepositoryTagsAsync(const ListRepositoryTagsRequest& request, const ListRepositoryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryTagsOutcomeCallable CodeupClient::listRepositoryTagsCallable(const ListRepositoryTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryTagsOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryTreeOutcome CodeupClient::listRepositoryTree(const ListRepositoryTreeRequest &request) const
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

void CodeupClient::listRepositoryTreeAsync(const ListRepositoryTreeRequest& request, const ListRepositoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryTree(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryTreeOutcomeCallable CodeupClient::listRepositoryTreeCallable(const ListRepositoryTreeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryTreeOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryTree(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::ListRepositoryWebhookOutcome CodeupClient::listRepositoryWebhook(const ListRepositoryWebhookRequest &request) const
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

void CodeupClient::listRepositoryWebhookAsync(const ListRepositoryWebhookRequest& request, const ListRepositoryWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRepositoryWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::ListRepositoryWebhookOutcomeCallable CodeupClient::listRepositoryWebhookCallable(const ListRepositoryWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRepositoryWebhookOutcome()>>(
			[this, request]()
			{
			return this->listRepositoryWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::MergeMergeRequestOutcome CodeupClient::mergeMergeRequest(const MergeMergeRequestRequest &request) const
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

void CodeupClient::mergeMergeRequestAsync(const MergeMergeRequestRequest& request, const MergeMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mergeMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::MergeMergeRequestOutcomeCallable CodeupClient::mergeMergeRequestCallable(const MergeMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MergeMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->mergeMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateFileOutcome CodeupClient::updateFile(const UpdateFileRequest &request) const
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

void CodeupClient::updateFileAsync(const UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateFileOutcomeCallable CodeupClient::updateFileCallable(const UpdateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFileOutcome()>>(
			[this, request]()
			{
			return this->updateFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateGroupMemberOutcome CodeupClient::updateGroupMember(const UpdateGroupMemberRequest &request) const
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

void CodeupClient::updateGroupMemberAsync(const UpdateGroupMemberRequest& request, const UpdateGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateGroupMemberOutcomeCallable CodeupClient::updateGroupMemberCallable(const UpdateGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->updateGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateMergeRequestOutcome CodeupClient::updateMergeRequest(const UpdateMergeRequestRequest &request) const
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

void CodeupClient::updateMergeRequestAsync(const UpdateMergeRequestRequest& request, const UpdateMergeRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMergeRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateMergeRequestOutcomeCallable CodeupClient::updateMergeRequestCallable(const UpdateMergeRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMergeRequestOutcome()>>(
			[this, request]()
			{
			return this->updateMergeRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateMergeRequestCommentOutcome CodeupClient::updateMergeRequestComment(const UpdateMergeRequestCommentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMergeRequestCommentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMergeRequestCommentOutcome(UpdateMergeRequestCommentResult(outcome.result()));
	else
		return UpdateMergeRequestCommentOutcome(outcome.error());
}

void CodeupClient::updateMergeRequestCommentAsync(const UpdateMergeRequestCommentRequest& request, const UpdateMergeRequestCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMergeRequestComment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateMergeRequestCommentOutcomeCallable CodeupClient::updateMergeRequestCommentCallable(const UpdateMergeRequestCommentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMergeRequestCommentOutcome()>>(
			[this, request]()
			{
			return this->updateMergeRequestComment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateMergeRequestSettingOutcome CodeupClient::updateMergeRequestSetting(const UpdateMergeRequestSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMergeRequestSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMergeRequestSettingOutcome(UpdateMergeRequestSettingResult(outcome.result()));
	else
		return UpdateMergeRequestSettingOutcome(outcome.error());
}

void CodeupClient::updateMergeRequestSettingAsync(const UpdateMergeRequestSettingRequest& request, const UpdateMergeRequestSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMergeRequestSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateMergeRequestSettingOutcomeCallable CodeupClient::updateMergeRequestSettingCallable(const UpdateMergeRequestSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMergeRequestSettingOutcome()>>(
			[this, request]()
			{
			return this->updateMergeRequestSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateRepositoryOutcome CodeupClient::updateRepository(const UpdateRepositoryRequest &request) const
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

void CodeupClient::updateRepositoryAsync(const UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRepository(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateRepositoryOutcomeCallable CodeupClient::updateRepositoryCallable(const UpdateRepositoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRepositoryOutcome()>>(
			[this, request]()
			{
			return this->updateRepository(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CodeupClient::UpdateRepositoryMemberOutcome CodeupClient::updateRepositoryMember(const UpdateRepositoryMemberRequest &request) const
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

void CodeupClient::updateRepositoryMemberAsync(const UpdateRepositoryMemberRequest& request, const UpdateRepositoryMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRepositoryMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CodeupClient::UpdateRepositoryMemberOutcomeCallable CodeupClient::updateRepositoryMemberCallable(const UpdateRepositoryMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRepositoryMemberOutcome()>>(
			[this, request]()
			{
			return this->updateRepositoryMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

