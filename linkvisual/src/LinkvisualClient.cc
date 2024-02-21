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

#include <alibabacloud/linkvisual/LinkvisualClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Linkvisual;
using namespace AlibabaCloud::Linkvisual::Model;

namespace
{
	const std::string SERVICE_NAME = "Linkvisual";
}

LinkvisualClient::LinkvisualClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Linkvisual");
}

LinkvisualClient::LinkvisualClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Linkvisual");
}

LinkvisualClient::LinkvisualClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "Linkvisual");
}

LinkvisualClient::~LinkvisualClient()
{}

LinkvisualClient::AddEventRecordPlanDeviceOutcome LinkvisualClient::addEventRecordPlanDevice(const AddEventRecordPlanDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEventRecordPlanDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEventRecordPlanDeviceOutcome(AddEventRecordPlanDeviceResult(outcome.result()));
	else
		return AddEventRecordPlanDeviceOutcome(outcome.error());
}

void LinkvisualClient::addEventRecordPlanDeviceAsync(const AddEventRecordPlanDeviceRequest& request, const AddEventRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEventRecordPlanDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddEventRecordPlanDeviceOutcomeCallable LinkvisualClient::addEventRecordPlanDeviceCallable(const AddEventRecordPlanDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEventRecordPlanDeviceOutcome()>>(
			[this, request]()
			{
			return this->addEventRecordPlanDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceDeviceGroupOutcome LinkvisualClient::addFaceDeviceGroup(const AddFaceDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceDeviceGroupOutcome(AddFaceDeviceGroupResult(outcome.result()));
	else
		return AddFaceDeviceGroupOutcome(outcome.error());
}

void LinkvisualClient::addFaceDeviceGroupAsync(const AddFaceDeviceGroupRequest& request, const AddFaceDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceDeviceGroupOutcomeCallable LinkvisualClient::addFaceDeviceGroupCallable(const AddFaceDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->addFaceDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceDeviceToDeviceGroupOutcome LinkvisualClient::addFaceDeviceToDeviceGroup(const AddFaceDeviceToDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceDeviceToDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceDeviceToDeviceGroupOutcome(AddFaceDeviceToDeviceGroupResult(outcome.result()));
	else
		return AddFaceDeviceToDeviceGroupOutcome(outcome.error());
}

void LinkvisualClient::addFaceDeviceToDeviceGroupAsync(const AddFaceDeviceToDeviceGroupRequest& request, const AddFaceDeviceToDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceDeviceToDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceDeviceToDeviceGroupOutcomeCallable LinkvisualClient::addFaceDeviceToDeviceGroupCallable(const AddFaceDeviceToDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceDeviceToDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->addFaceDeviceToDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceUserOutcome LinkvisualClient::addFaceUser(const AddFaceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceUserOutcome(AddFaceUserResult(outcome.result()));
	else
		return AddFaceUserOutcome(outcome.error());
}

void LinkvisualClient::addFaceUserAsync(const AddFaceUserRequest& request, const AddFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceUserOutcomeCallable LinkvisualClient::addFaceUserCallable(const AddFaceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceUserOutcome()>>(
			[this, request]()
			{
			return this->addFaceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceUserGroupOutcome LinkvisualClient::addFaceUserGroup(const AddFaceUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceUserGroupOutcome(AddFaceUserGroupResult(outcome.result()));
	else
		return AddFaceUserGroupOutcome(outcome.error());
}

void LinkvisualClient::addFaceUserGroupAsync(const AddFaceUserGroupRequest& request, const AddFaceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceUserGroupOutcomeCallable LinkvisualClient::addFaceUserGroupCallable(const AddFaceUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceUserGroupOutcome()>>(
			[this, request]()
			{
			return this->addFaceUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceUserGroupAndDeviceGroupRelationOutcome LinkvisualClient::addFaceUserGroupAndDeviceGroupRelation(const AddFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceUserGroupAndDeviceGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceUserGroupAndDeviceGroupRelationOutcome(AddFaceUserGroupAndDeviceGroupRelationResult(outcome.result()));
	else
		return AddFaceUserGroupAndDeviceGroupRelationOutcome(outcome.error());
}

void LinkvisualClient::addFaceUserGroupAndDeviceGroupRelationAsync(const AddFaceUserGroupAndDeviceGroupRelationRequest& request, const AddFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceUserGroupAndDeviceGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceUserGroupAndDeviceGroupRelationOutcomeCallable LinkvisualClient::addFaceUserGroupAndDeviceGroupRelationCallable(const AddFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceUserGroupAndDeviceGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->addFaceUserGroupAndDeviceGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceUserPictureOutcome LinkvisualClient::addFaceUserPicture(const AddFaceUserPictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceUserPictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceUserPictureOutcome(AddFaceUserPictureResult(outcome.result()));
	else
		return AddFaceUserPictureOutcome(outcome.error());
}

void LinkvisualClient::addFaceUserPictureAsync(const AddFaceUserPictureRequest& request, const AddFaceUserPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceUserPicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceUserPictureOutcomeCallable LinkvisualClient::addFaceUserPictureCallable(const AddFaceUserPictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceUserPictureOutcome()>>(
			[this, request]()
			{
			return this->addFaceUserPicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddFaceUserToUserGroupOutcome LinkvisualClient::addFaceUserToUserGroup(const AddFaceUserToUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFaceUserToUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFaceUserToUserGroupOutcome(AddFaceUserToUserGroupResult(outcome.result()));
	else
		return AddFaceUserToUserGroupOutcome(outcome.error());
}

void LinkvisualClient::addFaceUserToUserGroupAsync(const AddFaceUserToUserGroupRequest& request, const AddFaceUserToUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaceUserToUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddFaceUserToUserGroupOutcomeCallable LinkvisualClient::addFaceUserToUserGroupCallable(const AddFaceUserToUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFaceUserToUserGroupOutcome()>>(
			[this, request]()
			{
			return this->addFaceUserToUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::AddRecordPlanDeviceOutcome LinkvisualClient::addRecordPlanDevice(const AddRecordPlanDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRecordPlanDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRecordPlanDeviceOutcome(AddRecordPlanDeviceResult(outcome.result()));
	else
		return AddRecordPlanDeviceOutcome(outcome.error());
}

void LinkvisualClient::addRecordPlanDeviceAsync(const AddRecordPlanDeviceRequest& request, const AddRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRecordPlanDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::AddRecordPlanDeviceOutcomeCallable LinkvisualClient::addRecordPlanDeviceCallable(const AddRecordPlanDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRecordPlanDeviceOutcome()>>(
			[this, request]()
			{
			return this->addRecordPlanDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::BatchQueryVisionDeviceInfoOutcome LinkvisualClient::batchQueryVisionDeviceInfo(const BatchQueryVisionDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchQueryVisionDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchQueryVisionDeviceInfoOutcome(BatchQueryVisionDeviceInfoResult(outcome.result()));
	else
		return BatchQueryVisionDeviceInfoOutcome(outcome.error());
}

void LinkvisualClient::batchQueryVisionDeviceInfoAsync(const BatchQueryVisionDeviceInfoRequest& request, const BatchQueryVisionDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchQueryVisionDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::BatchQueryVisionDeviceInfoOutcomeCallable LinkvisualClient::batchQueryVisionDeviceInfoCallable(const BatchQueryVisionDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchQueryVisionDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->batchQueryVisionDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::BindPictureSearchAppWithDevicesOutcome LinkvisualClient::bindPictureSearchAppWithDevices(const BindPictureSearchAppWithDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindPictureSearchAppWithDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindPictureSearchAppWithDevicesOutcome(BindPictureSearchAppWithDevicesResult(outcome.result()));
	else
		return BindPictureSearchAppWithDevicesOutcome(outcome.error());
}

void LinkvisualClient::bindPictureSearchAppWithDevicesAsync(const BindPictureSearchAppWithDevicesRequest& request, const BindPictureSearchAppWithDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindPictureSearchAppWithDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::BindPictureSearchAppWithDevicesOutcomeCallable LinkvisualClient::bindPictureSearchAppWithDevicesCallable(const BindPictureSearchAppWithDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindPictureSearchAppWithDevicesOutcome()>>(
			[this, request]()
			{
			return this->bindPictureSearchAppWithDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CheckFaceUserDoExistOnDeviceOutcome LinkvisualClient::checkFaceUserDoExistOnDevice(const CheckFaceUserDoExistOnDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckFaceUserDoExistOnDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckFaceUserDoExistOnDeviceOutcome(CheckFaceUserDoExistOnDeviceResult(outcome.result()));
	else
		return CheckFaceUserDoExistOnDeviceOutcome(outcome.error());
}

void LinkvisualClient::checkFaceUserDoExistOnDeviceAsync(const CheckFaceUserDoExistOnDeviceRequest& request, const CheckFaceUserDoExistOnDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkFaceUserDoExistOnDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CheckFaceUserDoExistOnDeviceOutcomeCallable LinkvisualClient::checkFaceUserDoExistOnDeviceCallable(const CheckFaceUserDoExistOnDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckFaceUserDoExistOnDeviceOutcome()>>(
			[this, request]()
			{
			return this->checkFaceUserDoExistOnDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::ClearFaceDeviceDBOutcome LinkvisualClient::clearFaceDeviceDB(const ClearFaceDeviceDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearFaceDeviceDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearFaceDeviceDBOutcome(ClearFaceDeviceDBResult(outcome.result()));
	else
		return ClearFaceDeviceDBOutcome(outcome.error());
}

void LinkvisualClient::clearFaceDeviceDBAsync(const ClearFaceDeviceDBRequest& request, const ClearFaceDeviceDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearFaceDeviceDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::ClearFaceDeviceDBOutcomeCallable LinkvisualClient::clearFaceDeviceDBCallable(const ClearFaceDeviceDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearFaceDeviceDBOutcome()>>(
			[this, request]()
			{
			return this->clearFaceDeviceDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateEventRecordPlanOutcome LinkvisualClient::createEventRecordPlan(const CreateEventRecordPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEventRecordPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEventRecordPlanOutcome(CreateEventRecordPlanResult(outcome.result()));
	else
		return CreateEventRecordPlanOutcome(outcome.error());
}

void LinkvisualClient::createEventRecordPlanAsync(const CreateEventRecordPlanRequest& request, const CreateEventRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEventRecordPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateEventRecordPlanOutcomeCallable LinkvisualClient::createEventRecordPlanCallable(const CreateEventRecordPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEventRecordPlanOutcome()>>(
			[this, request]()
			{
			return this->createEventRecordPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateGbDeviceOutcome LinkvisualClient::createGbDevice(const CreateGbDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGbDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGbDeviceOutcome(CreateGbDeviceResult(outcome.result()));
	else
		return CreateGbDeviceOutcome(outcome.error());
}

void LinkvisualClient::createGbDeviceAsync(const CreateGbDeviceRequest& request, const CreateGbDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGbDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateGbDeviceOutcomeCallable LinkvisualClient::createGbDeviceCallable(const CreateGbDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGbDeviceOutcome()>>(
			[this, request]()
			{
			return this->createGbDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateLocalFileUploadJobOutcome LinkvisualClient::createLocalFileUploadJob(const CreateLocalFileUploadJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLocalFileUploadJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLocalFileUploadJobOutcome(CreateLocalFileUploadJobResult(outcome.result()));
	else
		return CreateLocalFileUploadJobOutcome(outcome.error());
}

void LinkvisualClient::createLocalFileUploadJobAsync(const CreateLocalFileUploadJobRequest& request, const CreateLocalFileUploadJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLocalFileUploadJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateLocalFileUploadJobOutcomeCallable LinkvisualClient::createLocalFileUploadJobCallable(const CreateLocalFileUploadJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLocalFileUploadJobOutcome()>>(
			[this, request]()
			{
			return this->createLocalFileUploadJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateLocalRecordDownloadByTimeJobOutcome LinkvisualClient::createLocalRecordDownloadByTimeJob(const CreateLocalRecordDownloadByTimeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLocalRecordDownloadByTimeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLocalRecordDownloadByTimeJobOutcome(CreateLocalRecordDownloadByTimeJobResult(outcome.result()));
	else
		return CreateLocalRecordDownloadByTimeJobOutcome(outcome.error());
}

void LinkvisualClient::createLocalRecordDownloadByTimeJobAsync(const CreateLocalRecordDownloadByTimeJobRequest& request, const CreateLocalRecordDownloadByTimeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLocalRecordDownloadByTimeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateLocalRecordDownloadByTimeJobOutcomeCallable LinkvisualClient::createLocalRecordDownloadByTimeJobCallable(const CreateLocalRecordDownloadByTimeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLocalRecordDownloadByTimeJobOutcome()>>(
			[this, request]()
			{
			return this->createLocalRecordDownloadByTimeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreatePictureSearchAppOutcome LinkvisualClient::createPictureSearchApp(const CreatePictureSearchAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePictureSearchAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePictureSearchAppOutcome(CreatePictureSearchAppResult(outcome.result()));
	else
		return CreatePictureSearchAppOutcome(outcome.error());
}

void LinkvisualClient::createPictureSearchAppAsync(const CreatePictureSearchAppRequest& request, const CreatePictureSearchAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPictureSearchApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreatePictureSearchAppOutcomeCallable LinkvisualClient::createPictureSearchAppCallable(const CreatePictureSearchAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePictureSearchAppOutcome()>>(
			[this, request]()
			{
			return this->createPictureSearchApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreatePictureSearchJobOutcome LinkvisualClient::createPictureSearchJob(const CreatePictureSearchJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePictureSearchJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePictureSearchJobOutcome(CreatePictureSearchJobResult(outcome.result()));
	else
		return CreatePictureSearchJobOutcome(outcome.error());
}

void LinkvisualClient::createPictureSearchJobAsync(const CreatePictureSearchJobRequest& request, const CreatePictureSearchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPictureSearchJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreatePictureSearchJobOutcomeCallable LinkvisualClient::createPictureSearchJobCallable(const CreatePictureSearchJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePictureSearchJobOutcome()>>(
			[this, request]()
			{
			return this->createPictureSearchJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateRecordDownloadByTimeJobOutcome LinkvisualClient::createRecordDownloadByTimeJob(const CreateRecordDownloadByTimeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRecordDownloadByTimeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRecordDownloadByTimeJobOutcome(CreateRecordDownloadByTimeJobResult(outcome.result()));
	else
		return CreateRecordDownloadByTimeJobOutcome(outcome.error());
}

void LinkvisualClient::createRecordDownloadByTimeJobAsync(const CreateRecordDownloadByTimeJobRequest& request, const CreateRecordDownloadByTimeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRecordDownloadByTimeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateRecordDownloadByTimeJobOutcomeCallable LinkvisualClient::createRecordDownloadByTimeJobCallable(const CreateRecordDownloadByTimeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRecordDownloadByTimeJobOutcome()>>(
			[this, request]()
			{
			return this->createRecordDownloadByTimeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateRecordPlanOutcome LinkvisualClient::createRecordPlan(const CreateRecordPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRecordPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRecordPlanOutcome(CreateRecordPlanResult(outcome.result()));
	else
		return CreateRecordPlanOutcome(outcome.error());
}

void LinkvisualClient::createRecordPlanAsync(const CreateRecordPlanRequest& request, const CreateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRecordPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateRecordPlanOutcomeCallable LinkvisualClient::createRecordPlanCallable(const CreateRecordPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRecordPlanOutcome()>>(
			[this, request]()
			{
			return this->createRecordPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateRtmpDeviceOutcome LinkvisualClient::createRtmpDevice(const CreateRtmpDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRtmpDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRtmpDeviceOutcome(CreateRtmpDeviceResult(outcome.result()));
	else
		return CreateRtmpDeviceOutcome(outcome.error());
}

void LinkvisualClient::createRtmpDeviceAsync(const CreateRtmpDeviceRequest& request, const CreateRtmpDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRtmpDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateRtmpDeviceOutcomeCallable LinkvisualClient::createRtmpDeviceCallable(const CreateRtmpDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRtmpDeviceOutcome()>>(
			[this, request]()
			{
			return this->createRtmpDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateStreamPushJobOutcome LinkvisualClient::createStreamPushJob(const CreateStreamPushJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStreamPushJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStreamPushJobOutcome(CreateStreamPushJobResult(outcome.result()));
	else
		return CreateStreamPushJobOutcome(outcome.error());
}

void LinkvisualClient::createStreamPushJobAsync(const CreateStreamPushJobRequest& request, const CreateStreamPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStreamPushJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateStreamPushJobOutcomeCallable LinkvisualClient::createStreamPushJobCallable(const CreateStreamPushJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStreamPushJobOutcome()>>(
			[this, request]()
			{
			return this->createStreamPushJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateStreamSnapshotJobOutcome LinkvisualClient::createStreamSnapshotJob(const CreateStreamSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStreamSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStreamSnapshotJobOutcome(CreateStreamSnapshotJobResult(outcome.result()));
	else
		return CreateStreamSnapshotJobOutcome(outcome.error());
}

void LinkvisualClient::createStreamSnapshotJobAsync(const CreateStreamSnapshotJobRequest& request, const CreateStreamSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStreamSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateStreamSnapshotJobOutcomeCallable LinkvisualClient::createStreamSnapshotJobCallable(const CreateStreamSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStreamSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->createStreamSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::CreateTimeTemplateOutcome LinkvisualClient::createTimeTemplate(const CreateTimeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTimeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTimeTemplateOutcome(CreateTimeTemplateResult(outcome.result()));
	else
		return CreateTimeTemplateOutcome(outcome.error());
}

void LinkvisualClient::createTimeTemplateAsync(const CreateTimeTemplateRequest& request, const CreateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTimeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::CreateTimeTemplateOutcomeCallable LinkvisualClient::createTimeTemplateCallable(const CreateTimeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTimeTemplateOutcome()>>(
			[this, request]()
			{
			return this->createTimeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteEventRecordPlanOutcome LinkvisualClient::deleteEventRecordPlan(const DeleteEventRecordPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventRecordPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventRecordPlanOutcome(DeleteEventRecordPlanResult(outcome.result()));
	else
		return DeleteEventRecordPlanOutcome(outcome.error());
}

void LinkvisualClient::deleteEventRecordPlanAsync(const DeleteEventRecordPlanRequest& request, const DeleteEventRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventRecordPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteEventRecordPlanOutcomeCallable LinkvisualClient::deleteEventRecordPlanCallable(const DeleteEventRecordPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventRecordPlanOutcome()>>(
			[this, request]()
			{
			return this->deleteEventRecordPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteEventRecordPlanDeviceOutcome LinkvisualClient::deleteEventRecordPlanDevice(const DeleteEventRecordPlanDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventRecordPlanDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventRecordPlanDeviceOutcome(DeleteEventRecordPlanDeviceResult(outcome.result()));
	else
		return DeleteEventRecordPlanDeviceOutcome(outcome.error());
}

void LinkvisualClient::deleteEventRecordPlanDeviceAsync(const DeleteEventRecordPlanDeviceRequest& request, const DeleteEventRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventRecordPlanDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteEventRecordPlanDeviceOutcomeCallable LinkvisualClient::deleteEventRecordPlanDeviceCallable(const DeleteEventRecordPlanDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventRecordPlanDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteEventRecordPlanDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteFaceDeviceGroupOutcome LinkvisualClient::deleteFaceDeviceGroup(const DeleteFaceDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceDeviceGroupOutcome(DeleteFaceDeviceGroupResult(outcome.result()));
	else
		return DeleteFaceDeviceGroupOutcome(outcome.error());
}

void LinkvisualClient::deleteFaceDeviceGroupAsync(const DeleteFaceDeviceGroupRequest& request, const DeleteFaceDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteFaceDeviceGroupOutcomeCallable LinkvisualClient::deleteFaceDeviceGroupCallable(const DeleteFaceDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteFaceUserOutcome LinkvisualClient::deleteFaceUser(const DeleteFaceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceUserOutcome(DeleteFaceUserResult(outcome.result()));
	else
		return DeleteFaceUserOutcome(outcome.error());
}

void LinkvisualClient::deleteFaceUserAsync(const DeleteFaceUserRequest& request, const DeleteFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteFaceUserOutcomeCallable LinkvisualClient::deleteFaceUserCallable(const DeleteFaceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceUserOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteFaceUserGroupOutcome LinkvisualClient::deleteFaceUserGroup(const DeleteFaceUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceUserGroupOutcome(DeleteFaceUserGroupResult(outcome.result()));
	else
		return DeleteFaceUserGroupOutcome(outcome.error());
}

void LinkvisualClient::deleteFaceUserGroupAsync(const DeleteFaceUserGroupRequest& request, const DeleteFaceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteFaceUserGroupOutcomeCallable LinkvisualClient::deleteFaceUserGroupCallable(const DeleteFaceUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceUserGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteFaceUserGroupAndDeviceGroupRelationOutcome LinkvisualClient::deleteFaceUserGroupAndDeviceGroupRelation(const DeleteFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceUserGroupAndDeviceGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceUserGroupAndDeviceGroupRelationOutcome(DeleteFaceUserGroupAndDeviceGroupRelationResult(outcome.result()));
	else
		return DeleteFaceUserGroupAndDeviceGroupRelationOutcome(outcome.error());
}

void LinkvisualClient::deleteFaceUserGroupAndDeviceGroupRelationAsync(const DeleteFaceUserGroupAndDeviceGroupRelationRequest& request, const DeleteFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceUserGroupAndDeviceGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteFaceUserGroupAndDeviceGroupRelationOutcomeCallable LinkvisualClient::deleteFaceUserGroupAndDeviceGroupRelationCallable(const DeleteFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceUserGroupAndDeviceGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceUserGroupAndDeviceGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteFaceUserPictureOutcome LinkvisualClient::deleteFaceUserPicture(const DeleteFaceUserPictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFaceUserPictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFaceUserPictureOutcome(DeleteFaceUserPictureResult(outcome.result()));
	else
		return DeleteFaceUserPictureOutcome(outcome.error());
}

void LinkvisualClient::deleteFaceUserPictureAsync(const DeleteFaceUserPictureRequest& request, const DeleteFaceUserPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaceUserPicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteFaceUserPictureOutcomeCallable LinkvisualClient::deleteFaceUserPictureCallable(const DeleteFaceUserPictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFaceUserPictureOutcome()>>(
			[this, request]()
			{
			return this->deleteFaceUserPicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteGbDeviceOutcome LinkvisualClient::deleteGbDevice(const DeleteGbDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGbDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGbDeviceOutcome(DeleteGbDeviceResult(outcome.result()));
	else
		return DeleteGbDeviceOutcome(outcome.error());
}

void LinkvisualClient::deleteGbDeviceAsync(const DeleteGbDeviceRequest& request, const DeleteGbDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGbDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteGbDeviceOutcomeCallable LinkvisualClient::deleteGbDeviceCallable(const DeleteGbDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGbDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteGbDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteLocalFileUploadJobOutcome LinkvisualClient::deleteLocalFileUploadJob(const DeleteLocalFileUploadJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLocalFileUploadJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLocalFileUploadJobOutcome(DeleteLocalFileUploadJobResult(outcome.result()));
	else
		return DeleteLocalFileUploadJobOutcome(outcome.error());
}

void LinkvisualClient::deleteLocalFileUploadJobAsync(const DeleteLocalFileUploadJobRequest& request, const DeleteLocalFileUploadJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLocalFileUploadJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteLocalFileUploadJobOutcomeCallable LinkvisualClient::deleteLocalFileUploadJobCallable(const DeleteLocalFileUploadJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLocalFileUploadJobOutcome()>>(
			[this, request]()
			{
			return this->deleteLocalFileUploadJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeletePictureOutcome LinkvisualClient::deletePicture(const DeletePictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePictureOutcome(DeletePictureResult(outcome.result()));
	else
		return DeletePictureOutcome(outcome.error());
}

void LinkvisualClient::deletePictureAsync(const DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeletePictureOutcomeCallable LinkvisualClient::deletePictureCallable(const DeletePictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePictureOutcome()>>(
			[this, request]()
			{
			return this->deletePicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteRecordOutcome LinkvisualClient::deleteRecord(const DeleteRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecordOutcome(DeleteRecordResult(outcome.result()));
	else
		return DeleteRecordOutcome(outcome.error());
}

void LinkvisualClient::deleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteRecordOutcomeCallable LinkvisualClient::deleteRecordCallable(const DeleteRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecordOutcome()>>(
			[this, request]()
			{
			return this->deleteRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteRecordPlanOutcome LinkvisualClient::deleteRecordPlan(const DeleteRecordPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecordPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecordPlanOutcome(DeleteRecordPlanResult(outcome.result()));
	else
		return DeleteRecordPlanOutcome(outcome.error());
}

void LinkvisualClient::deleteRecordPlanAsync(const DeleteRecordPlanRequest& request, const DeleteRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecordPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteRecordPlanOutcomeCallable LinkvisualClient::deleteRecordPlanCallable(const DeleteRecordPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecordPlanOutcome()>>(
			[this, request]()
			{
			return this->deleteRecordPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteRecordPlanDeviceOutcome LinkvisualClient::deleteRecordPlanDevice(const DeleteRecordPlanDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecordPlanDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecordPlanDeviceOutcome(DeleteRecordPlanDeviceResult(outcome.result()));
	else
		return DeleteRecordPlanDeviceOutcome(outcome.error());
}

void LinkvisualClient::deleteRecordPlanDeviceAsync(const DeleteRecordPlanDeviceRequest& request, const DeleteRecordPlanDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecordPlanDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteRecordPlanDeviceOutcomeCallable LinkvisualClient::deleteRecordPlanDeviceCallable(const DeleteRecordPlanDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecordPlanDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteRecordPlanDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteRtmpDeviceOutcome LinkvisualClient::deleteRtmpDevice(const DeleteRtmpDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRtmpDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRtmpDeviceOutcome(DeleteRtmpDeviceResult(outcome.result()));
	else
		return DeleteRtmpDeviceOutcome(outcome.error());
}

void LinkvisualClient::deleteRtmpDeviceAsync(const DeleteRtmpDeviceRequest& request, const DeleteRtmpDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRtmpDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteRtmpDeviceOutcomeCallable LinkvisualClient::deleteRtmpDeviceCallable(const DeleteRtmpDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRtmpDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteRtmpDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteRtmpKeyOutcome LinkvisualClient::deleteRtmpKey(const DeleteRtmpKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRtmpKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRtmpKeyOutcome(DeleteRtmpKeyResult(outcome.result()));
	else
		return DeleteRtmpKeyOutcome(outcome.error());
}

void LinkvisualClient::deleteRtmpKeyAsync(const DeleteRtmpKeyRequest& request, const DeleteRtmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRtmpKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteRtmpKeyOutcomeCallable LinkvisualClient::deleteRtmpKeyCallable(const DeleteRtmpKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRtmpKeyOutcome()>>(
			[this, request]()
			{
			return this->deleteRtmpKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteStreamPushJobOutcome LinkvisualClient::deleteStreamPushJob(const DeleteStreamPushJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStreamPushJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStreamPushJobOutcome(DeleteStreamPushJobResult(outcome.result()));
	else
		return DeleteStreamPushJobOutcome(outcome.error());
}

void LinkvisualClient::deleteStreamPushJobAsync(const DeleteStreamPushJobRequest& request, const DeleteStreamPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStreamPushJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteStreamPushJobOutcomeCallable LinkvisualClient::deleteStreamPushJobCallable(const DeleteStreamPushJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStreamPushJobOutcome()>>(
			[this, request]()
			{
			return this->deleteStreamPushJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteStreamSnapshotJobOutcome LinkvisualClient::deleteStreamSnapshotJob(const DeleteStreamSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStreamSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStreamSnapshotJobOutcome(DeleteStreamSnapshotJobResult(outcome.result()));
	else
		return DeleteStreamSnapshotJobOutcome(outcome.error());
}

void LinkvisualClient::deleteStreamSnapshotJobAsync(const DeleteStreamSnapshotJobRequest& request, const DeleteStreamSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStreamSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteStreamSnapshotJobOutcomeCallable LinkvisualClient::deleteStreamSnapshotJobCallable(const DeleteStreamSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStreamSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->deleteStreamSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DeleteTimeTemplateOutcome LinkvisualClient::deleteTimeTemplate(const DeleteTimeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTimeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTimeTemplateOutcome(DeleteTimeTemplateResult(outcome.result()));
	else
		return DeleteTimeTemplateOutcome(outcome.error());
}

void LinkvisualClient::deleteTimeTemplateAsync(const DeleteTimeTemplateRequest& request, const DeleteTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTimeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DeleteTimeTemplateOutcomeCallable LinkvisualClient::deleteTimeTemplateCallable(const DeleteTimeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTimeTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTimeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::DetectUserFaceByUrlOutcome LinkvisualClient::detectUserFaceByUrl(const DetectUserFaceByUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetectUserFaceByUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetectUserFaceByUrlOutcome(DetectUserFaceByUrlResult(outcome.result()));
	else
		return DetectUserFaceByUrlOutcome(outcome.error());
}

void LinkvisualClient::detectUserFaceByUrlAsync(const DetectUserFaceByUrlRequest& request, const DetectUserFaceByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detectUserFaceByUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::DetectUserFaceByUrlOutcomeCallable LinkvisualClient::detectUserFaceByUrlCallable(const DetectUserFaceByUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetectUserFaceByUrlOutcome()>>(
			[this, request]()
			{
			return this->detectUserFaceByUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::EnableGbSubDeviceOutcome LinkvisualClient::enableGbSubDevice(const EnableGbSubDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableGbSubDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableGbSubDeviceOutcome(EnableGbSubDeviceResult(outcome.result()));
	else
		return EnableGbSubDeviceOutcome(outcome.error());
}

void LinkvisualClient::enableGbSubDeviceAsync(const EnableGbSubDeviceRequest& request, const EnableGbSubDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableGbSubDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::EnableGbSubDeviceOutcomeCallable LinkvisualClient::enableGbSubDeviceCallable(const EnableGbSubDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableGbSubDeviceOutcome()>>(
			[this, request]()
			{
			return this->enableGbSubDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::GetPictureSearchJobStatusOutcome LinkvisualClient::getPictureSearchJobStatus(const GetPictureSearchJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPictureSearchJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPictureSearchJobStatusOutcome(GetPictureSearchJobStatusResult(outcome.result()));
	else
		return GetPictureSearchJobStatusOutcome(outcome.error());
}

void LinkvisualClient::getPictureSearchJobStatusAsync(const GetPictureSearchJobStatusRequest& request, const GetPictureSearchJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPictureSearchJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::GetPictureSearchJobStatusOutcomeCallable LinkvisualClient::getPictureSearchJobStatusCallable(const GetPictureSearchJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPictureSearchJobStatusOutcome()>>(
			[this, request]()
			{
			return this->getPictureSearchJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::PictureSearchPictureOutcome LinkvisualClient::pictureSearchPicture(const PictureSearchPictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PictureSearchPictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PictureSearchPictureOutcome(PictureSearchPictureResult(outcome.result()));
	else
		return PictureSearchPictureOutcome(outcome.error());
}

void LinkvisualClient::pictureSearchPictureAsync(const PictureSearchPictureRequest& request, const PictureSearchPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pictureSearchPicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::PictureSearchPictureOutcomeCallable LinkvisualClient::pictureSearchPictureCallable(const PictureSearchPictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PictureSearchPictureOutcome()>>(
			[this, request]()
			{
			return this->pictureSearchPicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryCarProcessEventsOutcome LinkvisualClient::queryCarProcessEvents(const QueryCarProcessEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCarProcessEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCarProcessEventsOutcome(QueryCarProcessEventsResult(outcome.result()));
	else
		return QueryCarProcessEventsOutcome(outcome.error());
}

void LinkvisualClient::queryCarProcessEventsAsync(const QueryCarProcessEventsRequest& request, const QueryCarProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCarProcessEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryCarProcessEventsOutcomeCallable LinkvisualClient::queryCarProcessEventsCallable(const QueryCarProcessEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCarProcessEventsOutcome()>>(
			[this, request]()
			{
			return this->queryCarProcessEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDeviceEventOutcome LinkvisualClient::queryDeviceEvent(const QueryDeviceEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceEventOutcome(QueryDeviceEventResult(outcome.result()));
	else
		return QueryDeviceEventOutcome(outcome.error());
}

void LinkvisualClient::queryDeviceEventAsync(const QueryDeviceEventRequest& request, const QueryDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDeviceEventOutcomeCallable LinkvisualClient::queryDeviceEventCallable(const QueryDeviceEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceEventOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDeviceEventPictureOutcome LinkvisualClient::queryDeviceEventPicture(const QueryDeviceEventPictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceEventPictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceEventPictureOutcome(QueryDeviceEventPictureResult(outcome.result()));
	else
		return QueryDeviceEventPictureOutcome(outcome.error());
}

void LinkvisualClient::queryDeviceEventPictureAsync(const QueryDeviceEventPictureRequest& request, const QueryDeviceEventPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceEventPicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDeviceEventPictureOutcomeCallable LinkvisualClient::queryDeviceEventPictureCallable(const QueryDeviceEventPictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceEventPictureOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceEventPicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDeviceEventRecordOutcome LinkvisualClient::queryDeviceEventRecord(const QueryDeviceEventRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceEventRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceEventRecordOutcome(QueryDeviceEventRecordResult(outcome.result()));
	else
		return QueryDeviceEventRecordOutcome(outcome.error());
}

void LinkvisualClient::queryDeviceEventRecordAsync(const QueryDeviceEventRecordRequest& request, const QueryDeviceEventRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceEventRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDeviceEventRecordOutcomeCallable LinkvisualClient::queryDeviceEventRecordCallable(const QueryDeviceEventRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceEventRecordOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceEventRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDevicePictureByListOutcome LinkvisualClient::queryDevicePictureByList(const QueryDevicePictureByListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePictureByListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePictureByListOutcome(QueryDevicePictureByListResult(outcome.result()));
	else
		return QueryDevicePictureByListOutcome(outcome.error());
}

void LinkvisualClient::queryDevicePictureByListAsync(const QueryDevicePictureByListRequest& request, const QueryDevicePictureByListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePictureByList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDevicePictureByListOutcomeCallable LinkvisualClient::queryDevicePictureByListCallable(const QueryDevicePictureByListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePictureByListOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePictureByList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDevicePictureFileOutcome LinkvisualClient::queryDevicePictureFile(const QueryDevicePictureFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePictureFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePictureFileOutcome(QueryDevicePictureFileResult(outcome.result()));
	else
		return QueryDevicePictureFileOutcome(outcome.error());
}

void LinkvisualClient::queryDevicePictureFileAsync(const QueryDevicePictureFileRequest& request, const QueryDevicePictureFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePictureFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDevicePictureFileOutcomeCallable LinkvisualClient::queryDevicePictureFileCallable(const QueryDevicePictureFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePictureFileOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePictureFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDevicePictureLifeCycleOutcome LinkvisualClient::queryDevicePictureLifeCycle(const QueryDevicePictureLifeCycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicePictureLifeCycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicePictureLifeCycleOutcome(QueryDevicePictureLifeCycleResult(outcome.result()));
	else
		return QueryDevicePictureLifeCycleOutcome(outcome.error());
}

void LinkvisualClient::queryDevicePictureLifeCycleAsync(const QueryDevicePictureLifeCycleRequest& request, const QueryDevicePictureLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicePictureLifeCycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDevicePictureLifeCycleOutcomeCallable LinkvisualClient::queryDevicePictureLifeCycleCallable(const QueryDevicePictureLifeCycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicePictureLifeCycleOutcome()>>(
			[this, request]()
			{
			return this->queryDevicePictureLifeCycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDeviceRecordLifeCycleOutcome LinkvisualClient::queryDeviceRecordLifeCycle(const QueryDeviceRecordLifeCycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceRecordLifeCycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceRecordLifeCycleOutcome(QueryDeviceRecordLifeCycleResult(outcome.result()));
	else
		return QueryDeviceRecordLifeCycleOutcome(outcome.error());
}

void LinkvisualClient::queryDeviceRecordLifeCycleAsync(const QueryDeviceRecordLifeCycleRequest& request, const QueryDeviceRecordLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceRecordLifeCycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDeviceRecordLifeCycleOutcomeCallable LinkvisualClient::queryDeviceRecordLifeCycleCallable(const QueryDeviceRecordLifeCycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceRecordLifeCycleOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceRecordLifeCycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDeviceVodUrlOutcome LinkvisualClient::queryDeviceVodUrl(const QueryDeviceVodUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceVodUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceVodUrlOutcome(QueryDeviceVodUrlResult(outcome.result()));
	else
		return QueryDeviceVodUrlOutcome(outcome.error());
}

void LinkvisualClient::queryDeviceVodUrlAsync(const QueryDeviceVodUrlRequest& request, const QueryDeviceVodUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceVodUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDeviceVodUrlOutcomeCallable LinkvisualClient::queryDeviceVodUrlCallable(const QueryDeviceVodUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceVodUrlOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceVodUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryDeviceVodUrlByTimeOutcome LinkvisualClient::queryDeviceVodUrlByTime(const QueryDeviceVodUrlByTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceVodUrlByTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceVodUrlByTimeOutcome(QueryDeviceVodUrlByTimeResult(outcome.result()));
	else
		return QueryDeviceVodUrlByTimeOutcome(outcome.error());
}

void LinkvisualClient::queryDeviceVodUrlByTimeAsync(const QueryDeviceVodUrlByTimeRequest& request, const QueryDeviceVodUrlByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceVodUrlByTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryDeviceVodUrlByTimeOutcomeCallable LinkvisualClient::queryDeviceVodUrlByTimeCallable(const QueryDeviceVodUrlByTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceVodUrlByTimeOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceVodUrlByTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryEventRecordPlanDetailOutcome LinkvisualClient::queryEventRecordPlanDetail(const QueryEventRecordPlanDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEventRecordPlanDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEventRecordPlanDetailOutcome(QueryEventRecordPlanDetailResult(outcome.result()));
	else
		return QueryEventRecordPlanDetailOutcome(outcome.error());
}

void LinkvisualClient::queryEventRecordPlanDetailAsync(const QueryEventRecordPlanDetailRequest& request, const QueryEventRecordPlanDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEventRecordPlanDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryEventRecordPlanDetailOutcomeCallable LinkvisualClient::queryEventRecordPlanDetailCallable(const QueryEventRecordPlanDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEventRecordPlanDetailOutcome()>>(
			[this, request]()
			{
			return this->queryEventRecordPlanDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryEventRecordPlanDeviceByDeviceOutcome LinkvisualClient::queryEventRecordPlanDeviceByDevice(const QueryEventRecordPlanDeviceByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEventRecordPlanDeviceByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEventRecordPlanDeviceByDeviceOutcome(QueryEventRecordPlanDeviceByDeviceResult(outcome.result()));
	else
		return QueryEventRecordPlanDeviceByDeviceOutcome(outcome.error());
}

void LinkvisualClient::queryEventRecordPlanDeviceByDeviceAsync(const QueryEventRecordPlanDeviceByDeviceRequest& request, const QueryEventRecordPlanDeviceByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEventRecordPlanDeviceByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryEventRecordPlanDeviceByDeviceOutcomeCallable LinkvisualClient::queryEventRecordPlanDeviceByDeviceCallable(const QueryEventRecordPlanDeviceByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEventRecordPlanDeviceByDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryEventRecordPlanDeviceByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryEventRecordPlanDeviceByPlanOutcome LinkvisualClient::queryEventRecordPlanDeviceByPlan(const QueryEventRecordPlanDeviceByPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEventRecordPlanDeviceByPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEventRecordPlanDeviceByPlanOutcome(QueryEventRecordPlanDeviceByPlanResult(outcome.result()));
	else
		return QueryEventRecordPlanDeviceByPlanOutcome(outcome.error());
}

void LinkvisualClient::queryEventRecordPlanDeviceByPlanAsync(const QueryEventRecordPlanDeviceByPlanRequest& request, const QueryEventRecordPlanDeviceByPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEventRecordPlanDeviceByPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryEventRecordPlanDeviceByPlanOutcomeCallable LinkvisualClient::queryEventRecordPlanDeviceByPlanCallable(const QueryEventRecordPlanDeviceByPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEventRecordPlanDeviceByPlanOutcome()>>(
			[this, request]()
			{
			return this->queryEventRecordPlanDeviceByPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryEventRecordPlansOutcome LinkvisualClient::queryEventRecordPlans(const QueryEventRecordPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEventRecordPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEventRecordPlansOutcome(QueryEventRecordPlansResult(outcome.result()));
	else
		return QueryEventRecordPlansOutcome(outcome.error());
}

void LinkvisualClient::queryEventRecordPlansAsync(const QueryEventRecordPlansRequest& request, const QueryEventRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEventRecordPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryEventRecordPlansOutcomeCallable LinkvisualClient::queryEventRecordPlansCallable(const QueryEventRecordPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEventRecordPlansOutcome()>>(
			[this, request]()
			{
			return this->queryEventRecordPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceAllDeviceGroupOutcome LinkvisualClient::queryFaceAllDeviceGroup(const QueryFaceAllDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceAllDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceAllDeviceGroupOutcome(QueryFaceAllDeviceGroupResult(outcome.result()));
	else
		return QueryFaceAllDeviceGroupOutcome(outcome.error());
}

void LinkvisualClient::queryFaceAllDeviceGroupAsync(const QueryFaceAllDeviceGroupRequest& request, const QueryFaceAllDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceAllDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceAllDeviceGroupOutcomeCallable LinkvisualClient::queryFaceAllDeviceGroupCallable(const QueryFaceAllDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceAllDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->queryFaceAllDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceAllUserGroupOutcome LinkvisualClient::queryFaceAllUserGroup(const QueryFaceAllUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceAllUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceAllUserGroupOutcome(QueryFaceAllUserGroupResult(outcome.result()));
	else
		return QueryFaceAllUserGroupOutcome(outcome.error());
}

void LinkvisualClient::queryFaceAllUserGroupAsync(const QueryFaceAllUserGroupRequest& request, const QueryFaceAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceAllUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceAllUserGroupOutcomeCallable LinkvisualClient::queryFaceAllUserGroupCallable(const QueryFaceAllUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceAllUserGroupOutcome()>>(
			[this, request]()
			{
			return this->queryFaceAllUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceAllUserGroupAndDeviceGroupRelationOutcome LinkvisualClient::queryFaceAllUserGroupAndDeviceGroupRelation(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceAllUserGroupAndDeviceGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceAllUserGroupAndDeviceGroupRelationOutcome(QueryFaceAllUserGroupAndDeviceGroupRelationResult(outcome.result()));
	else
		return QueryFaceAllUserGroupAndDeviceGroupRelationOutcome(outcome.error());
}

void LinkvisualClient::queryFaceAllUserGroupAndDeviceGroupRelationAsync(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest& request, const QueryFaceAllUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceAllUserGroupAndDeviceGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceAllUserGroupAndDeviceGroupRelationOutcomeCallable LinkvisualClient::queryFaceAllUserGroupAndDeviceGroupRelationCallable(const QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceAllUserGroupAndDeviceGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->queryFaceAllUserGroupAndDeviceGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceAllUserIdsByGroupIdOutcome LinkvisualClient::queryFaceAllUserIdsByGroupId(const QueryFaceAllUserIdsByGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceAllUserIdsByGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceAllUserIdsByGroupIdOutcome(QueryFaceAllUserIdsByGroupIdResult(outcome.result()));
	else
		return QueryFaceAllUserIdsByGroupIdOutcome(outcome.error());
}

void LinkvisualClient::queryFaceAllUserIdsByGroupIdAsync(const QueryFaceAllUserIdsByGroupIdRequest& request, const QueryFaceAllUserIdsByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceAllUserIdsByGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceAllUserIdsByGroupIdOutcomeCallable LinkvisualClient::queryFaceAllUserIdsByGroupIdCallable(const QueryFaceAllUserIdsByGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceAllUserIdsByGroupIdOutcome()>>(
			[this, request]()
			{
			return this->queryFaceAllUserIdsByGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceCustomUserIdByUserIdOutcome LinkvisualClient::queryFaceCustomUserIdByUserId(const QueryFaceCustomUserIdByUserIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceCustomUserIdByUserIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceCustomUserIdByUserIdOutcome(QueryFaceCustomUserIdByUserIdResult(outcome.result()));
	else
		return QueryFaceCustomUserIdByUserIdOutcome(outcome.error());
}

void LinkvisualClient::queryFaceCustomUserIdByUserIdAsync(const QueryFaceCustomUserIdByUserIdRequest& request, const QueryFaceCustomUserIdByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceCustomUserIdByUserId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceCustomUserIdByUserIdOutcomeCallable LinkvisualClient::queryFaceCustomUserIdByUserIdCallable(const QueryFaceCustomUserIdByUserIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceCustomUserIdByUserIdOutcome()>>(
			[this, request]()
			{
			return this->queryFaceCustomUserIdByUserId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceDeviceGroupsByDeviceOutcome LinkvisualClient::queryFaceDeviceGroupsByDevice(const QueryFaceDeviceGroupsByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceDeviceGroupsByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceDeviceGroupsByDeviceOutcome(QueryFaceDeviceGroupsByDeviceResult(outcome.result()));
	else
		return QueryFaceDeviceGroupsByDeviceOutcome(outcome.error());
}

void LinkvisualClient::queryFaceDeviceGroupsByDeviceAsync(const QueryFaceDeviceGroupsByDeviceRequest& request, const QueryFaceDeviceGroupsByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceDeviceGroupsByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceDeviceGroupsByDeviceOutcomeCallable LinkvisualClient::queryFaceDeviceGroupsByDeviceCallable(const QueryFaceDeviceGroupsByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceDeviceGroupsByDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryFaceDeviceGroupsByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceUserOutcome LinkvisualClient::queryFaceUser(const QueryFaceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceUserOutcome(QueryFaceUserResult(outcome.result()));
	else
		return QueryFaceUserOutcome(outcome.error());
}

void LinkvisualClient::queryFaceUserAsync(const QueryFaceUserRequest& request, const QueryFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceUserOutcomeCallable LinkvisualClient::queryFaceUserCallable(const QueryFaceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceUserOutcome()>>(
			[this, request]()
			{
			return this->queryFaceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceUserBatchOutcome LinkvisualClient::queryFaceUserBatch(const QueryFaceUserBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceUserBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceUserBatchOutcome(QueryFaceUserBatchResult(outcome.result()));
	else
		return QueryFaceUserBatchOutcome(outcome.error());
}

void LinkvisualClient::queryFaceUserBatchAsync(const QueryFaceUserBatchRequest& request, const QueryFaceUserBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceUserBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceUserBatchOutcomeCallable LinkvisualClient::queryFaceUserBatchCallable(const QueryFaceUserBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceUserBatchOutcome()>>(
			[this, request]()
			{
			return this->queryFaceUserBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceUserByNameOutcome LinkvisualClient::queryFaceUserByName(const QueryFaceUserByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceUserByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceUserByNameOutcome(QueryFaceUserByNameResult(outcome.result()));
	else
		return QueryFaceUserByNameOutcome(outcome.error());
}

void LinkvisualClient::queryFaceUserByNameAsync(const QueryFaceUserByNameRequest& request, const QueryFaceUserByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceUserByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceUserByNameOutcomeCallable LinkvisualClient::queryFaceUserByNameCallable(const QueryFaceUserByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceUserByNameOutcome()>>(
			[this, request]()
			{
			return this->queryFaceUserByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceUserGroupOutcome LinkvisualClient::queryFaceUserGroup(const QueryFaceUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceUserGroupOutcome(QueryFaceUserGroupResult(outcome.result()));
	else
		return QueryFaceUserGroupOutcome(outcome.error());
}

void LinkvisualClient::queryFaceUserGroupAsync(const QueryFaceUserGroupRequest& request, const QueryFaceUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceUserGroupOutcomeCallable LinkvisualClient::queryFaceUserGroupCallable(const QueryFaceUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceUserGroupOutcome()>>(
			[this, request]()
			{
			return this->queryFaceUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceUserGroupAndDeviceGroupRelationOutcome LinkvisualClient::queryFaceUserGroupAndDeviceGroupRelation(const QueryFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceUserGroupAndDeviceGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceUserGroupAndDeviceGroupRelationOutcome(QueryFaceUserGroupAndDeviceGroupRelationResult(outcome.result()));
	else
		return QueryFaceUserGroupAndDeviceGroupRelationOutcome(outcome.error());
}

void LinkvisualClient::queryFaceUserGroupAndDeviceGroupRelationAsync(const QueryFaceUserGroupAndDeviceGroupRelationRequest& request, const QueryFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceUserGroupAndDeviceGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceUserGroupAndDeviceGroupRelationOutcomeCallable LinkvisualClient::queryFaceUserGroupAndDeviceGroupRelationCallable(const QueryFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceUserGroupAndDeviceGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->queryFaceUserGroupAndDeviceGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryFaceUserIdByCustomUserIdOutcome LinkvisualClient::queryFaceUserIdByCustomUserId(const QueryFaceUserIdByCustomUserIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFaceUserIdByCustomUserIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFaceUserIdByCustomUserIdOutcome(QueryFaceUserIdByCustomUserIdResult(outcome.result()));
	else
		return QueryFaceUserIdByCustomUserIdOutcome(outcome.error());
}

void LinkvisualClient::queryFaceUserIdByCustomUserIdAsync(const QueryFaceUserIdByCustomUserIdRequest& request, const QueryFaceUserIdByCustomUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFaceUserIdByCustomUserId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryFaceUserIdByCustomUserIdOutcomeCallable LinkvisualClient::queryFaceUserIdByCustomUserIdCallable(const QueryFaceUserIdByCustomUserIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFaceUserIdByCustomUserIdOutcome()>>(
			[this, request]()
			{
			return this->queryFaceUserIdByCustomUserId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryGbSubDeviceListOutcome LinkvisualClient::queryGbSubDeviceList(const QueryGbSubDeviceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGbSubDeviceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGbSubDeviceListOutcome(QueryGbSubDeviceListResult(outcome.result()));
	else
		return QueryGbSubDeviceListOutcome(outcome.error());
}

void LinkvisualClient::queryGbSubDeviceListAsync(const QueryGbSubDeviceListRequest& request, const QueryGbSubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGbSubDeviceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryGbSubDeviceListOutcomeCallable LinkvisualClient::queryGbSubDeviceListCallable(const QueryGbSubDeviceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGbSubDeviceListOutcome()>>(
			[this, request]()
			{
			return this->queryGbSubDeviceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryLiveStreamingOutcome LinkvisualClient::queryLiveStreaming(const QueryLiveStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLiveStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLiveStreamingOutcome(QueryLiveStreamingResult(outcome.result()));
	else
		return QueryLiveStreamingOutcome(outcome.error());
}

void LinkvisualClient::queryLiveStreamingAsync(const QueryLiveStreamingRequest& request, const QueryLiveStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLiveStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryLiveStreamingOutcomeCallable LinkvisualClient::queryLiveStreamingCallable(const QueryLiveStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLiveStreamingOutcome()>>(
			[this, request]()
			{
			return this->queryLiveStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryLocalFileUploadJobOutcome LinkvisualClient::queryLocalFileUploadJob(const QueryLocalFileUploadJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLocalFileUploadJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLocalFileUploadJobOutcome(QueryLocalFileUploadJobResult(outcome.result()));
	else
		return QueryLocalFileUploadJobOutcome(outcome.error());
}

void LinkvisualClient::queryLocalFileUploadJobAsync(const QueryLocalFileUploadJobRequest& request, const QueryLocalFileUploadJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLocalFileUploadJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryLocalFileUploadJobOutcomeCallable LinkvisualClient::queryLocalFileUploadJobCallable(const QueryLocalFileUploadJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLocalFileUploadJobOutcome()>>(
			[this, request]()
			{
			return this->queryLocalFileUploadJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryMonthRecordOutcome LinkvisualClient::queryMonthRecord(const QueryMonthRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonthRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonthRecordOutcome(QueryMonthRecordResult(outcome.result()));
	else
		return QueryMonthRecordOutcome(outcome.error());
}

void LinkvisualClient::queryMonthRecordAsync(const QueryMonthRecordRequest& request, const QueryMonthRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonthRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryMonthRecordOutcomeCallable LinkvisualClient::queryMonthRecordCallable(const QueryMonthRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonthRecordOutcome()>>(
			[this, request]()
			{
			return this->queryMonthRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryPictureFilesOutcome LinkvisualClient::queryPictureFiles(const QueryPictureFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPictureFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPictureFilesOutcome(QueryPictureFilesResult(outcome.result()));
	else
		return QueryPictureFilesOutcome(outcome.error());
}

void LinkvisualClient::queryPictureFilesAsync(const QueryPictureFilesRequest& request, const QueryPictureFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPictureFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryPictureFilesOutcomeCallable LinkvisualClient::queryPictureFilesCallable(const QueryPictureFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPictureFilesOutcome()>>(
			[this, request]()
			{
			return this->queryPictureFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryPictureSearchAiboxesOutcome LinkvisualClient::queryPictureSearchAiboxes(const QueryPictureSearchAiboxesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPictureSearchAiboxesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPictureSearchAiboxesOutcome(QueryPictureSearchAiboxesResult(outcome.result()));
	else
		return QueryPictureSearchAiboxesOutcome(outcome.error());
}

void LinkvisualClient::queryPictureSearchAiboxesAsync(const QueryPictureSearchAiboxesRequest& request, const QueryPictureSearchAiboxesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPictureSearchAiboxes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryPictureSearchAiboxesOutcomeCallable LinkvisualClient::queryPictureSearchAiboxesCallable(const QueryPictureSearchAiboxesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPictureSearchAiboxesOutcome()>>(
			[this, request]()
			{
			return this->queryPictureSearchAiboxes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryPictureSearchAppsOutcome LinkvisualClient::queryPictureSearchApps(const QueryPictureSearchAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPictureSearchAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPictureSearchAppsOutcome(QueryPictureSearchAppsResult(outcome.result()));
	else
		return QueryPictureSearchAppsOutcome(outcome.error());
}

void LinkvisualClient::queryPictureSearchAppsAsync(const QueryPictureSearchAppsRequest& request, const QueryPictureSearchAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPictureSearchApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryPictureSearchAppsOutcomeCallable LinkvisualClient::queryPictureSearchAppsCallable(const QueryPictureSearchAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPictureSearchAppsOutcome()>>(
			[this, request]()
			{
			return this->queryPictureSearchApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryPictureSearchDevicesOutcome LinkvisualClient::queryPictureSearchDevices(const QueryPictureSearchDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPictureSearchDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPictureSearchDevicesOutcome(QueryPictureSearchDevicesResult(outcome.result()));
	else
		return QueryPictureSearchDevicesOutcome(outcome.error());
}

void LinkvisualClient::queryPictureSearchDevicesAsync(const QueryPictureSearchDevicesRequest& request, const QueryPictureSearchDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPictureSearchDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryPictureSearchDevicesOutcomeCallable LinkvisualClient::queryPictureSearchDevicesCallable(const QueryPictureSearchDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPictureSearchDevicesOutcome()>>(
			[this, request]()
			{
			return this->queryPictureSearchDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryPictureSearchJobOutcome LinkvisualClient::queryPictureSearchJob(const QueryPictureSearchJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPictureSearchJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPictureSearchJobOutcome(QueryPictureSearchJobResult(outcome.result()));
	else
		return QueryPictureSearchJobOutcome(outcome.error());
}

void LinkvisualClient::queryPictureSearchJobAsync(const QueryPictureSearchJobRequest& request, const QueryPictureSearchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPictureSearchJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryPictureSearchJobOutcomeCallable LinkvisualClient::queryPictureSearchJobCallable(const QueryPictureSearchJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPictureSearchJobOutcome()>>(
			[this, request]()
			{
			return this->queryPictureSearchJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryPictureSearchJobResultOutcome LinkvisualClient::queryPictureSearchJobResult(const QueryPictureSearchJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPictureSearchJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPictureSearchJobResultOutcome(QueryPictureSearchJobResultResult(outcome.result()));
	else
		return QueryPictureSearchJobResultOutcome(outcome.error());
}

void LinkvisualClient::queryPictureSearchJobResultAsync(const QueryPictureSearchJobResultRequest& request, const QueryPictureSearchJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPictureSearchJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryPictureSearchJobResultOutcomeCallable LinkvisualClient::queryPictureSearchJobResultCallable(const QueryPictureSearchJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPictureSearchJobResultOutcome()>>(
			[this, request]()
			{
			return this->queryPictureSearchJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordOutcome LinkvisualClient::queryRecord(const QueryRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordOutcome(QueryRecordResult(outcome.result()));
	else
		return QueryRecordOutcome(outcome.error());
}

void LinkvisualClient::queryRecordAsync(const QueryRecordRequest& request, const QueryRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordOutcomeCallable LinkvisualClient::queryRecordCallable(const QueryRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordOutcome()>>(
			[this, request]()
			{
			return this->queryRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordByRecordIdOutcome LinkvisualClient::queryRecordByRecordId(const QueryRecordByRecordIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordByRecordIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordByRecordIdOutcome(QueryRecordByRecordIdResult(outcome.result()));
	else
		return QueryRecordByRecordIdOutcome(outcome.error());
}

void LinkvisualClient::queryRecordByRecordIdAsync(const QueryRecordByRecordIdRequest& request, const QueryRecordByRecordIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordByRecordId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordByRecordIdOutcomeCallable LinkvisualClient::queryRecordByRecordIdCallable(const QueryRecordByRecordIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordByRecordIdOutcome()>>(
			[this, request]()
			{
			return this->queryRecordByRecordId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordDownloadJobByIdOutcome LinkvisualClient::queryRecordDownloadJobById(const QueryRecordDownloadJobByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordDownloadJobByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordDownloadJobByIdOutcome(QueryRecordDownloadJobByIdResult(outcome.result()));
	else
		return QueryRecordDownloadJobByIdOutcome(outcome.error());
}

void LinkvisualClient::queryRecordDownloadJobByIdAsync(const QueryRecordDownloadJobByIdRequest& request, const QueryRecordDownloadJobByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordDownloadJobById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordDownloadJobByIdOutcomeCallable LinkvisualClient::queryRecordDownloadJobByIdCallable(const QueryRecordDownloadJobByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordDownloadJobByIdOutcome()>>(
			[this, request]()
			{
			return this->queryRecordDownloadJobById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordDownloadJobListOutcome LinkvisualClient::queryRecordDownloadJobList(const QueryRecordDownloadJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordDownloadJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordDownloadJobListOutcome(QueryRecordDownloadJobListResult(outcome.result()));
	else
		return QueryRecordDownloadJobListOutcome(outcome.error());
}

void LinkvisualClient::queryRecordDownloadJobListAsync(const QueryRecordDownloadJobListRequest& request, const QueryRecordDownloadJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordDownloadJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordDownloadJobListOutcomeCallable LinkvisualClient::queryRecordDownloadJobListCallable(const QueryRecordDownloadJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordDownloadJobListOutcome()>>(
			[this, request]()
			{
			return this->queryRecordDownloadJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordDownloadUrlOutcome LinkvisualClient::queryRecordDownloadUrl(const QueryRecordDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordDownloadUrlOutcome(QueryRecordDownloadUrlResult(outcome.result()));
	else
		return QueryRecordDownloadUrlOutcome(outcome.error());
}

void LinkvisualClient::queryRecordDownloadUrlAsync(const QueryRecordDownloadUrlRequest& request, const QueryRecordDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordDownloadUrlOutcomeCallable LinkvisualClient::queryRecordDownloadUrlCallable(const QueryRecordDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->queryRecordDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordPlanDetailOutcome LinkvisualClient::queryRecordPlanDetail(const QueryRecordPlanDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordPlanDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordPlanDetailOutcome(QueryRecordPlanDetailResult(outcome.result()));
	else
		return QueryRecordPlanDetailOutcome(outcome.error());
}

void LinkvisualClient::queryRecordPlanDetailAsync(const QueryRecordPlanDetailRequest& request, const QueryRecordPlanDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordPlanDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordPlanDetailOutcomeCallable LinkvisualClient::queryRecordPlanDetailCallable(const QueryRecordPlanDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordPlanDetailOutcome()>>(
			[this, request]()
			{
			return this->queryRecordPlanDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordPlanDeviceByDeviceOutcome LinkvisualClient::queryRecordPlanDeviceByDevice(const QueryRecordPlanDeviceByDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordPlanDeviceByDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordPlanDeviceByDeviceOutcome(QueryRecordPlanDeviceByDeviceResult(outcome.result()));
	else
		return QueryRecordPlanDeviceByDeviceOutcome(outcome.error());
}

void LinkvisualClient::queryRecordPlanDeviceByDeviceAsync(const QueryRecordPlanDeviceByDeviceRequest& request, const QueryRecordPlanDeviceByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordPlanDeviceByDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordPlanDeviceByDeviceOutcomeCallable LinkvisualClient::queryRecordPlanDeviceByDeviceCallable(const QueryRecordPlanDeviceByDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordPlanDeviceByDeviceOutcome()>>(
			[this, request]()
			{
			return this->queryRecordPlanDeviceByDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordPlanDeviceByPlanOutcome LinkvisualClient::queryRecordPlanDeviceByPlan(const QueryRecordPlanDeviceByPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordPlanDeviceByPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordPlanDeviceByPlanOutcome(QueryRecordPlanDeviceByPlanResult(outcome.result()));
	else
		return QueryRecordPlanDeviceByPlanOutcome(outcome.error());
}

void LinkvisualClient::queryRecordPlanDeviceByPlanAsync(const QueryRecordPlanDeviceByPlanRequest& request, const QueryRecordPlanDeviceByPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordPlanDeviceByPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordPlanDeviceByPlanOutcomeCallable LinkvisualClient::queryRecordPlanDeviceByPlanCallable(const QueryRecordPlanDeviceByPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordPlanDeviceByPlanOutcome()>>(
			[this, request]()
			{
			return this->queryRecordPlanDeviceByPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordPlansOutcome LinkvisualClient::queryRecordPlans(const QueryRecordPlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordPlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordPlansOutcome(QueryRecordPlansResult(outcome.result()));
	else
		return QueryRecordPlansOutcome(outcome.error());
}

void LinkvisualClient::queryRecordPlansAsync(const QueryRecordPlansRequest& request, const QueryRecordPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordPlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordPlansOutcomeCallable LinkvisualClient::queryRecordPlansCallable(const QueryRecordPlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordPlansOutcome()>>(
			[this, request]()
			{
			return this->queryRecordPlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordUrlOutcome LinkvisualClient::queryRecordUrl(const QueryRecordUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordUrlOutcome(QueryRecordUrlResult(outcome.result()));
	else
		return QueryRecordUrlOutcome(outcome.error());
}

void LinkvisualClient::queryRecordUrlAsync(const QueryRecordUrlRequest& request, const QueryRecordUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordUrlOutcomeCallable LinkvisualClient::queryRecordUrlCallable(const QueryRecordUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordUrlOutcome()>>(
			[this, request]()
			{
			return this->queryRecordUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRecordUrlByTimeOutcome LinkvisualClient::queryRecordUrlByTime(const QueryRecordUrlByTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordUrlByTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordUrlByTimeOutcome(QueryRecordUrlByTimeResult(outcome.result()));
	else
		return QueryRecordUrlByTimeOutcome(outcome.error());
}

void LinkvisualClient::queryRecordUrlByTimeAsync(const QueryRecordUrlByTimeRequest& request, const QueryRecordUrlByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordUrlByTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRecordUrlByTimeOutcomeCallable LinkvisualClient::queryRecordUrlByTimeCallable(const QueryRecordUrlByTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordUrlByTimeOutcome()>>(
			[this, request]()
			{
			return this->queryRecordUrlByTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryRtmpKeyOutcome LinkvisualClient::queryRtmpKey(const QueryRtmpKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRtmpKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRtmpKeyOutcome(QueryRtmpKeyResult(outcome.result()));
	else
		return QueryRtmpKeyOutcome(outcome.error());
}

void LinkvisualClient::queryRtmpKeyAsync(const QueryRtmpKeyRequest& request, const QueryRtmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRtmpKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryRtmpKeyOutcomeCallable LinkvisualClient::queryRtmpKeyCallable(const QueryRtmpKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRtmpKeyOutcome()>>(
			[this, request]()
			{
			return this->queryRtmpKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryStreamPushJobOutcome LinkvisualClient::queryStreamPushJob(const QueryStreamPushJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStreamPushJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStreamPushJobOutcome(QueryStreamPushJobResult(outcome.result()));
	else
		return QueryStreamPushJobOutcome(outcome.error());
}

void LinkvisualClient::queryStreamPushJobAsync(const QueryStreamPushJobRequest& request, const QueryStreamPushJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStreamPushJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryStreamPushJobOutcomeCallable LinkvisualClient::queryStreamPushJobCallable(const QueryStreamPushJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStreamPushJobOutcome()>>(
			[this, request]()
			{
			return this->queryStreamPushJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryStreamPushJobListOutcome LinkvisualClient::queryStreamPushJobList(const QueryStreamPushJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStreamPushJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStreamPushJobListOutcome(QueryStreamPushJobListResult(outcome.result()));
	else
		return QueryStreamPushJobListOutcome(outcome.error());
}

void LinkvisualClient::queryStreamPushJobListAsync(const QueryStreamPushJobListRequest& request, const QueryStreamPushJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStreamPushJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryStreamPushJobListOutcomeCallable LinkvisualClient::queryStreamPushJobListCallable(const QueryStreamPushJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStreamPushJobListOutcome()>>(
			[this, request]()
			{
			return this->queryStreamPushJobList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryStreamSnapshotJobOutcome LinkvisualClient::queryStreamSnapshotJob(const QueryStreamSnapshotJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStreamSnapshotJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStreamSnapshotJobOutcome(QueryStreamSnapshotJobResult(outcome.result()));
	else
		return QueryStreamSnapshotJobOutcome(outcome.error());
}

void LinkvisualClient::queryStreamSnapshotJobAsync(const QueryStreamSnapshotJobRequest& request, const QueryStreamSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStreamSnapshotJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryStreamSnapshotJobOutcomeCallable LinkvisualClient::queryStreamSnapshotJobCallable(const QueryStreamSnapshotJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStreamSnapshotJobOutcome()>>(
			[this, request]()
			{
			return this->queryStreamSnapshotJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryTimeTemplateOutcome LinkvisualClient::queryTimeTemplate(const QueryTimeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTimeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTimeTemplateOutcome(QueryTimeTemplateResult(outcome.result()));
	else
		return QueryTimeTemplateOutcome(outcome.error());
}

void LinkvisualClient::queryTimeTemplateAsync(const QueryTimeTemplateRequest& request, const QueryTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTimeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryTimeTemplateOutcomeCallable LinkvisualClient::queryTimeTemplateCallable(const QueryTimeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTimeTemplateOutcome()>>(
			[this, request]()
			{
			return this->queryTimeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryTimeTemplateDetailOutcome LinkvisualClient::queryTimeTemplateDetail(const QueryTimeTemplateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTimeTemplateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTimeTemplateDetailOutcome(QueryTimeTemplateDetailResult(outcome.result()));
	else
		return QueryTimeTemplateDetailOutcome(outcome.error());
}

void LinkvisualClient::queryTimeTemplateDetailAsync(const QueryTimeTemplateDetailRequest& request, const QueryTimeTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTimeTemplateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryTimeTemplateDetailOutcomeCallable LinkvisualClient::queryTimeTemplateDetailCallable(const QueryTimeTemplateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTimeTemplateDetailOutcome()>>(
			[this, request]()
			{
			return this->queryTimeTemplateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryVisionDeviceInfoOutcome LinkvisualClient::queryVisionDeviceInfo(const QueryVisionDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVisionDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVisionDeviceInfoOutcome(QueryVisionDeviceInfoResult(outcome.result()));
	else
		return QueryVisionDeviceInfoOutcome(outcome.error());
}

void LinkvisualClient::queryVisionDeviceInfoAsync(const QueryVisionDeviceInfoRequest& request, const QueryVisionDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVisionDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryVisionDeviceInfoOutcomeCallable LinkvisualClient::queryVisionDeviceInfoCallable(const QueryVisionDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVisionDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->queryVisionDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::QueryVoiceIntercomOutcome LinkvisualClient::queryVoiceIntercom(const QueryVoiceIntercomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVoiceIntercomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVoiceIntercomOutcome(QueryVoiceIntercomResult(outcome.result()));
	else
		return QueryVoiceIntercomOutcome(outcome.error());
}

void LinkvisualClient::queryVoiceIntercomAsync(const QueryVoiceIntercomRequest& request, const QueryVoiceIntercomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVoiceIntercom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::QueryVoiceIntercomOutcomeCallable LinkvisualClient::queryVoiceIntercomCallable(const QueryVoiceIntercomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVoiceIntercomOutcome()>>(
			[this, request]()
			{
			return this->queryVoiceIntercom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::RefreshGbSubDeviceListOutcome LinkvisualClient::refreshGbSubDeviceList(const RefreshGbSubDeviceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshGbSubDeviceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshGbSubDeviceListOutcome(RefreshGbSubDeviceListResult(outcome.result()));
	else
		return RefreshGbSubDeviceListOutcome(outcome.error());
}

void LinkvisualClient::refreshGbSubDeviceListAsync(const RefreshGbSubDeviceListRequest& request, const RefreshGbSubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshGbSubDeviceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::RefreshGbSubDeviceListOutcomeCallable LinkvisualClient::refreshGbSubDeviceListCallable(const RefreshGbSubDeviceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshGbSubDeviceListOutcome()>>(
			[this, request]()
			{
			return this->refreshGbSubDeviceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::RemoveFaceDeviceFromDeviceGroupOutcome LinkvisualClient::removeFaceDeviceFromDeviceGroup(const RemoveFaceDeviceFromDeviceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveFaceDeviceFromDeviceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveFaceDeviceFromDeviceGroupOutcome(RemoveFaceDeviceFromDeviceGroupResult(outcome.result()));
	else
		return RemoveFaceDeviceFromDeviceGroupOutcome(outcome.error());
}

void LinkvisualClient::removeFaceDeviceFromDeviceGroupAsync(const RemoveFaceDeviceFromDeviceGroupRequest& request, const RemoveFaceDeviceFromDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeFaceDeviceFromDeviceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::RemoveFaceDeviceFromDeviceGroupOutcomeCallable LinkvisualClient::removeFaceDeviceFromDeviceGroupCallable(const RemoveFaceDeviceFromDeviceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveFaceDeviceFromDeviceGroupOutcome()>>(
			[this, request]()
			{
			return this->removeFaceDeviceFromDeviceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::RemoveFaceUserFromUserGroupOutcome LinkvisualClient::removeFaceUserFromUserGroup(const RemoveFaceUserFromUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveFaceUserFromUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveFaceUserFromUserGroupOutcome(RemoveFaceUserFromUserGroupResult(outcome.result()));
	else
		return RemoveFaceUserFromUserGroupOutcome(outcome.error());
}

void LinkvisualClient::removeFaceUserFromUserGroupAsync(const RemoveFaceUserFromUserGroupRequest& request, const RemoveFaceUserFromUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeFaceUserFromUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::RemoveFaceUserFromUserGroupOutcomeCallable LinkvisualClient::removeFaceUserFromUserGroupCallable(const RemoveFaceUserFromUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveFaceUserFromUserGroupOutcome()>>(
			[this, request]()
			{
			return this->removeFaceUserFromUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::SetDevicePictureLifeCycleOutcome LinkvisualClient::setDevicePictureLifeCycle(const SetDevicePictureLifeCycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDevicePictureLifeCycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDevicePictureLifeCycleOutcome(SetDevicePictureLifeCycleResult(outcome.result()));
	else
		return SetDevicePictureLifeCycleOutcome(outcome.error());
}

void LinkvisualClient::setDevicePictureLifeCycleAsync(const SetDevicePictureLifeCycleRequest& request, const SetDevicePictureLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDevicePictureLifeCycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::SetDevicePictureLifeCycleOutcomeCallable LinkvisualClient::setDevicePictureLifeCycleCallable(const SetDevicePictureLifeCycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDevicePictureLifeCycleOutcome()>>(
			[this, request]()
			{
			return this->setDevicePictureLifeCycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::SetDeviceRecordLifeCycleOutcome LinkvisualClient::setDeviceRecordLifeCycle(const SetDeviceRecordLifeCycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDeviceRecordLifeCycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDeviceRecordLifeCycleOutcome(SetDeviceRecordLifeCycleResult(outcome.result()));
	else
		return SetDeviceRecordLifeCycleOutcome(outcome.error());
}

void LinkvisualClient::setDeviceRecordLifeCycleAsync(const SetDeviceRecordLifeCycleRequest& request, const SetDeviceRecordLifeCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeviceRecordLifeCycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::SetDeviceRecordLifeCycleOutcomeCallable LinkvisualClient::setDeviceRecordLifeCycleCallable(const SetDeviceRecordLifeCycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDeviceRecordLifeCycleOutcome()>>(
			[this, request]()
			{
			return this->setDeviceRecordLifeCycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::StopLiveStreamingOutcome LinkvisualClient::stopLiveStreaming(const StopLiveStreamingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLiveStreamingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLiveStreamingOutcome(StopLiveStreamingResult(outcome.result()));
	else
		return StopLiveStreamingOutcome(outcome.error());
}

void LinkvisualClient::stopLiveStreamingAsync(const StopLiveStreamingRequest& request, const StopLiveStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLiveStreaming(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::StopLiveStreamingOutcomeCallable LinkvisualClient::stopLiveStreamingCallable(const StopLiveStreamingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLiveStreamingOutcome()>>(
			[this, request]()
			{
			return this->stopLiveStreaming(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::StopTriggeredRecordOutcome LinkvisualClient::stopTriggeredRecord(const StopTriggeredRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTriggeredRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTriggeredRecordOutcome(StopTriggeredRecordResult(outcome.result()));
	else
		return StopTriggeredRecordOutcome(outcome.error());
}

void LinkvisualClient::stopTriggeredRecordAsync(const StopTriggeredRecordRequest& request, const StopTriggeredRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTriggeredRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::StopTriggeredRecordOutcomeCallable LinkvisualClient::stopTriggeredRecordCallable(const StopTriggeredRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTriggeredRecordOutcome()>>(
			[this, request]()
			{
			return this->stopTriggeredRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::TransferDeviceInstanceOutcome LinkvisualClient::transferDeviceInstance(const TransferDeviceInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferDeviceInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferDeviceInstanceOutcome(TransferDeviceInstanceResult(outcome.result()));
	else
		return TransferDeviceInstanceOutcome(outcome.error());
}

void LinkvisualClient::transferDeviceInstanceAsync(const TransferDeviceInstanceRequest& request, const TransferDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferDeviceInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::TransferDeviceInstanceOutcomeCallable LinkvisualClient::transferDeviceInstanceCallable(const TransferDeviceInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferDeviceInstanceOutcome()>>(
			[this, request]()
			{
			return this->transferDeviceInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::TriggerCapturePictureOutcome LinkvisualClient::triggerCapturePicture(const TriggerCapturePictureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerCapturePictureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerCapturePictureOutcome(TriggerCapturePictureResult(outcome.result()));
	else
		return TriggerCapturePictureOutcome(outcome.error());
}

void LinkvisualClient::triggerCapturePictureAsync(const TriggerCapturePictureRequest& request, const TriggerCapturePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerCapturePicture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::TriggerCapturePictureOutcomeCallable LinkvisualClient::triggerCapturePictureCallable(const TriggerCapturePictureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerCapturePictureOutcome()>>(
			[this, request]()
			{
			return this->triggerCapturePicture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::TriggerRecordOutcome LinkvisualClient::triggerRecord(const TriggerRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerRecordOutcome(TriggerRecordResult(outcome.result()));
	else
		return TriggerRecordOutcome(outcome.error());
}

void LinkvisualClient::triggerRecordAsync(const TriggerRecordRequest& request, const TriggerRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::TriggerRecordOutcomeCallable LinkvisualClient::triggerRecordCallable(const TriggerRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerRecordOutcome()>>(
			[this, request]()
			{
			return this->triggerRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UnbindPictureSearchAppWithDevicesOutcome LinkvisualClient::unbindPictureSearchAppWithDevices(const UnbindPictureSearchAppWithDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindPictureSearchAppWithDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindPictureSearchAppWithDevicesOutcome(UnbindPictureSearchAppWithDevicesResult(outcome.result()));
	else
		return UnbindPictureSearchAppWithDevicesOutcome(outcome.error());
}

void LinkvisualClient::unbindPictureSearchAppWithDevicesAsync(const UnbindPictureSearchAppWithDevicesRequest& request, const UnbindPictureSearchAppWithDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindPictureSearchAppWithDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UnbindPictureSearchAppWithDevicesOutcomeCallable LinkvisualClient::unbindPictureSearchAppWithDevicesCallable(const UnbindPictureSearchAppWithDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindPictureSearchAppWithDevicesOutcome()>>(
			[this, request]()
			{
			return this->unbindPictureSearchAppWithDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateEventRecordPlanOutcome LinkvisualClient::updateEventRecordPlan(const UpdateEventRecordPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEventRecordPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEventRecordPlanOutcome(UpdateEventRecordPlanResult(outcome.result()));
	else
		return UpdateEventRecordPlanOutcome(outcome.error());
}

void LinkvisualClient::updateEventRecordPlanAsync(const UpdateEventRecordPlanRequest& request, const UpdateEventRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEventRecordPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateEventRecordPlanOutcomeCallable LinkvisualClient::updateEventRecordPlanCallable(const UpdateEventRecordPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEventRecordPlanOutcome()>>(
			[this, request]()
			{
			return this->updateEventRecordPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateFaceUserOutcome LinkvisualClient::updateFaceUser(const UpdateFaceUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFaceUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFaceUserOutcome(UpdateFaceUserResult(outcome.result()));
	else
		return UpdateFaceUserOutcome(outcome.error());
}

void LinkvisualClient::updateFaceUserAsync(const UpdateFaceUserRequest& request, const UpdateFaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFaceUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateFaceUserOutcomeCallable LinkvisualClient::updateFaceUserCallable(const UpdateFaceUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFaceUserOutcome()>>(
			[this, request]()
			{
			return this->updateFaceUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateFaceUserGroupAndDeviceGroupRelationOutcome LinkvisualClient::updateFaceUserGroupAndDeviceGroupRelation(const UpdateFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFaceUserGroupAndDeviceGroupRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFaceUserGroupAndDeviceGroupRelationOutcome(UpdateFaceUserGroupAndDeviceGroupRelationResult(outcome.result()));
	else
		return UpdateFaceUserGroupAndDeviceGroupRelationOutcome(outcome.error());
}

void LinkvisualClient::updateFaceUserGroupAndDeviceGroupRelationAsync(const UpdateFaceUserGroupAndDeviceGroupRelationRequest& request, const UpdateFaceUserGroupAndDeviceGroupRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFaceUserGroupAndDeviceGroupRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateFaceUserGroupAndDeviceGroupRelationOutcomeCallable LinkvisualClient::updateFaceUserGroupAndDeviceGroupRelationCallable(const UpdateFaceUserGroupAndDeviceGroupRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFaceUserGroupAndDeviceGroupRelationOutcome()>>(
			[this, request]()
			{
			return this->updateFaceUserGroupAndDeviceGroupRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateGbDeviceOutcome LinkvisualClient::updateGbDevice(const UpdateGbDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGbDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGbDeviceOutcome(UpdateGbDeviceResult(outcome.result()));
	else
		return UpdateGbDeviceOutcome(outcome.error());
}

void LinkvisualClient::updateGbDeviceAsync(const UpdateGbDeviceRequest& request, const UpdateGbDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGbDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateGbDeviceOutcomeCallable LinkvisualClient::updateGbDeviceCallable(const UpdateGbDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGbDeviceOutcome()>>(
			[this, request]()
			{
			return this->updateGbDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateInstanceInternetProtocolOutcome LinkvisualClient::updateInstanceInternetProtocol(const UpdateInstanceInternetProtocolRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceInternetProtocolOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceInternetProtocolOutcome(UpdateInstanceInternetProtocolResult(outcome.result()));
	else
		return UpdateInstanceInternetProtocolOutcome(outcome.error());
}

void LinkvisualClient::updateInstanceInternetProtocolAsync(const UpdateInstanceInternetProtocolRequest& request, const UpdateInstanceInternetProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceInternetProtocol(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateInstanceInternetProtocolOutcomeCallable LinkvisualClient::updateInstanceInternetProtocolCallable(const UpdateInstanceInternetProtocolRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceInternetProtocolOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceInternetProtocol(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdatePictureSearchAppOutcome LinkvisualClient::updatePictureSearchApp(const UpdatePictureSearchAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePictureSearchAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePictureSearchAppOutcome(UpdatePictureSearchAppResult(outcome.result()));
	else
		return UpdatePictureSearchAppOutcome(outcome.error());
}

void LinkvisualClient::updatePictureSearchAppAsync(const UpdatePictureSearchAppRequest& request, const UpdatePictureSearchAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePictureSearchApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdatePictureSearchAppOutcomeCallable LinkvisualClient::updatePictureSearchAppCallable(const UpdatePictureSearchAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePictureSearchAppOutcome()>>(
			[this, request]()
			{
			return this->updatePictureSearchApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateRecordPlanOutcome LinkvisualClient::updateRecordPlan(const UpdateRecordPlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRecordPlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRecordPlanOutcome(UpdateRecordPlanResult(outcome.result()));
	else
		return UpdateRecordPlanOutcome(outcome.error());
}

void LinkvisualClient::updateRecordPlanAsync(const UpdateRecordPlanRequest& request, const UpdateRecordPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRecordPlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateRecordPlanOutcomeCallable LinkvisualClient::updateRecordPlanCallable(const UpdateRecordPlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRecordPlanOutcome()>>(
			[this, request]()
			{
			return this->updateRecordPlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateRtmpKeyOutcome LinkvisualClient::updateRtmpKey(const UpdateRtmpKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRtmpKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRtmpKeyOutcome(UpdateRtmpKeyResult(outcome.result()));
	else
		return UpdateRtmpKeyOutcome(outcome.error());
}

void LinkvisualClient::updateRtmpKeyAsync(const UpdateRtmpKeyRequest& request, const UpdateRtmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRtmpKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateRtmpKeyOutcomeCallable LinkvisualClient::updateRtmpKeyCallable(const UpdateRtmpKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRtmpKeyOutcome()>>(
			[this, request]()
			{
			return this->updateRtmpKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LinkvisualClient::UpdateTimeTemplateOutcome LinkvisualClient::updateTimeTemplate(const UpdateTimeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTimeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTimeTemplateOutcome(UpdateTimeTemplateResult(outcome.result()));
	else
		return UpdateTimeTemplateOutcome(outcome.error());
}

void LinkvisualClient::updateTimeTemplateAsync(const UpdateTimeTemplateRequest& request, const UpdateTimeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTimeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LinkvisualClient::UpdateTimeTemplateOutcomeCallable LinkvisualClient::updateTimeTemplateCallable(const UpdateTimeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTimeTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateTimeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

