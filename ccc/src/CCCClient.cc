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

#include <alibabacloud/ccc/CCCClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

namespace
{
	const std::string SERVICE_NAME = "CCC";
}

CCCClient::CCCClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "CCC");
}

CCCClient::CCCClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "CCC");
}

CCCClient::CCCClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "CCC");
}

CCCClient::~CCCClient()
{}

CCCClient::AbortPredictiveJobsOutcome CCCClient::abortPredictiveJobs(const AbortPredictiveJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortPredictiveJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortPredictiveJobsOutcome(AbortPredictiveJobsResult(outcome.result()));
	else
		return AbortPredictiveJobsOutcome(outcome.error());
}

void CCCClient::abortPredictiveJobsAsync(const AbortPredictiveJobsRequest& request, const AbortPredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortPredictiveJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AbortPredictiveJobsOutcomeCallable CCCClient::abortPredictiveJobsCallable(const AbortPredictiveJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortPredictiveJobsOutcome()>>(
			[this, request]()
			{
			return this->abortPredictiveJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddAgentDeviceOutcome CCCClient::addAgentDevice(const AddAgentDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAgentDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAgentDeviceOutcome(AddAgentDeviceResult(outcome.result()));
	else
		return AddAgentDeviceOutcome(outcome.error());
}

void CCCClient::addAgentDeviceAsync(const AddAgentDeviceRequest& request, const AddAgentDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAgentDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddAgentDeviceOutcomeCallable CCCClient::addAgentDeviceCallable(const AddAgentDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAgentDeviceOutcome()>>(
			[this, request]()
			{
			return this->addAgentDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddBulkPhoneNumbersOutcome CCCClient::addBulkPhoneNumbers(const AddBulkPhoneNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddBulkPhoneNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBulkPhoneNumbersOutcome(AddBulkPhoneNumbersResult(outcome.result()));
	else
		return AddBulkPhoneNumbersOutcome(outcome.error());
}

void CCCClient::addBulkPhoneNumbersAsync(const AddBulkPhoneNumbersRequest& request, const AddBulkPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBulkPhoneNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddBulkPhoneNumbersOutcomeCallable CCCClient::addBulkPhoneNumbersCallable(const AddBulkPhoneNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBulkPhoneNumbersOutcome()>>(
			[this, request]()
			{
			return this->addBulkPhoneNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddJobsToPredictiveJobGroupOutcome CCCClient::addJobsToPredictiveJobGroup(const AddJobsToPredictiveJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddJobsToPredictiveJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddJobsToPredictiveJobGroupOutcome(AddJobsToPredictiveJobGroupResult(outcome.result()));
	else
		return AddJobsToPredictiveJobGroupOutcome(outcome.error());
}

void CCCClient::addJobsToPredictiveJobGroupAsync(const AddJobsToPredictiveJobGroupRequest& request, const AddJobsToPredictiveJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addJobsToPredictiveJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddJobsToPredictiveJobGroupOutcomeCallable CCCClient::addJobsToPredictiveJobGroupCallable(const AddJobsToPredictiveJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddJobsToPredictiveJobGroupOutcome()>>(
			[this, request]()
			{
			return this->addJobsToPredictiveJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddPhoneNumberOutcome CCCClient::addPhoneNumber(const AddPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPhoneNumberOutcome(AddPhoneNumberResult(outcome.result()));
	else
		return AddPhoneNumberOutcome(outcome.error());
}

void CCCClient::addPhoneNumberAsync(const AddPhoneNumberRequest& request, const AddPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddPhoneNumberOutcomeCallable CCCClient::addPhoneNumberCallable(const AddPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->addPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddPhoneTagsOutcome CCCClient::addPhoneTags(const AddPhoneTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPhoneTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPhoneTagsOutcome(AddPhoneTagsResult(outcome.result()));
	else
		return AddPhoneTagsOutcome(outcome.error());
}

void CCCClient::addPhoneTagsAsync(const AddPhoneTagsRequest& request, const AddPhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPhoneTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddPhoneTagsOutcomeCallable CCCClient::addPhoneTagsCallable(const AddPhoneTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPhoneTagsOutcome()>>(
			[this, request]()
			{
			return this->addPhoneTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AssignJobsOutcome CCCClient::assignJobs(const AssignJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignJobsOutcome(AssignJobsResult(outcome.result()));
	else
		return AssignJobsOutcome(outcome.error());
}

void CCCClient::assignJobsAsync(const AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AssignJobsOutcomeCallable CCCClient::assignJobsCallable(const AssignJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignJobsOutcome()>>(
			[this, request]()
			{
			return this->assignJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AssignUsersOutcome CCCClient::assignUsers(const AssignUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignUsersOutcome(AssignUsersResult(outcome.result()));
	else
		return AssignUsersOutcome(outcome.error());
}

void CCCClient::assignUsersAsync(const AssignUsersRequest& request, const AssignUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AssignUsersOutcomeCallable CCCClient::assignUsersCallable(const AssignUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignUsersOutcome()>>(
			[this, request]()
			{
			return this->assignUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CallOnlinePrivacyNumberOutcome CCCClient::callOnlinePrivacyNumber(const CallOnlinePrivacyNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CallOnlinePrivacyNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CallOnlinePrivacyNumberOutcome(CallOnlinePrivacyNumberResult(outcome.result()));
	else
		return CallOnlinePrivacyNumberOutcome(outcome.error());
}

void CCCClient::callOnlinePrivacyNumberAsync(const CallOnlinePrivacyNumberRequest& request, const CallOnlinePrivacyNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, callOnlinePrivacyNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CallOnlinePrivacyNumberOutcomeCallable CCCClient::callOnlinePrivacyNumberCallable(const CallOnlinePrivacyNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CallOnlinePrivacyNumberOutcome()>>(
			[this, request]()
			{
			return this->callOnlinePrivacyNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CancelJobsOutcome CCCClient::cancelJobs(const CancelJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelJobsOutcome(CancelJobsResult(outcome.result()));
	else
		return CancelJobsOutcome(outcome.error());
}

void CCCClient::cancelJobsAsync(const CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CancelJobsOutcomeCallable CCCClient::cancelJobsCallable(const CancelJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelJobsOutcome()>>(
			[this, request]()
			{
			return this->cancelJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CheckNumberAvaliableOutcome CCCClient::checkNumberAvaliable(const CheckNumberAvaliableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckNumberAvaliableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckNumberAvaliableOutcome(CheckNumberAvaliableResult(outcome.result()));
	else
		return CheckNumberAvaliableOutcome(outcome.error());
}

void CCCClient::checkNumberAvaliableAsync(const CheckNumberAvaliableRequest& request, const CheckNumberAvaliableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkNumberAvaliable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CheckNumberAvaliableOutcomeCallable CCCClient::checkNumberAvaliableCallable(const CheckNumberAvaliableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckNumberAvaliableOutcome()>>(
			[this, request]()
			{
			return this->checkNumberAvaliable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CommitContactFlowVersionModificationOutcome CCCClient::commitContactFlowVersionModification(const CommitContactFlowVersionModificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitContactFlowVersionModificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitContactFlowVersionModificationOutcome(CommitContactFlowVersionModificationResult(outcome.result()));
	else
		return CommitContactFlowVersionModificationOutcome(outcome.error());
}

void CCCClient::commitContactFlowVersionModificationAsync(const CommitContactFlowVersionModificationRequest& request, const CommitContactFlowVersionModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitContactFlowVersionModification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CommitContactFlowVersionModificationOutcomeCallable CCCClient::commitContactFlowVersionModificationCallable(const CommitContactFlowVersionModificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitContactFlowVersionModificationOutcome()>>(
			[this, request]()
			{
			return this->commitContactFlowVersionModification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateBatchJobsOutcome CCCClient::createBatchJobs(const CreateBatchJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBatchJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBatchJobsOutcome(CreateBatchJobsResult(outcome.result()));
	else
		return CreateBatchJobsOutcome(outcome.error());
}

void CCCClient::createBatchJobsAsync(const CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateBatchJobsOutcomeCallable CCCClient::createBatchJobsCallable(const CreateBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->createBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateCabInstanceOutcome CCCClient::createCabInstance(const CreateCabInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCabInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCabInstanceOutcome(CreateCabInstanceResult(outcome.result()));
	else
		return CreateCabInstanceOutcome(outcome.error());
}

void CCCClient::createCabInstanceAsync(const CreateCabInstanceRequest& request, const CreateCabInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCabInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateCabInstanceOutcomeCallable CCCClient::createCabInstanceCallable(const CreateCabInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCabInstanceOutcome()>>(
			[this, request]()
			{
			return this->createCabInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateContactFlowOutcome CCCClient::createContactFlow(const CreateContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateContactFlowOutcome(CreateContactFlowResult(outcome.result()));
	else
		return CreateContactFlowOutcome(outcome.error());
}

void CCCClient::createContactFlowAsync(const CreateContactFlowRequest& request, const CreateContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateContactFlowOutcomeCallable CCCClient::createContactFlowCallable(const CreateContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateContactFlowOutcome()>>(
			[this, request]()
			{
			return this->createContactFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateFaultOutcome CCCClient::createFault(const CreateFaultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFaultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFaultOutcome(CreateFaultResult(outcome.result()));
	else
		return CreateFaultOutcome(outcome.error());
}

void CCCClient::createFaultAsync(const CreateFaultRequest& request, const CreateFaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFault(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateFaultOutcomeCallable CCCClient::createFaultCallable(const CreateFaultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFaultOutcome()>>(
			[this, request]()
			{
			return this->createFault(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateInstanceOutcome CCCClient::createInstance(const CreateInstanceRequest &request) const
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

void CCCClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateInstanceOutcomeCallable CCCClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateJobGroupOutcome CCCClient::createJobGroup(const CreateJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobGroupOutcome(CreateJobGroupResult(outcome.result()));
	else
		return CreateJobGroupOutcome(outcome.error());
}

void CCCClient::createJobGroupAsync(const CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateJobGroupOutcomeCallable CCCClient::createJobGroupCallable(const CreateJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobGroupOutcome()>>(
			[this, request]()
			{
			return this->createJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateMediaOutcome CCCClient::createMedia(const CreateMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMediaOutcome(CreateMediaResult(outcome.result()));
	else
		return CreateMediaOutcome(outcome.error());
}

void CCCClient::createMediaAsync(const CreateMediaRequest& request, const CreateMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateMediaOutcomeCallable CCCClient::createMediaCallable(const CreateMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMediaOutcome()>>(
			[this, request]()
			{
			return this->createMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreatePredictiveJobGroupOutcome CCCClient::createPredictiveJobGroup(const CreatePredictiveJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePredictiveJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePredictiveJobGroupOutcome(CreatePredictiveJobGroupResult(outcome.result()));
	else
		return CreatePredictiveJobGroupOutcome(outcome.error());
}

void CCCClient::createPredictiveJobGroupAsync(const CreatePredictiveJobGroupRequest& request, const CreatePredictiveJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPredictiveJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreatePredictiveJobGroupOutcomeCallable CCCClient::createPredictiveJobGroupCallable(const CreatePredictiveJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePredictiveJobGroupOutcome()>>(
			[this, request]()
			{
			return this->createPredictiveJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateScenarioOutcome CCCClient::createScenario(const CreateScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScenarioOutcome(CreateScenarioResult(outcome.result()));
	else
		return CreateScenarioOutcome(outcome.error());
}

void CCCClient::createScenarioAsync(const CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateScenarioOutcomeCallable CCCClient::createScenarioCallable(const CreateScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScenarioOutcome()>>(
			[this, request]()
			{
			return this->createScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateScenarioFromTemplateOutcome CCCClient::createScenarioFromTemplate(const CreateScenarioFromTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScenarioFromTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScenarioFromTemplateOutcome(CreateScenarioFromTemplateResult(outcome.result()));
	else
		return CreateScenarioFromTemplateOutcome(outcome.error());
}

void CCCClient::createScenarioFromTemplateAsync(const CreateScenarioFromTemplateRequest& request, const CreateScenarioFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScenarioFromTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateScenarioFromTemplateOutcomeCallable CCCClient::createScenarioFromTemplateCallable(const CreateScenarioFromTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScenarioFromTemplateOutcome()>>(
			[this, request]()
			{
			return this->createScenarioFromTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateSkillGroupOutcome CCCClient::createSkillGroup(const CreateSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSkillGroupOutcome(CreateSkillGroupResult(outcome.result()));
	else
		return CreateSkillGroupOutcome(outcome.error());
}

void CCCClient::createSkillGroupAsync(const CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateSkillGroupOutcomeCallable CCCClient::createSkillGroupCallable(const CreateSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->createSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateSurveyOutcome CCCClient::createSurvey(const CreateSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSurveyOutcome(CreateSurveyResult(outcome.result()));
	else
		return CreateSurveyOutcome(outcome.error());
}

void CCCClient::createSurveyAsync(const CreateSurveyRequest& request, const CreateSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateSurveyOutcomeCallable CCCClient::createSurveyCallable(const CreateSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSurveyOutcome()>>(
			[this, request]()
			{
			return this->createSurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateUserOutcome CCCClient::createUser(const CreateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserOutcome(CreateUserResult(outcome.result()));
	else
		return CreateUserOutcome(outcome.error());
}

void CCCClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateUserOutcomeCallable CCCClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateVoiceAppraiseOutcome CCCClient::createVoiceAppraise(const CreateVoiceAppraiseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVoiceAppraiseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVoiceAppraiseOutcome(CreateVoiceAppraiseResult(outcome.result()));
	else
		return CreateVoiceAppraiseOutcome(outcome.error());
}

void CCCClient::createVoiceAppraiseAsync(const CreateVoiceAppraiseRequest& request, const CreateVoiceAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVoiceAppraise(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateVoiceAppraiseOutcomeCallable CCCClient::createVoiceAppraiseCallable(const CreateVoiceAppraiseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVoiceAppraiseOutcome()>>(
			[this, request]()
			{
			return this->createVoiceAppraise(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteInstanceOutcome CCCClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void CCCClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteInstanceOutcomeCallable CCCClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteJobGroupOutcome CCCClient::deleteJobGroup(const DeleteJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobGroupOutcome(DeleteJobGroupResult(outcome.result()));
	else
		return DeleteJobGroupOutcome(outcome.error());
}

void CCCClient::deleteJobGroupAsync(const DeleteJobGroupRequest& request, const DeleteJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteJobGroupOutcomeCallable CCCClient::deleteJobGroupCallable(const DeleteJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteMediaOutcome CCCClient::deleteMedia(const DeleteMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMediaOutcome(DeleteMediaResult(outcome.result()));
	else
		return DeleteMediaOutcome(outcome.error());
}

void CCCClient::deleteMediaAsync(const DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteMediaOutcomeCallable CCCClient::deleteMediaCallable(const DeleteMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMediaOutcome()>>(
			[this, request]()
			{
			return this->deleteMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeletePhoneTagsOutcome CCCClient::deletePhoneTags(const DeletePhoneTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePhoneTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePhoneTagsOutcome(DeletePhoneTagsResult(outcome.result()));
	else
		return DeletePhoneTagsOutcome(outcome.error());
}

void CCCClient::deletePhoneTagsAsync(const DeletePhoneTagsRequest& request, const DeletePhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePhoneTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeletePhoneTagsOutcomeCallable CCCClient::deletePhoneTagsCallable(const DeletePhoneTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePhoneTagsOutcome()>>(
			[this, request]()
			{
			return this->deletePhoneTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteSkillGroupOutcome CCCClient::deleteSkillGroup(const DeleteSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSkillGroupOutcome(DeleteSkillGroupResult(outcome.result()));
	else
		return DeleteSkillGroupOutcome(outcome.error());
}

void CCCClient::deleteSkillGroupAsync(const DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteSkillGroupOutcomeCallable CCCClient::deleteSkillGroupCallable(const DeleteSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteSurveyOutcome CCCClient::deleteSurvey(const DeleteSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSurveyOutcome(DeleteSurveyResult(outcome.result()));
	else
		return DeleteSurveyOutcome(outcome.error());
}

void CCCClient::deleteSurveyAsync(const DeleteSurveyRequest& request, const DeleteSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteSurveyOutcomeCallable CCCClient::deleteSurveyCallable(const DeleteSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSurveyOutcome()>>(
			[this, request]()
			{
			return this->deleteSurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DialExOutcome CCCClient::dialEx(const DialExRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DialExOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DialExOutcome(DialExResult(outcome.result()));
	else
		return DialExOutcome(outcome.error());
}

void CCCClient::dialExAsync(const DialExRequest& request, const DialExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dialEx(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DialExOutcomeCallable CCCClient::dialExCallable(const DialExRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DialExOutcome()>>(
			[this, request]()
			{
			return this->dialEx(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DialogueOutcome CCCClient::dialogue(const DialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DialogueOutcome(DialogueResult(outcome.result()));
	else
		return DialogueOutcome(outcome.error());
}

void CCCClient::dialogueAsync(const DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DialogueOutcomeCallable CCCClient::dialogueCallable(const DialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DialogueOutcome()>>(
			[this, request]()
			{
			return this->dialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DisableTrunkProvidersOutcome CCCClient::disableTrunkProviders(const DisableTrunkProvidersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableTrunkProvidersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableTrunkProvidersOutcome(DisableTrunkProvidersResult(outcome.result()));
	else
		return DisableTrunkProvidersOutcome(outcome.error());
}

void CCCClient::disableTrunkProvidersAsync(const DisableTrunkProvidersRequest& request, const DisableTrunkProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableTrunkProviders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DisableTrunkProvidersOutcomeCallable CCCClient::disableTrunkProvidersCallable(const DisableTrunkProvidersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableTrunkProvidersOutcome()>>(
			[this, request]()
			{
			return this->disableTrunkProviders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadAllTypeRecordingOutcome CCCClient::downloadAllTypeRecording(const DownloadAllTypeRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadAllTypeRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadAllTypeRecordingOutcome(DownloadAllTypeRecordingResult(outcome.result()));
	else
		return DownloadAllTypeRecordingOutcome(outcome.error());
}

void CCCClient::downloadAllTypeRecordingAsync(const DownloadAllTypeRecordingRequest& request, const DownloadAllTypeRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadAllTypeRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadAllTypeRecordingOutcomeCallable CCCClient::downloadAllTypeRecordingCallable(const DownloadAllTypeRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadAllTypeRecordingOutcome()>>(
			[this, request]()
			{
			return this->downloadAllTypeRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadCabRecordingOutcome CCCClient::downloadCabRecording(const DownloadCabRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadCabRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadCabRecordingOutcome(DownloadCabRecordingResult(outcome.result()));
	else
		return DownloadCabRecordingOutcome(outcome.error());
}

void CCCClient::downloadCabRecordingAsync(const DownloadCabRecordingRequest& request, const DownloadCabRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadCabRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadCabRecordingOutcomeCallable CCCClient::downloadCabRecordingCallable(const DownloadCabRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadCabRecordingOutcome()>>(
			[this, request]()
			{
			return this->downloadCabRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadOriginalStatisticsReportOutcome CCCClient::downloadOriginalStatisticsReport(const DownloadOriginalStatisticsReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadOriginalStatisticsReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadOriginalStatisticsReportOutcome(DownloadOriginalStatisticsReportResult(outcome.result()));
	else
		return DownloadOriginalStatisticsReportOutcome(outcome.error());
}

void CCCClient::downloadOriginalStatisticsReportAsync(const DownloadOriginalStatisticsReportRequest& request, const DownloadOriginalStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadOriginalStatisticsReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadOriginalStatisticsReportOutcomeCallable CCCClient::downloadOriginalStatisticsReportCallable(const DownloadOriginalStatisticsReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadOriginalStatisticsReportOutcome()>>(
			[this, request]()
			{
			return this->downloadOriginalStatisticsReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadRecordingOutcome CCCClient::downloadRecording(const DownloadRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadRecordingOutcome(DownloadRecordingResult(outcome.result()));
	else
		return DownloadRecordingOutcome(outcome.error());
}

void CCCClient::downloadRecordingAsync(const DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadRecordingOutcomeCallable CCCClient::downloadRecordingCallable(const DownloadRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadRecordingOutcome()>>(
			[this, request]()
			{
			return this->downloadRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadUnreachableContactsOutcome CCCClient::downloadUnreachableContacts(const DownloadUnreachableContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadUnreachableContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadUnreachableContactsOutcome(DownloadUnreachableContactsResult(outcome.result()));
	else
		return DownloadUnreachableContactsOutcome(outcome.error());
}

void CCCClient::downloadUnreachableContactsAsync(const DownloadUnreachableContactsRequest& request, const DownloadUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadUnreachableContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadUnreachableContactsOutcomeCallable CCCClient::downloadUnreachableContactsCallable(const DownloadUnreachableContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadUnreachableContactsOutcome()>>(
			[this, request]()
			{
			return this->downloadUnreachableContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::FindUsersOutcome CCCClient::findUsers(const FindUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindUsersOutcome(FindUsersResult(outcome.result()));
	else
		return FindUsersOutcome(outcome.error());
}

void CCCClient::findUsersAsync(const FindUsersRequest& request, const FindUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::FindUsersOutcomeCallable CCCClient::findUsersCallable(const FindUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindUsersOutcome()>>(
			[this, request]()
			{
			return this->findUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GenerateAgentStatisticReportOutcome CCCClient::generateAgentStatisticReport(const GenerateAgentStatisticReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateAgentStatisticReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateAgentStatisticReportOutcome(GenerateAgentStatisticReportResult(outcome.result()));
	else
		return GenerateAgentStatisticReportOutcome(outcome.error());
}

void CCCClient::generateAgentStatisticReportAsync(const GenerateAgentStatisticReportRequest& request, const GenerateAgentStatisticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateAgentStatisticReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GenerateAgentStatisticReportOutcomeCallable CCCClient::generateAgentStatisticReportCallable(const GenerateAgentStatisticReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateAgentStatisticReportOutcome()>>(
			[this, request]()
			{
			return this->generateAgentStatisticReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetAgentDataOutcome CCCClient::getAgentData(const GetAgentDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAgentDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAgentDataOutcome(GetAgentDataResult(outcome.result()));
	else
		return GetAgentDataOutcome(outcome.error());
}

void CCCClient::getAgentDataAsync(const GetAgentDataRequest& request, const GetAgentDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAgentData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetAgentDataOutcomeCallable CCCClient::getAgentDataCallable(const GetAgentDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAgentDataOutcome()>>(
			[this, request]()
			{
			return this->getAgentData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetCallMeasureSummaryReportOutcome CCCClient::getCallMeasureSummaryReport(const GetCallMeasureSummaryReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCallMeasureSummaryReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCallMeasureSummaryReportOutcome(GetCallMeasureSummaryReportResult(outcome.result()));
	else
		return GetCallMeasureSummaryReportOutcome(outcome.error());
}

void CCCClient::getCallMeasureSummaryReportAsync(const GetCallMeasureSummaryReportRequest& request, const GetCallMeasureSummaryReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCallMeasureSummaryReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetCallMeasureSummaryReportOutcomeCallable CCCClient::getCallMeasureSummaryReportCallable(const GetCallMeasureSummaryReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCallMeasureSummaryReportOutcome()>>(
			[this, request]()
			{
			return this->getCallMeasureSummaryReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetConfigOutcome CCCClient::getConfig(const GetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigOutcome(GetConfigResult(outcome.result()));
	else
		return GetConfigOutcome(outcome.error());
}

void CCCClient::getConfigAsync(const GetConfigRequest& request, const GetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConfigOutcomeCallable CCCClient::getConfigCallable(const GetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigOutcome()>>(
			[this, request]()
			{
			return this->getConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetConversationDetailByContactIdOutcome CCCClient::getConversationDetailByContactId(const GetConversationDetailByContactIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConversationDetailByContactIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConversationDetailByContactIdOutcome(GetConversationDetailByContactIdResult(outcome.result()));
	else
		return GetConversationDetailByContactIdOutcome(outcome.error());
}

void CCCClient::getConversationDetailByContactIdAsync(const GetConversationDetailByContactIdRequest& request, const GetConversationDetailByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConversationDetailByContactId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConversationDetailByContactIdOutcomeCallable CCCClient::getConversationDetailByContactIdCallable(const GetConversationDetailByContactIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConversationDetailByContactIdOutcome()>>(
			[this, request]()
			{
			return this->getConversationDetailByContactId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetConversationListOutcome CCCClient::getConversationList(const GetConversationListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConversationListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConversationListOutcome(GetConversationListResult(outcome.result()));
	else
		return GetConversationListOutcome(outcome.error());
}

void CCCClient::getConversationListAsync(const GetConversationListRequest& request, const GetConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConversationList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConversationListOutcomeCallable CCCClient::getConversationListCallable(const GetConversationListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConversationListOutcome()>>(
			[this, request]()
			{
			return this->getConversationList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceOutcome CCCClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void CCCClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceOutcomeCallable CCCClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceStateOutcome CCCClient::getInstanceState(const GetInstanceStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceStateOutcome(GetInstanceStateResult(outcome.result()));
	else
		return GetInstanceStateOutcome(outcome.error());
}

void CCCClient::getInstanceStateAsync(const GetInstanceStateRequest& request, const GetInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceStateOutcomeCallable CCCClient::getInstanceStateCallable(const GetInstanceStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceStateOutcome()>>(
			[this, request]()
			{
			return this->getInstanceState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceSummaryReportOutcome CCCClient::getInstanceSummaryReport(const GetInstanceSummaryReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceSummaryReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceSummaryReportOutcome(GetInstanceSummaryReportResult(outcome.result()));
	else
		return GetInstanceSummaryReportOutcome(outcome.error());
}

void CCCClient::getInstanceSummaryReportAsync(const GetInstanceSummaryReportRequest& request, const GetInstanceSummaryReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceSummaryReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceSummaryReportOutcomeCallable CCCClient::getInstanceSummaryReportCallable(const GetInstanceSummaryReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceSummaryReportOutcome()>>(
			[this, request]()
			{
			return this->getInstanceSummaryReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceSummaryReportByIntervalOutcome CCCClient::getInstanceSummaryReportByInterval(const GetInstanceSummaryReportByIntervalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceSummaryReportByIntervalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceSummaryReportByIntervalOutcome(GetInstanceSummaryReportByIntervalResult(outcome.result()));
	else
		return GetInstanceSummaryReportByIntervalOutcome(outcome.error());
}

void CCCClient::getInstanceSummaryReportByIntervalAsync(const GetInstanceSummaryReportByIntervalRequest& request, const GetInstanceSummaryReportByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceSummaryReportByInterval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceSummaryReportByIntervalOutcomeCallable CCCClient::getInstanceSummaryReportByIntervalCallable(const GetInstanceSummaryReportByIntervalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceSummaryReportByIntervalOutcome()>>(
			[this, request]()
			{
			return this->getInstanceSummaryReportByInterval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceSummaryReportSinceMidnightOutcome CCCClient::getInstanceSummaryReportSinceMidnight(const GetInstanceSummaryReportSinceMidnightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceSummaryReportSinceMidnightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceSummaryReportSinceMidnightOutcome(GetInstanceSummaryReportSinceMidnightResult(outcome.result()));
	else
		return GetInstanceSummaryReportSinceMidnightOutcome(outcome.error());
}

void CCCClient::getInstanceSummaryReportSinceMidnightAsync(const GetInstanceSummaryReportSinceMidnightRequest& request, const GetInstanceSummaryReportSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceSummaryReportSinceMidnight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceSummaryReportSinceMidnightOutcomeCallable CCCClient::getInstanceSummaryReportSinceMidnightCallable(const GetInstanceSummaryReportSinceMidnightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceSummaryReportSinceMidnightOutcome()>>(
			[this, request]()
			{
			return this->getInstanceSummaryReportSinceMidnight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobOutcome CCCClient::getJob(const GetJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobOutcome(GetJobResult(outcome.result()));
	else
		return GetJobOutcome(outcome.error());
}

void CCCClient::getJobAsync(const GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobOutcomeCallable CCCClient::getJobCallable(const GetJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobOutcome()>>(
			[this, request]()
			{
			return this->getJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobDataUploadParamsOutcome CCCClient::getJobDataUploadParams(const GetJobDataUploadParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobDataUploadParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobDataUploadParamsOutcome(GetJobDataUploadParamsResult(outcome.result()));
	else
		return GetJobDataUploadParamsOutcome(outcome.error());
}

void CCCClient::getJobDataUploadParamsAsync(const GetJobDataUploadParamsRequest& request, const GetJobDataUploadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobDataUploadParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobDataUploadParamsOutcomeCallable CCCClient::getJobDataUploadParamsCallable(const GetJobDataUploadParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobDataUploadParamsOutcome()>>(
			[this, request]()
			{
			return this->getJobDataUploadParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobFileUploadUrlOutcome CCCClient::getJobFileUploadUrl(const GetJobFileUploadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobFileUploadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobFileUploadUrlOutcome(GetJobFileUploadUrlResult(outcome.result()));
	else
		return GetJobFileUploadUrlOutcome(outcome.error());
}

void CCCClient::getJobFileUploadUrlAsync(const GetJobFileUploadUrlRequest& request, const GetJobFileUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobFileUploadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobFileUploadUrlOutcomeCallable CCCClient::getJobFileUploadUrlCallable(const GetJobFileUploadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobFileUploadUrlOutcome()>>(
			[this, request]()
			{
			return this->getJobFileUploadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobGroupOutcome CCCClient::getJobGroup(const GetJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobGroupOutcome(GetJobGroupResult(outcome.result()));
	else
		return GetJobGroupOutcome(outcome.error());
}

void CCCClient::getJobGroupAsync(const GetJobGroupRequest& request, const GetJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobGroupOutcomeCallable CCCClient::getJobGroupCallable(const GetJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobGroupOutcome()>>(
			[this, request]()
			{
			return this->getJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobListOutcome CCCClient::getJobList(const GetJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobListOutcome(GetJobListResult(outcome.result()));
	else
		return GetJobListOutcome(outcome.error());
}

void CCCClient::getJobListAsync(const GetJobListRequest& request, const GetJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobListOutcomeCallable CCCClient::getJobListCallable(const GetJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobListOutcome()>>(
			[this, request]()
			{
			return this->getJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobStatusByCallIdOutcome CCCClient::getJobStatusByCallId(const GetJobStatusByCallIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobStatusByCallIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobStatusByCallIdOutcome(GetJobStatusByCallIdResult(outcome.result()));
	else
		return GetJobStatusByCallIdOutcome(outcome.error());
}

void CCCClient::getJobStatusByCallIdAsync(const GetJobStatusByCallIdRequest& request, const GetJobStatusByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatusByCallId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobStatusByCallIdOutcomeCallable CCCClient::getJobStatusByCallIdCallable(const GetJobStatusByCallIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusByCallIdOutcome()>>(
			[this, request]()
			{
			return this->getJobStatusByCallId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobTemplateDownloadParamsOutcome CCCClient::getJobTemplateDownloadParams(const GetJobTemplateDownloadParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobTemplateDownloadParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobTemplateDownloadParamsOutcome(GetJobTemplateDownloadParamsResult(outcome.result()));
	else
		return GetJobTemplateDownloadParamsOutcome(outcome.error());
}

void CCCClient::getJobTemplateDownloadParamsAsync(const GetJobTemplateDownloadParamsRequest& request, const GetJobTemplateDownloadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobTemplateDownloadParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobTemplateDownloadParamsOutcomeCallable CCCClient::getJobTemplateDownloadParamsCallable(const GetJobTemplateDownloadParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobTemplateDownloadParamsOutcome()>>(
			[this, request]()
			{
			return this->getJobTemplateDownloadParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetNumberRegionInfoOutcome CCCClient::getNumberRegionInfo(const GetNumberRegionInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNumberRegionInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNumberRegionInfoOutcome(GetNumberRegionInfoResult(outcome.result()));
	else
		return GetNumberRegionInfoOutcome(outcome.error());
}

void CCCClient::getNumberRegionInfoAsync(const GetNumberRegionInfoRequest& request, const GetNumberRegionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNumberRegionInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetNumberRegionInfoOutcomeCallable CCCClient::getNumberRegionInfoCallable(const GetNumberRegionInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNumberRegionInfoOutcome()>>(
			[this, request]()
			{
			return this->getNumberRegionInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetRecordOssUploadParamOutcome CCCClient::getRecordOssUploadParam(const GetRecordOssUploadParamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRecordOssUploadParamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRecordOssUploadParamOutcome(GetRecordOssUploadParamResult(outcome.result()));
	else
		return GetRecordOssUploadParamOutcome(outcome.error());
}

void CCCClient::getRecordOssUploadParamAsync(const GetRecordOssUploadParamRequest& request, const GetRecordOssUploadParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRecordOssUploadParam(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetRecordOssUploadParamOutcomeCallable CCCClient::getRecordOssUploadParamCallable(const GetRecordOssUploadParamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRecordOssUploadParamOutcome()>>(
			[this, request]()
			{
			return this->getRecordOssUploadParam(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetRoutePointOutcome CCCClient::getRoutePoint(const GetRoutePointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRoutePointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRoutePointOutcome(GetRoutePointResult(outcome.result()));
	else
		return GetRoutePointOutcome(outcome.error());
}

void CCCClient::getRoutePointAsync(const GetRoutePointRequest& request, const GetRoutePointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRoutePoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetRoutePointOutcomeCallable CCCClient::getRoutePointCallable(const GetRoutePointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRoutePointOutcome()>>(
			[this, request]()
			{
			return this->getRoutePoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetScenarioOutcome CCCClient::getScenario(const GetScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScenarioOutcome(GetScenarioResult(outcome.result()));
	else
		return GetScenarioOutcome(outcome.error());
}

void CCCClient::getScenarioAsync(const GetScenarioRequest& request, const GetScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetScenarioOutcomeCallable CCCClient::getScenarioCallable(const GetScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScenarioOutcome()>>(
			[this, request]()
			{
			return this->getScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetServiceExtensionsOutcome CCCClient::getServiceExtensions(const GetServiceExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceExtensionsOutcome(GetServiceExtensionsResult(outcome.result()));
	else
		return GetServiceExtensionsOutcome(outcome.error());
}

void CCCClient::getServiceExtensionsAsync(const GetServiceExtensionsRequest& request, const GetServiceExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetServiceExtensionsOutcomeCallable CCCClient::getServiceExtensionsCallable(const GetServiceExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceExtensionsOutcome()>>(
			[this, request]()
			{
			return this->getServiceExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetSmsConfigOutcome CCCClient::getSmsConfig(const GetSmsConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSmsConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSmsConfigOutcome(GetSmsConfigResult(outcome.result()));
	else
		return GetSmsConfigOutcome(outcome.error());
}

void CCCClient::getSmsConfigAsync(const GetSmsConfigRequest& request, const GetSmsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSmsConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetSmsConfigOutcomeCallable CCCClient::getSmsConfigCallable(const GetSmsConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSmsConfigOutcome()>>(
			[this, request]()
			{
			return this->getSmsConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetSurveyOutcome CCCClient::getSurvey(const GetSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSurveyOutcome(GetSurveyResult(outcome.result()));
	else
		return GetSurveyOutcome(outcome.error());
}

void CCCClient::getSurveyAsync(const GetSurveyRequest& request, const GetSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetSurveyOutcomeCallable CCCClient::getSurveyCallable(const GetSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSurveyOutcome()>>(
			[this, request]()
			{
			return this->getSurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetTURNCredentialsOutcome CCCClient::getTURNCredentials(const GetTURNCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTURNCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTURNCredentialsOutcome(GetTURNCredentialsResult(outcome.result()));
	else
		return GetTURNCredentialsOutcome(outcome.error());
}

void CCCClient::getTURNCredentialsAsync(const GetTURNCredentialsRequest& request, const GetTURNCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTURNCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetTURNCredentialsOutcomeCallable CCCClient::getTURNCredentialsCallable(const GetTURNCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTURNCredentialsOutcome()>>(
			[this, request]()
			{
			return this->getTURNCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetTURNServerListOutcome CCCClient::getTURNServerList(const GetTURNServerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTURNServerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTURNServerListOutcome(GetTURNServerListResult(outcome.result()));
	else
		return GetTURNServerListOutcome(outcome.error());
}

void CCCClient::getTURNServerListAsync(const GetTURNServerListRequest& request, const GetTURNServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTURNServerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetTURNServerListOutcomeCallable CCCClient::getTURNServerListCallable(const GetTURNServerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTURNServerListOutcome()>>(
			[this, request]()
			{
			return this->getTURNServerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetTaskListOutcome CCCClient::getTaskList(const GetTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskListOutcome(GetTaskListResult(outcome.result()));
	else
		return GetTaskListOutcome(outcome.error());
}

void CCCClient::getTaskListAsync(const GetTaskListRequest& request, const GetTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetTaskListOutcomeCallable CCCClient::getTaskListCallable(const GetTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskListOutcome()>>(
			[this, request]()
			{
			return this->getTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetUserOutcome CCCClient::getUser(const GetUserRequest &request) const
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

void CCCClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetUserOutcomeCallable CCCClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetUserByExtensionOutcome CCCClient::getUserByExtension(const GetUserByExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserByExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserByExtensionOutcome(GetUserByExtensionResult(outcome.result()));
	else
		return GetUserByExtensionOutcome(outcome.error());
}

void CCCClient::getUserByExtensionAsync(const GetUserByExtensionRequest& request, const GetUserByExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserByExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetUserByExtensionOutcomeCallable CCCClient::getUserByExtensionCallable(const GetUserByExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserByExtensionOutcome()>>(
			[this, request]()
			{
			return this->getUserByExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::InflightTaskTimeoutOutcome CCCClient::inflightTaskTimeout(const InflightTaskTimeoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InflightTaskTimeoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InflightTaskTimeoutOutcome(InflightTaskTimeoutResult(outcome.result()));
	else
		return InflightTaskTimeoutOutcome(outcome.error());
}

void CCCClient::inflightTaskTimeoutAsync(const InflightTaskTimeoutRequest& request, const InflightTaskTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inflightTaskTimeout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::InflightTaskTimeoutOutcomeCallable CCCClient::inflightTaskTimeoutCallable(const InflightTaskTimeoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InflightTaskTimeoutOutcome()>>(
			[this, request]()
			{
			return this->inflightTaskTimeout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::LaunchAppraiseOutcome CCCClient::launchAppraise(const LaunchAppraiseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LaunchAppraiseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LaunchAppraiseOutcome(LaunchAppraiseResult(outcome.result()));
	else
		return LaunchAppraiseOutcome(outcome.error());
}

void CCCClient::launchAppraiseAsync(const LaunchAppraiseRequest& request, const LaunchAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, launchAppraise(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::LaunchAppraiseOutcomeCallable CCCClient::launchAppraiseCallable(const LaunchAppraiseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LaunchAppraiseOutcome()>>(
			[this, request]()
			{
			return this->launchAppraise(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::LaunchShortMessageAppraiseOutcome CCCClient::launchShortMessageAppraise(const LaunchShortMessageAppraiseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LaunchShortMessageAppraiseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LaunchShortMessageAppraiseOutcome(LaunchShortMessageAppraiseResult(outcome.result()));
	else
		return LaunchShortMessageAppraiseOutcome(outcome.error());
}

void CCCClient::launchShortMessageAppraiseAsync(const LaunchShortMessageAppraiseRequest& request, const LaunchShortMessageAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, launchShortMessageAppraise(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::LaunchShortMessageAppraiseOutcomeCallable CCCClient::launchShortMessageAppraiseCallable(const LaunchShortMessageAppraiseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LaunchShortMessageAppraiseOutcome()>>(
			[this, request]()
			{
			return this->launchShortMessageAppraise(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentDevicesOutcome CCCClient::listAgentDevices(const ListAgentDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentDevicesOutcome(ListAgentDevicesResult(outcome.result()));
	else
		return ListAgentDevicesOutcome(outcome.error());
}

void CCCClient::listAgentDevicesAsync(const ListAgentDevicesRequest& request, const ListAgentDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentDevicesOutcomeCallable CCCClient::listAgentDevicesCallable(const ListAgentDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentDevicesOutcome()>>(
			[this, request]()
			{
			return this->listAgentDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentEventsOutcome CCCClient::listAgentEvents(const ListAgentEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentEventsOutcome(ListAgentEventsResult(outcome.result()));
	else
		return ListAgentEventsOutcome(outcome.error());
}

void CCCClient::listAgentEventsAsync(const ListAgentEventsRequest& request, const ListAgentEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentEventsOutcomeCallable CCCClient::listAgentEventsCallable(const ListAgentEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentEventsOutcome()>>(
			[this, request]()
			{
			return this->listAgentEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentStateLogsOutcome CCCClient::listAgentStateLogs(const ListAgentStateLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentStateLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentStateLogsOutcome(ListAgentStateLogsResult(outcome.result()));
	else
		return ListAgentStateLogsOutcome(outcome.error());
}

void CCCClient::listAgentStateLogsAsync(const ListAgentStateLogsRequest& request, const ListAgentStateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentStateLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentStateLogsOutcomeCallable CCCClient::listAgentStateLogsCallable(const ListAgentStateLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentStateLogsOutcome()>>(
			[this, request]()
			{
			return this->listAgentStateLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentStatesOutcome CCCClient::listAgentStates(const ListAgentStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentStatesOutcome(ListAgentStatesResult(outcome.result()));
	else
		return ListAgentStatesOutcome(outcome.error());
}

void CCCClient::listAgentStatesAsync(const ListAgentStatesRequest& request, const ListAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentStatesOutcomeCallable CCCClient::listAgentStatesCallable(const ListAgentStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentStatesOutcome()>>(
			[this, request]()
			{
			return this->listAgentStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentSummaryReportsOutcome CCCClient::listAgentSummaryReports(const ListAgentSummaryReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentSummaryReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentSummaryReportsOutcome(ListAgentSummaryReportsResult(outcome.result()));
	else
		return ListAgentSummaryReportsOutcome(outcome.error());
}

void CCCClient::listAgentSummaryReportsAsync(const ListAgentSummaryReportsRequest& request, const ListAgentSummaryReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentSummaryReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentSummaryReportsOutcomeCallable CCCClient::listAgentSummaryReportsCallable(const ListAgentSummaryReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentSummaryReportsOutcome()>>(
			[this, request]()
			{
			return this->listAgentSummaryReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentSummaryReportsByIntervalOutcome CCCClient::listAgentSummaryReportsByInterval(const ListAgentSummaryReportsByIntervalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentSummaryReportsByIntervalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentSummaryReportsByIntervalOutcome(ListAgentSummaryReportsByIntervalResult(outcome.result()));
	else
		return ListAgentSummaryReportsByIntervalOutcome(outcome.error());
}

void CCCClient::listAgentSummaryReportsByIntervalAsync(const ListAgentSummaryReportsByIntervalRequest& request, const ListAgentSummaryReportsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentSummaryReportsByInterval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentSummaryReportsByIntervalOutcomeCallable CCCClient::listAgentSummaryReportsByIntervalCallable(const ListAgentSummaryReportsByIntervalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentSummaryReportsByIntervalOutcome()>>(
			[this, request]()
			{
			return this->listAgentSummaryReportsByInterval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentSummaryReportsSinceMidnightOutcome CCCClient::listAgentSummaryReportsSinceMidnight(const ListAgentSummaryReportsSinceMidnightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentSummaryReportsSinceMidnightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentSummaryReportsSinceMidnightOutcome(ListAgentSummaryReportsSinceMidnightResult(outcome.result()));
	else
		return ListAgentSummaryReportsSinceMidnightOutcome(outcome.error());
}

void CCCClient::listAgentSummaryReportsSinceMidnightAsync(const ListAgentSummaryReportsSinceMidnightRequest& request, const ListAgentSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentSummaryReportsSinceMidnight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentSummaryReportsSinceMidnightOutcomeCallable CCCClient::listAgentSummaryReportsSinceMidnightCallable(const ListAgentSummaryReportsSinceMidnightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentSummaryReportsSinceMidnightOutcome()>>(
			[this, request]()
			{
			return this->listAgentSummaryReportsSinceMidnight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListBasicStatisticsReportSubItemsOutcome CCCClient::listBasicStatisticsReportSubItems(const ListBasicStatisticsReportSubItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBasicStatisticsReportSubItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBasicStatisticsReportSubItemsOutcome(ListBasicStatisticsReportSubItemsResult(outcome.result()));
	else
		return ListBasicStatisticsReportSubItemsOutcome(outcome.error());
}

void CCCClient::listBasicStatisticsReportSubItemsAsync(const ListBasicStatisticsReportSubItemsRequest& request, const ListBasicStatisticsReportSubItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicStatisticsReportSubItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListBasicStatisticsReportSubItemsOutcomeCallable CCCClient::listBasicStatisticsReportSubItemsCallable(const ListBasicStatisticsReportSubItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicStatisticsReportSubItemsOutcome()>>(
			[this, request]()
			{
			return this->listBasicStatisticsReportSubItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCallDetailRecordsOutcome CCCClient::listCallDetailRecords(const ListCallDetailRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCallDetailRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCallDetailRecordsOutcome(ListCallDetailRecordsResult(outcome.result()));
	else
		return ListCallDetailRecordsOutcome(outcome.error());
}

void CCCClient::listCallDetailRecordsAsync(const ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCallDetailRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCallDetailRecordsOutcomeCallable CCCClient::listCallDetailRecordsCallable(const ListCallDetailRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCallDetailRecordsOutcome()>>(
			[this, request]()
			{
			return this->listCallDetailRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCallEventDetailByContactIdOutcome CCCClient::listCallEventDetailByContactId(const ListCallEventDetailByContactIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCallEventDetailByContactIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCallEventDetailByContactIdOutcome(ListCallEventDetailByContactIdResult(outcome.result()));
	else
		return ListCallEventDetailByContactIdOutcome(outcome.error());
}

void CCCClient::listCallEventDetailByContactIdAsync(const ListCallEventDetailByContactIdRequest& request, const ListCallEventDetailByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCallEventDetailByContactId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCallEventDetailByContactIdOutcomeCallable CCCClient::listCallEventDetailByContactIdCallable(const ListCallEventDetailByContactIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCallEventDetailByContactIdOutcome()>>(
			[this, request]()
			{
			return this->listCallEventDetailByContactId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCallMeasureSummaryReportsOutcome CCCClient::listCallMeasureSummaryReports(const ListCallMeasureSummaryReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCallMeasureSummaryReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCallMeasureSummaryReportsOutcome(ListCallMeasureSummaryReportsResult(outcome.result()));
	else
		return ListCallMeasureSummaryReportsOutcome(outcome.error());
}

void CCCClient::listCallMeasureSummaryReportsAsync(const ListCallMeasureSummaryReportsRequest& request, const ListCallMeasureSummaryReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCallMeasureSummaryReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCallMeasureSummaryReportsOutcomeCallable CCCClient::listCallMeasureSummaryReportsCallable(const ListCallMeasureSummaryReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCallMeasureSummaryReportsOutcome()>>(
			[this, request]()
			{
			return this->listCallMeasureSummaryReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListConfigOutcome CCCClient::listConfig(const ListConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigOutcome(ListConfigResult(outcome.result()));
	else
		return ListConfigOutcome(outcome.error());
}

void CCCClient::listConfigAsync(const ListConfigRequest& request, const ListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListConfigOutcomeCallable CCCClient::listConfigCallable(const ListConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigOutcome()>>(
			[this, request]()
			{
			return this->listConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListContactFlowsOutcome CCCClient::listContactFlows(const ListContactFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContactFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContactFlowsOutcome(ListContactFlowsResult(outcome.result()));
	else
		return ListContactFlowsOutcome(outcome.error());
}

void CCCClient::listContactFlowsAsync(const ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContactFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListContactFlowsOutcomeCallable CCCClient::listContactFlowsCallable(const ListContactFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContactFlowsOutcome()>>(
			[this, request]()
			{
			return this->listContactFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListInstancesOfUserOutcome CCCClient::listInstancesOfUser(const ListInstancesOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOfUserOutcome(ListInstancesOfUserResult(outcome.result()));
	else
		return ListInstancesOfUserOutcome(outcome.error());
}

void CCCClient::listInstancesOfUserAsync(const ListInstancesOfUserRequest& request, const ListInstancesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancesOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListInstancesOfUserOutcomeCallable CCCClient::listInstancesOfUserCallable(const ListInstancesOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOfUserOutcome()>>(
			[this, request]()
			{
			return this->listInstancesOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListIvrTrackingDetailOutcome CCCClient::listIvrTrackingDetail(const ListIvrTrackingDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIvrTrackingDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIvrTrackingDetailOutcome(ListIvrTrackingDetailResult(outcome.result()));
	else
		return ListIvrTrackingDetailOutcome(outcome.error());
}

void CCCClient::listIvrTrackingDetailAsync(const ListIvrTrackingDetailRequest& request, const ListIvrTrackingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIvrTrackingDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListIvrTrackingDetailOutcomeCallable CCCClient::listIvrTrackingDetailCallable(const ListIvrTrackingDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIvrTrackingDetailOutcome()>>(
			[this, request]()
			{
			return this->listIvrTrackingDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListJobGroupsOutcome CCCClient::listJobGroups(const ListJobGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobGroupsOutcome(ListJobGroupsResult(outcome.result()));
	else
		return ListJobGroupsOutcome(outcome.error());
}

void CCCClient::listJobGroupsAsync(const ListJobGroupsRequest& request, const ListJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListJobGroupsOutcomeCallable CCCClient::listJobGroupsCallable(const ListJobGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobGroupsOutcome()>>(
			[this, request]()
			{
			return this->listJobGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListJobStatusOutcome CCCClient::listJobStatus(const ListJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobStatusOutcome(ListJobStatusResult(outcome.result()));
	else
		return ListJobStatusOutcome(outcome.error());
}

void CCCClient::listJobStatusAsync(const ListJobStatusRequest& request, const ListJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListJobStatusOutcomeCallable CCCClient::listJobStatusCallable(const ListJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobStatusOutcome()>>(
			[this, request]()
			{
			return this->listJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListJobsByGroupOutcome CCCClient::listJobsByGroup(const ListJobsByGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsByGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsByGroupOutcome(ListJobsByGroupResult(outcome.result()));
	else
		return ListJobsByGroupOutcome(outcome.error());
}

void CCCClient::listJobsByGroupAsync(const ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobsByGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListJobsByGroupOutcomeCallable CCCClient::listJobsByGroupCallable(const ListJobsByGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsByGroupOutcome()>>(
			[this, request]()
			{
			return this->listJobsByGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListMediasOutcome CCCClient::listMedias(const ListMediasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediasOutcome(ListMediasResult(outcome.result()));
	else
		return ListMediasOutcome(outcome.error());
}

void CCCClient::listMediasAsync(const ListMediasRequest& request, const ListMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMedias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListMediasOutcomeCallable CCCClient::listMediasCallable(const ListMediasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediasOutcome()>>(
			[this, request]()
			{
			return this->listMedias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListOutboundPhoneNumberOfUserOutcome CCCClient::listOutboundPhoneNumberOfUser(const ListOutboundPhoneNumberOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOutboundPhoneNumberOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOutboundPhoneNumberOfUserOutcome(ListOutboundPhoneNumberOfUserResult(outcome.result()));
	else
		return ListOutboundPhoneNumberOfUserOutcome(outcome.error());
}

void CCCClient::listOutboundPhoneNumberOfUserAsync(const ListOutboundPhoneNumberOfUserRequest& request, const ListOutboundPhoneNumberOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOutboundPhoneNumberOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListOutboundPhoneNumberOfUserOutcomeCallable CCCClient::listOutboundPhoneNumberOfUserCallable(const ListOutboundPhoneNumberOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOutboundPhoneNumberOfUserOutcome()>>(
			[this, request]()
			{
			return this->listOutboundPhoneNumberOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListPhoneNumbersOutcome CCCClient::listPhoneNumbers(const ListPhoneNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPhoneNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPhoneNumbersOutcome(ListPhoneNumbersResult(outcome.result()));
	else
		return ListPhoneNumbersOutcome(outcome.error());
}

void CCCClient::listPhoneNumbersAsync(const ListPhoneNumbersRequest& request, const ListPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPhoneNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPhoneNumbersOutcomeCallable CCCClient::listPhoneNumbersCallable(const ListPhoneNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPhoneNumbersOutcome()>>(
			[this, request]()
			{
			return this->listPhoneNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListPhoneTagsOutcome CCCClient::listPhoneTags(const ListPhoneTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPhoneTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPhoneTagsOutcome(ListPhoneTagsResult(outcome.result()));
	else
		return ListPhoneTagsOutcome(outcome.error());
}

void CCCClient::listPhoneTagsAsync(const ListPhoneTagsRequest& request, const ListPhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPhoneTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPhoneTagsOutcomeCallable CCCClient::listPhoneTagsCallable(const ListPhoneTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPhoneTagsOutcome()>>(
			[this, request]()
			{
			return this->listPhoneTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRealTimeAgentOutcome CCCClient::listRealTimeAgent(const ListRealTimeAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRealTimeAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRealTimeAgentOutcome(ListRealTimeAgentResult(outcome.result()));
	else
		return ListRealTimeAgentOutcome(outcome.error());
}

void CCCClient::listRealTimeAgentAsync(const ListRealTimeAgentRequest& request, const ListRealTimeAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRealTimeAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRealTimeAgentOutcomeCallable CCCClient::listRealTimeAgentCallable(const ListRealTimeAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRealTimeAgentOutcome()>>(
			[this, request]()
			{
			return this->listRealTimeAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecentCallRecordsOutcome CCCClient::listRecentCallRecords(const ListRecentCallRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecentCallRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecentCallRecordsOutcome(ListRecentCallRecordsResult(outcome.result()));
	else
		return ListRecentCallRecordsOutcome(outcome.error());
}

void CCCClient::listRecentCallRecordsAsync(const ListRecentCallRecordsRequest& request, const ListRecentCallRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecentCallRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecentCallRecordsOutcomeCallable CCCClient::listRecentCallRecordsCallable(const ListRecentCallRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecentCallRecordsOutcome()>>(
			[this, request]()
			{
			return this->listRecentCallRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecordingOfDualTrackOutcome CCCClient::listRecordingOfDualTrack(const ListRecordingOfDualTrackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecordingOfDualTrackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecordingOfDualTrackOutcome(ListRecordingOfDualTrackResult(outcome.result()));
	else
		return ListRecordingOfDualTrackOutcome(outcome.error());
}

void CCCClient::listRecordingOfDualTrackAsync(const ListRecordingOfDualTrackRequest& request, const ListRecordingOfDualTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecordingOfDualTrack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecordingOfDualTrackOutcomeCallable CCCClient::listRecordingOfDualTrackCallable(const ListRecordingOfDualTrackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecordingOfDualTrackOutcome()>>(
			[this, request]()
			{
			return this->listRecordingOfDualTrack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecordingsOutcome CCCClient::listRecordings(const ListRecordingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecordingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecordingsOutcome(ListRecordingsResult(outcome.result()));
	else
		return ListRecordingsOutcome(outcome.error());
}

void CCCClient::listRecordingsAsync(const ListRecordingsRequest& request, const ListRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecordings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecordingsOutcomeCallable CCCClient::listRecordingsCallable(const ListRecordingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecordingsOutcome()>>(
			[this, request]()
			{
			return this->listRecordings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecordingsByContactIdOutcome CCCClient::listRecordingsByContactId(const ListRecordingsByContactIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecordingsByContactIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecordingsByContactIdOutcome(ListRecordingsByContactIdResult(outcome.result()));
	else
		return ListRecordingsByContactIdOutcome(outcome.error());
}

void CCCClient::listRecordingsByContactIdAsync(const ListRecordingsByContactIdRequest& request, const ListRecordingsByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecordingsByContactId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecordingsByContactIdOutcomeCallable CCCClient::listRecordingsByContactIdCallable(const ListRecordingsByContactIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecordingsByContactIdOutcome()>>(
			[this, request]()
			{
			return this->listRecordingsByContactId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRolesOutcome CCCClient::listRoles(const ListRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRolesOutcome(ListRolesResult(outcome.result()));
	else
		return ListRolesOutcome(outcome.error());
}

void CCCClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRolesOutcomeCallable CCCClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListScenarioTemplatesOutcome CCCClient::listScenarioTemplates(const ListScenarioTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenarioTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenarioTemplatesOutcome(ListScenarioTemplatesResult(outcome.result()));
	else
		return ListScenarioTemplatesOutcome(outcome.error());
}

void CCCClient::listScenarioTemplatesAsync(const ListScenarioTemplatesRequest& request, const ListScenarioTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenarioTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListScenarioTemplatesOutcomeCallable CCCClient::listScenarioTemplatesCallable(const ListScenarioTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenarioTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listScenarioTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListScenariosOutcome CCCClient::listScenarios(const ListScenariosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenariosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenariosOutcome(ListScenariosResult(outcome.result()));
	else
		return ListScenariosOutcome(outcome.error());
}

void CCCClient::listScenariosAsync(const ListScenariosRequest& request, const ListScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenarios(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListScenariosOutcomeCallable CCCClient::listScenariosCallable(const ListScenariosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenariosOutcome()>>(
			[this, request]()
			{
			return this->listScenarios(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupStatesOutcome CCCClient::listSkillGroupStates(const ListSkillGroupStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupStatesOutcome(ListSkillGroupStatesResult(outcome.result()));
	else
		return ListSkillGroupStatesOutcome(outcome.error());
}

void CCCClient::listSkillGroupStatesAsync(const ListSkillGroupStatesRequest& request, const ListSkillGroupStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupStatesOutcomeCallable CCCClient::listSkillGroupStatesCallable(const ListSkillGroupStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupStatesOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupSummaryReportsOutcome CCCClient::listSkillGroupSummaryReports(const ListSkillGroupSummaryReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupSummaryReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupSummaryReportsOutcome(ListSkillGroupSummaryReportsResult(outcome.result()));
	else
		return ListSkillGroupSummaryReportsOutcome(outcome.error());
}

void CCCClient::listSkillGroupSummaryReportsAsync(const ListSkillGroupSummaryReportsRequest& request, const ListSkillGroupSummaryReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupSummaryReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupSummaryReportsOutcomeCallable CCCClient::listSkillGroupSummaryReportsCallable(const ListSkillGroupSummaryReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupSummaryReportsOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupSummaryReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupSummaryReportsByIntervalOutcome CCCClient::listSkillGroupSummaryReportsByInterval(const ListSkillGroupSummaryReportsByIntervalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupSummaryReportsByIntervalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupSummaryReportsByIntervalOutcome(ListSkillGroupSummaryReportsByIntervalResult(outcome.result()));
	else
		return ListSkillGroupSummaryReportsByIntervalOutcome(outcome.error());
}

void CCCClient::listSkillGroupSummaryReportsByIntervalAsync(const ListSkillGroupSummaryReportsByIntervalRequest& request, const ListSkillGroupSummaryReportsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupSummaryReportsByInterval(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupSummaryReportsByIntervalOutcomeCallable CCCClient::listSkillGroupSummaryReportsByIntervalCallable(const ListSkillGroupSummaryReportsByIntervalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupSummaryReportsByIntervalOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupSummaryReportsByInterval(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupSummaryReportsSinceMidnightOutcome CCCClient::listSkillGroupSummaryReportsSinceMidnight(const ListSkillGroupSummaryReportsSinceMidnightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupSummaryReportsSinceMidnightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupSummaryReportsSinceMidnightOutcome(ListSkillGroupSummaryReportsSinceMidnightResult(outcome.result()));
	else
		return ListSkillGroupSummaryReportsSinceMidnightOutcome(outcome.error());
}

void CCCClient::listSkillGroupSummaryReportsSinceMidnightAsync(const ListSkillGroupSummaryReportsSinceMidnightRequest& request, const ListSkillGroupSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupSummaryReportsSinceMidnight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupSummaryReportsSinceMidnightOutcomeCallable CCCClient::listSkillGroupSummaryReportsSinceMidnightCallable(const ListSkillGroupSummaryReportsSinceMidnightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupSummaryReportsSinceMidnightOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupSummaryReportsSinceMidnight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupsOutcome CCCClient::listSkillGroups(const ListSkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupsOutcome(ListSkillGroupsResult(outcome.result()));
	else
		return ListSkillGroupsOutcome(outcome.error());
}

void CCCClient::listSkillGroupsAsync(const ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupsOutcomeCallable CCCClient::listSkillGroupsCallable(const ListSkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupsOfUserOutcome CCCClient::listSkillGroupsOfUser(const ListSkillGroupsOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupsOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupsOfUserOutcome(ListSkillGroupsOfUserResult(outcome.result()));
	else
		return ListSkillGroupsOfUserOutcome(outcome.error());
}

void CCCClient::listSkillGroupsOfUserAsync(const ListSkillGroupsOfUserRequest& request, const ListSkillGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupsOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupsOfUserOutcomeCallable CCCClient::listSkillGroupsOfUserCallable(const ListSkillGroupsOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupsOfUserOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupsOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSurveysOutcome CCCClient::listSurveys(const ListSurveysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveysOutcome(ListSurveysResult(outcome.result()));
	else
		return ListSurveysOutcome(outcome.error());
}

void CCCClient::listSurveysAsync(const ListSurveysRequest& request, const ListSurveysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSurveysOutcomeCallable CCCClient::listSurveysCallable(const ListSurveysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveysOutcome()>>(
			[this, request]()
			{
			return this->listSurveys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListTransferableSkillGroupsOutcome CCCClient::listTransferableSkillGroups(const ListTransferableSkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTransferableSkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTransferableSkillGroupsOutcome(ListTransferableSkillGroupsResult(outcome.result()));
	else
		return ListTransferableSkillGroupsOutcome(outcome.error());
}

void CCCClient::listTransferableSkillGroupsAsync(const ListTransferableSkillGroupsRequest& request, const ListTransferableSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTransferableSkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListTransferableSkillGroupsOutcomeCallable CCCClient::listTransferableSkillGroupsCallable(const ListTransferableSkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTransferableSkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->listTransferableSkillGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListTrunkProvidersOutcome CCCClient::listTrunkProviders(const ListTrunkProvidersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTrunkProvidersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTrunkProvidersOutcome(ListTrunkProvidersResult(outcome.result()));
	else
		return ListTrunkProvidersOutcome(outcome.error());
}

void CCCClient::listTrunkProvidersAsync(const ListTrunkProvidersRequest& request, const ListTrunkProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTrunkProviders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListTrunkProvidersOutcomeCallable CCCClient::listTrunkProvidersCallable(const ListTrunkProvidersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTrunkProvidersOutcome()>>(
			[this, request]()
			{
			return this->listTrunkProviders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListTrunksOfSkillGroupOutcome CCCClient::listTrunksOfSkillGroup(const ListTrunksOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTrunksOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTrunksOfSkillGroupOutcome(ListTrunksOfSkillGroupResult(outcome.result()));
	else
		return ListTrunksOfSkillGroupOutcome(outcome.error());
}

void CCCClient::listTrunksOfSkillGroupAsync(const ListTrunksOfSkillGroupRequest& request, const ListTrunksOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTrunksOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListTrunksOfSkillGroupOutcomeCallable CCCClient::listTrunksOfSkillGroupCallable(const ListTrunksOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTrunksOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->listTrunksOfSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUnreachableContactsOutcome CCCClient::listUnreachableContacts(const ListUnreachableContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUnreachableContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUnreachableContactsOutcome(ListUnreachableContactsResult(outcome.result()));
	else
		return ListUnreachableContactsOutcome(outcome.error());
}

void CCCClient::listUnreachableContactsAsync(const ListUnreachableContactsRequest& request, const ListUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUnreachableContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUnreachableContactsOutcomeCallable CCCClient::listUnreachableContactsCallable(const ListUnreachableContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUnreachableContactsOutcome()>>(
			[this, request]()
			{
			return this->listUnreachableContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUsersOutcome CCCClient::listUsers(const ListUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOutcome(ListUsersResult(outcome.result()));
	else
		return ListUsersOutcome(outcome.error());
}

void CCCClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUsersOutcomeCallable CCCClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUsersOfSkillGroupOutcome CCCClient::listUsersOfSkillGroup(const ListUsersOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOfSkillGroupOutcome(ListUsersOfSkillGroupResult(outcome.result()));
	else
		return ListUsersOfSkillGroupOutcome(outcome.error());
}

void CCCClient::listUsersOfSkillGroupAsync(const ListUsersOfSkillGroupRequest& request, const ListUsersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUsersOfSkillGroupOutcomeCallable CCCClient::listUsersOfSkillGroupCallable(const ListUsersOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->listUsersOfSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListVoiceAppraiseOutcome CCCClient::listVoiceAppraise(const ListVoiceAppraiseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVoiceAppraiseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVoiceAppraiseOutcome(ListVoiceAppraiseResult(outcome.result()));
	else
		return ListVoiceAppraiseOutcome(outcome.error());
}

void CCCClient::listVoiceAppraiseAsync(const ListVoiceAppraiseRequest& request, const ListVoiceAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVoiceAppraise(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListVoiceAppraiseOutcomeCallable CCCClient::listVoiceAppraiseCallable(const ListVoiceAppraiseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVoiceAppraiseOutcome()>>(
			[this, request]()
			{
			return this->listVoiceAppraise(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyAgentDeviceOutcome CCCClient::modifyAgentDevice(const ModifyAgentDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAgentDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAgentDeviceOutcome(ModifyAgentDeviceResult(outcome.result()));
	else
		return ModifyAgentDeviceOutcome(outcome.error());
}

void CCCClient::modifyAgentDeviceAsync(const ModifyAgentDeviceRequest& request, const ModifyAgentDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAgentDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyAgentDeviceOutcomeCallable CCCClient::modifyAgentDeviceCallable(const ModifyAgentDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAgentDeviceOutcome()>>(
			[this, request]()
			{
			return this->modifyAgentDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyCabInstanceOutcome CCCClient::modifyCabInstance(const ModifyCabInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCabInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCabInstanceOutcome(ModifyCabInstanceResult(outcome.result()));
	else
		return ModifyCabInstanceOutcome(outcome.error());
}

void CCCClient::modifyCabInstanceAsync(const ModifyCabInstanceRequest& request, const ModifyCabInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCabInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyCabInstanceOutcomeCallable CCCClient::modifyCabInstanceCallable(const ModifyCabInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCabInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyCabInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyPhoneNumberOutcome CCCClient::modifyPhoneNumber(const ModifyPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPhoneNumberOutcome(ModifyPhoneNumberResult(outcome.result()));
	else
		return ModifyPhoneNumberOutcome(outcome.error());
}

void CCCClient::modifyPhoneNumberAsync(const ModifyPhoneNumberRequest& request, const ModifyPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyPhoneNumberOutcomeCallable CCCClient::modifyPhoneNumberCallable(const ModifyPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->modifyPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyPhoneTagsOutcome CCCClient::modifyPhoneTags(const ModifyPhoneTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPhoneTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPhoneTagsOutcome(ModifyPhoneTagsResult(outcome.result()));
	else
		return ModifyPhoneTagsOutcome(outcome.error());
}

void CCCClient::modifyPhoneTagsAsync(const ModifyPhoneTagsRequest& request, const ModifyPhoneTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhoneTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyPhoneTagsOutcomeCallable CCCClient::modifyPhoneTagsCallable(const ModifyPhoneTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhoneTagsOutcome()>>(
			[this, request]()
			{
			return this->modifyPhoneTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyPrimaryTrunksOfSkillGroupOutcome CCCClient::modifyPrimaryTrunksOfSkillGroup(const ModifyPrimaryTrunksOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPrimaryTrunksOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPrimaryTrunksOfSkillGroupOutcome(ModifyPrimaryTrunksOfSkillGroupResult(outcome.result()));
	else
		return ModifyPrimaryTrunksOfSkillGroupOutcome(outcome.error());
}

void CCCClient::modifyPrimaryTrunksOfSkillGroupAsync(const ModifyPrimaryTrunksOfSkillGroupRequest& request, const ModifyPrimaryTrunksOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPrimaryTrunksOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyPrimaryTrunksOfSkillGroupOutcomeCallable CCCClient::modifyPrimaryTrunksOfSkillGroupCallable(const ModifyPrimaryTrunksOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPrimaryTrunksOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyPrimaryTrunksOfSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyPrivacyNumberCallDetailOutcome CCCClient::modifyPrivacyNumberCallDetail(const ModifyPrivacyNumberCallDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPrivacyNumberCallDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPrivacyNumberCallDetailOutcome(ModifyPrivacyNumberCallDetailResult(outcome.result()));
	else
		return ModifyPrivacyNumberCallDetailOutcome(outcome.error());
}

void CCCClient::modifyPrivacyNumberCallDetailAsync(const ModifyPrivacyNumberCallDetailRequest& request, const ModifyPrivacyNumberCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPrivacyNumberCallDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyPrivacyNumberCallDetailOutcomeCallable CCCClient::modifyPrivacyNumberCallDetailCallable(const ModifyPrivacyNumberCallDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPrivacyNumberCallDetailOutcome()>>(
			[this, request]()
			{
			return this->modifyPrivacyNumberCallDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyScenarioOutcome CCCClient::modifyScenario(const ModifyScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScenarioOutcome(ModifyScenarioResult(outcome.result()));
	else
		return ModifyScenarioOutcome(outcome.error());
}

void CCCClient::modifyScenarioAsync(const ModifyScenarioRequest& request, const ModifyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyScenarioOutcomeCallable CCCClient::modifyScenarioCallable(const ModifyScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScenarioOutcome()>>(
			[this, request]()
			{
			return this->modifyScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySkillGroupOutcome CCCClient::modifySkillGroup(const ModifySkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySkillGroupOutcome(ModifySkillGroupResult(outcome.result()));
	else
		return ModifySkillGroupOutcome(outcome.error());
}

void CCCClient::modifySkillGroupAsync(const ModifySkillGroupRequest& request, const ModifySkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySkillGroupOutcomeCallable CCCClient::modifySkillGroupCallable(const ModifySkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySkillGroupOutcome()>>(
			[this, request]()
			{
			return this->modifySkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySkillGroupOfUserOutcome CCCClient::modifySkillGroupOfUser(const ModifySkillGroupOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySkillGroupOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySkillGroupOfUserOutcome(ModifySkillGroupOfUserResult(outcome.result()));
	else
		return ModifySkillGroupOfUserOutcome(outcome.error());
}

void CCCClient::modifySkillGroupOfUserAsync(const ModifySkillGroupOfUserRequest& request, const ModifySkillGroupOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySkillGroupOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySkillGroupOfUserOutcomeCallable CCCClient::modifySkillGroupOfUserCallable(const ModifySkillGroupOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySkillGroupOfUserOutcome()>>(
			[this, request]()
			{
			return this->modifySkillGroupOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySkillGroupOutboundNumbersOutcome CCCClient::modifySkillGroupOutboundNumbers(const ModifySkillGroupOutboundNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySkillGroupOutboundNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySkillGroupOutboundNumbersOutcome(ModifySkillGroupOutboundNumbersResult(outcome.result()));
	else
		return ModifySkillGroupOutboundNumbersOutcome(outcome.error());
}

void CCCClient::modifySkillGroupOutboundNumbersAsync(const ModifySkillGroupOutboundNumbersRequest& request, const ModifySkillGroupOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySkillGroupOutboundNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySkillGroupOutboundNumbersOutcomeCallable CCCClient::modifySkillGroupOutboundNumbersCallable(const ModifySkillGroupOutboundNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySkillGroupOutboundNumbersOutcome()>>(
			[this, request]()
			{
			return this->modifySkillGroupOutboundNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySurveyOutcome CCCClient::modifySurvey(const ModifySurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySurveyOutcome(ModifySurveyResult(outcome.result()));
	else
		return ModifySurveyOutcome(outcome.error());
}

void CCCClient::modifySurveyAsync(const ModifySurveyRequest& request, const ModifySurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySurveyOutcomeCallable CCCClient::modifySurveyCallable(const ModifySurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySurveyOutcome()>>(
			[this, request]()
			{
			return this->modifySurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyUserOutcome CCCClient::modifyUser(const ModifyUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserOutcome(ModifyUserResult(outcome.result()));
	else
		return ModifyUserOutcome(outcome.error());
}

void CCCClient::modifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyUserOutcomeCallable CCCClient::modifyUserCallable(const ModifyUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
			[this, request]()
			{
			return this->modifyUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PickGlobalOutboundNumbersOutcome CCCClient::pickGlobalOutboundNumbers(const PickGlobalOutboundNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PickGlobalOutboundNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PickGlobalOutboundNumbersOutcome(PickGlobalOutboundNumbersResult(outcome.result()));
	else
		return PickGlobalOutboundNumbersOutcome(outcome.error());
}

void CCCClient::pickGlobalOutboundNumbersAsync(const PickGlobalOutboundNumbersRequest& request, const PickGlobalOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pickGlobalOutboundNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PickGlobalOutboundNumbersOutcomeCallable CCCClient::pickGlobalOutboundNumbersCallable(const PickGlobalOutboundNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PickGlobalOutboundNumbersOutcome()>>(
			[this, request]()
			{
			return this->pickGlobalOutboundNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PickLocalNumberOutcome CCCClient::pickLocalNumber(const PickLocalNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PickLocalNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PickLocalNumberOutcome(PickLocalNumberResult(outcome.result()));
	else
		return PickLocalNumberOutcome(outcome.error());
}

void CCCClient::pickLocalNumberAsync(const PickLocalNumberRequest& request, const PickLocalNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pickLocalNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PickLocalNumberOutcomeCallable CCCClient::pickLocalNumberCallable(const PickLocalNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PickLocalNumberOutcome()>>(
			[this, request]()
			{
			return this->pickLocalNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PickOutboundNumbersOutcome CCCClient::pickOutboundNumbers(const PickOutboundNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PickOutboundNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PickOutboundNumbersOutcome(PickOutboundNumbersResult(outcome.result()));
	else
		return PickOutboundNumbersOutcome(outcome.error());
}

void CCCClient::pickOutboundNumbersAsync(const PickOutboundNumbersRequest& request, const PickOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pickOutboundNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PickOutboundNumbersOutcomeCallable CCCClient::pickOutboundNumbersCallable(const PickOutboundNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PickOutboundNumbersOutcome()>>(
			[this, request]()
			{
			return this->pickOutboundNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PublishContactFlowVersionOutcome CCCClient::publishContactFlowVersion(const PublishContactFlowVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishContactFlowVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishContactFlowVersionOutcome(PublishContactFlowVersionResult(outcome.result()));
	else
		return PublishContactFlowVersionOutcome(outcome.error());
}

void CCCClient::publishContactFlowVersionAsync(const PublishContactFlowVersionRequest& request, const PublishContactFlowVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishContactFlowVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PublishContactFlowVersionOutcomeCallable CCCClient::publishContactFlowVersionCallable(const PublishContactFlowVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishContactFlowVersionOutcome()>>(
			[this, request]()
			{
			return this->publishContactFlowVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PublishPredictiveJobGroupOutcome CCCClient::publishPredictiveJobGroup(const PublishPredictiveJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishPredictiveJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishPredictiveJobGroupOutcome(PublishPredictiveJobGroupResult(outcome.result()));
	else
		return PublishPredictiveJobGroupOutcome(outcome.error());
}

void CCCClient::publishPredictiveJobGroupAsync(const PublishPredictiveJobGroupRequest& request, const PublishPredictiveJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishPredictiveJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PublishPredictiveJobGroupOutcomeCallable CCCClient::publishPredictiveJobGroupCallable(const PublishPredictiveJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishPredictiveJobGroupOutcome()>>(
			[this, request]()
			{
			return this->publishPredictiveJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PublishSurveyOutcome CCCClient::publishSurvey(const PublishSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishSurveyOutcome(PublishSurveyResult(outcome.result()));
	else
		return PublishSurveyOutcome(outcome.error());
}

void CCCClient::publishSurveyAsync(const PublishSurveyRequest& request, const PublishSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PublishSurveyOutcomeCallable CCCClient::publishSurveyCallable(const PublishSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishSurveyOutcome()>>(
			[this, request]()
			{
			return this->publishSurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RefreshTokenOutcome CCCClient::refreshToken(const RefreshTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshTokenOutcome(RefreshTokenResult(outcome.result()));
	else
		return RefreshTokenOutcome(outcome.error());
}

void CCCClient::refreshTokenAsync(const RefreshTokenRequest& request, const RefreshTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RefreshTokenOutcomeCallable CCCClient::refreshTokenCallable(const RefreshTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshTokenOutcome()>>(
			[this, request]()
			{
			return this->refreshToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemovePhoneNumberOutcome CCCClient::removePhoneNumber(const RemovePhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePhoneNumberOutcome(RemovePhoneNumberResult(outcome.result()));
	else
		return RemovePhoneNumberOutcome(outcome.error());
}

void CCCClient::removePhoneNumberAsync(const RemovePhoneNumberRequest& request, const RemovePhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemovePhoneNumberOutcomeCallable CCCClient::removePhoneNumberCallable(const RemovePhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->removePhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemoveUsersOutcome CCCClient::removeUsers(const RemoveUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUsersOutcome(RemoveUsersResult(outcome.result()));
	else
		return RemoveUsersOutcome(outcome.error());
}

void CCCClient::removeUsersAsync(const RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemoveUsersOutcomeCallable CCCClient::removeUsersCallable(const RemoveUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUsersOutcome()>>(
			[this, request]()
			{
			return this->removeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemoveUsersFromSkillGroupOutcome CCCClient::removeUsersFromSkillGroup(const RemoveUsersFromSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUsersFromSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUsersFromSkillGroupOutcome(RemoveUsersFromSkillGroupResult(outcome.result()));
	else
		return RemoveUsersFromSkillGroupOutcome(outcome.error());
}

void CCCClient::removeUsersFromSkillGroupAsync(const RemoveUsersFromSkillGroupRequest& request, const RemoveUsersFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUsersFromSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemoveUsersFromSkillGroupOutcomeCallable CCCClient::removeUsersFromSkillGroupCallable(const RemoveUsersFromSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUsersFromSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUsersFromSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RequestLoginInfoOutcome CCCClient::requestLoginInfo(const RequestLoginInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RequestLoginInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestLoginInfoOutcome(RequestLoginInfoResult(outcome.result()));
	else
		return RequestLoginInfoOutcome(outcome.error());
}

void CCCClient::requestLoginInfoAsync(const RequestLoginInfoRequest& request, const RequestLoginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestLoginInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RequestLoginInfoOutcomeCallable CCCClient::requestLoginInfoCallable(const RequestLoginInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestLoginInfoOutcome()>>(
			[this, request]()
			{
			return this->requestLoginInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ResetUserStatusOutcome CCCClient::resetUserStatus(const ResetUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetUserStatusOutcome(ResetUserStatusResult(outcome.result()));
	else
		return ResetUserStatusOutcome(outcome.error());
}

void CCCClient::resetUserStatusAsync(const ResetUserStatusRequest& request, const ResetUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResetUserStatusOutcomeCallable CCCClient::resetUserStatusCallable(const ResetUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetUserStatusOutcome()>>(
			[this, request]()
			{
			return this->resetUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ResumeJobsOutcome CCCClient::resumeJobs(const ResumeJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeJobsOutcome(ResumeJobsResult(outcome.result()));
	else
		return ResumeJobsOutcome(outcome.error());
}

void CCCClient::resumeJobsAsync(const ResumeJobsRequest& request, const ResumeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResumeJobsOutcomeCallable CCCClient::resumeJobsCallable(const ResumeJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeJobsOutcome()>>(
			[this, request]()
			{
			return this->resumeJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ResumePredictiveJobsOutcome CCCClient::resumePredictiveJobs(const ResumePredictiveJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumePredictiveJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumePredictiveJobsOutcome(ResumePredictiveJobsResult(outcome.result()));
	else
		return ResumePredictiveJobsOutcome(outcome.error());
}

void CCCClient::resumePredictiveJobsAsync(const ResumePredictiveJobsRequest& request, const ResumePredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumePredictiveJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResumePredictiveJobsOutcomeCallable CCCClient::resumePredictiveJobsCallable(const ResumePredictiveJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumePredictiveJobsOutcome()>>(
			[this, request]()
			{
			return this->resumePredictiveJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SaveWebRTCStatsOutcome CCCClient::saveWebRTCStats(const SaveWebRTCStatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveWebRTCStatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveWebRTCStatsOutcome(SaveWebRTCStatsResult(outcome.result()));
	else
		return SaveWebRTCStatsOutcome(outcome.error());
}

void CCCClient::saveWebRTCStatsAsync(const SaveWebRTCStatsRequest& request, const SaveWebRTCStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveWebRTCStats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SaveWebRTCStatsOutcomeCallable CCCClient::saveWebRTCStatsCallable(const SaveWebRTCStatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveWebRTCStatsOutcome()>>(
			[this, request]()
			{
			return this->saveWebRTCStats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SendPredefinedShortMessageOutcome CCCClient::sendPredefinedShortMessage(const SendPredefinedShortMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendPredefinedShortMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendPredefinedShortMessageOutcome(SendPredefinedShortMessageResult(outcome.result()));
	else
		return SendPredefinedShortMessageOutcome(outcome.error());
}

void CCCClient::sendPredefinedShortMessageAsync(const SendPredefinedShortMessageRequest& request, const SendPredefinedShortMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendPredefinedShortMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SendPredefinedShortMessageOutcomeCallable CCCClient::sendPredefinedShortMessageCallable(const SendPredefinedShortMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendPredefinedShortMessageOutcome()>>(
			[this, request]()
			{
			return this->sendPredefinedShortMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartBack2BackCallOutcome CCCClient::startBack2BackCall(const StartBack2BackCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBack2BackCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBack2BackCallOutcome(StartBack2BackCallResult(outcome.result()));
	else
		return StartBack2BackCallOutcome(outcome.error());
}

void CCCClient::startBack2BackCallAsync(const StartBack2BackCallRequest& request, const StartBack2BackCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBack2BackCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartBack2BackCallOutcomeCallable CCCClient::startBack2BackCallCallable(const StartBack2BackCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBack2BackCallOutcome()>>(
			[this, request]()
			{
			return this->startBack2BackCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartJobOutcome CCCClient::startJob(const StartJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartJobOutcome(StartJobResult(outcome.result()));
	else
		return StartJobOutcome(outcome.error());
}

void CCCClient::startJobAsync(const StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartJobOutcomeCallable CCCClient::startJobCallable(const StartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartJobOutcome()>>(
			[this, request]()
			{
			return this->startJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SubmitBatchJobsOutcome CCCClient::submitBatchJobs(const SubmitBatchJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitBatchJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitBatchJobsOutcome(SubmitBatchJobsResult(outcome.result()));
	else
		return SubmitBatchJobsOutcome(outcome.error());
}

void CCCClient::submitBatchJobsAsync(const SubmitBatchJobsRequest& request, const SubmitBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SubmitBatchJobsOutcomeCallable CCCClient::submitBatchJobsCallable(const SubmitBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->submitBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SubmitCabRecordingOutcome CCCClient::submitCabRecording(const SubmitCabRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCabRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCabRecordingOutcome(SubmitCabRecordingResult(outcome.result()));
	else
		return SubmitCabRecordingOutcome(outcome.error());
}

void CCCClient::submitCabRecordingAsync(const SubmitCabRecordingRequest& request, const SubmitCabRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCabRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SubmitCabRecordingOutcomeCallable CCCClient::submitCabRecordingCallable(const SubmitCabRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCabRecordingOutcome()>>(
			[this, request]()
			{
			return this->submitCabRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SuspendJobsOutcome CCCClient::suspendJobs(const SuspendJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendJobsOutcome(SuspendJobsResult(outcome.result()));
	else
		return SuspendJobsOutcome(outcome.error());
}

void CCCClient::suspendJobsAsync(const SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SuspendJobsOutcomeCallable CCCClient::suspendJobsCallable(const SuspendJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendJobsOutcome()>>(
			[this, request]()
			{
			return this->suspendJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SuspendPredictiveJobsOutcome CCCClient::suspendPredictiveJobs(const SuspendPredictiveJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendPredictiveJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendPredictiveJobsOutcome(SuspendPredictiveJobsResult(outcome.result()));
	else
		return SuspendPredictiveJobsOutcome(outcome.error());
}

void CCCClient::suspendPredictiveJobsAsync(const SuspendPredictiveJobsRequest& request, const SuspendPredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendPredictiveJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SuspendPredictiveJobsOutcomeCallable CCCClient::suspendPredictiveJobsCallable(const SuspendPredictiveJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendPredictiveJobsOutcome()>>(
			[this, request]()
			{
			return this->suspendPredictiveJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::TaskPreparingOutcome CCCClient::taskPreparing(const TaskPreparingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskPreparingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskPreparingOutcome(TaskPreparingResult(outcome.result()));
	else
		return TaskPreparingOutcome(outcome.error());
}

void CCCClient::taskPreparingAsync(const TaskPreparingRequest& request, const TaskPreparingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskPreparing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::TaskPreparingOutcomeCallable CCCClient::taskPreparingCallable(const TaskPreparingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskPreparingOutcome()>>(
			[this, request]()
			{
			return this->taskPreparing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

