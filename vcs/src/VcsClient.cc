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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vcs");
}

VcsClient::VcsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vcs");
}

VcsClient::VcsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "vcs");
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

