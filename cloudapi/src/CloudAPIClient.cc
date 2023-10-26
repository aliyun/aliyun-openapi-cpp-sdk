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

#include <alibabacloud/cloudapi/CloudAPIClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

namespace
{
	const std::string SERVICE_NAME = "CloudAPI";
}

CloudAPIClient::CloudAPIClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "apigateway");
}

CloudAPIClient::CloudAPIClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "apigateway");
}

CloudAPIClient::CloudAPIClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "apigateway");
}

CloudAPIClient::~CloudAPIClient()
{}

CloudAPIClient::AbolishApiOutcome CloudAPIClient::abolishApi(const AbolishApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbolishApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbolishApiOutcome(AbolishApiResult(outcome.result()));
	else
		return AbolishApiOutcome(outcome.error());
}

void CloudAPIClient::abolishApiAsync(const AbolishApiRequest& request, const AbolishApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abolishApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::AbolishApiOutcomeCallable CloudAPIClient::abolishApiCallable(const AbolishApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbolishApiOutcome()>>(
			[this, request]()
			{
			return this->abolishApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::AddAccessControlListEntryOutcome CloudAPIClient::addAccessControlListEntry(const AddAccessControlListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAccessControlListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAccessControlListEntryOutcome(AddAccessControlListEntryResult(outcome.result()));
	else
		return AddAccessControlListEntryOutcome(outcome.error());
}

void CloudAPIClient::addAccessControlListEntryAsync(const AddAccessControlListEntryRequest& request, const AddAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAccessControlListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::AddAccessControlListEntryOutcomeCallable CloudAPIClient::addAccessControlListEntryCallable(const AddAccessControlListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAccessControlListEntryOutcome()>>(
			[this, request]()
			{
			return this->addAccessControlListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::AddIpControlPolicyItemOutcome CloudAPIClient::addIpControlPolicyItem(const AddIpControlPolicyItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddIpControlPolicyItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddIpControlPolicyItemOutcome(AddIpControlPolicyItemResult(outcome.result()));
	else
		return AddIpControlPolicyItemOutcome(outcome.error());
}

void CloudAPIClient::addIpControlPolicyItemAsync(const AddIpControlPolicyItemRequest& request, const AddIpControlPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addIpControlPolicyItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::AddIpControlPolicyItemOutcomeCallable CloudAPIClient::addIpControlPolicyItemCallable(const AddIpControlPolicyItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddIpControlPolicyItemOutcome()>>(
			[this, request]()
			{
			return this->addIpControlPolicyItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::AddTrafficSpecialControlOutcome CloudAPIClient::addTrafficSpecialControl(const AddTrafficSpecialControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTrafficSpecialControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTrafficSpecialControlOutcome(AddTrafficSpecialControlResult(outcome.result()));
	else
		return AddTrafficSpecialControlOutcome(outcome.error());
}

void CloudAPIClient::addTrafficSpecialControlAsync(const AddTrafficSpecialControlRequest& request, const AddTrafficSpecialControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTrafficSpecialControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::AddTrafficSpecialControlOutcomeCallable CloudAPIClient::addTrafficSpecialControlCallable(const AddTrafficSpecialControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTrafficSpecialControlOutcome()>>(
			[this, request]()
			{
			return this->addTrafficSpecialControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::AttachApiProductOutcome CloudAPIClient::attachApiProduct(const AttachApiProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachApiProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachApiProductOutcome(AttachApiProductResult(outcome.result()));
	else
		return AttachApiProductOutcome(outcome.error());
}

void CloudAPIClient::attachApiProductAsync(const AttachApiProductRequest& request, const AttachApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachApiProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::AttachApiProductOutcomeCallable CloudAPIClient::attachApiProductCallable(const AttachApiProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachApiProductOutcome()>>(
			[this, request]()
			{
			return this->attachApiProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::AttachPluginOutcome CloudAPIClient::attachPlugin(const AttachPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AttachPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AttachPluginOutcome(AttachPluginResult(outcome.result()));
	else
		return AttachPluginOutcome(outcome.error());
}

void CloudAPIClient::attachPluginAsync(const AttachPluginRequest& request, const AttachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, attachPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::AttachPluginOutcomeCallable CloudAPIClient::attachPluginCallable(const AttachPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AttachPluginOutcome()>>(
			[this, request]()
			{
			return this->attachPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::BatchAbolishApisOutcome CloudAPIClient::batchAbolishApis(const BatchAbolishApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAbolishApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAbolishApisOutcome(BatchAbolishApisResult(outcome.result()));
	else
		return BatchAbolishApisOutcome(outcome.error());
}

void CloudAPIClient::batchAbolishApisAsync(const BatchAbolishApisRequest& request, const BatchAbolishApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAbolishApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::BatchAbolishApisOutcomeCallable CloudAPIClient::batchAbolishApisCallable(const BatchAbolishApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAbolishApisOutcome()>>(
			[this, request]()
			{
			return this->batchAbolishApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::BatchDeployApisOutcome CloudAPIClient::batchDeployApis(const BatchDeployApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeployApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeployApisOutcome(BatchDeployApisResult(outcome.result()));
	else
		return BatchDeployApisOutcome(outcome.error());
}

void CloudAPIClient::batchDeployApisAsync(const BatchDeployApisRequest& request, const BatchDeployApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeployApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::BatchDeployApisOutcomeCallable CloudAPIClient::batchDeployApisCallable(const BatchDeployApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeployApisOutcome()>>(
			[this, request]()
			{
			return this->batchDeployApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateAccessControlListOutcome CloudAPIClient::createAccessControlList(const CreateAccessControlListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessControlListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessControlListOutcome(CreateAccessControlListResult(outcome.result()));
	else
		return CreateAccessControlListOutcome(outcome.error());
}

void CloudAPIClient::createAccessControlListAsync(const CreateAccessControlListRequest& request, const CreateAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessControlList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateAccessControlListOutcomeCallable CloudAPIClient::createAccessControlListCallable(const CreateAccessControlListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessControlListOutcome()>>(
			[this, request]()
			{
			return this->createAccessControlList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateApiOutcome CloudAPIClient::createApi(const CreateApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApiOutcome(CreateApiResult(outcome.result()));
	else
		return CreateApiOutcome(outcome.error());
}

void CloudAPIClient::createApiAsync(const CreateApiRequest& request, const CreateApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateApiOutcomeCallable CloudAPIClient::createApiCallable(const CreateApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApiOutcome()>>(
			[this, request]()
			{
			return this->createApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateApiGroupOutcome CloudAPIClient::createApiGroup(const CreateApiGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApiGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApiGroupOutcome(CreateApiGroupResult(outcome.result()));
	else
		return CreateApiGroupOutcome(outcome.error());
}

void CloudAPIClient::createApiGroupAsync(const CreateApiGroupRequest& request, const CreateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApiGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateApiGroupOutcomeCallable CloudAPIClient::createApiGroupCallable(const CreateApiGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApiGroupOutcome()>>(
			[this, request]()
			{
			return this->createApiGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateApiStageVariableOutcome CloudAPIClient::createApiStageVariable(const CreateApiStageVariableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApiStageVariableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApiStageVariableOutcome(CreateApiStageVariableResult(outcome.result()));
	else
		return CreateApiStageVariableOutcome(outcome.error());
}

void CloudAPIClient::createApiStageVariableAsync(const CreateApiStageVariableRequest& request, const CreateApiStageVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApiStageVariable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateApiStageVariableOutcomeCallable CloudAPIClient::createApiStageVariableCallable(const CreateApiStageVariableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApiStageVariableOutcome()>>(
			[this, request]()
			{
			return this->createApiStageVariable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateAppOutcome CloudAPIClient::createApp(const CreateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppOutcome(CreateAppResult(outcome.result()));
	else
		return CreateAppOutcome(outcome.error());
}

void CloudAPIClient::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateAppOutcomeCallable CloudAPIClient::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateBackendOutcome CloudAPIClient::createBackend(const CreateBackendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackendOutcome(CreateBackendResult(outcome.result()));
	else
		return CreateBackendOutcome(outcome.error());
}

void CloudAPIClient::createBackendAsync(const CreateBackendRequest& request, const CreateBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateBackendOutcomeCallable CloudAPIClient::createBackendCallable(const CreateBackendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackendOutcome()>>(
			[this, request]()
			{
			return this->createBackend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateBackendModelOutcome CloudAPIClient::createBackendModel(const CreateBackendModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackendModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackendModelOutcome(CreateBackendModelResult(outcome.result()));
	else
		return CreateBackendModelOutcome(outcome.error());
}

void CloudAPIClient::createBackendModelAsync(const CreateBackendModelRequest& request, const CreateBackendModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackendModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateBackendModelOutcomeCallable CloudAPIClient::createBackendModelCallable(const CreateBackendModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackendModelOutcome()>>(
			[this, request]()
			{
			return this->createBackendModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateDatasetOutcome CloudAPIClient::createDataset(const CreateDatasetRequest &request) const
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

void CloudAPIClient::createDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateDatasetOutcomeCallable CloudAPIClient::createDatasetCallable(const CreateDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetOutcome()>>(
			[this, request]()
			{
			return this->createDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateDatasetItemOutcome CloudAPIClient::createDatasetItem(const CreateDatasetItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatasetItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatasetItemOutcome(CreateDatasetItemResult(outcome.result()));
	else
		return CreateDatasetItemOutcome(outcome.error());
}

void CloudAPIClient::createDatasetItemAsync(const CreateDatasetItemRequest& request, const CreateDatasetItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatasetItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateDatasetItemOutcomeCallable CloudAPIClient::createDatasetItemCallable(const CreateDatasetItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatasetItemOutcome()>>(
			[this, request]()
			{
			return this->createDatasetItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateInstanceOutcome CloudAPIClient::createInstance(const CreateInstanceRequest &request) const
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

void CloudAPIClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateInstanceOutcomeCallable CloudAPIClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateIntranetDomainOutcome CloudAPIClient::createIntranetDomain(const CreateIntranetDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIntranetDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIntranetDomainOutcome(CreateIntranetDomainResult(outcome.result()));
	else
		return CreateIntranetDomainOutcome(outcome.error());
}

void CloudAPIClient::createIntranetDomainAsync(const CreateIntranetDomainRequest& request, const CreateIntranetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIntranetDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateIntranetDomainOutcomeCallable CloudAPIClient::createIntranetDomainCallable(const CreateIntranetDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIntranetDomainOutcome()>>(
			[this, request]()
			{
			return this->createIntranetDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateIpControlOutcome CloudAPIClient::createIpControl(const CreateIpControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIpControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIpControlOutcome(CreateIpControlResult(outcome.result()));
	else
		return CreateIpControlOutcome(outcome.error());
}

void CloudAPIClient::createIpControlAsync(const CreateIpControlRequest& request, const CreateIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIpControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateIpControlOutcomeCallable CloudAPIClient::createIpControlCallable(const CreateIpControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIpControlOutcome()>>(
			[this, request]()
			{
			return this->createIpControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateLogConfigOutcome CloudAPIClient::createLogConfig(const CreateLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogConfigOutcome(CreateLogConfigResult(outcome.result()));
	else
		return CreateLogConfigOutcome(outcome.error());
}

void CloudAPIClient::createLogConfigAsync(const CreateLogConfigRequest& request, const CreateLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateLogConfigOutcomeCallable CloudAPIClient::createLogConfigCallable(const CreateLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogConfigOutcome()>>(
			[this, request]()
			{
			return this->createLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateModelOutcome CloudAPIClient::createModel(const CreateModelRequest &request) const
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

void CloudAPIClient::createModelAsync(const CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateModelOutcomeCallable CloudAPIClient::createModelCallable(const CreateModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateModelOutcome()>>(
			[this, request]()
			{
			return this->createModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateMonitorGroupOutcome CloudAPIClient::createMonitorGroup(const CreateMonitorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMonitorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMonitorGroupOutcome(CreateMonitorGroupResult(outcome.result()));
	else
		return CreateMonitorGroupOutcome(outcome.error());
}

void CloudAPIClient::createMonitorGroupAsync(const CreateMonitorGroupRequest& request, const CreateMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMonitorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateMonitorGroupOutcomeCallable CloudAPIClient::createMonitorGroupCallable(const CreateMonitorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMonitorGroupOutcome()>>(
			[this, request]()
			{
			return this->createMonitorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreatePluginOutcome CloudAPIClient::createPlugin(const CreatePluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePluginOutcome(CreatePluginResult(outcome.result()));
	else
		return CreatePluginOutcome(outcome.error());
}

void CloudAPIClient::createPluginAsync(const CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreatePluginOutcomeCallable CloudAPIClient::createPluginCallable(const CreatePluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePluginOutcome()>>(
			[this, request]()
			{
			return this->createPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateSignatureOutcome CloudAPIClient::createSignature(const CreateSignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSignatureOutcome(CreateSignatureResult(outcome.result()));
	else
		return CreateSignatureOutcome(outcome.error());
}

void CloudAPIClient::createSignatureAsync(const CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateSignatureOutcomeCallable CloudAPIClient::createSignatureCallable(const CreateSignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSignatureOutcome()>>(
			[this, request]()
			{
			return this->createSignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::CreateTrafficControlOutcome CloudAPIClient::createTrafficControl(const CreateTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrafficControlOutcome(CreateTrafficControlResult(outcome.result()));
	else
		return CreateTrafficControlOutcome(outcome.error());
}

void CloudAPIClient::createTrafficControlAsync(const CreateTrafficControlRequest& request, const CreateTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::CreateTrafficControlOutcomeCallable CloudAPIClient::createTrafficControlCallable(const CreateTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->createTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteAccessControlListOutcome CloudAPIClient::deleteAccessControlList(const DeleteAccessControlListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessControlListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessControlListOutcome(DeleteAccessControlListResult(outcome.result()));
	else
		return DeleteAccessControlListOutcome(outcome.error());
}

void CloudAPIClient::deleteAccessControlListAsync(const DeleteAccessControlListRequest& request, const DeleteAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessControlList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteAccessControlListOutcomeCallable CloudAPIClient::deleteAccessControlListCallable(const DeleteAccessControlListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessControlListOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessControlList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteAllTrafficSpecialControlOutcome CloudAPIClient::deleteAllTrafficSpecialControl(const DeleteAllTrafficSpecialControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAllTrafficSpecialControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAllTrafficSpecialControlOutcome(DeleteAllTrafficSpecialControlResult(outcome.result()));
	else
		return DeleteAllTrafficSpecialControlOutcome(outcome.error());
}

void CloudAPIClient::deleteAllTrafficSpecialControlAsync(const DeleteAllTrafficSpecialControlRequest& request, const DeleteAllTrafficSpecialControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAllTrafficSpecialControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteAllTrafficSpecialControlOutcomeCallable CloudAPIClient::deleteAllTrafficSpecialControlCallable(const DeleteAllTrafficSpecialControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAllTrafficSpecialControlOutcome()>>(
			[this, request]()
			{
			return this->deleteAllTrafficSpecialControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteApiOutcome CloudAPIClient::deleteApi(const DeleteApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiOutcome(DeleteApiResult(outcome.result()));
	else
		return DeleteApiOutcome(outcome.error());
}

void CloudAPIClient::deleteApiAsync(const DeleteApiRequest& request, const DeleteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteApiOutcomeCallable CloudAPIClient::deleteApiCallable(const DeleteApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiOutcome()>>(
			[this, request]()
			{
			return this->deleteApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteApiGroupOutcome CloudAPIClient::deleteApiGroup(const DeleteApiGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiGroupOutcome(DeleteApiGroupResult(outcome.result()));
	else
		return DeleteApiGroupOutcome(outcome.error());
}

void CloudAPIClient::deleteApiGroupAsync(const DeleteApiGroupRequest& request, const DeleteApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApiGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteApiGroupOutcomeCallable CloudAPIClient::deleteApiGroupCallable(const DeleteApiGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteApiGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteApiProductOutcome CloudAPIClient::deleteApiProduct(const DeleteApiProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiProductOutcome(DeleteApiProductResult(outcome.result()));
	else
		return DeleteApiProductOutcome(outcome.error());
}

void CloudAPIClient::deleteApiProductAsync(const DeleteApiProductRequest& request, const DeleteApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApiProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteApiProductOutcomeCallable CloudAPIClient::deleteApiProductCallable(const DeleteApiProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiProductOutcome()>>(
			[this, request]()
			{
			return this->deleteApiProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteApiStageVariableOutcome CloudAPIClient::deleteApiStageVariable(const DeleteApiStageVariableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiStageVariableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiStageVariableOutcome(DeleteApiStageVariableResult(outcome.result()));
	else
		return DeleteApiStageVariableOutcome(outcome.error());
}

void CloudAPIClient::deleteApiStageVariableAsync(const DeleteApiStageVariableRequest& request, const DeleteApiStageVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApiStageVariable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteApiStageVariableOutcomeCallable CloudAPIClient::deleteApiStageVariableCallable(const DeleteApiStageVariableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiStageVariableOutcome()>>(
			[this, request]()
			{
			return this->deleteApiStageVariable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteAppOutcome CloudAPIClient::deleteApp(const DeleteAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppOutcome(DeleteAppResult(outcome.result()));
	else
		return DeleteAppOutcome(outcome.error());
}

void CloudAPIClient::deleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteAppOutcomeCallable CloudAPIClient::deleteAppCallable(const DeleteAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
			[this, request]()
			{
			return this->deleteApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteBackendOutcome CloudAPIClient::deleteBackend(const DeleteBackendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackendOutcome(DeleteBackendResult(outcome.result()));
	else
		return DeleteBackendOutcome(outcome.error());
}

void CloudAPIClient::deleteBackendAsync(const DeleteBackendRequest& request, const DeleteBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteBackendOutcomeCallable CloudAPIClient::deleteBackendCallable(const DeleteBackendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackendOutcome()>>(
			[this, request]()
			{
			return this->deleteBackend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteBackendModelOutcome CloudAPIClient::deleteBackendModel(const DeleteBackendModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackendModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackendModelOutcome(DeleteBackendModelResult(outcome.result()));
	else
		return DeleteBackendModelOutcome(outcome.error());
}

void CloudAPIClient::deleteBackendModelAsync(const DeleteBackendModelRequest& request, const DeleteBackendModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackendModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteBackendModelOutcomeCallable CloudAPIClient::deleteBackendModelCallable(const DeleteBackendModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackendModelOutcome()>>(
			[this, request]()
			{
			return this->deleteBackendModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteDatasetOutcome CloudAPIClient::deleteDataset(const DeleteDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatasetOutcome(DeleteDatasetResult(outcome.result()));
	else
		return DeleteDatasetOutcome(outcome.error());
}

void CloudAPIClient::deleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteDatasetOutcomeCallable CloudAPIClient::deleteDatasetCallable(const DeleteDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatasetOutcome()>>(
			[this, request]()
			{
			return this->deleteDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteDatasetItemOutcome CloudAPIClient::deleteDatasetItem(const DeleteDatasetItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDatasetItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDatasetItemOutcome(DeleteDatasetItemResult(outcome.result()));
	else
		return DeleteDatasetItemOutcome(outcome.error());
}

void CloudAPIClient::deleteDatasetItemAsync(const DeleteDatasetItemRequest& request, const DeleteDatasetItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDatasetItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteDatasetItemOutcomeCallable CloudAPIClient::deleteDatasetItemCallable(const DeleteDatasetItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDatasetItemOutcome()>>(
			[this, request]()
			{
			return this->deleteDatasetItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteDomainOutcome CloudAPIClient::deleteDomain(const DeleteDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainOutcome(DeleteDomainResult(outcome.result()));
	else
		return DeleteDomainOutcome(outcome.error());
}

void CloudAPIClient::deleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteDomainOutcomeCallable CloudAPIClient::deleteDomainCallable(const DeleteDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteDomainCertificateOutcome CloudAPIClient::deleteDomainCertificate(const DeleteDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainCertificateOutcome(DeleteDomainCertificateResult(outcome.result()));
	else
		return DeleteDomainCertificateOutcome(outcome.error());
}

void CloudAPIClient::deleteDomainCertificateAsync(const DeleteDomainCertificateRequest& request, const DeleteDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteDomainCertificateOutcomeCallable CloudAPIClient::deleteDomainCertificateCallable(const DeleteDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteInstanceOutcome CloudAPIClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void CloudAPIClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteInstanceOutcomeCallable CloudAPIClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteIpControlOutcome CloudAPIClient::deleteIpControl(const DeleteIpControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpControlOutcome(DeleteIpControlResult(outcome.result()));
	else
		return DeleteIpControlOutcome(outcome.error());
}

void CloudAPIClient::deleteIpControlAsync(const DeleteIpControlRequest& request, const DeleteIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteIpControlOutcomeCallable CloudAPIClient::deleteIpControlCallable(const DeleteIpControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpControlOutcome()>>(
			[this, request]()
			{
			return this->deleteIpControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteLogConfigOutcome CloudAPIClient::deleteLogConfig(const DeleteLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogConfigOutcome(DeleteLogConfigResult(outcome.result()));
	else
		return DeleteLogConfigOutcome(outcome.error());
}

void CloudAPIClient::deleteLogConfigAsync(const DeleteLogConfigRequest& request, const DeleteLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteLogConfigOutcomeCallable CloudAPIClient::deleteLogConfigCallable(const DeleteLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteModelOutcome CloudAPIClient::deleteModel(const DeleteModelRequest &request) const
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

void CloudAPIClient::deleteModelAsync(const DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteModelOutcomeCallable CloudAPIClient::deleteModelCallable(const DeleteModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteModelOutcome()>>(
			[this, request]()
			{
			return this->deleteModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteMonitorGroupOutcome CloudAPIClient::deleteMonitorGroup(const DeleteMonitorGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMonitorGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMonitorGroupOutcome(DeleteMonitorGroupResult(outcome.result()));
	else
		return DeleteMonitorGroupOutcome(outcome.error());
}

void CloudAPIClient::deleteMonitorGroupAsync(const DeleteMonitorGroupRequest& request, const DeleteMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMonitorGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteMonitorGroupOutcomeCallable CloudAPIClient::deleteMonitorGroupCallable(const DeleteMonitorGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMonitorGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteMonitorGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeletePluginOutcome CloudAPIClient::deletePlugin(const DeletePluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePluginOutcome(DeletePluginResult(outcome.result()));
	else
		return DeletePluginOutcome(outcome.error());
}

void CloudAPIClient::deletePluginAsync(const DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeletePluginOutcomeCallable CloudAPIClient::deletePluginCallable(const DeletePluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePluginOutcome()>>(
			[this, request]()
			{
			return this->deletePlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteSignatureOutcome CloudAPIClient::deleteSignature(const DeleteSignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSignatureOutcome(DeleteSignatureResult(outcome.result()));
	else
		return DeleteSignatureOutcome(outcome.error());
}

void CloudAPIClient::deleteSignatureAsync(const DeleteSignatureRequest& request, const DeleteSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteSignatureOutcomeCallable CloudAPIClient::deleteSignatureCallable(const DeleteSignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSignatureOutcome()>>(
			[this, request]()
			{
			return this->deleteSignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteTrafficControlOutcome CloudAPIClient::deleteTrafficControl(const DeleteTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrafficControlOutcome(DeleteTrafficControlResult(outcome.result()));
	else
		return DeleteTrafficControlOutcome(outcome.error());
}

void CloudAPIClient::deleteTrafficControlAsync(const DeleteTrafficControlRequest& request, const DeleteTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteTrafficControlOutcomeCallable CloudAPIClient::deleteTrafficControlCallable(const DeleteTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->deleteTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeleteTrafficSpecialControlOutcome CloudAPIClient::deleteTrafficSpecialControl(const DeleteTrafficSpecialControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTrafficSpecialControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTrafficSpecialControlOutcome(DeleteTrafficSpecialControlResult(outcome.result()));
	else
		return DeleteTrafficSpecialControlOutcome(outcome.error());
}

void CloudAPIClient::deleteTrafficSpecialControlAsync(const DeleteTrafficSpecialControlRequest& request, const DeleteTrafficSpecialControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTrafficSpecialControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeleteTrafficSpecialControlOutcomeCallable CloudAPIClient::deleteTrafficSpecialControlCallable(const DeleteTrafficSpecialControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTrafficSpecialControlOutcome()>>(
			[this, request]()
			{
			return this->deleteTrafficSpecialControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DeployApiOutcome CloudAPIClient::deployApi(const DeployApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployApiOutcome(DeployApiResult(outcome.result()));
	else
		return DeployApiOutcome(outcome.error());
}

void CloudAPIClient::deployApiAsync(const DeployApiRequest& request, const DeployApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DeployApiOutcomeCallable CloudAPIClient::deployApiCallable(const DeployApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployApiOutcome()>>(
			[this, request]()
			{
			return this->deployApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAbolishApiTaskOutcome CloudAPIClient::describeAbolishApiTask(const DescribeAbolishApiTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAbolishApiTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAbolishApiTaskOutcome(DescribeAbolishApiTaskResult(outcome.result()));
	else
		return DescribeAbolishApiTaskOutcome(outcome.error());
}

void CloudAPIClient::describeAbolishApiTaskAsync(const DescribeAbolishApiTaskRequest& request, const DescribeAbolishApiTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAbolishApiTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAbolishApiTaskOutcomeCallable CloudAPIClient::describeAbolishApiTaskCallable(const DescribeAbolishApiTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAbolishApiTaskOutcome()>>(
			[this, request]()
			{
			return this->describeAbolishApiTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAccessControlListAttributeOutcome CloudAPIClient::describeAccessControlListAttribute(const DescribeAccessControlListAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessControlListAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessControlListAttributeOutcome(DescribeAccessControlListAttributeResult(outcome.result()));
	else
		return DescribeAccessControlListAttributeOutcome(outcome.error());
}

void CloudAPIClient::describeAccessControlListAttributeAsync(const DescribeAccessControlListAttributeRequest& request, const DescribeAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessControlListAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAccessControlListAttributeOutcomeCallable CloudAPIClient::describeAccessControlListAttributeCallable(const DescribeAccessControlListAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessControlListAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeAccessControlListAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAccessControlListsOutcome CloudAPIClient::describeAccessControlLists(const DescribeAccessControlListsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessControlListsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessControlListsOutcome(DescribeAccessControlListsResult(outcome.result()));
	else
		return DescribeAccessControlListsOutcome(outcome.error());
}

void CloudAPIClient::describeAccessControlListsAsync(const DescribeAccessControlListsRequest& request, const DescribeAccessControlListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessControlLists(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAccessControlListsOutcomeCallable CloudAPIClient::describeAccessControlListsCallable(const DescribeAccessControlListsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessControlListsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessControlLists(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiOutcome CloudAPIClient::describeApi(const DescribeApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiOutcome(DescribeApiResult(outcome.result()));
	else
		return DescribeApiOutcome(outcome.error());
}

void CloudAPIClient::describeApiAsync(const DescribeApiRequest& request, const DescribeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiOutcomeCallable CloudAPIClient::describeApiCallable(const DescribeApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiOutcome()>>(
			[this, request]()
			{
			return this->describeApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiDocOutcome CloudAPIClient::describeApiDoc(const DescribeApiDocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiDocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiDocOutcome(DescribeApiDocResult(outcome.result()));
	else
		return DescribeApiDocOutcome(outcome.error());
}

void CloudAPIClient::describeApiDocAsync(const DescribeApiDocRequest& request, const DescribeApiDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiDoc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiDocOutcomeCallable CloudAPIClient::describeApiDocCallable(const DescribeApiDocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiDocOutcome()>>(
			[this, request]()
			{
			return this->describeApiDoc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiGroupOutcome CloudAPIClient::describeApiGroup(const DescribeApiGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiGroupOutcome(DescribeApiGroupResult(outcome.result()));
	else
		return DescribeApiGroupOutcome(outcome.error());
}

void CloudAPIClient::describeApiGroupAsync(const DescribeApiGroupRequest& request, const DescribeApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiGroupOutcomeCallable CloudAPIClient::describeApiGroupCallable(const DescribeApiGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiGroupOutcome()>>(
			[this, request]()
			{
			return this->describeApiGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiGroupVpcWhitelistOutcome CloudAPIClient::describeApiGroupVpcWhitelist(const DescribeApiGroupVpcWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiGroupVpcWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiGroupVpcWhitelistOutcome(DescribeApiGroupVpcWhitelistResult(outcome.result()));
	else
		return DescribeApiGroupVpcWhitelistOutcome(outcome.error());
}

void CloudAPIClient::describeApiGroupVpcWhitelistAsync(const DescribeApiGroupVpcWhitelistRequest& request, const DescribeApiGroupVpcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiGroupVpcWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiGroupVpcWhitelistOutcomeCallable CloudAPIClient::describeApiGroupVpcWhitelistCallable(const DescribeApiGroupVpcWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiGroupVpcWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeApiGroupVpcWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiGroupsOutcome CloudAPIClient::describeApiGroups(const DescribeApiGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiGroupsOutcome(DescribeApiGroupsResult(outcome.result()));
	else
		return DescribeApiGroupsOutcome(outcome.error());
}

void CloudAPIClient::describeApiGroupsAsync(const DescribeApiGroupsRequest& request, const DescribeApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiGroupsOutcomeCallable CloudAPIClient::describeApiGroupsCallable(const DescribeApiGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeApiGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiHistoriesOutcome CloudAPIClient::describeApiHistories(const DescribeApiHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiHistoriesOutcome(DescribeApiHistoriesResult(outcome.result()));
	else
		return DescribeApiHistoriesOutcome(outcome.error());
}

void CloudAPIClient::describeApiHistoriesAsync(const DescribeApiHistoriesRequest& request, const DescribeApiHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiHistoriesOutcomeCallable CloudAPIClient::describeApiHistoriesCallable(const DescribeApiHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiHistoriesOutcome()>>(
			[this, request]()
			{
			return this->describeApiHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiHistoryOutcome CloudAPIClient::describeApiHistory(const DescribeApiHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiHistoryOutcome(DescribeApiHistoryResult(outcome.result()));
	else
		return DescribeApiHistoryOutcome(outcome.error());
}

void CloudAPIClient::describeApiHistoryAsync(const DescribeApiHistoryRequest& request, const DescribeApiHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiHistoryOutcomeCallable CloudAPIClient::describeApiHistoryCallable(const DescribeApiHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeApiHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiIpControlsOutcome CloudAPIClient::describeApiIpControls(const DescribeApiIpControlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiIpControlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiIpControlsOutcome(DescribeApiIpControlsResult(outcome.result()));
	else
		return DescribeApiIpControlsOutcome(outcome.error());
}

void CloudAPIClient::describeApiIpControlsAsync(const DescribeApiIpControlsRequest& request, const DescribeApiIpControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiIpControls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiIpControlsOutcomeCallable CloudAPIClient::describeApiIpControlsCallable(const DescribeApiIpControlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiIpControlsOutcome()>>(
			[this, request]()
			{
			return this->describeApiIpControls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiLatencyDataOutcome CloudAPIClient::describeApiLatencyData(const DescribeApiLatencyDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiLatencyDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiLatencyDataOutcome(DescribeApiLatencyDataResult(outcome.result()));
	else
		return DescribeApiLatencyDataOutcome(outcome.error());
}

void CloudAPIClient::describeApiLatencyDataAsync(const DescribeApiLatencyDataRequest& request, const DescribeApiLatencyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiLatencyData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiLatencyDataOutcomeCallable CloudAPIClient::describeApiLatencyDataCallable(const DescribeApiLatencyDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiLatencyDataOutcome()>>(
			[this, request]()
			{
			return this->describeApiLatencyData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiMarketAttributesOutcome CloudAPIClient::describeApiMarketAttributes(const DescribeApiMarketAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiMarketAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiMarketAttributesOutcome(DescribeApiMarketAttributesResult(outcome.result()));
	else
		return DescribeApiMarketAttributesOutcome(outcome.error());
}

void CloudAPIClient::describeApiMarketAttributesAsync(const DescribeApiMarketAttributesRequest& request, const DescribeApiMarketAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiMarketAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiMarketAttributesOutcomeCallable CloudAPIClient::describeApiMarketAttributesCallable(const DescribeApiMarketAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiMarketAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeApiMarketAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiProductApisOutcome CloudAPIClient::describeApiProductApis(const DescribeApiProductApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiProductApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiProductApisOutcome(DescribeApiProductApisResult(outcome.result()));
	else
		return DescribeApiProductApisOutcome(outcome.error());
}

void CloudAPIClient::describeApiProductApisAsync(const DescribeApiProductApisRequest& request, const DescribeApiProductApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiProductApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiProductApisOutcomeCallable CloudAPIClient::describeApiProductApisCallable(const DescribeApiProductApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiProductApisOutcome()>>(
			[this, request]()
			{
			return this->describeApiProductApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiProductsByAppOutcome CloudAPIClient::describeApiProductsByApp(const DescribeApiProductsByAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiProductsByAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiProductsByAppOutcome(DescribeApiProductsByAppResult(outcome.result()));
	else
		return DescribeApiProductsByAppOutcome(outcome.error());
}

void CloudAPIClient::describeApiProductsByAppAsync(const DescribeApiProductsByAppRequest& request, const DescribeApiProductsByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiProductsByApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiProductsByAppOutcomeCallable CloudAPIClient::describeApiProductsByAppCallable(const DescribeApiProductsByAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiProductsByAppOutcome()>>(
			[this, request]()
			{
			return this->describeApiProductsByApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiQpsDataOutcome CloudAPIClient::describeApiQpsData(const DescribeApiQpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiQpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiQpsDataOutcome(DescribeApiQpsDataResult(outcome.result()));
	else
		return DescribeApiQpsDataOutcome(outcome.error());
}

void CloudAPIClient::describeApiQpsDataAsync(const DescribeApiQpsDataRequest& request, const DescribeApiQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiQpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiQpsDataOutcomeCallable CloudAPIClient::describeApiQpsDataCallable(const DescribeApiQpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiQpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeApiQpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiSignaturesOutcome CloudAPIClient::describeApiSignatures(const DescribeApiSignaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiSignaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiSignaturesOutcome(DescribeApiSignaturesResult(outcome.result()));
	else
		return DescribeApiSignaturesOutcome(outcome.error());
}

void CloudAPIClient::describeApiSignaturesAsync(const DescribeApiSignaturesRequest& request, const DescribeApiSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiSignatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiSignaturesOutcomeCallable CloudAPIClient::describeApiSignaturesCallable(const DescribeApiSignaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiSignaturesOutcome()>>(
			[this, request]()
			{
			return this->describeApiSignatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiTrafficControlsOutcome CloudAPIClient::describeApiTrafficControls(const DescribeApiTrafficControlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiTrafficControlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiTrafficControlsOutcome(DescribeApiTrafficControlsResult(outcome.result()));
	else
		return DescribeApiTrafficControlsOutcome(outcome.error());
}

void CloudAPIClient::describeApiTrafficControlsAsync(const DescribeApiTrafficControlsRequest& request, const DescribeApiTrafficControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiTrafficControls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiTrafficControlsOutcomeCallable CloudAPIClient::describeApiTrafficControlsCallable(const DescribeApiTrafficControlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiTrafficControlsOutcome()>>(
			[this, request]()
			{
			return this->describeApiTrafficControls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApiTrafficDataOutcome CloudAPIClient::describeApiTrafficData(const DescribeApiTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiTrafficDataOutcome(DescribeApiTrafficDataResult(outcome.result()));
	else
		return DescribeApiTrafficDataOutcome(outcome.error());
}

void CloudAPIClient::describeApiTrafficDataAsync(const DescribeApiTrafficDataRequest& request, const DescribeApiTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApiTrafficDataOutcomeCallable CloudAPIClient::describeApiTrafficDataCallable(const DescribeApiTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeApiTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisOutcome CloudAPIClient::describeApis(const DescribeApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisOutcome(DescribeApisResult(outcome.result()));
	else
		return DescribeApisOutcome(outcome.error());
}

void CloudAPIClient::describeApisAsync(const DescribeApisRequest& request, const DescribeApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisOutcomeCallable CloudAPIClient::describeApisCallable(const DescribeApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisOutcome()>>(
			[this, request]()
			{
			return this->describeApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisByAppOutcome CloudAPIClient::describeApisByApp(const DescribeApisByAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisByAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisByAppOutcome(DescribeApisByAppResult(outcome.result()));
	else
		return DescribeApisByAppOutcome(outcome.error());
}

void CloudAPIClient::describeApisByAppAsync(const DescribeApisByAppRequest& request, const DescribeApisByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApisByApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisByAppOutcomeCallable CloudAPIClient::describeApisByAppCallable(const DescribeApisByAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisByAppOutcome()>>(
			[this, request]()
			{
			return this->describeApisByApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisByBackendOutcome CloudAPIClient::describeApisByBackend(const DescribeApisByBackendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisByBackendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisByBackendOutcome(DescribeApisByBackendResult(outcome.result()));
	else
		return DescribeApisByBackendOutcome(outcome.error());
}

void CloudAPIClient::describeApisByBackendAsync(const DescribeApisByBackendRequest& request, const DescribeApisByBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApisByBackend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisByBackendOutcomeCallable CloudAPIClient::describeApisByBackendCallable(const DescribeApisByBackendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisByBackendOutcome()>>(
			[this, request]()
			{
			return this->describeApisByBackend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisByIpControlOutcome CloudAPIClient::describeApisByIpControl(const DescribeApisByIpControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisByIpControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisByIpControlOutcome(DescribeApisByIpControlResult(outcome.result()));
	else
		return DescribeApisByIpControlOutcome(outcome.error());
}

void CloudAPIClient::describeApisByIpControlAsync(const DescribeApisByIpControlRequest& request, const DescribeApisByIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApisByIpControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisByIpControlOutcomeCallable CloudAPIClient::describeApisByIpControlCallable(const DescribeApisByIpControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisByIpControlOutcome()>>(
			[this, request]()
			{
			return this->describeApisByIpControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisBySignatureOutcome CloudAPIClient::describeApisBySignature(const DescribeApisBySignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisBySignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisBySignatureOutcome(DescribeApisBySignatureResult(outcome.result()));
	else
		return DescribeApisBySignatureOutcome(outcome.error());
}

void CloudAPIClient::describeApisBySignatureAsync(const DescribeApisBySignatureRequest& request, const DescribeApisBySignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApisBySignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisBySignatureOutcomeCallable CloudAPIClient::describeApisBySignatureCallable(const DescribeApisBySignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisBySignatureOutcome()>>(
			[this, request]()
			{
			return this->describeApisBySignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisByTrafficControlOutcome CloudAPIClient::describeApisByTrafficControl(const DescribeApisByTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisByTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisByTrafficControlOutcome(DescribeApisByTrafficControlResult(outcome.result()));
	else
		return DescribeApisByTrafficControlOutcome(outcome.error());
}

void CloudAPIClient::describeApisByTrafficControlAsync(const DescribeApisByTrafficControlRequest& request, const DescribeApisByTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApisByTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisByTrafficControlOutcomeCallable CloudAPIClient::describeApisByTrafficControlCallable(const DescribeApisByTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisByTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->describeApisByTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeApisWithStageNameIntegratedByAppOutcome CloudAPIClient::describeApisWithStageNameIntegratedByApp(const DescribeApisWithStageNameIntegratedByAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApisWithStageNameIntegratedByAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApisWithStageNameIntegratedByAppOutcome(DescribeApisWithStageNameIntegratedByAppResult(outcome.result()));
	else
		return DescribeApisWithStageNameIntegratedByAppOutcome(outcome.error());
}

void CloudAPIClient::describeApisWithStageNameIntegratedByAppAsync(const DescribeApisWithStageNameIntegratedByAppRequest& request, const DescribeApisWithStageNameIntegratedByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApisWithStageNameIntegratedByApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeApisWithStageNameIntegratedByAppOutcomeCallable CloudAPIClient::describeApisWithStageNameIntegratedByAppCallable(const DescribeApisWithStageNameIntegratedByAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApisWithStageNameIntegratedByAppOutcome()>>(
			[this, request]()
			{
			return this->describeApisWithStageNameIntegratedByApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAppOutcome CloudAPIClient::describeApp(const DescribeAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppOutcome(DescribeAppResult(outcome.result()));
	else
		return DescribeAppOutcome(outcome.error());
}

void CloudAPIClient::describeAppAsync(const DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAppOutcomeCallable CloudAPIClient::describeAppCallable(const DescribeAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppOutcome()>>(
			[this, request]()
			{
			return this->describeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAppAttributesOutcome CloudAPIClient::describeAppAttributes(const DescribeAppAttributesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppAttributesOutcome(DescribeAppAttributesResult(outcome.result()));
	else
		return DescribeAppAttributesOutcome(outcome.error());
}

void CloudAPIClient::describeAppAttributesAsync(const DescribeAppAttributesRequest& request, const DescribeAppAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAppAttributesOutcomeCallable CloudAPIClient::describeAppAttributesCallable(const DescribeAppAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeAppAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAppSecurityOutcome CloudAPIClient::describeAppSecurity(const DescribeAppSecurityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppSecurityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppSecurityOutcome(DescribeAppSecurityResult(outcome.result()));
	else
		return DescribeAppSecurityOutcome(outcome.error());
}

void CloudAPIClient::describeAppSecurityAsync(const DescribeAppSecurityRequest& request, const DescribeAppSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppSecurity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAppSecurityOutcomeCallable CloudAPIClient::describeAppSecurityCallable(const DescribeAppSecurityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppSecurityOutcome()>>(
			[this, request]()
			{
			return this->describeAppSecurity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAppsOutcome CloudAPIClient::describeApps(const DescribeAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppsOutcome(DescribeAppsResult(outcome.result()));
	else
		return DescribeAppsOutcome(outcome.error());
}

void CloudAPIClient::describeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAppsOutcomeCallable CloudAPIClient::describeAppsCallable(const DescribeAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppsOutcome()>>(
			[this, request]()
			{
			return this->describeApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAppsByApiProductOutcome CloudAPIClient::describeAppsByApiProduct(const DescribeAppsByApiProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppsByApiProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppsByApiProductOutcome(DescribeAppsByApiProductResult(outcome.result()));
	else
		return DescribeAppsByApiProductOutcome(outcome.error());
}

void CloudAPIClient::describeAppsByApiProductAsync(const DescribeAppsByApiProductRequest& request, const DescribeAppsByApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppsByApiProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAppsByApiProductOutcomeCallable CloudAPIClient::describeAppsByApiProductCallable(const DescribeAppsByApiProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppsByApiProductOutcome()>>(
			[this, request]()
			{
			return this->describeAppsByApiProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAuthorizedApisOutcome CloudAPIClient::describeAuthorizedApis(const DescribeAuthorizedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuthorizedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuthorizedApisOutcome(DescribeAuthorizedApisResult(outcome.result()));
	else
		return DescribeAuthorizedApisOutcome(outcome.error());
}

void CloudAPIClient::describeAuthorizedApisAsync(const DescribeAuthorizedApisRequest& request, const DescribeAuthorizedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuthorizedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAuthorizedApisOutcomeCallable CloudAPIClient::describeAuthorizedApisCallable(const DescribeAuthorizedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuthorizedApisOutcome()>>(
			[this, request]()
			{
			return this->describeAuthorizedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeAuthorizedAppsOutcome CloudAPIClient::describeAuthorizedApps(const DescribeAuthorizedAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAuthorizedAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAuthorizedAppsOutcome(DescribeAuthorizedAppsResult(outcome.result()));
	else
		return DescribeAuthorizedAppsOutcome(outcome.error());
}

void CloudAPIClient::describeAuthorizedAppsAsync(const DescribeAuthorizedAppsRequest& request, const DescribeAuthorizedAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAuthorizedApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeAuthorizedAppsOutcomeCallable CloudAPIClient::describeAuthorizedAppsCallable(const DescribeAuthorizedAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAuthorizedAppsOutcome()>>(
			[this, request]()
			{
			return this->describeAuthorizedApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeBackendInfoOutcome CloudAPIClient::describeBackendInfo(const DescribeBackendInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackendInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackendInfoOutcome(DescribeBackendInfoResult(outcome.result()));
	else
		return DescribeBackendInfoOutcome(outcome.error());
}

void CloudAPIClient::describeBackendInfoAsync(const DescribeBackendInfoRequest& request, const DescribeBackendInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackendInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeBackendInfoOutcomeCallable CloudAPIClient::describeBackendInfoCallable(const DescribeBackendInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackendInfoOutcome()>>(
			[this, request]()
			{
			return this->describeBackendInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeBackendListOutcome CloudAPIClient::describeBackendList(const DescribeBackendListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackendListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackendListOutcome(DescribeBackendListResult(outcome.result()));
	else
		return DescribeBackendListOutcome(outcome.error());
}

void CloudAPIClient::describeBackendListAsync(const DescribeBackendListRequest& request, const DescribeBackendListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackendList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeBackendListOutcomeCallable CloudAPIClient::describeBackendListCallable(const DescribeBackendListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackendListOutcome()>>(
			[this, request]()
			{
			return this->describeBackendList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDatasetInfoOutcome CloudAPIClient::describeDatasetInfo(const DescribeDatasetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatasetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatasetInfoOutcome(DescribeDatasetInfoResult(outcome.result()));
	else
		return DescribeDatasetInfoOutcome(outcome.error());
}

void CloudAPIClient::describeDatasetInfoAsync(const DescribeDatasetInfoRequest& request, const DescribeDatasetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatasetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDatasetInfoOutcomeCallable CloudAPIClient::describeDatasetInfoCallable(const DescribeDatasetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatasetInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDatasetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDatasetItemInfoOutcome CloudAPIClient::describeDatasetItemInfo(const DescribeDatasetItemInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatasetItemInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatasetItemInfoOutcome(DescribeDatasetItemInfoResult(outcome.result()));
	else
		return DescribeDatasetItemInfoOutcome(outcome.error());
}

void CloudAPIClient::describeDatasetItemInfoAsync(const DescribeDatasetItemInfoRequest& request, const DescribeDatasetItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatasetItemInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDatasetItemInfoOutcomeCallable CloudAPIClient::describeDatasetItemInfoCallable(const DescribeDatasetItemInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatasetItemInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDatasetItemInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDatasetItemListOutcome CloudAPIClient::describeDatasetItemList(const DescribeDatasetItemListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatasetItemListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatasetItemListOutcome(DescribeDatasetItemListResult(outcome.result()));
	else
		return DescribeDatasetItemListOutcome(outcome.error());
}

void CloudAPIClient::describeDatasetItemListAsync(const DescribeDatasetItemListRequest& request, const DescribeDatasetItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatasetItemList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDatasetItemListOutcomeCallable CloudAPIClient::describeDatasetItemListCallable(const DescribeDatasetItemListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatasetItemListOutcome()>>(
			[this, request]()
			{
			return this->describeDatasetItemList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDatasetListOutcome CloudAPIClient::describeDatasetList(const DescribeDatasetListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDatasetListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDatasetListOutcome(DescribeDatasetListResult(outcome.result()));
	else
		return DescribeDatasetListOutcome(outcome.error());
}

void CloudAPIClient::describeDatasetListAsync(const DescribeDatasetListRequest& request, const DescribeDatasetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDatasetList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDatasetListOutcomeCallable CloudAPIClient::describeDatasetListCallable(const DescribeDatasetListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDatasetListOutcome()>>(
			[this, request]()
			{
			return this->describeDatasetList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDeployApiTaskOutcome CloudAPIClient::describeDeployApiTask(const DescribeDeployApiTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeployApiTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeployApiTaskOutcome(DescribeDeployApiTaskResult(outcome.result()));
	else
		return DescribeDeployApiTaskOutcome(outcome.error());
}

void CloudAPIClient::describeDeployApiTaskAsync(const DescribeDeployApiTaskRequest& request, const DescribeDeployApiTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeployApiTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDeployApiTaskOutcomeCallable CloudAPIClient::describeDeployApiTaskCallable(const DescribeDeployApiTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeployApiTaskOutcome()>>(
			[this, request]()
			{
			return this->describeDeployApiTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDeployedApiOutcome CloudAPIClient::describeDeployedApi(const DescribeDeployedApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeployedApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeployedApiOutcome(DescribeDeployedApiResult(outcome.result()));
	else
		return DescribeDeployedApiOutcome(outcome.error());
}

void CloudAPIClient::describeDeployedApiAsync(const DescribeDeployedApiRequest& request, const DescribeDeployedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeployedApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDeployedApiOutcomeCallable CloudAPIClient::describeDeployedApiCallable(const DescribeDeployedApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeployedApiOutcome()>>(
			[this, request]()
			{
			return this->describeDeployedApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDeployedApisOutcome CloudAPIClient::describeDeployedApis(const DescribeDeployedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDeployedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDeployedApisOutcome(DescribeDeployedApisResult(outcome.result()));
	else
		return DescribeDeployedApisOutcome(outcome.error());
}

void CloudAPIClient::describeDeployedApisAsync(const DescribeDeployedApisRequest& request, const DescribeDeployedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDeployedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDeployedApisOutcomeCallable CloudAPIClient::describeDeployedApisCallable(const DescribeDeployedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDeployedApisOutcome()>>(
			[this, request]()
			{
			return this->describeDeployedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeDomainOutcome CloudAPIClient::describeDomain(const DescribeDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainOutcome(DescribeDomainResult(outcome.result()));
	else
		return DescribeDomainOutcome(outcome.error());
}

void CloudAPIClient::describeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeDomainOutcomeCallable CloudAPIClient::describeDomainCallable(const DescribeDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainOutcome()>>(
			[this, request]()
			{
			return this->describeDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeGroupLatencyOutcome CloudAPIClient::describeGroupLatency(const DescribeGroupLatencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupLatencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupLatencyOutcome(DescribeGroupLatencyResult(outcome.result()));
	else
		return DescribeGroupLatencyOutcome(outcome.error());
}

void CloudAPIClient::describeGroupLatencyAsync(const DescribeGroupLatencyRequest& request, const DescribeGroupLatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupLatency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeGroupLatencyOutcomeCallable CloudAPIClient::describeGroupLatencyCallable(const DescribeGroupLatencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupLatencyOutcome()>>(
			[this, request]()
			{
			return this->describeGroupLatency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeGroupQpsOutcome CloudAPIClient::describeGroupQps(const DescribeGroupQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupQpsOutcome(DescribeGroupQpsResult(outcome.result()));
	else
		return DescribeGroupQpsOutcome(outcome.error());
}

void CloudAPIClient::describeGroupQpsAsync(const DescribeGroupQpsRequest& request, const DescribeGroupQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeGroupQpsOutcomeCallable CloudAPIClient::describeGroupQpsCallable(const DescribeGroupQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupQpsOutcome()>>(
			[this, request]()
			{
			return this->describeGroupQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeGroupTrafficOutcome CloudAPIClient::describeGroupTraffic(const DescribeGroupTrafficRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupTrafficOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupTrafficOutcome(DescribeGroupTrafficResult(outcome.result()));
	else
		return DescribeGroupTrafficOutcome(outcome.error());
}

void CloudAPIClient::describeGroupTrafficAsync(const DescribeGroupTrafficRequest& request, const DescribeGroupTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupTraffic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeGroupTrafficOutcomeCallable CloudAPIClient::describeGroupTrafficCallable(const DescribeGroupTrafficRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupTrafficOutcome()>>(
			[this, request]()
			{
			return this->describeGroupTraffic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeHistoryApisOutcome CloudAPIClient::describeHistoryApis(const DescribeHistoryApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistoryApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistoryApisOutcome(DescribeHistoryApisResult(outcome.result()));
	else
		return DescribeHistoryApisOutcome(outcome.error());
}

void CloudAPIClient::describeHistoryApisAsync(const DescribeHistoryApisRequest& request, const DescribeHistoryApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistoryApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeHistoryApisOutcomeCallable CloudAPIClient::describeHistoryApisCallable(const DescribeHistoryApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistoryApisOutcome()>>(
			[this, request]()
			{
			return this->describeHistoryApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeImportOASTaskOutcome CloudAPIClient::describeImportOASTask(const DescribeImportOASTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImportOASTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImportOASTaskOutcome(DescribeImportOASTaskResult(outcome.result()));
	else
		return DescribeImportOASTaskOutcome(outcome.error());
}

void CloudAPIClient::describeImportOASTaskAsync(const DescribeImportOASTaskRequest& request, const DescribeImportOASTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImportOASTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeImportOASTaskOutcomeCallable CloudAPIClient::describeImportOASTaskCallable(const DescribeImportOASTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImportOASTaskOutcome()>>(
			[this, request]()
			{
			return this->describeImportOASTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceDropConnectionsOutcome CloudAPIClient::describeInstanceDropConnections(const DescribeInstanceDropConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceDropConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceDropConnectionsOutcome(DescribeInstanceDropConnectionsResult(outcome.result()));
	else
		return DescribeInstanceDropConnectionsOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceDropConnectionsAsync(const DescribeInstanceDropConnectionsRequest& request, const DescribeInstanceDropConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceDropConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceDropConnectionsOutcomeCallable CloudAPIClient::describeInstanceDropConnectionsCallable(const DescribeInstanceDropConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceDropConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceDropConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceDropPacketOutcome CloudAPIClient::describeInstanceDropPacket(const DescribeInstanceDropPacketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceDropPacketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceDropPacketOutcome(DescribeInstanceDropPacketResult(outcome.result()));
	else
		return DescribeInstanceDropPacketOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceDropPacketAsync(const DescribeInstanceDropPacketRequest& request, const DescribeInstanceDropPacketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceDropPacket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceDropPacketOutcomeCallable CloudAPIClient::describeInstanceDropPacketCallable(const DescribeInstanceDropPacketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceDropPacketOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceDropPacket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceHttpCodeOutcome CloudAPIClient::describeInstanceHttpCode(const DescribeInstanceHttpCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceHttpCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceHttpCodeOutcome(DescribeInstanceHttpCodeResult(outcome.result()));
	else
		return DescribeInstanceHttpCodeOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceHttpCodeAsync(const DescribeInstanceHttpCodeRequest& request, const DescribeInstanceHttpCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceHttpCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceHttpCodeOutcomeCallable CloudAPIClient::describeInstanceHttpCodeCallable(const DescribeInstanceHttpCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceHttpCodeOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceHttpCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceLatencyOutcome CloudAPIClient::describeInstanceLatency(const DescribeInstanceLatencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceLatencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceLatencyOutcome(DescribeInstanceLatencyResult(outcome.result()));
	else
		return DescribeInstanceLatencyOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceLatencyAsync(const DescribeInstanceLatencyRequest& request, const DescribeInstanceLatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceLatency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceLatencyOutcomeCallable CloudAPIClient::describeInstanceLatencyCallable(const DescribeInstanceLatencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceLatencyOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceLatency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceNewConnectionsOutcome CloudAPIClient::describeInstanceNewConnections(const DescribeInstanceNewConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceNewConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceNewConnectionsOutcome(DescribeInstanceNewConnectionsResult(outcome.result()));
	else
		return DescribeInstanceNewConnectionsOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceNewConnectionsAsync(const DescribeInstanceNewConnectionsRequest& request, const DescribeInstanceNewConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceNewConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceNewConnectionsOutcomeCallable CloudAPIClient::describeInstanceNewConnectionsCallable(const DescribeInstanceNewConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceNewConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceNewConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstancePacketsOutcome CloudAPIClient::describeInstancePackets(const DescribeInstancePacketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancePacketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancePacketsOutcome(DescribeInstancePacketsResult(outcome.result()));
	else
		return DescribeInstancePacketsOutcome(outcome.error());
}

void CloudAPIClient::describeInstancePacketsAsync(const DescribeInstancePacketsRequest& request, const DescribeInstancePacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstancePackets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstancePacketsOutcomeCallable CloudAPIClient::describeInstancePacketsCallable(const DescribeInstancePacketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancePacketsOutcome()>>(
			[this, request]()
			{
			return this->describeInstancePackets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceQpsOutcome CloudAPIClient::describeInstanceQps(const DescribeInstanceQpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceQpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceQpsOutcome(DescribeInstanceQpsResult(outcome.result()));
	else
		return DescribeInstanceQpsOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceQpsAsync(const DescribeInstanceQpsRequest& request, const DescribeInstanceQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceQps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceQpsOutcomeCallable CloudAPIClient::describeInstanceQpsCallable(const DescribeInstanceQpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceQpsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceQps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceSlbConnectOutcome CloudAPIClient::describeInstanceSlbConnect(const DescribeInstanceSlbConnectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceSlbConnectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceSlbConnectOutcome(DescribeInstanceSlbConnectResult(outcome.result()));
	else
		return DescribeInstanceSlbConnectOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceSlbConnectAsync(const DescribeInstanceSlbConnectRequest& request, const DescribeInstanceSlbConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceSlbConnect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceSlbConnectOutcomeCallable CloudAPIClient::describeInstanceSlbConnectCallable(const DescribeInstanceSlbConnectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceSlbConnectOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceSlbConnect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstanceTrafficOutcome CloudAPIClient::describeInstanceTraffic(const DescribeInstanceTrafficRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceTrafficOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceTrafficOutcome(DescribeInstanceTrafficResult(outcome.result()));
	else
		return DescribeInstanceTrafficOutcome(outcome.error());
}

void CloudAPIClient::describeInstanceTrafficAsync(const DescribeInstanceTrafficRequest& request, const DescribeInstanceTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceTraffic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstanceTrafficOutcomeCallable CloudAPIClient::describeInstanceTrafficCallable(const DescribeInstanceTrafficRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceTrafficOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceTraffic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeInstancesOutcome CloudAPIClient::describeInstances(const DescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstancesOutcome(DescribeInstancesResult(outcome.result()));
	else
		return DescribeInstancesOutcome(outcome.error());
}

void CloudAPIClient::describeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeInstancesOutcomeCallable CloudAPIClient::describeInstancesCallable(const DescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeIpControlPolicyItemsOutcome CloudAPIClient::describeIpControlPolicyItems(const DescribeIpControlPolicyItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpControlPolicyItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpControlPolicyItemsOutcome(DescribeIpControlPolicyItemsResult(outcome.result()));
	else
		return DescribeIpControlPolicyItemsOutcome(outcome.error());
}

void CloudAPIClient::describeIpControlPolicyItemsAsync(const DescribeIpControlPolicyItemsRequest& request, const DescribeIpControlPolicyItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpControlPolicyItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeIpControlPolicyItemsOutcomeCallable CloudAPIClient::describeIpControlPolicyItemsCallable(const DescribeIpControlPolicyItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpControlPolicyItemsOutcome()>>(
			[this, request]()
			{
			return this->describeIpControlPolicyItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeIpControlsOutcome CloudAPIClient::describeIpControls(const DescribeIpControlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpControlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpControlsOutcome(DescribeIpControlsResult(outcome.result()));
	else
		return DescribeIpControlsOutcome(outcome.error());
}

void CloudAPIClient::describeIpControlsAsync(const DescribeIpControlsRequest& request, const DescribeIpControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpControls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeIpControlsOutcomeCallable CloudAPIClient::describeIpControlsCallable(const DescribeIpControlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpControlsOutcome()>>(
			[this, request]()
			{
			return this->describeIpControls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeLogConfigOutcome CloudAPIClient::describeLogConfig(const DescribeLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogConfigOutcome(DescribeLogConfigResult(outcome.result()));
	else
		return DescribeLogConfigOutcome(outcome.error());
}

void CloudAPIClient::describeLogConfigAsync(const DescribeLogConfigRequest& request, const DescribeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeLogConfigOutcomeCallable CloudAPIClient::describeLogConfigCallable(const DescribeLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeMarketRemainsQuotaOutcome CloudAPIClient::describeMarketRemainsQuota(const DescribeMarketRemainsQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMarketRemainsQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMarketRemainsQuotaOutcome(DescribeMarketRemainsQuotaResult(outcome.result()));
	else
		return DescribeMarketRemainsQuotaOutcome(outcome.error());
}

void CloudAPIClient::describeMarketRemainsQuotaAsync(const DescribeMarketRemainsQuotaRequest& request, const DescribeMarketRemainsQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMarketRemainsQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeMarketRemainsQuotaOutcomeCallable CloudAPIClient::describeMarketRemainsQuotaCallable(const DescribeMarketRemainsQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMarketRemainsQuotaOutcome()>>(
			[this, request]()
			{
			return this->describeMarketRemainsQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeModelsOutcome CloudAPIClient::describeModels(const DescribeModelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModelsOutcome(DescribeModelsResult(outcome.result()));
	else
		return DescribeModelsOutcome(outcome.error());
}

void CloudAPIClient::describeModelsAsync(const DescribeModelsRequest& request, const DescribeModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeModelsOutcomeCallable CloudAPIClient::describeModelsCallable(const DescribeModelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModelsOutcome()>>(
			[this, request]()
			{
			return this->describeModels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePluginApisOutcome CloudAPIClient::describePluginApis(const DescribePluginApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePluginApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePluginApisOutcome(DescribePluginApisResult(outcome.result()));
	else
		return DescribePluginApisOutcome(outcome.error());
}

void CloudAPIClient::describePluginApisAsync(const DescribePluginApisRequest& request, const DescribePluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePluginApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePluginApisOutcomeCallable CloudAPIClient::describePluginApisCallable(const DescribePluginApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePluginApisOutcome()>>(
			[this, request]()
			{
			return this->describePluginApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePluginSchemasOutcome CloudAPIClient::describePluginSchemas(const DescribePluginSchemasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePluginSchemasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePluginSchemasOutcome(DescribePluginSchemasResult(outcome.result()));
	else
		return DescribePluginSchemasOutcome(outcome.error());
}

void CloudAPIClient::describePluginSchemasAsync(const DescribePluginSchemasRequest& request, const DescribePluginSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePluginSchemas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePluginSchemasOutcomeCallable CloudAPIClient::describePluginSchemasCallable(const DescribePluginSchemasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePluginSchemasOutcome()>>(
			[this, request]()
			{
			return this->describePluginSchemas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePluginTemplatesOutcome CloudAPIClient::describePluginTemplates(const DescribePluginTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePluginTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePluginTemplatesOutcome(DescribePluginTemplatesResult(outcome.result()));
	else
		return DescribePluginTemplatesOutcome(outcome.error());
}

void CloudAPIClient::describePluginTemplatesAsync(const DescribePluginTemplatesRequest& request, const DescribePluginTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePluginTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePluginTemplatesOutcomeCallable CloudAPIClient::describePluginTemplatesCallable(const DescribePluginTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePluginTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describePluginTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePluginsOutcome CloudAPIClient::describePlugins(const DescribePluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePluginsOutcome(DescribePluginsResult(outcome.result()));
	else
		return DescribePluginsOutcome(outcome.error());
}

void CloudAPIClient::describePluginsAsync(const DescribePluginsRequest& request, const DescribePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePluginsOutcomeCallable CloudAPIClient::describePluginsCallable(const DescribePluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePluginsOutcome()>>(
			[this, request]()
			{
			return this->describePlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePluginsByApiOutcome CloudAPIClient::describePluginsByApi(const DescribePluginsByApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePluginsByApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePluginsByApiOutcome(DescribePluginsByApiResult(outcome.result()));
	else
		return DescribePluginsByApiOutcome(outcome.error());
}

void CloudAPIClient::describePluginsByApiAsync(const DescribePluginsByApiRequest& request, const DescribePluginsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePluginsByApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePluginsByApiOutcomeCallable CloudAPIClient::describePluginsByApiCallable(const DescribePluginsByApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePluginsByApiOutcome()>>(
			[this, request]()
			{
			return this->describePluginsByApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePurchasedApiGroupOutcome CloudAPIClient::describePurchasedApiGroup(const DescribePurchasedApiGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePurchasedApiGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePurchasedApiGroupOutcome(DescribePurchasedApiGroupResult(outcome.result()));
	else
		return DescribePurchasedApiGroupOutcome(outcome.error());
}

void CloudAPIClient::describePurchasedApiGroupAsync(const DescribePurchasedApiGroupRequest& request, const DescribePurchasedApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePurchasedApiGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePurchasedApiGroupOutcomeCallable CloudAPIClient::describePurchasedApiGroupCallable(const DescribePurchasedApiGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePurchasedApiGroupOutcome()>>(
			[this, request]()
			{
			return this->describePurchasedApiGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePurchasedApiGroupsOutcome CloudAPIClient::describePurchasedApiGroups(const DescribePurchasedApiGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePurchasedApiGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePurchasedApiGroupsOutcome(DescribePurchasedApiGroupsResult(outcome.result()));
	else
		return DescribePurchasedApiGroupsOutcome(outcome.error());
}

void CloudAPIClient::describePurchasedApiGroupsAsync(const DescribePurchasedApiGroupsRequest& request, const DescribePurchasedApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePurchasedApiGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePurchasedApiGroupsOutcomeCallable CloudAPIClient::describePurchasedApiGroupsCallable(const DescribePurchasedApiGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePurchasedApiGroupsOutcome()>>(
			[this, request]()
			{
			return this->describePurchasedApiGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribePurchasedApisOutcome CloudAPIClient::describePurchasedApis(const DescribePurchasedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePurchasedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePurchasedApisOutcome(DescribePurchasedApisResult(outcome.result()));
	else
		return DescribePurchasedApisOutcome(outcome.error());
}

void CloudAPIClient::describePurchasedApisAsync(const DescribePurchasedApisRequest& request, const DescribePurchasedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePurchasedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribePurchasedApisOutcomeCallable CloudAPIClient::describePurchasedApisCallable(const DescribePurchasedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePurchasedApisOutcome()>>(
			[this, request]()
			{
			return this->describePurchasedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeRegionsOutcome CloudAPIClient::describeRegions(const DescribeRegionsRequest &request) const
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

void CloudAPIClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeRegionsOutcomeCallable CloudAPIClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeSignaturesOutcome CloudAPIClient::describeSignatures(const DescribeSignaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignaturesOutcome(DescribeSignaturesResult(outcome.result()));
	else
		return DescribeSignaturesOutcome(outcome.error());
}

void CloudAPIClient::describeSignaturesAsync(const DescribeSignaturesRequest& request, const DescribeSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeSignaturesOutcomeCallable CloudAPIClient::describeSignaturesCallable(const DescribeSignaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignaturesOutcome()>>(
			[this, request]()
			{
			return this->describeSignatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeSignaturesByApiOutcome CloudAPIClient::describeSignaturesByApi(const DescribeSignaturesByApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSignaturesByApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSignaturesByApiOutcome(DescribeSignaturesByApiResult(outcome.result()));
	else
		return DescribeSignaturesByApiOutcome(outcome.error());
}

void CloudAPIClient::describeSignaturesByApiAsync(const DescribeSignaturesByApiRequest& request, const DescribeSignaturesByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSignaturesByApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeSignaturesByApiOutcomeCallable CloudAPIClient::describeSignaturesByApiCallable(const DescribeSignaturesByApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSignaturesByApiOutcome()>>(
			[this, request]()
			{
			return this->describeSignaturesByApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeSummaryDataOutcome CloudAPIClient::describeSummaryData(const DescribeSummaryDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSummaryDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSummaryDataOutcome(DescribeSummaryDataResult(outcome.result()));
	else
		return DescribeSummaryDataOutcome(outcome.error());
}

void CloudAPIClient::describeSummaryDataAsync(const DescribeSummaryDataRequest& request, const DescribeSummaryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSummaryData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeSummaryDataOutcomeCallable CloudAPIClient::describeSummaryDataCallable(const DescribeSummaryDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSummaryDataOutcome()>>(
			[this, request]()
			{
			return this->describeSummaryData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeSystemParametersOutcome CloudAPIClient::describeSystemParameters(const DescribeSystemParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSystemParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSystemParametersOutcome(DescribeSystemParametersResult(outcome.result()));
	else
		return DescribeSystemParametersOutcome(outcome.error());
}

void CloudAPIClient::describeSystemParametersAsync(const DescribeSystemParametersRequest& request, const DescribeSystemParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSystemParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeSystemParametersOutcomeCallable CloudAPIClient::describeSystemParametersCallable(const DescribeSystemParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSystemParametersOutcome()>>(
			[this, request]()
			{
			return this->describeSystemParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeTrafficControlsOutcome CloudAPIClient::describeTrafficControls(const DescribeTrafficControlsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrafficControlsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrafficControlsOutcome(DescribeTrafficControlsResult(outcome.result()));
	else
		return DescribeTrafficControlsOutcome(outcome.error());
}

void CloudAPIClient::describeTrafficControlsAsync(const DescribeTrafficControlsRequest& request, const DescribeTrafficControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTrafficControls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeTrafficControlsOutcomeCallable CloudAPIClient::describeTrafficControlsCallable(const DescribeTrafficControlsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrafficControlsOutcome()>>(
			[this, request]()
			{
			return this->describeTrafficControls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeTrafficControlsByApiOutcome CloudAPIClient::describeTrafficControlsByApi(const DescribeTrafficControlsByApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTrafficControlsByApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTrafficControlsByApiOutcome(DescribeTrafficControlsByApiResult(outcome.result()));
	else
		return DescribeTrafficControlsByApiOutcome(outcome.error());
}

void CloudAPIClient::describeTrafficControlsByApiAsync(const DescribeTrafficControlsByApiRequest& request, const DescribeTrafficControlsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTrafficControlsByApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeTrafficControlsByApiOutcomeCallable CloudAPIClient::describeTrafficControlsByApiCallable(const DescribeTrafficControlsByApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTrafficControlsByApiOutcome()>>(
			[this, request]()
			{
			return this->describeTrafficControlsByApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeUpdateBackendTaskOutcome CloudAPIClient::describeUpdateBackendTask(const DescribeUpdateBackendTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpdateBackendTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpdateBackendTaskOutcome(DescribeUpdateBackendTaskResult(outcome.result()));
	else
		return DescribeUpdateBackendTaskOutcome(outcome.error());
}

void CloudAPIClient::describeUpdateBackendTaskAsync(const DescribeUpdateBackendTaskRequest& request, const DescribeUpdateBackendTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpdateBackendTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeUpdateBackendTaskOutcomeCallable CloudAPIClient::describeUpdateBackendTaskCallable(const DescribeUpdateBackendTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpdateBackendTaskOutcome()>>(
			[this, request]()
			{
			return this->describeUpdateBackendTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeUpdateVpcInfoTaskOutcome CloudAPIClient::describeUpdateVpcInfoTask(const DescribeUpdateVpcInfoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpdateVpcInfoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpdateVpcInfoTaskOutcome(DescribeUpdateVpcInfoTaskResult(outcome.result()));
	else
		return DescribeUpdateVpcInfoTaskOutcome(outcome.error());
}

void CloudAPIClient::describeUpdateVpcInfoTaskAsync(const DescribeUpdateVpcInfoTaskRequest& request, const DescribeUpdateVpcInfoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpdateVpcInfoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeUpdateVpcInfoTaskOutcomeCallable CloudAPIClient::describeUpdateVpcInfoTaskCallable(const DescribeUpdateVpcInfoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpdateVpcInfoTaskOutcome()>>(
			[this, request]()
			{
			return this->describeUpdateVpcInfoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeVpcAccessesOutcome CloudAPIClient::describeVpcAccesses(const DescribeVpcAccessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcAccessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcAccessesOutcome(DescribeVpcAccessesResult(outcome.result()));
	else
		return DescribeVpcAccessesOutcome(outcome.error());
}

void CloudAPIClient::describeVpcAccessesAsync(const DescribeVpcAccessesRequest& request, const DescribeVpcAccessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcAccesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeVpcAccessesOutcomeCallable CloudAPIClient::describeVpcAccessesCallable(const DescribeVpcAccessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcAccessesOutcome()>>(
			[this, request]()
			{
			return this->describeVpcAccesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DescribeZonesOutcome CloudAPIClient::describeZones(const DescribeZonesRequest &request) const
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

void CloudAPIClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DescribeZonesOutcomeCallable CloudAPIClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DetachApiProductOutcome CloudAPIClient::detachApiProduct(const DetachApiProductRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachApiProductOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachApiProductOutcome(DetachApiProductResult(outcome.result()));
	else
		return DetachApiProductOutcome(outcome.error());
}

void CloudAPIClient::detachApiProductAsync(const DetachApiProductRequest& request, const DetachApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachApiProduct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DetachApiProductOutcomeCallable CloudAPIClient::detachApiProductCallable(const DetachApiProductRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachApiProductOutcome()>>(
			[this, request]()
			{
			return this->detachApiProduct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DetachPluginOutcome CloudAPIClient::detachPlugin(const DetachPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DetachPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DetachPluginOutcome(DetachPluginResult(outcome.result()));
	else
		return DetachPluginOutcome(outcome.error());
}

void CloudAPIClient::detachPluginAsync(const DetachPluginRequest& request, const DetachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, detachPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DetachPluginOutcomeCallable CloudAPIClient::detachPluginCallable(const DetachPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DetachPluginOutcome()>>(
			[this, request]()
			{
			return this->detachPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DisableInstanceAccessControlOutcome CloudAPIClient::disableInstanceAccessControl(const DisableInstanceAccessControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableInstanceAccessControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableInstanceAccessControlOutcome(DisableInstanceAccessControlResult(outcome.result()));
	else
		return DisableInstanceAccessControlOutcome(outcome.error());
}

void CloudAPIClient::disableInstanceAccessControlAsync(const DisableInstanceAccessControlRequest& request, const DisableInstanceAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableInstanceAccessControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DisableInstanceAccessControlOutcomeCallable CloudAPIClient::disableInstanceAccessControlCallable(const DisableInstanceAccessControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableInstanceAccessControlOutcome()>>(
			[this, request]()
			{
			return this->disableInstanceAccessControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::DryRunSwaggerOutcome CloudAPIClient::dryRunSwagger(const DryRunSwaggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DryRunSwaggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DryRunSwaggerOutcome(DryRunSwaggerResult(outcome.result()));
	else
		return DryRunSwaggerOutcome(outcome.error());
}

void CloudAPIClient::dryRunSwaggerAsync(const DryRunSwaggerRequest& request, const DryRunSwaggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dryRunSwagger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::DryRunSwaggerOutcomeCallable CloudAPIClient::dryRunSwaggerCallable(const DryRunSwaggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DryRunSwaggerOutcome()>>(
			[this, request]()
			{
			return this->dryRunSwagger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::EnableInstanceAccessControlOutcome CloudAPIClient::enableInstanceAccessControl(const EnableInstanceAccessControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableInstanceAccessControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableInstanceAccessControlOutcome(EnableInstanceAccessControlResult(outcome.result()));
	else
		return EnableInstanceAccessControlOutcome(outcome.error());
}

void CloudAPIClient::enableInstanceAccessControlAsync(const EnableInstanceAccessControlRequest& request, const EnableInstanceAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableInstanceAccessControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::EnableInstanceAccessControlOutcomeCallable CloudAPIClient::enableInstanceAccessControlCallable(const EnableInstanceAccessControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableInstanceAccessControlOutcome()>>(
			[this, request]()
			{
			return this->enableInstanceAccessControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ImportOASOutcome CloudAPIClient::importOAS(const ImportOASRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportOASOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportOASOutcome(ImportOASResult(outcome.result()));
	else
		return ImportOASOutcome(outcome.error());
}

void CloudAPIClient::importOASAsync(const ImportOASRequest& request, const ImportOASAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importOAS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ImportOASOutcomeCallable CloudAPIClient::importOASCallable(const ImportOASRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportOASOutcome()>>(
			[this, request]()
			{
			return this->importOAS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ImportSwaggerOutcome CloudAPIClient::importSwagger(const ImportSwaggerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportSwaggerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportSwaggerOutcome(ImportSwaggerResult(outcome.result()));
	else
		return ImportSwaggerOutcome(outcome.error());
}

void CloudAPIClient::importSwaggerAsync(const ImportSwaggerRequest& request, const ImportSwaggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importSwagger(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ImportSwaggerOutcomeCallable CloudAPIClient::importSwaggerCallable(const ImportSwaggerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportSwaggerOutcome()>>(
			[this, request]()
			{
			return this->importSwagger(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ListTagResourcesOutcome CloudAPIClient::listTagResources(const ListTagResourcesRequest &request) const
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

void CloudAPIClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ListTagResourcesOutcomeCallable CloudAPIClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyApiOutcome CloudAPIClient::modifyApi(const ModifyApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiOutcome(ModifyApiResult(outcome.result()));
	else
		return ModifyApiOutcome(outcome.error());
}

void CloudAPIClient::modifyApiAsync(const ModifyApiRequest& request, const ModifyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyApiOutcomeCallable CloudAPIClient::modifyApiCallable(const ModifyApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiOutcome()>>(
			[this, request]()
			{
			return this->modifyApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyApiConfigurationOutcome CloudAPIClient::modifyApiConfiguration(const ModifyApiConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiConfigurationOutcome(ModifyApiConfigurationResult(outcome.result()));
	else
		return ModifyApiConfigurationOutcome(outcome.error());
}

void CloudAPIClient::modifyApiConfigurationAsync(const ModifyApiConfigurationRequest& request, const ModifyApiConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApiConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyApiConfigurationOutcomeCallable CloudAPIClient::modifyApiConfigurationCallable(const ModifyApiConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiConfigurationOutcome()>>(
			[this, request]()
			{
			return this->modifyApiConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyApiGroupOutcome CloudAPIClient::modifyApiGroup(const ModifyApiGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiGroupOutcome(ModifyApiGroupResult(outcome.result()));
	else
		return ModifyApiGroupOutcome(outcome.error());
}

void CloudAPIClient::modifyApiGroupAsync(const ModifyApiGroupRequest& request, const ModifyApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApiGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyApiGroupOutcomeCallable CloudAPIClient::modifyApiGroupCallable(const ModifyApiGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyApiGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyApiGroupVpcWhitelistOutcome CloudAPIClient::modifyApiGroupVpcWhitelist(const ModifyApiGroupVpcWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiGroupVpcWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiGroupVpcWhitelistOutcome(ModifyApiGroupVpcWhitelistResult(outcome.result()));
	else
		return ModifyApiGroupVpcWhitelistOutcome(outcome.error());
}

void CloudAPIClient::modifyApiGroupVpcWhitelistAsync(const ModifyApiGroupVpcWhitelistRequest& request, const ModifyApiGroupVpcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApiGroupVpcWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyApiGroupVpcWhitelistOutcomeCallable CloudAPIClient::modifyApiGroupVpcWhitelistCallable(const ModifyApiGroupVpcWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiGroupVpcWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyApiGroupVpcWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyAppOutcome CloudAPIClient::modifyApp(const ModifyAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppOutcome(ModifyAppResult(outcome.result()));
	else
		return ModifyAppOutcome(outcome.error());
}

void CloudAPIClient::modifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyAppOutcomeCallable CloudAPIClient::modifyAppCallable(const ModifyAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppOutcome()>>(
			[this, request]()
			{
			return this->modifyApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyBackendOutcome CloudAPIClient::modifyBackend(const ModifyBackendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackendOutcome(ModifyBackendResult(outcome.result()));
	else
		return ModifyBackendOutcome(outcome.error());
}

void CloudAPIClient::modifyBackendAsync(const ModifyBackendRequest& request, const ModifyBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyBackendOutcomeCallable CloudAPIClient::modifyBackendCallable(const ModifyBackendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackendOutcome()>>(
			[this, request]()
			{
			return this->modifyBackend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyBackendModelOutcome CloudAPIClient::modifyBackendModel(const ModifyBackendModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackendModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackendModelOutcome(ModifyBackendModelResult(outcome.result()));
	else
		return ModifyBackendModelOutcome(outcome.error());
}

void CloudAPIClient::modifyBackendModelAsync(const ModifyBackendModelRequest& request, const ModifyBackendModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackendModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyBackendModelOutcomeCallable CloudAPIClient::modifyBackendModelCallable(const ModifyBackendModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackendModelOutcome()>>(
			[this, request]()
			{
			return this->modifyBackendModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyDatasetOutcome CloudAPIClient::modifyDataset(const ModifyDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatasetOutcome(ModifyDatasetResult(outcome.result()));
	else
		return ModifyDatasetOutcome(outcome.error());
}

void CloudAPIClient::modifyDatasetAsync(const ModifyDatasetRequest& request, const ModifyDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyDatasetOutcomeCallable CloudAPIClient::modifyDatasetCallable(const ModifyDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatasetOutcome()>>(
			[this, request]()
			{
			return this->modifyDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyDatasetItemOutcome CloudAPIClient::modifyDatasetItem(const ModifyDatasetItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDatasetItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDatasetItemOutcome(ModifyDatasetItemResult(outcome.result()));
	else
		return ModifyDatasetItemOutcome(outcome.error());
}

void CloudAPIClient::modifyDatasetItemAsync(const ModifyDatasetItemRequest& request, const ModifyDatasetItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDatasetItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyDatasetItemOutcomeCallable CloudAPIClient::modifyDatasetItemCallable(const ModifyDatasetItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDatasetItemOutcome()>>(
			[this, request]()
			{
			return this->modifyDatasetItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyInstanceSpecOutcome CloudAPIClient::modifyInstanceSpec(const ModifyInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceSpecOutcome(ModifyInstanceSpecResult(outcome.result()));
	else
		return ModifyInstanceSpecOutcome(outcome.error());
}

void CloudAPIClient::modifyInstanceSpecAsync(const ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyInstanceSpecOutcomeCallable CloudAPIClient::modifyInstanceSpecCallable(const ModifyInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyIntranetDomainPolicyOutcome CloudAPIClient::modifyIntranetDomainPolicy(const ModifyIntranetDomainPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIntranetDomainPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIntranetDomainPolicyOutcome(ModifyIntranetDomainPolicyResult(outcome.result()));
	else
		return ModifyIntranetDomainPolicyOutcome(outcome.error());
}

void CloudAPIClient::modifyIntranetDomainPolicyAsync(const ModifyIntranetDomainPolicyRequest& request, const ModifyIntranetDomainPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIntranetDomainPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyIntranetDomainPolicyOutcomeCallable CloudAPIClient::modifyIntranetDomainPolicyCallable(const ModifyIntranetDomainPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIntranetDomainPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyIntranetDomainPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyIpControlOutcome CloudAPIClient::modifyIpControl(const ModifyIpControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpControlOutcome(ModifyIpControlResult(outcome.result()));
	else
		return ModifyIpControlOutcome(outcome.error());
}

void CloudAPIClient::modifyIpControlAsync(const ModifyIpControlRequest& request, const ModifyIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyIpControlOutcomeCallable CloudAPIClient::modifyIpControlCallable(const ModifyIpControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpControlOutcome()>>(
			[this, request]()
			{
			return this->modifyIpControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyIpControlPolicyItemOutcome CloudAPIClient::modifyIpControlPolicyItem(const ModifyIpControlPolicyItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpControlPolicyItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpControlPolicyItemOutcome(ModifyIpControlPolicyItemResult(outcome.result()));
	else
		return ModifyIpControlPolicyItemOutcome(outcome.error());
}

void CloudAPIClient::modifyIpControlPolicyItemAsync(const ModifyIpControlPolicyItemRequest& request, const ModifyIpControlPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpControlPolicyItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyIpControlPolicyItemOutcomeCallable CloudAPIClient::modifyIpControlPolicyItemCallable(const ModifyIpControlPolicyItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpControlPolicyItemOutcome()>>(
			[this, request]()
			{
			return this->modifyIpControlPolicyItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyLogConfigOutcome CloudAPIClient::modifyLogConfig(const ModifyLogConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLogConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLogConfigOutcome(ModifyLogConfigResult(outcome.result()));
	else
		return ModifyLogConfigOutcome(outcome.error());
}

void CloudAPIClient::modifyLogConfigAsync(const ModifyLogConfigRequest& request, const ModifyLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyLogConfigOutcomeCallable CloudAPIClient::modifyLogConfigCallable(const ModifyLogConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyLogConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyModelOutcome CloudAPIClient::modifyModel(const ModifyModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyModelOutcome(ModifyModelResult(outcome.result()));
	else
		return ModifyModelOutcome(outcome.error());
}

void CloudAPIClient::modifyModelAsync(const ModifyModelRequest& request, const ModifyModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyModelOutcomeCallable CloudAPIClient::modifyModelCallable(const ModifyModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyModelOutcome()>>(
			[this, request]()
			{
			return this->modifyModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyPluginOutcome CloudAPIClient::modifyPlugin(const ModifyPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPluginOutcome(ModifyPluginResult(outcome.result()));
	else
		return ModifyPluginOutcome(outcome.error());
}

void CloudAPIClient::modifyPluginAsync(const ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyPluginOutcomeCallable CloudAPIClient::modifyPluginCallable(const ModifyPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPluginOutcome()>>(
			[this, request]()
			{
			return this->modifyPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifySignatureOutcome CloudAPIClient::modifySignature(const ModifySignatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySignatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySignatureOutcome(ModifySignatureResult(outcome.result()));
	else
		return ModifySignatureOutcome(outcome.error());
}

void CloudAPIClient::modifySignatureAsync(const ModifySignatureRequest& request, const ModifySignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySignature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifySignatureOutcomeCallable CloudAPIClient::modifySignatureCallable(const ModifySignatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySignatureOutcome()>>(
			[this, request]()
			{
			return this->modifySignature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyTrafficControlOutcome CloudAPIClient::modifyTrafficControl(const ModifyTrafficControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTrafficControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTrafficControlOutcome(ModifyTrafficControlResult(outcome.result()));
	else
		return ModifyTrafficControlOutcome(outcome.error());
}

void CloudAPIClient::modifyTrafficControlAsync(const ModifyTrafficControlRequest& request, const ModifyTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTrafficControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyTrafficControlOutcomeCallable CloudAPIClient::modifyTrafficControlCallable(const ModifyTrafficControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTrafficControlOutcome()>>(
			[this, request]()
			{
			return this->modifyTrafficControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ModifyVpcAccessAndUpdateApisOutcome CloudAPIClient::modifyVpcAccessAndUpdateApis(const ModifyVpcAccessAndUpdateApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpcAccessAndUpdateApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpcAccessAndUpdateApisOutcome(ModifyVpcAccessAndUpdateApisResult(outcome.result()));
	else
		return ModifyVpcAccessAndUpdateApisOutcome(outcome.error());
}

void CloudAPIClient::modifyVpcAccessAndUpdateApisAsync(const ModifyVpcAccessAndUpdateApisRequest& request, const ModifyVpcAccessAndUpdateApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpcAccessAndUpdateApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ModifyVpcAccessAndUpdateApisOutcomeCallable CloudAPIClient::modifyVpcAccessAndUpdateApisCallable(const ModifyVpcAccessAndUpdateApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpcAccessAndUpdateApisOutcome()>>(
			[this, request]()
			{
			return this->modifyVpcAccessAndUpdateApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::OpenApiGatewayServiceOutcome CloudAPIClient::openApiGatewayService(const OpenApiGatewayServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenApiGatewayServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenApiGatewayServiceOutcome(OpenApiGatewayServiceResult(outcome.result()));
	else
		return OpenApiGatewayServiceOutcome(outcome.error());
}

void CloudAPIClient::openApiGatewayServiceAsync(const OpenApiGatewayServiceRequest& request, const OpenApiGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openApiGatewayService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::OpenApiGatewayServiceOutcomeCallable CloudAPIClient::openApiGatewayServiceCallable(const OpenApiGatewayServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenApiGatewayServiceOutcome()>>(
			[this, request]()
			{
			return this->openApiGatewayService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::QueryRequestLogsOutcome CloudAPIClient::queryRequestLogs(const QueryRequestLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRequestLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRequestLogsOutcome(QueryRequestLogsResult(outcome.result()));
	else
		return QueryRequestLogsOutcome(outcome.error());
}

void CloudAPIClient::queryRequestLogsAsync(const QueryRequestLogsRequest& request, const QueryRequestLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRequestLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::QueryRequestLogsOutcomeCallable CloudAPIClient::queryRequestLogsCallable(const QueryRequestLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRequestLogsOutcome()>>(
			[this, request]()
			{
			return this->queryRequestLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ReactivateDomainOutcome CloudAPIClient::reactivateDomain(const ReactivateDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReactivateDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReactivateDomainOutcome(ReactivateDomainResult(outcome.result()));
	else
		return ReactivateDomainOutcome(outcome.error());
}

void CloudAPIClient::reactivateDomainAsync(const ReactivateDomainRequest& request, const ReactivateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reactivateDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ReactivateDomainOutcomeCallable CloudAPIClient::reactivateDomainCallable(const ReactivateDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReactivateDomainOutcome()>>(
			[this, request]()
			{
			return this->reactivateDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveAccessControlListEntryOutcome CloudAPIClient::removeAccessControlListEntry(const RemoveAccessControlListEntryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAccessControlListEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAccessControlListEntryOutcome(RemoveAccessControlListEntryResult(outcome.result()));
	else
		return RemoveAccessControlListEntryOutcome(outcome.error());
}

void CloudAPIClient::removeAccessControlListEntryAsync(const RemoveAccessControlListEntryRequest& request, const RemoveAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeAccessControlListEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveAccessControlListEntryOutcomeCallable CloudAPIClient::removeAccessControlListEntryCallable(const RemoveAccessControlListEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAccessControlListEntryOutcome()>>(
			[this, request]()
			{
			return this->removeAccessControlListEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveApiProductsAuthoritiesOutcome CloudAPIClient::removeApiProductsAuthorities(const RemoveApiProductsAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveApiProductsAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveApiProductsAuthoritiesOutcome(RemoveApiProductsAuthoritiesResult(outcome.result()));
	else
		return RemoveApiProductsAuthoritiesOutcome(outcome.error());
}

void CloudAPIClient::removeApiProductsAuthoritiesAsync(const RemoveApiProductsAuthoritiesRequest& request, const RemoveApiProductsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeApiProductsAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveApiProductsAuthoritiesOutcomeCallable CloudAPIClient::removeApiProductsAuthoritiesCallable(const RemoveApiProductsAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveApiProductsAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->removeApiProductsAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveApisAuthoritiesOutcome CloudAPIClient::removeApisAuthorities(const RemoveApisAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveApisAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveApisAuthoritiesOutcome(RemoveApisAuthoritiesResult(outcome.result()));
	else
		return RemoveApisAuthoritiesOutcome(outcome.error());
}

void CloudAPIClient::removeApisAuthoritiesAsync(const RemoveApisAuthoritiesRequest& request, const RemoveApisAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeApisAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveApisAuthoritiesOutcomeCallable CloudAPIClient::removeApisAuthoritiesCallable(const RemoveApisAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveApisAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->removeApisAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveAppsAuthoritiesOutcome CloudAPIClient::removeAppsAuthorities(const RemoveAppsAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAppsAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAppsAuthoritiesOutcome(RemoveAppsAuthoritiesResult(outcome.result()));
	else
		return RemoveAppsAuthoritiesOutcome(outcome.error());
}

void CloudAPIClient::removeAppsAuthoritiesAsync(const RemoveAppsAuthoritiesRequest& request, const RemoveAppsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeAppsAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveAppsAuthoritiesOutcomeCallable CloudAPIClient::removeAppsAuthoritiesCallable(const RemoveAppsAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAppsAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->removeAppsAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveIpControlApisOutcome CloudAPIClient::removeIpControlApis(const RemoveIpControlApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveIpControlApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveIpControlApisOutcome(RemoveIpControlApisResult(outcome.result()));
	else
		return RemoveIpControlApisOutcome(outcome.error());
}

void CloudAPIClient::removeIpControlApisAsync(const RemoveIpControlApisRequest& request, const RemoveIpControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeIpControlApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveIpControlApisOutcomeCallable CloudAPIClient::removeIpControlApisCallable(const RemoveIpControlApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveIpControlApisOutcome()>>(
			[this, request]()
			{
			return this->removeIpControlApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveIpControlPolicyItemOutcome CloudAPIClient::removeIpControlPolicyItem(const RemoveIpControlPolicyItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveIpControlPolicyItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveIpControlPolicyItemOutcome(RemoveIpControlPolicyItemResult(outcome.result()));
	else
		return RemoveIpControlPolicyItemOutcome(outcome.error());
}

void CloudAPIClient::removeIpControlPolicyItemAsync(const RemoveIpControlPolicyItemRequest& request, const RemoveIpControlPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeIpControlPolicyItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveIpControlPolicyItemOutcomeCallable CloudAPIClient::removeIpControlPolicyItemCallable(const RemoveIpControlPolicyItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveIpControlPolicyItemOutcome()>>(
			[this, request]()
			{
			return this->removeIpControlPolicyItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveSignatureApisOutcome CloudAPIClient::removeSignatureApis(const RemoveSignatureApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSignatureApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSignatureApisOutcome(RemoveSignatureApisResult(outcome.result()));
	else
		return RemoveSignatureApisOutcome(outcome.error());
}

void CloudAPIClient::removeSignatureApisAsync(const RemoveSignatureApisRequest& request, const RemoveSignatureApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSignatureApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveSignatureApisOutcomeCallable CloudAPIClient::removeSignatureApisCallable(const RemoveSignatureApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSignatureApisOutcome()>>(
			[this, request]()
			{
			return this->removeSignatureApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveTrafficControlApisOutcome CloudAPIClient::removeTrafficControlApis(const RemoveTrafficControlApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTrafficControlApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTrafficControlApisOutcome(RemoveTrafficControlApisResult(outcome.result()));
	else
		return RemoveTrafficControlApisOutcome(outcome.error());
}

void CloudAPIClient::removeTrafficControlApisAsync(const RemoveTrafficControlApisRequest& request, const RemoveTrafficControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTrafficControlApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveTrafficControlApisOutcomeCallable CloudAPIClient::removeTrafficControlApisCallable(const RemoveTrafficControlApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTrafficControlApisOutcome()>>(
			[this, request]()
			{
			return this->removeTrafficControlApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveVpcAccessOutcome CloudAPIClient::removeVpcAccess(const RemoveVpcAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveVpcAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveVpcAccessOutcome(RemoveVpcAccessResult(outcome.result()));
	else
		return RemoveVpcAccessOutcome(outcome.error());
}

void CloudAPIClient::removeVpcAccessAsync(const RemoveVpcAccessRequest& request, const RemoveVpcAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeVpcAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveVpcAccessOutcomeCallable CloudAPIClient::removeVpcAccessCallable(const RemoveVpcAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveVpcAccessOutcome()>>(
			[this, request]()
			{
			return this->removeVpcAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::RemoveVpcAccessAndAbolishApisOutcome CloudAPIClient::removeVpcAccessAndAbolishApis(const RemoveVpcAccessAndAbolishApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveVpcAccessAndAbolishApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveVpcAccessAndAbolishApisOutcome(RemoveVpcAccessAndAbolishApisResult(outcome.result()));
	else
		return RemoveVpcAccessAndAbolishApisOutcome(outcome.error());
}

void CloudAPIClient::removeVpcAccessAndAbolishApisAsync(const RemoveVpcAccessAndAbolishApisRequest& request, const RemoveVpcAccessAndAbolishApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeVpcAccessAndAbolishApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::RemoveVpcAccessAndAbolishApisOutcomeCallable CloudAPIClient::removeVpcAccessAndAbolishApisCallable(const RemoveVpcAccessAndAbolishApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveVpcAccessAndAbolishApisOutcome()>>(
			[this, request]()
			{
			return this->removeVpcAccessAndAbolishApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ResetAppCodeOutcome CloudAPIClient::resetAppCode(const ResetAppCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAppCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAppCodeOutcome(ResetAppCodeResult(outcome.result()));
	else
		return ResetAppCodeOutcome(outcome.error());
}

void CloudAPIClient::resetAppCodeAsync(const ResetAppCodeRequest& request, const ResetAppCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAppCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ResetAppCodeOutcomeCallable CloudAPIClient::resetAppCodeCallable(const ResetAppCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAppCodeOutcome()>>(
			[this, request]()
			{
			return this->resetAppCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ResetAppSecretOutcome CloudAPIClient::resetAppSecret(const ResetAppSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAppSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAppSecretOutcome(ResetAppSecretResult(outcome.result()));
	else
		return ResetAppSecretOutcome(outcome.error());
}

void CloudAPIClient::resetAppSecretAsync(const ResetAppSecretRequest& request, const ResetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAppSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ResetAppSecretOutcomeCallable CloudAPIClient::resetAppSecretCallable(const ResetAppSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAppSecretOutcome()>>(
			[this, request]()
			{
			return this->resetAppSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SdkGenerateByAppOutcome CloudAPIClient::sdkGenerateByApp(const SdkGenerateByAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SdkGenerateByAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SdkGenerateByAppOutcome(SdkGenerateByAppResult(outcome.result()));
	else
		return SdkGenerateByAppOutcome(outcome.error());
}

void CloudAPIClient::sdkGenerateByAppAsync(const SdkGenerateByAppRequest& request, const SdkGenerateByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sdkGenerateByApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SdkGenerateByAppOutcomeCallable CloudAPIClient::sdkGenerateByAppCallable(const SdkGenerateByAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SdkGenerateByAppOutcome()>>(
			[this, request]()
			{
			return this->sdkGenerateByApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SdkGenerateByAppForRegionOutcome CloudAPIClient::sdkGenerateByAppForRegion(const SdkGenerateByAppForRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SdkGenerateByAppForRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SdkGenerateByAppForRegionOutcome(SdkGenerateByAppForRegionResult(outcome.result()));
	else
		return SdkGenerateByAppForRegionOutcome(outcome.error());
}

void CloudAPIClient::sdkGenerateByAppForRegionAsync(const SdkGenerateByAppForRegionRequest& request, const SdkGenerateByAppForRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sdkGenerateByAppForRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SdkGenerateByAppForRegionOutcomeCallable CloudAPIClient::sdkGenerateByAppForRegionCallable(const SdkGenerateByAppForRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SdkGenerateByAppForRegionOutcome()>>(
			[this, request]()
			{
			return this->sdkGenerateByAppForRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SdkGenerateByGroupOutcome CloudAPIClient::sdkGenerateByGroup(const SdkGenerateByGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SdkGenerateByGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SdkGenerateByGroupOutcome(SdkGenerateByGroupResult(outcome.result()));
	else
		return SdkGenerateByGroupOutcome(outcome.error());
}

void CloudAPIClient::sdkGenerateByGroupAsync(const SdkGenerateByGroupRequest& request, const SdkGenerateByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sdkGenerateByGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SdkGenerateByGroupOutcomeCallable CloudAPIClient::sdkGenerateByGroupCallable(const SdkGenerateByGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SdkGenerateByGroupOutcome()>>(
			[this, request]()
			{
			return this->sdkGenerateByGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetAccessControlListAttributeOutcome CloudAPIClient::setAccessControlListAttribute(const SetAccessControlListAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAccessControlListAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAccessControlListAttributeOutcome(SetAccessControlListAttributeResult(outcome.result()));
	else
		return SetAccessControlListAttributeOutcome(outcome.error());
}

void CloudAPIClient::setAccessControlListAttributeAsync(const SetAccessControlListAttributeRequest& request, const SetAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAccessControlListAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetAccessControlListAttributeOutcomeCallable CloudAPIClient::setAccessControlListAttributeCallable(const SetAccessControlListAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAccessControlListAttributeOutcome()>>(
			[this, request]()
			{
			return this->setAccessControlListAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetApiProductsAuthoritiesOutcome CloudAPIClient::setApiProductsAuthorities(const SetApiProductsAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetApiProductsAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetApiProductsAuthoritiesOutcome(SetApiProductsAuthoritiesResult(outcome.result()));
	else
		return SetApiProductsAuthoritiesOutcome(outcome.error());
}

void CloudAPIClient::setApiProductsAuthoritiesAsync(const SetApiProductsAuthoritiesRequest& request, const SetApiProductsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setApiProductsAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetApiProductsAuthoritiesOutcomeCallable CloudAPIClient::setApiProductsAuthoritiesCallable(const SetApiProductsAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetApiProductsAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->setApiProductsAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetApisAuthoritiesOutcome CloudAPIClient::setApisAuthorities(const SetApisAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetApisAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetApisAuthoritiesOutcome(SetApisAuthoritiesResult(outcome.result()));
	else
		return SetApisAuthoritiesOutcome(outcome.error());
}

void CloudAPIClient::setApisAuthoritiesAsync(const SetApisAuthoritiesRequest& request, const SetApisAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setApisAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetApisAuthoritiesOutcomeCallable CloudAPIClient::setApisAuthoritiesCallable(const SetApisAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetApisAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->setApisAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetAppsAuthoritiesOutcome CloudAPIClient::setAppsAuthorities(const SetAppsAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAppsAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAppsAuthoritiesOutcome(SetAppsAuthoritiesResult(outcome.result()));
	else
		return SetAppsAuthoritiesOutcome(outcome.error());
}

void CloudAPIClient::setAppsAuthoritiesAsync(const SetAppsAuthoritiesRequest& request, const SetAppsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAppsAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetAppsAuthoritiesOutcomeCallable CloudAPIClient::setAppsAuthoritiesCallable(const SetAppsAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAppsAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->setAppsAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetDomainOutcome CloudAPIClient::setDomain(const SetDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainOutcome(SetDomainResult(outcome.result()));
	else
		return SetDomainOutcome(outcome.error());
}

void CloudAPIClient::setDomainAsync(const SetDomainRequest& request, const SetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetDomainOutcomeCallable CloudAPIClient::setDomainCallable(const SetDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainOutcome()>>(
			[this, request]()
			{
			return this->setDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetDomainCertificateOutcome CloudAPIClient::setDomainCertificate(const SetDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainCertificateOutcome(SetDomainCertificateResult(outcome.result()));
	else
		return SetDomainCertificateOutcome(outcome.error());
}

void CloudAPIClient::setDomainCertificateAsync(const SetDomainCertificateRequest& request, const SetDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetDomainCertificateOutcomeCallable CloudAPIClient::setDomainCertificateCallable(const SetDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetDomainWebSocketStatusOutcome CloudAPIClient::setDomainWebSocketStatus(const SetDomainWebSocketStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDomainWebSocketStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDomainWebSocketStatusOutcome(SetDomainWebSocketStatusResult(outcome.result()));
	else
		return SetDomainWebSocketStatusOutcome(outcome.error());
}

void CloudAPIClient::setDomainWebSocketStatusAsync(const SetDomainWebSocketStatusRequest& request, const SetDomainWebSocketStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDomainWebSocketStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetDomainWebSocketStatusOutcomeCallable CloudAPIClient::setDomainWebSocketStatusCallable(const SetDomainWebSocketStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDomainWebSocketStatusOutcome()>>(
			[this, request]()
			{
			return this->setDomainWebSocketStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetGroupAuthAppCodeOutcome CloudAPIClient::setGroupAuthAppCode(const SetGroupAuthAppCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetGroupAuthAppCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetGroupAuthAppCodeOutcome(SetGroupAuthAppCodeResult(outcome.result()));
	else
		return SetGroupAuthAppCodeOutcome(outcome.error());
}

void CloudAPIClient::setGroupAuthAppCodeAsync(const SetGroupAuthAppCodeRequest& request, const SetGroupAuthAppCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setGroupAuthAppCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetGroupAuthAppCodeOutcomeCallable CloudAPIClient::setGroupAuthAppCodeCallable(const SetGroupAuthAppCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetGroupAuthAppCodeOutcome()>>(
			[this, request]()
			{
			return this->setGroupAuthAppCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetIpControlApisOutcome CloudAPIClient::setIpControlApis(const SetIpControlApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetIpControlApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetIpControlApisOutcome(SetIpControlApisResult(outcome.result()));
	else
		return SetIpControlApisOutcome(outcome.error());
}

void CloudAPIClient::setIpControlApisAsync(const SetIpControlApisRequest& request, const SetIpControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setIpControlApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetIpControlApisOutcomeCallable CloudAPIClient::setIpControlApisCallable(const SetIpControlApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetIpControlApisOutcome()>>(
			[this, request]()
			{
			return this->setIpControlApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetSignatureApisOutcome CloudAPIClient::setSignatureApis(const SetSignatureApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSignatureApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSignatureApisOutcome(SetSignatureApisResult(outcome.result()));
	else
		return SetSignatureApisOutcome(outcome.error());
}

void CloudAPIClient::setSignatureApisAsync(const SetSignatureApisRequest& request, const SetSignatureApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSignatureApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetSignatureApisOutcomeCallable CloudAPIClient::setSignatureApisCallable(const SetSignatureApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSignatureApisOutcome()>>(
			[this, request]()
			{
			return this->setSignatureApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetTrafficControlApisOutcome CloudAPIClient::setTrafficControlApis(const SetTrafficControlApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetTrafficControlApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetTrafficControlApisOutcome(SetTrafficControlApisResult(outcome.result()));
	else
		return SetTrafficControlApisOutcome(outcome.error());
}

void CloudAPIClient::setTrafficControlApisAsync(const SetTrafficControlApisRequest& request, const SetTrafficControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setTrafficControlApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetTrafficControlApisOutcomeCallable CloudAPIClient::setTrafficControlApisCallable(const SetTrafficControlApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetTrafficControlApisOutcome()>>(
			[this, request]()
			{
			return this->setTrafficControlApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetVpcAccessOutcome CloudAPIClient::setVpcAccess(const SetVpcAccessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetVpcAccessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetVpcAccessOutcome(SetVpcAccessResult(outcome.result()));
	else
		return SetVpcAccessOutcome(outcome.error());
}

void CloudAPIClient::setVpcAccessAsync(const SetVpcAccessRequest& request, const SetVpcAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setVpcAccess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetVpcAccessOutcomeCallable CloudAPIClient::setVpcAccessCallable(const SetVpcAccessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetVpcAccessOutcome()>>(
			[this, request]()
			{
			return this->setVpcAccess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SetWildcardDomainPatternsOutcome CloudAPIClient::setWildcardDomainPatterns(const SetWildcardDomainPatternsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetWildcardDomainPatternsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetWildcardDomainPatternsOutcome(SetWildcardDomainPatternsResult(outcome.result()));
	else
		return SetWildcardDomainPatternsOutcome(outcome.error());
}

void CloudAPIClient::setWildcardDomainPatternsAsync(const SetWildcardDomainPatternsRequest& request, const SetWildcardDomainPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setWildcardDomainPatterns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SetWildcardDomainPatternsOutcomeCallable CloudAPIClient::setWildcardDomainPatternsCallable(const SetWildcardDomainPatternsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetWildcardDomainPatternsOutcome()>>(
			[this, request]()
			{
			return this->setWildcardDomainPatterns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::SwitchApiOutcome CloudAPIClient::switchApi(const SwitchApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchApiOutcome(SwitchApiResult(outcome.result()));
	else
		return SwitchApiOutcome(outcome.error());
}

void CloudAPIClient::switchApiAsync(const SwitchApiRequest& request, const SwitchApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::SwitchApiOutcomeCallable CloudAPIClient::switchApiCallable(const SwitchApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchApiOutcome()>>(
			[this, request]()
			{
			return this->switchApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::TagResourcesOutcome CloudAPIClient::tagResources(const TagResourcesRequest &request) const
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

void CloudAPIClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::TagResourcesOutcomeCallable CloudAPIClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::UntagResourcesOutcome CloudAPIClient::untagResources(const UntagResourcesRequest &request) const
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

void CloudAPIClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::UntagResourcesOutcomeCallable CloudAPIClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudAPIClient::ValidateVpcConnectivityOutcome CloudAPIClient::validateVpcConnectivity(const ValidateVpcConnectivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateVpcConnectivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateVpcConnectivityOutcome(ValidateVpcConnectivityResult(outcome.result()));
	else
		return ValidateVpcConnectivityOutcome(outcome.error());
}

void CloudAPIClient::validateVpcConnectivityAsync(const ValidateVpcConnectivityRequest& request, const ValidateVpcConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateVpcConnectivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudAPIClient::ValidateVpcConnectivityOutcomeCallable CloudAPIClient::validateVpcConnectivityCallable(const ValidateVpcConnectivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateVpcConnectivityOutcome()>>(
			[this, request]()
			{
			return this->validateVpcConnectivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

