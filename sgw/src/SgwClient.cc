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

#include <alibabacloud/sgw/SgwClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

namespace
{
	const std::string SERVICE_NAME = "sgw";
}

SgwClient::SgwClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hcs_sgw");
}

SgwClient::SgwClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hcs_sgw");
}

SgwClient::SgwClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hcs_sgw");
}

SgwClient::~SgwClient()
{}

SgwClient::ActivateAllInOneGatewayOutcome SgwClient::activateAllInOneGateway(const ActivateAllInOneGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateAllInOneGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateAllInOneGatewayOutcome(ActivateAllInOneGatewayResult(outcome.result()));
	else
		return ActivateAllInOneGatewayOutcome(outcome.error());
}

void SgwClient::activateAllInOneGatewayAsync(const ActivateAllInOneGatewayRequest& request, const ActivateAllInOneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateAllInOneGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ActivateAllInOneGatewayOutcomeCallable SgwClient::activateAllInOneGatewayCallable(const ActivateAllInOneGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateAllInOneGatewayOutcome()>>(
			[this, request]()
			{
			return this->activateAllInOneGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ActivateGatewayOutcome SgwClient::activateGateway(const ActivateGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateGatewayOutcome(ActivateGatewayResult(outcome.result()));
	else
		return ActivateGatewayOutcome(outcome.error());
}

void SgwClient::activateGatewayAsync(const ActivateGatewayRequest& request, const ActivateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ActivateGatewayOutcomeCallable SgwClient::activateGatewayCallable(const ActivateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateGatewayOutcome()>>(
			[this, request]()
			{
			return this->activateGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::AddSharesToExpressSyncOutcome SgwClient::addSharesToExpressSync(const AddSharesToExpressSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSharesToExpressSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSharesToExpressSyncOutcome(AddSharesToExpressSyncResult(outcome.result()));
	else
		return AddSharesToExpressSyncOutcome(outcome.error());
}

void SgwClient::addSharesToExpressSyncAsync(const AddSharesToExpressSyncRequest& request, const AddSharesToExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSharesToExpressSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::AddSharesToExpressSyncOutcomeCallable SgwClient::addSharesToExpressSyncCallable(const AddSharesToExpressSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSharesToExpressSyncOutcome()>>(
			[this, request]()
			{
			return this->addSharesToExpressSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::AddTagsToGatewayOutcome SgwClient::addTagsToGateway(const AddTagsToGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagsToGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagsToGatewayOutcome(AddTagsToGatewayResult(outcome.result()));
	else
		return AddTagsToGatewayOutcome(outcome.error());
}

void SgwClient::addTagsToGatewayAsync(const AddTagsToGatewayRequest& request, const AddTagsToGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagsToGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::AddTagsToGatewayOutcomeCallable SgwClient::addTagsToGatewayCallable(const AddTagsToGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagsToGatewayOutcome()>>(
			[this, request]()
			{
			return this->addTagsToGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckActivationKeyOutcome SgwClient::checkActivationKey(const CheckActivationKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckActivationKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckActivationKeyOutcome(CheckActivationKeyResult(outcome.result()));
	else
		return CheckActivationKeyOutcome(outcome.error());
}

void SgwClient::checkActivationKeyAsync(const CheckActivationKeyRequest& request, const CheckActivationKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkActivationKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckActivationKeyOutcomeCallable SgwClient::checkActivationKeyCallable(const CheckActivationKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckActivationKeyOutcome()>>(
			[this, request]()
			{
			return this->checkActivationKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckBlockVolumeNameOutcome SgwClient::checkBlockVolumeName(const CheckBlockVolumeNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckBlockVolumeNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckBlockVolumeNameOutcome(CheckBlockVolumeNameResult(outcome.result()));
	else
		return CheckBlockVolumeNameOutcome(outcome.error());
}

void SgwClient::checkBlockVolumeNameAsync(const CheckBlockVolumeNameRequest& request, const CheckBlockVolumeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkBlockVolumeName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckBlockVolumeNameOutcomeCallable SgwClient::checkBlockVolumeNameCallable(const CheckBlockVolumeNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckBlockVolumeNameOutcome()>>(
			[this, request]()
			{
			return this->checkBlockVolumeName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckGatewayEssdSupportOutcome SgwClient::checkGatewayEssdSupport(const CheckGatewayEssdSupportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckGatewayEssdSupportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckGatewayEssdSupportOutcome(CheckGatewayEssdSupportResult(outcome.result()));
	else
		return CheckGatewayEssdSupportOutcome(outcome.error());
}

void SgwClient::checkGatewayEssdSupportAsync(const CheckGatewayEssdSupportRequest& request, const CheckGatewayEssdSupportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkGatewayEssdSupport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckGatewayEssdSupportOutcomeCallable SgwClient::checkGatewayEssdSupportCallable(const CheckGatewayEssdSupportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckGatewayEssdSupportOutcome()>>(
			[this, request]()
			{
			return this->checkGatewayEssdSupport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckMnsServiceOutcome SgwClient::checkMnsService(const CheckMnsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMnsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMnsServiceOutcome(CheckMnsServiceResult(outcome.result()));
	else
		return CheckMnsServiceOutcome(outcome.error());
}

void SgwClient::checkMnsServiceAsync(const CheckMnsServiceRequest& request, const CheckMnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMnsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckMnsServiceOutcomeCallable SgwClient::checkMnsServiceCallable(const CheckMnsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMnsServiceOutcome()>>(
			[this, request]()
			{
			return this->checkMnsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckRoleOutcome SgwClient::checkRole(const CheckRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckRoleOutcome(CheckRoleResult(outcome.result()));
	else
		return CheckRoleOutcome(outcome.error());
}

void SgwClient::checkRoleAsync(const CheckRoleRequest& request, const CheckRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckRoleOutcomeCallable SgwClient::checkRoleCallable(const CheckRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckRoleOutcome()>>(
			[this, request]()
			{
			return this->checkRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckSlrRoleOutcome SgwClient::checkSlrRole(const CheckSlrRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSlrRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSlrRoleOutcome(CheckSlrRoleResult(outcome.result()));
	else
		return CheckSlrRoleOutcome(outcome.error());
}

void SgwClient::checkSlrRoleAsync(const CheckSlrRoleRequest& request, const CheckSlrRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSlrRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckSlrRoleOutcomeCallable SgwClient::checkSlrRoleCallable(const CheckSlrRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSlrRoleOutcome()>>(
			[this, request]()
			{
			return this->checkSlrRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CheckUpgradeVersionOutcome SgwClient::checkUpgradeVersion(const CheckUpgradeVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckUpgradeVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckUpgradeVersionOutcome(CheckUpgradeVersionResult(outcome.result()));
	else
		return CheckUpgradeVersionOutcome(outcome.error());
}

void SgwClient::checkUpgradeVersionAsync(const CheckUpgradeVersionRequest& request, const CheckUpgradeVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkUpgradeVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CheckUpgradeVersionOutcomeCallable SgwClient::checkUpgradeVersionCallable(const CheckUpgradeVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckUpgradeVersionOutcome()>>(
			[this, request]()
			{
			return this->checkUpgradeVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateCacheOutcome SgwClient::createCache(const CreateCacheRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCacheOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCacheOutcome(CreateCacheResult(outcome.result()));
	else
		return CreateCacheOutcome(outcome.error());
}

void SgwClient::createCacheAsync(const CreateCacheRequest& request, const CreateCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCache(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateCacheOutcomeCallable SgwClient::createCacheCallable(const CreateCacheRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCacheOutcome()>>(
			[this, request]()
			{
			return this->createCache(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateElasticGatewayPrivateZoneOutcome SgwClient::createElasticGatewayPrivateZone(const CreateElasticGatewayPrivateZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateElasticGatewayPrivateZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateElasticGatewayPrivateZoneOutcome(CreateElasticGatewayPrivateZoneResult(outcome.result()));
	else
		return CreateElasticGatewayPrivateZoneOutcome(outcome.error());
}

void SgwClient::createElasticGatewayPrivateZoneAsync(const CreateElasticGatewayPrivateZoneRequest& request, const CreateElasticGatewayPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createElasticGatewayPrivateZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateElasticGatewayPrivateZoneOutcomeCallable SgwClient::createElasticGatewayPrivateZoneCallable(const CreateElasticGatewayPrivateZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateElasticGatewayPrivateZoneOutcome()>>(
			[this, request]()
			{
			return this->createElasticGatewayPrivateZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateExpressSyncOutcome SgwClient::createExpressSync(const CreateExpressSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExpressSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExpressSyncOutcome(CreateExpressSyncResult(outcome.result()));
	else
		return CreateExpressSyncOutcome(outcome.error());
}

void SgwClient::createExpressSyncAsync(const CreateExpressSyncRequest& request, const CreateExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExpressSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateExpressSyncOutcomeCallable SgwClient::createExpressSyncCallable(const CreateExpressSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExpressSyncOutcome()>>(
			[this, request]()
			{
			return this->createExpressSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateGatewayOutcome SgwClient::createGateway(const CreateGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayOutcome(CreateGatewayResult(outcome.result()));
	else
		return CreateGatewayOutcome(outcome.error());
}

void SgwClient::createGatewayAsync(const CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateGatewayOutcomeCallable SgwClient::createGatewayCallable(const CreateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayOutcome()>>(
			[this, request]()
			{
			return this->createGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateGatewayBlockVolumeOutcome SgwClient::createGatewayBlockVolume(const CreateGatewayBlockVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayBlockVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayBlockVolumeOutcome(CreateGatewayBlockVolumeResult(outcome.result()));
	else
		return CreateGatewayBlockVolumeOutcome(outcome.error());
}

void SgwClient::createGatewayBlockVolumeAsync(const CreateGatewayBlockVolumeRequest& request, const CreateGatewayBlockVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewayBlockVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateGatewayBlockVolumeOutcomeCallable SgwClient::createGatewayBlockVolumeCallable(const CreateGatewayBlockVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayBlockVolumeOutcome()>>(
			[this, request]()
			{
			return this->createGatewayBlockVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateGatewayCacheDiskOutcome SgwClient::createGatewayCacheDisk(const CreateGatewayCacheDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayCacheDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayCacheDiskOutcome(CreateGatewayCacheDiskResult(outcome.result()));
	else
		return CreateGatewayCacheDiskOutcome(outcome.error());
}

void SgwClient::createGatewayCacheDiskAsync(const CreateGatewayCacheDiskRequest& request, const CreateGatewayCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewayCacheDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateGatewayCacheDiskOutcomeCallable SgwClient::createGatewayCacheDiskCallable(const CreateGatewayCacheDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayCacheDiskOutcome()>>(
			[this, request]()
			{
			return this->createGatewayCacheDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateGatewayFileShareOutcome SgwClient::createGatewayFileShare(const CreateGatewayFileShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayFileShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayFileShareOutcome(CreateGatewayFileShareResult(outcome.result()));
	else
		return CreateGatewayFileShareOutcome(outcome.error());
}

void SgwClient::createGatewayFileShareAsync(const CreateGatewayFileShareRequest& request, const CreateGatewayFileShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewayFileShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateGatewayFileShareOutcomeCallable SgwClient::createGatewayFileShareCallable(const CreateGatewayFileShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayFileShareOutcome()>>(
			[this, request]()
			{
			return this->createGatewayFileShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateGatewayLoggingOutcome SgwClient::createGatewayLogging(const CreateGatewayLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewayLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewayLoggingOutcome(CreateGatewayLoggingResult(outcome.result()));
	else
		return CreateGatewayLoggingOutcome(outcome.error());
}

void SgwClient::createGatewayLoggingAsync(const CreateGatewayLoggingRequest& request, const CreateGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewayLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateGatewayLoggingOutcomeCallable SgwClient::createGatewayLoggingCallable(const CreateGatewayLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewayLoggingOutcome()>>(
			[this, request]()
			{
			return this->createGatewayLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateGatewaySMBUserOutcome SgwClient::createGatewaySMBUser(const CreateGatewaySMBUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGatewaySMBUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGatewaySMBUserOutcome(CreateGatewaySMBUserResult(outcome.result()));
	else
		return CreateGatewaySMBUserOutcome(outcome.error());
}

void SgwClient::createGatewaySMBUserAsync(const CreateGatewaySMBUserRequest& request, const CreateGatewaySMBUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGatewaySMBUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateGatewaySMBUserOutcomeCallable SgwClient::createGatewaySMBUserCallable(const CreateGatewaySMBUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGatewaySMBUserOutcome()>>(
			[this, request]()
			{
			return this->createGatewaySMBUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::CreateStorageBundleOutcome SgwClient::createStorageBundle(const CreateStorageBundleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStorageBundleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStorageBundleOutcome(CreateStorageBundleResult(outcome.result()));
	else
		return CreateStorageBundleOutcome(outcome.error());
}

void SgwClient::createStorageBundleAsync(const CreateStorageBundleRequest& request, const CreateStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStorageBundle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::CreateStorageBundleOutcomeCallable SgwClient::createStorageBundleCallable(const CreateStorageBundleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStorageBundleOutcome()>>(
			[this, request]()
			{
			return this->createStorageBundle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteCSGClientsOutcome SgwClient::deleteCSGClients(const DeleteCSGClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCSGClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCSGClientsOutcome(DeleteCSGClientsResult(outcome.result()));
	else
		return DeleteCSGClientsOutcome(outcome.error());
}

void SgwClient::deleteCSGClientsAsync(const DeleteCSGClientsRequest& request, const DeleteCSGClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCSGClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteCSGClientsOutcomeCallable SgwClient::deleteCSGClientsCallable(const DeleteCSGClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCSGClientsOutcome()>>(
			[this, request]()
			{
			return this->deleteCSGClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteElasticGatewayPrivateZoneOutcome SgwClient::deleteElasticGatewayPrivateZone(const DeleteElasticGatewayPrivateZoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteElasticGatewayPrivateZoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteElasticGatewayPrivateZoneOutcome(DeleteElasticGatewayPrivateZoneResult(outcome.result()));
	else
		return DeleteElasticGatewayPrivateZoneOutcome(outcome.error());
}

void SgwClient::deleteElasticGatewayPrivateZoneAsync(const DeleteElasticGatewayPrivateZoneRequest& request, const DeleteElasticGatewayPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteElasticGatewayPrivateZone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteElasticGatewayPrivateZoneOutcomeCallable SgwClient::deleteElasticGatewayPrivateZoneCallable(const DeleteElasticGatewayPrivateZoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteElasticGatewayPrivateZoneOutcome()>>(
			[this, request]()
			{
			return this->deleteElasticGatewayPrivateZone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteExpressSyncOutcome SgwClient::deleteExpressSync(const DeleteExpressSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteExpressSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteExpressSyncOutcome(DeleteExpressSyncResult(outcome.result()));
	else
		return DeleteExpressSyncOutcome(outcome.error());
}

void SgwClient::deleteExpressSyncAsync(const DeleteExpressSyncRequest& request, const DeleteExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteExpressSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteExpressSyncOutcomeCallable SgwClient::deleteExpressSyncCallable(const DeleteExpressSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteExpressSyncOutcome()>>(
			[this, request]()
			{
			return this->deleteExpressSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteGatewayOutcome SgwClient::deleteGateway(const DeleteGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayOutcome(DeleteGatewayResult(outcome.result()));
	else
		return DeleteGatewayOutcome(outcome.error());
}

void SgwClient::deleteGatewayAsync(const DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteGatewayOutcomeCallable SgwClient::deleteGatewayCallable(const DeleteGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteGatewayBlockVolumesOutcome SgwClient::deleteGatewayBlockVolumes(const DeleteGatewayBlockVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayBlockVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayBlockVolumesOutcome(DeleteGatewayBlockVolumesResult(outcome.result()));
	else
		return DeleteGatewayBlockVolumesOutcome(outcome.error());
}

void SgwClient::deleteGatewayBlockVolumesAsync(const DeleteGatewayBlockVolumesRequest& request, const DeleteGatewayBlockVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayBlockVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteGatewayBlockVolumesOutcomeCallable SgwClient::deleteGatewayBlockVolumesCallable(const DeleteGatewayBlockVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayBlockVolumesOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayBlockVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteGatewayCacheDiskOutcome SgwClient::deleteGatewayCacheDisk(const DeleteGatewayCacheDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayCacheDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayCacheDiskOutcome(DeleteGatewayCacheDiskResult(outcome.result()));
	else
		return DeleteGatewayCacheDiskOutcome(outcome.error());
}

void SgwClient::deleteGatewayCacheDiskAsync(const DeleteGatewayCacheDiskRequest& request, const DeleteGatewayCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayCacheDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteGatewayCacheDiskOutcomeCallable SgwClient::deleteGatewayCacheDiskCallable(const DeleteGatewayCacheDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayCacheDiskOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayCacheDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteGatewayFileSharesOutcome SgwClient::deleteGatewayFileShares(const DeleteGatewayFileSharesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayFileSharesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayFileSharesOutcome(DeleteGatewayFileSharesResult(outcome.result()));
	else
		return DeleteGatewayFileSharesOutcome(outcome.error());
}

void SgwClient::deleteGatewayFileSharesAsync(const DeleteGatewayFileSharesRequest& request, const DeleteGatewayFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayFileShares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteGatewayFileSharesOutcomeCallable SgwClient::deleteGatewayFileSharesCallable(const DeleteGatewayFileSharesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayFileSharesOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayFileShares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteGatewayLoggingOutcome SgwClient::deleteGatewayLogging(const DeleteGatewayLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewayLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewayLoggingOutcome(DeleteGatewayLoggingResult(outcome.result()));
	else
		return DeleteGatewayLoggingOutcome(outcome.error());
}

void SgwClient::deleteGatewayLoggingAsync(const DeleteGatewayLoggingRequest& request, const DeleteGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewayLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteGatewayLoggingOutcomeCallable SgwClient::deleteGatewayLoggingCallable(const DeleteGatewayLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewayLoggingOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewayLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteGatewaySMBUserOutcome SgwClient::deleteGatewaySMBUser(const DeleteGatewaySMBUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGatewaySMBUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGatewaySMBUserOutcome(DeleteGatewaySMBUserResult(outcome.result()));
	else
		return DeleteGatewaySMBUserOutcome(outcome.error());
}

void SgwClient::deleteGatewaySMBUserAsync(const DeleteGatewaySMBUserRequest& request, const DeleteGatewaySMBUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGatewaySMBUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteGatewaySMBUserOutcomeCallable SgwClient::deleteGatewaySMBUserCallable(const DeleteGatewaySMBUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGatewaySMBUserOutcome()>>(
			[this, request]()
			{
			return this->deleteGatewaySMBUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeleteStorageBundleOutcome SgwClient::deleteStorageBundle(const DeleteStorageBundleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStorageBundleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStorageBundleOutcome(DeleteStorageBundleResult(outcome.result()));
	else
		return DeleteStorageBundleOutcome(outcome.error());
}

void SgwClient::deleteStorageBundleAsync(const DeleteStorageBundleRequest& request, const DeleteStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStorageBundle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeleteStorageBundleOutcomeCallable SgwClient::deleteStorageBundleCallable(const DeleteStorageBundleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStorageBundleOutcome()>>(
			[this, request]()
			{
			return this->deleteStorageBundle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeployCSGClientsOutcome SgwClient::deployCSGClients(const DeployCSGClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployCSGClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployCSGClientsOutcome(DeployCSGClientsResult(outcome.result()));
	else
		return DeployCSGClientsOutcome(outcome.error());
}

void SgwClient::deployCSGClientsAsync(const DeployCSGClientsRequest& request, const DeployCSGClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployCSGClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeployCSGClientsOutcomeCallable SgwClient::deployCSGClientsCallable(const DeployCSGClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployCSGClientsOutcome()>>(
			[this, request]()
			{
			return this->deployCSGClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeployCacheDiskOutcome SgwClient::deployCacheDisk(const DeployCacheDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployCacheDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployCacheDiskOutcome(DeployCacheDiskResult(outcome.result()));
	else
		return DeployCacheDiskOutcome(outcome.error());
}

void SgwClient::deployCacheDiskAsync(const DeployCacheDiskRequest& request, const DeployCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployCacheDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeployCacheDiskOutcomeCallable SgwClient::deployCacheDiskCallable(const DeployCacheDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployCacheDiskOutcome()>>(
			[this, request]()
			{
			return this->deployCacheDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DeployGatewayOutcome SgwClient::deployGateway(const DeployGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployGatewayOutcome(DeployGatewayResult(outcome.result()));
	else
		return DeployGatewayOutcome(outcome.error());
}

void SgwClient::deployGatewayAsync(const DeployGatewayRequest& request, const DeployGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DeployGatewayOutcomeCallable SgwClient::deployGatewayCallable(const DeployGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployGatewayOutcome()>>(
			[this, request]()
			{
			return this->deployGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeAccountConfigOutcome SgwClient::describeAccountConfig(const DescribeAccountConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountConfigOutcome(DescribeAccountConfigResult(outcome.result()));
	else
		return DescribeAccountConfigOutcome(outcome.error());
}

void SgwClient::describeAccountConfigAsync(const DescribeAccountConfigRequest& request, const DescribeAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeAccountConfigOutcomeCallable SgwClient::describeAccountConfigCallable(const DescribeAccountConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAccountConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeBlockVolumeSnapshotsOutcome SgwClient::describeBlockVolumeSnapshots(const DescribeBlockVolumeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBlockVolumeSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBlockVolumeSnapshotsOutcome(DescribeBlockVolumeSnapshotsResult(outcome.result()));
	else
		return DescribeBlockVolumeSnapshotsOutcome(outcome.error());
}

void SgwClient::describeBlockVolumeSnapshotsAsync(const DescribeBlockVolumeSnapshotsRequest& request, const DescribeBlockVolumeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBlockVolumeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeBlockVolumeSnapshotsOutcomeCallable SgwClient::describeBlockVolumeSnapshotsCallable(const DescribeBlockVolumeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBlockVolumeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeBlockVolumeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeCSGClientTasksOutcome SgwClient::describeCSGClientTasks(const DescribeCSGClientTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCSGClientTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCSGClientTasksOutcome(DescribeCSGClientTasksResult(outcome.result()));
	else
		return DescribeCSGClientTasksOutcome(outcome.error());
}

void SgwClient::describeCSGClientTasksAsync(const DescribeCSGClientTasksRequest& request, const DescribeCSGClientTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCSGClientTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeCSGClientTasksOutcomeCallable SgwClient::describeCSGClientTasksCallable(const DescribeCSGClientTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCSGClientTasksOutcome()>>(
			[this, request]()
			{
			return this->describeCSGClientTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeCSGClientsOutcome SgwClient::describeCSGClients(const DescribeCSGClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCSGClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCSGClientsOutcome(DescribeCSGClientsResult(outcome.result()));
	else
		return DescribeCSGClientsOutcome(outcome.error());
}

void SgwClient::describeCSGClientsAsync(const DescribeCSGClientsRequest& request, const DescribeCSGClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCSGClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeCSGClientsOutcomeCallable SgwClient::describeCSGClientsCallable(const DescribeCSGClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCSGClientsOutcome()>>(
			[this, request]()
			{
			return this->describeCSGClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeDashboardOutcome SgwClient::describeDashboard(const DescribeDashboardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDashboardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDashboardOutcome(DescribeDashboardResult(outcome.result()));
	else
		return DescribeDashboardOutcome(outcome.error());
}

void SgwClient::describeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDashboard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeDashboardOutcomeCallable SgwClient::describeDashboardCallable(const DescribeDashboardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDashboardOutcome()>>(
			[this, request]()
			{
			return this->describeDashboard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeExpireCachesOutcome SgwClient::describeExpireCaches(const DescribeExpireCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExpireCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExpireCachesOutcome(DescribeExpireCachesResult(outcome.result()));
	else
		return DescribeExpireCachesOutcome(outcome.error());
}

void SgwClient::describeExpireCachesAsync(const DescribeExpireCachesRequest& request, const DescribeExpireCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExpireCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeExpireCachesOutcomeCallable SgwClient::describeExpireCachesCallable(const DescribeExpireCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExpireCachesOutcome()>>(
			[this, request]()
			{
			return this->describeExpireCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeExpressSyncSharesOutcome SgwClient::describeExpressSyncShares(const DescribeExpressSyncSharesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExpressSyncSharesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExpressSyncSharesOutcome(DescribeExpressSyncSharesResult(outcome.result()));
	else
		return DescribeExpressSyncSharesOutcome(outcome.error());
}

void SgwClient::describeExpressSyncSharesAsync(const DescribeExpressSyncSharesRequest& request, const DescribeExpressSyncSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExpressSyncShares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeExpressSyncSharesOutcomeCallable SgwClient::describeExpressSyncSharesCallable(const DescribeExpressSyncSharesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExpressSyncSharesOutcome()>>(
			[this, request]()
			{
			return this->describeExpressSyncShares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeExpressSyncsOutcome SgwClient::describeExpressSyncs(const DescribeExpressSyncsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExpressSyncsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExpressSyncsOutcome(DescribeExpressSyncsResult(outcome.result()));
	else
		return DescribeExpressSyncsOutcome(outcome.error());
}

void SgwClient::describeExpressSyncsAsync(const DescribeExpressSyncsRequest& request, const DescribeExpressSyncsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExpressSyncs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeExpressSyncsOutcomeCallable SgwClient::describeExpressSyncsCallable(const DescribeExpressSyncsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExpressSyncsOutcome()>>(
			[this, request]()
			{
			return this->describeExpressSyncs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayOutcome SgwClient::describeGateway(const DescribeGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayOutcome(DescribeGatewayResult(outcome.result()));
	else
		return DescribeGatewayOutcome(outcome.error());
}

void SgwClient::describeGatewayAsync(const DescribeGatewayRequest& request, const DescribeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayOutcomeCallable SgwClient::describeGatewayCallable(const DescribeGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayADInfoOutcome SgwClient::describeGatewayADInfo(const DescribeGatewayADInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayADInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayADInfoOutcome(DescribeGatewayADInfoResult(outcome.result()));
	else
		return DescribeGatewayADInfoOutcome(outcome.error());
}

void SgwClient::describeGatewayADInfoAsync(const DescribeGatewayADInfoRequest& request, const DescribeGatewayADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayADInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayADInfoOutcomeCallable SgwClient::describeGatewayADInfoCallable(const DescribeGatewayADInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayADInfoOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayADInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayActionsOutcome SgwClient::describeGatewayActions(const DescribeGatewayActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayActionsOutcome(DescribeGatewayActionsResult(outcome.result()));
	else
		return DescribeGatewayActionsOutcome(outcome.error());
}

void SgwClient::describeGatewayActionsAsync(const DescribeGatewayActionsRequest& request, const DescribeGatewayActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayActionsOutcomeCallable SgwClient::describeGatewayActionsCallable(const DescribeGatewayActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayActionsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayAuthInfoOutcome SgwClient::describeGatewayAuthInfo(const DescribeGatewayAuthInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayAuthInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayAuthInfoOutcome(DescribeGatewayAuthInfoResult(outcome.result()));
	else
		return DescribeGatewayAuthInfoOutcome(outcome.error());
}

void SgwClient::describeGatewayAuthInfoAsync(const DescribeGatewayAuthInfoRequest& request, const DescribeGatewayAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayAuthInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayAuthInfoOutcomeCallable SgwClient::describeGatewayAuthInfoCallable(const DescribeGatewayAuthInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayAuthInfoOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayAuthInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayBlockVolumesOutcome SgwClient::describeGatewayBlockVolumes(const DescribeGatewayBlockVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayBlockVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayBlockVolumesOutcome(DescribeGatewayBlockVolumesResult(outcome.result()));
	else
		return DescribeGatewayBlockVolumesOutcome(outcome.error());
}

void SgwClient::describeGatewayBlockVolumesAsync(const DescribeGatewayBlockVolumesRequest& request, const DescribeGatewayBlockVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayBlockVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayBlockVolumesOutcomeCallable SgwClient::describeGatewayBlockVolumesCallable(const DescribeGatewayBlockVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayBlockVolumesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayBlockVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayBucketCachesOutcome SgwClient::describeGatewayBucketCaches(const DescribeGatewayBucketCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayBucketCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayBucketCachesOutcome(DescribeGatewayBucketCachesResult(outcome.result()));
	else
		return DescribeGatewayBucketCachesOutcome(outcome.error());
}

void SgwClient::describeGatewayBucketCachesAsync(const DescribeGatewayBucketCachesRequest& request, const DescribeGatewayBucketCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayBucketCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayBucketCachesOutcomeCallable SgwClient::describeGatewayBucketCachesCallable(const DescribeGatewayBucketCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayBucketCachesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayBucketCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayCachesOutcome SgwClient::describeGatewayCaches(const DescribeGatewayCachesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayCachesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayCachesOutcome(DescribeGatewayCachesResult(outcome.result()));
	else
		return DescribeGatewayCachesOutcome(outcome.error());
}

void SgwClient::describeGatewayCachesAsync(const DescribeGatewayCachesRequest& request, const DescribeGatewayCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayCaches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayCachesOutcomeCallable SgwClient::describeGatewayCachesCallable(const DescribeGatewayCachesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayCachesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayCaches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayCapacityLimitOutcome SgwClient::describeGatewayCapacityLimit(const DescribeGatewayCapacityLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayCapacityLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayCapacityLimitOutcome(DescribeGatewayCapacityLimitResult(outcome.result()));
	else
		return DescribeGatewayCapacityLimitOutcome(outcome.error());
}

void SgwClient::describeGatewayCapacityLimitAsync(const DescribeGatewayCapacityLimitRequest& request, const DescribeGatewayCapacityLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayCapacityLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayCapacityLimitOutcomeCallable SgwClient::describeGatewayCapacityLimitCallable(const DescribeGatewayCapacityLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayCapacityLimitOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayCapacityLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayCategoriesOutcome SgwClient::describeGatewayCategories(const DescribeGatewayCategoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayCategoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayCategoriesOutcome(DescribeGatewayCategoriesResult(outcome.result()));
	else
		return DescribeGatewayCategoriesOutcome(outcome.error());
}

void SgwClient::describeGatewayCategoriesAsync(const DescribeGatewayCategoriesRequest& request, const DescribeGatewayCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayCategories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayCategoriesOutcomeCallable SgwClient::describeGatewayCategoriesCallable(const DescribeGatewayCategoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayCategoriesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayCategories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayClassesOutcome SgwClient::describeGatewayClasses(const DescribeGatewayClassesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayClassesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayClassesOutcome(DescribeGatewayClassesResult(outcome.result()));
	else
		return DescribeGatewayClassesOutcome(outcome.error());
}

void SgwClient::describeGatewayClassesAsync(const DescribeGatewayClassesRequest& request, const DescribeGatewayClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayClasses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayClassesOutcomeCallable SgwClient::describeGatewayClassesCallable(const DescribeGatewayClassesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayClassesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayClasses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayCredentialOutcome SgwClient::describeGatewayCredential(const DescribeGatewayCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayCredentialOutcome(DescribeGatewayCredentialResult(outcome.result()));
	else
		return DescribeGatewayCredentialOutcome(outcome.error());
}

void SgwClient::describeGatewayCredentialAsync(const DescribeGatewayCredentialRequest& request, const DescribeGatewayCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayCredentialOutcomeCallable SgwClient::describeGatewayCredentialCallable(const DescribeGatewayCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayCredentialOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayDNSOutcome SgwClient::describeGatewayDNS(const DescribeGatewayDNSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayDNSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayDNSOutcome(DescribeGatewayDNSResult(outcome.result()));
	else
		return DescribeGatewayDNSOutcome(outcome.error());
}

void SgwClient::describeGatewayDNSAsync(const DescribeGatewayDNSRequest& request, const DescribeGatewayDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayDNS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayDNSOutcomeCallable SgwClient::describeGatewayDNSCallable(const DescribeGatewayDNSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayDNSOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayDNS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayFileSharesOutcome SgwClient::describeGatewayFileShares(const DescribeGatewayFileSharesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayFileSharesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayFileSharesOutcome(DescribeGatewayFileSharesResult(outcome.result()));
	else
		return DescribeGatewayFileSharesOutcome(outcome.error());
}

void SgwClient::describeGatewayFileSharesAsync(const DescribeGatewayFileSharesRequest& request, const DescribeGatewayFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayFileShares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayFileSharesOutcomeCallable SgwClient::describeGatewayFileSharesCallable(const DescribeGatewayFileSharesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayFileSharesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayFileShares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayFileStatusOutcome SgwClient::describeGatewayFileStatus(const DescribeGatewayFileStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayFileStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayFileStatusOutcome(DescribeGatewayFileStatusResult(outcome.result()));
	else
		return DescribeGatewayFileStatusOutcome(outcome.error());
}

void SgwClient::describeGatewayFileStatusAsync(const DescribeGatewayFileStatusRequest& request, const DescribeGatewayFileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayFileStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayFileStatusOutcomeCallable SgwClient::describeGatewayFileStatusCallable(const DescribeGatewayFileStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayFileStatusOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayFileStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayImagesOutcome SgwClient::describeGatewayImages(const DescribeGatewayImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayImagesOutcome(DescribeGatewayImagesResult(outcome.result()));
	else
		return DescribeGatewayImagesOutcome(outcome.error());
}

void SgwClient::describeGatewayImagesAsync(const DescribeGatewayImagesRequest& request, const DescribeGatewayImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayImagesOutcomeCallable SgwClient::describeGatewayImagesCallable(const DescribeGatewayImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayImagesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayInfoOutcome SgwClient::describeGatewayInfo(const DescribeGatewayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayInfoOutcome(DescribeGatewayInfoResult(outcome.result()));
	else
		return DescribeGatewayInfoOutcome(outcome.error());
}

void SgwClient::describeGatewayInfoAsync(const DescribeGatewayInfoRequest& request, const DescribeGatewayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayInfoOutcomeCallable SgwClient::describeGatewayInfoCallable(const DescribeGatewayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayInfoOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayLDAPInfoOutcome SgwClient::describeGatewayLDAPInfo(const DescribeGatewayLDAPInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayLDAPInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayLDAPInfoOutcome(DescribeGatewayLDAPInfoResult(outcome.result()));
	else
		return DescribeGatewayLDAPInfoOutcome(outcome.error());
}

void SgwClient::describeGatewayLDAPInfoAsync(const DescribeGatewayLDAPInfoRequest& request, const DescribeGatewayLDAPInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayLDAPInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayLDAPInfoOutcomeCallable SgwClient::describeGatewayLDAPInfoCallable(const DescribeGatewayLDAPInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayLDAPInfoOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayLDAPInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayLocationsOutcome SgwClient::describeGatewayLocations(const DescribeGatewayLocationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayLocationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayLocationsOutcome(DescribeGatewayLocationsResult(outcome.result()));
	else
		return DescribeGatewayLocationsOutcome(outcome.error());
}

void SgwClient::describeGatewayLocationsAsync(const DescribeGatewayLocationsRequest& request, const DescribeGatewayLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayLocations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayLocationsOutcomeCallable SgwClient::describeGatewayLocationsCallable(const DescribeGatewayLocationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayLocationsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayLocations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayLoggingOutcome SgwClient::describeGatewayLogging(const DescribeGatewayLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayLoggingOutcome(DescribeGatewayLoggingResult(outcome.result()));
	else
		return DescribeGatewayLoggingOutcome(outcome.error());
}

void SgwClient::describeGatewayLoggingAsync(const DescribeGatewayLoggingRequest& request, const DescribeGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayLoggingOutcomeCallable SgwClient::describeGatewayLoggingCallable(const DescribeGatewayLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayLoggingOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayLogsOutcome SgwClient::describeGatewayLogs(const DescribeGatewayLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayLogsOutcome(DescribeGatewayLogsResult(outcome.result()));
	else
		return DescribeGatewayLogsOutcome(outcome.error());
}

void SgwClient::describeGatewayLogsAsync(const DescribeGatewayLogsRequest& request, const DescribeGatewayLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayLogsOutcomeCallable SgwClient::describeGatewayLogsCallable(const DescribeGatewayLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayLogsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayModificationClassesOutcome SgwClient::describeGatewayModificationClasses(const DescribeGatewayModificationClassesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayModificationClassesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayModificationClassesOutcome(DescribeGatewayModificationClassesResult(outcome.result()));
	else
		return DescribeGatewayModificationClassesOutcome(outcome.error());
}

void SgwClient::describeGatewayModificationClassesAsync(const DescribeGatewayModificationClassesRequest& request, const DescribeGatewayModificationClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayModificationClasses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayModificationClassesOutcomeCallable SgwClient::describeGatewayModificationClassesCallable(const DescribeGatewayModificationClassesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayModificationClassesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayModificationClasses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayNFSClientsOutcome SgwClient::describeGatewayNFSClients(const DescribeGatewayNFSClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayNFSClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayNFSClientsOutcome(DescribeGatewayNFSClientsResult(outcome.result()));
	else
		return DescribeGatewayNFSClientsOutcome(outcome.error());
}

void SgwClient::describeGatewayNFSClientsAsync(const DescribeGatewayNFSClientsRequest& request, const DescribeGatewayNFSClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayNFSClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayNFSClientsOutcomeCallable SgwClient::describeGatewayNFSClientsCallable(const DescribeGatewayNFSClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayNFSClientsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayNFSClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewaySMBUsersOutcome SgwClient::describeGatewaySMBUsers(const DescribeGatewaySMBUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewaySMBUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewaySMBUsersOutcome(DescribeGatewaySMBUsersResult(outcome.result()));
	else
		return DescribeGatewaySMBUsersOutcome(outcome.error());
}

void SgwClient::describeGatewaySMBUsersAsync(const DescribeGatewaySMBUsersRequest& request, const DescribeGatewaySMBUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewaySMBUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewaySMBUsersOutcomeCallable SgwClient::describeGatewaySMBUsersCallable(const DescribeGatewaySMBUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewaySMBUsersOutcome()>>(
			[this, request]()
			{
			return this->describeGatewaySMBUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayStatisticsOutcome SgwClient::describeGatewayStatistics(const DescribeGatewayStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayStatisticsOutcome(DescribeGatewayStatisticsResult(outcome.result()));
	else
		return DescribeGatewayStatisticsOutcome(outcome.error());
}

void SgwClient::describeGatewayStatisticsAsync(const DescribeGatewayStatisticsRequest& request, const DescribeGatewayStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayStatisticsOutcomeCallable SgwClient::describeGatewayStatisticsCallable(const DescribeGatewayStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayStockOutcome SgwClient::describeGatewayStock(const DescribeGatewayStockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayStockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayStockOutcome(DescribeGatewayStockResult(outcome.result()));
	else
		return DescribeGatewayStockOutcome(outcome.error());
}

void SgwClient::describeGatewayStockAsync(const DescribeGatewayStockRequest& request, const DescribeGatewayStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayStock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayStockOutcomeCallable SgwClient::describeGatewayStockCallable(const DescribeGatewayStockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayStockOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayStock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewayTypesOutcome SgwClient::describeGatewayTypes(const DescribeGatewayTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewayTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewayTypesOutcome(DescribeGatewayTypesResult(outcome.result()));
	else
		return DescribeGatewayTypesOutcome(outcome.error());
}

void SgwClient::describeGatewayTypesAsync(const DescribeGatewayTypesRequest& request, const DescribeGatewayTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewayTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewayTypesOutcomeCallable SgwClient::describeGatewayTypesCallable(const DescribeGatewayTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewayTypesOutcome()>>(
			[this, request]()
			{
			return this->describeGatewayTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewaysOutcome SgwClient::describeGateways(const DescribeGatewaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewaysOutcome(DescribeGatewaysResult(outcome.result()));
	else
		return DescribeGatewaysOutcome(outcome.error());
}

void SgwClient::describeGatewaysAsync(const DescribeGatewaysRequest& request, const DescribeGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewaysOutcomeCallable SgwClient::describeGatewaysCallable(const DescribeGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewaysForCmsOutcome SgwClient::describeGatewaysForCms(const DescribeGatewaysForCmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewaysForCmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewaysForCmsOutcome(DescribeGatewaysForCmsResult(outcome.result()));
	else
		return DescribeGatewaysForCmsOutcome(outcome.error());
}

void SgwClient::describeGatewaysForCmsAsync(const DescribeGatewaysForCmsRequest& request, const DescribeGatewaysForCmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewaysForCms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewaysForCmsOutcomeCallable SgwClient::describeGatewaysForCmsCallable(const DescribeGatewaysForCmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewaysForCmsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewaysForCms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeGatewaysTagsOutcome SgwClient::describeGatewaysTags(const DescribeGatewaysTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGatewaysTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGatewaysTagsOutcome(DescribeGatewaysTagsResult(outcome.result()));
	else
		return DescribeGatewaysTagsOutcome(outcome.error());
}

void SgwClient::describeGatewaysTagsAsync(const DescribeGatewaysTagsRequest& request, const DescribeGatewaysTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGatewaysTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeGatewaysTagsOutcomeCallable SgwClient::describeGatewaysTagsCallable(const DescribeGatewaysTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGatewaysTagsOutcome()>>(
			[this, request]()
			{
			return this->describeGatewaysTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeKmsKeyOutcome SgwClient::describeKmsKey(const DescribeKmsKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKmsKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKmsKeyOutcome(DescribeKmsKeyResult(outcome.result()));
	else
		return DescribeKmsKeyOutcome(outcome.error());
}

void SgwClient::describeKmsKeyAsync(const DescribeKmsKeyRequest& request, const DescribeKmsKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKmsKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeKmsKeyOutcomeCallable SgwClient::describeKmsKeyCallable(const DescribeKmsKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKmsKeyOutcome()>>(
			[this, request]()
			{
			return this->describeKmsKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeMqttConfigOutcome SgwClient::describeMqttConfig(const DescribeMqttConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMqttConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMqttConfigOutcome(DescribeMqttConfigResult(outcome.result()));
	else
		return DescribeMqttConfigOutcome(outcome.error());
}

void SgwClient::describeMqttConfigAsync(const DescribeMqttConfigRequest& request, const DescribeMqttConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMqttConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeMqttConfigOutcomeCallable SgwClient::describeMqttConfigCallable(const DescribeMqttConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMqttConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMqttConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeOssBucketInfoOutcome SgwClient::describeOssBucketInfo(const DescribeOssBucketInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssBucketInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssBucketInfoOutcome(DescribeOssBucketInfoResult(outcome.result()));
	else
		return DescribeOssBucketInfoOutcome(outcome.error());
}

void SgwClient::describeOssBucketInfoAsync(const DescribeOssBucketInfoRequest& request, const DescribeOssBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssBucketInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeOssBucketInfoOutcomeCallable SgwClient::describeOssBucketInfoCallable(const DescribeOssBucketInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssBucketInfoOutcome()>>(
			[this, request]()
			{
			return this->describeOssBucketInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeOssBucketsOutcome SgwClient::describeOssBuckets(const DescribeOssBucketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOssBucketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOssBucketsOutcome(DescribeOssBucketsResult(outcome.result()));
	else
		return DescribeOssBucketsOutcome(outcome.error());
}

void SgwClient::describeOssBucketsAsync(const DescribeOssBucketsRequest& request, const DescribeOssBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOssBuckets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeOssBucketsOutcomeCallable SgwClient::describeOssBucketsCallable(const DescribeOssBucketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOssBucketsOutcome()>>(
			[this, request]()
			{
			return this->describeOssBuckets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribePayAsYouGoPriceOutcome SgwClient::describePayAsYouGoPrice(const DescribePayAsYouGoPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePayAsYouGoPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePayAsYouGoPriceOutcome(DescribePayAsYouGoPriceResult(outcome.result()));
	else
		return DescribePayAsYouGoPriceOutcome(outcome.error());
}

void SgwClient::describePayAsYouGoPriceAsync(const DescribePayAsYouGoPriceRequest& request, const DescribePayAsYouGoPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePayAsYouGoPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribePayAsYouGoPriceOutcomeCallable SgwClient::describePayAsYouGoPriceCallable(const DescribePayAsYouGoPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePayAsYouGoPriceOutcome()>>(
			[this, request]()
			{
			return this->describePayAsYouGoPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeRegionsOutcome SgwClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void SgwClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeRegionsOutcomeCallable SgwClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeSharesBucketInfoForExpressSyncOutcome SgwClient::describeSharesBucketInfoForExpressSync(const DescribeSharesBucketInfoForExpressSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSharesBucketInfoForExpressSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSharesBucketInfoForExpressSyncOutcome(DescribeSharesBucketInfoForExpressSyncResult(outcome.result()));
	else
		return DescribeSharesBucketInfoForExpressSyncOutcome(outcome.error());
}

void SgwClient::describeSharesBucketInfoForExpressSyncAsync(const DescribeSharesBucketInfoForExpressSyncRequest& request, const DescribeSharesBucketInfoForExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSharesBucketInfoForExpressSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeSharesBucketInfoForExpressSyncOutcomeCallable SgwClient::describeSharesBucketInfoForExpressSyncCallable(const DescribeSharesBucketInfoForExpressSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSharesBucketInfoForExpressSyncOutcome()>>(
			[this, request]()
			{
			return this->describeSharesBucketInfoForExpressSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeStorageBundleOutcome SgwClient::describeStorageBundle(const DescribeStorageBundleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageBundleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageBundleOutcome(DescribeStorageBundleResult(outcome.result()));
	else
		return DescribeStorageBundleOutcome(outcome.error());
}

void SgwClient::describeStorageBundleAsync(const DescribeStorageBundleRequest& request, const DescribeStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageBundle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeStorageBundleOutcomeCallable SgwClient::describeStorageBundleCallable(const DescribeStorageBundleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageBundleOutcome()>>(
			[this, request]()
			{
			return this->describeStorageBundle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeStorageBundlesOutcome SgwClient::describeStorageBundles(const DescribeStorageBundlesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStorageBundlesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStorageBundlesOutcome(DescribeStorageBundlesResult(outcome.result()));
	else
		return DescribeStorageBundlesOutcome(outcome.error());
}

void SgwClient::describeStorageBundlesAsync(const DescribeStorageBundlesRequest& request, const DescribeStorageBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStorageBundles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeStorageBundlesOutcomeCallable SgwClient::describeStorageBundlesCallable(const DescribeStorageBundlesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStorageBundlesOutcome()>>(
			[this, request]()
			{
			return this->describeStorageBundles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeSubscriptionPriceOutcome SgwClient::describeSubscriptionPrice(const DescribeSubscriptionPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSubscriptionPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSubscriptionPriceOutcome(DescribeSubscriptionPriceResult(outcome.result()));
	else
		return DescribeSubscriptionPriceOutcome(outcome.error());
}

void SgwClient::describeSubscriptionPriceAsync(const DescribeSubscriptionPriceRequest& request, const DescribeSubscriptionPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSubscriptionPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeSubscriptionPriceOutcomeCallable SgwClient::describeSubscriptionPriceCallable(const DescribeSubscriptionPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSubscriptionPriceOutcome()>>(
			[this, request]()
			{
			return this->describeSubscriptionPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeTasksOutcome SgwClient::describeTasks(const DescribeTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTasksOutcome(DescribeTasksResult(outcome.result()));
	else
		return DescribeTasksOutcome(outcome.error());
}

void SgwClient::describeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeTasksOutcomeCallable SgwClient::describeTasksCallable(const DescribeTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
			[this, request]()
			{
			return this->describeTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeUserBusinessStatusOutcome SgwClient::describeUserBusinessStatus(const DescribeUserBusinessStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBusinessStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBusinessStatusOutcome(DescribeUserBusinessStatusResult(outcome.result()));
	else
		return DescribeUserBusinessStatusOutcome(outcome.error());
}

void SgwClient::describeUserBusinessStatusAsync(const DescribeUserBusinessStatusRequest& request, const DescribeUserBusinessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBusinessStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeUserBusinessStatusOutcomeCallable SgwClient::describeUserBusinessStatusCallable(const DescribeUserBusinessStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBusinessStatusOutcome()>>(
			[this, request]()
			{
			return this->describeUserBusinessStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeVSwitchesOutcome SgwClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchesOutcome(DescribeVSwitchesResult(outcome.result()));
	else
		return DescribeVSwitchesOutcome(outcome.error());
}

void SgwClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeVSwitchesOutcomeCallable SgwClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeVpcsOutcome SgwClient::describeVpcs(const DescribeVpcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcsOutcome(DescribeVpcsResult(outcome.result()));
	else
		return DescribeVpcsOutcome(outcome.error());
}

void SgwClient::describeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeVpcsOutcomeCallable SgwClient::describeVpcsCallable(const DescribeVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DescribeZonesOutcome SgwClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void SgwClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DescribeZonesOutcomeCallable SgwClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DisableGatewayLoggingOutcome SgwClient::disableGatewayLogging(const DisableGatewayLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableGatewayLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableGatewayLoggingOutcome(DisableGatewayLoggingResult(outcome.result()));
	else
		return DisableGatewayLoggingOutcome(outcome.error());
}

void SgwClient::disableGatewayLoggingAsync(const DisableGatewayLoggingRequest& request, const DisableGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableGatewayLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DisableGatewayLoggingOutcomeCallable SgwClient::disableGatewayLoggingCallable(const DisableGatewayLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableGatewayLoggingOutcome()>>(
			[this, request]()
			{
			return this->disableGatewayLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::DisableGatewayNFSVersionOutcome SgwClient::disableGatewayNFSVersion(const DisableGatewayNFSVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableGatewayNFSVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableGatewayNFSVersionOutcome(DisableGatewayNFSVersionResult(outcome.result()));
	else
		return DisableGatewayNFSVersionOutcome(outcome.error());
}

void SgwClient::disableGatewayNFSVersionAsync(const DisableGatewayNFSVersionRequest& request, const DisableGatewayNFSVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableGatewayNFSVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::DisableGatewayNFSVersionOutcomeCallable SgwClient::disableGatewayNFSVersionCallable(const DisableGatewayNFSVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableGatewayNFSVersionOutcome()>>(
			[this, request]()
			{
			return this->disableGatewayNFSVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::EnableGatewayIpv6Outcome SgwClient::enableGatewayIpv6(const EnableGatewayIpv6Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableGatewayIpv6Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableGatewayIpv6Outcome(EnableGatewayIpv6Result(outcome.result()));
	else
		return EnableGatewayIpv6Outcome(outcome.error());
}

void SgwClient::enableGatewayIpv6Async(const EnableGatewayIpv6Request& request, const EnableGatewayIpv6AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableGatewayIpv6(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::EnableGatewayIpv6OutcomeCallable SgwClient::enableGatewayIpv6Callable(const EnableGatewayIpv6Request &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableGatewayIpv6Outcome()>>(
			[this, request]()
			{
			return this->enableGatewayIpv6(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::EnableGatewayLoggingOutcome SgwClient::enableGatewayLogging(const EnableGatewayLoggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableGatewayLoggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableGatewayLoggingOutcome(EnableGatewayLoggingResult(outcome.result()));
	else
		return EnableGatewayLoggingOutcome(outcome.error());
}

void SgwClient::enableGatewayLoggingAsync(const EnableGatewayLoggingRequest& request, const EnableGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableGatewayLogging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::EnableGatewayLoggingOutcomeCallable SgwClient::enableGatewayLoggingCallable(const EnableGatewayLoggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableGatewayLoggingOutcome()>>(
			[this, request]()
			{
			return this->enableGatewayLogging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ExpandCacheDiskOutcome SgwClient::expandCacheDisk(const ExpandCacheDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExpandCacheDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExpandCacheDiskOutcome(ExpandCacheDiskResult(outcome.result()));
	else
		return ExpandCacheDiskOutcome(outcome.error());
}

void SgwClient::expandCacheDiskAsync(const ExpandCacheDiskRequest& request, const ExpandCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, expandCacheDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ExpandCacheDiskOutcomeCallable SgwClient::expandCacheDiskCallable(const ExpandCacheDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExpandCacheDiskOutcome()>>(
			[this, request]()
			{
			return this->expandCacheDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ExpandGatewayNetworkBandwidthOutcome SgwClient::expandGatewayNetworkBandwidth(const ExpandGatewayNetworkBandwidthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExpandGatewayNetworkBandwidthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExpandGatewayNetworkBandwidthOutcome(ExpandGatewayNetworkBandwidthResult(outcome.result()));
	else
		return ExpandGatewayNetworkBandwidthOutcome(outcome.error());
}

void SgwClient::expandGatewayNetworkBandwidthAsync(const ExpandGatewayNetworkBandwidthRequest& request, const ExpandGatewayNetworkBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, expandGatewayNetworkBandwidth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ExpandGatewayNetworkBandwidthOutcomeCallable SgwClient::expandGatewayNetworkBandwidthCallable(const ExpandGatewayNetworkBandwidthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExpandGatewayNetworkBandwidthOutcome()>>(
			[this, request]()
			{
			return this->expandGatewayNetworkBandwidth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::GenerateGatewayTokenOutcome SgwClient::generateGatewayToken(const GenerateGatewayTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateGatewayTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateGatewayTokenOutcome(GenerateGatewayTokenResult(outcome.result()));
	else
		return GenerateGatewayTokenOutcome(outcome.error());
}

void SgwClient::generateGatewayTokenAsync(const GenerateGatewayTokenRequest& request, const GenerateGatewayTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateGatewayToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::GenerateGatewayTokenOutcomeCallable SgwClient::generateGatewayTokenCallable(const GenerateGatewayTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateGatewayTokenOutcome()>>(
			[this, request]()
			{
			return this->generateGatewayToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::GenerateMqttTokenOutcome SgwClient::generateMqttToken(const GenerateMqttTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateMqttTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateMqttTokenOutcome(GenerateMqttTokenResult(outcome.result()));
	else
		return GenerateMqttTokenOutcome(outcome.error());
}

void SgwClient::generateMqttTokenAsync(const GenerateMqttTokenRequest& request, const GenerateMqttTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateMqttToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::GenerateMqttTokenOutcomeCallable SgwClient::generateMqttTokenCallable(const GenerateMqttTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateMqttTokenOutcome()>>(
			[this, request]()
			{
			return this->generateMqttToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::GenerateStsTokenOutcome SgwClient::generateStsToken(const GenerateStsTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateStsTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateStsTokenOutcome(GenerateStsTokenResult(outcome.result()));
	else
		return GenerateStsTokenOutcome(outcome.error());
}

void SgwClient::generateStsTokenAsync(const GenerateStsTokenRequest& request, const GenerateStsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateStsToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::GenerateStsTokenOutcomeCallable SgwClient::generateStsTokenCallable(const GenerateStsTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateStsTokenOutcome()>>(
			[this, request]()
			{
			return this->generateStsToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ListTagResourcesOutcome SgwClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void SgwClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ListTagResourcesOutcomeCallable SgwClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ModifyGatewayOutcome SgwClient::modifyGateway(const ModifyGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGatewayOutcome(ModifyGatewayResult(outcome.result()));
	else
		return ModifyGatewayOutcome(outcome.error());
}

void SgwClient::modifyGatewayAsync(const ModifyGatewayRequest& request, const ModifyGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ModifyGatewayOutcomeCallable SgwClient::modifyGatewayCallable(const ModifyGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayOutcome()>>(
			[this, request]()
			{
			return this->modifyGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ModifyGatewayBlockVolumeOutcome SgwClient::modifyGatewayBlockVolume(const ModifyGatewayBlockVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGatewayBlockVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGatewayBlockVolumeOutcome(ModifyGatewayBlockVolumeResult(outcome.result()));
	else
		return ModifyGatewayBlockVolumeOutcome(outcome.error());
}

void SgwClient::modifyGatewayBlockVolumeAsync(const ModifyGatewayBlockVolumeRequest& request, const ModifyGatewayBlockVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGatewayBlockVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ModifyGatewayBlockVolumeOutcomeCallable SgwClient::modifyGatewayBlockVolumeCallable(const ModifyGatewayBlockVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayBlockVolumeOutcome()>>(
			[this, request]()
			{
			return this->modifyGatewayBlockVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ModifyGatewayClassOutcome SgwClient::modifyGatewayClass(const ModifyGatewayClassRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGatewayClassOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGatewayClassOutcome(ModifyGatewayClassResult(outcome.result()));
	else
		return ModifyGatewayClassOutcome(outcome.error());
}

void SgwClient::modifyGatewayClassAsync(const ModifyGatewayClassRequest& request, const ModifyGatewayClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGatewayClass(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ModifyGatewayClassOutcomeCallable SgwClient::modifyGatewayClassCallable(const ModifyGatewayClassRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayClassOutcome()>>(
			[this, request]()
			{
			return this->modifyGatewayClass(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ModifyGatewayFileShareOutcome SgwClient::modifyGatewayFileShare(const ModifyGatewayFileShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGatewayFileShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGatewayFileShareOutcome(ModifyGatewayFileShareResult(outcome.result()));
	else
		return ModifyGatewayFileShareOutcome(outcome.error());
}

void SgwClient::modifyGatewayFileShareAsync(const ModifyGatewayFileShareRequest& request, const ModifyGatewayFileShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGatewayFileShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ModifyGatewayFileShareOutcomeCallable SgwClient::modifyGatewayFileShareCallable(const ModifyGatewayFileShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayFileShareOutcome()>>(
			[this, request]()
			{
			return this->modifyGatewayFileShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ModifyGatewayFileShareWatermarkOutcome SgwClient::modifyGatewayFileShareWatermark(const ModifyGatewayFileShareWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGatewayFileShareWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGatewayFileShareWatermarkOutcome(ModifyGatewayFileShareWatermarkResult(outcome.result()));
	else
		return ModifyGatewayFileShareWatermarkOutcome(outcome.error());
}

void SgwClient::modifyGatewayFileShareWatermarkAsync(const ModifyGatewayFileShareWatermarkRequest& request, const ModifyGatewayFileShareWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGatewayFileShareWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ModifyGatewayFileShareWatermarkOutcomeCallable SgwClient::modifyGatewayFileShareWatermarkCallable(const ModifyGatewayFileShareWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGatewayFileShareWatermarkOutcome()>>(
			[this, request]()
			{
			return this->modifyGatewayFileShareWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ModifyStorageBundleOutcome SgwClient::modifyStorageBundle(const ModifyStorageBundleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStorageBundleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStorageBundleOutcome(ModifyStorageBundleResult(outcome.result()));
	else
		return ModifyStorageBundleOutcome(outcome.error());
}

void SgwClient::modifyStorageBundleAsync(const ModifyStorageBundleRequest& request, const ModifyStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStorageBundle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ModifyStorageBundleOutcomeCallable SgwClient::modifyStorageBundleCallable(const ModifyStorageBundleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStorageBundleOutcome()>>(
			[this, request]()
			{
			return this->modifyStorageBundle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::OpenSgwServiceOutcome SgwClient::openSgwService(const OpenSgwServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenSgwServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenSgwServiceOutcome(OpenSgwServiceResult(outcome.result()));
	else
		return OpenSgwServiceOutcome(outcome.error());
}

void SgwClient::openSgwServiceAsync(const OpenSgwServiceRequest& request, const OpenSgwServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openSgwService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::OpenSgwServiceOutcomeCallable SgwClient::openSgwServiceCallable(const OpenSgwServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenSgwServiceOutcome()>>(
			[this, request]()
			{
			return this->openSgwService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::OperateGatewayOutcome SgwClient::operateGateway(const OperateGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateGatewayOutcome(OperateGatewayResult(outcome.result()));
	else
		return OperateGatewayOutcome(outcome.error());
}

void SgwClient::operateGatewayAsync(const OperateGatewayRequest& request, const OperateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::OperateGatewayOutcomeCallable SgwClient::operateGatewayCallable(const OperateGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateGatewayOutcome()>>(
			[this, request]()
			{
			return this->operateGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ReleaseServiceOutcome SgwClient::releaseService(const ReleaseServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseServiceOutcome(ReleaseServiceResult(outcome.result()));
	else
		return ReleaseServiceOutcome(outcome.error());
}

void SgwClient::releaseServiceAsync(const ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ReleaseServiceOutcomeCallable SgwClient::releaseServiceCallable(const ReleaseServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseServiceOutcome()>>(
			[this, request]()
			{
			return this->releaseService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::RemoveSharesFromExpressSyncOutcome SgwClient::removeSharesFromExpressSync(const RemoveSharesFromExpressSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSharesFromExpressSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSharesFromExpressSyncOutcome(RemoveSharesFromExpressSyncResult(outcome.result()));
	else
		return RemoveSharesFromExpressSyncOutcome(outcome.error());
}

void SgwClient::removeSharesFromExpressSyncAsync(const RemoveSharesFromExpressSyncRequest& request, const RemoveSharesFromExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSharesFromExpressSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::RemoveSharesFromExpressSyncOutcomeCallable SgwClient::removeSharesFromExpressSyncCallable(const RemoveSharesFromExpressSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSharesFromExpressSyncOutcome()>>(
			[this, request]()
			{
			return this->removeSharesFromExpressSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::RemoveTagsFromGatewayOutcome SgwClient::removeTagsFromGateway(const RemoveTagsFromGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagsFromGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagsFromGatewayOutcome(RemoveTagsFromGatewayResult(outcome.result()));
	else
		return RemoveTagsFromGatewayOutcome(outcome.error());
}

void SgwClient::removeTagsFromGatewayAsync(const RemoveTagsFromGatewayRequest& request, const RemoveTagsFromGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTagsFromGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::RemoveTagsFromGatewayOutcomeCallable SgwClient::removeTagsFromGatewayCallable(const RemoveTagsFromGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagsFromGatewayOutcome()>>(
			[this, request]()
			{
			return this->removeTagsFromGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ReportBlockVolumesOutcome SgwClient::reportBlockVolumes(const ReportBlockVolumesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportBlockVolumesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportBlockVolumesOutcome(ReportBlockVolumesResult(outcome.result()));
	else
		return ReportBlockVolumesOutcome(outcome.error());
}

void SgwClient::reportBlockVolumesAsync(const ReportBlockVolumesRequest& request, const ReportBlockVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportBlockVolumes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ReportBlockVolumesOutcomeCallable SgwClient::reportBlockVolumesCallable(const ReportBlockVolumesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportBlockVolumesOutcome()>>(
			[this, request]()
			{
			return this->reportBlockVolumes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ReportFileSharesOutcome SgwClient::reportFileShares(const ReportFileSharesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportFileSharesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportFileSharesOutcome(ReportFileSharesResult(outcome.result()));
	else
		return ReportFileSharesOutcome(outcome.error());
}

void SgwClient::reportFileSharesAsync(const ReportFileSharesRequest& request, const ReportFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportFileShares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ReportFileSharesOutcomeCallable SgwClient::reportFileSharesCallable(const ReportFileSharesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportFileSharesOutcome()>>(
			[this, request]()
			{
			return this->reportFileShares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ReportGatewayInfoOutcome SgwClient::reportGatewayInfo(const ReportGatewayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportGatewayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportGatewayInfoOutcome(ReportGatewayInfoResult(outcome.result()));
	else
		return ReportGatewayInfoOutcome(outcome.error());
}

void SgwClient::reportGatewayInfoAsync(const ReportGatewayInfoRequest& request, const ReportGatewayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportGatewayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ReportGatewayInfoOutcomeCallable SgwClient::reportGatewayInfoCallable(const ReportGatewayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportGatewayInfoOutcome()>>(
			[this, request]()
			{
			return this->reportGatewayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ReportGatewayUsageOutcome SgwClient::reportGatewayUsage(const ReportGatewayUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReportGatewayUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReportGatewayUsageOutcome(ReportGatewayUsageResult(outcome.result()));
	else
		return ReportGatewayUsageOutcome(outcome.error());
}

void SgwClient::reportGatewayUsageAsync(const ReportGatewayUsageRequest& request, const ReportGatewayUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reportGatewayUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ReportGatewayUsageOutcomeCallable SgwClient::reportGatewayUsageCallable(const ReportGatewayUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReportGatewayUsageOutcome()>>(
			[this, request]()
			{
			return this->reportGatewayUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ResetGatewayPasswordOutcome SgwClient::resetGatewayPassword(const ResetGatewayPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetGatewayPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetGatewayPasswordOutcome(ResetGatewayPasswordResult(outcome.result()));
	else
		return ResetGatewayPasswordOutcome(outcome.error());
}

void SgwClient::resetGatewayPasswordAsync(const ResetGatewayPasswordRequest& request, const ResetGatewayPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetGatewayPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ResetGatewayPasswordOutcomeCallable SgwClient::resetGatewayPasswordCallable(const ResetGatewayPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetGatewayPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetGatewayPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::RestartFileSharesOutcome SgwClient::restartFileShares(const RestartFileSharesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartFileSharesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartFileSharesOutcome(RestartFileSharesResult(outcome.result()));
	else
		return RestartFileSharesOutcome(outcome.error());
}

void SgwClient::restartFileSharesAsync(const RestartFileSharesRequest& request, const RestartFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartFileShares(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::RestartFileSharesOutcomeCallable SgwClient::restartFileSharesCallable(const RestartFileSharesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartFileSharesOutcome()>>(
			[this, request]()
			{
			return this->restartFileShares(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::SetGatewayADInfoOutcome SgwClient::setGatewayADInfo(const SetGatewayADInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGatewayADInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGatewayADInfoOutcome(SetGatewayADInfoResult(outcome.result()));
	else
		return SetGatewayADInfoOutcome(outcome.error());
}

void SgwClient::setGatewayADInfoAsync(const SetGatewayADInfoRequest& request, const SetGatewayADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGatewayADInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::SetGatewayADInfoOutcomeCallable SgwClient::setGatewayADInfoCallable(const SetGatewayADInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGatewayADInfoOutcome()>>(
			[this, request]()
			{
			return this->setGatewayADInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::SetGatewayDNSOutcome SgwClient::setGatewayDNS(const SetGatewayDNSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGatewayDNSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGatewayDNSOutcome(SetGatewayDNSResult(outcome.result()));
	else
		return SetGatewayDNSOutcome(outcome.error());
}

void SgwClient::setGatewayDNSAsync(const SetGatewayDNSRequest& request, const SetGatewayDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGatewayDNS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::SetGatewayDNSOutcomeCallable SgwClient::setGatewayDNSCallable(const SetGatewayDNSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGatewayDNSOutcome()>>(
			[this, request]()
			{
			return this->setGatewayDNS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::SetGatewayLDAPInfoOutcome SgwClient::setGatewayLDAPInfo(const SetGatewayLDAPInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGatewayLDAPInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGatewayLDAPInfoOutcome(SetGatewayLDAPInfoResult(outcome.result()));
	else
		return SetGatewayLDAPInfoOutcome(outcome.error());
}

void SgwClient::setGatewayLDAPInfoAsync(const SetGatewayLDAPInfoRequest& request, const SetGatewayLDAPInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGatewayLDAPInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::SetGatewayLDAPInfoOutcomeCallable SgwClient::setGatewayLDAPInfoCallable(const SetGatewayLDAPInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGatewayLDAPInfoOutcome()>>(
			[this, request]()
			{
			return this->setGatewayLDAPInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::SwitchCSGClientsReverseSyncConfigurationOutcome SgwClient::switchCSGClientsReverseSyncConfiguration(const SwitchCSGClientsReverseSyncConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchCSGClientsReverseSyncConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchCSGClientsReverseSyncConfigurationOutcome(SwitchCSGClientsReverseSyncConfigurationResult(outcome.result()));
	else
		return SwitchCSGClientsReverseSyncConfigurationOutcome(outcome.error());
}

void SgwClient::switchCSGClientsReverseSyncConfigurationAsync(const SwitchCSGClientsReverseSyncConfigurationRequest& request, const SwitchCSGClientsReverseSyncConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchCSGClientsReverseSyncConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::SwitchCSGClientsReverseSyncConfigurationOutcomeCallable SgwClient::switchCSGClientsReverseSyncConfigurationCallable(const SwitchCSGClientsReverseSyncConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchCSGClientsReverseSyncConfigurationOutcome()>>(
			[this, request]()
			{
			return this->switchCSGClientsReverseSyncConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::SwitchGatewayExpirationPolicyOutcome SgwClient::switchGatewayExpirationPolicy(const SwitchGatewayExpirationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchGatewayExpirationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchGatewayExpirationPolicyOutcome(SwitchGatewayExpirationPolicyResult(outcome.result()));
	else
		return SwitchGatewayExpirationPolicyOutcome(outcome.error());
}

void SgwClient::switchGatewayExpirationPolicyAsync(const SwitchGatewayExpirationPolicyRequest& request, const SwitchGatewayExpirationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchGatewayExpirationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::SwitchGatewayExpirationPolicyOutcomeCallable SgwClient::switchGatewayExpirationPolicyCallable(const SwitchGatewayExpirationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchGatewayExpirationPolicyOutcome()>>(
			[this, request]()
			{
			return this->switchGatewayExpirationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::SwitchToSubscriptionOutcome SgwClient::switchToSubscription(const SwitchToSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchToSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchToSubscriptionOutcome(SwitchToSubscriptionResult(outcome.result()));
	else
		return SwitchToSubscriptionOutcome(outcome.error());
}

void SgwClient::switchToSubscriptionAsync(const SwitchToSubscriptionRequest& request, const SwitchToSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchToSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::SwitchToSubscriptionOutcomeCallable SgwClient::switchToSubscriptionCallable(const SwitchToSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchToSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->switchToSubscription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::TagResourcesOutcome SgwClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void SgwClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::TagResourcesOutcomeCallable SgwClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::TriggerGatewayRemoteSyncOutcome SgwClient::triggerGatewayRemoteSync(const TriggerGatewayRemoteSyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerGatewayRemoteSyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerGatewayRemoteSyncOutcome(TriggerGatewayRemoteSyncResult(outcome.result()));
	else
		return TriggerGatewayRemoteSyncOutcome(outcome.error());
}

void SgwClient::triggerGatewayRemoteSyncAsync(const TriggerGatewayRemoteSyncRequest& request, const TriggerGatewayRemoteSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerGatewayRemoteSync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::TriggerGatewayRemoteSyncOutcomeCallable SgwClient::triggerGatewayRemoteSyncCallable(const TriggerGatewayRemoteSyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerGatewayRemoteSyncOutcome()>>(
			[this, request]()
			{
			return this->triggerGatewayRemoteSync(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::UntagResourcesOutcome SgwClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void SgwClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::UntagResourcesOutcomeCallable SgwClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::UpdateGatewayBlockVolumeOutcome SgwClient::updateGatewayBlockVolume(const UpdateGatewayBlockVolumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayBlockVolumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayBlockVolumeOutcome(UpdateGatewayBlockVolumeResult(outcome.result()));
	else
		return UpdateGatewayBlockVolumeOutcome(outcome.error());
}

void SgwClient::updateGatewayBlockVolumeAsync(const UpdateGatewayBlockVolumeRequest& request, const UpdateGatewayBlockVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayBlockVolume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::UpdateGatewayBlockVolumeOutcomeCallable SgwClient::updateGatewayBlockVolumeCallable(const UpdateGatewayBlockVolumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayBlockVolumeOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayBlockVolume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::UpdateGatewayFileShareOutcome SgwClient::updateGatewayFileShare(const UpdateGatewayFileShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGatewayFileShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGatewayFileShareOutcome(UpdateGatewayFileShareResult(outcome.result()));
	else
		return UpdateGatewayFileShareOutcome(outcome.error());
}

void SgwClient::updateGatewayFileShareAsync(const UpdateGatewayFileShareRequest& request, const UpdateGatewayFileShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGatewayFileShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::UpdateGatewayFileShareOutcomeCallable SgwClient::updateGatewayFileShareCallable(const UpdateGatewayFileShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGatewayFileShareOutcome()>>(
			[this, request]()
			{
			return this->updateGatewayFileShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::UpgradeGatewayOutcome SgwClient::upgradeGateway(const UpgradeGatewayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeGatewayOutcome(UpgradeGatewayResult(outcome.result()));
	else
		return UpgradeGatewayOutcome(outcome.error());
}

void SgwClient::upgradeGatewayAsync(const UpgradeGatewayRequest& request, const UpgradeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::UpgradeGatewayOutcomeCallable SgwClient::upgradeGatewayCallable(const UpgradeGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeGatewayOutcome()>>(
			[this, request]()
			{
			return this->upgradeGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::UploadCSGClientLogOutcome SgwClient::uploadCSGClientLog(const UploadCSGClientLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadCSGClientLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadCSGClientLogOutcome(UploadCSGClientLogResult(outcome.result()));
	else
		return UploadCSGClientLogOutcome(outcome.error());
}

void SgwClient::uploadCSGClientLogAsync(const UploadCSGClientLogRequest& request, const UploadCSGClientLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadCSGClientLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::UploadCSGClientLogOutcomeCallable SgwClient::uploadCSGClientLogCallable(const UploadCSGClientLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadCSGClientLogOutcome()>>(
			[this, request]()
			{
			return this->uploadCSGClientLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::UploadGatewayLogOutcome SgwClient::uploadGatewayLog(const UploadGatewayLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadGatewayLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadGatewayLogOutcome(UploadGatewayLogResult(outcome.result()));
	else
		return UploadGatewayLogOutcome(outcome.error());
}

void SgwClient::uploadGatewayLogAsync(const UploadGatewayLogRequest& request, const UploadGatewayLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadGatewayLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::UploadGatewayLogOutcomeCallable SgwClient::uploadGatewayLogCallable(const UploadGatewayLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadGatewayLogOutcome()>>(
			[this, request]()
			{
			return this->uploadGatewayLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ValidateExpressSyncConfigOutcome SgwClient::validateExpressSyncConfig(const ValidateExpressSyncConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateExpressSyncConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateExpressSyncConfigOutcome(ValidateExpressSyncConfigResult(outcome.result()));
	else
		return ValidateExpressSyncConfigOutcome(outcome.error());
}

void SgwClient::validateExpressSyncConfigAsync(const ValidateExpressSyncConfigRequest& request, const ValidateExpressSyncConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateExpressSyncConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ValidateExpressSyncConfigOutcomeCallable SgwClient::validateExpressSyncConfigCallable(const ValidateExpressSyncConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateExpressSyncConfigOutcome()>>(
			[this, request]()
			{
			return this->validateExpressSyncConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SgwClient::ValidateGatewayNameOutcome SgwClient::validateGatewayName(const ValidateGatewayNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateGatewayNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateGatewayNameOutcome(ValidateGatewayNameResult(outcome.result()));
	else
		return ValidateGatewayNameOutcome(outcome.error());
}

void SgwClient::validateGatewayNameAsync(const ValidateGatewayNameRequest& request, const ValidateGatewayNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateGatewayName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SgwClient::ValidateGatewayNameOutcomeCallable SgwClient::validateGatewayNameCallable(const ValidateGatewayNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateGatewayNameOutcome()>>(
			[this, request]()
			{
			return this->validateGatewayName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

