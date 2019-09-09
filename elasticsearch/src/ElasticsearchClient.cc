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

#include <alibabacloud/elasticsearch/ElasticsearchClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

namespace
{
	const std::string SERVICE_NAME = "elasticsearch";
}

ElasticsearchClient::ElasticsearchClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elasticsearch");
}

ElasticsearchClient::ElasticsearchClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elasticsearch");
}

ElasticsearchClient::ElasticsearchClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "elasticsearch");
}

ElasticsearchClient::~ElasticsearchClient()
{}

ElasticsearchClient::DeactivateZonesOutcome ElasticsearchClient::deactivateZones(const DeactivateZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateZonesOutcome(DeactivateZonesResult(outcome.result()));
	else
		return DeactivateZonesOutcome(outcome.error());
}

void ElasticsearchClient::deactivateZonesAsync(const DeactivateZonesRequest& request, const DeactivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeactivateZonesOutcomeCallable ElasticsearchClient::deactivateZonesCallable(const DeactivateZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateZonesOutcome()>>(
			[this, request]()
			{
			return this->deactivateZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallUserPluginsOutcome ElasticsearchClient::installUserPlugins(const InstallUserPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallUserPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallUserPluginsOutcome(InstallUserPluginsResult(outcome.result()));
	else
		return InstallUserPluginsOutcome(outcome.error());
}

void ElasticsearchClient::installUserPluginsAsync(const InstallUserPluginsRequest& request, const InstallUserPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installUserPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallUserPluginsOutcomeCallable ElasticsearchClient::installUserPluginsCallable(const InstallUserPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallUserPluginsOutcome()>>(
			[this, request]()
			{
			return this->installUserPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListAllNodeOutcome ElasticsearchClient::listAllNode(const ListAllNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllNodeOutcome(ListAllNodeResult(outcome.result()));
	else
		return ListAllNodeOutcome(outcome.error());
}

void ElasticsearchClient::listAllNodeAsync(const ListAllNodeRequest& request, const ListAllNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListAllNodeOutcomeCallable ElasticsearchClient::listAllNodeCallable(const ListAllNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllNodeOutcome()>>(
			[this, request]()
			{
			return this->listAllNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListInstanceOutcome ElasticsearchClient::listInstance(const ListInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceOutcome(ListInstanceResult(outcome.result()));
	else
		return ListInstanceOutcome(outcome.error());
}

void ElasticsearchClient::listInstanceAsync(const ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListInstanceOutcomeCallable ElasticsearchClient::listInstanceCallable(const ListInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceOutcome()>>(
			[this, request]()
			{
			return this->listInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::MoveResourceGroupOutcome ElasticsearchClient::moveResourceGroup(const MoveResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MoveResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MoveResourceGroupOutcome(MoveResourceGroupResult(outcome.result()));
	else
		return MoveResourceGroupOutcome(outcome.error());
}

void ElasticsearchClient::moveResourceGroupAsync(const MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, moveResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::MoveResourceGroupOutcomeCallable ElasticsearchClient::moveResourceGroupCallable(const MoveResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MoveResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->moveResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateInstanceOutcome ElasticsearchClient::createInstance(const CreateInstanceRequest &request) const
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

void ElasticsearchClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateInstanceOutcomeCallable ElasticsearchClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UninstallKibanaPluginOutcome ElasticsearchClient::uninstallKibanaPlugin(const UninstallKibanaPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallKibanaPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallKibanaPluginOutcome(UninstallKibanaPluginResult(outcome.result()));
	else
		return UninstallKibanaPluginOutcome(outcome.error());
}

void ElasticsearchClient::uninstallKibanaPluginAsync(const UninstallKibanaPluginRequest& request, const UninstallKibanaPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallKibanaPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UninstallKibanaPluginOutcomeCallable ElasticsearchClient::uninstallKibanaPluginCallable(const UninstallKibanaPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallKibanaPluginOutcome()>>(
			[this, request]()
			{
			return this->uninstallKibanaPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateInstanceSettingsOutcome ElasticsearchClient::updateInstanceSettings(const UpdateInstanceSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceSettingsOutcome(UpdateInstanceSettingsResult(outcome.result()));
	else
		return UpdateInstanceSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateInstanceSettingsAsync(const UpdateInstanceSettingsRequest& request, const UpdateInstanceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateInstanceSettingsOutcomeCallable ElasticsearchClient::updateInstanceSettingsCallable(const UpdateInstanceSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateAdvancedSettingOutcome ElasticsearchClient::updateAdvancedSetting(const UpdateAdvancedSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAdvancedSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAdvancedSettingOutcome(UpdateAdvancedSettingResult(outcome.result()));
	else
		return UpdateAdvancedSettingOutcome(outcome.error());
}

void ElasticsearchClient::updateAdvancedSettingAsync(const UpdateAdvancedSettingRequest& request, const UpdateAdvancedSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAdvancedSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateAdvancedSettingOutcomeCallable ElasticsearchClient::updateAdvancedSettingCallable(const UpdateAdvancedSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAdvancedSettingOutcome()>>(
			[this, request]()
			{
			return this->updateAdvancedSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateBlackIpsOutcome ElasticsearchClient::updateBlackIps(const UpdateBlackIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBlackIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBlackIpsOutcome(UpdateBlackIpsResult(outcome.result()));
	else
		return UpdateBlackIpsOutcome(outcome.error());
}

void ElasticsearchClient::updateBlackIpsAsync(const UpdateBlackIpsRequest& request, const UpdateBlackIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBlackIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateBlackIpsOutcomeCallable ElasticsearchClient::updateBlackIpsCallable(const UpdateBlackIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBlackIpsOutcome()>>(
			[this, request]()
			{
			return this->updateBlackIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateSynonymsDictsOutcome ElasticsearchClient::updateSynonymsDicts(const UpdateSynonymsDictsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSynonymsDictsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSynonymsDictsOutcome(UpdateSynonymsDictsResult(outcome.result()));
	else
		return UpdateSynonymsDictsOutcome(outcome.error());
}

void ElasticsearchClient::updateSynonymsDictsAsync(const UpdateSynonymsDictsRequest& request, const UpdateSynonymsDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSynonymsDicts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateSynonymsDictsOutcomeCallable ElasticsearchClient::updateSynonymsDictsCallable(const UpdateSynonymsDictsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSynonymsDictsOutcome()>>(
			[this, request]()
			{
			return this->updateSynonymsDicts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetRegionConfigurationOutcome ElasticsearchClient::getRegionConfiguration(const GetRegionConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionConfigurationOutcome(GetRegionConfigurationResult(outcome.result()));
	else
		return GetRegionConfigurationOutcome(outcome.error());
}

void ElasticsearchClient::getRegionConfigurationAsync(const GetRegionConfigurationRequest& request, const GetRegionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetRegionConfigurationOutcomeCallable ElasticsearchClient::getRegionConfigurationCallable(const GetRegionConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionConfigurationOutcome()>>(
			[this, request]()
			{
			return this->getRegionConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateDictOutcome ElasticsearchClient::updateDict(const UpdateDictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDictOutcome(UpdateDictResult(outcome.result()));
	else
		return UpdateDictOutcome(outcome.error());
}

void ElasticsearchClient::updateDictAsync(const UpdateDictRequest& request, const UpdateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateDictOutcomeCallable ElasticsearchClient::updateDictCallable(const UpdateDictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDictOutcome()>>(
			[this, request]()
			{
			return this->updateDict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateKibanaSettingsOutcome ElasticsearchClient::updateKibanaSettings(const UpdateKibanaSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKibanaSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKibanaSettingsOutcome(UpdateKibanaSettingsResult(outcome.result()));
	else
		return UpdateKibanaSettingsOutcome(outcome.error());
}

void ElasticsearchClient::updateKibanaSettingsAsync(const UpdateKibanaSettingsRequest& request, const UpdateKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKibanaSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateKibanaSettingsOutcomeCallable ElasticsearchClient::updateKibanaSettingsCallable(const UpdateKibanaSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKibanaSettingsOutcome()>>(
			[this, request]()
			{
			return this->updateKibanaSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::TriggerNetworkOutcome ElasticsearchClient::triggerNetwork(const TriggerNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TriggerNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TriggerNetworkOutcome(TriggerNetworkResult(outcome.result()));
	else
		return TriggerNetworkOutcome(outcome.error());
}

void ElasticsearchClient::triggerNetworkAsync(const TriggerNetworkRequest& request, const TriggerNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, triggerNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::TriggerNetworkOutcomeCallable ElasticsearchClient::triggerNetworkCallable(const TriggerNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TriggerNetworkOutcome()>>(
			[this, request]()
			{
			return this->triggerNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ValidateShrinkNodesOutcome ElasticsearchClient::validateShrinkNodes(const ValidateShrinkNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateShrinkNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateShrinkNodesOutcome(ValidateShrinkNodesResult(outcome.result()));
	else
		return ValidateShrinkNodesOutcome(outcome.error());
}

void ElasticsearchClient::validateShrinkNodesAsync(const ValidateShrinkNodesRequest& request, const ValidateShrinkNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateShrinkNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ValidateShrinkNodesOutcomeCallable ElasticsearchClient::validateShrinkNodesCallable(const ValidateShrinkNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateShrinkNodesOutcome()>>(
			[this, request]()
			{
			return this->validateShrinkNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ActivateZonesOutcome ElasticsearchClient::activateZones(const ActivateZonesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateZonesOutcome(ActivateZonesResult(outcome.result()));
	else
		return ActivateZonesOutcome(outcome.error());
}

void ElasticsearchClient::activateZonesAsync(const ActivateZonesRequest& request, const ActivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ActivateZonesOutcomeCallable ElasticsearchClient::activateZonesCallable(const ActivateZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateZonesOutcome()>>(
			[this, request]()
			{
			return this->activateZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeKibanaSettingsOutcome ElasticsearchClient::describeKibanaSettings(const DescribeKibanaSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKibanaSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKibanaSettingsOutcome(DescribeKibanaSettingsResult(outcome.result()));
	else
		return DescribeKibanaSettingsOutcome(outcome.error());
}

void ElasticsearchClient::describeKibanaSettingsAsync(const DescribeKibanaSettingsRequest& request, const DescribeKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKibanaSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeKibanaSettingsOutcomeCallable ElasticsearchClient::describeKibanaSettingsCallable(const DescribeKibanaSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKibanaSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeKibanaSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetSuggestShrinkableNodesOutcome ElasticsearchClient::getSuggestShrinkableNodes(const GetSuggestShrinkableNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSuggestShrinkableNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSuggestShrinkableNodesOutcome(GetSuggestShrinkableNodesResult(outcome.result()));
	else
		return GetSuggestShrinkableNodesOutcome(outcome.error());
}

void ElasticsearchClient::getSuggestShrinkableNodesAsync(const GetSuggestShrinkableNodesRequest& request, const GetSuggestShrinkableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSuggestShrinkableNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetSuggestShrinkableNodesOutcomeCallable ElasticsearchClient::getSuggestShrinkableNodesCallable(const GetSuggestShrinkableNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSuggestShrinkableNodesOutcome()>>(
			[this, request]()
			{
			return this->getSuggestShrinkableNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateInstanceOutcome ElasticsearchClient::updateInstance(const UpdateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceOutcome(UpdateInstanceResult(outcome.result()));
	else
		return UpdateInstanceOutcome(outcome.error());
}

void ElasticsearchClient::updateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateInstanceOutcomeCallable ElasticsearchClient::updateInstanceCallable(const UpdateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
			[this, request]()
			{
			return this->updateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::TransferNodeOutcome ElasticsearchClient::transferNode(const TransferNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferNodeOutcome(TransferNodeResult(outcome.result()));
	else
		return TransferNodeOutcome(outcome.error());
}

void ElasticsearchClient::transferNodeAsync(const TransferNodeRequest& request, const TransferNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::TransferNodeOutcomeCallable ElasticsearchClient::transferNodeCallable(const TransferNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferNodeOutcome()>>(
			[this, request]()
			{
			return this->transferNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateAliwsDictOutcome ElasticsearchClient::updateAliwsDict(const UpdateAliwsDictRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAliwsDictOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAliwsDictOutcome(UpdateAliwsDictResult(outcome.result()));
	else
		return UpdateAliwsDictOutcome(outcome.error());
}

void ElasticsearchClient::updateAliwsDictAsync(const UpdateAliwsDictRequest& request, const UpdateAliwsDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAliwsDict(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateAliwsDictOutcomeCallable ElasticsearchClient::updateAliwsDictCallable(const UpdateAliwsDictRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAliwsDictOutcome()>>(
			[this, request]()
			{
			return this->updateAliwsDict(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListPluginsOutcome ElasticsearchClient::listPlugins(const ListPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPluginsOutcome(ListPluginsResult(outcome.result()));
	else
		return ListPluginsOutcome(outcome.error());
}

void ElasticsearchClient::listPluginsAsync(const ListPluginsRequest& request, const ListPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListPluginsOutcomeCallable ElasticsearchClient::listPluginsCallable(const ListPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPluginsOutcome()>>(
			[this, request]()
			{
			return this->listPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallKibanaSystemPluginOutcome ElasticsearchClient::installKibanaSystemPlugin(const InstallKibanaSystemPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallKibanaSystemPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallKibanaSystemPluginOutcome(InstallKibanaSystemPluginResult(outcome.result()));
	else
		return InstallKibanaSystemPluginOutcome(outcome.error());
}

void ElasticsearchClient::installKibanaSystemPluginAsync(const InstallKibanaSystemPluginRequest& request, const InstallKibanaSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installKibanaSystemPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallKibanaSystemPluginOutcomeCallable ElasticsearchClient::installKibanaSystemPluginCallable(const InstallKibanaSystemPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallKibanaSystemPluginOutcome()>>(
			[this, request]()
			{
			return this->installKibanaSystemPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeInstanceOutcome ElasticsearchClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void ElasticsearchClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeInstanceOutcomeCallable ElasticsearchClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteProjectOutcome ElasticsearchClient::deleteProject(const DeleteProjectRequest &request) const
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

void ElasticsearchClient::deleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteProjectOutcomeCallable ElasticsearchClient::deleteProjectCallable(const DeleteProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
			[this, request]()
			{
			return this->deleteProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::InstallSystemPluginOutcome ElasticsearchClient::installSystemPlugin(const InstallSystemPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallSystemPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallSystemPluginOutcome(InstallSystemPluginResult(outcome.result()));
	else
		return InstallSystemPluginOutcome(outcome.error());
}

void ElasticsearchClient::installSystemPluginAsync(const InstallSystemPluginRequest& request, const InstallSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installSystemPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::InstallSystemPluginOutcomeCallable ElasticsearchClient::installSystemPluginCallable(const InstallSystemPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallSystemPluginOutcome()>>(
			[this, request]()
			{
			return this->installSystemPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePublicNetworkOutcome ElasticsearchClient::updatePublicNetwork(const UpdatePublicNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePublicNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePublicNetworkOutcome(UpdatePublicNetworkResult(outcome.result()));
	else
		return UpdatePublicNetworkOutcome(outcome.error());
}

void ElasticsearchClient::updatePublicNetworkAsync(const UpdatePublicNetworkRequest& request, const UpdatePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePublicNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePublicNetworkOutcomeCallable ElasticsearchClient::updatePublicNetworkCallable(const UpdatePublicNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePublicNetworkOutcome()>>(
			[this, request]()
			{
			return this->updatePublicNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ShrinkNodeOutcome ElasticsearchClient::shrinkNode(const ShrinkNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShrinkNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShrinkNodeOutcome(ShrinkNodeResult(outcome.result()));
	else
		return ShrinkNodeOutcome(outcome.error());
}

void ElasticsearchClient::shrinkNodeAsync(const ShrinkNodeRequest& request, const ShrinkNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shrinkNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ShrinkNodeOutcomeCallable ElasticsearchClient::shrinkNodeCallable(const ShrinkNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShrinkNodeOutcome()>>(
			[this, request]()
			{
			return this->shrinkNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateAdminPasswordOutcome ElasticsearchClient::updateAdminPassword(const UpdateAdminPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAdminPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAdminPasswordOutcome(UpdateAdminPasswordResult(outcome.result()));
	else
		return UpdateAdminPasswordOutcome(outcome.error());
}

void ElasticsearchClient::updateAdminPasswordAsync(const UpdateAdminPasswordRequest& request, const UpdateAdminPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAdminPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateAdminPasswordOutcomeCallable ElasticsearchClient::updateAdminPasswordCallable(const UpdateAdminPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAdminPasswordOutcome()>>(
			[this, request]()
			{
			return this->updateAdminPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateKibanaWhiteIpsOutcome ElasticsearchClient::updateKibanaWhiteIps(const UpdateKibanaWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKibanaWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKibanaWhiteIpsOutcome(UpdateKibanaWhiteIpsResult(outcome.result()));
	else
		return UpdateKibanaWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updateKibanaWhiteIpsAsync(const UpdateKibanaWhiteIpsRequest& request, const UpdateKibanaWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKibanaWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateKibanaWhiteIpsOutcomeCallable ElasticsearchClient::updateKibanaWhiteIpsCallable(const UpdateKibanaWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKibanaWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updateKibanaWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CreateProjectOutcome ElasticsearchClient::createProject(const CreateProjectRequest &request) const
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

void ElasticsearchClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CreateProjectOutcomeCallable ElasticsearchClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePublicWhiteIpsOutcome ElasticsearchClient::updatePublicWhiteIps(const UpdatePublicWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePublicWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePublicWhiteIpsOutcome(UpdatePublicWhiteIpsResult(outcome.result()));
	else
		return UpdatePublicWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updatePublicWhiteIpsAsync(const UpdatePublicWhiteIpsRequest& request, const UpdatePublicWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePublicWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePublicWhiteIpsOutcomeCallable ElasticsearchClient::updatePublicWhiteIpsCallable(const UpdatePublicWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePublicWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updatePublicWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateHotIkDictsOutcome ElasticsearchClient::updateHotIkDicts(const UpdateHotIkDictsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHotIkDictsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHotIkDictsOutcome(UpdateHotIkDictsResult(outcome.result()));
	else
		return UpdateHotIkDictsOutcome(outcome.error());
}

void ElasticsearchClient::updateHotIkDictsAsync(const UpdateHotIkDictsRequest& request, const UpdateHotIkDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHotIkDicts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateHotIkDictsOutcomeCallable ElasticsearchClient::updateHotIkDictsCallable(const UpdateHotIkDictsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHotIkDictsOutcome()>>(
			[this, request]()
			{
			return this->updateHotIkDicts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdatePrivateNetworkWhiteIpsOutcome ElasticsearchClient::updatePrivateNetworkWhiteIps(const UpdatePrivateNetworkWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrivateNetworkWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrivateNetworkWhiteIpsOutcome(UpdatePrivateNetworkWhiteIpsResult(outcome.result()));
	else
		return UpdatePrivateNetworkWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updatePrivateNetworkWhiteIpsAsync(const UpdatePrivateNetworkWhiteIpsRequest& request, const UpdatePrivateNetworkWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrivateNetworkWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdatePrivateNetworkWhiteIpsOutcomeCallable ElasticsearchClient::updatePrivateNetworkWhiteIpsCallable(const UpdatePrivateNetworkWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrivateNetworkWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updatePrivateNetworkWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::GetTransferableNodesOutcome ElasticsearchClient::getTransferableNodes(const GetTransferableNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTransferableNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTransferableNodesOutcome(GetTransferableNodesResult(outcome.result()));
	else
		return GetTransferableNodesOutcome(outcome.error());
}

void ElasticsearchClient::getTransferableNodesAsync(const GetTransferableNodesRequest& request, const GetTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTransferableNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::GetTransferableNodesOutcomeCallable ElasticsearchClient::getTransferableNodesCallable(const GetTransferableNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTransferableNodesOutcome()>>(
			[this, request]()
			{
			return this->getTransferableNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RestartInstanceOutcome ElasticsearchClient::restartInstance(const RestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstanceOutcome(RestartInstanceResult(outcome.result()));
	else
		return RestartInstanceOutcome(outcome.error());
}

void ElasticsearchClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RestartInstanceOutcomeCallable ElasticsearchClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListKibanaPluginsOutcome ElasticsearchClient::listKibanaPlugins(const ListKibanaPluginsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKibanaPluginsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKibanaPluginsOutcome(ListKibanaPluginsResult(outcome.result()));
	else
		return ListKibanaPluginsOutcome(outcome.error());
}

void ElasticsearchClient::listKibanaPluginsAsync(const ListKibanaPluginsRequest& request, const ListKibanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKibanaPlugins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListKibanaPluginsOutcomeCallable ElasticsearchClient::listKibanaPluginsCallable(const ListKibanaPluginsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKibanaPluginsOutcome()>>(
			[this, request]()
			{
			return this->listKibanaPlugins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateDescriptionOutcome ElasticsearchClient::updateDescription(const UpdateDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDescriptionOutcome(UpdateDescriptionResult(outcome.result()));
	else
		return UpdateDescriptionOutcome(outcome.error());
}

void ElasticsearchClient::updateDescriptionAsync(const UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateDescriptionOutcomeCallable ElasticsearchClient::updateDescriptionCallable(const UpdateDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateWhiteIpsOutcome ElasticsearchClient::updateWhiteIps(const UpdateWhiteIpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWhiteIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWhiteIpsOutcome(UpdateWhiteIpsResult(outcome.result()));
	else
		return UpdateWhiteIpsOutcome(outcome.error());
}

void ElasticsearchClient::updateWhiteIpsAsync(const UpdateWhiteIpsRequest& request, const UpdateWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWhiteIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateWhiteIpsOutcomeCallable ElasticsearchClient::updateWhiteIpsCallable(const UpdateWhiteIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWhiteIpsOutcome()>>(
			[this, request]()
			{
			return this->updateWhiteIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CancelTaskOutcome ElasticsearchClient::cancelTask(const CancelTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelTaskOutcome(CancelTaskResult(outcome.result()));
	else
		return CancelTaskOutcome(outcome.error());
}

void ElasticsearchClient::cancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CancelTaskOutcomeCallable ElasticsearchClient::cancelTaskCallable(const CancelTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::CloseHttpsOutcome ElasticsearchClient::closeHttps(const CloseHttpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseHttpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseHttpsOutcome(CloseHttpsResult(outcome.result()));
	else
		return CloseHttpsOutcome(outcome.error());
}

void ElasticsearchClient::closeHttpsAsync(const CloseHttpsRequest& request, const CloseHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeHttps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::CloseHttpsOutcomeCallable ElasticsearchClient::closeHttpsCallable(const CloseHttpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseHttpsOutcome()>>(
			[this, request]()
			{
			return this->closeHttps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UpdateSnapshotSettingOutcome ElasticsearchClient::updateSnapshotSetting(const UpdateSnapshotSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSnapshotSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSnapshotSettingOutcome(UpdateSnapshotSettingResult(outcome.result()));
	else
		return UpdateSnapshotSettingOutcome(outcome.error());
}

void ElasticsearchClient::updateSnapshotSettingAsync(const UpdateSnapshotSettingRequest& request, const UpdateSnapshotSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSnapshotSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UpdateSnapshotSettingOutcomeCallable ElasticsearchClient::updateSnapshotSettingCallable(const UpdateSnapshotSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSnapshotSettingOutcome()>>(
			[this, request]()
			{
			return this->updateSnapshotSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::UninstallPluginOutcome ElasticsearchClient::uninstallPlugin(const UninstallPluginRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallPluginOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallPluginOutcome(UninstallPluginResult(outcome.result()));
	else
		return UninstallPluginOutcome(outcome.error());
}

void ElasticsearchClient::uninstallPluginAsync(const UninstallPluginRequest& request, const UninstallPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallPlugin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::UninstallPluginOutcomeCallable ElasticsearchClient::uninstallPluginCallable(const UninstallPluginRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallPluginOutcome()>>(
			[this, request]()
			{
			return this->uninstallPlugin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ListSearchLogOutcome ElasticsearchClient::listSearchLog(const ListSearchLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSearchLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSearchLogOutcome(ListSearchLogResult(outcome.result()));
	else
		return ListSearchLogOutcome(outcome.error());
}

void ElasticsearchClient::listSearchLogAsync(const ListSearchLogRequest& request, const ListSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSearchLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ListSearchLogOutcomeCallable ElasticsearchClient::listSearchLogCallable(const ListSearchLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSearchLogOutcome()>>(
			[this, request]()
			{
			return this->listSearchLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::ValidateTransferableNodesOutcome ElasticsearchClient::validateTransferableNodes(const ValidateTransferableNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateTransferableNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateTransferableNodesOutcome(ValidateTransferableNodesResult(outcome.result()));
	else
		return ValidateTransferableNodesOutcome(outcome.error());
}

void ElasticsearchClient::validateTransferableNodesAsync(const ValidateTransferableNodesRequest& request, const ValidateTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateTransferableNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::ValidateTransferableNodesOutcomeCallable ElasticsearchClient::validateTransferableNodesCallable(const ValidateTransferableNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateTransferableNodesOutcome()>>(
			[this, request]()
			{
			return this->validateTransferableNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DescribeElasticsearchHealthOutcome ElasticsearchClient::describeElasticsearchHealth(const DescribeElasticsearchHealthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeElasticsearchHealthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeElasticsearchHealthOutcome(DescribeElasticsearchHealthResult(outcome.result()));
	else
		return DescribeElasticsearchHealthOutcome(outcome.error());
}

void ElasticsearchClient::describeElasticsearchHealthAsync(const DescribeElasticsearchHealthRequest& request, const DescribeElasticsearchHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeElasticsearchHealth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DescribeElasticsearchHealthOutcomeCallable ElasticsearchClient::describeElasticsearchHealthCallable(const DescribeElasticsearchHealthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeElasticsearchHealthOutcome()>>(
			[this, request]()
			{
			return this->describeElasticsearchHealth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::RollbackInstanceOutcome ElasticsearchClient::rollbackInstance(const RollbackInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackInstanceOutcome(RollbackInstanceResult(outcome.result()));
	else
		return RollbackInstanceOutcome(outcome.error());
}

void ElasticsearchClient::rollbackInstanceAsync(const RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::RollbackInstanceOutcomeCallable ElasticsearchClient::rollbackInstanceCallable(const RollbackInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackInstanceOutcome()>>(
			[this, request]()
			{
			return this->rollbackInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::OpenHttpsOutcome ElasticsearchClient::openHttps(const OpenHttpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenHttpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenHttpsOutcome(OpenHttpsResult(outcome.result()));
	else
		return OpenHttpsOutcome(outcome.error());
}

void ElasticsearchClient::openHttpsAsync(const OpenHttpsRequest& request, const OpenHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openHttps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::OpenHttpsOutcomeCallable ElasticsearchClient::openHttpsCallable(const OpenHttpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenHttpsOutcome()>>(
			[this, request]()
			{
			return this->openHttps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ElasticsearchClient::DeleteInstanceOutcome ElasticsearchClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void ElasticsearchClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ElasticsearchClient::DeleteInstanceOutcomeCallable ElasticsearchClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

