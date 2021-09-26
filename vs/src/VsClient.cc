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

#include <alibabacloud/vs/VsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

namespace
{
	const std::string SERVICE_NAME = "vs";
}

VsClient::VsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VsClient::VsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VsClient::VsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

VsClient::~VsClient()
{}

VsClient::AddDeviceOutcome VsClient::addDevice(const AddDeviceRequest &request) const
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

void VsClient::addDeviceAsync(const AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::AddDeviceOutcomeCallable VsClient::addDeviceCallable(const AddDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDeviceOutcome()>>(
			[this, request]()
			{
			return this->addDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::AddRenderingDeviceInternetPortsOutcome VsClient::addRenderingDeviceInternetPorts(const AddRenderingDeviceInternetPortsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRenderingDeviceInternetPortsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRenderingDeviceInternetPortsOutcome(AddRenderingDeviceInternetPortsResult(outcome.result()));
	else
		return AddRenderingDeviceInternetPortsOutcome(outcome.error());
}

void VsClient::addRenderingDeviceInternetPortsAsync(const AddRenderingDeviceInternetPortsRequest& request, const AddRenderingDeviceInternetPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRenderingDeviceInternetPorts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::AddRenderingDeviceInternetPortsOutcomeCallable VsClient::addRenderingDeviceInternetPortsCallable(const AddRenderingDeviceInternetPortsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRenderingDeviceInternetPortsOutcome()>>(
			[this, request]()
			{
			return this->addRenderingDeviceInternetPorts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::AddVsPullStreamInfoConfigOutcome VsClient::addVsPullStreamInfoConfig(const AddVsPullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVsPullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVsPullStreamInfoConfigOutcome(AddVsPullStreamInfoConfigResult(outcome.result()));
	else
		return AddVsPullStreamInfoConfigOutcome(outcome.error());
}

void VsClient::addVsPullStreamInfoConfigAsync(const AddVsPullStreamInfoConfigRequest& request, const AddVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVsPullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::AddVsPullStreamInfoConfigOutcomeCallable VsClient::addVsPullStreamInfoConfigCallable(const AddVsPullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVsPullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->addVsPullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchBindDirectoriesOutcome VsClient::batchBindDirectories(const BatchBindDirectoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindDirectoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindDirectoriesOutcome(BatchBindDirectoriesResult(outcome.result()));
	else
		return BatchBindDirectoriesOutcome(outcome.error());
}

void VsClient::batchBindDirectoriesAsync(const BatchBindDirectoriesRequest& request, const BatchBindDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindDirectories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchBindDirectoriesOutcomeCallable VsClient::batchBindDirectoriesCallable(const BatchBindDirectoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindDirectoriesOutcome()>>(
			[this, request]()
			{
			return this->batchBindDirectories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchBindParentPlatformDevicesOutcome VsClient::batchBindParentPlatformDevices(const BatchBindParentPlatformDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindParentPlatformDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindParentPlatformDevicesOutcome(BatchBindParentPlatformDevicesResult(outcome.result()));
	else
		return BatchBindParentPlatformDevicesOutcome(outcome.error());
}

void VsClient::batchBindParentPlatformDevicesAsync(const BatchBindParentPlatformDevicesRequest& request, const BatchBindParentPlatformDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindParentPlatformDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchBindParentPlatformDevicesOutcomeCallable VsClient::batchBindParentPlatformDevicesCallable(const BatchBindParentPlatformDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindParentPlatformDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchBindParentPlatformDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchBindPurchasedDevicesOutcome VsClient::batchBindPurchasedDevices(const BatchBindPurchasedDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindPurchasedDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindPurchasedDevicesOutcome(BatchBindPurchasedDevicesResult(outcome.result()));
	else
		return BatchBindPurchasedDevicesOutcome(outcome.error());
}

void VsClient::batchBindPurchasedDevicesAsync(const BatchBindPurchasedDevicesRequest& request, const BatchBindPurchasedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindPurchasedDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchBindPurchasedDevicesOutcomeCallable VsClient::batchBindPurchasedDevicesCallable(const BatchBindPurchasedDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindPurchasedDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchBindPurchasedDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchBindTemplateOutcome VsClient::batchBindTemplate(const BatchBindTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindTemplateOutcome(BatchBindTemplateResult(outcome.result()));
	else
		return BatchBindTemplateOutcome(outcome.error());
}

void VsClient::batchBindTemplateAsync(const BatchBindTemplateRequest& request, const BatchBindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchBindTemplateOutcomeCallable VsClient::batchBindTemplateCallable(const BatchBindTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindTemplateOutcome()>>(
			[this, request]()
			{
			return this->batchBindTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchBindTemplatesOutcome VsClient::batchBindTemplates(const BatchBindTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchBindTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchBindTemplatesOutcome(BatchBindTemplatesResult(outcome.result()));
	else
		return BatchBindTemplatesOutcome(outcome.error());
}

void VsClient::batchBindTemplatesAsync(const BatchBindTemplatesRequest& request, const BatchBindTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchBindTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchBindTemplatesOutcomeCallable VsClient::batchBindTemplatesCallable(const BatchBindTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchBindTemplatesOutcome()>>(
			[this, request]()
			{
			return this->batchBindTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchDeleteDevicesOutcome VsClient::batchDeleteDevices(const BatchDeleteDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteDevicesOutcome(BatchDeleteDevicesResult(outcome.result()));
	else
		return BatchDeleteDevicesOutcome(outcome.error());
}

void VsClient::batchDeleteDevicesAsync(const BatchDeleteDevicesRequest& request, const BatchDeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchDeleteDevicesOutcomeCallable VsClient::batchDeleteDevicesCallable(const BatchDeleteDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchDeleteVsDomainConfigsOutcome VsClient::batchDeleteVsDomainConfigs(const BatchDeleteVsDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteVsDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteVsDomainConfigsOutcome(BatchDeleteVsDomainConfigsResult(outcome.result()));
	else
		return BatchDeleteVsDomainConfigsOutcome(outcome.error());
}

void VsClient::batchDeleteVsDomainConfigsAsync(const BatchDeleteVsDomainConfigsRequest& request, const BatchDeleteVsDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteVsDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchDeleteVsDomainConfigsOutcomeCallable VsClient::batchDeleteVsDomainConfigsCallable(const BatchDeleteVsDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteVsDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteVsDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchForbidVsStreamOutcome VsClient::batchForbidVsStream(const BatchForbidVsStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchForbidVsStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchForbidVsStreamOutcome(BatchForbidVsStreamResult(outcome.result()));
	else
		return BatchForbidVsStreamOutcome(outcome.error());
}

void VsClient::batchForbidVsStreamAsync(const BatchForbidVsStreamRequest& request, const BatchForbidVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchForbidVsStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchForbidVsStreamOutcomeCallable VsClient::batchForbidVsStreamCallable(const BatchForbidVsStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchForbidVsStreamOutcome()>>(
			[this, request]()
			{
			return this->batchForbidVsStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchResumeVsStreamOutcome VsClient::batchResumeVsStream(const BatchResumeVsStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchResumeVsStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchResumeVsStreamOutcome(BatchResumeVsStreamResult(outcome.result()));
	else
		return BatchResumeVsStreamOutcome(outcome.error());
}

void VsClient::batchResumeVsStreamAsync(const BatchResumeVsStreamRequest& request, const BatchResumeVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchResumeVsStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchResumeVsStreamOutcomeCallable VsClient::batchResumeVsStreamCallable(const BatchResumeVsStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchResumeVsStreamOutcome()>>(
			[this, request]()
			{
			return this->batchResumeVsStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchSetVsDomainConfigsOutcome VsClient::batchSetVsDomainConfigs(const BatchSetVsDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetVsDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetVsDomainConfigsOutcome(BatchSetVsDomainConfigsResult(outcome.result()));
	else
		return BatchSetVsDomainConfigsOutcome(outcome.error());
}

void VsClient::batchSetVsDomainConfigsAsync(const BatchSetVsDomainConfigsRequest& request, const BatchSetVsDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetVsDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchSetVsDomainConfigsOutcomeCallable VsClient::batchSetVsDomainConfigsCallable(const BatchSetVsDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetVsDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetVsDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchStartDevicesOutcome VsClient::batchStartDevices(const BatchStartDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartDevicesOutcome(BatchStartDevicesResult(outcome.result()));
	else
		return BatchStartDevicesOutcome(outcome.error());
}

void VsClient::batchStartDevicesAsync(const BatchStartDevicesRequest& request, const BatchStartDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchStartDevicesOutcomeCallable VsClient::batchStartDevicesCallable(const BatchStartDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchStartDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchStartStreamsOutcome VsClient::batchStartStreams(const BatchStartStreamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStartStreamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStartStreamsOutcome(BatchStartStreamsResult(outcome.result()));
	else
		return BatchStartStreamsOutcome(outcome.error());
}

void VsClient::batchStartStreamsAsync(const BatchStartStreamsRequest& request, const BatchStartStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStartStreams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchStartStreamsOutcomeCallable VsClient::batchStartStreamsCallable(const BatchStartStreamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStartStreamsOutcome()>>(
			[this, request]()
			{
			return this->batchStartStreams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchStopDevicesOutcome VsClient::batchStopDevices(const BatchStopDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopDevicesOutcome(BatchStopDevicesResult(outcome.result()));
	else
		return BatchStopDevicesOutcome(outcome.error());
}

void VsClient::batchStopDevicesAsync(const BatchStopDevicesRequest& request, const BatchStopDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchStopDevicesOutcomeCallable VsClient::batchStopDevicesCallable(const BatchStopDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchStopDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchStopStreamsOutcome VsClient::batchStopStreams(const BatchStopStreamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchStopStreamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchStopStreamsOutcome(BatchStopStreamsResult(outcome.result()));
	else
		return BatchStopStreamsOutcome(outcome.error());
}

void VsClient::batchStopStreamsAsync(const BatchStopStreamsRequest& request, const BatchStopStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchStopStreams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchStopStreamsOutcomeCallable VsClient::batchStopStreamsCallable(const BatchStopStreamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchStopStreamsOutcome()>>(
			[this, request]()
			{
			return this->batchStopStreams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchUnbindDirectoriesOutcome VsClient::batchUnbindDirectories(const BatchUnbindDirectoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindDirectoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindDirectoriesOutcome(BatchUnbindDirectoriesResult(outcome.result()));
	else
		return BatchUnbindDirectoriesOutcome(outcome.error());
}

void VsClient::batchUnbindDirectoriesAsync(const BatchUnbindDirectoriesRequest& request, const BatchUnbindDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindDirectories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchUnbindDirectoriesOutcomeCallable VsClient::batchUnbindDirectoriesCallable(const BatchUnbindDirectoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindDirectoriesOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindDirectories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchUnbindParentPlatformDevicesOutcome VsClient::batchUnbindParentPlatformDevices(const BatchUnbindParentPlatformDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindParentPlatformDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindParentPlatformDevicesOutcome(BatchUnbindParentPlatformDevicesResult(outcome.result()));
	else
		return BatchUnbindParentPlatformDevicesOutcome(outcome.error());
}

void VsClient::batchUnbindParentPlatformDevicesAsync(const BatchUnbindParentPlatformDevicesRequest& request, const BatchUnbindParentPlatformDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindParentPlatformDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchUnbindParentPlatformDevicesOutcomeCallable VsClient::batchUnbindParentPlatformDevicesCallable(const BatchUnbindParentPlatformDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindParentPlatformDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindParentPlatformDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchUnbindPurchasedDevicesOutcome VsClient::batchUnbindPurchasedDevices(const BatchUnbindPurchasedDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindPurchasedDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindPurchasedDevicesOutcome(BatchUnbindPurchasedDevicesResult(outcome.result()));
	else
		return BatchUnbindPurchasedDevicesOutcome(outcome.error());
}

void VsClient::batchUnbindPurchasedDevicesAsync(const BatchUnbindPurchasedDevicesRequest& request, const BatchUnbindPurchasedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindPurchasedDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchUnbindPurchasedDevicesOutcomeCallable VsClient::batchUnbindPurchasedDevicesCallable(const BatchUnbindPurchasedDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindPurchasedDevicesOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindPurchasedDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchUnbindTemplateOutcome VsClient::batchUnbindTemplate(const BatchUnbindTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindTemplateOutcome(BatchUnbindTemplateResult(outcome.result()));
	else
		return BatchUnbindTemplateOutcome(outcome.error());
}

void VsClient::batchUnbindTemplateAsync(const BatchUnbindTemplateRequest& request, const BatchUnbindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchUnbindTemplateOutcomeCallable VsClient::batchUnbindTemplateCallable(const BatchUnbindTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindTemplateOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BatchUnbindTemplatesOutcome VsClient::batchUnbindTemplates(const BatchUnbindTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchUnbindTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchUnbindTemplatesOutcome(BatchUnbindTemplatesResult(outcome.result()));
	else
		return BatchUnbindTemplatesOutcome(outcome.error());
}

void VsClient::batchUnbindTemplatesAsync(const BatchUnbindTemplatesRequest& request, const BatchUnbindTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchUnbindTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BatchUnbindTemplatesOutcomeCallable VsClient::batchUnbindTemplatesCallable(const BatchUnbindTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchUnbindTemplatesOutcome()>>(
			[this, request]()
			{
			return this->batchUnbindTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BindDirectoryOutcome VsClient::bindDirectory(const BindDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindDirectoryOutcome(BindDirectoryResult(outcome.result()));
	else
		return BindDirectoryOutcome(outcome.error());
}

void VsClient::bindDirectoryAsync(const BindDirectoryRequest& request, const BindDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BindDirectoryOutcomeCallable VsClient::bindDirectoryCallable(const BindDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindDirectoryOutcome()>>(
			[this, request]()
			{
			return this->bindDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BindParentPlatformDeviceOutcome VsClient::bindParentPlatformDevice(const BindParentPlatformDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindParentPlatformDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindParentPlatformDeviceOutcome(BindParentPlatformDeviceResult(outcome.result()));
	else
		return BindParentPlatformDeviceOutcome(outcome.error());
}

void VsClient::bindParentPlatformDeviceAsync(const BindParentPlatformDeviceRequest& request, const BindParentPlatformDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindParentPlatformDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BindParentPlatformDeviceOutcomeCallable VsClient::bindParentPlatformDeviceCallable(const BindParentPlatformDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindParentPlatformDeviceOutcome()>>(
			[this, request]()
			{
			return this->bindParentPlatformDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BindPurchasedDeviceOutcome VsClient::bindPurchasedDevice(const BindPurchasedDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindPurchasedDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindPurchasedDeviceOutcome(BindPurchasedDeviceResult(outcome.result()));
	else
		return BindPurchasedDeviceOutcome(outcome.error());
}

void VsClient::bindPurchasedDeviceAsync(const BindPurchasedDeviceRequest& request, const BindPurchasedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindPurchasedDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BindPurchasedDeviceOutcomeCallable VsClient::bindPurchasedDeviceCallable(const BindPurchasedDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindPurchasedDeviceOutcome()>>(
			[this, request]()
			{
			return this->bindPurchasedDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::BindTemplateOutcome VsClient::bindTemplate(const BindTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindTemplateOutcome(BindTemplateResult(outcome.result()));
	else
		return BindTemplateOutcome(outcome.error());
}

void VsClient::bindTemplateAsync(const BindTemplateRequest& request, const BindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::BindTemplateOutcomeCallable VsClient::bindTemplateCallable(const BindTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindTemplateOutcome()>>(
			[this, request]()
			{
			return this->bindTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ContinuousAdjustOutcome VsClient::continuousAdjust(const ContinuousAdjustRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinuousAdjustOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinuousAdjustOutcome(ContinuousAdjustResult(outcome.result()));
	else
		return ContinuousAdjustOutcome(outcome.error());
}

void VsClient::continuousAdjustAsync(const ContinuousAdjustRequest& request, const ContinuousAdjustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continuousAdjust(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ContinuousAdjustOutcomeCallable VsClient::continuousAdjustCallable(const ContinuousAdjustRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinuousAdjustOutcome()>>(
			[this, request]()
			{
			return this->continuousAdjust(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ContinuousMoveOutcome VsClient::continuousMove(const ContinuousMoveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinuousMoveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinuousMoveOutcome(ContinuousMoveResult(outcome.result()));
	else
		return ContinuousMoveOutcome(outcome.error());
}

void VsClient::continuousMoveAsync(const ContinuousMoveRequest& request, const ContinuousMoveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continuousMove(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ContinuousMoveOutcomeCallable VsClient::continuousMoveCallable(const ContinuousMoveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinuousMoveOutcome()>>(
			[this, request]()
			{
			return this->continuousMove(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateClusterOutcome VsClient::createCluster(const CreateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClusterOutcome(CreateClusterResult(outcome.result()));
	else
		return CreateClusterOutcome(outcome.error());
}

void VsClient::createClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateClusterOutcomeCallable VsClient::createClusterCallable(const CreateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
			[this, request]()
			{
			return this->createCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateDeviceOutcome VsClient::createDevice(const CreateDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceOutcome(CreateDeviceResult(outcome.result()));
	else
		return CreateDeviceOutcome(outcome.error());
}

void VsClient::createDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateDeviceOutcomeCallable VsClient::createDeviceCallable(const CreateDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceOutcome()>>(
			[this, request]()
			{
			return this->createDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateDeviceAlarmOutcome VsClient::createDeviceAlarm(const CreateDeviceAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceAlarmOutcome(CreateDeviceAlarmResult(outcome.result()));
	else
		return CreateDeviceAlarmOutcome(outcome.error());
}

void VsClient::createDeviceAlarmAsync(const CreateDeviceAlarmRequest& request, const CreateDeviceAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeviceAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateDeviceAlarmOutcomeCallable VsClient::createDeviceAlarmCallable(const CreateDeviceAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceAlarmOutcome()>>(
			[this, request]()
			{
			return this->createDeviceAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateDeviceSnapshotOutcome VsClient::createDeviceSnapshot(const CreateDeviceSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDeviceSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDeviceSnapshotOutcome(CreateDeviceSnapshotResult(outcome.result()));
	else
		return CreateDeviceSnapshotOutcome(outcome.error());
}

void VsClient::createDeviceSnapshotAsync(const CreateDeviceSnapshotRequest& request, const CreateDeviceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDeviceSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateDeviceSnapshotOutcomeCallable VsClient::createDeviceSnapshotCallable(const CreateDeviceSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDeviceSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createDeviceSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateDirectoryOutcome VsClient::createDirectory(const CreateDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDirectoryOutcome(CreateDirectoryResult(outcome.result()));
	else
		return CreateDirectoryOutcome(outcome.error());
}

void VsClient::createDirectoryAsync(const CreateDirectoryRequest& request, const CreateDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateDirectoryOutcomeCallable VsClient::createDirectoryCallable(const CreateDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDirectoryOutcome()>>(
			[this, request]()
			{
			return this->createDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateGroupOutcome VsClient::createGroup(const CreateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGroupOutcome(CreateGroupResult(outcome.result()));
	else
		return CreateGroupOutcome(outcome.error());
}

void VsClient::createGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateGroupOutcomeCallable VsClient::createGroupCallable(const CreateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
			[this, request]()
			{
			return this->createGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateParentPlatformOutcome VsClient::createParentPlatform(const CreateParentPlatformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateParentPlatformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateParentPlatformOutcome(CreateParentPlatformResult(outcome.result()));
	else
		return CreateParentPlatformOutcome(outcome.error());
}

void VsClient::createParentPlatformAsync(const CreateParentPlatformRequest& request, const CreateParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createParentPlatform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateParentPlatformOutcomeCallable VsClient::createParentPlatformCallable(const CreateParentPlatformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateParentPlatformOutcome()>>(
			[this, request]()
			{
			return this->createParentPlatform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateRenderingDeviceOutcome VsClient::createRenderingDevice(const CreateRenderingDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRenderingDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRenderingDeviceOutcome(CreateRenderingDeviceResult(outcome.result()));
	else
		return CreateRenderingDeviceOutcome(outcome.error());
}

void VsClient::createRenderingDeviceAsync(const CreateRenderingDeviceRequest& request, const CreateRenderingDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRenderingDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateRenderingDeviceOutcomeCallable VsClient::createRenderingDeviceCallable(const CreateRenderingDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRenderingDeviceOutcome()>>(
			[this, request]()
			{
			return this->createRenderingDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateStreamSnapshotOutcome VsClient::createStreamSnapshot(const CreateStreamSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStreamSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStreamSnapshotOutcome(CreateStreamSnapshotResult(outcome.result()));
	else
		return CreateStreamSnapshotOutcome(outcome.error());
}

void VsClient::createStreamSnapshotAsync(const CreateStreamSnapshotRequest& request, const CreateStreamSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStreamSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateStreamSnapshotOutcomeCallable VsClient::createStreamSnapshotCallable(const CreateStreamSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStreamSnapshotOutcome()>>(
			[this, request]()
			{
			return this->createStreamSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::CreateTemplateOutcome VsClient::createTemplate(const CreateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTemplateOutcome(CreateTemplateResult(outcome.result()));
	else
		return CreateTemplateOutcome(outcome.error());
}

void VsClient::createTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::CreateTemplateOutcomeCallable VsClient::createTemplateCallable(const CreateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTemplateOutcome()>>(
			[this, request]()
			{
			return this->createTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteBucketOutcome VsClient::deleteBucket(const DeleteBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBucketOutcome(DeleteBucketResult(outcome.result()));
	else
		return DeleteBucketOutcome(outcome.error());
}

void VsClient::deleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteBucketOutcomeCallable VsClient::deleteBucketCallable(const DeleteBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBucketOutcome()>>(
			[this, request]()
			{
			return this->deleteBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteClusterOutcome VsClient::deleteCluster(const DeleteClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClusterOutcome(DeleteClusterResult(outcome.result()));
	else
		return DeleteClusterOutcome(outcome.error());
}

void VsClient::deleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteClusterOutcomeCallable VsClient::deleteClusterCallable(const DeleteClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
			[this, request]()
			{
			return this->deleteCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteDeviceOutcome VsClient::deleteDevice(const DeleteDeviceRequest &request) const
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

void VsClient::deleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteDeviceOutcomeCallable VsClient::deleteDeviceCallable(const DeleteDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteDirectoryOutcome VsClient::deleteDirectory(const DeleteDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDirectoryOutcome(DeleteDirectoryResult(outcome.result()));
	else
		return DeleteDirectoryOutcome(outcome.error());
}

void VsClient::deleteDirectoryAsync(const DeleteDirectoryRequest& request, const DeleteDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteDirectoryOutcomeCallable VsClient::deleteDirectoryCallable(const DeleteDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDirectoryOutcome()>>(
			[this, request]()
			{
			return this->deleteDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteGroupOutcome VsClient::deleteGroup(const DeleteGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupOutcome(DeleteGroupResult(outcome.result()));
	else
		return DeleteGroupOutcome(outcome.error());
}

void VsClient::deleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteGroupOutcomeCallable VsClient::deleteGroupCallable(const DeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteParentPlatformOutcome VsClient::deleteParentPlatform(const DeleteParentPlatformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteParentPlatformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteParentPlatformOutcome(DeleteParentPlatformResult(outcome.result()));
	else
		return DeleteParentPlatformOutcome(outcome.error());
}

void VsClient::deleteParentPlatformAsync(const DeleteParentPlatformRequest& request, const DeleteParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteParentPlatform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteParentPlatformOutcomeCallable VsClient::deleteParentPlatformCallable(const DeleteParentPlatformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteParentPlatformOutcome()>>(
			[this, request]()
			{
			return this->deleteParentPlatform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeletePresetOutcome VsClient::deletePreset(const DeletePresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePresetOutcome(DeletePresetResult(outcome.result()));
	else
		return DeletePresetOutcome(outcome.error());
}

void VsClient::deletePresetAsync(const DeletePresetRequest& request, const DeletePresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeletePresetOutcomeCallable VsClient::deletePresetCallable(const DeletePresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePresetOutcome()>>(
			[this, request]()
			{
			return this->deletePreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteRenderingDeviceInternetPortsOutcome VsClient::deleteRenderingDeviceInternetPorts(const DeleteRenderingDeviceInternetPortsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRenderingDeviceInternetPortsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRenderingDeviceInternetPortsOutcome(DeleteRenderingDeviceInternetPortsResult(outcome.result()));
	else
		return DeleteRenderingDeviceInternetPortsOutcome(outcome.error());
}

void VsClient::deleteRenderingDeviceInternetPortsAsync(const DeleteRenderingDeviceInternetPortsRequest& request, const DeleteRenderingDeviceInternetPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRenderingDeviceInternetPorts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteRenderingDeviceInternetPortsOutcomeCallable VsClient::deleteRenderingDeviceInternetPortsCallable(const DeleteRenderingDeviceInternetPortsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRenderingDeviceInternetPortsOutcome()>>(
			[this, request]()
			{
			return this->deleteRenderingDeviceInternetPorts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteRenderingDevicesOutcome VsClient::deleteRenderingDevices(const DeleteRenderingDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRenderingDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRenderingDevicesOutcome(DeleteRenderingDevicesResult(outcome.result()));
	else
		return DeleteRenderingDevicesOutcome(outcome.error());
}

void VsClient::deleteRenderingDevicesAsync(const DeleteRenderingDevicesRequest& request, const DeleteRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRenderingDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteRenderingDevicesOutcomeCallable VsClient::deleteRenderingDevicesCallable(const DeleteRenderingDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRenderingDevicesOutcome()>>(
			[this, request]()
			{
			return this->deleteRenderingDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteTemplateOutcome VsClient::deleteTemplate(const DeleteTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplateOutcome(DeleteTemplateResult(outcome.result()));
	else
		return DeleteTemplateOutcome(outcome.error());
}

void VsClient::deleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteTemplateOutcomeCallable VsClient::deleteTemplateCallable(const DeleteTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteVsPullStreamInfoConfigOutcome VsClient::deleteVsPullStreamInfoConfig(const DeleteVsPullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVsPullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVsPullStreamInfoConfigOutcome(DeleteVsPullStreamInfoConfigResult(outcome.result()));
	else
		return DeleteVsPullStreamInfoConfigOutcome(outcome.error());
}

void VsClient::deleteVsPullStreamInfoConfigAsync(const DeleteVsPullStreamInfoConfigRequest& request, const DeleteVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVsPullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteVsPullStreamInfoConfigOutcomeCallable VsClient::deleteVsPullStreamInfoConfigCallable(const DeleteVsPullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVsPullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteVsPullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DeleteVsStreamsNotifyUrlConfigOutcome VsClient::deleteVsStreamsNotifyUrlConfig(const DeleteVsStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVsStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVsStreamsNotifyUrlConfigOutcome(DeleteVsStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return DeleteVsStreamsNotifyUrlConfigOutcome(outcome.error());
}

void VsClient::deleteVsStreamsNotifyUrlConfigAsync(const DeleteVsStreamsNotifyUrlConfigRequest& request, const DeleteVsStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVsStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DeleteVsStreamsNotifyUrlConfigOutcomeCallable VsClient::deleteVsStreamsNotifyUrlConfigCallable(const DeleteVsStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVsStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteVsStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeAccountStatOutcome VsClient::describeAccountStat(const DescribeAccountStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountStatOutcome(DescribeAccountStatResult(outcome.result()));
	else
		return DescribeAccountStatOutcome(outcome.error());
}

void VsClient::describeAccountStatAsync(const DescribeAccountStatRequest& request, const DescribeAccountStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeAccountStatOutcomeCallable VsClient::describeAccountStatCallable(const DescribeAccountStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountStatOutcome()>>(
			[this, request]()
			{
			return this->describeAccountStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeClusterOutcome VsClient::describeCluster(const DescribeClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterOutcome(DescribeClusterResult(outcome.result()));
	else
		return DescribeClusterOutcome(outcome.error());
}

void VsClient::describeClusterAsync(const DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeClusterOutcomeCallable VsClient::describeClusterCallable(const DescribeClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterOutcome()>>(
			[this, request]()
			{
			return this->describeCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeClusterDevicesOutcome VsClient::describeClusterDevices(const DescribeClusterDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterDevicesOutcome(DescribeClusterDevicesResult(outcome.result()));
	else
		return DescribeClusterDevicesOutcome(outcome.error());
}

void VsClient::describeClusterDevicesAsync(const DescribeClusterDevicesRequest& request, const DescribeClusterDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeClusterDevicesOutcomeCallable VsClient::describeClusterDevicesCallable(const DescribeClusterDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeClusterDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeClustersOutcome VsClient::describeClusters(const DescribeClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClustersOutcome(DescribeClustersResult(outcome.result()));
	else
		return DescribeClustersOutcome(outcome.error());
}

void VsClient::describeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeClustersOutcomeCallable VsClient::describeClustersCallable(const DescribeClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
			[this, request]()
			{
			return this->describeClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDeviceOutcome VsClient::describeDevice(const DescribeDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceOutcome(DescribeDeviceResult(outcome.result()));
	else
		return DescribeDeviceOutcome(outcome.error());
}

void VsClient::describeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDeviceOutcomeCallable VsClient::describeDeviceCallable(const DescribeDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceOutcome()>>(
			[this, request]()
			{
			return this->describeDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDeviceChannelsOutcome VsClient::describeDeviceChannels(const DescribeDeviceChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceChannelsOutcome(DescribeDeviceChannelsResult(outcome.result()));
	else
		return DescribeDeviceChannelsOutcome(outcome.error());
}

void VsClient::describeDeviceChannelsAsync(const DescribeDeviceChannelsRequest& request, const DescribeDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDeviceChannelsOutcomeCallable VsClient::describeDeviceChannelsCallable(const DescribeDeviceChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceChannelsOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDeviceGatewayOutcome VsClient::describeDeviceGateway(const DescribeDeviceGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceGatewayOutcome(DescribeDeviceGatewayResult(outcome.result()));
	else
		return DescribeDeviceGatewayOutcome(outcome.error());
}

void VsClient::describeDeviceGatewayAsync(const DescribeDeviceGatewayRequest& request, const DescribeDeviceGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDeviceGatewayOutcomeCallable VsClient::describeDeviceGatewayCallable(const DescribeDeviceGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDeviceURLOutcome VsClient::describeDeviceURL(const DescribeDeviceURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeviceURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeviceURLOutcome(DescribeDeviceURLResult(outcome.result()));
	else
		return DescribeDeviceURLOutcome(outcome.error());
}

void VsClient::describeDeviceURLAsync(const DescribeDeviceURLRequest& request, const DescribeDeviceURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeviceURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDeviceURLOutcomeCallable VsClient::describeDeviceURLCallable(const DescribeDeviceURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeviceURLOutcome()>>(
			[this, request]()
			{
			return this->describeDeviceURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDevicesOutcome VsClient::describeDevices(const DescribeDevicesRequest &request) const
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

void VsClient::describeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDevicesOutcomeCallable VsClient::describeDevicesCallable(const DescribeDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDirectoriesOutcome VsClient::describeDirectories(const DescribeDirectoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDirectoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDirectoriesOutcome(DescribeDirectoriesResult(outcome.result()));
	else
		return DescribeDirectoriesOutcome(outcome.error());
}

void VsClient::describeDirectoriesAsync(const DescribeDirectoriesRequest& request, const DescribeDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDirectories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDirectoriesOutcomeCallable VsClient::describeDirectoriesCallable(const DescribeDirectoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDirectoriesOutcome()>>(
			[this, request]()
			{
			return this->describeDirectories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeDirectoryOutcome VsClient::describeDirectory(const DescribeDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDirectoryOutcome(DescribeDirectoryResult(outcome.result()));
	else
		return DescribeDirectoryOutcome(outcome.error());
}

void VsClient::describeDirectoryAsync(const DescribeDirectoryRequest& request, const DescribeDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeDirectoryOutcomeCallable VsClient::describeDirectoryCallable(const DescribeDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDirectoryOutcome()>>(
			[this, request]()
			{
			return this->describeDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeGroupOutcome VsClient::describeGroup(const DescribeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupOutcome(DescribeGroupResult(outcome.result()));
	else
		return DescribeGroupOutcome(outcome.error());
}

void VsClient::describeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeGroupOutcomeCallable VsClient::describeGroupCallable(const DescribeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupOutcome()>>(
			[this, request]()
			{
			return this->describeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeGroupsOutcome VsClient::describeGroups(const DescribeGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupsOutcome(DescribeGroupsResult(outcome.result()));
	else
		return DescribeGroupsOutcome(outcome.error());
}

void VsClient::describeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeGroupsOutcomeCallable VsClient::describeGroupsCallable(const DescribeGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeNodeDevicesInfoOutcome VsClient::describeNodeDevicesInfo(const DescribeNodeDevicesInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNodeDevicesInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNodeDevicesInfoOutcome(DescribeNodeDevicesInfoResult(outcome.result()));
	else
		return DescribeNodeDevicesInfoOutcome(outcome.error());
}

void VsClient::describeNodeDevicesInfoAsync(const DescribeNodeDevicesInfoRequest& request, const DescribeNodeDevicesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNodeDevicesInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeNodeDevicesInfoOutcomeCallable VsClient::describeNodeDevicesInfoCallable(const DescribeNodeDevicesInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNodeDevicesInfoOutcome()>>(
			[this, request]()
			{
			return this->describeNodeDevicesInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeParentPlatformOutcome VsClient::describeParentPlatform(const DescribeParentPlatformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParentPlatformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParentPlatformOutcome(DescribeParentPlatformResult(outcome.result()));
	else
		return DescribeParentPlatformOutcome(outcome.error());
}

void VsClient::describeParentPlatformAsync(const DescribeParentPlatformRequest& request, const DescribeParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParentPlatform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeParentPlatformOutcomeCallable VsClient::describeParentPlatformCallable(const DescribeParentPlatformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParentPlatformOutcome()>>(
			[this, request]()
			{
			return this->describeParentPlatform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeParentPlatformDevicesOutcome VsClient::describeParentPlatformDevices(const DescribeParentPlatformDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParentPlatformDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParentPlatformDevicesOutcome(DescribeParentPlatformDevicesResult(outcome.result()));
	else
		return DescribeParentPlatformDevicesOutcome(outcome.error());
}

void VsClient::describeParentPlatformDevicesAsync(const DescribeParentPlatformDevicesRequest& request, const DescribeParentPlatformDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParentPlatformDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeParentPlatformDevicesOutcomeCallable VsClient::describeParentPlatformDevicesCallable(const DescribeParentPlatformDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParentPlatformDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeParentPlatformDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeParentPlatformsOutcome VsClient::describeParentPlatforms(const DescribeParentPlatformsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeParentPlatformsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeParentPlatformsOutcome(DescribeParentPlatformsResult(outcome.result()));
	else
		return DescribeParentPlatformsOutcome(outcome.error());
}

void VsClient::describeParentPlatformsAsync(const DescribeParentPlatformsRequest& request, const DescribeParentPlatformsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeParentPlatforms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeParentPlatformsOutcomeCallable VsClient::describeParentPlatformsCallable(const DescribeParentPlatformsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeParentPlatformsOutcome()>>(
			[this, request]()
			{
			return this->describeParentPlatforms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribePresetsOutcome VsClient::describePresets(const DescribePresetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePresetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePresetsOutcome(DescribePresetsResult(outcome.result()));
	else
		return DescribePresetsOutcome(outcome.error());
}

void VsClient::describePresetsAsync(const DescribePresetsRequest& request, const DescribePresetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePresets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribePresetsOutcomeCallable VsClient::describePresetsCallable(const DescribePresetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePresetsOutcome()>>(
			[this, request]()
			{
			return this->describePresets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribePurchasedDeviceOutcome VsClient::describePurchasedDevice(const DescribePurchasedDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePurchasedDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePurchasedDeviceOutcome(DescribePurchasedDeviceResult(outcome.result()));
	else
		return DescribePurchasedDeviceOutcome(outcome.error());
}

void VsClient::describePurchasedDeviceAsync(const DescribePurchasedDeviceRequest& request, const DescribePurchasedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePurchasedDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribePurchasedDeviceOutcomeCallable VsClient::describePurchasedDeviceCallable(const DescribePurchasedDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePurchasedDeviceOutcome()>>(
			[this, request]()
			{
			return this->describePurchasedDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribePurchasedDevicesOutcome VsClient::describePurchasedDevices(const DescribePurchasedDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePurchasedDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePurchasedDevicesOutcome(DescribePurchasedDevicesResult(outcome.result()));
	else
		return DescribePurchasedDevicesOutcome(outcome.error());
}

void VsClient::describePurchasedDevicesAsync(const DescribePurchasedDevicesRequest& request, const DescribePurchasedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePurchasedDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribePurchasedDevicesOutcomeCallable VsClient::describePurchasedDevicesCallable(const DescribePurchasedDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePurchasedDevicesOutcome()>>(
			[this, request]()
			{
			return this->describePurchasedDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeRecordsOutcome VsClient::describeRecords(const DescribeRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordsOutcome(DescribeRecordsResult(outcome.result()));
	else
		return DescribeRecordsOutcome(outcome.error());
}

void VsClient::describeRecordsAsync(const DescribeRecordsRequest& request, const DescribeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeRecordsOutcomeCallable VsClient::describeRecordsCallable(const DescribeRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeRenderingDevicesOutcome VsClient::describeRenderingDevices(const DescribeRenderingDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRenderingDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRenderingDevicesOutcome(DescribeRenderingDevicesResult(outcome.result()));
	else
		return DescribeRenderingDevicesOutcome(outcome.error());
}

void VsClient::describeRenderingDevicesAsync(const DescribeRenderingDevicesRequest& request, const DescribeRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRenderingDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeRenderingDevicesOutcomeCallable VsClient::describeRenderingDevicesCallable(const DescribeRenderingDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRenderingDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeRenderingDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeStreamOutcome VsClient::describeStream(const DescribeStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamOutcome(DescribeStreamResult(outcome.result()));
	else
		return DescribeStreamOutcome(outcome.error());
}

void VsClient::describeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeStreamOutcomeCallable VsClient::describeStreamCallable(const DescribeStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamOutcome()>>(
			[this, request]()
			{
			return this->describeStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeStreamURLOutcome VsClient::describeStreamURL(const DescribeStreamURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamURLOutcome(DescribeStreamURLResult(outcome.result()));
	else
		return DescribeStreamURLOutcome(outcome.error());
}

void VsClient::describeStreamURLAsync(const DescribeStreamURLRequest& request, const DescribeStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStreamURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeStreamURLOutcomeCallable VsClient::describeStreamURLCallable(const DescribeStreamURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamURLOutcome()>>(
			[this, request]()
			{
			return this->describeStreamURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeStreamVodListOutcome VsClient::describeStreamVodList(const DescribeStreamVodListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamVodListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamVodListOutcome(DescribeStreamVodListResult(outcome.result()));
	else
		return DescribeStreamVodListOutcome(outcome.error());
}

void VsClient::describeStreamVodListAsync(const DescribeStreamVodListRequest& request, const DescribeStreamVodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStreamVodList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeStreamVodListOutcomeCallable VsClient::describeStreamVodListCallable(const DescribeStreamVodListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamVodListOutcome()>>(
			[this, request]()
			{
			return this->describeStreamVodList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeStreamsOutcome VsClient::describeStreams(const DescribeStreamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamsOutcome(DescribeStreamsResult(outcome.result()));
	else
		return DescribeStreamsOutcome(outcome.error());
}

void VsClient::describeStreamsAsync(const DescribeStreamsRequest& request, const DescribeStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStreams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeStreamsOutcomeCallable VsClient::describeStreamsCallable(const DescribeStreamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamsOutcome()>>(
			[this, request]()
			{
			return this->describeStreams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeTemplateOutcome VsClient::describeTemplate(const DescribeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplateOutcome(DescribeTemplateResult(outcome.result()));
	else
		return DescribeTemplateOutcome(outcome.error());
}

void VsClient::describeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeTemplateOutcomeCallable VsClient::describeTemplateCallable(const DescribeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplateOutcome()>>(
			[this, request]()
			{
			return this->describeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeTemplatesOutcome VsClient::describeTemplates(const DescribeTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTemplatesOutcome(DescribeTemplatesResult(outcome.result()));
	else
		return DescribeTemplatesOutcome(outcome.error());
}

void VsClient::describeTemplatesAsync(const DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeTemplatesOutcomeCallable VsClient::describeTemplatesCallable(const DescribeTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVodStreamURLOutcome VsClient::describeVodStreamURL(const DescribeVodStreamURLRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVodStreamURLOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVodStreamURLOutcome(DescribeVodStreamURLResult(outcome.result()));
	else
		return DescribeVodStreamURLOutcome(outcome.error());
}

void VsClient::describeVodStreamURLAsync(const DescribeVodStreamURLRequest& request, const DescribeVodStreamURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVodStreamURL(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVodStreamURLOutcomeCallable VsClient::describeVodStreamURLCallable(const DescribeVodStreamURLRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVodStreamURLOutcome()>>(
			[this, request]()
			{
			return this->describeVodStreamURL(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsCertificateDetailOutcome VsClient::describeVsCertificateDetail(const DescribeVsCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsCertificateDetailOutcome(DescribeVsCertificateDetailResult(outcome.result()));
	else
		return DescribeVsCertificateDetailOutcome(outcome.error());
}

void VsClient::describeVsCertificateDetailAsync(const DescribeVsCertificateDetailRequest& request, const DescribeVsCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsCertificateDetailOutcomeCallable VsClient::describeVsCertificateDetailCallable(const DescribeVsCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeVsCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsCertificateListOutcome VsClient::describeVsCertificateList(const DescribeVsCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsCertificateListOutcome(DescribeVsCertificateListResult(outcome.result()));
	else
		return DescribeVsCertificateListOutcome(outcome.error());
}

void VsClient::describeVsCertificateListAsync(const DescribeVsCertificateListRequest& request, const DescribeVsCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsCertificateListOutcomeCallable VsClient::describeVsCertificateListCallable(const DescribeVsCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeVsCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainBpsDataOutcome VsClient::describeVsDomainBpsData(const DescribeVsDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainBpsDataOutcome(DescribeVsDomainBpsDataResult(outcome.result()));
	else
		return DescribeVsDomainBpsDataOutcome(outcome.error());
}

void VsClient::describeVsDomainBpsDataAsync(const DescribeVsDomainBpsDataRequest& request, const DescribeVsDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainBpsDataOutcomeCallable VsClient::describeVsDomainBpsDataCallable(const DescribeVsDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainCertificateInfoOutcome VsClient::describeVsDomainCertificateInfo(const DescribeVsDomainCertificateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainCertificateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainCertificateInfoOutcome(DescribeVsDomainCertificateInfoResult(outcome.result()));
	else
		return DescribeVsDomainCertificateInfoOutcome(outcome.error());
}

void VsClient::describeVsDomainCertificateInfoAsync(const DescribeVsDomainCertificateInfoRequest& request, const DescribeVsDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainCertificateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainCertificateInfoOutcomeCallable VsClient::describeVsDomainCertificateInfoCallable(const DescribeVsDomainCertificateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainCertificateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainCertificateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainConfigsOutcome VsClient::describeVsDomainConfigs(const DescribeVsDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainConfigsOutcome(DescribeVsDomainConfigsResult(outcome.result()));
	else
		return DescribeVsDomainConfigsOutcome(outcome.error());
}

void VsClient::describeVsDomainConfigsAsync(const DescribeVsDomainConfigsRequest& request, const DescribeVsDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainConfigsOutcomeCallable VsClient::describeVsDomainConfigsCallable(const DescribeVsDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainDetailOutcome VsClient::describeVsDomainDetail(const DescribeVsDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainDetailOutcome(DescribeVsDomainDetailResult(outcome.result()));
	else
		return DescribeVsDomainDetailOutcome(outcome.error());
}

void VsClient::describeVsDomainDetailAsync(const DescribeVsDomainDetailRequest& request, const DescribeVsDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainDetailOutcomeCallable VsClient::describeVsDomainDetailCallable(const DescribeVsDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainPvDataOutcome VsClient::describeVsDomainPvData(const DescribeVsDomainPvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainPvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainPvDataOutcome(DescribeVsDomainPvDataResult(outcome.result()));
	else
		return DescribeVsDomainPvDataOutcome(outcome.error());
}

void VsClient::describeVsDomainPvDataAsync(const DescribeVsDomainPvDataRequest& request, const DescribeVsDomainPvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainPvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainPvDataOutcomeCallable VsClient::describeVsDomainPvDataCallable(const DescribeVsDomainPvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainPvDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainPvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainPvUvDataOutcome VsClient::describeVsDomainPvUvData(const DescribeVsDomainPvUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainPvUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainPvUvDataOutcome(DescribeVsDomainPvUvDataResult(outcome.result()));
	else
		return DescribeVsDomainPvUvDataOutcome(outcome.error());
}

void VsClient::describeVsDomainPvUvDataAsync(const DescribeVsDomainPvUvDataRequest& request, const DescribeVsDomainPvUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainPvUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainPvUvDataOutcomeCallable VsClient::describeVsDomainPvUvDataCallable(const DescribeVsDomainPvUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainPvUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainPvUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainRecordDataOutcome VsClient::describeVsDomainRecordData(const DescribeVsDomainRecordDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainRecordDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainRecordDataOutcome(DescribeVsDomainRecordDataResult(outcome.result()));
	else
		return DescribeVsDomainRecordDataOutcome(outcome.error());
}

void VsClient::describeVsDomainRecordDataAsync(const DescribeVsDomainRecordDataRequest& request, const DescribeVsDomainRecordDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainRecordData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainRecordDataOutcomeCallable VsClient::describeVsDomainRecordDataCallable(const DescribeVsDomainRecordDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainRecordDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainRecordData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainRegionDataOutcome VsClient::describeVsDomainRegionData(const DescribeVsDomainRegionDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainRegionDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainRegionDataOutcome(DescribeVsDomainRegionDataResult(outcome.result()));
	else
		return DescribeVsDomainRegionDataOutcome(outcome.error());
}

void VsClient::describeVsDomainRegionDataAsync(const DescribeVsDomainRegionDataRequest& request, const DescribeVsDomainRegionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainRegionData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainRegionDataOutcomeCallable VsClient::describeVsDomainRegionDataCallable(const DescribeVsDomainRegionDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainRegionDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainRegionData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainReqBpsDataOutcome VsClient::describeVsDomainReqBpsData(const DescribeVsDomainReqBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainReqBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainReqBpsDataOutcome(DescribeVsDomainReqBpsDataResult(outcome.result()));
	else
		return DescribeVsDomainReqBpsDataOutcome(outcome.error());
}

void VsClient::describeVsDomainReqBpsDataAsync(const DescribeVsDomainReqBpsDataRequest& request, const DescribeVsDomainReqBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainReqBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainReqBpsDataOutcomeCallable VsClient::describeVsDomainReqBpsDataCallable(const DescribeVsDomainReqBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainReqBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainReqBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainReqTrafficDataOutcome VsClient::describeVsDomainReqTrafficData(const DescribeVsDomainReqTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainReqTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainReqTrafficDataOutcome(DescribeVsDomainReqTrafficDataResult(outcome.result()));
	else
		return DescribeVsDomainReqTrafficDataOutcome(outcome.error());
}

void VsClient::describeVsDomainReqTrafficDataAsync(const DescribeVsDomainReqTrafficDataRequest& request, const DescribeVsDomainReqTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainReqTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainReqTrafficDataOutcomeCallable VsClient::describeVsDomainReqTrafficDataCallable(const DescribeVsDomainReqTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainReqTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainReqTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainSnapshotDataOutcome VsClient::describeVsDomainSnapshotData(const DescribeVsDomainSnapshotDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainSnapshotDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainSnapshotDataOutcome(DescribeVsDomainSnapshotDataResult(outcome.result()));
	else
		return DescribeVsDomainSnapshotDataOutcome(outcome.error());
}

void VsClient::describeVsDomainSnapshotDataAsync(const DescribeVsDomainSnapshotDataRequest& request, const DescribeVsDomainSnapshotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainSnapshotData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainSnapshotDataOutcomeCallable VsClient::describeVsDomainSnapshotDataCallable(const DescribeVsDomainSnapshotDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainSnapshotDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainSnapshotData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainTrafficDataOutcome VsClient::describeVsDomainTrafficData(const DescribeVsDomainTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainTrafficDataOutcome(DescribeVsDomainTrafficDataResult(outcome.result()));
	else
		return DescribeVsDomainTrafficDataOutcome(outcome.error());
}

void VsClient::describeVsDomainTrafficDataAsync(const DescribeVsDomainTrafficDataRequest& request, const DescribeVsDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainTrafficDataOutcomeCallable VsClient::describeVsDomainTrafficDataCallable(const DescribeVsDomainTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsDomainUvDataOutcome VsClient::describeVsDomainUvData(const DescribeVsDomainUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsDomainUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsDomainUvDataOutcome(DescribeVsDomainUvDataResult(outcome.result()));
	else
		return DescribeVsDomainUvDataOutcome(outcome.error());
}

void VsClient::describeVsDomainUvDataAsync(const DescribeVsDomainUvDataRequest& request, const DescribeVsDomainUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsDomainUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsDomainUvDataOutcomeCallable VsClient::describeVsDomainUvDataCallable(const DescribeVsDomainUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsDomainUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsDomainUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsPullStreamInfoConfigOutcome VsClient::describeVsPullStreamInfoConfig(const DescribeVsPullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsPullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsPullStreamInfoConfigOutcome(DescribeVsPullStreamInfoConfigResult(outcome.result()));
	else
		return DescribeVsPullStreamInfoConfigOutcome(outcome.error());
}

void VsClient::describeVsPullStreamInfoConfigAsync(const DescribeVsPullStreamInfoConfigRequest& request, const DescribeVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsPullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsPullStreamInfoConfigOutcomeCallable VsClient::describeVsPullStreamInfoConfigCallable(const DescribeVsPullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsPullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVsPullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsStorageTrafficUsageDataOutcome VsClient::describeVsStorageTrafficUsageData(const DescribeVsStorageTrafficUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsStorageTrafficUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsStorageTrafficUsageDataOutcome(DescribeVsStorageTrafficUsageDataResult(outcome.result()));
	else
		return DescribeVsStorageTrafficUsageDataOutcome(outcome.error());
}

void VsClient::describeVsStorageTrafficUsageDataAsync(const DescribeVsStorageTrafficUsageDataRequest& request, const DescribeVsStorageTrafficUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsStorageTrafficUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsStorageTrafficUsageDataOutcomeCallable VsClient::describeVsStorageTrafficUsageDataCallable(const DescribeVsStorageTrafficUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsStorageTrafficUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsStorageTrafficUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsStorageUsageDataOutcome VsClient::describeVsStorageUsageData(const DescribeVsStorageUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsStorageUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsStorageUsageDataOutcome(DescribeVsStorageUsageDataResult(outcome.result()));
	else
		return DescribeVsStorageUsageDataOutcome(outcome.error());
}

void VsClient::describeVsStorageUsageDataAsync(const DescribeVsStorageUsageDataRequest& request, const DescribeVsStorageUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsStorageUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsStorageUsageDataOutcomeCallable VsClient::describeVsStorageUsageDataCallable(const DescribeVsStorageUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsStorageUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsStorageUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsStreamsNotifyUrlConfigOutcome VsClient::describeVsStreamsNotifyUrlConfig(const DescribeVsStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsStreamsNotifyUrlConfigOutcome(DescribeVsStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return DescribeVsStreamsNotifyUrlConfigOutcome(outcome.error());
}

void VsClient::describeVsStreamsNotifyUrlConfigAsync(const DescribeVsStreamsNotifyUrlConfigRequest& request, const DescribeVsStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsStreamsNotifyUrlConfigOutcomeCallable VsClient::describeVsStreamsNotifyUrlConfigCallable(const DescribeVsStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVsStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsStreamsOnlineListOutcome VsClient::describeVsStreamsOnlineList(const DescribeVsStreamsOnlineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsStreamsOnlineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsStreamsOnlineListOutcome(DescribeVsStreamsOnlineListResult(outcome.result()));
	else
		return DescribeVsStreamsOnlineListOutcome(outcome.error());
}

void VsClient::describeVsStreamsOnlineListAsync(const DescribeVsStreamsOnlineListRequest& request, const DescribeVsStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsStreamsOnlineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsStreamsOnlineListOutcomeCallable VsClient::describeVsStreamsOnlineListCallable(const DescribeVsStreamsOnlineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsStreamsOnlineListOutcome()>>(
			[this, request]()
			{
			return this->describeVsStreamsOnlineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsStreamsPublishListOutcome VsClient::describeVsStreamsPublishList(const DescribeVsStreamsPublishListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsStreamsPublishListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsStreamsPublishListOutcome(DescribeVsStreamsPublishListResult(outcome.result()));
	else
		return DescribeVsStreamsPublishListOutcome(outcome.error());
}

void VsClient::describeVsStreamsPublishListAsync(const DescribeVsStreamsPublishListRequest& request, const DescribeVsStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsStreamsPublishList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsStreamsPublishListOutcomeCallable VsClient::describeVsStreamsPublishListCallable(const DescribeVsStreamsPublishListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsStreamsPublishListOutcome()>>(
			[this, request]()
			{
			return this->describeVsStreamsPublishList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsTopDomainsByFlowOutcome VsClient::describeVsTopDomainsByFlow(const DescribeVsTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsTopDomainsByFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsTopDomainsByFlowOutcome(DescribeVsTopDomainsByFlowResult(outcome.result()));
	else
		return DescribeVsTopDomainsByFlowOutcome(outcome.error());
}

void VsClient::describeVsTopDomainsByFlowAsync(const DescribeVsTopDomainsByFlowRequest& request, const DescribeVsTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsTopDomainsByFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsTopDomainsByFlowOutcomeCallable VsClient::describeVsTopDomainsByFlowCallable(const DescribeVsTopDomainsByFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsTopDomainsByFlowOutcome()>>(
			[this, request]()
			{
			return this->describeVsTopDomainsByFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsUpPeakPublishStreamDataOutcome VsClient::describeVsUpPeakPublishStreamData(const DescribeVsUpPeakPublishStreamDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsUpPeakPublishStreamDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsUpPeakPublishStreamDataOutcome(DescribeVsUpPeakPublishStreamDataResult(outcome.result()));
	else
		return DescribeVsUpPeakPublishStreamDataOutcome(outcome.error());
}

void VsClient::describeVsUpPeakPublishStreamDataAsync(const DescribeVsUpPeakPublishStreamDataRequest& request, const DescribeVsUpPeakPublishStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsUpPeakPublishStreamData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsUpPeakPublishStreamDataOutcomeCallable VsClient::describeVsUpPeakPublishStreamDataCallable(const DescribeVsUpPeakPublishStreamDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsUpPeakPublishStreamDataOutcome()>>(
			[this, request]()
			{
			return this->describeVsUpPeakPublishStreamData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::DescribeVsUserResourcePackageOutcome VsClient::describeVsUserResourcePackage(const DescribeVsUserResourcePackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVsUserResourcePackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVsUserResourcePackageOutcome(DescribeVsUserResourcePackageResult(outcome.result()));
	else
		return DescribeVsUserResourcePackageOutcome(outcome.error());
}

void VsClient::describeVsUserResourcePackageAsync(const DescribeVsUserResourcePackageRequest& request, const DescribeVsUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVsUserResourcePackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::DescribeVsUserResourcePackageOutcomeCallable VsClient::describeVsUserResourcePackageCallable(const DescribeVsUserResourcePackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVsUserResourcePackageOutcome()>>(
			[this, request]()
			{
			return this->describeVsUserResourcePackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ForbidVsStreamOutcome VsClient::forbidVsStream(const ForbidVsStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ForbidVsStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForbidVsStreamOutcome(ForbidVsStreamResult(outcome.result()));
	else
		return ForbidVsStreamOutcome(outcome.error());
}

void VsClient::forbidVsStreamAsync(const ForbidVsStreamRequest& request, const ForbidVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forbidVsStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ForbidVsStreamOutcomeCallable VsClient::forbidVsStreamCallable(const ForbidVsStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForbidVsStreamOutcome()>>(
			[this, request]()
			{
			return this->forbidVsStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::GetBucketInfoOutcome VsClient::getBucketInfo(const GetBucketInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBucketInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBucketInfoOutcome(GetBucketInfoResult(outcome.result()));
	else
		return GetBucketInfoOutcome(outcome.error());
}

void VsClient::getBucketInfoAsync(const GetBucketInfoRequest& request, const GetBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBucketInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::GetBucketInfoOutcomeCallable VsClient::getBucketInfoCallable(const GetBucketInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBucketInfoOutcome()>>(
			[this, request]()
			{
			return this->getBucketInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::GotoPresetOutcome VsClient::gotoPreset(const GotoPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GotoPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GotoPresetOutcome(GotoPresetResult(outcome.result()));
	else
		return GotoPresetOutcome(outcome.error());
}

void VsClient::gotoPresetAsync(const GotoPresetRequest& request, const GotoPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, gotoPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::GotoPresetOutcomeCallable VsClient::gotoPresetCallable(const GotoPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GotoPresetOutcome()>>(
			[this, request]()
			{
			return this->gotoPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ListBucketsOutcome VsClient::listBuckets(const ListBucketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBucketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBucketsOutcome(ListBucketsResult(outcome.result()));
	else
		return ListBucketsOutcome(outcome.error());
}

void VsClient::listBucketsAsync(const ListBucketsRequest& request, const ListBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBuckets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ListBucketsOutcomeCallable VsClient::listBucketsCallable(const ListBucketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBucketsOutcome()>>(
			[this, request]()
			{
			return this->listBuckets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ListDeviceChannelsOutcome VsClient::listDeviceChannels(const ListDeviceChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceChannelsOutcome(ListDeviceChannelsResult(outcome.result()));
	else
		return ListDeviceChannelsOutcome(outcome.error());
}

void VsClient::listDeviceChannelsAsync(const ListDeviceChannelsRequest& request, const ListDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ListDeviceChannelsOutcomeCallable VsClient::listDeviceChannelsCallable(const ListDeviceChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceChannelsOutcome()>>(
			[this, request]()
			{
			return this->listDeviceChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ListDeviceRecordsOutcome VsClient::listDeviceRecords(const ListDeviceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeviceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeviceRecordsOutcome(ListDeviceRecordsResult(outcome.result()));
	else
		return ListDeviceRecordsOutcome(outcome.error());
}

void VsClient::listDeviceRecordsAsync(const ListDeviceRecordsRequest& request, const ListDeviceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeviceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ListDeviceRecordsOutcomeCallable VsClient::listDeviceRecordsCallable(const ListDeviceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeviceRecordsOutcome()>>(
			[this, request]()
			{
			return this->listDeviceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ListObjectsOutcome VsClient::listObjects(const ListObjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListObjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListObjectsOutcome(ListObjectsResult(outcome.result()));
	else
		return ListObjectsOutcome(outcome.error());
}

void VsClient::listObjectsAsync(const ListObjectsRequest& request, const ListObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listObjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ListObjectsOutcomeCallable VsClient::listObjectsCallable(const ListObjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListObjectsOutcome()>>(
			[this, request]()
			{
			return this->listObjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyDeviceOutcome VsClient::modifyDevice(const ModifyDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceOutcome(ModifyDeviceResult(outcome.result()));
	else
		return ModifyDeviceOutcome(outcome.error());
}

void VsClient::modifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyDeviceOutcomeCallable VsClient::modifyDeviceCallable(const ModifyDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceOutcome()>>(
			[this, request]()
			{
			return this->modifyDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyDeviceAlarmOutcome VsClient::modifyDeviceAlarm(const ModifyDeviceAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceAlarmOutcome(ModifyDeviceAlarmResult(outcome.result()));
	else
		return ModifyDeviceAlarmOutcome(outcome.error());
}

void VsClient::modifyDeviceAlarmAsync(const ModifyDeviceAlarmRequest& request, const ModifyDeviceAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeviceAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyDeviceAlarmOutcomeCallable VsClient::modifyDeviceAlarmCallable(const ModifyDeviceAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceAlarmOutcome()>>(
			[this, request]()
			{
			return this->modifyDeviceAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyDeviceCaptureOutcome VsClient::modifyDeviceCapture(const ModifyDeviceCaptureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceCaptureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceCaptureOutcome(ModifyDeviceCaptureResult(outcome.result()));
	else
		return ModifyDeviceCaptureOutcome(outcome.error());
}

void VsClient::modifyDeviceCaptureAsync(const ModifyDeviceCaptureRequest& request, const ModifyDeviceCaptureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeviceCapture(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyDeviceCaptureOutcomeCallable VsClient::modifyDeviceCaptureCallable(const ModifyDeviceCaptureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceCaptureOutcome()>>(
			[this, request]()
			{
			return this->modifyDeviceCapture(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyDeviceChannelsOutcome VsClient::modifyDeviceChannels(const ModifyDeviceChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDeviceChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDeviceChannelsOutcome(ModifyDeviceChannelsResult(outcome.result()));
	else
		return ModifyDeviceChannelsOutcome(outcome.error());
}

void VsClient::modifyDeviceChannelsAsync(const ModifyDeviceChannelsRequest& request, const ModifyDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDeviceChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyDeviceChannelsOutcomeCallable VsClient::modifyDeviceChannelsCallable(const ModifyDeviceChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDeviceChannelsOutcome()>>(
			[this, request]()
			{
			return this->modifyDeviceChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyDirectoryOutcome VsClient::modifyDirectory(const ModifyDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDirectoryOutcome(ModifyDirectoryResult(outcome.result()));
	else
		return ModifyDirectoryOutcome(outcome.error());
}

void VsClient::modifyDirectoryAsync(const ModifyDirectoryRequest& request, const ModifyDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyDirectoryOutcomeCallable VsClient::modifyDirectoryCallable(const ModifyDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDirectoryOutcome()>>(
			[this, request]()
			{
			return this->modifyDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyGroupOutcome VsClient::modifyGroup(const ModifyGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGroupOutcome(ModifyGroupResult(outcome.result()));
	else
		return ModifyGroupOutcome(outcome.error());
}

void VsClient::modifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyGroupOutcomeCallable VsClient::modifyGroupCallable(const ModifyGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyParentPlatformOutcome VsClient::modifyParentPlatform(const ModifyParentPlatformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyParentPlatformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyParentPlatformOutcome(ModifyParentPlatformResult(outcome.result()));
	else
		return ModifyParentPlatformOutcome(outcome.error());
}

void VsClient::modifyParentPlatformAsync(const ModifyParentPlatformRequest& request, const ModifyParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyParentPlatform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyParentPlatformOutcomeCallable VsClient::modifyParentPlatformCallable(const ModifyParentPlatformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyParentPlatformOutcome()>>(
			[this, request]()
			{
			return this->modifyParentPlatform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ModifyTemplateOutcome VsClient::modifyTemplate(const ModifyTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTemplateOutcome(ModifyTemplateResult(outcome.result()));
	else
		return ModifyTemplateOutcome(outcome.error());
}

void VsClient::modifyTemplateAsync(const ModifyTemplateRequest& request, const ModifyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ModifyTemplateOutcomeCallable VsClient::modifyTemplateCallable(const ModifyTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifyTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::OpenVsServiceOutcome VsClient::openVsService(const OpenVsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenVsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenVsServiceOutcome(OpenVsServiceResult(outcome.result()));
	else
		return OpenVsServiceOutcome(outcome.error());
}

void VsClient::openVsServiceAsync(const OpenVsServiceRequest& request, const OpenVsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openVsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::OpenVsServiceOutcomeCallable VsClient::openVsServiceCallable(const OpenVsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenVsServiceOutcome()>>(
			[this, request]()
			{
			return this->openVsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::OperateRenderingDevicesOutcome VsClient::operateRenderingDevices(const OperateRenderingDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateRenderingDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateRenderingDevicesOutcome(OperateRenderingDevicesResult(outcome.result()));
	else
		return OperateRenderingDevicesOutcome(outcome.error());
}

void VsClient::operateRenderingDevicesAsync(const OperateRenderingDevicesRequest& request, const OperateRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateRenderingDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::OperateRenderingDevicesOutcomeCallable VsClient::operateRenderingDevicesCallable(const OperateRenderingDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateRenderingDevicesOutcome()>>(
			[this, request]()
			{
			return this->operateRenderingDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::PrepareUploadOutcome VsClient::prepareUpload(const PrepareUploadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PrepareUploadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PrepareUploadOutcome(PrepareUploadResult(outcome.result()));
	else
		return PrepareUploadOutcome(outcome.error());
}

void VsClient::prepareUploadAsync(const PrepareUploadRequest& request, const PrepareUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, prepareUpload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::PrepareUploadOutcomeCallable VsClient::prepareUploadCallable(const PrepareUploadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PrepareUploadOutcome()>>(
			[this, request]()
			{
			return this->prepareUpload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::PutBucketOutcome VsClient::putBucket(const PutBucketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutBucketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutBucketOutcome(PutBucketResult(outcome.result()));
	else
		return PutBucketOutcome(outcome.error());
}

void VsClient::putBucketAsync(const PutBucketRequest& request, const PutBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putBucket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::PutBucketOutcomeCallable VsClient::putBucketCallable(const PutBucketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutBucketOutcome()>>(
			[this, request]()
			{
			return this->putBucket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ResetRenderingDevicesOutcome VsClient::resetRenderingDevices(const ResetRenderingDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetRenderingDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetRenderingDevicesOutcome(ResetRenderingDevicesResult(outcome.result()));
	else
		return ResetRenderingDevicesOutcome(outcome.error());
}

void VsClient::resetRenderingDevicesAsync(const ResetRenderingDevicesRequest& request, const ResetRenderingDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetRenderingDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ResetRenderingDevicesOutcomeCallable VsClient::resetRenderingDevicesCallable(const ResetRenderingDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetRenderingDevicesOutcome()>>(
			[this, request]()
			{
			return this->resetRenderingDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::ResumeVsStreamOutcome VsClient::resumeVsStream(const ResumeVsStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeVsStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeVsStreamOutcome(ResumeVsStreamResult(outcome.result()));
	else
		return ResumeVsStreamOutcome(outcome.error());
}

void VsClient::resumeVsStreamAsync(const ResumeVsStreamRequest& request, const ResumeVsStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeVsStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::ResumeVsStreamOutcomeCallable VsClient::resumeVsStreamCallable(const ResumeVsStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeVsStreamOutcome()>>(
			[this, request]()
			{
			return this->resumeVsStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::SetPresetOutcome VsClient::setPreset(const SetPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPresetOutcome(SetPresetResult(outcome.result()));
	else
		return SetPresetOutcome(outcome.error());
}

void VsClient::setPresetAsync(const SetPresetRequest& request, const SetPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::SetPresetOutcomeCallable VsClient::setPresetCallable(const SetPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPresetOutcome()>>(
			[this, request]()
			{
			return this->setPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::SetVsDomainCertificateOutcome VsClient::setVsDomainCertificate(const SetVsDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetVsDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVsDomainCertificateOutcome(SetVsDomainCertificateResult(outcome.result()));
	else
		return SetVsDomainCertificateOutcome(outcome.error());
}

void VsClient::setVsDomainCertificateAsync(const SetVsDomainCertificateRequest& request, const SetVsDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVsDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::SetVsDomainCertificateOutcomeCallable VsClient::setVsDomainCertificateCallable(const SetVsDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVsDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setVsDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::SetVsStreamsNotifyUrlConfigOutcome VsClient::setVsStreamsNotifyUrlConfig(const SetVsStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetVsStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVsStreamsNotifyUrlConfigOutcome(SetVsStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return SetVsStreamsNotifyUrlConfigOutcome(outcome.error());
}

void VsClient::setVsStreamsNotifyUrlConfigAsync(const SetVsStreamsNotifyUrlConfigRequest& request, const SetVsStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVsStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::SetVsStreamsNotifyUrlConfigOutcomeCallable VsClient::setVsStreamsNotifyUrlConfigCallable(const SetVsStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVsStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->setVsStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StartDeviceOutcome VsClient::startDevice(const StartDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDeviceOutcome(StartDeviceResult(outcome.result()));
	else
		return StartDeviceOutcome(outcome.error());
}

void VsClient::startDeviceAsync(const StartDeviceRequest& request, const StartDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StartDeviceOutcomeCallable VsClient::startDeviceCallable(const StartDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDeviceOutcome()>>(
			[this, request]()
			{
			return this->startDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StartParentPlatformOutcome VsClient::startParentPlatform(const StartParentPlatformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartParentPlatformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartParentPlatformOutcome(StartParentPlatformResult(outcome.result()));
	else
		return StartParentPlatformOutcome(outcome.error());
}

void VsClient::startParentPlatformAsync(const StartParentPlatformRequest& request, const StartParentPlatformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startParentPlatform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StartParentPlatformOutcomeCallable VsClient::startParentPlatformCallable(const StartParentPlatformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartParentPlatformOutcome()>>(
			[this, request]()
			{
			return this->startParentPlatform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StartRecordStreamOutcome VsClient::startRecordStream(const StartRecordStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRecordStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRecordStreamOutcome(StartRecordStreamResult(outcome.result()));
	else
		return StartRecordStreamOutcome(outcome.error());
}

void VsClient::startRecordStreamAsync(const StartRecordStreamRequest& request, const StartRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRecordStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StartRecordStreamOutcomeCallable VsClient::startRecordStreamCallable(const StartRecordStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRecordStreamOutcome()>>(
			[this, request]()
			{
			return this->startRecordStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StartStreamOutcome VsClient::startStream(const StartStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartStreamOutcome(StartStreamResult(outcome.result()));
	else
		return StartStreamOutcome(outcome.error());
}

void VsClient::startStreamAsync(const StartStreamRequest& request, const StartStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StartStreamOutcomeCallable VsClient::startStreamCallable(const StartStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartStreamOutcome()>>(
			[this, request]()
			{
			return this->startStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StartTransferStreamOutcome VsClient::startTransferStream(const StartTransferStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTransferStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTransferStreamOutcome(StartTransferStreamResult(outcome.result()));
	else
		return StartTransferStreamOutcome(outcome.error());
}

void VsClient::startTransferStreamAsync(const StartTransferStreamRequest& request, const StartTransferStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTransferStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StartTransferStreamOutcomeCallable VsClient::startTransferStreamCallable(const StartTransferStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTransferStreamOutcome()>>(
			[this, request]()
			{
			return this->startTransferStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StopAdjustOutcome VsClient::stopAdjust(const StopAdjustRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopAdjustOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopAdjustOutcome(StopAdjustResult(outcome.result()));
	else
		return StopAdjustOutcome(outcome.error());
}

void VsClient::stopAdjustAsync(const StopAdjustRequest& request, const StopAdjustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopAdjust(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StopAdjustOutcomeCallable VsClient::stopAdjustCallable(const StopAdjustRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopAdjustOutcome()>>(
			[this, request]()
			{
			return this->stopAdjust(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StopDeviceOutcome VsClient::stopDevice(const StopDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDeviceOutcome(StopDeviceResult(outcome.result()));
	else
		return StopDeviceOutcome(outcome.error());
}

void VsClient::stopDeviceAsync(const StopDeviceRequest& request, const StopDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StopDeviceOutcomeCallable VsClient::stopDeviceCallable(const StopDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDeviceOutcome()>>(
			[this, request]()
			{
			return this->stopDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StopMoveOutcome VsClient::stopMove(const StopMoveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMoveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMoveOutcome(StopMoveResult(outcome.result()));
	else
		return StopMoveOutcome(outcome.error());
}

void VsClient::stopMoveAsync(const StopMoveRequest& request, const StopMoveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMove(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StopMoveOutcomeCallable VsClient::stopMoveCallable(const StopMoveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMoveOutcome()>>(
			[this, request]()
			{
			return this->stopMove(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StopRecordStreamOutcome VsClient::stopRecordStream(const StopRecordStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRecordStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRecordStreamOutcome(StopRecordStreamResult(outcome.result()));
	else
		return StopRecordStreamOutcome(outcome.error());
}

void VsClient::stopRecordStreamAsync(const StopRecordStreamRequest& request, const StopRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRecordStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StopRecordStreamOutcomeCallable VsClient::stopRecordStreamCallable(const StopRecordStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRecordStreamOutcome()>>(
			[this, request]()
			{
			return this->stopRecordStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StopStreamOutcome VsClient::stopStream(const StopStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopStreamOutcome(StopStreamResult(outcome.result()));
	else
		return StopStreamOutcome(outcome.error());
}

void VsClient::stopStreamAsync(const StopStreamRequest& request, const StopStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StopStreamOutcomeCallable VsClient::stopStreamCallable(const StopStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopStreamOutcome()>>(
			[this, request]()
			{
			return this->stopStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::StopTransferStreamOutcome VsClient::stopTransferStream(const StopTransferStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTransferStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTransferStreamOutcome(StopTransferStreamResult(outcome.result()));
	else
		return StopTransferStreamOutcome(outcome.error());
}

void VsClient::stopTransferStreamAsync(const StopTransferStreamRequest& request, const StopTransferStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTransferStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::StopTransferStreamOutcomeCallable VsClient::stopTransferStreamCallable(const StopTransferStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTransferStreamOutcome()>>(
			[this, request]()
			{
			return this->stopTransferStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::SyncCatalogsOutcome VsClient::syncCatalogs(const SyncCatalogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncCatalogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncCatalogsOutcome(SyncCatalogsResult(outcome.result()));
	else
		return SyncCatalogsOutcome(outcome.error());
}

void VsClient::syncCatalogsAsync(const SyncCatalogsRequest& request, const SyncCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncCatalogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::SyncCatalogsOutcomeCallable VsClient::syncCatalogsCallable(const SyncCatalogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncCatalogsOutcome()>>(
			[this, request]()
			{
			return this->syncCatalogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::SyncDeviceChannelsOutcome VsClient::syncDeviceChannels(const SyncDeviceChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncDeviceChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncDeviceChannelsOutcome(SyncDeviceChannelsResult(outcome.result()));
	else
		return SyncDeviceChannelsOutcome(outcome.error());
}

void VsClient::syncDeviceChannelsAsync(const SyncDeviceChannelsRequest& request, const SyncDeviceChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncDeviceChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::SyncDeviceChannelsOutcomeCallable VsClient::syncDeviceChannelsCallable(const SyncDeviceChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncDeviceChannelsOutcome()>>(
			[this, request]()
			{
			return this->syncDeviceChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UnbindDirectoryOutcome VsClient::unbindDirectory(const UnbindDirectoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindDirectoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindDirectoryOutcome(UnbindDirectoryResult(outcome.result()));
	else
		return UnbindDirectoryOutcome(outcome.error());
}

void VsClient::unbindDirectoryAsync(const UnbindDirectoryRequest& request, const UnbindDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindDirectory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UnbindDirectoryOutcomeCallable VsClient::unbindDirectoryCallable(const UnbindDirectoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindDirectoryOutcome()>>(
			[this, request]()
			{
			return this->unbindDirectory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UnbindParentPlatformDeviceOutcome VsClient::unbindParentPlatformDevice(const UnbindParentPlatformDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindParentPlatformDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindParentPlatformDeviceOutcome(UnbindParentPlatformDeviceResult(outcome.result()));
	else
		return UnbindParentPlatformDeviceOutcome(outcome.error());
}

void VsClient::unbindParentPlatformDeviceAsync(const UnbindParentPlatformDeviceRequest& request, const UnbindParentPlatformDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindParentPlatformDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UnbindParentPlatformDeviceOutcomeCallable VsClient::unbindParentPlatformDeviceCallable(const UnbindParentPlatformDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindParentPlatformDeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindParentPlatformDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UnbindPurchasedDeviceOutcome VsClient::unbindPurchasedDevice(const UnbindPurchasedDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindPurchasedDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindPurchasedDeviceOutcome(UnbindPurchasedDeviceResult(outcome.result()));
	else
		return UnbindPurchasedDeviceOutcome(outcome.error());
}

void VsClient::unbindPurchasedDeviceAsync(const UnbindPurchasedDeviceRequest& request, const UnbindPurchasedDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindPurchasedDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UnbindPurchasedDeviceOutcomeCallable VsClient::unbindPurchasedDeviceCallable(const UnbindPurchasedDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindPurchasedDeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindPurchasedDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UnbindTemplateOutcome VsClient::unbindTemplate(const UnbindTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindTemplateOutcome(UnbindTemplateResult(outcome.result()));
	else
		return UnbindTemplateOutcome(outcome.error());
}

void VsClient::unbindTemplateAsync(const UnbindTemplateRequest& request, const UnbindTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UnbindTemplateOutcomeCallable VsClient::unbindTemplateCallable(const UnbindTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindTemplateOutcome()>>(
			[this, request]()
			{
			return this->unbindTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UnlockDeviceOutcome VsClient::unlockDevice(const UnlockDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockDeviceOutcome(UnlockDeviceResult(outcome.result()));
	else
		return UnlockDeviceOutcome(outcome.error());
}

void VsClient::unlockDeviceAsync(const UnlockDeviceRequest& request, const UnlockDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UnlockDeviceOutcomeCallable VsClient::unlockDeviceCallable(const UnlockDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockDeviceOutcome()>>(
			[this, request]()
			{
			return this->unlockDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UpdateBucketInfoOutcome VsClient::updateBucketInfo(const UpdateBucketInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBucketInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBucketInfoOutcome(UpdateBucketInfoResult(outcome.result()));
	else
		return UpdateBucketInfoOutcome(outcome.error());
}

void VsClient::updateBucketInfoAsync(const UpdateBucketInfoRequest& request, const UpdateBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBucketInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UpdateBucketInfoOutcomeCallable VsClient::updateBucketInfoCallable(const UpdateBucketInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBucketInfoOutcome()>>(
			[this, request]()
			{
			return this->updateBucketInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UpdateClusterOutcome VsClient::updateCluster(const UpdateClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterOutcome(UpdateClusterResult(outcome.result()));
	else
		return UpdateClusterOutcome(outcome.error());
}

void VsClient::updateClusterAsync(const UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UpdateClusterOutcomeCallable VsClient::updateClusterCallable(const UpdateClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterOutcome()>>(
			[this, request]()
			{
			return this->updateCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UpdateRenderingDeviceSpecOutcome VsClient::updateRenderingDeviceSpec(const UpdateRenderingDeviceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRenderingDeviceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRenderingDeviceSpecOutcome(UpdateRenderingDeviceSpecResult(outcome.result()));
	else
		return UpdateRenderingDeviceSpecOutcome(outcome.error());
}

void VsClient::updateRenderingDeviceSpecAsync(const UpdateRenderingDeviceSpecRequest& request, const UpdateRenderingDeviceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRenderingDeviceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UpdateRenderingDeviceSpecOutcomeCallable VsClient::updateRenderingDeviceSpecCallable(const UpdateRenderingDeviceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRenderingDeviceSpecOutcome()>>(
			[this, request]()
			{
			return this->updateRenderingDeviceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UpdateVsPullStreamInfoConfigOutcome VsClient::updateVsPullStreamInfoConfig(const UpdateVsPullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateVsPullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateVsPullStreamInfoConfigOutcome(UpdateVsPullStreamInfoConfigResult(outcome.result()));
	else
		return UpdateVsPullStreamInfoConfigOutcome(outcome.error());
}

void VsClient::updateVsPullStreamInfoConfigAsync(const UpdateVsPullStreamInfoConfigRequest& request, const UpdateVsPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateVsPullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UpdateVsPullStreamInfoConfigOutcomeCallable VsClient::updateVsPullStreamInfoConfigCallable(const UpdateVsPullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateVsPullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->updateVsPullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VsClient::UploadDeviceRecordOutcome VsClient::uploadDeviceRecord(const UploadDeviceRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadDeviceRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadDeviceRecordOutcome(UploadDeviceRecordResult(outcome.result()));
	else
		return UploadDeviceRecordOutcome(outcome.error());
}

void VsClient::uploadDeviceRecordAsync(const UploadDeviceRecordRequest& request, const UploadDeviceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadDeviceRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VsClient::UploadDeviceRecordOutcomeCallable VsClient::uploadDeviceRecordCallable(const UploadDeviceRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadDeviceRecordOutcome()>>(
			[this, request]()
			{
			return this->uploadDeviceRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

