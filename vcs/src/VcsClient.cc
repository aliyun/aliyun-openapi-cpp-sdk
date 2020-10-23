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

#include <alibabacloud/vcs/VcsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

namespace
{
	const std::string SERVICE_NAME = "Vcs";
}

VcsClient::VcsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VcsClient::VcsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VcsClient::VcsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VcsClient::~VcsClient()
{}

VcsClient::AddDataSourceOutcome VcsClient::addDataSource(const AddDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDataSourceOutcome(AddDataSourceResult(outcome.result()));
	else
		return AddDataSourceOutcome(outcome.error());
}

void VcsClient::addDataSourceAsync(const AddDataSourceRequest& request, const AddDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::AddDataSourceOutcomeCallable VcsClient::addDataSourceCallable(const AddDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDataSourceOutcome()>>(
			[this, request]()
			{
			return this->addDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::AddDeviceOutcome VcsClient::addDevice(const AddDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDeviceOutcome(AddDeviceResult(outcome.result()));
	else
		return AddDeviceOutcome(outcome.error());
}

void VcsClient::addDeviceAsync(const AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::AddDeviceOutcomeCallable VcsClient::addDeviceCallable(const AddDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDeviceOutcome()>>(
			[this, request]()
			{
			return this->addDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::AddMonitorOutcome VcsClient::addMonitor(const AddMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMonitorOutcome(AddMonitorResult(outcome.result()));
	else
		return AddMonitorOutcome(outcome.error());
}

void VcsClient::addMonitorAsync(const AddMonitorRequest& request, const AddMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::AddMonitorOutcomeCallable VcsClient::addMonitorCallable(const AddMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMonitorOutcome()>>(
			[this, request]()
			{
			return this->addMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::AddProfileOutcome VcsClient::addProfile(const AddProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddProfileOutcome(AddProfileResult(outcome.result()));
	else
		return AddProfileOutcome(outcome.error());
}

void VcsClient::addProfileAsync(const AddProfileRequest& request, const AddProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::AddProfileOutcomeCallable VcsClient::addProfileCallable(const AddProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddProfileOutcome()>>(
			[this, request]()
			{
			return this->addProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::AddProfileCatalogOutcome VcsClient::addProfileCatalog(const AddProfileCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddProfileCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddProfileCatalogOutcome(AddProfileCatalogResult(outcome.result()));
	else
		return AddProfileCatalogOutcome(outcome.error());
}

void VcsClient::addProfileCatalogAsync(const AddProfileCatalogRequest& request, const AddProfileCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addProfileCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::AddProfileCatalogOutcomeCallable VcsClient::addProfileCatalogCallable(const AddProfileCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddProfileCatalogOutcome()>>(
			[this, request]()
			{
			return this->addProfileCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::BindCorpGroupOutcome VcsClient::bindCorpGroup(const BindCorpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindCorpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindCorpGroupOutcome(BindCorpGroupResult(outcome.result()));
	else
		return BindCorpGroupOutcome(outcome.error());
}

void VcsClient::bindCorpGroupAsync(const BindCorpGroupRequest& request, const BindCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindCorpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::BindCorpGroupOutcomeCallable VcsClient::bindCorpGroupCallable(const BindCorpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindCorpGroupOutcome()>>(
			[this, request]()
			{
			return this->bindCorpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::BindPersonOutcome VcsClient::bindPerson(const BindPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindPersonOutcome(BindPersonResult(outcome.result()));
	else
		return BindPersonOutcome(outcome.error());
}

void VcsClient::bindPersonAsync(const BindPersonRequest& request, const BindPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::BindPersonOutcomeCallable VcsClient::bindPersonCallable(const BindPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindPersonOutcome()>>(
			[this, request]()
			{
			return this->bindPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::BindUserOutcome VcsClient::bindUser(const BindUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindUserOutcome(BindUserResult(outcome.result()));
	else
		return BindUserOutcome(outcome.error());
}

void VcsClient::bindUserAsync(const BindUserRequest& request, const BindUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::BindUserOutcomeCallable VcsClient::bindUserCallable(const BindUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindUserOutcome()>>(
			[this, request]()
			{
			return this->bindUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::CreateCorpOutcome VcsClient::createCorp(const CreateCorpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCorpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCorpOutcome(CreateCorpResult(outcome.result()));
	else
		return CreateCorpOutcome(outcome.error());
}

void VcsClient::createCorpAsync(const CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCorp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::CreateCorpOutcomeCallable VcsClient::createCorpCallable(const CreateCorpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCorpOutcome()>>(
			[this, request]()
			{
			return this->createCorp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::CreateCorpGroupOutcome VcsClient::createCorpGroup(const CreateCorpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCorpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCorpGroupOutcome(CreateCorpGroupResult(outcome.result()));
	else
		return CreateCorpGroupOutcome(outcome.error());
}

void VcsClient::createCorpGroupAsync(const CreateCorpGroupRequest& request, const CreateCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCorpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::CreateCorpGroupOutcomeCallable VcsClient::createCorpGroupCallable(const CreateCorpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCorpGroupOutcome()>>(
			[this, request]()
			{
			return this->createCorpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::CreateUserOutcome VcsClient::createUser(const CreateUserRequest &request) const
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

void VcsClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::CreateUserOutcomeCallable VcsClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::CreateUserGroupOutcome VcsClient::createUserGroup(const CreateUserGroupRequest &request) const
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

void VcsClient::createUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::CreateUserGroupOutcomeCallable VcsClient::createUserGroupCallable(const CreateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->createUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::CreateVideoComposeTaskOutcome VcsClient::createVideoComposeTask(const CreateVideoComposeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoComposeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoComposeTaskOutcome(CreateVideoComposeTaskResult(outcome.result()));
	else
		return CreateVideoComposeTaskOutcome(outcome.error());
}

void VcsClient::createVideoComposeTaskAsync(const CreateVideoComposeTaskRequest& request, const CreateVideoComposeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoComposeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::CreateVideoComposeTaskOutcomeCallable VcsClient::createVideoComposeTaskCallable(const CreateVideoComposeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoComposeTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoComposeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::CreateVideoSummaryTaskOutcome VcsClient::createVideoSummaryTask(const CreateVideoSummaryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVideoSummaryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVideoSummaryTaskOutcome(CreateVideoSummaryTaskResult(outcome.result()));
	else
		return CreateVideoSummaryTaskOutcome(outcome.error());
}

void VcsClient::createVideoSummaryTaskAsync(const CreateVideoSummaryTaskRequest& request, const CreateVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVideoSummaryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::CreateVideoSummaryTaskOutcomeCallable VcsClient::createVideoSummaryTaskCallable(const CreateVideoSummaryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVideoSummaryTaskOutcome()>>(
			[this, request]()
			{
			return this->createVideoSummaryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteCorpGroupOutcome VcsClient::deleteCorpGroup(const DeleteCorpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCorpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCorpGroupOutcome(DeleteCorpGroupResult(outcome.result()));
	else
		return DeleteCorpGroupOutcome(outcome.error());
}

void VcsClient::deleteCorpGroupAsync(const DeleteCorpGroupRequest& request, const DeleteCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCorpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteCorpGroupOutcomeCallable VcsClient::deleteCorpGroupCallable(const DeleteCorpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCorpGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteCorpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteDataSourceOutcome VcsClient::deleteDataSource(const DeleteDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataSourceOutcome(DeleteDataSourceResult(outcome.result()));
	else
		return DeleteDataSourceOutcome(outcome.error());
}

void VcsClient::deleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteDataSourceOutcomeCallable VcsClient::deleteDataSourceCallable(const DeleteDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteDeviceOutcome VcsClient::deleteDevice(const DeleteDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDeviceOutcome(DeleteDeviceResult(outcome.result()));
	else
		return DeleteDeviceOutcome(outcome.error());
}

void VcsClient::deleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteDeviceOutcomeCallable VcsClient::deleteDeviceCallable(const DeleteDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteProfileOutcome VcsClient::deleteProfile(const DeleteProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProfileOutcome(DeleteProfileResult(outcome.result()));
	else
		return DeleteProfileOutcome(outcome.error());
}

void VcsClient::deleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteProfileOutcomeCallable VcsClient::deleteProfileCallable(const DeleteProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProfileOutcome()>>(
			[this, request]()
			{
			return this->deleteProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteProfileCatalogOutcome VcsClient::deleteProfileCatalog(const DeleteProfileCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProfileCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProfileCatalogOutcome(DeleteProfileCatalogResult(outcome.result()));
	else
		return DeleteProfileCatalogOutcome(outcome.error());
}

void VcsClient::deleteProfileCatalogAsync(const DeleteProfileCatalogRequest& request, const DeleteProfileCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProfileCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteProfileCatalogOutcomeCallable VcsClient::deleteProfileCatalogCallable(const DeleteProfileCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProfileCatalogOutcome()>>(
			[this, request]()
			{
			return this->deleteProfileCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteRecordsOutcome VcsClient::deleteRecords(const DeleteRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecordsOutcome(DeleteRecordsResult(outcome.result()));
	else
		return DeleteRecordsOutcome(outcome.error());
}

void VcsClient::deleteRecordsAsync(const DeleteRecordsRequest& request, const DeleteRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteRecordsOutcomeCallable VcsClient::deleteRecordsCallable(const DeleteRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecordsOutcome()>>(
			[this, request]()
			{
			return this->deleteRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteUserOutcome VcsClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void VcsClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteUserOutcomeCallable VcsClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteUserGroupOutcome VcsClient::deleteUserGroup(const DeleteUserGroupRequest &request) const
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

void VcsClient::deleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteUserGroupOutcomeCallable VcsClient::deleteUserGroupCallable(const DeleteUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DeleteVideoSummaryTaskOutcome VcsClient::deleteVideoSummaryTask(const DeleteVideoSummaryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVideoSummaryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVideoSummaryTaskOutcome(DeleteVideoSummaryTaskResult(outcome.result()));
	else
		return DeleteVideoSummaryTaskOutcome(outcome.error());
}

void VcsClient::deleteVideoSummaryTaskAsync(const DeleteVideoSummaryTaskRequest& request, const DeleteVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVideoSummaryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DeleteVideoSummaryTaskOutcomeCallable VcsClient::deleteVideoSummaryTaskCallable(const DeleteVideoSummaryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVideoSummaryTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteVideoSummaryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::DescribeDevicesOutcome VcsClient::describeDevices(const DescribeDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDevicesOutcome(DescribeDevicesResult(outcome.result()));
	else
		return DescribeDevicesOutcome(outcome.error());
}

void VcsClient::describeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::DescribeDevicesOutcomeCallable VcsClient::describeDevicesCallable(const DescribeDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetBodyOptionsOutcome VcsClient::getBodyOptions(const GetBodyOptionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBodyOptionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBodyOptionsOutcome(GetBodyOptionsResult(outcome.result()));
	else
		return GetBodyOptionsOutcome(outcome.error());
}

void VcsClient::getBodyOptionsAsync(const GetBodyOptionsRequest& request, const GetBodyOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBodyOptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetBodyOptionsOutcomeCallable VcsClient::getBodyOptionsCallable(const GetBodyOptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBodyOptionsOutcome()>>(
			[this, request]()
			{
			return this->getBodyOptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetCatalogListOutcome VcsClient::getCatalogList(const GetCatalogListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCatalogListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCatalogListOutcome(GetCatalogListResult(outcome.result()));
	else
		return GetCatalogListOutcome(outcome.error());
}

void VcsClient::getCatalogListAsync(const GetCatalogListRequest& request, const GetCatalogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCatalogList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetCatalogListOutcomeCallable VcsClient::getCatalogListCallable(const GetCatalogListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCatalogListOutcome()>>(
			[this, request]()
			{
			return this->getCatalogList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetDeviceConfigOutcome VcsClient::getDeviceConfig(const GetDeviceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceConfigOutcome(GetDeviceConfigResult(outcome.result()));
	else
		return GetDeviceConfigOutcome(outcome.error());
}

void VcsClient::getDeviceConfigAsync(const GetDeviceConfigRequest& request, const GetDeviceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetDeviceConfigOutcomeCallable VcsClient::getDeviceConfigCallable(const GetDeviceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceConfigOutcome()>>(
			[this, request]()
			{
			return this->getDeviceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetDeviceLiveUrlOutcome VcsClient::getDeviceLiveUrl(const GetDeviceLiveUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceLiveUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceLiveUrlOutcome(GetDeviceLiveUrlResult(outcome.result()));
	else
		return GetDeviceLiveUrlOutcome(outcome.error());
}

void VcsClient::getDeviceLiveUrlAsync(const GetDeviceLiveUrlRequest& request, const GetDeviceLiveUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceLiveUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetDeviceLiveUrlOutcomeCallable VcsClient::getDeviceLiveUrlCallable(const GetDeviceLiveUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceLiveUrlOutcome()>>(
			[this, request]()
			{
			return this->getDeviceLiveUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetDeviceVideoUrlOutcome VcsClient::getDeviceVideoUrl(const GetDeviceVideoUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeviceVideoUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeviceVideoUrlOutcome(GetDeviceVideoUrlResult(outcome.result()));
	else
		return GetDeviceVideoUrlOutcome(outcome.error());
}

void VcsClient::getDeviceVideoUrlAsync(const GetDeviceVideoUrlRequest& request, const GetDeviceVideoUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeviceVideoUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetDeviceVideoUrlOutcomeCallable VcsClient::getDeviceVideoUrlCallable(const GetDeviceVideoUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeviceVideoUrlOutcome()>>(
			[this, request]()
			{
			return this->getDeviceVideoUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetFaceModelResultOutcome VcsClient::getFaceModelResult(const GetFaceModelResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFaceModelResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFaceModelResultOutcome(GetFaceModelResultResult(outcome.result()));
	else
		return GetFaceModelResultOutcome(outcome.error());
}

void VcsClient::getFaceModelResultAsync(const GetFaceModelResultRequest& request, const GetFaceModelResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFaceModelResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetFaceModelResultOutcomeCallable VcsClient::getFaceModelResultCallable(const GetFaceModelResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFaceModelResultOutcome()>>(
			[this, request]()
			{
			return this->getFaceModelResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetFaceOptionsOutcome VcsClient::getFaceOptions(const GetFaceOptionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFaceOptionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFaceOptionsOutcome(GetFaceOptionsResult(outcome.result()));
	else
		return GetFaceOptionsOutcome(outcome.error());
}

void VcsClient::getFaceOptionsAsync(const GetFaceOptionsRequest& request, const GetFaceOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFaceOptions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetFaceOptionsOutcomeCallable VcsClient::getFaceOptionsCallable(const GetFaceOptionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFaceOptionsOutcome()>>(
			[this, request]()
			{
			return this->getFaceOptions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetInventoryOutcome VcsClient::getInventory(const GetInventoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInventoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInventoryOutcome(GetInventoryResult(outcome.result()));
	else
		return GetInventoryOutcome(outcome.error());
}

void VcsClient::getInventoryAsync(const GetInventoryRequest& request, const GetInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInventory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetInventoryOutcomeCallable VcsClient::getInventoryCallable(const GetInventoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInventoryOutcome()>>(
			[this, request]()
			{
			return this->getInventory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetMonitorListOutcome VcsClient::getMonitorList(const GetMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMonitorListOutcome(GetMonitorListResult(outcome.result()));
	else
		return GetMonitorListOutcome(outcome.error());
}

void VcsClient::getMonitorListAsync(const GetMonitorListRequest& request, const GetMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetMonitorListOutcomeCallable VcsClient::getMonitorListCallable(const GetMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMonitorListOutcome()>>(
			[this, request]()
			{
			return this->getMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetMonitorResultOutcome VcsClient::getMonitorResult(const GetMonitorResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMonitorResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMonitorResultOutcome(GetMonitorResultResult(outcome.result()));
	else
		return GetMonitorResultOutcome(outcome.error());
}

void VcsClient::getMonitorResultAsync(const GetMonitorResultRequest& request, const GetMonitorResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMonitorResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetMonitorResultOutcomeCallable VcsClient::getMonitorResultCallable(const GetMonitorResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMonitorResultOutcome()>>(
			[this, request]()
			{
			return this->getMonitorResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetPersonDetailOutcome VcsClient::getPersonDetail(const GetPersonDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonDetailOutcome(GetPersonDetailResult(outcome.result()));
	else
		return GetPersonDetailOutcome(outcome.error());
}

void VcsClient::getPersonDetailAsync(const GetPersonDetailRequest& request, const GetPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPersonDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetPersonDetailOutcomeCallable VcsClient::getPersonDetailCallable(const GetPersonDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonDetailOutcome()>>(
			[this, request]()
			{
			return this->getPersonDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetPersonListOutcome VcsClient::getPersonList(const GetPersonListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonListOutcome(GetPersonListResult(outcome.result()));
	else
		return GetPersonListOutcome(outcome.error());
}

void VcsClient::getPersonListAsync(const GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPersonList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetPersonListOutcomeCallable VcsClient::getPersonListCallable(const GetPersonListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonListOutcome()>>(
			[this, request]()
			{
			return this->getPersonList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetProfileDetailOutcome VcsClient::getProfileDetail(const GetProfileDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProfileDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProfileDetailOutcome(GetProfileDetailResult(outcome.result()));
	else
		return GetProfileDetailOutcome(outcome.error());
}

void VcsClient::getProfileDetailAsync(const GetProfileDetailRequest& request, const GetProfileDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProfileDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetProfileDetailOutcomeCallable VcsClient::getProfileDetailCallable(const GetProfileDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProfileDetailOutcome()>>(
			[this, request]()
			{
			return this->getProfileDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetProfileListOutcome VcsClient::getProfileList(const GetProfileListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProfileListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProfileListOutcome(GetProfileListResult(outcome.result()));
	else
		return GetProfileListOutcome(outcome.error());
}

void VcsClient::getProfileListAsync(const GetProfileListRequest& request, const GetProfileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProfileList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetProfileListOutcomeCallable VcsClient::getProfileListCallable(const GetProfileListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProfileListOutcome()>>(
			[this, request]()
			{
			return this->getProfileList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetUserDetailOutcome VcsClient::getUserDetail(const GetUserDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserDetailOutcome(GetUserDetailResult(outcome.result()));
	else
		return GetUserDetailOutcome(outcome.error());
}

void VcsClient::getUserDetailAsync(const GetUserDetailRequest& request, const GetUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetUserDetailOutcomeCallable VcsClient::getUserDetailCallable(const GetUserDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserDetailOutcome()>>(
			[this, request]()
			{
			return this->getUserDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetVideoComposeResultOutcome VcsClient::getVideoComposeResult(const GetVideoComposeResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoComposeResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoComposeResultOutcome(GetVideoComposeResultResult(outcome.result()));
	else
		return GetVideoComposeResultOutcome(outcome.error());
}

void VcsClient::getVideoComposeResultAsync(const GetVideoComposeResultRequest& request, const GetVideoComposeResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoComposeResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetVideoComposeResultOutcomeCallable VcsClient::getVideoComposeResultCallable(const GetVideoComposeResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoComposeResultOutcome()>>(
			[this, request]()
			{
			return this->getVideoComposeResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::GetVideoSummaryTaskResultOutcome VcsClient::getVideoSummaryTaskResult(const GetVideoSummaryTaskResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoSummaryTaskResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoSummaryTaskResultOutcome(GetVideoSummaryTaskResultResult(outcome.result()));
	else
		return GetVideoSummaryTaskResultOutcome(outcome.error());
}

void VcsClient::getVideoSummaryTaskResultAsync(const GetVideoSummaryTaskResultRequest& request, const GetVideoSummaryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoSummaryTaskResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::GetVideoSummaryTaskResultOutcomeCallable VcsClient::getVideoSummaryTaskResultCallable(const GetVideoSummaryTaskResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoSummaryTaskResultOutcome()>>(
			[this, request]()
			{
			return this->getVideoSummaryTaskResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::InvokeMotorModelOutcome VcsClient::invokeMotorModel(const InvokeMotorModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvokeMotorModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvokeMotorModelOutcome(InvokeMotorModelResult(outcome.result()));
	else
		return InvokeMotorModelOutcome(outcome.error());
}

void VcsClient::invokeMotorModelAsync(const InvokeMotorModelRequest& request, const InvokeMotorModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invokeMotorModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::InvokeMotorModelOutcomeCallable VcsClient::invokeMotorModelCallable(const InvokeMotorModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvokeMotorModelOutcome()>>(
			[this, request]()
			{
			return this->invokeMotorModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListBodyAlgorithmResultsOutcome VcsClient::listBodyAlgorithmResults(const ListBodyAlgorithmResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBodyAlgorithmResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBodyAlgorithmResultsOutcome(ListBodyAlgorithmResultsResult(outcome.result()));
	else
		return ListBodyAlgorithmResultsOutcome(outcome.error());
}

void VcsClient::listBodyAlgorithmResultsAsync(const ListBodyAlgorithmResultsRequest& request, const ListBodyAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBodyAlgorithmResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListBodyAlgorithmResultsOutcomeCallable VcsClient::listBodyAlgorithmResultsCallable(const ListBodyAlgorithmResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBodyAlgorithmResultsOutcome()>>(
			[this, request]()
			{
			return this->listBodyAlgorithmResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListCorpGroupMetricsOutcome VcsClient::listCorpGroupMetrics(const ListCorpGroupMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCorpGroupMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCorpGroupMetricsOutcome(ListCorpGroupMetricsResult(outcome.result()));
	else
		return ListCorpGroupMetricsOutcome(outcome.error());
}

void VcsClient::listCorpGroupMetricsAsync(const ListCorpGroupMetricsRequest& request, const ListCorpGroupMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCorpGroupMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListCorpGroupMetricsOutcomeCallable VcsClient::listCorpGroupMetricsCallable(const ListCorpGroupMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCorpGroupMetricsOutcome()>>(
			[this, request]()
			{
			return this->listCorpGroupMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListCorpGroupsOutcome VcsClient::listCorpGroups(const ListCorpGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCorpGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCorpGroupsOutcome(ListCorpGroupsResult(outcome.result()));
	else
		return ListCorpGroupsOutcome(outcome.error());
}

void VcsClient::listCorpGroupsAsync(const ListCorpGroupsRequest& request, const ListCorpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCorpGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListCorpGroupsOutcomeCallable VcsClient::listCorpGroupsCallable(const ListCorpGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCorpGroupsOutcome()>>(
			[this, request]()
			{
			return this->listCorpGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListCorpMetricsOutcome VcsClient::listCorpMetrics(const ListCorpMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCorpMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCorpMetricsOutcome(ListCorpMetricsResult(outcome.result()));
	else
		return ListCorpMetricsOutcome(outcome.error());
}

void VcsClient::listCorpMetricsAsync(const ListCorpMetricsRequest& request, const ListCorpMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCorpMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListCorpMetricsOutcomeCallable VcsClient::listCorpMetricsCallable(const ListCorpMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCorpMetricsOutcome()>>(
			[this, request]()
			{
			return this->listCorpMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListCorpsOutcome VcsClient::listCorps(const ListCorpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCorpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCorpsOutcome(ListCorpsResult(outcome.result()));
	else
		return ListCorpsOutcome(outcome.error());
}

void VcsClient::listCorpsAsync(const ListCorpsRequest& request, const ListCorpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCorps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListCorpsOutcomeCallable VcsClient::listCorpsCallable(const ListCorpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCorpsOutcome()>>(
			[this, request]()
			{
			return this->listCorps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListDeviceGroupsOutcome VcsClient::listDeviceGroups(const ListDeviceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceGroupsOutcome(ListDeviceGroupsResult(outcome.result()));
	else
		return ListDeviceGroupsOutcome(outcome.error());
}

void VcsClient::listDeviceGroupsAsync(const ListDeviceGroupsRequest& request, const ListDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListDeviceGroupsOutcomeCallable VcsClient::listDeviceGroupsCallable(const ListDeviceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listDeviceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListDevicesOutcome VcsClient::listDevices(const ListDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevicesOutcome(ListDevicesResult(outcome.result()));
	else
		return ListDevicesOutcome(outcome.error());
}

void VcsClient::listDevicesAsync(const ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListDevicesOutcomeCallable VcsClient::listDevicesCallable(const ListDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevicesOutcome()>>(
			[this, request]()
			{
			return this->listDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListEventAlgorithmDetailsOutcome VcsClient::listEventAlgorithmDetails(const ListEventAlgorithmDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventAlgorithmDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventAlgorithmDetailsOutcome(ListEventAlgorithmDetailsResult(outcome.result()));
	else
		return ListEventAlgorithmDetailsOutcome(outcome.error());
}

void VcsClient::listEventAlgorithmDetailsAsync(const ListEventAlgorithmDetailsRequest& request, const ListEventAlgorithmDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventAlgorithmDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListEventAlgorithmDetailsOutcomeCallable VcsClient::listEventAlgorithmDetailsCallable(const ListEventAlgorithmDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventAlgorithmDetailsOutcome()>>(
			[this, request]()
			{
			return this->listEventAlgorithmDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListEventAlgorithmResultsOutcome VcsClient::listEventAlgorithmResults(const ListEventAlgorithmResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventAlgorithmResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventAlgorithmResultsOutcome(ListEventAlgorithmResultsResult(outcome.result()));
	else
		return ListEventAlgorithmResultsOutcome(outcome.error());
}

void VcsClient::listEventAlgorithmResultsAsync(const ListEventAlgorithmResultsRequest& request, const ListEventAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventAlgorithmResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListEventAlgorithmResultsOutcomeCallable VcsClient::listEventAlgorithmResultsCallable(const ListEventAlgorithmResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventAlgorithmResultsOutcome()>>(
			[this, request]()
			{
			return this->listEventAlgorithmResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListFaceAlgorithmResultsOutcome VcsClient::listFaceAlgorithmResults(const ListFaceAlgorithmResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFaceAlgorithmResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFaceAlgorithmResultsOutcome(ListFaceAlgorithmResultsResult(outcome.result()));
	else
		return ListFaceAlgorithmResultsOutcome(outcome.error());
}

void VcsClient::listFaceAlgorithmResultsAsync(const ListFaceAlgorithmResultsRequest& request, const ListFaceAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFaceAlgorithmResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListFaceAlgorithmResultsOutcomeCallable VcsClient::listFaceAlgorithmResultsCallable(const ListFaceAlgorithmResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFaceAlgorithmResultsOutcome()>>(
			[this, request]()
			{
			return this->listFaceAlgorithmResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListMetricsOutcome VcsClient::listMetrics(const ListMetricsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMetricsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMetricsOutcome(ListMetricsResult(outcome.result()));
	else
		return ListMetricsOutcome(outcome.error());
}

void VcsClient::listMetricsAsync(const ListMetricsRequest& request, const ListMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMetrics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListMetricsOutcomeCallable VcsClient::listMetricsCallable(const ListMetricsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMetricsOutcome()>>(
			[this, request]()
			{
			return this->listMetrics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListMotorAlgorithmResultsOutcome VcsClient::listMotorAlgorithmResults(const ListMotorAlgorithmResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMotorAlgorithmResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMotorAlgorithmResultsOutcome(ListMotorAlgorithmResultsResult(outcome.result()));
	else
		return ListMotorAlgorithmResultsOutcome(outcome.error());
}

void VcsClient::listMotorAlgorithmResultsAsync(const ListMotorAlgorithmResultsRequest& request, const ListMotorAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMotorAlgorithmResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListMotorAlgorithmResultsOutcomeCallable VcsClient::listMotorAlgorithmResultsCallable(const ListMotorAlgorithmResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMotorAlgorithmResultsOutcome()>>(
			[this, request]()
			{
			return this->listMotorAlgorithmResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListPersonTraceOutcome VcsClient::listPersonTrace(const ListPersonTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonTraceOutcome(ListPersonTraceResult(outcome.result()));
	else
		return ListPersonTraceOutcome(outcome.error());
}

void VcsClient::listPersonTraceAsync(const ListPersonTraceRequest& request, const ListPersonTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListPersonTraceOutcomeCallable VcsClient::listPersonTraceCallable(const ListPersonTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonTraceOutcome()>>(
			[this, request]()
			{
			return this->listPersonTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListPersonTraceDetailsOutcome VcsClient::listPersonTraceDetails(const ListPersonTraceDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonTraceDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonTraceDetailsOutcome(ListPersonTraceDetailsResult(outcome.result()));
	else
		return ListPersonTraceDetailsOutcome(outcome.error());
}

void VcsClient::listPersonTraceDetailsAsync(const ListPersonTraceDetailsRequest& request, const ListPersonTraceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonTraceDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListPersonTraceDetailsOutcomeCallable VcsClient::listPersonTraceDetailsCallable(const ListPersonTraceDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonTraceDetailsOutcome()>>(
			[this, request]()
			{
			return this->listPersonTraceDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListPersonVisitCountOutcome VcsClient::listPersonVisitCount(const ListPersonVisitCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonVisitCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonVisitCountOutcome(ListPersonVisitCountResult(outcome.result()));
	else
		return ListPersonVisitCountOutcome(outcome.error());
}

void VcsClient::listPersonVisitCountAsync(const ListPersonVisitCountRequest& request, const ListPersonVisitCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonVisitCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListPersonVisitCountOutcomeCallable VcsClient::listPersonVisitCountCallable(const ListPersonVisitCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonVisitCountOutcome()>>(
			[this, request]()
			{
			return this->listPersonVisitCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListPersonsOutcome VcsClient::listPersons(const ListPersonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonsOutcome(ListPersonsResult(outcome.result()));
	else
		return ListPersonsOutcome(outcome.error());
}

void VcsClient::listPersonsAsync(const ListPersonsRequest& request, const ListPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListPersonsOutcomeCallable VcsClient::listPersonsCallable(const ListPersonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonsOutcome()>>(
			[this, request]()
			{
			return this->listPersons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListSubscribeDeviceOutcome VcsClient::listSubscribeDevice(const ListSubscribeDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSubscribeDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSubscribeDeviceOutcome(ListSubscribeDeviceResult(outcome.result()));
	else
		return ListSubscribeDeviceOutcome(outcome.error());
}

void VcsClient::listSubscribeDeviceAsync(const ListSubscribeDeviceRequest& request, const ListSubscribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSubscribeDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListSubscribeDeviceOutcomeCallable VcsClient::listSubscribeDeviceCallable(const ListSubscribeDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSubscribeDeviceOutcome()>>(
			[this, request]()
			{
			return this->listSubscribeDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListUserGroupsOutcome VcsClient::listUserGroups(const ListUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserGroupsOutcome(ListUserGroupsResult(outcome.result()));
	else
		return ListUserGroupsOutcome(outcome.error());
}

void VcsClient::listUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListUserGroupsOutcomeCallable VcsClient::listUserGroupsCallable(const ListUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->listUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ListUsersOutcome VcsClient::listUsers(const ListUsersRequest &request) const
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

void VcsClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ListUsersOutcomeCallable VcsClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::RecognizeFaceQualityOutcome VcsClient::recognizeFaceQuality(const RecognizeFaceQualityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeFaceQualityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeFaceQualityOutcome(RecognizeFaceQualityResult(outcome.result()));
	else
		return RecognizeFaceQualityOutcome(outcome.error());
}

void VcsClient::recognizeFaceQualityAsync(const RecognizeFaceQualityRequest& request, const RecognizeFaceQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeFaceQuality(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::RecognizeFaceQualityOutcomeCallable VcsClient::recognizeFaceQualityCallable(const RecognizeFaceQualityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeFaceQualityOutcome()>>(
			[this, request]()
			{
			return this->recognizeFaceQuality(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::RecognizeImageOutcome VcsClient::recognizeImage(const RecognizeImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeImageOutcome(RecognizeImageResult(outcome.result()));
	else
		return RecognizeImageOutcome(outcome.error());
}

void VcsClient::recognizeImageAsync(const RecognizeImageRequest& request, const RecognizeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::RecognizeImageOutcomeCallable VcsClient::recognizeImageCallable(const RecognizeImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeImageOutcome()>>(
			[this, request]()
			{
			return this->recognizeImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::RegisterDeviceOutcome VcsClient::registerDevice(const RegisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDeviceOutcome(RegisterDeviceResult(outcome.result()));
	else
		return RegisterDeviceOutcome(outcome.error());
}

void VcsClient::registerDeviceAsync(const RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::RegisterDeviceOutcomeCallable VcsClient::registerDeviceCallable(const RegisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->registerDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::ReportDeviceCapacityOutcome VcsClient::reportDeviceCapacity(const ReportDeviceCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportDeviceCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportDeviceCapacityOutcome(ReportDeviceCapacityResult(outcome.result()));
	else
		return ReportDeviceCapacityOutcome(outcome.error());
}

void VcsClient::reportDeviceCapacityAsync(const ReportDeviceCapacityRequest& request, const ReportDeviceCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportDeviceCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::ReportDeviceCapacityOutcomeCallable VcsClient::reportDeviceCapacityCallable(const ReportDeviceCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportDeviceCapacityOutcome()>>(
			[this, request]()
			{
			return this->reportDeviceCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SaveVideoSummaryTaskVideoOutcome VcsClient::saveVideoSummaryTaskVideo(const SaveVideoSummaryTaskVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveVideoSummaryTaskVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveVideoSummaryTaskVideoOutcome(SaveVideoSummaryTaskVideoResult(outcome.result()));
	else
		return SaveVideoSummaryTaskVideoOutcome(outcome.error());
}

void VcsClient::saveVideoSummaryTaskVideoAsync(const SaveVideoSummaryTaskVideoRequest& request, const SaveVideoSummaryTaskVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveVideoSummaryTaskVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SaveVideoSummaryTaskVideoOutcomeCallable VcsClient::saveVideoSummaryTaskVideoCallable(const SaveVideoSummaryTaskVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveVideoSummaryTaskVideoOutcome()>>(
			[this, request]()
			{
			return this->saveVideoSummaryTaskVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SearchBodyOutcome VcsClient::searchBody(const SearchBodyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchBodyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchBodyOutcome(SearchBodyResult(outcome.result()));
	else
		return SearchBodyOutcome(outcome.error());
}

void VcsClient::searchBodyAsync(const SearchBodyRequest& request, const SearchBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchBody(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SearchBodyOutcomeCallable VcsClient::searchBodyCallable(const SearchBodyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchBodyOutcome()>>(
			[this, request]()
			{
			return this->searchBody(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SearchFaceOutcome VcsClient::searchFace(const SearchFaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchFaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchFaceOutcome(SearchFaceResult(outcome.result()));
	else
		return SearchFaceOutcome(outcome.error());
}

void VcsClient::searchFaceAsync(const SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchFace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SearchFaceOutcomeCallable VcsClient::searchFaceCallable(const SearchFaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchFaceOutcome()>>(
			[this, request]()
			{
			return this->searchFace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SearchObjectOutcome VcsClient::searchObject(const SearchObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchObjectOutcome(SearchObjectResult(outcome.result()));
	else
		return SearchObjectOutcome(outcome.error());
}

void VcsClient::searchObjectAsync(const SearchObjectRequest& request, const SearchObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SearchObjectOutcomeCallable VcsClient::searchObjectCallable(const SearchObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchObjectOutcome()>>(
			[this, request]()
			{
			return this->searchObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::StopMonitorOutcome VcsClient::stopMonitor(const StopMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMonitorOutcome(StopMonitorResult(outcome.result()));
	else
		return StopMonitorOutcome(outcome.error());
}

void VcsClient::stopMonitorAsync(const StopMonitorRequest& request, const StopMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::StopMonitorOutcomeCallable VcsClient::stopMonitorCallable(const StopMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMonitorOutcome()>>(
			[this, request]()
			{
			return this->stopMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SubscribeDeviceEventOutcome VcsClient::subscribeDeviceEvent(const SubscribeDeviceEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeDeviceEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeDeviceEventOutcome(SubscribeDeviceEventResult(outcome.result()));
	else
		return SubscribeDeviceEventOutcome(outcome.error());
}

void VcsClient::subscribeDeviceEventAsync(const SubscribeDeviceEventRequest& request, const SubscribeDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribeDeviceEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SubscribeDeviceEventOutcomeCallable VcsClient::subscribeDeviceEventCallable(const SubscribeDeviceEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeDeviceEventOutcome()>>(
			[this, request]()
			{
			return this->subscribeDeviceEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SubscribeSpaceEventOutcome VcsClient::subscribeSpaceEvent(const SubscribeSpaceEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubscribeSpaceEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubscribeSpaceEventOutcome(SubscribeSpaceEventResult(outcome.result()));
	else
		return SubscribeSpaceEventOutcome(outcome.error());
}

void VcsClient::subscribeSpaceEventAsync(const SubscribeSpaceEventRequest& request, const SubscribeSpaceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, subscribeSpaceEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SubscribeSpaceEventOutcomeCallable VcsClient::subscribeSpaceEventCallable(const SubscribeSpaceEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubscribeSpaceEventOutcome()>>(
			[this, request]()
			{
			return this->subscribeSpaceEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::SyncDeviceTimeOutcome VcsClient::syncDeviceTime(const SyncDeviceTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDeviceTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDeviceTimeOutcome(SyncDeviceTimeResult(outcome.result()));
	else
		return SyncDeviceTimeOutcome(outcome.error());
}

void VcsClient::syncDeviceTimeAsync(const SyncDeviceTimeRequest& request, const SyncDeviceTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDeviceTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::SyncDeviceTimeOutcomeCallable VcsClient::syncDeviceTimeCallable(const SyncDeviceTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDeviceTimeOutcome()>>(
			[this, request]()
			{
			return this->syncDeviceTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UnbindCorpGroupOutcome VcsClient::unbindCorpGroup(const UnbindCorpGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindCorpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindCorpGroupOutcome(UnbindCorpGroupResult(outcome.result()));
	else
		return UnbindCorpGroupOutcome(outcome.error());
}

void VcsClient::unbindCorpGroupAsync(const UnbindCorpGroupRequest& request, const UnbindCorpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindCorpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UnbindCorpGroupOutcomeCallable VcsClient::unbindCorpGroupCallable(const UnbindCorpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindCorpGroupOutcome()>>(
			[this, request]()
			{
			return this->unbindCorpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UnbindPersonOutcome VcsClient::unbindPerson(const UnbindPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindPersonOutcome(UnbindPersonResult(outcome.result()));
	else
		return UnbindPersonOutcome(outcome.error());
}

void VcsClient::unbindPersonAsync(const UnbindPersonRequest& request, const UnbindPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UnbindPersonOutcomeCallable VcsClient::unbindPersonCallable(const UnbindPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindPersonOutcome()>>(
			[this, request]()
			{
			return this->unbindPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UnbindUserOutcome VcsClient::unbindUser(const UnbindUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindUserOutcome(UnbindUserResult(outcome.result()));
	else
		return UnbindUserOutcome(outcome.error());
}

void VcsClient::unbindUserAsync(const UnbindUserRequest& request, const UnbindUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UnbindUserOutcomeCallable VcsClient::unbindUserCallable(const UnbindUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindUserOutcome()>>(
			[this, request]()
			{
			return this->unbindUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UnsubscribeDeviceEventOutcome VcsClient::unsubscribeDeviceEvent(const UnsubscribeDeviceEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnsubscribeDeviceEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnsubscribeDeviceEventOutcome(UnsubscribeDeviceEventResult(outcome.result()));
	else
		return UnsubscribeDeviceEventOutcome(outcome.error());
}

void VcsClient::unsubscribeDeviceEventAsync(const UnsubscribeDeviceEventRequest& request, const UnsubscribeDeviceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unsubscribeDeviceEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UnsubscribeDeviceEventOutcomeCallable VcsClient::unsubscribeDeviceEventCallable(const UnsubscribeDeviceEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnsubscribeDeviceEventOutcome()>>(
			[this, request]()
			{
			return this->unsubscribeDeviceEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UnsubscribeSpaceEventOutcome VcsClient::unsubscribeSpaceEvent(const UnsubscribeSpaceEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnsubscribeSpaceEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnsubscribeSpaceEventOutcome(UnsubscribeSpaceEventResult(outcome.result()));
	else
		return UnsubscribeSpaceEventOutcome(outcome.error());
}

void VcsClient::unsubscribeSpaceEventAsync(const UnsubscribeSpaceEventRequest& request, const UnsubscribeSpaceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unsubscribeSpaceEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UnsubscribeSpaceEventOutcomeCallable VcsClient::unsubscribeSpaceEventCallable(const UnsubscribeSpaceEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnsubscribeSpaceEventOutcome()>>(
			[this, request]()
			{
			return this->unsubscribeSpaceEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateCorpOutcome VcsClient::updateCorp(const UpdateCorpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCorpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCorpOutcome(UpdateCorpResult(outcome.result()));
	else
		return UpdateCorpOutcome(outcome.error());
}

void VcsClient::updateCorpAsync(const UpdateCorpRequest& request, const UpdateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCorp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateCorpOutcomeCallable VcsClient::updateCorpCallable(const UpdateCorpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCorpOutcome()>>(
			[this, request]()
			{
			return this->updateCorp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateDeviceOutcome VcsClient::updateDevice(const UpdateDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDeviceOutcome(UpdateDeviceResult(outcome.result()));
	else
		return UpdateDeviceOutcome(outcome.error());
}

void VcsClient::updateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateDeviceOutcomeCallable VcsClient::updateDeviceCallable(const UpdateDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDeviceOutcome()>>(
			[this, request]()
			{
			return this->updateDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateMonitorOutcome VcsClient::updateMonitor(const UpdateMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMonitorOutcome(UpdateMonitorResult(outcome.result()));
	else
		return UpdateMonitorOutcome(outcome.error());
}

void VcsClient::updateMonitorAsync(const UpdateMonitorRequest& request, const UpdateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateMonitorOutcomeCallable VcsClient::updateMonitorCallable(const UpdateMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateProfileOutcome VcsClient::updateProfile(const UpdateProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProfileOutcome(UpdateProfileResult(outcome.result()));
	else
		return UpdateProfileOutcome(outcome.error());
}

void VcsClient::updateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateProfileOutcomeCallable VcsClient::updateProfileCallable(const UpdateProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProfileOutcome()>>(
			[this, request]()
			{
			return this->updateProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateProfileCatalogOutcome VcsClient::updateProfileCatalog(const UpdateProfileCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProfileCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProfileCatalogOutcome(UpdateProfileCatalogResult(outcome.result()));
	else
		return UpdateProfileCatalogOutcome(outcome.error());
}

void VcsClient::updateProfileCatalogAsync(const UpdateProfileCatalogRequest& request, const UpdateProfileCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProfileCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateProfileCatalogOutcomeCallable VcsClient::updateProfileCatalogCallable(const UpdateProfileCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProfileCatalogOutcome()>>(
			[this, request]()
			{
			return this->updateProfileCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateUserOutcome VcsClient::updateUser(const UpdateUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserOutcome(UpdateUserResult(outcome.result()));
	else
		return UpdateUserOutcome(outcome.error());
}

void VcsClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateUserOutcomeCallable VcsClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UpdateUserGroupOutcome VcsClient::updateUserGroup(const UpdateUserGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserGroupOutcome(UpdateUserGroupResult(outcome.result()));
	else
		return UpdateUserGroupOutcome(outcome.error());
}

void VcsClient::updateUserGroupAsync(const UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UpdateUserGroupOutcomeCallable VcsClient::updateUserGroupCallable(const UpdateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->updateUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UploadFileOutcome VcsClient::uploadFile(const UploadFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadFileOutcome(UploadFileResult(outcome.result()));
	else
		return UploadFileOutcome(outcome.error());
}

void VcsClient::uploadFileAsync(const UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UploadFileOutcomeCallable VcsClient::uploadFileCallable(const UploadFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadFileOutcome()>>(
			[this, request]()
			{
			return this->uploadFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VcsClient::UploadImageOutcome VcsClient::uploadImage(const UploadImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadImageOutcome(UploadImageResult(outcome.result()));
	else
		return UploadImageOutcome(outcome.error());
}

void VcsClient::uploadImageAsync(const UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VcsClient::UploadImageOutcomeCallable VcsClient::uploadImageCallable(const UploadImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadImageOutcome()>>(
			[this, request]()
			{
			return this->uploadImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

