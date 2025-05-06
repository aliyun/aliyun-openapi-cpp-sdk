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

#include <alibabacloud/itag/ItagClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

namespace
{
	const std::string SERVICE_NAME = "Itag";
}

ItagClient::ItagClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ItagClient::ItagClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ItagClient::ItagClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ItagClient::~ItagClient()
{}

ItagClient::AbandonItemOutcome ItagClient::abandonItem(const AbandonItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbandonItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbandonItemOutcome(AbandonItemResult(outcome.result()));
	else
		return AbandonItemOutcome(outcome.error());
}

void ItagClient::abandonItemAsync(const AbandonItemRequest& request, const AbandonItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abandonItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AbandonItemOutcomeCallable ItagClient::abandonItemCallable(const AbandonItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbandonItemOutcome()>>(
			[this, request]()
			{
			return this->abandonItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AbandonItemByAdminOutcome ItagClient::abandonItemByAdmin(const AbandonItemByAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbandonItemByAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbandonItemByAdminOutcome(AbandonItemByAdminResult(outcome.result()));
	else
		return AbandonItemByAdminOutcome(outcome.error());
}

void ItagClient::abandonItemByAdminAsync(const AbandonItemByAdminRequest& request, const AbandonItemByAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abandonItemByAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AbandonItemByAdminOutcomeCallable ItagClient::abandonItemByAdminCallable(const AbandonItemByAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbandonItemByAdminOutcome()>>(
			[this, request]()
			{
			return this->abandonItemByAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AcceptSamplingTaskOutcome ItagClient::acceptSamplingTask(const AcceptSamplingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptSamplingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptSamplingTaskOutcome(AcceptSamplingTaskResult(outcome.result()));
	else
		return AcceptSamplingTaskOutcome(outcome.error());
}

void ItagClient::acceptSamplingTaskAsync(const AcceptSamplingTaskRequest& request, const AcceptSamplingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptSamplingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AcceptSamplingTaskOutcomeCallable ItagClient::acceptSamplingTaskCallable(const AcceptSamplingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptSamplingTaskOutcome()>>(
			[this, request]()
			{
			return this->acceptSamplingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AddMemberOrGroupTaskOutcome ItagClient::addMemberOrGroupTask(const AddMemberOrGroupTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMemberOrGroupTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMemberOrGroupTaskOutcome(AddMemberOrGroupTaskResult(outcome.result()));
	else
		return AddMemberOrGroupTaskOutcome(outcome.error());
}

void ItagClient::addMemberOrGroupTaskAsync(const AddMemberOrGroupTaskRequest& request, const AddMemberOrGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMemberOrGroupTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AddMemberOrGroupTaskOutcomeCallable ItagClient::addMemberOrGroupTaskCallable(const AddMemberOrGroupTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMemberOrGroupTaskOutcome()>>(
			[this, request]()
			{
			return this->addMemberOrGroupTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AddUserOutcome ItagClient::addUser(const AddUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserOutcome(AddUserResult(outcome.result()));
	else
		return AddUserOutcome(outcome.error());
}

void ItagClient::addUserAsync(const AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AddUserOutcomeCallable ItagClient::addUserCallable(const AddUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserOutcome()>>(
			[this, request]()
			{
			return this->addUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AddUserToGroupOutcome ItagClient::addUserToGroup(const AddUserToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToGroupOutcome(AddUserToGroupResult(outcome.result()));
	else
		return AddUserToGroupOutcome(outcome.error());
}

void ItagClient::addUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AddUserToGroupOutcomeCallable ItagClient::addUserToGroupCallable(const AddUserToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToGroupOutcome()>>(
			[this, request]()
			{
			return this->addUserToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AddUserToTntOutcome ItagClient::addUserToTnt(const AddUserToTntRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToTntOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToTntOutcome(AddUserToTntResult(outcome.result()));
	else
		return AddUserToTntOutcome(outcome.error());
}

void ItagClient::addUserToTntAsync(const AddUserToTntRequest& request, const AddUserToTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToTnt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AddUserToTntOutcomeCallable ItagClient::addUserToTntCallable(const AddUserToTntRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToTntOutcome()>>(
			[this, request]()
			{
			return this->addUserToTnt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AppendDataToDatasetOutcome ItagClient::appendDataToDataset(const AppendDataToDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AppendDataToDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AppendDataToDatasetOutcome(AppendDataToDatasetResult(outcome.result()));
	else
		return AppendDataToDatasetOutcome(outcome.error());
}

void ItagClient::appendDataToDatasetAsync(const AppendDataToDatasetRequest& request, const AppendDataToDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, appendDataToDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AppendDataToDatasetOutcomeCallable ItagClient::appendDataToDatasetCallable(const AppendDataToDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AppendDataToDatasetOutcome()>>(
			[this, request]()
			{
			return this->appendDataToDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::AsyncDownloadMarkResultOutcome ItagClient::asyncDownloadMarkResult(const AsyncDownloadMarkResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsyncDownloadMarkResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsyncDownloadMarkResultOutcome(AsyncDownloadMarkResultResult(outcome.result()));
	else
		return AsyncDownloadMarkResultOutcome(outcome.error());
}

void ItagClient::asyncDownloadMarkResultAsync(const AsyncDownloadMarkResultRequest& request, const AsyncDownloadMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asyncDownloadMarkResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::AsyncDownloadMarkResultOutcomeCallable ItagClient::asyncDownloadMarkResultCallable(const AsyncDownloadMarkResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsyncDownloadMarkResultOutcome()>>(
			[this, request]()
			{
			return this->asyncDownloadMarkResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::BatchRejectTaskOutcome ItagClient::batchRejectTask(const BatchRejectTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchRejectTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchRejectTaskOutcome(BatchRejectTaskResult(outcome.result()));
	else
		return BatchRejectTaskOutcome(outcome.error());
}

void ItagClient::batchRejectTaskAsync(const BatchRejectTaskRequest& request, const BatchRejectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchRejectTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::BatchRejectTaskOutcomeCallable ItagClient::batchRejectTaskCallable(const BatchRejectTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchRejectTaskOutcome()>>(
			[this, request]()
			{
			return this->batchRejectTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CanCommitOutcome ItagClient::canCommit(const CanCommitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CanCommitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CanCommitOutcome(CanCommitResult(outcome.result()));
	else
		return CanCommitOutcome(outcome.error());
}

void ItagClient::canCommitAsync(const CanCommitRequest& request, const CanCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, canCommit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CanCommitOutcomeCallable ItagClient::canCommitCallable(const CanCommitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CanCommitOutcome()>>(
			[this, request]()
			{
			return this->canCommit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CheckModelOutcome ItagClient::checkModel(const CheckModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckModelOutcome(CheckModelResult(outcome.result()));
	else
		return CheckModelOutcome(outcome.error());
}

void ItagClient::checkModelAsync(const CheckModelRequest& request, const CheckModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CheckModelOutcomeCallable ItagClient::checkModelCallable(const CheckModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckModelOutcome()>>(
			[this, request]()
			{
			return this->checkModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CommitSubTaskOutcome ItagClient::commitSubTask(const CommitSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitSubTaskOutcome(CommitSubTaskResult(outcome.result()));
	else
		return CommitSubTaskOutcome(outcome.error());
}

void ItagClient::commitSubTaskAsync(const CommitSubTaskRequest& request, const CommitSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CommitSubTaskOutcomeCallable ItagClient::commitSubTaskCallable(const CommitSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitSubTaskOutcome()>>(
			[this, request]()
			{
			return this->commitSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CreateDatasetOutcome ItagClient::createDataset(const CreateDatasetRequest &request) const
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

void ItagClient::createDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CreateDatasetOutcomeCallable ItagClient::createDatasetCallable(const CreateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetOutcome()>>(
			[this, request]()
			{
			return this->createDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CreateModelOutcome ItagClient::createModel(const CreateModelRequest &request) const
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

void ItagClient::createModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CreateModelOutcomeCallable ItagClient::createModelCallable(const CreateModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelOutcome()>>(
			[this, request]()
			{
			return this->createModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CreateOptionTemplateOutcome ItagClient::createOptionTemplate(const CreateOptionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOptionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOptionTemplateOutcome(CreateOptionTemplateResult(outcome.result()));
	else
		return CreateOptionTemplateOutcome(outcome.error());
}

void ItagClient::createOptionTemplateAsync(const CreateOptionTemplateRequest& request, const CreateOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOptionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CreateOptionTemplateOutcomeCallable ItagClient::createOptionTemplateCallable(const CreateOptionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOptionTemplateOutcome()>>(
			[this, request]()
			{
			return this->createOptionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CreateOrUpdateTntConfigOutcome ItagClient::createOrUpdateTntConfig(const CreateOrUpdateTntConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateTntConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateTntConfigOutcome(CreateOrUpdateTntConfigResult(outcome.result()));
	else
		return CreateOrUpdateTntConfigOutcome(outcome.error());
}

void ItagClient::createOrUpdateTntConfigAsync(const CreateOrUpdateTntConfigRequest& request, const CreateOrUpdateTntConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateTntConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CreateOrUpdateTntConfigOutcomeCallable ItagClient::createOrUpdateTntConfigCallable(const CreateOrUpdateTntConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateTntConfigOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateTntConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CreateTaskOutcome ItagClient::createTask(const CreateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskOutcome(CreateTaskResult(outcome.result()));
	else
		return CreateTaskOutcome(outcome.error());
}

void ItagClient::createTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CreateTaskOutcomeCallable ItagClient::createTaskCallable(const CreateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
			[this, request]()
			{
			return this->createTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::CreateUserGroupOutcome ItagClient::createUserGroup(const CreateUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserGroupOutcome(CreateUserGroupResult(outcome.result()));
	else
		return CreateUserGroupOutcome(outcome.error());
}

void ItagClient::createUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::CreateUserGroupOutcomeCallable ItagClient::createUserGroupCallable(const CreateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->createUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DeleteFeedbackOutcome ItagClient::deleteFeedback(const DeleteFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFeedbackOutcome(DeleteFeedbackResult(outcome.result()));
	else
		return DeleteFeedbackOutcome(outcome.error());
}

void ItagClient::deleteFeedbackAsync(const DeleteFeedbackRequest& request, const DeleteFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DeleteFeedbackOutcomeCallable ItagClient::deleteFeedbackCallable(const DeleteFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFeedbackOutcome()>>(
			[this, request]()
			{
			return this->deleteFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DeleteModelOutcome ItagClient::deleteModel(const DeleteModelRequest &request) const
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

void ItagClient::deleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DeleteModelOutcomeCallable ItagClient::deleteModelCallable(const DeleteModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteModelOutcome()>>(
			[this, request]()
			{
			return this->deleteModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DeleteOptionTemplateOutcome ItagClient::deleteOptionTemplate(const DeleteOptionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOptionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOptionTemplateOutcome(DeleteOptionTemplateResult(outcome.result()));
	else
		return DeleteOptionTemplateOutcome(outcome.error());
}

void ItagClient::deleteOptionTemplateAsync(const DeleteOptionTemplateRequest& request, const DeleteOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOptionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DeleteOptionTemplateOutcomeCallable ItagClient::deleteOptionTemplateCallable(const DeleteOptionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOptionTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteOptionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DeleteTaskOutcome ItagClient::deleteTask(const DeleteTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTaskOutcome(DeleteTaskResult(outcome.result()));
	else
		return DeleteTaskOutcome(outcome.error());
}

void ItagClient::deleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DeleteTaskOutcomeCallable ItagClient::deleteTaskCallable(const DeleteTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DeleteUserGroupOutcome ItagClient::deleteUserGroup(const DeleteUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserGroupOutcome(DeleteUserGroupResult(outcome.result()));
	else
		return DeleteUserGroupOutcome(outcome.error());
}

void ItagClient::deleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DeleteUserGroupOutcomeCallable ItagClient::deleteUserGroupCallable(const DeleteUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DiscardSubTaskOutcome ItagClient::discardSubTask(const DiscardSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DiscardSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DiscardSubTaskOutcome(DiscardSubTaskResult(outcome.result()));
	else
		return DiscardSubTaskOutcome(outcome.error());
}

void ItagClient::discardSubTaskAsync(const DiscardSubTaskRequest& request, const DiscardSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, discardSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DiscardSubTaskOutcomeCallable ItagClient::discardSubTaskCallable(const DiscardSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DiscardSubTaskOutcome()>>(
			[this, request]()
			{
			return this->discardSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::DownloadIntPersonSummaryOutcome ItagClient::downloadIntPersonSummary(const DownloadIntPersonSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadIntPersonSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadIntPersonSummaryOutcome(DownloadIntPersonSummaryResult(outcome.result()));
	else
		return DownloadIntPersonSummaryOutcome(outcome.error());
}

void ItagClient::downloadIntPersonSummaryAsync(const DownloadIntPersonSummaryRequest& request, const DownloadIntPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadIntPersonSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::DownloadIntPersonSummaryOutcomeCallable ItagClient::downloadIntPersonSummaryCallable(const DownloadIntPersonSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadIntPersonSummaryOutcome()>>(
			[this, request]()
			{
			return this->downloadIntPersonSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ExportOptionTemplateOutcome ItagClient::exportOptionTemplate(const ExportOptionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportOptionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportOptionTemplateOutcome(ExportOptionTemplateResult(outcome.result()));
	else
		return ExportOptionTemplateOutcome(outcome.error());
}

void ItagClient::exportOptionTemplateAsync(const ExportOptionTemplateRequest& request, const ExportOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportOptionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ExportOptionTemplateOutcomeCallable ItagClient::exportOptionTemplateCallable(const ExportOptionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportOptionTemplateOutcome()>>(
			[this, request]()
			{
			return this->exportOptionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ExtendUserAuthInTaskOutcome ItagClient::extendUserAuthInTask(const ExtendUserAuthInTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExtendUserAuthInTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExtendUserAuthInTaskOutcome(ExtendUserAuthInTaskResult(outcome.result()));
	else
		return ExtendUserAuthInTaskOutcome(outcome.error());
}

void ItagClient::extendUserAuthInTaskAsync(const ExtendUserAuthInTaskRequest& request, const ExtendUserAuthInTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, extendUserAuthInTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ExtendUserAuthInTaskOutcomeCallable ItagClient::extendUserAuthInTaskCallable(const ExtendUserAuthInTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExtendUserAuthInTaskOutcome()>>(
			[this, request]()
			{
			return this->extendUserAuthInTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::FetchVideoMarkResultOutcome ItagClient::fetchVideoMarkResult(const FetchVideoMarkResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FetchVideoMarkResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FetchVideoMarkResultOutcome(FetchVideoMarkResultResult(outcome.result()));
	else
		return FetchVideoMarkResultOutcome(outcome.error());
}

void ItagClient::fetchVideoMarkResultAsync(const FetchVideoMarkResultRequest& request, const FetchVideoMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fetchVideoMarkResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::FetchVideoMarkResultOutcomeCallable ItagClient::fetchVideoMarkResultCallable(const FetchVideoMarkResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FetchVideoMarkResultOutcome()>>(
			[this, request]()
			{
			return this->fetchVideoMarkResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::FlowInstanceCallbackOutcome ItagClient::flowInstanceCallback(const FlowInstanceCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FlowInstanceCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FlowInstanceCallbackOutcome(FlowInstanceCallbackResult(outcome.result()));
	else
		return FlowInstanceCallbackOutcome(outcome.error());
}

void ItagClient::flowInstanceCallbackAsync(const FlowInstanceCallbackRequest& request, const FlowInstanceCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, flowInstanceCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::FlowInstanceCallbackOutcomeCallable ItagClient::flowInstanceCallbackCallable(const FlowInstanceCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FlowInstanceCallbackOutcome()>>(
			[this, request]()
			{
			return this->flowInstanceCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetAssignedCheckTaskSummaryOutcome ItagClient::getAssignedCheckTaskSummary(const GetAssignedCheckTaskSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAssignedCheckTaskSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAssignedCheckTaskSummaryOutcome(GetAssignedCheckTaskSummaryResult(outcome.result()));
	else
		return GetAssignedCheckTaskSummaryOutcome(outcome.error());
}

void ItagClient::getAssignedCheckTaskSummaryAsync(const GetAssignedCheckTaskSummaryRequest& request, const GetAssignedCheckTaskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAssignedCheckTaskSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetAssignedCheckTaskSummaryOutcomeCallable ItagClient::getAssignedCheckTaskSummaryCallable(const GetAssignedCheckTaskSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAssignedCheckTaskSummaryOutcome()>>(
			[this, request]()
			{
			return this->getAssignedCheckTaskSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetBizPersonSummaryOutcome ItagClient::getBizPersonSummary(const GetBizPersonSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBizPersonSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBizPersonSummaryOutcome(GetBizPersonSummaryResult(outcome.result()));
	else
		return GetBizPersonSummaryOutcome(outcome.error());
}

void ItagClient::getBizPersonSummaryAsync(const GetBizPersonSummaryRequest& request, const GetBizPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBizPersonSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetBizPersonSummaryOutcomeCallable ItagClient::getBizPersonSummaryCallable(const GetBizPersonSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBizPersonSummaryOutcome()>>(
			[this, request]()
			{
			return this->getBizPersonSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetBizSummaryOutcome ItagClient::getBizSummary(const GetBizSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBizSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBizSummaryOutcome(GetBizSummaryResult(outcome.result()));
	else
		return GetBizSummaryOutcome(outcome.error());
}

void ItagClient::getBizSummaryAsync(const GetBizSummaryRequest& request, const GetBizSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBizSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetBizSummaryOutcomeCallable ItagClient::getBizSummaryCallable(const GetBizSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBizSummaryOutcome()>>(
			[this, request]()
			{
			return this->getBizSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetCheckUserDetailOutcome ItagClient::getCheckUserDetail(const GetCheckUserDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckUserDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckUserDetailOutcome(GetCheckUserDetailResult(outcome.result()));
	else
		return GetCheckUserDetailOutcome(outcome.error());
}

void ItagClient::getCheckUserDetailAsync(const GetCheckUserDetailRequest& request, const GetCheckUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckUserDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetCheckUserDetailOutcomeCallable ItagClient::getCheckUserDetailCallable(const GetCheckUserDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckUserDetailOutcome()>>(
			[this, request]()
			{
			return this->getCheckUserDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetCheckUserEfficiencyOutcome ItagClient::getCheckUserEfficiency(const GetCheckUserEfficiencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckUserEfficiencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckUserEfficiencyOutcome(GetCheckUserEfficiencyResult(outcome.result()));
	else
		return GetCheckUserEfficiencyOutcome(outcome.error());
}

void ItagClient::getCheckUserEfficiencyAsync(const GetCheckUserEfficiencyRequest& request, const GetCheckUserEfficiencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckUserEfficiency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetCheckUserEfficiencyOutcomeCallable ItagClient::getCheckUserEfficiencyCallable(const GetCheckUserEfficiencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckUserEfficiencyOutcome()>>(
			[this, request]()
			{
			return this->getCheckUserEfficiency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetCheckUserSummaryOutcome ItagClient::getCheckUserSummary(const GetCheckUserSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckUserSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckUserSummaryOutcome(GetCheckUserSummaryResult(outcome.result()));
	else
		return GetCheckUserSummaryOutcome(outcome.error());
}

void ItagClient::getCheckUserSummaryAsync(const GetCheckUserSummaryRequest& request, const GetCheckUserSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckUserSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetCheckUserSummaryOutcomeCallable ItagClient::getCheckUserSummaryCallable(const GetCheckUserSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckUserSummaryOutcome()>>(
			[this, request]()
			{
			return this->getCheckUserSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetCommitSummaryOutcome ItagClient::getCommitSummary(const GetCommitSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCommitSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCommitSummaryOutcome(GetCommitSummaryResult(outcome.result()));
	else
		return GetCommitSummaryOutcome(outcome.error());
}

void ItagClient::getCommitSummaryAsync(const GetCommitSummaryRequest& request, const GetCommitSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCommitSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetCommitSummaryOutcomeCallable ItagClient::getCommitSummaryCallable(const GetCommitSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCommitSummaryOutcome()>>(
			[this, request]()
			{
			return this->getCommitSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetDatasetProxyOutcome ItagClient::getDatasetProxy(const GetDatasetProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatasetProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatasetProxyOutcome(GetDatasetProxyResult(outcome.result()));
	else
		return GetDatasetProxyOutcome(outcome.error());
}

void ItagClient::getDatasetProxyAsync(const GetDatasetProxyRequest& request, const GetDatasetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatasetProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetDatasetProxyOutcomeCallable ItagClient::getDatasetProxyCallable(const GetDatasetProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatasetProxyOutcome()>>(
			[this, request]()
			{
			return this->getDatasetProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetFlowJobOutcome ItagClient::getFlowJob(const GetFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFlowJobOutcome(GetFlowJobResult(outcome.result()));
	else
		return GetFlowJobOutcome(outcome.error());
}

void ItagClient::getFlowJobAsync(const GetFlowJobRequest& request, const GetFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetFlowJobOutcomeCallable ItagClient::getFlowJobCallable(const GetFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFlowJobOutcome()>>(
			[this, request]()
			{
			return this->getFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetGroupHandlingSummaryOutcome ItagClient::getGroupHandlingSummary(const GetGroupHandlingSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupHandlingSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupHandlingSummaryOutcome(GetGroupHandlingSummaryResult(outcome.result()));
	else
		return GetGroupHandlingSummaryOutcome(outcome.error());
}

void ItagClient::getGroupHandlingSummaryAsync(const GetGroupHandlingSummaryRequest& request, const GetGroupHandlingSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupHandlingSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetGroupHandlingSummaryOutcomeCallable ItagClient::getGroupHandlingSummaryCallable(const GetGroupHandlingSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupHandlingSummaryOutcome()>>(
			[this, request]()
			{
			return this->getGroupHandlingSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetGroupTaskDetailOutcome ItagClient::getGroupTaskDetail(const GetGroupTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupTaskDetailOutcome(GetGroupTaskDetailResult(outcome.result()));
	else
		return GetGroupTaskDetailOutcome(outcome.error());
}

void ItagClient::getGroupTaskDetailAsync(const GetGroupTaskDetailRequest& request, const GetGroupTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetGroupTaskDetailOutcomeCallable ItagClient::getGroupTaskDetailCallable(const GetGroupTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->getGroupTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetGroupTaskPersonDetailOutcome ItagClient::getGroupTaskPersonDetail(const GetGroupTaskPersonDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupTaskPersonDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupTaskPersonDetailOutcome(GetGroupTaskPersonDetailResult(outcome.result()));
	else
		return GetGroupTaskPersonDetailOutcome(outcome.error());
}

void ItagClient::getGroupTaskPersonDetailAsync(const GetGroupTaskPersonDetailRequest& request, const GetGroupTaskPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroupTaskPersonDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetGroupTaskPersonDetailOutcomeCallable ItagClient::getGroupTaskPersonDetailCallable(const GetGroupTaskPersonDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupTaskPersonDetailOutcome()>>(
			[this, request]()
			{
			return this->getGroupTaskPersonDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetHistoryMarkResultOutcome ItagClient::getHistoryMarkResult(const GetHistoryMarkResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHistoryMarkResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHistoryMarkResultOutcome(GetHistoryMarkResultResult(outcome.result()));
	else
		return GetHistoryMarkResultOutcome(outcome.error());
}

void ItagClient::getHistoryMarkResultAsync(const GetHistoryMarkResultRequest& request, const GetHistoryMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHistoryMarkResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetHistoryMarkResultOutcomeCallable ItagClient::getHistoryMarkResultCallable(const GetHistoryMarkResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHistoryMarkResultOutcome()>>(
			[this, request]()
			{
			return this->getHistoryMarkResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetIntWholeSummaryOutcome ItagClient::getIntWholeSummary(const GetIntWholeSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIntWholeSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIntWholeSummaryOutcome(GetIntWholeSummaryResult(outcome.result()));
	else
		return GetIntWholeSummaryOutcome(outcome.error());
}

void ItagClient::getIntWholeSummaryAsync(const GetIntWholeSummaryRequest& request, const GetIntWholeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIntWholeSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetIntWholeSummaryOutcomeCallable ItagClient::getIntWholeSummaryCallable(const GetIntWholeSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIntWholeSummaryOutcome()>>(
			[this, request]()
			{
			return this->getIntWholeSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkPersonDetailOutcome ItagClient::getMarkPersonDetail(const GetMarkPersonDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkPersonDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkPersonDetailOutcome(GetMarkPersonDetailResult(outcome.result()));
	else
		return GetMarkPersonDetailOutcome(outcome.error());
}

void ItagClient::getMarkPersonDetailAsync(const GetMarkPersonDetailRequest& request, const GetMarkPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkPersonDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkPersonDetailOutcomeCallable ItagClient::getMarkPersonDetailCallable(const GetMarkPersonDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkPersonDetailOutcome()>>(
			[this, request]()
			{
			return this->getMarkPersonDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkPersonHandlingSummaryOutcome ItagClient::getMarkPersonHandlingSummary(const GetMarkPersonHandlingSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkPersonHandlingSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkPersonHandlingSummaryOutcome(GetMarkPersonHandlingSummaryResult(outcome.result()));
	else
		return GetMarkPersonHandlingSummaryOutcome(outcome.error());
}

void ItagClient::getMarkPersonHandlingSummaryAsync(const GetMarkPersonHandlingSummaryRequest& request, const GetMarkPersonHandlingSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkPersonHandlingSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkPersonHandlingSummaryOutcomeCallable ItagClient::getMarkPersonHandlingSummaryCallable(const GetMarkPersonHandlingSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkPersonHandlingSummaryOutcome()>>(
			[this, request]()
			{
			return this->getMarkPersonHandlingSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkQuantityOutcome ItagClient::getMarkQuantity(const GetMarkQuantityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkQuantityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkQuantityOutcome(GetMarkQuantityResult(outcome.result()));
	else
		return GetMarkQuantityOutcome(outcome.error());
}

void ItagClient::getMarkQuantityAsync(const GetMarkQuantityRequest& request, const GetMarkQuantityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkQuantity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkQuantityOutcomeCallable ItagClient::getMarkQuantityCallable(const GetMarkQuantityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkQuantityOutcome()>>(
			[this, request]()
			{
			return this->getMarkQuantity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkResultOutcome ItagClient::getMarkResult(const GetMarkResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkResultOutcome(GetMarkResultResult(outcome.result()));
	else
		return GetMarkResultOutcome(outcome.error());
}

void ItagClient::getMarkResultAsync(const GetMarkResultRequest& request, const GetMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkResultOutcomeCallable ItagClient::getMarkResultCallable(const GetMarkResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkResultOutcome()>>(
			[this, request]()
			{
			return this->getMarkResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkUserDetailOutcome ItagClient::getMarkUserDetail(const GetMarkUserDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkUserDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkUserDetailOutcome(GetMarkUserDetailResult(outcome.result()));
	else
		return GetMarkUserDetailOutcome(outcome.error());
}

void ItagClient::getMarkUserDetailAsync(const GetMarkUserDetailRequest& request, const GetMarkUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkUserDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkUserDetailOutcomeCallable ItagClient::getMarkUserDetailCallable(const GetMarkUserDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkUserDetailOutcome()>>(
			[this, request]()
			{
			return this->getMarkUserDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkUserEfficiencyOutcome ItagClient::getMarkUserEfficiency(const GetMarkUserEfficiencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkUserEfficiencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkUserEfficiencyOutcome(GetMarkUserEfficiencyResult(outcome.result()));
	else
		return GetMarkUserEfficiencyOutcome(outcome.error());
}

void ItagClient::getMarkUserEfficiencyAsync(const GetMarkUserEfficiencyRequest& request, const GetMarkUserEfficiencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkUserEfficiency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkUserEfficiencyOutcomeCallable ItagClient::getMarkUserEfficiencyCallable(const GetMarkUserEfficiencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkUserEfficiencyOutcome()>>(
			[this, request]()
			{
			return this->getMarkUserEfficiency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetMarkUserSummaryOutcome ItagClient::getMarkUserSummary(const GetMarkUserSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMarkUserSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMarkUserSummaryOutcome(GetMarkUserSummaryResult(outcome.result()));
	else
		return GetMarkUserSummaryOutcome(outcome.error());
}

void ItagClient::getMarkUserSummaryAsync(const GetMarkUserSummaryRequest& request, const GetMarkUserSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMarkUserSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetMarkUserSummaryOutcomeCallable ItagClient::getMarkUserSummaryCallable(const GetMarkUserSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMarkUserSummaryOutcome()>>(
			[this, request]()
			{
			return this->getMarkUserSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetModelByIdOutcome ItagClient::getModelById(const GetModelByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModelByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModelByIdOutcome(GetModelByIdResult(outcome.result()));
	else
		return GetModelByIdOutcome(outcome.error());
}

void ItagClient::getModelByIdAsync(const GetModelByIdRequest& request, const GetModelByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModelById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetModelByIdOutcomeCallable ItagClient::getModelByIdCallable(const GetModelByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModelByIdOutcome()>>(
			[this, request]()
			{
			return this->getModelById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetOptionTemplateOutcome ItagClient::getOptionTemplate(const GetOptionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOptionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOptionTemplateOutcome(GetOptionTemplateResult(outcome.result()));
	else
		return GetOptionTemplateOutcome(outcome.error());
}

void ItagClient::getOptionTemplateAsync(const GetOptionTemplateRequest& request, const GetOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOptionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetOptionTemplateOutcomeCallable ItagClient::getOptionTemplateCallable(const GetOptionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOptionTemplateOutcome()>>(
			[this, request]()
			{
			return this->getOptionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetOrCreateTntInstByBizNoOutcome ItagClient::getOrCreateTntInstByBizNo(const GetOrCreateTntInstByBizNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOrCreateTntInstByBizNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOrCreateTntInstByBizNoOutcome(GetOrCreateTntInstByBizNoResult(outcome.result()));
	else
		return GetOrCreateTntInstByBizNoOutcome(outcome.error());
}

void ItagClient::getOrCreateTntInstByBizNoAsync(const GetOrCreateTntInstByBizNoRequest& request, const GetOrCreateTntInstByBizNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOrCreateTntInstByBizNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetOrCreateTntInstByBizNoOutcomeCallable ItagClient::getOrCreateTntInstByBizNoCallable(const GetOrCreateTntInstByBizNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOrCreateTntInstByBizNoOutcome()>>(
			[this, request]()
			{
			return this->getOrCreateTntInstByBizNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetPersonSummaryOutcome ItagClient::getPersonSummary(const GetPersonSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonSummaryOutcome(GetPersonSummaryResult(outcome.result()));
	else
		return GetPersonSummaryOutcome(outcome.error());
}

void ItagClient::getPersonSummaryAsync(const GetPersonSummaryRequest& request, const GetPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPersonSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetPersonSummaryOutcomeCallable ItagClient::getPersonSummaryCallable(const GetPersonSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonSummaryOutcome()>>(
			[this, request]()
			{
			return this->getPersonSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetSamplingSummaryOutcome ItagClient::getSamplingSummary(const GetSamplingSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSamplingSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSamplingSummaryOutcome(GetSamplingSummaryResult(outcome.result()));
	else
		return GetSamplingSummaryOutcome(outcome.error());
}

void ItagClient::getSamplingSummaryAsync(const GetSamplingSummaryRequest& request, const GetSamplingSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSamplingSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetSamplingSummaryOutcomeCallable ItagClient::getSamplingSummaryCallable(const GetSamplingSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSamplingSummaryOutcome()>>(
			[this, request]()
			{
			return this->getSamplingSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetSubTaskDownloadSystemResultOutcome ItagClient::getSubTaskDownloadSystemResult(const GetSubTaskDownloadSystemResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubTaskDownloadSystemResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubTaskDownloadSystemResultOutcome(GetSubTaskDownloadSystemResultResult(outcome.result()));
	else
		return GetSubTaskDownloadSystemResultOutcome(outcome.error());
}

void ItagClient::getSubTaskDownloadSystemResultAsync(const GetSubTaskDownloadSystemResultRequest& request, const GetSubTaskDownloadSystemResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubTaskDownloadSystemResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetSubTaskDownloadSystemResultOutcomeCallable ItagClient::getSubTaskDownloadSystemResultCallable(const GetSubTaskDownloadSystemResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubTaskDownloadSystemResultOutcome()>>(
			[this, request]()
			{
			return this->getSubTaskDownloadSystemResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetSubTaskDownloadUserResultOutcome ItagClient::getSubTaskDownloadUserResult(const GetSubTaskDownloadUserResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubTaskDownloadUserResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubTaskDownloadUserResultOutcome(GetSubTaskDownloadUserResultResult(outcome.result()));
	else
		return GetSubTaskDownloadUserResultOutcome(outcome.error());
}

void ItagClient::getSubTaskDownloadUserResultAsync(const GetSubTaskDownloadUserResultRequest& request, const GetSubTaskDownloadUserResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubTaskDownloadUserResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetSubTaskDownloadUserResultOutcomeCallable ItagClient::getSubTaskDownloadUserResultCallable(const GetSubTaskDownloadUserResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubTaskDownloadUserResultOutcome()>>(
			[this, request]()
			{
			return this->getSubTaskDownloadUserResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetSubTaskSummaryOutcome ItagClient::getSubTaskSummary(const GetSubTaskSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSubTaskSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSubTaskSummaryOutcome(GetSubTaskSummaryResult(outcome.result()));
	else
		return GetSubTaskSummaryOutcome(outcome.error());
}

void ItagClient::getSubTaskSummaryAsync(const GetSubTaskSummaryRequest& request, const GetSubTaskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSubTaskSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetSubTaskSummaryOutcomeCallable ItagClient::getSubTaskSummaryCallable(const GetSubTaskSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSubTaskSummaryOutcome()>>(
			[this, request]()
			{
			return this->getSubTaskSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTaskOutcome ItagClient::getTask(const GetTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskOutcome(GetTaskResult(outcome.result()));
	else
		return GetTaskOutcome(outcome.error());
}

void ItagClient::getTaskAsync(const GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTaskOutcomeCallable ItagClient::getTaskCallable(const GetTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskOutcome()>>(
			[this, request]()
			{
			return this->getTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTaskPersonSummaryOutcome ItagClient::getTaskPersonSummary(const GetTaskPersonSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskPersonSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskPersonSummaryOutcome(GetTaskPersonSummaryResult(outcome.result()));
	else
		return GetTaskPersonSummaryOutcome(outcome.error());
}

void ItagClient::getTaskPersonSummaryAsync(const GetTaskPersonSummaryRequest& request, const GetTaskPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskPersonSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTaskPersonSummaryOutcomeCallable ItagClient::getTaskPersonSummaryCallable(const GetTaskPersonSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskPersonSummaryOutcome()>>(
			[this, request]()
			{
			return this->getTaskPersonSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTaskProcessInfoOutcome ItagClient::getTaskProcessInfo(const GetTaskProcessInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskProcessInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskProcessInfoOutcome(GetTaskProcessInfoResult(outcome.result()));
	else
		return GetTaskProcessInfoOutcome(outcome.error());
}

void ItagClient::getTaskProcessInfoAsync(const GetTaskProcessInfoRequest& request, const GetTaskProcessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskProcessInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTaskProcessInfoOutcomeCallable ItagClient::getTaskProcessInfoCallable(const GetTaskProcessInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskProcessInfoOutcome()>>(
			[this, request]()
			{
			return this->getTaskProcessInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTaskStatTypesOutcome ItagClient::getTaskStatTypes(const GetTaskStatTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskStatTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskStatTypesOutcome(GetTaskStatTypesResult(outcome.result()));
	else
		return GetTaskStatTypesOutcome(outcome.error());
}

void ItagClient::getTaskStatTypesAsync(const GetTaskStatTypesRequest& request, const GetTaskStatTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskStatTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTaskStatTypesOutcomeCallable ItagClient::getTaskStatTypesCallable(const GetTaskStatTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskStatTypesOutcome()>>(
			[this, request]()
			{
			return this->getTaskStatTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTaskSummaryOutcome ItagClient::getTaskSummary(const GetTaskSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskSummaryOutcome(GetTaskSummaryResult(outcome.result()));
	else
		return GetTaskSummaryOutcome(outcome.error());
}

void ItagClient::getTaskSummaryAsync(const GetTaskSummaryRequest& request, const GetTaskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTaskSummaryOutcomeCallable ItagClient::getTaskSummaryCallable(const GetTaskSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskSummaryOutcome()>>(
			[this, request]()
			{
			return this->getTaskSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTntConfListValueOutcome ItagClient::getTntConfListValue(const GetTntConfListValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTntConfListValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTntConfListValueOutcome(GetTntConfListValueResult(outcome.result()));
	else
		return GetTntConfListValueOutcome(outcome.error());
}

void ItagClient::getTntConfListValueAsync(const GetTntConfListValueRequest& request, const GetTntConfListValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTntConfListValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTntConfListValueOutcomeCallable ItagClient::getTntConfListValueCallable(const GetTntConfListValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTntConfListValueOutcome()>>(
			[this, request]()
			{
			return this->getTntConfListValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetTntUserRoleOutcome ItagClient::getTntUserRole(const GetTntUserRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTntUserRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTntUserRoleOutcome(GetTntUserRoleResult(outcome.result()));
	else
		return GetTntUserRoleOutcome(outcome.error());
}

void ItagClient::getTntUserRoleAsync(const GetTntUserRoleRequest& request, const GetTntUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTntUserRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetTntUserRoleOutcomeCallable ItagClient::getTntUserRoleCallable(const GetTntUserRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTntUserRoleOutcome()>>(
			[this, request]()
			{
			return this->getTntUserRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetUpdateTimeOutcome ItagClient::getUpdateTime(const GetUpdateTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUpdateTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUpdateTimeOutcome(GetUpdateTimeResult(outcome.result()));
	else
		return GetUpdateTimeOutcome(outcome.error());
}

void ItagClient::getUpdateTimeAsync(const GetUpdateTimeRequest& request, const GetUpdateTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUpdateTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetUpdateTimeOutcomeCallable ItagClient::getUpdateTimeCallable(const GetUpdateTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUpdateTimeOutcome()>>(
			[this, request]()
			{
			return this->getUpdateTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetUserOutcome ItagClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void ItagClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetUserOutcomeCallable ItagClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::GetUserMarkItemInfoOutcome ItagClient::getUserMarkItemInfo(const GetUserMarkItemInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserMarkItemInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserMarkItemInfoOutcome(GetUserMarkItemInfoResult(outcome.result()));
	else
		return GetUserMarkItemInfoOutcome(outcome.error());
}

void ItagClient::getUserMarkItemInfoAsync(const GetUserMarkItemInfoRequest& request, const GetUserMarkItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserMarkItemInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::GetUserMarkItemInfoOutcomeCallable ItagClient::getUserMarkItemInfoCallable(const GetUserMarkItemInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserMarkItemInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserMarkItemInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ImportOptionTemplateOutcome ItagClient::importOptionTemplate(const ImportOptionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportOptionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportOptionTemplateOutcome(ImportOptionTemplateResult(outcome.result()));
	else
		return ImportOptionTemplateOutcome(outcome.error());
}

void ItagClient::importOptionTemplateAsync(const ImportOptionTemplateRequest& request, const ImportOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importOptionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ImportOptionTemplateOutcomeCallable ItagClient::importOptionTemplateCallable(const ImportOptionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportOptionTemplateOutcome()>>(
			[this, request]()
			{
			return this->importOptionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::InitSamplingUserSubTaskOutcome ItagClient::initSamplingUserSubTask(const InitSamplingUserSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitSamplingUserSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitSamplingUserSubTaskOutcome(InitSamplingUserSubTaskResult(outcome.result()));
	else
		return InitSamplingUserSubTaskOutcome(outcome.error());
}

void ItagClient::initSamplingUserSubTaskAsync(const InitSamplingUserSubTaskRequest& request, const InitSamplingUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initSamplingUserSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::InitSamplingUserSubTaskOutcomeCallable ItagClient::initSamplingUserSubTaskCallable(const InitSamplingUserSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitSamplingUserSubTaskOutcome()>>(
			[this, request]()
			{
			return this->initSamplingUserSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListAssignedSubUserTaskOutcome ItagClient::listAssignedSubUserTask(const ListAssignedSubUserTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAssignedSubUserTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAssignedSubUserTaskOutcome(ListAssignedSubUserTaskResult(outcome.result()));
	else
		return ListAssignedSubUserTaskOutcome(outcome.error());
}

void ItagClient::listAssignedSubUserTaskAsync(const ListAssignedSubUserTaskRequest& request, const ListAssignedSubUserTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAssignedSubUserTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListAssignedSubUserTaskOutcomeCallable ItagClient::listAssignedSubUserTaskCallable(const ListAssignedSubUserTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAssignedSubUserTaskOutcome()>>(
			[this, request]()
			{
			return this->listAssignedSubUserTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListCheckTaskOutcome ItagClient::listCheckTask(const ListCheckTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckTaskOutcome(ListCheckTaskResult(outcome.result()));
	else
		return ListCheckTaskOutcome(outcome.error());
}

void ItagClient::listCheckTaskAsync(const ListCheckTaskRequest& request, const ListCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListCheckTaskOutcomeCallable ItagClient::listCheckTaskCallable(const ListCheckTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckTaskOutcome()>>(
			[this, request]()
			{
			return this->listCheckTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListDatasetFieldsOutcome ItagClient::listDatasetFields(const ListDatasetFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDatasetFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDatasetFieldsOutcome(ListDatasetFieldsResult(outcome.result()));
	else
		return ListDatasetFieldsOutcome(outcome.error());
}

void ItagClient::listDatasetFieldsAsync(const ListDatasetFieldsRequest& request, const ListDatasetFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDatasetFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListDatasetFieldsOutcomeCallable ItagClient::listDatasetFieldsCallable(const ListDatasetFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDatasetFieldsOutcome()>>(
			[this, request]()
			{
			return this->listDatasetFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListFinishedSubUserTaskOutcome ItagClient::listFinishedSubUserTask(const ListFinishedSubUserTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFinishedSubUserTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFinishedSubUserTaskOutcome(ListFinishedSubUserTaskResult(outcome.result()));
	else
		return ListFinishedSubUserTaskOutcome(outcome.error());
}

void ItagClient::listFinishedSubUserTaskAsync(const ListFinishedSubUserTaskRequest& request, const ListFinishedSubUserTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFinishedSubUserTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListFinishedSubUserTaskOutcomeCallable ItagClient::listFinishedSubUserTaskCallable(const ListFinishedSubUserTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFinishedSubUserTaskOutcome()>>(
			[this, request]()
			{
			return this->listFinishedSubUserTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListMarkableTaskOutcome ItagClient::listMarkableTask(const ListMarkableTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMarkableTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMarkableTaskOutcome(ListMarkableTaskResult(outcome.result()));
	else
		return ListMarkableTaskOutcome(outcome.error());
}

void ItagClient::listMarkableTaskAsync(const ListMarkableTaskRequest& request, const ListMarkableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMarkableTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListMarkableTaskOutcomeCallable ItagClient::listMarkableTaskCallable(const ListMarkableTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMarkableTaskOutcome()>>(
			[this, request]()
			{
			return this->listMarkableTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListSamplingHandlerUserOutcome ItagClient::listSamplingHandlerUser(const ListSamplingHandlerUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSamplingHandlerUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSamplingHandlerUserOutcome(ListSamplingHandlerUserResult(outcome.result()));
	else
		return ListSamplingHandlerUserOutcome(outcome.error());
}

void ItagClient::listSamplingHandlerUserAsync(const ListSamplingHandlerUserRequest& request, const ListSamplingHandlerUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSamplingHandlerUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListSamplingHandlerUserOutcomeCallable ItagClient::listSamplingHandlerUserCallable(const ListSamplingHandlerUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSamplingHandlerUserOutcome()>>(
			[this, request]()
			{
			return this->listSamplingHandlerUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListSamplingResultMetaOutcome ItagClient::listSamplingResultMeta(const ListSamplingResultMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSamplingResultMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSamplingResultMetaOutcome(ListSamplingResultMetaResult(outcome.result()));
	else
		return ListSamplingResultMetaOutcome(outcome.error());
}

void ItagClient::listSamplingResultMetaAsync(const ListSamplingResultMetaRequest& request, const ListSamplingResultMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSamplingResultMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListSamplingResultMetaOutcomeCallable ItagClient::listSamplingResultMetaCallable(const ListSamplingResultMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSamplingResultMetaOutcome()>>(
			[this, request]()
			{
			return this->listSamplingResultMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListSamplingUsersOutcome ItagClient::listSamplingUsers(const ListSamplingUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSamplingUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSamplingUsersOutcome(ListSamplingUsersResult(outcome.result()));
	else
		return ListSamplingUsersOutcome(outcome.error());
}

void ItagClient::listSamplingUsersAsync(const ListSamplingUsersRequest& request, const ListSamplingUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSamplingUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListSamplingUsersOutcomeCallable ItagClient::listSamplingUsersCallable(const ListSamplingUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSamplingUsersOutcome()>>(
			[this, request]()
			{
			return this->listSamplingUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListTntConfigOutcome ItagClient::listTntConfig(const ListTntConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTntConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTntConfigOutcome(ListTntConfigResult(outcome.result()));
	else
		return ListTntConfigOutcome(outcome.error());
}

void ItagClient::listTntConfigAsync(const ListTntConfigRequest& request, const ListTntConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTntConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListTntConfigOutcomeCallable ItagClient::listTntConfigCallable(const ListTntConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTntConfigOutcome()>>(
			[this, request]()
			{
			return this->listTntConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ListWorkNodeUsersOutcome ItagClient::listWorkNodeUsers(const ListWorkNodeUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkNodeUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkNodeUsersOutcome(ListWorkNodeUsersResult(outcome.result()));
	else
		return ListWorkNodeUsersOutcome(outcome.error());
}

void ItagClient::listWorkNodeUsersAsync(const ListWorkNodeUsersRequest& request, const ListWorkNodeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkNodeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ListWorkNodeUsersOutcomeCallable ItagClient::listWorkNodeUsersCallable(const ListWorkNodeUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkNodeUsersOutcome()>>(
			[this, request]()
			{
			return this->listWorkNodeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ManualCalReportOutcome ItagClient::manualCalReport(const ManualCalReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManualCalReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManualCalReportOutcome(ManualCalReportResult(outcome.result()));
	else
		return ManualCalReportOutcome(outcome.error());
}

void ItagClient::manualCalReportAsync(const ManualCalReportRequest& request, const ManualCalReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manualCalReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ManualCalReportOutcomeCallable ItagClient::manualCalReportCallable(const ManualCalReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManualCalReportOutcome()>>(
			[this, request]()
			{
			return this->manualCalReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::MngReleaseUserSubTaskOutcome ItagClient::mngReleaseUserSubTask(const MngReleaseUserSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MngReleaseUserSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MngReleaseUserSubTaskOutcome(MngReleaseUserSubTaskResult(outcome.result()));
	else
		return MngReleaseUserSubTaskOutcome(outcome.error());
}

void ItagClient::mngReleaseUserSubTaskAsync(const MngReleaseUserSubTaskRequest& request, const MngReleaseUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mngReleaseUserSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::MngReleaseUserSubTaskOutcomeCallable ItagClient::mngReleaseUserSubTaskCallable(const MngReleaseUserSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MngReleaseUserSubTaskOutcome()>>(
			[this, request]()
			{
			return this->mngReleaseUserSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::OfflineTaskOutcome ItagClient::offlineTask(const OfflineTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineTaskOutcome(OfflineTaskResult(outcome.result()));
	else
		return OfflineTaskOutcome(outcome.error());
}

void ItagClient::offlineTaskAsync(const OfflineTaskRequest& request, const OfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::OfflineTaskOutcomeCallable ItagClient::offlineTaskCallable(const OfflineTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineTaskOutcome()>>(
			[this, request]()
			{
			return this->offlineTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::OnlineTaskOutcome ItagClient::onlineTask(const OnlineTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnlineTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnlineTaskOutcome(OnlineTaskResult(outcome.result()));
	else
		return OnlineTaskOutcome(outcome.error());
}

void ItagClient::onlineTaskAsync(const OnlineTaskRequest& request, const OnlineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onlineTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::OnlineTaskOutcomeCallable ItagClient::onlineTaskCallable(const OnlineTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnlineTaskOutcome()>>(
			[this, request]()
			{
			return this->onlineTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewDataMetaOutcome ItagClient::pageViewDataMeta(const PageViewDataMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewDataMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewDataMetaOutcome(PageViewDataMetaResult(outcome.result()));
	else
		return PageViewDataMetaOutcome(outcome.error());
}

void ItagClient::pageViewDataMetaAsync(const PageViewDataMetaRequest& request, const PageViewDataMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewDataMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewDataMetaOutcomeCallable ItagClient::pageViewDataMetaCallable(const PageViewDataMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewDataMetaOutcome()>>(
			[this, request]()
			{
			return this->pageViewDataMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewDatasetProxyOutcome ItagClient::pageViewDatasetProxy(const PageViewDatasetProxyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewDatasetProxyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewDatasetProxyOutcome(PageViewDatasetProxyResult(outcome.result()));
	else
		return PageViewDatasetProxyOutcome(outcome.error());
}

void ItagClient::pageViewDatasetProxyAsync(const PageViewDatasetProxyRequest& request, const PageViewDatasetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewDatasetProxy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewDatasetProxyOutcomeCallable ItagClient::pageViewDatasetProxyCallable(const PageViewDatasetProxyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewDatasetProxyOutcome()>>(
			[this, request]()
			{
			return this->pageViewDatasetProxy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewFlowJobOutcome ItagClient::pageViewFlowJob(const PageViewFlowJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewFlowJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewFlowJobOutcome(PageViewFlowJobResult(outcome.result()));
	else
		return PageViewFlowJobOutcome(outcome.error());
}

void ItagClient::pageViewFlowJobAsync(const PageViewFlowJobRequest& request, const PageViewFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewFlowJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewFlowJobOutcomeCallable ItagClient::pageViewFlowJobCallable(const PageViewFlowJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewFlowJobOutcome()>>(
			[this, request]()
			{
			return this->pageViewFlowJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewModelOutcome ItagClient::pageViewModel(const PageViewModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewModelOutcome(PageViewModelResult(outcome.result()));
	else
		return PageViewModelOutcome(outcome.error());
}

void ItagClient::pageViewModelAsync(const PageViewModelRequest& request, const PageViewModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewModelOutcomeCallable ItagClient::pageViewModelCallable(const PageViewModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewModelOutcome()>>(
			[this, request]()
			{
			return this->pageViewModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewMyTntOutcome ItagClient::pageViewMyTnt(const PageViewMyTntRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewMyTntOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewMyTntOutcome(PageViewMyTntResult(outcome.result()));
	else
		return PageViewMyTntOutcome(outcome.error());
}

void ItagClient::pageViewMyTntAsync(const PageViewMyTntRequest& request, const PageViewMyTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewMyTnt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewMyTntOutcomeCallable ItagClient::pageViewMyTntCallable(const PageViewMyTntRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewMyTntOutcome()>>(
			[this, request]()
			{
			return this->pageViewMyTnt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewOptionTemplateOutcome ItagClient::pageViewOptionTemplate(const PageViewOptionTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewOptionTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewOptionTemplateOutcome(PageViewOptionTemplateResult(outcome.result()));
	else
		return PageViewOptionTemplateOutcome(outcome.error());
}

void ItagClient::pageViewOptionTemplateAsync(const PageViewOptionTemplateRequest& request, const PageViewOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewOptionTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewOptionTemplateOutcomeCallable ItagClient::pageViewOptionTemplateCallable(const PageViewOptionTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewOptionTemplateOutcome()>>(
			[this, request]()
			{
			return this->pageViewOptionTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewSubTaskItemOutcome ItagClient::pageViewSubTaskItem(const PageViewSubTaskItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewSubTaskItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewSubTaskItemOutcome(PageViewSubTaskItemResult(outcome.result()));
	else
		return PageViewSubTaskItemOutcome(outcome.error());
}

void ItagClient::pageViewSubTaskItemAsync(const PageViewSubTaskItemRequest& request, const PageViewSubTaskItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewSubTaskItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewSubTaskItemOutcomeCallable ItagClient::pageViewSubTaskItemCallable(const PageViewSubTaskItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewSubTaskItemOutcome()>>(
			[this, request]()
			{
			return this->pageViewSubTaskItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewTaskOutcome ItagClient::pageViewTask(const PageViewTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewTaskOutcome(PageViewTaskResult(outcome.result()));
	else
		return PageViewTaskOutcome(outcome.error());
}

void ItagClient::pageViewTaskAsync(const PageViewTaskRequest& request, const PageViewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewTaskOutcomeCallable ItagClient::pageViewTaskCallable(const PageViewTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewTaskOutcome()>>(
			[this, request]()
			{
			return this->pageViewTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewTntUserOutcome ItagClient::pageViewTntUser(const PageViewTntUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewTntUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewTntUserOutcome(PageViewTntUserResult(outcome.result()));
	else
		return PageViewTntUserOutcome(outcome.error());
}

void ItagClient::pageViewTntUserAsync(const PageViewTntUserRequest& request, const PageViewTntUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewTntUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewTntUserOutcomeCallable ItagClient::pageViewTntUserCallable(const PageViewTntUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewTntUserOutcome()>>(
			[this, request]()
			{
			return this->pageViewTntUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewUserOutcome ItagClient::pageViewUser(const PageViewUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewUserOutcome(PageViewUserResult(outcome.result()));
	else
		return PageViewUserOutcome(outcome.error());
}

void ItagClient::pageViewUserAsync(const PageViewUserRequest& request, const PageViewUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewUserOutcomeCallable ItagClient::pageViewUserCallable(const PageViewUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewUserOutcome()>>(
			[this, request]()
			{
			return this->pageViewUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageViewUserGroupOutcome ItagClient::pageViewUserGroup(const PageViewUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageViewUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageViewUserGroupOutcome(PageViewUserGroupResult(outcome.result()));
	else
		return PageViewUserGroupOutcome(outcome.error());
}

void ItagClient::pageViewUserGroupAsync(const PageViewUserGroupRequest& request, const PageViewUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageViewUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageViewUserGroupOutcomeCallable ItagClient::pageViewUserGroupCallable(const PageViewUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageViewUserGroupOutcome()>>(
			[this, request]()
			{
			return this->pageViewUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PageviewSubTaskOutcome ItagClient::pageviewSubTask(const PageviewSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageviewSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageviewSubTaskOutcome(PageviewSubTaskResult(outcome.result()));
	else
		return PageviewSubTaskOutcome(outcome.error());
}

void ItagClient::pageviewSubTaskAsync(const PageviewSubTaskRequest& request, const PageviewSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageviewSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PageviewSubTaskOutcomeCallable ItagClient::pageviewSubTaskCallable(const PageviewSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageviewSubTaskOutcome()>>(
			[this, request]()
			{
			return this->pageviewSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PollingSampleMarkItemsOutcome ItagClient::pollingSampleMarkItems(const PollingSampleMarkItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PollingSampleMarkItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PollingSampleMarkItemsOutcome(PollingSampleMarkItemsResult(outcome.result()));
	else
		return PollingSampleMarkItemsOutcome(outcome.error());
}

void ItagClient::pollingSampleMarkItemsAsync(const PollingSampleMarkItemsRequest& request, const PollingSampleMarkItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pollingSampleMarkItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PollingSampleMarkItemsOutcomeCallable ItagClient::pollingSampleMarkItemsCallable(const PollingSampleMarkItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PollingSampleMarkItemsOutcome()>>(
			[this, request]()
			{
			return this->pollingSampleMarkItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::PreviewTaskTemplateOutcome ItagClient::previewTaskTemplate(const PreviewTaskTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PreviewTaskTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PreviewTaskTemplateOutcome(PreviewTaskTemplateResult(outcome.result()));
	else
		return PreviewTaskTemplateOutcome(outcome.error());
}

void ItagClient::previewTaskTemplateAsync(const PreviewTaskTemplateRequest& request, const PreviewTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, previewTaskTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::PreviewTaskTemplateOutcomeCallable ItagClient::previewTaskTemplateCallable(const PreviewTaskTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PreviewTaskTemplateOutcome()>>(
			[this, request]()
			{
			return this->previewTaskTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ProxyRobotServiceOutcome ItagClient::proxyRobotService(const ProxyRobotServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProxyRobotServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProxyRobotServiceOutcome(ProxyRobotServiceResult(outcome.result()));
	else
		return ProxyRobotServiceOutcome(outcome.error());
}

void ItagClient::proxyRobotServiceAsync(const ProxyRobotServiceRequest& request, const ProxyRobotServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, proxyRobotService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ProxyRobotServiceOutcomeCallable ItagClient::proxyRobotServiceCallable(const ProxyRobotServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProxyRobotServiceOutcome()>>(
			[this, request]()
			{
			return this->proxyRobotService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::QueryMarkableSubTaskOutcome ItagClient::queryMarkableSubTask(const QueryMarkableSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMarkableSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMarkableSubTaskOutcome(QueryMarkableSubTaskResult(outcome.result()));
	else
		return QueryMarkableSubTaskOutcome(outcome.error());
}

void ItagClient::queryMarkableSubTaskAsync(const QueryMarkableSubTaskRequest& request, const QueryMarkableSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMarkableSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::QueryMarkableSubTaskOutcomeCallable ItagClient::queryMarkableSubTaskCallable(const QueryMarkableSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMarkableSubTaskOutcome()>>(
			[this, request]()
			{
			return this->queryMarkableSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::QuerySampleMarkItemsOutcome ItagClient::querySampleMarkItems(const QuerySampleMarkItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySampleMarkItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySampleMarkItemsOutcome(QuerySampleMarkItemsResult(outcome.result()));
	else
		return QuerySampleMarkItemsOutcome(outcome.error());
}

void ItagClient::querySampleMarkItemsAsync(const QuerySampleMarkItemsRequest& request, const QuerySampleMarkItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySampleMarkItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::QuerySampleMarkItemsOutcomeCallable ItagClient::querySampleMarkItemsCallable(const QuerySampleMarkItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySampleMarkItemsOutcome()>>(
			[this, request]()
			{
			return this->querySampleMarkItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::QuerySamplingPoolSizeOutcome ItagClient::querySamplingPoolSize(const QuerySamplingPoolSizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySamplingPoolSizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySamplingPoolSizeOutcome(QuerySamplingPoolSizeResult(outcome.result()));
	else
		return QuerySamplingPoolSizeOutcome(outcome.error());
}

void ItagClient::querySamplingPoolSizeAsync(const QuerySamplingPoolSizeRequest& request, const QuerySamplingPoolSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySamplingPoolSize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::QuerySamplingPoolSizeOutcomeCallable ItagClient::querySamplingPoolSizeCallable(const QuerySamplingPoolSizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySamplingPoolSizeOutcome()>>(
			[this, request]()
			{
			return this->querySamplingPoolSize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::QuerySkipUserSubTaskOutcome ItagClient::querySkipUserSubTask(const QuerySkipUserSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySkipUserSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySkipUserSubTaskOutcome(QuerySkipUserSubTaskResult(outcome.result()));
	else
		return QuerySkipUserSubTaskOutcome(outcome.error());
}

void ItagClient::querySkipUserSubTaskAsync(const QuerySkipUserSubTaskRequest& request, const QuerySkipUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySkipUserSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::QuerySkipUserSubTaskOutcomeCallable ItagClient::querySkipUserSubTaskCallable(const QuerySkipUserSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySkipUserSubTaskOutcome()>>(
			[this, request]()
			{
			return this->querySkipUserSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::RejectSamplingTaskOutcome ItagClient::rejectSamplingTask(const RejectSamplingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectSamplingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectSamplingTaskOutcome(RejectSamplingTaskResult(outcome.result()));
	else
		return RejectSamplingTaskOutcome(outcome.error());
}

void ItagClient::rejectSamplingTaskAsync(const RejectSamplingTaskRequest& request, const RejectSamplingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectSamplingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::RejectSamplingTaskOutcomeCallable ItagClient::rejectSamplingTaskCallable(const RejectSamplingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectSamplingTaskOutcome()>>(
			[this, request]()
			{
			return this->rejectSamplingTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::RejectSubTaskOutcome ItagClient::rejectSubTask(const RejectSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectSubTaskOutcome(RejectSubTaskResult(outcome.result()));
	else
		return RejectSubTaskOutcome(outcome.error());
}

void ItagClient::rejectSubTaskAsync(const RejectSubTaskRequest& request, const RejectSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::RejectSubTaskOutcomeCallable ItagClient::rejectSubTaskCallable(const RejectSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectSubTaskOutcome()>>(
			[this, request]()
			{
			return this->rejectSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::ReleaseUserSubTaskOutcome ItagClient::releaseUserSubTask(const ReleaseUserSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseUserSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseUserSubTaskOutcome(ReleaseUserSubTaskResult(outcome.result()));
	else
		return ReleaseUserSubTaskOutcome(outcome.error());
}

void ItagClient::releaseUserSubTaskAsync(const ReleaseUserSubTaskRequest& request, const ReleaseUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseUserSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::ReleaseUserSubTaskOutcomeCallable ItagClient::releaseUserSubTaskCallable(const ReleaseUserSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseUserSubTaskOutcome()>>(
			[this, request]()
			{
			return this->releaseUserSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::RemoveMemberOrGroupTaskOutcome ItagClient::removeMemberOrGroupTask(const RemoveMemberOrGroupTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveMemberOrGroupTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveMemberOrGroupTaskOutcome(RemoveMemberOrGroupTaskResult(outcome.result()));
	else
		return RemoveMemberOrGroupTaskOutcome(outcome.error());
}

void ItagClient::removeMemberOrGroupTaskAsync(const RemoveMemberOrGroupTaskRequest& request, const RemoveMemberOrGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeMemberOrGroupTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::RemoveMemberOrGroupTaskOutcomeCallable ItagClient::removeMemberOrGroupTaskCallable(const RemoveMemberOrGroupTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveMemberOrGroupTaskOutcome()>>(
			[this, request]()
			{
			return this->removeMemberOrGroupTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::RemoveUserInGroupOutcome ItagClient::removeUserInGroup(const RemoveUserInGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserInGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserInGroupOutcome(RemoveUserInGroupResult(outcome.result()));
	else
		return RemoveUserInGroupOutcome(outcome.error());
}

void ItagClient::removeUserInGroupAsync(const RemoveUserInGroupRequest& request, const RemoveUserInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserInGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::RemoveUserInGroupOutcomeCallable ItagClient::removeUserInGroupCallable(const RemoveUserInGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserInGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUserInGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::RemoveUserInTntOutcome ItagClient::removeUserInTnt(const RemoveUserInTntRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUserInTntOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUserInTntOutcome(RemoveUserInTntResult(outcome.result()));
	else
		return RemoveUserInTntOutcome(outcome.error());
}

void ItagClient::removeUserInTntAsync(const RemoveUserInTntRequest& request, const RemoveUserInTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUserInTnt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::RemoveUserInTntOutcomeCallable ItagClient::removeUserInTntCallable(const RemoveUserInTntRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUserInTntOutcome()>>(
			[this, request]()
			{
			return this->removeUserInTnt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::SamplingSubUserTaskListOutcome ItagClient::samplingSubUserTaskList(const SamplingSubUserTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SamplingSubUserTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SamplingSubUserTaskListOutcome(SamplingSubUserTaskListResult(outcome.result()));
	else
		return SamplingSubUserTaskListOutcome(outcome.error());
}

void ItagClient::samplingSubUserTaskListAsync(const SamplingSubUserTaskListRequest& request, const SamplingSubUserTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, samplingSubUserTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::SamplingSubUserTaskListOutcomeCallable ItagClient::samplingSubUserTaskListCallable(const SamplingSubUserTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SamplingSubUserTaskListOutcome()>>(
			[this, request]()
			{
			return this->samplingSubUserTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::SkipFinishedOutcome ItagClient::skipFinished(const SkipFinishedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SkipFinishedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SkipFinishedOutcome(SkipFinishedResult(outcome.result()));
	else
		return SkipFinishedOutcome(outcome.error());
}

void ItagClient::skipFinishedAsync(const SkipFinishedRequest& request, const SkipFinishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, skipFinished(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::SkipFinishedOutcomeCallable ItagClient::skipFinishedCallable(const SkipFinishedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SkipFinishedOutcome()>>(
			[this, request]()
			{
			return this->skipFinished(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::SkipUserSubTaskOutcome ItagClient::skipUserSubTask(const SkipUserSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SkipUserSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SkipUserSubTaskOutcome(SkipUserSubTaskResult(outcome.result()));
	else
		return SkipUserSubTaskOutcome(outcome.error());
}

void ItagClient::skipUserSubTaskAsync(const SkipUserSubTaskRequest& request, const SkipUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, skipUserSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::SkipUserSubTaskOutcomeCallable ItagClient::skipUserSubTaskCallable(const SkipUserSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SkipUserSubTaskOutcome()>>(
			[this, request]()
			{
			return this->skipUserSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::TaskStageStatOutcome ItagClient::taskStageStat(const TaskStageStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskStageStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskStageStatOutcome(TaskStageStatResult(outcome.result()));
	else
		return TaskStageStatOutcome(outcome.error());
}

void ItagClient::taskStageStatAsync(const TaskStageStatRequest& request, const TaskStageStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskStageStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::TaskStageStatOutcomeCallable ItagClient::taskStageStatCallable(const TaskStageStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskStageStatOutcome()>>(
			[this, request]()
			{
			return this->taskStageStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::TestRequestOutcome ItagClient::testRequest(const TestRequestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestRequestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestRequestOutcome(TestRequestResult(outcome.result()));
	else
		return TestRequestOutcome(outcome.error());
}

void ItagClient::testRequestAsync(const TestRequestRequest& request, const TestRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testRequest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::TestRequestOutcomeCallable ItagClient::testRequestCallable(const TestRequestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestRequestOutcome()>>(
			[this, request]()
			{
			return this->testRequest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::TransferUserSubTaskOutcome ItagClient::transferUserSubTask(const TransferUserSubTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferUserSubTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferUserSubTaskOutcome(TransferUserSubTaskResult(outcome.result()));
	else
		return TransferUserSubTaskOutcome(outcome.error());
}

void ItagClient::transferUserSubTaskAsync(const TransferUserSubTaskRequest& request, const TransferUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferUserSubTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::TransferUserSubTaskOutcomeCallable ItagClient::transferUserSubTaskCallable(const TransferUserSubTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferUserSubTaskOutcome()>>(
			[this, request]()
			{
			return this->transferUserSubTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UnpassFeedbackOutcome ItagClient::unpassFeedback(const UnpassFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnpassFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnpassFeedbackOutcome(UnpassFeedbackResult(outcome.result()));
	else
		return UnpassFeedbackOutcome(outcome.error());
}

void ItagClient::unpassFeedbackAsync(const UnpassFeedbackRequest& request, const UnpassFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unpassFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UnpassFeedbackOutcomeCallable ItagClient::unpassFeedbackCallable(const UnpassFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnpassFeedbackOutcome()>>(
			[this, request]()
			{
			return this->unpassFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateDatasetStateMsgOutcome ItagClient::updateDatasetStateMsg(const UpdateDatasetStateMsgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDatasetStateMsgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDatasetStateMsgOutcome(UpdateDatasetStateMsgResult(outcome.result()));
	else
		return UpdateDatasetStateMsgOutcome(outcome.error());
}

void ItagClient::updateDatasetStateMsgAsync(const UpdateDatasetStateMsgRequest& request, const UpdateDatasetStateMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDatasetStateMsg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateDatasetStateMsgOutcomeCallable ItagClient::updateDatasetStateMsgCallable(const UpdateDatasetStateMsgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDatasetStateMsgOutcome()>>(
			[this, request]()
			{
			return this->updateDatasetStateMsg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateMarkResultOutcome ItagClient::updateMarkResult(const UpdateMarkResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMarkResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMarkResultOutcome(UpdateMarkResultResult(outcome.result()));
	else
		return UpdateMarkResultOutcome(outcome.error());
}

void ItagClient::updateMarkResultAsync(const UpdateMarkResultRequest& request, const UpdateMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMarkResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateMarkResultOutcomeCallable ItagClient::updateMarkResultCallable(const UpdateMarkResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMarkResultOutcome()>>(
			[this, request]()
			{
			return this->updateMarkResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateMarkResultByAdminOutcome ItagClient::updateMarkResultByAdmin(const UpdateMarkResultByAdminRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMarkResultByAdminOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMarkResultByAdminOutcome(UpdateMarkResultByAdminResult(outcome.result()));
	else
		return UpdateMarkResultByAdminOutcome(outcome.error());
}

void ItagClient::updateMarkResultByAdminAsync(const UpdateMarkResultByAdminRequest& request, const UpdateMarkResultByAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMarkResultByAdmin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateMarkResultByAdminOutcomeCallable ItagClient::updateMarkResultByAdminCallable(const UpdateMarkResultByAdminRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMarkResultByAdminOutcome()>>(
			[this, request]()
			{
			return this->updateMarkResultByAdmin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateModelOutcome ItagClient::updateModel(const UpdateModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateModelOutcome(UpdateModelResult(outcome.result()));
	else
		return UpdateModelOutcome(outcome.error());
}

void ItagClient::updateModelAsync(const UpdateModelRequest& request, const UpdateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateModelOutcomeCallable ItagClient::updateModelCallable(const UpdateModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateModelOutcome()>>(
			[this, request]()
			{
			return this->updateModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateTaskOutcome ItagClient::updateTask(const UpdateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskOutcome(UpdateTaskResult(outcome.result()));
	else
		return UpdateTaskOutcome(outcome.error());
}

void ItagClient::updateTaskAsync(const UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateTaskOutcomeCallable ItagClient::updateTaskCallable(const UpdateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskOutcome()>>(
			[this, request]()
			{
			return this->updateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateTaskDataOutcome ItagClient::updateTaskData(const UpdateTaskDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskDataOutcome(UpdateTaskDataResult(outcome.result()));
	else
		return UpdateTaskDataOutcome(outcome.error());
}

void ItagClient::updateTaskDataAsync(const UpdateTaskDataRequest& request, const UpdateTaskDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateTaskDataOutcomeCallable ItagClient::updateTaskDataCallable(const UpdateTaskDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskDataOutcome()>>(
			[this, request]()
			{
			return this->updateTaskData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateTaskTemplateOutcome ItagClient::updateTaskTemplate(const UpdateTaskTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaskTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaskTemplateOutcome(UpdateTaskTemplateResult(outcome.result()));
	else
		return UpdateTaskTemplateOutcome(outcome.error());
}

void ItagClient::updateTaskTemplateAsync(const UpdateTaskTemplateRequest& request, const UpdateTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaskTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateTaskTemplateOutcomeCallable ItagClient::updateTaskTemplateCallable(const UpdateTaskTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaskTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTaskTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateTemplateOutcome ItagClient::updateTemplate(const UpdateTemplateRequest &request) const
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

void ItagClient::updateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateTemplateOutcomeCallable ItagClient::updateTemplateCallable(const UpdateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateUserNameOutcome ItagClient::updateUserName(const UpdateUserNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserNameOutcome(UpdateUserNameResult(outcome.result()));
	else
		return UpdateUserNameOutcome(outcome.error());
}

void ItagClient::updateUserNameAsync(const UpdateUserNameRequest& request, const UpdateUserNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateUserNameOutcomeCallable ItagClient::updateUserNameCallable(const UpdateUserNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserNameOutcome()>>(
			[this, request]()
			{
			return this->updateUserName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UpdateUserRoleInTntOutcome ItagClient::updateUserRoleInTnt(const UpdateUserRoleInTntRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserRoleInTntOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserRoleInTntOutcome(UpdateUserRoleInTntResult(outcome.result()));
	else
		return UpdateUserRoleInTntOutcome(outcome.error());
}

void ItagClient::updateUserRoleInTntAsync(const UpdateUserRoleInTntRequest& request, const UpdateUserRoleInTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserRoleInTnt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UpdateUserRoleInTntOutcomeCallable ItagClient::updateUserRoleInTntCallable(const UpdateUserRoleInTntRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserRoleInTntOutcome()>>(
			[this, request]()
			{
			return this->updateUserRoleInTnt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ItagClient::UserSubTaskTimerOutcome ItagClient::userSubTaskTimer(const UserSubTaskTimerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UserSubTaskTimerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UserSubTaskTimerOutcome(UserSubTaskTimerResult(outcome.result()));
	else
		return UserSubTaskTimerOutcome(outcome.error());
}

void ItagClient::userSubTaskTimerAsync(const UserSubTaskTimerRequest& request, const UserSubTaskTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, userSubTaskTimer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ItagClient::UserSubTaskTimerOutcomeCallable ItagClient::userSubTaskTimerCallable(const UserSubTaskTimerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UserSubTaskTimerOutcome()>>(
			[this, request]()
			{
			return this->userSubTaskTimer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

