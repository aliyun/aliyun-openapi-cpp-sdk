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

#include <alibabacloud/arms/ARMSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

namespace
{
	const std::string SERVICE_NAME = "ARMS";
}

ARMSClient::ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms");
}

ARMSClient::ARMSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms");
}

ARMSClient::ARMSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "arms");
}

ARMSClient::~ARMSClient()
{}

ARMSClient::AddAliClusterIdsToPrometheusGlobalViewOutcome ARMSClient::addAliClusterIdsToPrometheusGlobalView(const AddAliClusterIdsToPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAliClusterIdsToPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAliClusterIdsToPrometheusGlobalViewOutcome(AddAliClusterIdsToPrometheusGlobalViewResult(outcome.result()));
	else
		return AddAliClusterIdsToPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::addAliClusterIdsToPrometheusGlobalViewAsync(const AddAliClusterIdsToPrometheusGlobalViewRequest& request, const AddAliClusterIdsToPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAliClusterIdsToPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddAliClusterIdsToPrometheusGlobalViewOutcomeCallable ARMSClient::addAliClusterIdsToPrometheusGlobalViewCallable(const AddAliClusterIdsToPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAliClusterIdsToPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->addAliClusterIdsToPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddGrafanaOutcome ARMSClient::addGrafana(const AddGrafanaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGrafanaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGrafanaOutcome(AddGrafanaResult(outcome.result()));
	else
		return AddGrafanaOutcome(outcome.error());
}

void ARMSClient::addGrafanaAsync(const AddGrafanaRequest& request, const AddGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGrafana(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddGrafanaOutcomeCallable ARMSClient::addGrafanaCallable(const AddGrafanaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGrafanaOutcome()>>(
			[this, request]()
			{
			return this->addGrafana(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddIntegrationOutcome ARMSClient::addIntegration(const AddIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddIntegrationOutcome(AddIntegrationResult(outcome.result()));
	else
		return AddIntegrationOutcome(outcome.error());
}

void ARMSClient::addIntegrationAsync(const AddIntegrationRequest& request, const AddIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddIntegrationOutcomeCallable ARMSClient::addIntegrationCallable(const AddIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddIntegrationOutcome()>>(
			[this, request]()
			{
			return this->addIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddPrometheusGlobalViewOutcome ARMSClient::addPrometheusGlobalView(const AddPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPrometheusGlobalViewOutcome(AddPrometheusGlobalViewResult(outcome.result()));
	else
		return AddPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::addPrometheusGlobalViewAsync(const AddPrometheusGlobalViewRequest& request, const AddPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddPrometheusGlobalViewOutcomeCallable ARMSClient::addPrometheusGlobalViewCallable(const AddPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->addPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddPrometheusGlobalViewByAliClusterIdsOutcome ARMSClient::addPrometheusGlobalViewByAliClusterIds(const AddPrometheusGlobalViewByAliClusterIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPrometheusGlobalViewByAliClusterIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPrometheusGlobalViewByAliClusterIdsOutcome(AddPrometheusGlobalViewByAliClusterIdsResult(outcome.result()));
	else
		return AddPrometheusGlobalViewByAliClusterIdsOutcome(outcome.error());
}

void ARMSClient::addPrometheusGlobalViewByAliClusterIdsAsync(const AddPrometheusGlobalViewByAliClusterIdsRequest& request, const AddPrometheusGlobalViewByAliClusterIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPrometheusGlobalViewByAliClusterIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddPrometheusGlobalViewByAliClusterIdsOutcomeCallable ARMSClient::addPrometheusGlobalViewByAliClusterIdsCallable(const AddPrometheusGlobalViewByAliClusterIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPrometheusGlobalViewByAliClusterIdsOutcome()>>(
			[this, request]()
			{
			return this->addPrometheusGlobalViewByAliClusterIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddPrometheusInstanceOutcome ARMSClient::addPrometheusInstance(const AddPrometheusInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPrometheusInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPrometheusInstanceOutcome(AddPrometheusInstanceResult(outcome.result()));
	else
		return AddPrometheusInstanceOutcome(outcome.error());
}

void ARMSClient::addPrometheusInstanceAsync(const AddPrometheusInstanceRequest& request, const AddPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPrometheusInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddPrometheusInstanceOutcomeCallable ARMSClient::addPrometheusInstanceCallable(const AddPrometheusInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPrometheusInstanceOutcome()>>(
			[this, request]()
			{
			return this->addPrometheusInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddPrometheusIntegrationOutcome ARMSClient::addPrometheusIntegration(const AddPrometheusIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPrometheusIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPrometheusIntegrationOutcome(AddPrometheusIntegrationResult(outcome.result()));
	else
		return AddPrometheusIntegrationOutcome(outcome.error());
}

void ARMSClient::addPrometheusIntegrationAsync(const AddPrometheusIntegrationRequest& request, const AddPrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPrometheusIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddPrometheusIntegrationOutcomeCallable ARMSClient::addPrometheusIntegrationCallable(const AddPrometheusIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPrometheusIntegrationOutcome()>>(
			[this, request]()
			{
			return this->addPrometheusIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddRecordingRuleOutcome ARMSClient::addRecordingRule(const AddRecordingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRecordingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRecordingRuleOutcome(AddRecordingRuleResult(outcome.result()));
	else
		return AddRecordingRuleOutcome(outcome.error());
}

void ARMSClient::addRecordingRuleAsync(const AddRecordingRuleRequest& request, const AddRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRecordingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddRecordingRuleOutcomeCallable ARMSClient::addRecordingRuleCallable(const AddRecordingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRecordingRuleOutcome()>>(
			[this, request]()
			{
			return this->addRecordingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AddTagToFlinkClusterOutcome ARMSClient::addTagToFlinkCluster(const AddTagToFlinkClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagToFlinkClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagToFlinkClusterOutcome(AddTagToFlinkClusterResult(outcome.result()));
	else
		return AddTagToFlinkClusterOutcome(outcome.error());
}

void ARMSClient::addTagToFlinkClusterAsync(const AddTagToFlinkClusterRequest& request, const AddTagToFlinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagToFlinkCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AddTagToFlinkClusterOutcomeCallable ARMSClient::addTagToFlinkClusterCallable(const AddTagToFlinkClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagToFlinkClusterOutcome()>>(
			[this, request]()
			{
			return this->addTagToFlinkCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::AppendInstancesToPrometheusGlobalViewOutcome ARMSClient::appendInstancesToPrometheusGlobalView(const AppendInstancesToPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AppendInstancesToPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AppendInstancesToPrometheusGlobalViewOutcome(AppendInstancesToPrometheusGlobalViewResult(outcome.result()));
	else
		return AppendInstancesToPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::appendInstancesToPrometheusGlobalViewAsync(const AppendInstancesToPrometheusGlobalViewRequest& request, const AppendInstancesToPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, appendInstancesToPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::AppendInstancesToPrometheusGlobalViewOutcomeCallable ARMSClient::appendInstancesToPrometheusGlobalViewCallable(const AppendInstancesToPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AppendInstancesToPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->appendInstancesToPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ApplyScenarioOutcome ARMSClient::applyScenario(const ApplyScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyScenarioOutcome(ApplyScenarioResult(outcome.result()));
	else
		return ApplyScenarioOutcome(outcome.error());
}

void ARMSClient::applyScenarioAsync(const ApplyScenarioRequest& request, const ApplyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ApplyScenarioOutcomeCallable ARMSClient::applyScenarioCallable(const ApplyScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyScenarioOutcome()>>(
			[this, request]()
			{
			return this->applyScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::BindPrometheusGrafanaInstanceOutcome ARMSClient::bindPrometheusGrafanaInstance(const BindPrometheusGrafanaInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindPrometheusGrafanaInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindPrometheusGrafanaInstanceOutcome(BindPrometheusGrafanaInstanceResult(outcome.result()));
	else
		return BindPrometheusGrafanaInstanceOutcome(outcome.error());
}

void ARMSClient::bindPrometheusGrafanaInstanceAsync(const BindPrometheusGrafanaInstanceRequest& request, const BindPrometheusGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindPrometheusGrafanaInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::BindPrometheusGrafanaInstanceOutcomeCallable ARMSClient::bindPrometheusGrafanaInstanceCallable(const BindPrometheusGrafanaInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindPrometheusGrafanaInstanceOutcome()>>(
			[this, request]()
			{
			return this->bindPrometheusGrafanaInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::BlockAlarmNotificationOutcome ARMSClient::blockAlarmNotification(const BlockAlarmNotificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BlockAlarmNotificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BlockAlarmNotificationOutcome(BlockAlarmNotificationResult(outcome.result()));
	else
		return BlockAlarmNotificationOutcome(outcome.error());
}

void ARMSClient::blockAlarmNotificationAsync(const BlockAlarmNotificationRequest& request, const BlockAlarmNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, blockAlarmNotification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::BlockAlarmNotificationOutcomeCallable ARMSClient::blockAlarmNotificationCallable(const BlockAlarmNotificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BlockAlarmNotificationOutcome()>>(
			[this, request]()
			{
			return this->blockAlarmNotification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ChangeAlarmSeverityOutcome ARMSClient::changeAlarmSeverity(const ChangeAlarmSeverityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeAlarmSeverityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeAlarmSeverityOutcome(ChangeAlarmSeverityResult(outcome.result()));
	else
		return ChangeAlarmSeverityOutcome(outcome.error());
}

void ARMSClient::changeAlarmSeverityAsync(const ChangeAlarmSeverityRequest& request, const ChangeAlarmSeverityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeAlarmSeverity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ChangeAlarmSeverityOutcomeCallable ARMSClient::changeAlarmSeverityCallable(const ChangeAlarmSeverityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeAlarmSeverityOutcome()>>(
			[this, request]()
			{
			return this->changeAlarmSeverity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ChangeResourceGroupOutcome ARMSClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void ARMSClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ChangeResourceGroupOutcomeCallable ARMSClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CheckCommercialStatusOutcome ARMSClient::checkCommercialStatus(const CheckCommercialStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCommercialStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCommercialStatusOutcome(CheckCommercialStatusResult(outcome.result()));
	else
		return CheckCommercialStatusOutcome(outcome.error());
}

void ARMSClient::checkCommercialStatusAsync(const CheckCommercialStatusRequest& request, const CheckCommercialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCommercialStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CheckCommercialStatusOutcomeCallable ARMSClient::checkCommercialStatusCallable(const CheckCommercialStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCommercialStatusOutcome()>>(
			[this, request]()
			{
			return this->checkCommercialStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CheckServiceStatusOutcome ARMSClient::checkServiceStatus(const CheckServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceStatusOutcome(CheckServiceStatusResult(outcome.result()));
	else
		return CheckServiceStatusOutcome(outcome.error());
}

void ARMSClient::checkServiceStatusAsync(const CheckServiceStatusRequest& request, const CheckServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CheckServiceStatusOutcomeCallable ARMSClient::checkServiceStatusCallable(const CheckServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->checkServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ClaimAlarmOutcome ARMSClient::claimAlarm(const ClaimAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClaimAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClaimAlarmOutcome(ClaimAlarmResult(outcome.result()));
	else
		return ClaimAlarmOutcome(outcome.error());
}

void ARMSClient::claimAlarmAsync(const ClaimAlarmRequest& request, const ClaimAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, claimAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ClaimAlarmOutcomeCallable ARMSClient::claimAlarmCallable(const ClaimAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClaimAlarmOutcome()>>(
			[this, request]()
			{
			return this->claimAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CloseAlarmOutcome ARMSClient::closeAlarm(const CloseAlarmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseAlarmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseAlarmOutcome(CloseAlarmResult(outcome.result()));
	else
		return CloseAlarmOutcome(outcome.error());
}

void ARMSClient::closeAlarmAsync(const CloseAlarmRequest& request, const CloseAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeAlarm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CloseAlarmOutcomeCallable ARMSClient::closeAlarmCallable(const CloseAlarmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseAlarmOutcome()>>(
			[this, request]()
			{
			return this->closeAlarm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ConfigAppOutcome ARMSClient::configApp(const ConfigAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigAppOutcome(ConfigAppResult(outcome.result()));
	else
		return ConfigAppOutcome(outcome.error());
}

void ARMSClient::configAppAsync(const ConfigAppRequest& request, const ConfigAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ConfigAppOutcomeCallable ARMSClient::configAppCallable(const ConfigAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigAppOutcome()>>(
			[this, request]()
			{
			return this->configApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateAlertContactOutcome ARMSClient::createAlertContact(const CreateAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertContactOutcome(CreateAlertContactResult(outcome.result()));
	else
		return CreateAlertContactOutcome(outcome.error());
}

void ARMSClient::createAlertContactAsync(const CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateAlertContactOutcomeCallable ARMSClient::createAlertContactCallable(const CreateAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertContactOutcome()>>(
			[this, request]()
			{
			return this->createAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateAlertContactGroupOutcome ARMSClient::createAlertContactGroup(const CreateAlertContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAlertContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAlertContactGroupOutcome(CreateAlertContactGroupResult(outcome.result()));
	else
		return CreateAlertContactGroupOutcome(outcome.error());
}

void ARMSClient::createAlertContactGroupAsync(const CreateAlertContactGroupRequest& request, const CreateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlertContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateAlertContactGroupOutcomeCallable ARMSClient::createAlertContactGroupCallable(const CreateAlertContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAlertContactGroupOutcome()>>(
			[this, request]()
			{
			return this->createAlertContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateDispatchRuleOutcome ARMSClient::createDispatchRule(const CreateDispatchRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDispatchRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDispatchRuleOutcome(CreateDispatchRuleResult(outcome.result()));
	else
		return CreateDispatchRuleOutcome(outcome.error());
}

void ARMSClient::createDispatchRuleAsync(const CreateDispatchRuleRequest& request, const CreateDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDispatchRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateDispatchRuleOutcomeCallable ARMSClient::createDispatchRuleCallable(const CreateDispatchRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDispatchRuleOutcome()>>(
			[this, request]()
			{
			return this->createDispatchRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateEnvCustomJobOutcome ARMSClient::createEnvCustomJob(const CreateEnvCustomJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvCustomJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvCustomJobOutcome(CreateEnvCustomJobResult(outcome.result()));
	else
		return CreateEnvCustomJobOutcome(outcome.error());
}

void ARMSClient::createEnvCustomJobAsync(const CreateEnvCustomJobRequest& request, const CreateEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvCustomJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateEnvCustomJobOutcomeCallable ARMSClient::createEnvCustomJobCallable(const CreateEnvCustomJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvCustomJobOutcome()>>(
			[this, request]()
			{
			return this->createEnvCustomJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateEnvPodMonitorOutcome ARMSClient::createEnvPodMonitor(const CreateEnvPodMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvPodMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvPodMonitorOutcome(CreateEnvPodMonitorResult(outcome.result()));
	else
		return CreateEnvPodMonitorOutcome(outcome.error());
}

void ARMSClient::createEnvPodMonitorAsync(const CreateEnvPodMonitorRequest& request, const CreateEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvPodMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateEnvPodMonitorOutcomeCallable ARMSClient::createEnvPodMonitorCallable(const CreateEnvPodMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvPodMonitorOutcome()>>(
			[this, request]()
			{
			return this->createEnvPodMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateEnvServiceMonitorOutcome ARMSClient::createEnvServiceMonitor(const CreateEnvServiceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvServiceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvServiceMonitorOutcome(CreateEnvServiceMonitorResult(outcome.result()));
	else
		return CreateEnvServiceMonitorOutcome(outcome.error());
}

void ARMSClient::createEnvServiceMonitorAsync(const CreateEnvServiceMonitorRequest& request, const CreateEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvServiceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateEnvServiceMonitorOutcomeCallable ARMSClient::createEnvServiceMonitorCallable(const CreateEnvServiceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvServiceMonitorOutcome()>>(
			[this, request]()
			{
			return this->createEnvServiceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateEnvironmentOutcome ARMSClient::createEnvironment(const CreateEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEnvironmentOutcome(CreateEnvironmentResult(outcome.result()));
	else
		return CreateEnvironmentOutcome(outcome.error());
}

void ARMSClient::createEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateEnvironmentOutcomeCallable ARMSClient::createEnvironmentCallable(const CreateEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->createEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateGrafanaWorkspaceOutcome ARMSClient::createGrafanaWorkspace(const CreateGrafanaWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGrafanaWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGrafanaWorkspaceOutcome(CreateGrafanaWorkspaceResult(outcome.result()));
	else
		return CreateGrafanaWorkspaceOutcome(outcome.error());
}

void ARMSClient::createGrafanaWorkspaceAsync(const CreateGrafanaWorkspaceRequest& request, const CreateGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGrafanaWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateGrafanaWorkspaceOutcomeCallable ARMSClient::createGrafanaWorkspaceCallable(const CreateGrafanaWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGrafanaWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->createGrafanaWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateIntegrationOutcome ARMSClient::createIntegration(const CreateIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIntegrationOutcome(CreateIntegrationResult(outcome.result()));
	else
		return CreateIntegrationOutcome(outcome.error());
}

void ARMSClient::createIntegrationAsync(const CreateIntegrationRequest& request, const CreateIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateIntegrationOutcomeCallable ARMSClient::createIntegrationCallable(const CreateIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIntegrationOutcome()>>(
			[this, request]()
			{
			return this->createIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateAlertRuleOutcome ARMSClient::createOrUpdateAlertRule(const CreateOrUpdateAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateAlertRuleOutcome(CreateOrUpdateAlertRuleResult(outcome.result()));
	else
		return CreateOrUpdateAlertRuleOutcome(outcome.error());
}

void ARMSClient::createOrUpdateAlertRuleAsync(const CreateOrUpdateAlertRuleRequest& request, const CreateOrUpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateAlertRuleOutcomeCallable ARMSClient::createOrUpdateAlertRuleCallable(const CreateOrUpdateAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateContactOutcome ARMSClient::createOrUpdateContact(const CreateOrUpdateContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateContactOutcome(CreateOrUpdateContactResult(outcome.result()));
	else
		return CreateOrUpdateContactOutcome(outcome.error());
}

void ARMSClient::createOrUpdateContactAsync(const CreateOrUpdateContactRequest& request, const CreateOrUpdateContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateContactOutcomeCallable ARMSClient::createOrUpdateContactCallable(const CreateOrUpdateContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateContactOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateContactGroupOutcome ARMSClient::createOrUpdateContactGroup(const CreateOrUpdateContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateContactGroupOutcome(CreateOrUpdateContactGroupResult(outcome.result()));
	else
		return CreateOrUpdateContactGroupOutcome(outcome.error());
}

void ARMSClient::createOrUpdateContactGroupAsync(const CreateOrUpdateContactGroupRequest& request, const CreateOrUpdateContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateContactGroupOutcomeCallable ARMSClient::createOrUpdateContactGroupCallable(const CreateOrUpdateContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateContactGroupOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateEventBridgeIntegrationOutcome ARMSClient::createOrUpdateEventBridgeIntegration(const CreateOrUpdateEventBridgeIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateEventBridgeIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateEventBridgeIntegrationOutcome(CreateOrUpdateEventBridgeIntegrationResult(outcome.result()));
	else
		return CreateOrUpdateEventBridgeIntegrationOutcome(outcome.error());
}

void ARMSClient::createOrUpdateEventBridgeIntegrationAsync(const CreateOrUpdateEventBridgeIntegrationRequest& request, const CreateOrUpdateEventBridgeIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateEventBridgeIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateEventBridgeIntegrationOutcomeCallable ARMSClient::createOrUpdateEventBridgeIntegrationCallable(const CreateOrUpdateEventBridgeIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateEventBridgeIntegrationOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateEventBridgeIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateIMRobotOutcome ARMSClient::createOrUpdateIMRobot(const CreateOrUpdateIMRobotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateIMRobotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateIMRobotOutcome(CreateOrUpdateIMRobotResult(outcome.result()));
	else
		return CreateOrUpdateIMRobotOutcome(outcome.error());
}

void ARMSClient::createOrUpdateIMRobotAsync(const CreateOrUpdateIMRobotRequest& request, const CreateOrUpdateIMRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateIMRobot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateIMRobotOutcomeCallable ARMSClient::createOrUpdateIMRobotCallable(const CreateOrUpdateIMRobotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateIMRobotOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateIMRobot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateNotificationPolicyOutcome ARMSClient::createOrUpdateNotificationPolicy(const CreateOrUpdateNotificationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateNotificationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateNotificationPolicyOutcome(CreateOrUpdateNotificationPolicyResult(outcome.result()));
	else
		return CreateOrUpdateNotificationPolicyOutcome(outcome.error());
}

void ARMSClient::createOrUpdateNotificationPolicyAsync(const CreateOrUpdateNotificationPolicyRequest& request, const CreateOrUpdateNotificationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateNotificationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateNotificationPolicyOutcomeCallable ARMSClient::createOrUpdateNotificationPolicyCallable(const CreateOrUpdateNotificationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateNotificationPolicyOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateNotificationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateSilencePolicyOutcome ARMSClient::createOrUpdateSilencePolicy(const CreateOrUpdateSilencePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateSilencePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateSilencePolicyOutcome(CreateOrUpdateSilencePolicyResult(outcome.result()));
	else
		return CreateOrUpdateSilencePolicyOutcome(outcome.error());
}

void ARMSClient::createOrUpdateSilencePolicyAsync(const CreateOrUpdateSilencePolicyRequest& request, const CreateOrUpdateSilencePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateSilencePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateSilencePolicyOutcomeCallable ARMSClient::createOrUpdateSilencePolicyCallable(const CreateOrUpdateSilencePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateSilencePolicyOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateSilencePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateOrUpdateWebhookContactOutcome ARMSClient::createOrUpdateWebhookContact(const CreateOrUpdateWebhookContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateWebhookContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateWebhookContactOutcome(CreateOrUpdateWebhookContactResult(outcome.result()));
	else
		return CreateOrUpdateWebhookContactOutcome(outcome.error());
}

void ARMSClient::createOrUpdateWebhookContactAsync(const CreateOrUpdateWebhookContactRequest& request, const CreateOrUpdateWebhookContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateWebhookContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateOrUpdateWebhookContactOutcomeCallable ARMSClient::createOrUpdateWebhookContactCallable(const CreateOrUpdateWebhookContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateWebhookContactOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateWebhookContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreatePrometheusAlertRuleOutcome ARMSClient::createPrometheusAlertRule(const CreatePrometheusAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrometheusAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrometheusAlertRuleOutcome(CreatePrometheusAlertRuleResult(outcome.result()));
	else
		return CreatePrometheusAlertRuleOutcome(outcome.error());
}

void ARMSClient::createPrometheusAlertRuleAsync(const CreatePrometheusAlertRuleRequest& request, const CreatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrometheusAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreatePrometheusAlertRuleOutcomeCallable ARMSClient::createPrometheusAlertRuleCallable(const CreatePrometheusAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrometheusAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->createPrometheusAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreatePrometheusInstanceOutcome ARMSClient::createPrometheusInstance(const CreatePrometheusInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrometheusInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrometheusInstanceOutcome(CreatePrometheusInstanceResult(outcome.result()));
	else
		return CreatePrometheusInstanceOutcome(outcome.error());
}

void ARMSClient::createPrometheusInstanceAsync(const CreatePrometheusInstanceRequest& request, const CreatePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrometheusInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreatePrometheusInstanceOutcomeCallable ARMSClient::createPrometheusInstanceCallable(const CreatePrometheusInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrometheusInstanceOutcome()>>(
			[this, request]()
			{
			return this->createPrometheusInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreatePrometheusMonitoringOutcome ARMSClient::createPrometheusMonitoring(const CreatePrometheusMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrometheusMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrometheusMonitoringOutcome(CreatePrometheusMonitoringResult(outcome.result()));
	else
		return CreatePrometheusMonitoringOutcome(outcome.error());
}

void ARMSClient::createPrometheusMonitoringAsync(const CreatePrometheusMonitoringRequest& request, const CreatePrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrometheusMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreatePrometheusMonitoringOutcomeCallable ARMSClient::createPrometheusMonitoringCallable(const CreatePrometheusMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrometheusMonitoringOutcome()>>(
			[this, request]()
			{
			return this->createPrometheusMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateRetcodeAppOutcome ARMSClient::createRetcodeApp(const CreateRetcodeAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRetcodeAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRetcodeAppOutcome(CreateRetcodeAppResult(outcome.result()));
	else
		return CreateRetcodeAppOutcome(outcome.error());
}

void ARMSClient::createRetcodeAppAsync(const CreateRetcodeAppRequest& request, const CreateRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRetcodeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateRetcodeAppOutcomeCallable ARMSClient::createRetcodeAppCallable(const CreateRetcodeAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRetcodeAppOutcome()>>(
			[this, request]()
			{
			return this->createRetcodeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateRumAppOutcome ARMSClient::createRumApp(const CreateRumAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRumAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRumAppOutcome(CreateRumAppResult(outcome.result()));
	else
		return CreateRumAppOutcome(outcome.error());
}

void ARMSClient::createRumAppAsync(const CreateRumAppRequest& request, const CreateRumAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRumApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateRumAppOutcomeCallable ARMSClient::createRumAppCallable(const CreateRumAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRumAppOutcome()>>(
			[this, request]()
			{
			return this->createRumApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateRumUploadFileUrlOutcome ARMSClient::createRumUploadFileUrl(const CreateRumUploadFileUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRumUploadFileUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRumUploadFileUrlOutcome(CreateRumUploadFileUrlResult(outcome.result()));
	else
		return CreateRumUploadFileUrlOutcome(outcome.error());
}

void ARMSClient::createRumUploadFileUrlAsync(const CreateRumUploadFileUrlRequest& request, const CreateRumUploadFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRumUploadFileUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateRumUploadFileUrlOutcomeCallable ARMSClient::createRumUploadFileUrlCallable(const CreateRumUploadFileUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRumUploadFileUrlOutcome()>>(
			[this, request]()
			{
			return this->createRumUploadFileUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateSyntheticTaskOutcome ARMSClient::createSyntheticTask(const CreateSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSyntheticTaskOutcome(CreateSyntheticTaskResult(outcome.result()));
	else
		return CreateSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::createSyntheticTaskAsync(const CreateSyntheticTaskRequest& request, const CreateSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateSyntheticTaskOutcomeCallable ARMSClient::createSyntheticTaskCallable(const CreateSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->createSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateTimingSyntheticTaskOutcome ARMSClient::createTimingSyntheticTask(const CreateTimingSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTimingSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTimingSyntheticTaskOutcome(CreateTimingSyntheticTaskResult(outcome.result()));
	else
		return CreateTimingSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::createTimingSyntheticTaskAsync(const CreateTimingSyntheticTaskRequest& request, const CreateTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTimingSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateTimingSyntheticTaskOutcomeCallable ARMSClient::createTimingSyntheticTaskCallable(const CreateTimingSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTimingSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->createTimingSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CreateWebhookOutcome ARMSClient::createWebhook(const CreateWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateWebhookOutcome(CreateWebhookResult(outcome.result()));
	else
		return CreateWebhookOutcome(outcome.error());
}

void ARMSClient::createWebhookAsync(const CreateWebhookRequest& request, const CreateWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CreateWebhookOutcomeCallable ARMSClient::createWebhookCallable(const CreateWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateWebhookOutcome()>>(
			[this, request]()
			{
			return this->createWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DelAuthTokenOutcome ARMSClient::delAuthToken(const DelAuthTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelAuthTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelAuthTokenOutcome(DelAuthTokenResult(outcome.result()));
	else
		return DelAuthTokenOutcome(outcome.error());
}

void ARMSClient::delAuthTokenAsync(const DelAuthTokenRequest& request, const DelAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delAuthToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DelAuthTokenOutcomeCallable ARMSClient::delAuthTokenCallable(const DelAuthTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelAuthTokenOutcome()>>(
			[this, request]()
			{
			return this->delAuthToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteAddonReleaseOutcome ARMSClient::deleteAddonRelease(const DeleteAddonReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAddonReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAddonReleaseOutcome(DeleteAddonReleaseResult(outcome.result()));
	else
		return DeleteAddonReleaseOutcome(outcome.error());
}

void ARMSClient::deleteAddonReleaseAsync(const DeleteAddonReleaseRequest& request, const DeleteAddonReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAddonRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteAddonReleaseOutcomeCallable ARMSClient::deleteAddonReleaseCallable(const DeleteAddonReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAddonReleaseOutcome()>>(
			[this, request]()
			{
			return this->deleteAddonRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteAlertContactOutcome ARMSClient::deleteAlertContact(const DeleteAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertContactOutcome(DeleteAlertContactResult(outcome.result()));
	else
		return DeleteAlertContactOutcome(outcome.error());
}

void ARMSClient::deleteAlertContactAsync(const DeleteAlertContactRequest& request, const DeleteAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteAlertContactOutcomeCallable ARMSClient::deleteAlertContactCallable(const DeleteAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertContactOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteAlertContactGroupOutcome ARMSClient::deleteAlertContactGroup(const DeleteAlertContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertContactGroupOutcome(DeleteAlertContactGroupResult(outcome.result()));
	else
		return DeleteAlertContactGroupOutcome(outcome.error());
}

void ARMSClient::deleteAlertContactGroupAsync(const DeleteAlertContactGroupRequest& request, const DeleteAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteAlertContactGroupOutcomeCallable ARMSClient::deleteAlertContactGroupCallable(const DeleteAlertContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertContactGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteAlertRuleOutcome ARMSClient::deleteAlertRule(const DeleteAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertRuleOutcome(DeleteAlertRuleResult(outcome.result()));
	else
		return DeleteAlertRuleOutcome(outcome.error());
}

void ARMSClient::deleteAlertRuleAsync(const DeleteAlertRuleRequest& request, const DeleteAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteAlertRuleOutcomeCallable ARMSClient::deleteAlertRuleCallable(const DeleteAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteAlertRulesOutcome ARMSClient::deleteAlertRules(const DeleteAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAlertRulesOutcome(DeleteAlertRulesResult(outcome.result()));
	else
		return DeleteAlertRulesOutcome(outcome.error());
}

void ARMSClient::deleteAlertRulesAsync(const DeleteAlertRulesRequest& request, const DeleteAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteAlertRulesOutcomeCallable ARMSClient::deleteAlertRulesCallable(const DeleteAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteAlertRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteAppListOutcome ARMSClient::deleteAppList(const DeleteAppListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppListOutcome(DeleteAppListResult(outcome.result()));
	else
		return DeleteAppListOutcome(outcome.error());
}

void ARMSClient::deleteAppListAsync(const DeleteAppListRequest& request, const DeleteAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteAppListOutcomeCallable ARMSClient::deleteAppListCallable(const DeleteAppListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppListOutcome()>>(
			[this, request]()
			{
			return this->deleteAppList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteCmsExporterOutcome ARMSClient::deleteCmsExporter(const DeleteCmsExporterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCmsExporterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCmsExporterOutcome(DeleteCmsExporterResult(outcome.result()));
	else
		return DeleteCmsExporterOutcome(outcome.error());
}

void ARMSClient::deleteCmsExporterAsync(const DeleteCmsExporterRequest& request, const DeleteCmsExporterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCmsExporter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteCmsExporterOutcomeCallable ARMSClient::deleteCmsExporterCallable(const DeleteCmsExporterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCmsExporterOutcome()>>(
			[this, request]()
			{
			return this->deleteCmsExporter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteContactOutcome ARMSClient::deleteContact(const DeleteContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactOutcome(DeleteContactResult(outcome.result()));
	else
		return DeleteContactOutcome(outcome.error());
}

void ARMSClient::deleteContactAsync(const DeleteContactRequest& request, const DeleteContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteContactOutcomeCallable ARMSClient::deleteContactCallable(const DeleteContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactOutcome()>>(
			[this, request]()
			{
			return this->deleteContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteContactGroupOutcome ARMSClient::deleteContactGroup(const DeleteContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactGroupOutcome(DeleteContactGroupResult(outcome.result()));
	else
		return DeleteContactGroupOutcome(outcome.error());
}

void ARMSClient::deleteContactGroupAsync(const DeleteContactGroupRequest& request, const DeleteContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteContactGroupOutcomeCallable ARMSClient::deleteContactGroupCallable(const DeleteContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteDispatchRuleOutcome ARMSClient::deleteDispatchRule(const DeleteDispatchRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDispatchRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDispatchRuleOutcome(DeleteDispatchRuleResult(outcome.result()));
	else
		return DeleteDispatchRuleOutcome(outcome.error());
}

void ARMSClient::deleteDispatchRuleAsync(const DeleteDispatchRuleRequest& request, const DeleteDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDispatchRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteDispatchRuleOutcomeCallable ARMSClient::deleteDispatchRuleCallable(const DeleteDispatchRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDispatchRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteDispatchRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteEnvCustomJobOutcome ARMSClient::deleteEnvCustomJob(const DeleteEnvCustomJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvCustomJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvCustomJobOutcome(DeleteEnvCustomJobResult(outcome.result()));
	else
		return DeleteEnvCustomJobOutcome(outcome.error());
}

void ARMSClient::deleteEnvCustomJobAsync(const DeleteEnvCustomJobRequest& request, const DeleteEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvCustomJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteEnvCustomJobOutcomeCallable ARMSClient::deleteEnvCustomJobCallable(const DeleteEnvCustomJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvCustomJobOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvCustomJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteEnvPodMonitorOutcome ARMSClient::deleteEnvPodMonitor(const DeleteEnvPodMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvPodMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvPodMonitorOutcome(DeleteEnvPodMonitorResult(outcome.result()));
	else
		return DeleteEnvPodMonitorOutcome(outcome.error());
}

void ARMSClient::deleteEnvPodMonitorAsync(const DeleteEnvPodMonitorRequest& request, const DeleteEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvPodMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteEnvPodMonitorOutcomeCallable ARMSClient::deleteEnvPodMonitorCallable(const DeleteEnvPodMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvPodMonitorOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvPodMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteEnvServiceMonitorOutcome ARMSClient::deleteEnvServiceMonitor(const DeleteEnvServiceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvServiceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvServiceMonitorOutcome(DeleteEnvServiceMonitorResult(outcome.result()));
	else
		return DeleteEnvServiceMonitorOutcome(outcome.error());
}

void ARMSClient::deleteEnvServiceMonitorAsync(const DeleteEnvServiceMonitorRequest& request, const DeleteEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvServiceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteEnvServiceMonitorOutcomeCallable ARMSClient::deleteEnvServiceMonitorCallable(const DeleteEnvServiceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvServiceMonitorOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvServiceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteEnvironmentOutcome ARMSClient::deleteEnvironment(const DeleteEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvironmentOutcome(DeleteEnvironmentResult(outcome.result()));
	else
		return DeleteEnvironmentOutcome(outcome.error());
}

void ARMSClient::deleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteEnvironmentOutcomeCallable ARMSClient::deleteEnvironmentCallable(const DeleteEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteEnvironmentFeatureOutcome ARMSClient::deleteEnvironmentFeature(const DeleteEnvironmentFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEnvironmentFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEnvironmentFeatureOutcome(DeleteEnvironmentFeatureResult(outcome.result()));
	else
		return DeleteEnvironmentFeatureOutcome(outcome.error());
}

void ARMSClient::deleteEnvironmentFeatureAsync(const DeleteEnvironmentFeatureRequest& request, const DeleteEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEnvironmentFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteEnvironmentFeatureOutcomeCallable ARMSClient::deleteEnvironmentFeatureCallable(const DeleteEnvironmentFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEnvironmentFeatureOutcome()>>(
			[this, request]()
			{
			return this->deleteEnvironmentFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteEventBridgeIntegrationOutcome ARMSClient::deleteEventBridgeIntegration(const DeleteEventBridgeIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventBridgeIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventBridgeIntegrationOutcome(DeleteEventBridgeIntegrationResult(outcome.result()));
	else
		return DeleteEventBridgeIntegrationOutcome(outcome.error());
}

void ARMSClient::deleteEventBridgeIntegrationAsync(const DeleteEventBridgeIntegrationRequest& request, const DeleteEventBridgeIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventBridgeIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteEventBridgeIntegrationOutcomeCallable ARMSClient::deleteEventBridgeIntegrationCallable(const DeleteEventBridgeIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventBridgeIntegrationOutcome()>>(
			[this, request]()
			{
			return this->deleteEventBridgeIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteGrafanaResourceOutcome ARMSClient::deleteGrafanaResource(const DeleteGrafanaResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGrafanaResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGrafanaResourceOutcome(DeleteGrafanaResourceResult(outcome.result()));
	else
		return DeleteGrafanaResourceOutcome(outcome.error());
}

void ARMSClient::deleteGrafanaResourceAsync(const DeleteGrafanaResourceRequest& request, const DeleteGrafanaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGrafanaResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteGrafanaResourceOutcomeCallable ARMSClient::deleteGrafanaResourceCallable(const DeleteGrafanaResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGrafanaResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteGrafanaResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteGrafanaWorkspaceOutcome ARMSClient::deleteGrafanaWorkspace(const DeleteGrafanaWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGrafanaWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGrafanaWorkspaceOutcome(DeleteGrafanaWorkspaceResult(outcome.result()));
	else
		return DeleteGrafanaWorkspaceOutcome(outcome.error());
}

void ARMSClient::deleteGrafanaWorkspaceAsync(const DeleteGrafanaWorkspaceRequest& request, const DeleteGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGrafanaWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteGrafanaWorkspaceOutcomeCallable ARMSClient::deleteGrafanaWorkspaceCallable(const DeleteGrafanaWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGrafanaWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->deleteGrafanaWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteIMRobotOutcome ARMSClient::deleteIMRobot(const DeleteIMRobotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIMRobotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIMRobotOutcome(DeleteIMRobotResult(outcome.result()));
	else
		return DeleteIMRobotOutcome(outcome.error());
}

void ARMSClient::deleteIMRobotAsync(const DeleteIMRobotRequest& request, const DeleteIMRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIMRobot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteIMRobotOutcomeCallable ARMSClient::deleteIMRobotCallable(const DeleteIMRobotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIMRobotOutcome()>>(
			[this, request]()
			{
			return this->deleteIMRobot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteIntegrationOutcome ARMSClient::deleteIntegration(const DeleteIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIntegrationOutcome(DeleteIntegrationResult(outcome.result()));
	else
		return DeleteIntegrationOutcome(outcome.error());
}

void ARMSClient::deleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteIntegrationOutcomeCallable ARMSClient::deleteIntegrationCallable(const DeleteIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIntegrationOutcome()>>(
			[this, request]()
			{
			return this->deleteIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteIntegrationsOutcome ARMSClient::deleteIntegrations(const DeleteIntegrationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIntegrationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIntegrationsOutcome(DeleteIntegrationsResult(outcome.result()));
	else
		return DeleteIntegrationsOutcome(outcome.error());
}

void ARMSClient::deleteIntegrationsAsync(const DeleteIntegrationsRequest& request, const DeleteIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIntegrations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteIntegrationsOutcomeCallable ARMSClient::deleteIntegrationsCallable(const DeleteIntegrationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIntegrationsOutcome()>>(
			[this, request]()
			{
			return this->deleteIntegrations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteNotificationPolicyOutcome ARMSClient::deleteNotificationPolicy(const DeleteNotificationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNotificationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNotificationPolicyOutcome(DeleteNotificationPolicyResult(outcome.result()));
	else
		return DeleteNotificationPolicyOutcome(outcome.error());
}

void ARMSClient::deleteNotificationPolicyAsync(const DeleteNotificationPolicyRequest& request, const DeleteNotificationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNotificationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteNotificationPolicyOutcomeCallable ARMSClient::deleteNotificationPolicyCallable(const DeleteNotificationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNotificationPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteNotificationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeletePrometheusAlertRuleOutcome ARMSClient::deletePrometheusAlertRule(const DeletePrometheusAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrometheusAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrometheusAlertRuleOutcome(DeletePrometheusAlertRuleResult(outcome.result()));
	else
		return DeletePrometheusAlertRuleOutcome(outcome.error());
}

void ARMSClient::deletePrometheusAlertRuleAsync(const DeletePrometheusAlertRuleRequest& request, const DeletePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrometheusAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeletePrometheusAlertRuleOutcomeCallable ARMSClient::deletePrometheusAlertRuleCallable(const DeletePrometheusAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrometheusAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->deletePrometheusAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeletePrometheusGlobalViewOutcome ARMSClient::deletePrometheusGlobalView(const DeletePrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrometheusGlobalViewOutcome(DeletePrometheusGlobalViewResult(outcome.result()));
	else
		return DeletePrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::deletePrometheusGlobalViewAsync(const DeletePrometheusGlobalViewRequest& request, const DeletePrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeletePrometheusGlobalViewOutcomeCallable ARMSClient::deletePrometheusGlobalViewCallable(const DeletePrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->deletePrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeletePrometheusIntegrationOutcome ARMSClient::deletePrometheusIntegration(const DeletePrometheusIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrometheusIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrometheusIntegrationOutcome(DeletePrometheusIntegrationResult(outcome.result()));
	else
		return DeletePrometheusIntegrationOutcome(outcome.error());
}

void ARMSClient::deletePrometheusIntegrationAsync(const DeletePrometheusIntegrationRequest& request, const DeletePrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrometheusIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeletePrometheusIntegrationOutcomeCallable ARMSClient::deletePrometheusIntegrationCallable(const DeletePrometheusIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrometheusIntegrationOutcome()>>(
			[this, request]()
			{
			return this->deletePrometheusIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeletePrometheusMonitoringOutcome ARMSClient::deletePrometheusMonitoring(const DeletePrometheusMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrometheusMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrometheusMonitoringOutcome(DeletePrometheusMonitoringResult(outcome.result()));
	else
		return DeletePrometheusMonitoringOutcome(outcome.error());
}

void ARMSClient::deletePrometheusMonitoringAsync(const DeletePrometheusMonitoringRequest& request, const DeletePrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrometheusMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeletePrometheusMonitoringOutcomeCallable ARMSClient::deletePrometheusMonitoringCallable(const DeletePrometheusMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrometheusMonitoringOutcome()>>(
			[this, request]()
			{
			return this->deletePrometheusMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteRetcodeAppOutcome ARMSClient::deleteRetcodeApp(const DeleteRetcodeAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRetcodeAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRetcodeAppOutcome(DeleteRetcodeAppResult(outcome.result()));
	else
		return DeleteRetcodeAppOutcome(outcome.error());
}

void ARMSClient::deleteRetcodeAppAsync(const DeleteRetcodeAppRequest& request, const DeleteRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRetcodeApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteRetcodeAppOutcomeCallable ARMSClient::deleteRetcodeAppCallable(const DeleteRetcodeAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRetcodeAppOutcome()>>(
			[this, request]()
			{
			return this->deleteRetcodeApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteRumAppOutcome ARMSClient::deleteRumApp(const DeleteRumAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRumAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRumAppOutcome(DeleteRumAppResult(outcome.result()));
	else
		return DeleteRumAppOutcome(outcome.error());
}

void ARMSClient::deleteRumAppAsync(const DeleteRumAppRequest& request, const DeleteRumAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRumApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteRumAppOutcomeCallable ARMSClient::deleteRumAppCallable(const DeleteRumAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRumAppOutcome()>>(
			[this, request]()
			{
			return this->deleteRumApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteRumUploadFileOutcome ARMSClient::deleteRumUploadFile(const DeleteRumUploadFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRumUploadFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRumUploadFileOutcome(DeleteRumUploadFileResult(outcome.result()));
	else
		return DeleteRumUploadFileOutcome(outcome.error());
}

void ARMSClient::deleteRumUploadFileAsync(const DeleteRumUploadFileRequest& request, const DeleteRumUploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRumUploadFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteRumUploadFileOutcomeCallable ARMSClient::deleteRumUploadFileCallable(const DeleteRumUploadFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRumUploadFileOutcome()>>(
			[this, request]()
			{
			return this->deleteRumUploadFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteScenarioOutcome ARMSClient::deleteScenario(const DeleteScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScenarioOutcome(DeleteScenarioResult(outcome.result()));
	else
		return DeleteScenarioOutcome(outcome.error());
}

void ARMSClient::deleteScenarioAsync(const DeleteScenarioRequest& request, const DeleteScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteScenarioOutcomeCallable ARMSClient::deleteScenarioCallable(const DeleteScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScenarioOutcome()>>(
			[this, request]()
			{
			return this->deleteScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteSilencePolicyOutcome ARMSClient::deleteSilencePolicy(const DeleteSilencePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSilencePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSilencePolicyOutcome(DeleteSilencePolicyResult(outcome.result()));
	else
		return DeleteSilencePolicyOutcome(outcome.error());
}

void ARMSClient::deleteSilencePolicyAsync(const DeleteSilencePolicyRequest& request, const DeleteSilencePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSilencePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteSilencePolicyOutcomeCallable ARMSClient::deleteSilencePolicyCallable(const DeleteSilencePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSilencePolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteSilencePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteSourceMapOutcome ARMSClient::deleteSourceMap(const DeleteSourceMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSourceMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSourceMapOutcome(DeleteSourceMapResult(outcome.result()));
	else
		return DeleteSourceMapOutcome(outcome.error());
}

void ARMSClient::deleteSourceMapAsync(const DeleteSourceMapRequest& request, const DeleteSourceMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSourceMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteSourceMapOutcomeCallable ARMSClient::deleteSourceMapCallable(const DeleteSourceMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSourceMapOutcome()>>(
			[this, request]()
			{
			return this->deleteSourceMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteSyntheticTaskOutcome ARMSClient::deleteSyntheticTask(const DeleteSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSyntheticTaskOutcome(DeleteSyntheticTaskResult(outcome.result()));
	else
		return DeleteSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::deleteSyntheticTaskAsync(const DeleteSyntheticTaskRequest& request, const DeleteSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteSyntheticTaskOutcomeCallable ARMSClient::deleteSyntheticTaskCallable(const DeleteSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteTimingSyntheticTaskOutcome ARMSClient::deleteTimingSyntheticTask(const DeleteTimingSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTimingSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTimingSyntheticTaskOutcome(DeleteTimingSyntheticTaskResult(outcome.result()));
	else
		return DeleteTimingSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::deleteTimingSyntheticTaskAsync(const DeleteTimingSyntheticTaskRequest& request, const DeleteTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTimingSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteTimingSyntheticTaskOutcomeCallable ARMSClient::deleteTimingSyntheticTaskCallable(const DeleteTimingSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTimingSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteTimingSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteTraceAppOutcome ARMSClient::deleteTraceApp(const DeleteTraceAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTraceAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTraceAppOutcome(DeleteTraceAppResult(outcome.result()));
	else
		return DeleteTraceAppOutcome(outcome.error());
}

void ARMSClient::deleteTraceAppAsync(const DeleteTraceAppRequest& request, const DeleteTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTraceApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteTraceAppOutcomeCallable ARMSClient::deleteTraceAppCallable(const DeleteTraceAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTraceAppOutcome()>>(
			[this, request]()
			{
			return this->deleteTraceApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DeleteWebhookContactOutcome ARMSClient::deleteWebhookContact(const DeleteWebhookContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWebhookContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWebhookContactOutcome(DeleteWebhookContactResult(outcome.result()));
	else
		return DeleteWebhookContactOutcome(outcome.error());
}

void ARMSClient::deleteWebhookContactAsync(const DeleteWebhookContactRequest& request, const DeleteWebhookContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWebhookContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DeleteWebhookContactOutcomeCallable ARMSClient::deleteWebhookContactCallable(const DeleteWebhookContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWebhookContactOutcome()>>(
			[this, request]()
			{
			return this->deleteWebhookContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeAddonReleaseOutcome ARMSClient::describeAddonRelease(const DescribeAddonReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAddonReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAddonReleaseOutcome(DescribeAddonReleaseResult(outcome.result()));
	else
		return DescribeAddonReleaseOutcome(outcome.error());
}

void ARMSClient::describeAddonReleaseAsync(const DescribeAddonReleaseRequest& request, const DescribeAddonReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAddonRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeAddonReleaseOutcomeCallable ARMSClient::describeAddonReleaseCallable(const DescribeAddonReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAddonReleaseOutcome()>>(
			[this, request]()
			{
			return this->describeAddonRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeContactGroupsOutcome ARMSClient::describeContactGroups(const DescribeContactGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactGroupsOutcome(DescribeContactGroupsResult(outcome.result()));
	else
		return DescribeContactGroupsOutcome(outcome.error());
}

void ARMSClient::describeContactGroupsAsync(const DescribeContactGroupsRequest& request, const DescribeContactGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContactGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeContactGroupsOutcomeCallable ARMSClient::describeContactGroupsCallable(const DescribeContactGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeContactGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeContactsOutcome ARMSClient::describeContacts(const DescribeContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContactsOutcome(DescribeContactsResult(outcome.result()));
	else
		return DescribeContactsOutcome(outcome.error());
}

void ARMSClient::describeContactsAsync(const DescribeContactsRequest& request, const DescribeContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeContactsOutcomeCallable ARMSClient::describeContactsCallable(const DescribeContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContactsOutcome()>>(
			[this, request]()
			{
			return this->describeContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeDispatchRuleOutcome ARMSClient::describeDispatchRule(const DescribeDispatchRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDispatchRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDispatchRuleOutcome(DescribeDispatchRuleResult(outcome.result()));
	else
		return DescribeDispatchRuleOutcome(outcome.error());
}

void ARMSClient::describeDispatchRuleAsync(const DescribeDispatchRuleRequest& request, const DescribeDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDispatchRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeDispatchRuleOutcomeCallable ARMSClient::describeDispatchRuleCallable(const DescribeDispatchRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDispatchRuleOutcome()>>(
			[this, request]()
			{
			return this->describeDispatchRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeEnvCustomJobOutcome ARMSClient::describeEnvCustomJob(const DescribeEnvCustomJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnvCustomJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnvCustomJobOutcome(DescribeEnvCustomJobResult(outcome.result()));
	else
		return DescribeEnvCustomJobOutcome(outcome.error());
}

void ARMSClient::describeEnvCustomJobAsync(const DescribeEnvCustomJobRequest& request, const DescribeEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnvCustomJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeEnvCustomJobOutcomeCallable ARMSClient::describeEnvCustomJobCallable(const DescribeEnvCustomJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnvCustomJobOutcome()>>(
			[this, request]()
			{
			return this->describeEnvCustomJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeEnvPodMonitorOutcome ARMSClient::describeEnvPodMonitor(const DescribeEnvPodMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnvPodMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnvPodMonitorOutcome(DescribeEnvPodMonitorResult(outcome.result()));
	else
		return DescribeEnvPodMonitorOutcome(outcome.error());
}

void ARMSClient::describeEnvPodMonitorAsync(const DescribeEnvPodMonitorRequest& request, const DescribeEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnvPodMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeEnvPodMonitorOutcomeCallable ARMSClient::describeEnvPodMonitorCallable(const DescribeEnvPodMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnvPodMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeEnvPodMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeEnvServiceMonitorOutcome ARMSClient::describeEnvServiceMonitor(const DescribeEnvServiceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnvServiceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnvServiceMonitorOutcome(DescribeEnvServiceMonitorResult(outcome.result()));
	else
		return DescribeEnvServiceMonitorOutcome(outcome.error());
}

void ARMSClient::describeEnvServiceMonitorAsync(const DescribeEnvServiceMonitorRequest& request, const DescribeEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnvServiceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeEnvServiceMonitorOutcomeCallable ARMSClient::describeEnvServiceMonitorCallable(const DescribeEnvServiceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnvServiceMonitorOutcome()>>(
			[this, request]()
			{
			return this->describeEnvServiceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeEnvironmentOutcome ARMSClient::describeEnvironment(const DescribeEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnvironmentOutcome(DescribeEnvironmentResult(outcome.result()));
	else
		return DescribeEnvironmentOutcome(outcome.error());
}

void ARMSClient::describeEnvironmentAsync(const DescribeEnvironmentRequest& request, const DescribeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeEnvironmentOutcomeCallable ARMSClient::describeEnvironmentCallable(const DescribeEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->describeEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeEnvironmentFeatureOutcome ARMSClient::describeEnvironmentFeature(const DescribeEnvironmentFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEnvironmentFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEnvironmentFeatureOutcome(DescribeEnvironmentFeatureResult(outcome.result()));
	else
		return DescribeEnvironmentFeatureOutcome(outcome.error());
}

void ARMSClient::describeEnvironmentFeatureAsync(const DescribeEnvironmentFeatureRequest& request, const DescribeEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEnvironmentFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeEnvironmentFeatureOutcomeCallable ARMSClient::describeEnvironmentFeatureCallable(const DescribeEnvironmentFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEnvironmentFeatureOutcome()>>(
			[this, request]()
			{
			return this->describeEnvironmentFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeIMRobotsOutcome ARMSClient::describeIMRobots(const DescribeIMRobotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIMRobotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIMRobotsOutcome(DescribeIMRobotsResult(outcome.result()));
	else
		return DescribeIMRobotsOutcome(outcome.error());
}

void ARMSClient::describeIMRobotsAsync(const DescribeIMRobotsRequest& request, const DescribeIMRobotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIMRobots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeIMRobotsOutcomeCallable ARMSClient::describeIMRobotsCallable(const DescribeIMRobotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIMRobotsOutcome()>>(
			[this, request]()
			{
			return this->describeIMRobots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribePrometheusAlertRuleOutcome ARMSClient::describePrometheusAlertRule(const DescribePrometheusAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePrometheusAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePrometheusAlertRuleOutcome(DescribePrometheusAlertRuleResult(outcome.result()));
	else
		return DescribePrometheusAlertRuleOutcome(outcome.error());
}

void ARMSClient::describePrometheusAlertRuleAsync(const DescribePrometheusAlertRuleRequest& request, const DescribePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePrometheusAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribePrometheusAlertRuleOutcomeCallable ARMSClient::describePrometheusAlertRuleCallable(const DescribePrometheusAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePrometheusAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->describePrometheusAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeTraceLicenseKeyOutcome ARMSClient::describeTraceLicenseKey(const DescribeTraceLicenseKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTraceLicenseKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTraceLicenseKeyOutcome(DescribeTraceLicenseKeyResult(outcome.result()));
	else
		return DescribeTraceLicenseKeyOutcome(outcome.error());
}

void ARMSClient::describeTraceLicenseKeyAsync(const DescribeTraceLicenseKeyRequest& request, const DescribeTraceLicenseKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceLicenseKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeTraceLicenseKeyOutcomeCallable ARMSClient::describeTraceLicenseKeyCallable(const DescribeTraceLicenseKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceLicenseKeyOutcome()>>(
			[this, request]()
			{
			return this->describeTraceLicenseKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DescribeWebhookContactsOutcome ARMSClient::describeWebhookContacts(const DescribeWebhookContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebhookContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebhookContactsOutcome(DescribeWebhookContactsResult(outcome.result()));
	else
		return DescribeWebhookContactsOutcome(outcome.error());
}

void ARMSClient::describeWebhookContactsAsync(const DescribeWebhookContactsRequest& request, const DescribeWebhookContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebhookContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeWebhookContactsOutcomeCallable ARMSClient::describeWebhookContactsCallable(const DescribeWebhookContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebhookContactsOutcome()>>(
			[this, request]()
			{
			return this->describeWebhookContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::DoInsightsActionOutcome ARMSClient::doInsightsAction(const DoInsightsActionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DoInsightsActionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DoInsightsActionOutcome(DoInsightsActionResult(outcome.result()));
	else
		return DoInsightsActionOutcome(outcome.error());
}

void ARMSClient::doInsightsActionAsync(const DoInsightsActionRequest& request, const DoInsightsActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, doInsightsAction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DoInsightsActionOutcomeCallable ARMSClient::doInsightsActionCallable(const DoInsightsActionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DoInsightsActionOutcome()>>(
			[this, request]()
			{
			return this->doInsightsAction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::EnableMetricOutcome ARMSClient::enableMetric(const EnableMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMetricOutcome(EnableMetricResult(outcome.result()));
	else
		return EnableMetricOutcome(outcome.error());
}

void ARMSClient::enableMetricAsync(const EnableMetricRequest& request, const EnableMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::EnableMetricOutcomeCallable ARMSClient::enableMetricCallable(const EnableMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMetricOutcome()>>(
			[this, request]()
			{
			return this->enableMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetAgentDownloadUrlOutcome ARMSClient::getAgentDownloadUrl(const GetAgentDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAgentDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAgentDownloadUrlOutcome(GetAgentDownloadUrlResult(outcome.result()));
	else
		return GetAgentDownloadUrlOutcome(outcome.error());
}

void ARMSClient::getAgentDownloadUrlAsync(const GetAgentDownloadUrlRequest& request, const GetAgentDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAgentDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetAgentDownloadUrlOutcomeCallable ARMSClient::getAgentDownloadUrlCallable(const GetAgentDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAgentDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getAgentDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetAlertRulesOutcome ARMSClient::getAlertRules(const GetAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAlertRulesOutcome(GetAlertRulesResult(outcome.result()));
	else
		return GetAlertRulesOutcome(outcome.error());
}

void ARMSClient::getAlertRulesAsync(const GetAlertRulesRequest& request, const GetAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetAlertRulesOutcomeCallable ARMSClient::getAlertRulesCallable(const GetAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->getAlertRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetAppApiByPageOutcome ARMSClient::getAppApiByPage(const GetAppApiByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppApiByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppApiByPageOutcome(GetAppApiByPageResult(outcome.result()));
	else
		return GetAppApiByPageOutcome(outcome.error());
}

void ARMSClient::getAppApiByPageAsync(const GetAppApiByPageRequest& request, const GetAppApiByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppApiByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetAppApiByPageOutcomeCallable ARMSClient::getAppApiByPageCallable(const GetAppApiByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppApiByPageOutcome()>>(
			[this, request]()
			{
			return this->getAppApiByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetAppJVMConfigOutcome ARMSClient::getAppJVMConfig(const GetAppJVMConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppJVMConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppJVMConfigOutcome(GetAppJVMConfigResult(outcome.result()));
	else
		return GetAppJVMConfigOutcome(outcome.error());
}

void ARMSClient::getAppJVMConfigAsync(const GetAppJVMConfigRequest& request, const GetAppJVMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppJVMConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetAppJVMConfigOutcomeCallable ARMSClient::getAppJVMConfigCallable(const GetAppJVMConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppJVMConfigOutcome()>>(
			[this, request]()
			{
			return this->getAppJVMConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetAuthTokenOutcome ARMSClient::getAuthToken(const GetAuthTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthTokenOutcome(GetAuthTokenResult(outcome.result()));
	else
		return GetAuthTokenOutcome(outcome.error());
}

void ARMSClient::getAuthTokenAsync(const GetAuthTokenRequest& request, const GetAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetAuthTokenOutcomeCallable ARMSClient::getAuthTokenCallable(const GetAuthTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthTokenOutcome()>>(
			[this, request]()
			{
			return this->getAuthToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetCloudClusterAllUrlOutcome ARMSClient::getCloudClusterAllUrl(const GetCloudClusterAllUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudClusterAllUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudClusterAllUrlOutcome(GetCloudClusterAllUrlResult(outcome.result()));
	else
		return GetCloudClusterAllUrlOutcome(outcome.error());
}

void ARMSClient::getCloudClusterAllUrlAsync(const GetCloudClusterAllUrlRequest& request, const GetCloudClusterAllUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudClusterAllUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetCloudClusterAllUrlOutcomeCallable ARMSClient::getCloudClusterAllUrlCallable(const GetCloudClusterAllUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudClusterAllUrlOutcome()>>(
			[this, request]()
			{
			return this->getCloudClusterAllUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetClusterAllUrlOutcome ARMSClient::getClusterAllUrl(const GetClusterAllUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterAllUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterAllUrlOutcome(GetClusterAllUrlResult(outcome.result()));
	else
		return GetClusterAllUrlOutcome(outcome.error());
}

void ARMSClient::getClusterAllUrlAsync(const GetClusterAllUrlRequest& request, const GetClusterAllUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterAllUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetClusterAllUrlOutcomeCallable ARMSClient::getClusterAllUrlCallable(const GetClusterAllUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterAllUrlOutcome()>>(
			[this, request]()
			{
			return this->getClusterAllUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetCommercialStatusOutcome ARMSClient::getCommercialStatus(const GetCommercialStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCommercialStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCommercialStatusOutcome(GetCommercialStatusResult(outcome.result()));
	else
		return GetCommercialStatusOutcome(outcome.error());
}

void ARMSClient::getCommercialStatusAsync(const GetCommercialStatusRequest& request, const GetCommercialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCommercialStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetCommercialStatusOutcomeCallable ARMSClient::getCommercialStatusCallable(const GetCommercialStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCommercialStatusOutcome()>>(
			[this, request]()
			{
			return this->getCommercialStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetExploreUrlOutcome ARMSClient::getExploreUrl(const GetExploreUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetExploreUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetExploreUrlOutcome(GetExploreUrlResult(outcome.result()));
	else
		return GetExploreUrlOutcome(outcome.error());
}

void ARMSClient::getExploreUrlAsync(const GetExploreUrlRequest& request, const GetExploreUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getExploreUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetExploreUrlOutcomeCallable ARMSClient::getExploreUrlCallable(const GetExploreUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetExploreUrlOutcome()>>(
			[this, request]()
			{
			return this->getExploreUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetGrafanaWorkspaceOutcome ARMSClient::getGrafanaWorkspace(const GetGrafanaWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGrafanaWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGrafanaWorkspaceOutcome(GetGrafanaWorkspaceResult(outcome.result()));
	else
		return GetGrafanaWorkspaceOutcome(outcome.error());
}

void ARMSClient::getGrafanaWorkspaceAsync(const GetGrafanaWorkspaceRequest& request, const GetGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGrafanaWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetGrafanaWorkspaceOutcomeCallable ARMSClient::getGrafanaWorkspaceCallable(const GetGrafanaWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGrafanaWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->getGrafanaWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetIntegrationStateOutcome ARMSClient::getIntegrationState(const GetIntegrationStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIntegrationStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIntegrationStateOutcome(GetIntegrationStateResult(outcome.result()));
	else
		return GetIntegrationStateOutcome(outcome.error());
}

void ARMSClient::getIntegrationStateAsync(const GetIntegrationStateRequest& request, const GetIntegrationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIntegrationState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetIntegrationStateOutcomeCallable ARMSClient::getIntegrationStateCallable(const GetIntegrationStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIntegrationStateOutcome()>>(
			[this, request]()
			{
			return this->getIntegrationState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetManagedPrometheusStatusOutcome ARMSClient::getManagedPrometheusStatus(const GetManagedPrometheusStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetManagedPrometheusStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetManagedPrometheusStatusOutcome(GetManagedPrometheusStatusResult(outcome.result()));
	else
		return GetManagedPrometheusStatusOutcome(outcome.error());
}

void ARMSClient::getManagedPrometheusStatusAsync(const GetManagedPrometheusStatusRequest& request, const GetManagedPrometheusStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getManagedPrometheusStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetManagedPrometheusStatusOutcomeCallable ARMSClient::getManagedPrometheusStatusCallable(const GetManagedPrometheusStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetManagedPrometheusStatusOutcome()>>(
			[this, request]()
			{
			return this->getManagedPrometheusStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetMultipleTraceOutcome ARMSClient::getMultipleTrace(const GetMultipleTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMultipleTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMultipleTraceOutcome(GetMultipleTraceResult(outcome.result()));
	else
		return GetMultipleTraceOutcome(outcome.error());
}

void ARMSClient::getMultipleTraceAsync(const GetMultipleTraceRequest& request, const GetMultipleTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMultipleTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetMultipleTraceOutcomeCallable ARMSClient::getMultipleTraceCallable(const GetMultipleTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMultipleTraceOutcome()>>(
			[this, request]()
			{
			return this->getMultipleTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetOnCallSchedulesDetailOutcome ARMSClient::getOnCallSchedulesDetail(const GetOnCallSchedulesDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnCallSchedulesDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnCallSchedulesDetailOutcome(GetOnCallSchedulesDetailResult(outcome.result()));
	else
		return GetOnCallSchedulesDetailOutcome(outcome.error());
}

void ARMSClient::getOnCallSchedulesDetailAsync(const GetOnCallSchedulesDetailRequest& request, const GetOnCallSchedulesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnCallSchedulesDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetOnCallSchedulesDetailOutcomeCallable ARMSClient::getOnCallSchedulesDetailCallable(const GetOnCallSchedulesDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnCallSchedulesDetailOutcome()>>(
			[this, request]()
			{
			return this->getOnCallSchedulesDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetPrometheusApiTokenOutcome ARMSClient::getPrometheusApiToken(const GetPrometheusApiTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrometheusApiTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrometheusApiTokenOutcome(GetPrometheusApiTokenResult(outcome.result()));
	else
		return GetPrometheusApiTokenOutcome(outcome.error());
}

void ARMSClient::getPrometheusApiTokenAsync(const GetPrometheusApiTokenRequest& request, const GetPrometheusApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrometheusApiToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetPrometheusApiTokenOutcomeCallable ARMSClient::getPrometheusApiTokenCallable(const GetPrometheusApiTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrometheusApiTokenOutcome()>>(
			[this, request]()
			{
			return this->getPrometheusApiToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetPrometheusGlobalViewOutcome ARMSClient::getPrometheusGlobalView(const GetPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrometheusGlobalViewOutcome(GetPrometheusGlobalViewResult(outcome.result()));
	else
		return GetPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::getPrometheusGlobalViewAsync(const GetPrometheusGlobalViewRequest& request, const GetPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetPrometheusGlobalViewOutcomeCallable ARMSClient::getPrometheusGlobalViewCallable(const GetPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->getPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetPrometheusInstanceOutcome ARMSClient::getPrometheusInstance(const GetPrometheusInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrometheusInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrometheusInstanceOutcome(GetPrometheusInstanceResult(outcome.result()));
	else
		return GetPrometheusInstanceOutcome(outcome.error());
}

void ARMSClient::getPrometheusInstanceAsync(const GetPrometheusInstanceRequest& request, const GetPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrometheusInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetPrometheusInstanceOutcomeCallable ARMSClient::getPrometheusInstanceCallable(const GetPrometheusInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrometheusInstanceOutcome()>>(
			[this, request]()
			{
			return this->getPrometheusInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetPrometheusIntegrationOutcome ARMSClient::getPrometheusIntegration(const GetPrometheusIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrometheusIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrometheusIntegrationOutcome(GetPrometheusIntegrationResult(outcome.result()));
	else
		return GetPrometheusIntegrationOutcome(outcome.error());
}

void ARMSClient::getPrometheusIntegrationAsync(const GetPrometheusIntegrationRequest& request, const GetPrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrometheusIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetPrometheusIntegrationOutcomeCallable ARMSClient::getPrometheusIntegrationCallable(const GetPrometheusIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrometheusIntegrationOutcome()>>(
			[this, request]()
			{
			return this->getPrometheusIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetPrometheusMonitoringOutcome ARMSClient::getPrometheusMonitoring(const GetPrometheusMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPrometheusMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPrometheusMonitoringOutcome(GetPrometheusMonitoringResult(outcome.result()));
	else
		return GetPrometheusMonitoringOutcome(outcome.error());
}

void ARMSClient::getPrometheusMonitoringAsync(const GetPrometheusMonitoringRequest& request, const GetPrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPrometheusMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetPrometheusMonitoringOutcomeCallable ARMSClient::getPrometheusMonitoringCallable(const GetPrometheusMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPrometheusMonitoringOutcome()>>(
			[this, request]()
			{
			return this->getPrometheusMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRecordingRuleOutcome ARMSClient::getRecordingRule(const GetRecordingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRecordingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRecordingRuleOutcome(GetRecordingRuleResult(outcome.result()));
	else
		return GetRecordingRuleOutcome(outcome.error());
}

void ARMSClient::getRecordingRuleAsync(const GetRecordingRuleRequest& request, const GetRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRecordingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRecordingRuleOutcomeCallable ARMSClient::getRecordingRuleCallable(const GetRecordingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRecordingRuleOutcome()>>(
			[this, request]()
			{
			return this->getRecordingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRetcodeAppByPidOutcome ARMSClient::getRetcodeAppByPid(const GetRetcodeAppByPidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRetcodeAppByPidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRetcodeAppByPidOutcome(GetRetcodeAppByPidResult(outcome.result()));
	else
		return GetRetcodeAppByPidOutcome(outcome.error());
}

void ARMSClient::getRetcodeAppByPidAsync(const GetRetcodeAppByPidRequest& request, const GetRetcodeAppByPidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRetcodeAppByPid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRetcodeAppByPidOutcomeCallable ARMSClient::getRetcodeAppByPidCallable(const GetRetcodeAppByPidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRetcodeAppByPidOutcome()>>(
			[this, request]()
			{
			return this->getRetcodeAppByPid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRetcodeDataByQueryOutcome ARMSClient::getRetcodeDataByQuery(const GetRetcodeDataByQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRetcodeDataByQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRetcodeDataByQueryOutcome(GetRetcodeDataByQueryResult(outcome.result()));
	else
		return GetRetcodeDataByQueryOutcome(outcome.error());
}

void ARMSClient::getRetcodeDataByQueryAsync(const GetRetcodeDataByQueryRequest& request, const GetRetcodeDataByQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRetcodeDataByQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRetcodeDataByQueryOutcomeCallable ARMSClient::getRetcodeDataByQueryCallable(const GetRetcodeDataByQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRetcodeDataByQueryOutcome()>>(
			[this, request]()
			{
			return this->getRetcodeDataByQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRetcodeLogstoreOutcome ARMSClient::getRetcodeLogstore(const GetRetcodeLogstoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRetcodeLogstoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRetcodeLogstoreOutcome(GetRetcodeLogstoreResult(outcome.result()));
	else
		return GetRetcodeLogstoreOutcome(outcome.error());
}

void ARMSClient::getRetcodeLogstoreAsync(const GetRetcodeLogstoreRequest& request, const GetRetcodeLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRetcodeLogstore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRetcodeLogstoreOutcomeCallable ARMSClient::getRetcodeLogstoreCallable(const GetRetcodeLogstoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRetcodeLogstoreOutcome()>>(
			[this, request]()
			{
			return this->getRetcodeLogstore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRetcodeShareUrlOutcome ARMSClient::getRetcodeShareUrl(const GetRetcodeShareUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRetcodeShareUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRetcodeShareUrlOutcome(GetRetcodeShareUrlResult(outcome.result()));
	else
		return GetRetcodeShareUrlOutcome(outcome.error());
}

void ARMSClient::getRetcodeShareUrlAsync(const GetRetcodeShareUrlRequest& request, const GetRetcodeShareUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRetcodeShareUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRetcodeShareUrlOutcomeCallable ARMSClient::getRetcodeShareUrlCallable(const GetRetcodeShareUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRetcodeShareUrlOutcome()>>(
			[this, request]()
			{
			return this->getRetcodeShareUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRumAppInfoOutcome ARMSClient::getRumAppInfo(const GetRumAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRumAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRumAppInfoOutcome(GetRumAppInfoResult(outcome.result()));
	else
		return GetRumAppInfoOutcome(outcome.error());
}

void ARMSClient::getRumAppInfoAsync(const GetRumAppInfoRequest& request, const GetRumAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRumAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRumAppInfoOutcomeCallable ARMSClient::getRumAppInfoCallable(const GetRumAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRumAppInfoOutcome()>>(
			[this, request]()
			{
			return this->getRumAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRumAppsOutcome ARMSClient::getRumApps(const GetRumAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRumAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRumAppsOutcome(GetRumAppsResult(outcome.result()));
	else
		return GetRumAppsOutcome(outcome.error());
}

void ARMSClient::getRumAppsAsync(const GetRumAppsRequest& request, const GetRumAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRumApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRumAppsOutcomeCallable ARMSClient::getRumAppsCallable(const GetRumAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRumAppsOutcome()>>(
			[this, request]()
			{
			return this->getRumApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRumDataForPageOutcome ARMSClient::getRumDataForPage(const GetRumDataForPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRumDataForPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRumDataForPageOutcome(GetRumDataForPageResult(outcome.result()));
	else
		return GetRumDataForPageOutcome(outcome.error());
}

void ARMSClient::getRumDataForPageAsync(const GetRumDataForPageRequest& request, const GetRumDataForPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRumDataForPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRumDataForPageOutcomeCallable ARMSClient::getRumDataForPageCallable(const GetRumDataForPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRumDataForPageOutcome()>>(
			[this, request]()
			{
			return this->getRumDataForPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRumExceptionStackOutcome ARMSClient::getRumExceptionStack(const GetRumExceptionStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRumExceptionStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRumExceptionStackOutcome(GetRumExceptionStackResult(outcome.result()));
	else
		return GetRumExceptionStackOutcome(outcome.error());
}

void ARMSClient::getRumExceptionStackAsync(const GetRumExceptionStackRequest& request, const GetRumExceptionStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRumExceptionStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRumExceptionStackOutcomeCallable ARMSClient::getRumExceptionStackCallable(const GetRumExceptionStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRumExceptionStackOutcome()>>(
			[this, request]()
			{
			return this->getRumExceptionStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRumOcuStatisticDataOutcome ARMSClient::getRumOcuStatisticData(const GetRumOcuStatisticDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRumOcuStatisticDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRumOcuStatisticDataOutcome(GetRumOcuStatisticDataResult(outcome.result()));
	else
		return GetRumOcuStatisticDataOutcome(outcome.error());
}

void ARMSClient::getRumOcuStatisticDataAsync(const GetRumOcuStatisticDataRequest& request, const GetRumOcuStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRumOcuStatisticData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRumOcuStatisticDataOutcomeCallable ARMSClient::getRumOcuStatisticDataCallable(const GetRumOcuStatisticDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRumOcuStatisticDataOutcome()>>(
			[this, request]()
			{
			return this->getRumOcuStatisticData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetRumUploadFilesOutcome ARMSClient::getRumUploadFiles(const GetRumUploadFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRumUploadFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRumUploadFilesOutcome(GetRumUploadFilesResult(outcome.result()));
	else
		return GetRumUploadFilesOutcome(outcome.error());
}

void ARMSClient::getRumUploadFilesAsync(const GetRumUploadFilesRequest& request, const GetRumUploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRumUploadFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetRumUploadFilesOutcomeCallable ARMSClient::getRumUploadFilesCallable(const GetRumUploadFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRumUploadFilesOutcome()>>(
			[this, request]()
			{
			return this->getRumUploadFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSourceMapInfoOutcome ARMSClient::getSourceMapInfo(const GetSourceMapInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSourceMapInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSourceMapInfoOutcome(GetSourceMapInfoResult(outcome.result()));
	else
		return GetSourceMapInfoOutcome(outcome.error());
}

void ARMSClient::getSourceMapInfoAsync(const GetSourceMapInfoRequest& request, const GetSourceMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSourceMapInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSourceMapInfoOutcomeCallable ARMSClient::getSourceMapInfoCallable(const GetSourceMapInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSourceMapInfoOutcome()>>(
			[this, request]()
			{
			return this->getSourceMapInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetStackOutcome ARMSClient::getStack(const GetStackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStackOutcome(GetStackResult(outcome.result()));
	else
		return GetStackOutcome(outcome.error());
}

void ARMSClient::getStackAsync(const GetStackRequest& request, const GetStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetStackOutcomeCallable ARMSClient::getStackCallable(const GetStackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStackOutcome()>>(
			[this, request]()
			{
			return this->getStack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSyntheticMonitorsOutcome ARMSClient::getSyntheticMonitors(const GetSyntheticMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSyntheticMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSyntheticMonitorsOutcome(GetSyntheticMonitorsResult(outcome.result()));
	else
		return GetSyntheticMonitorsOutcome(outcome.error());
}

void ARMSClient::getSyntheticMonitorsAsync(const GetSyntheticMonitorsRequest& request, const GetSyntheticMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSyntheticMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSyntheticMonitorsOutcomeCallable ARMSClient::getSyntheticMonitorsCallable(const GetSyntheticMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSyntheticMonitorsOutcome()>>(
			[this, request]()
			{
			return this->getSyntheticMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSyntheticTaskDetailOutcome ARMSClient::getSyntheticTaskDetail(const GetSyntheticTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSyntheticTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSyntheticTaskDetailOutcome(GetSyntheticTaskDetailResult(outcome.result()));
	else
		return GetSyntheticTaskDetailOutcome(outcome.error());
}

void ARMSClient::getSyntheticTaskDetailAsync(const GetSyntheticTaskDetailRequest& request, const GetSyntheticTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSyntheticTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSyntheticTaskDetailOutcomeCallable ARMSClient::getSyntheticTaskDetailCallable(const GetSyntheticTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSyntheticTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->getSyntheticTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSyntheticTaskListOutcome ARMSClient::getSyntheticTaskList(const GetSyntheticTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSyntheticTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSyntheticTaskListOutcome(GetSyntheticTaskListResult(outcome.result()));
	else
		return GetSyntheticTaskListOutcome(outcome.error());
}

void ARMSClient::getSyntheticTaskListAsync(const GetSyntheticTaskListRequest& request, const GetSyntheticTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSyntheticTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSyntheticTaskListOutcomeCallable ARMSClient::getSyntheticTaskListCallable(const GetSyntheticTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSyntheticTaskListOutcome()>>(
			[this, request]()
			{
			return this->getSyntheticTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSyntheticTaskMonitorsOutcome ARMSClient::getSyntheticTaskMonitors(const GetSyntheticTaskMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSyntheticTaskMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSyntheticTaskMonitorsOutcome(GetSyntheticTaskMonitorsResult(outcome.result()));
	else
		return GetSyntheticTaskMonitorsOutcome(outcome.error());
}

void ARMSClient::getSyntheticTaskMonitorsAsync(const GetSyntheticTaskMonitorsRequest& request, const GetSyntheticTaskMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSyntheticTaskMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSyntheticTaskMonitorsOutcomeCallable ARMSClient::getSyntheticTaskMonitorsCallable(const GetSyntheticTaskMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSyntheticTaskMonitorsOutcome()>>(
			[this, request]()
			{
			return this->getSyntheticTaskMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTimingSyntheticTaskOutcome ARMSClient::getTimingSyntheticTask(const GetTimingSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTimingSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTimingSyntheticTaskOutcome(GetTimingSyntheticTaskResult(outcome.result()));
	else
		return GetTimingSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::getTimingSyntheticTaskAsync(const GetTimingSyntheticTaskRequest& request, const GetTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTimingSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTimingSyntheticTaskOutcomeCallable ARMSClient::getTimingSyntheticTaskCallable(const GetTimingSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTimingSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->getTimingSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTraceOutcome ARMSClient::getTrace(const GetTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTraceOutcome(GetTraceResult(outcome.result()));
	else
		return GetTraceOutcome(outcome.error());
}

void ARMSClient::getTraceAsync(const GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTraceOutcomeCallable ARMSClient::getTraceCallable(const GetTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceOutcome()>>(
			[this, request]()
			{
			return this->getTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTraceAppOutcome ARMSClient::getTraceApp(const GetTraceAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTraceAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTraceAppOutcome(GetTraceAppResult(outcome.result()));
	else
		return GetTraceAppOutcome(outcome.error());
}

void ARMSClient::getTraceAppAsync(const GetTraceAppRequest& request, const GetTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTraceApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTraceAppOutcomeCallable ARMSClient::getTraceAppCallable(const GetTraceAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceAppOutcome()>>(
			[this, request]()
			{
			return this->getTraceApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTraceAppConfigOutcome ARMSClient::getTraceAppConfig(const GetTraceAppConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTraceAppConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTraceAppConfigOutcome(GetTraceAppConfigResult(outcome.result()));
	else
		return GetTraceAppConfigOutcome(outcome.error());
}

void ARMSClient::getTraceAppConfigAsync(const GetTraceAppConfigRequest& request, const GetTraceAppConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTraceAppConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTraceAppConfigOutcomeCallable ARMSClient::getTraceAppConfigCallable(const GetTraceAppConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceAppConfigOutcome()>>(
			[this, request]()
			{
			return this->getTraceAppConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ImportAppAlertRulesOutcome ARMSClient::importAppAlertRules(const ImportAppAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportAppAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportAppAlertRulesOutcome(ImportAppAlertRulesResult(outcome.result()));
	else
		return ImportAppAlertRulesOutcome(outcome.error());
}

void ARMSClient::importAppAlertRulesAsync(const ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importAppAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ImportAppAlertRulesOutcomeCallable ARMSClient::importAppAlertRulesCallable(const ImportAppAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportAppAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->importAppAlertRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::InitEnvironmentOutcome ARMSClient::initEnvironment(const InitEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitEnvironmentOutcome(InitEnvironmentResult(outcome.result()));
	else
		return InitEnvironmentOutcome(outcome.error());
}

void ARMSClient::initEnvironmentAsync(const InitEnvironmentRequest& request, const InitEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::InitEnvironmentOutcomeCallable ARMSClient::initEnvironmentCallable(const InitEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->initEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::InstallAddonOutcome ARMSClient::installAddon(const InstallAddonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallAddonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallAddonOutcome(InstallAddonResult(outcome.result()));
	else
		return InstallAddonOutcome(outcome.error());
}

void ARMSClient::installAddonAsync(const InstallAddonRequest& request, const InstallAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installAddon(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::InstallAddonOutcomeCallable ARMSClient::installAddonCallable(const InstallAddonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallAddonOutcome()>>(
			[this, request]()
			{
			return this->installAddon(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::InstallCmsExporterOutcome ARMSClient::installCmsExporter(const InstallCmsExporterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallCmsExporterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallCmsExporterOutcome(InstallCmsExporterResult(outcome.result()));
	else
		return InstallCmsExporterOutcome(outcome.error());
}

void ARMSClient::installCmsExporterAsync(const InstallCmsExporterRequest& request, const InstallCmsExporterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installCmsExporter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::InstallCmsExporterOutcomeCallable ARMSClient::installCmsExporterCallable(const InstallCmsExporterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallCmsExporterOutcome()>>(
			[this, request]()
			{
			return this->installCmsExporter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::InstallEnvironmentFeatureOutcome ARMSClient::installEnvironmentFeature(const InstallEnvironmentFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallEnvironmentFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallEnvironmentFeatureOutcome(InstallEnvironmentFeatureResult(outcome.result()));
	else
		return InstallEnvironmentFeatureOutcome(outcome.error());
}

void ARMSClient::installEnvironmentFeatureAsync(const InstallEnvironmentFeatureRequest& request, const InstallEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installEnvironmentFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::InstallEnvironmentFeatureOutcomeCallable ARMSClient::installEnvironmentFeatureCallable(const InstallEnvironmentFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallEnvironmentFeatureOutcome()>>(
			[this, request]()
			{
			return this->installEnvironmentFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::InstallManagedPrometheusOutcome ARMSClient::installManagedPrometheus(const InstallManagedPrometheusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallManagedPrometheusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallManagedPrometheusOutcome(InstallManagedPrometheusResult(outcome.result()));
	else
		return InstallManagedPrometheusOutcome(outcome.error());
}

void ARMSClient::installManagedPrometheusAsync(const InstallManagedPrometheusRequest& request, const InstallManagedPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installManagedPrometheus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::InstallManagedPrometheusOutcomeCallable ARMSClient::installManagedPrometheusCallable(const InstallManagedPrometheusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallManagedPrometheusOutcome()>>(
			[this, request]()
			{
			return this->installManagedPrometheus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListActivatedAlertsOutcome ARMSClient::listActivatedAlerts(const ListActivatedAlertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListActivatedAlertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListActivatedAlertsOutcome(ListActivatedAlertsResult(outcome.result()));
	else
		return ListActivatedAlertsOutcome(outcome.error());
}

void ARMSClient::listActivatedAlertsAsync(const ListActivatedAlertsRequest& request, const ListActivatedAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listActivatedAlerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListActivatedAlertsOutcomeCallable ARMSClient::listActivatedAlertsCallable(const ListActivatedAlertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListActivatedAlertsOutcome()>>(
			[this, request]()
			{
			return this->listActivatedAlerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListAddonReleasesOutcome ARMSClient::listAddonReleases(const ListAddonReleasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAddonReleasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAddonReleasesOutcome(ListAddonReleasesResult(outcome.result()));
	else
		return ListAddonReleasesOutcome(outcome.error());
}

void ARMSClient::listAddonReleasesAsync(const ListAddonReleasesRequest& request, const ListAddonReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAddonReleases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListAddonReleasesOutcomeCallable ARMSClient::listAddonReleasesCallable(const ListAddonReleasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAddonReleasesOutcome()>>(
			[this, request]()
			{
			return this->listAddonReleases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListAddonsOutcome ARMSClient::listAddons(const ListAddonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAddonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAddonsOutcome(ListAddonsResult(outcome.result()));
	else
		return ListAddonsOutcome(outcome.error());
}

void ARMSClient::listAddonsAsync(const ListAddonsRequest& request, const ListAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAddons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListAddonsOutcomeCallable ARMSClient::listAddonsCallable(const ListAddonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAddonsOutcome()>>(
			[this, request]()
			{
			return this->listAddons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListAlertEventsOutcome ARMSClient::listAlertEvents(const ListAlertEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertEventsOutcome(ListAlertEventsResult(outcome.result()));
	else
		return ListAlertEventsOutcome(outcome.error());
}

void ARMSClient::listAlertEventsAsync(const ListAlertEventsRequest& request, const ListAlertEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlertEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListAlertEventsOutcomeCallable ARMSClient::listAlertEventsCallable(const ListAlertEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertEventsOutcome()>>(
			[this, request]()
			{
			return this->listAlertEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListAlertsOutcome ARMSClient::listAlerts(const ListAlertsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertsOutcome(ListAlertsResult(outcome.result()));
	else
		return ListAlertsOutcome(outcome.error());
}

void ARMSClient::listAlertsAsync(const ListAlertsRequest& request, const ListAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListAlertsOutcomeCallable ARMSClient::listAlertsCallable(const ListAlertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertsOutcome()>>(
			[this, request]()
			{
			return this->listAlerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListClusterFromGrafanaOutcome ARMSClient::listClusterFromGrafana(const ListClusterFromGrafanaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterFromGrafanaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterFromGrafanaOutcome(ListClusterFromGrafanaResult(outcome.result()));
	else
		return ListClusterFromGrafanaOutcome(outcome.error());
}

void ARMSClient::listClusterFromGrafanaAsync(const ListClusterFromGrafanaRequest& request, const ListClusterFromGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterFromGrafana(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListClusterFromGrafanaOutcomeCallable ARMSClient::listClusterFromGrafanaCallable(const ListClusterFromGrafanaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterFromGrafanaOutcome()>>(
			[this, request]()
			{
			return this->listClusterFromGrafana(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListCmsInstancesOutcome ARMSClient::listCmsInstances(const ListCmsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCmsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCmsInstancesOutcome(ListCmsInstancesResult(outcome.result()));
	else
		return ListCmsInstancesOutcome(outcome.error());
}

void ARMSClient::listCmsInstancesAsync(const ListCmsInstancesRequest& request, const ListCmsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCmsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListCmsInstancesOutcomeCallable ARMSClient::listCmsInstancesCallable(const ListCmsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCmsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listCmsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListDashboardsOutcome ARMSClient::listDashboards(const ListDashboardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardsOutcome(ListDashboardsResult(outcome.result()));
	else
		return ListDashboardsOutcome(outcome.error());
}

void ARMSClient::listDashboardsAsync(const ListDashboardsRequest& request, const ListDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListDashboardsOutcomeCallable ARMSClient::listDashboardsCallable(const ListDashboardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardsOutcome()>>(
			[this, request]()
			{
			return this->listDashboards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListDashboardsByNameOutcome ARMSClient::listDashboardsByName(const ListDashboardsByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDashboardsByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDashboardsByNameOutcome(ListDashboardsByNameResult(outcome.result()));
	else
		return ListDashboardsByNameOutcome(outcome.error());
}

void ARMSClient::listDashboardsByNameAsync(const ListDashboardsByNameRequest& request, const ListDashboardsByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDashboardsByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListDashboardsByNameOutcomeCallable ARMSClient::listDashboardsByNameCallable(const ListDashboardsByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDashboardsByNameOutcome()>>(
			[this, request]()
			{
			return this->listDashboardsByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListDispatchRuleOutcome ARMSClient::listDispatchRule(const ListDispatchRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDispatchRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDispatchRuleOutcome(ListDispatchRuleResult(outcome.result()));
	else
		return ListDispatchRuleOutcome(outcome.error());
}

void ARMSClient::listDispatchRuleAsync(const ListDispatchRuleRequest& request, const ListDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDispatchRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListDispatchRuleOutcomeCallable ARMSClient::listDispatchRuleCallable(const ListDispatchRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDispatchRuleOutcome()>>(
			[this, request]()
			{
			return this->listDispatchRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEnvCustomJobsOutcome ARMSClient::listEnvCustomJobs(const ListEnvCustomJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvCustomJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvCustomJobsOutcome(ListEnvCustomJobsResult(outcome.result()));
	else
		return ListEnvCustomJobsOutcome(outcome.error());
}

void ARMSClient::listEnvCustomJobsAsync(const ListEnvCustomJobsRequest& request, const ListEnvCustomJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvCustomJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEnvCustomJobsOutcomeCallable ARMSClient::listEnvCustomJobsCallable(const ListEnvCustomJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvCustomJobsOutcome()>>(
			[this, request]()
			{
			return this->listEnvCustomJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEnvPodMonitorsOutcome ARMSClient::listEnvPodMonitors(const ListEnvPodMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvPodMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvPodMonitorsOutcome(ListEnvPodMonitorsResult(outcome.result()));
	else
		return ListEnvPodMonitorsOutcome(outcome.error());
}

void ARMSClient::listEnvPodMonitorsAsync(const ListEnvPodMonitorsRequest& request, const ListEnvPodMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvPodMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEnvPodMonitorsOutcomeCallable ARMSClient::listEnvPodMonitorsCallable(const ListEnvPodMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvPodMonitorsOutcome()>>(
			[this, request]()
			{
			return this->listEnvPodMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEnvServiceMonitorsOutcome ARMSClient::listEnvServiceMonitors(const ListEnvServiceMonitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvServiceMonitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvServiceMonitorsOutcome(ListEnvServiceMonitorsResult(outcome.result()));
	else
		return ListEnvServiceMonitorsOutcome(outcome.error());
}

void ARMSClient::listEnvServiceMonitorsAsync(const ListEnvServiceMonitorsRequest& request, const ListEnvServiceMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvServiceMonitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEnvServiceMonitorsOutcomeCallable ARMSClient::listEnvServiceMonitorsCallable(const ListEnvServiceMonitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvServiceMonitorsOutcome()>>(
			[this, request]()
			{
			return this->listEnvServiceMonitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEnvironmentDashboardsOutcome ARMSClient::listEnvironmentDashboards(const ListEnvironmentDashboardsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvironmentDashboardsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvironmentDashboardsOutcome(ListEnvironmentDashboardsResult(outcome.result()));
	else
		return ListEnvironmentDashboardsOutcome(outcome.error());
}

void ARMSClient::listEnvironmentDashboardsAsync(const ListEnvironmentDashboardsRequest& request, const ListEnvironmentDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvironmentDashboards(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEnvironmentDashboardsOutcomeCallable ARMSClient::listEnvironmentDashboardsCallable(const ListEnvironmentDashboardsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvironmentDashboardsOutcome()>>(
			[this, request]()
			{
			return this->listEnvironmentDashboards(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEnvironmentFeaturesOutcome ARMSClient::listEnvironmentFeatures(const ListEnvironmentFeaturesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvironmentFeaturesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvironmentFeaturesOutcome(ListEnvironmentFeaturesResult(outcome.result()));
	else
		return ListEnvironmentFeaturesOutcome(outcome.error());
}

void ARMSClient::listEnvironmentFeaturesAsync(const ListEnvironmentFeaturesRequest& request, const ListEnvironmentFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvironmentFeatures(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEnvironmentFeaturesOutcomeCallable ARMSClient::listEnvironmentFeaturesCallable(const ListEnvironmentFeaturesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvironmentFeaturesOutcome()>>(
			[this, request]()
			{
			return this->listEnvironmentFeatures(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEnvironmentsOutcome ARMSClient::listEnvironments(const ListEnvironmentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnvironmentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnvironmentsOutcome(ListEnvironmentsResult(outcome.result()));
	else
		return ListEnvironmentsOutcome(outcome.error());
}

void ARMSClient::listEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnvironments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEnvironmentsOutcomeCallable ARMSClient::listEnvironmentsCallable(const ListEnvironmentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnvironmentsOutcome()>>(
			[this, request]()
			{
			return this->listEnvironments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEscalationPoliciesOutcome ARMSClient::listEscalationPolicies(const ListEscalationPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEscalationPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEscalationPoliciesOutcome(ListEscalationPoliciesResult(outcome.result()));
	else
		return ListEscalationPoliciesOutcome(outcome.error());
}

void ARMSClient::listEscalationPoliciesAsync(const ListEscalationPoliciesRequest& request, const ListEscalationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEscalationPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEscalationPoliciesOutcomeCallable ARMSClient::listEscalationPoliciesCallable(const ListEscalationPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEscalationPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listEscalationPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListEventBridgeIntegrationsOutcome ARMSClient::listEventBridgeIntegrations(const ListEventBridgeIntegrationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventBridgeIntegrationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventBridgeIntegrationsOutcome(ListEventBridgeIntegrationsResult(outcome.result()));
	else
		return ListEventBridgeIntegrationsOutcome(outcome.error());
}

void ARMSClient::listEventBridgeIntegrationsAsync(const ListEventBridgeIntegrationsRequest& request, const ListEventBridgeIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventBridgeIntegrations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListEventBridgeIntegrationsOutcomeCallable ARMSClient::listEventBridgeIntegrationsCallable(const ListEventBridgeIntegrationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventBridgeIntegrationsOutcome()>>(
			[this, request]()
			{
			return this->listEventBridgeIntegrations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListGrafanaWorkspaceOutcome ARMSClient::listGrafanaWorkspace(const ListGrafanaWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGrafanaWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGrafanaWorkspaceOutcome(ListGrafanaWorkspaceResult(outcome.result()));
	else
		return ListGrafanaWorkspaceOutcome(outcome.error());
}

void ARMSClient::listGrafanaWorkspaceAsync(const ListGrafanaWorkspaceRequest& request, const ListGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGrafanaWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListGrafanaWorkspaceOutcomeCallable ARMSClient::listGrafanaWorkspaceCallable(const ListGrafanaWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGrafanaWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->listGrafanaWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListInsightsEventsOutcome ARMSClient::listInsightsEvents(const ListInsightsEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInsightsEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInsightsEventsOutcome(ListInsightsEventsResult(outcome.result()));
	else
		return ListInsightsEventsOutcome(outcome.error());
}

void ARMSClient::listInsightsEventsAsync(const ListInsightsEventsRequest& request, const ListInsightsEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInsightsEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListInsightsEventsOutcomeCallable ARMSClient::listInsightsEventsCallable(const ListInsightsEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInsightsEventsOutcome()>>(
			[this, request]()
			{
			return this->listInsightsEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListIntegrationOutcome ARMSClient::listIntegration(const ListIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIntegrationOutcome(ListIntegrationResult(outcome.result()));
	else
		return ListIntegrationOutcome(outcome.error());
}

void ARMSClient::listIntegrationAsync(const ListIntegrationRequest& request, const ListIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListIntegrationOutcomeCallable ARMSClient::listIntegrationCallable(const ListIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIntegrationOutcome()>>(
			[this, request]()
			{
			return this->listIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListNotificationPoliciesOutcome ARMSClient::listNotificationPolicies(const ListNotificationPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotificationPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotificationPoliciesOutcome(ListNotificationPoliciesResult(outcome.result()));
	else
		return ListNotificationPoliciesOutcome(outcome.error());
}

void ARMSClient::listNotificationPoliciesAsync(const ListNotificationPoliciesRequest& request, const ListNotificationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotificationPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListNotificationPoliciesOutcomeCallable ARMSClient::listNotificationPoliciesCallable(const ListNotificationPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotificationPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listNotificationPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListOnCallSchedulesOutcome ARMSClient::listOnCallSchedules(const ListOnCallSchedulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOnCallSchedulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOnCallSchedulesOutcome(ListOnCallSchedulesResult(outcome.result()));
	else
		return ListOnCallSchedulesOutcome(outcome.error());
}

void ARMSClient::listOnCallSchedulesAsync(const ListOnCallSchedulesRequest& request, const ListOnCallSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOnCallSchedules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListOnCallSchedulesOutcomeCallable ARMSClient::listOnCallSchedulesCallable(const ListOnCallSchedulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOnCallSchedulesOutcome()>>(
			[this, request]()
			{
			return this->listOnCallSchedules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusAlertRulesOutcome ARMSClient::listPrometheusAlertRules(const ListPrometheusAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusAlertRulesOutcome(ListPrometheusAlertRulesResult(outcome.result()));
	else
		return ListPrometheusAlertRulesOutcome(outcome.error());
}

void ARMSClient::listPrometheusAlertRulesAsync(const ListPrometheusAlertRulesRequest& request, const ListPrometheusAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusAlertRulesOutcomeCallable ARMSClient::listPrometheusAlertRulesCallable(const ListPrometheusAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusAlertRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusAlertTemplatesOutcome ARMSClient::listPrometheusAlertTemplates(const ListPrometheusAlertTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusAlertTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusAlertTemplatesOutcome(ListPrometheusAlertTemplatesResult(outcome.result()));
	else
		return ListPrometheusAlertTemplatesOutcome(outcome.error());
}

void ARMSClient::listPrometheusAlertTemplatesAsync(const ListPrometheusAlertTemplatesRequest& request, const ListPrometheusAlertTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusAlertTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusAlertTemplatesOutcomeCallable ARMSClient::listPrometheusAlertTemplatesCallable(const ListPrometheusAlertTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusAlertTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusAlertTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusGlobalViewOutcome ARMSClient::listPrometheusGlobalView(const ListPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusGlobalViewOutcome(ListPrometheusGlobalViewResult(outcome.result()));
	else
		return ListPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::listPrometheusGlobalViewAsync(const ListPrometheusGlobalViewRequest& request, const ListPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusGlobalViewOutcomeCallable ARMSClient::listPrometheusGlobalViewCallable(const ListPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusInstanceByTagAndResourceGroupIdOutcome ARMSClient::listPrometheusInstanceByTagAndResourceGroupId(const ListPrometheusInstanceByTagAndResourceGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusInstanceByTagAndResourceGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusInstanceByTagAndResourceGroupIdOutcome(ListPrometheusInstanceByTagAndResourceGroupIdResult(outcome.result()));
	else
		return ListPrometheusInstanceByTagAndResourceGroupIdOutcome(outcome.error());
}

void ARMSClient::listPrometheusInstanceByTagAndResourceGroupIdAsync(const ListPrometheusInstanceByTagAndResourceGroupIdRequest& request, const ListPrometheusInstanceByTagAndResourceGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusInstanceByTagAndResourceGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusInstanceByTagAndResourceGroupIdOutcomeCallable ARMSClient::listPrometheusInstanceByTagAndResourceGroupIdCallable(const ListPrometheusInstanceByTagAndResourceGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusInstanceByTagAndResourceGroupIdOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusInstanceByTagAndResourceGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusInstancesOutcome ARMSClient::listPrometheusInstances(const ListPrometheusInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusInstancesOutcome(ListPrometheusInstancesResult(outcome.result()));
	else
		return ListPrometheusInstancesOutcome(outcome.error());
}

void ARMSClient::listPrometheusInstancesAsync(const ListPrometheusInstancesRequest& request, const ListPrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusInstancesOutcomeCallable ARMSClient::listPrometheusInstancesCallable(const ListPrometheusInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusInstancesOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusIntegrationOutcome ARMSClient::listPrometheusIntegration(const ListPrometheusIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusIntegrationOutcome(ListPrometheusIntegrationResult(outcome.result()));
	else
		return ListPrometheusIntegrationOutcome(outcome.error());
}

void ARMSClient::listPrometheusIntegrationAsync(const ListPrometheusIntegrationRequest& request, const ListPrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusIntegrationOutcomeCallable ARMSClient::listPrometheusIntegrationCallable(const ListPrometheusIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusIntegrationOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListPrometheusMonitoringOutcome ARMSClient::listPrometheusMonitoring(const ListPrometheusMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrometheusMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrometheusMonitoringOutcome(ListPrometheusMonitoringResult(outcome.result()));
	else
		return ListPrometheusMonitoringOutcome(outcome.error());
}

void ARMSClient::listPrometheusMonitoringAsync(const ListPrometheusMonitoringRequest& request, const ListPrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrometheusMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPrometheusMonitoringOutcomeCallable ARMSClient::listPrometheusMonitoringCallable(const ListPrometheusMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrometheusMonitoringOutcome()>>(
			[this, request]()
			{
			return this->listPrometheusMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListRetcodeAppsOutcome ARMSClient::listRetcodeApps(const ListRetcodeAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRetcodeAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRetcodeAppsOutcome(ListRetcodeAppsResult(outcome.result()));
	else
		return ListRetcodeAppsOutcome(outcome.error());
}

void ARMSClient::listRetcodeAppsAsync(const ListRetcodeAppsRequest& request, const ListRetcodeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRetcodeApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListRetcodeAppsOutcomeCallable ARMSClient::listRetcodeAppsCallable(const ListRetcodeAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRetcodeAppsOutcome()>>(
			[this, request]()
			{
			return this->listRetcodeApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListScenarioOutcome ARMSClient::listScenario(const ListScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenarioOutcome(ListScenarioResult(outcome.result()));
	else
		return ListScenarioOutcome(outcome.error());
}

void ARMSClient::listScenarioAsync(const ListScenarioRequest& request, const ListScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListScenarioOutcomeCallable ARMSClient::listScenarioCallable(const ListScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenarioOutcome()>>(
			[this, request]()
			{
			return this->listScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListSilencePoliciesOutcome ARMSClient::listSilencePolicies(const ListSilencePoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSilencePoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSilencePoliciesOutcome(ListSilencePoliciesResult(outcome.result()));
	else
		return ListSilencePoliciesOutcome(outcome.error());
}

void ARMSClient::listSilencePoliciesAsync(const ListSilencePoliciesRequest& request, const ListSilencePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSilencePolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListSilencePoliciesOutcomeCallable ARMSClient::listSilencePoliciesCallable(const ListSilencePoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSilencePoliciesOutcome()>>(
			[this, request]()
			{
			return this->listSilencePolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListSyntheticDetailOutcome ARMSClient::listSyntheticDetail(const ListSyntheticDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSyntheticDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSyntheticDetailOutcome(ListSyntheticDetailResult(outcome.result()));
	else
		return ListSyntheticDetailOutcome(outcome.error());
}

void ARMSClient::listSyntheticDetailAsync(const ListSyntheticDetailRequest& request, const ListSyntheticDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSyntheticDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListSyntheticDetailOutcomeCallable ARMSClient::listSyntheticDetailCallable(const ListSyntheticDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSyntheticDetailOutcome()>>(
			[this, request]()
			{
			return this->listSyntheticDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListTimingSyntheticTasksOutcome ARMSClient::listTimingSyntheticTasks(const ListTimingSyntheticTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTimingSyntheticTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTimingSyntheticTasksOutcome(ListTimingSyntheticTasksResult(outcome.result()));
	else
		return ListTimingSyntheticTasksOutcome(outcome.error());
}

void ARMSClient::listTimingSyntheticTasksAsync(const ListTimingSyntheticTasksRequest& request, const ListTimingSyntheticTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTimingSyntheticTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListTimingSyntheticTasksOutcomeCallable ARMSClient::listTimingSyntheticTasksCallable(const ListTimingSyntheticTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTimingSyntheticTasksOutcome()>>(
			[this, request]()
			{
			return this->listTimingSyntheticTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ListTraceAppsOutcome ARMSClient::listTraceApps(const ListTraceAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTraceAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTraceAppsOutcome(ListTraceAppsResult(outcome.result()));
	else
		return ListTraceAppsOutcome(outcome.error());
}

void ARMSClient::listTraceAppsAsync(const ListTraceAppsRequest& request, const ListTraceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTraceApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListTraceAppsOutcomeCallable ARMSClient::listTraceAppsCallable(const ListTraceAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTraceAppsOutcome()>>(
			[this, request]()
			{
			return this->listTraceApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ManageGetRecordingRuleOutcome ARMSClient::manageGetRecordingRule(const ManageGetRecordingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManageGetRecordingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManageGetRecordingRuleOutcome(ManageGetRecordingRuleResult(outcome.result()));
	else
		return ManageGetRecordingRuleOutcome(outcome.error());
}

void ARMSClient::manageGetRecordingRuleAsync(const ManageGetRecordingRuleRequest& request, const ManageGetRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manageGetRecordingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ManageGetRecordingRuleOutcomeCallable ARMSClient::manageGetRecordingRuleCallable(const ManageGetRecordingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManageGetRecordingRuleOutcome()>>(
			[this, request]()
			{
			return this->manageGetRecordingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ManageRecordingRuleOutcome ARMSClient::manageRecordingRule(const ManageRecordingRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManageRecordingRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManageRecordingRuleOutcome(ManageRecordingRuleResult(outcome.result()));
	else
		return ManageRecordingRuleOutcome(outcome.error());
}

void ARMSClient::manageRecordingRuleAsync(const ManageRecordingRuleRequest& request, const ManageRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manageRecordingRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ManageRecordingRuleOutcomeCallable ARMSClient::manageRecordingRuleCallable(const ManageRecordingRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManageRecordingRuleOutcome()>>(
			[this, request]()
			{
			return this->manageRecordingRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::OpenArmsDefaultSLROutcome ARMSClient::openArmsDefaultSLR(const OpenArmsDefaultSLRRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenArmsDefaultSLROutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenArmsDefaultSLROutcome(OpenArmsDefaultSLRResult(outcome.result()));
	else
		return OpenArmsDefaultSLROutcome(outcome.error());
}

void ARMSClient::openArmsDefaultSLRAsync(const OpenArmsDefaultSLRRequest& request, const OpenArmsDefaultSLRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openArmsDefaultSLR(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::OpenArmsDefaultSLROutcomeCallable ARMSClient::openArmsDefaultSLRCallable(const OpenArmsDefaultSLRRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenArmsDefaultSLROutcome()>>(
			[this, request]()
			{
			return this->openArmsDefaultSLR(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::OpenArmsServiceSecondVersionOutcome ARMSClient::openArmsServiceSecondVersion(const OpenArmsServiceSecondVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenArmsServiceSecondVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenArmsServiceSecondVersionOutcome(OpenArmsServiceSecondVersionResult(outcome.result()));
	else
		return OpenArmsServiceSecondVersionOutcome(outcome.error());
}

void ARMSClient::openArmsServiceSecondVersionAsync(const OpenArmsServiceSecondVersionRequest& request, const OpenArmsServiceSecondVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openArmsServiceSecondVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::OpenArmsServiceSecondVersionOutcomeCallable ARMSClient::openArmsServiceSecondVersionCallable(const OpenArmsServiceSecondVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenArmsServiceSecondVersionOutcome()>>(
			[this, request]()
			{
			return this->openArmsServiceSecondVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::OpenVClusterOutcome ARMSClient::openVCluster(const OpenVClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenVClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenVClusterOutcome(OpenVClusterResult(outcome.result()));
	else
		return OpenVClusterOutcome(outcome.error());
}

void ARMSClient::openVClusterAsync(const OpenVClusterRequest& request, const OpenVClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openVCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::OpenVClusterOutcomeCallable ARMSClient::openVClusterCallable(const OpenVClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenVClusterOutcome()>>(
			[this, request]()
			{
			return this->openVCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::OpenXtraceDefaultSLROutcome ARMSClient::openXtraceDefaultSLR(const OpenXtraceDefaultSLRRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenXtraceDefaultSLROutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenXtraceDefaultSLROutcome(OpenXtraceDefaultSLRResult(outcome.result()));
	else
		return OpenXtraceDefaultSLROutcome(outcome.error());
}

void ARMSClient::openXtraceDefaultSLRAsync(const OpenXtraceDefaultSLRRequest& request, const OpenXtraceDefaultSLRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openXtraceDefaultSLR(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::OpenXtraceDefaultSLROutcomeCallable ARMSClient::openXtraceDefaultSLRCallable(const OpenXtraceDefaultSLRRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenXtraceDefaultSLROutcome()>>(
			[this, request]()
			{
			return this->openXtraceDefaultSLR(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryAppMetadataOutcome ARMSClient::queryAppMetadata(const QueryAppMetadataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAppMetadataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAppMetadataOutcome(QueryAppMetadataResult(outcome.result()));
	else
		return QueryAppMetadataOutcome(outcome.error());
}

void ARMSClient::queryAppMetadataAsync(const QueryAppMetadataRequest& request, const QueryAppMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAppMetadata(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryAppMetadataOutcomeCallable ARMSClient::queryAppMetadataCallable(const QueryAppMetadataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAppMetadataOutcome()>>(
			[this, request]()
			{
			return this->queryAppMetadata(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryAppTopologyOutcome ARMSClient::queryAppTopology(const QueryAppTopologyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAppTopologyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAppTopologyOutcome(QueryAppTopologyResult(outcome.result()));
	else
		return QueryAppTopologyOutcome(outcome.error());
}

void ARMSClient::queryAppTopologyAsync(const QueryAppTopologyRequest& request, const QueryAppTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAppTopology(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryAppTopologyOutcomeCallable ARMSClient::queryAppTopologyCallable(const QueryAppTopologyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAppTopologyOutcome()>>(
			[this, request]()
			{
			return this->queryAppTopology(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryCommercialUsageOutcome ARMSClient::queryCommercialUsage(const QueryCommercialUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCommercialUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCommercialUsageOutcome(QueryCommercialUsageResult(outcome.result()));
	else
		return QueryCommercialUsageOutcome(outcome.error());
}

void ARMSClient::queryCommercialUsageAsync(const QueryCommercialUsageRequest& request, const QueryCommercialUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCommercialUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryCommercialUsageOutcomeCallable ARMSClient::queryCommercialUsageCallable(const QueryCommercialUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCommercialUsageOutcome()>>(
			[this, request]()
			{
			return this->queryCommercialUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryMetricByPageOutcome ARMSClient::queryMetricByPage(const QueryMetricByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricByPageOutcome(QueryMetricByPageResult(outcome.result()));
	else
		return QueryMetricByPageOutcome(outcome.error());
}

void ARMSClient::queryMetricByPageAsync(const QueryMetricByPageRequest& request, const QueryMetricByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetricByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryMetricByPageOutcomeCallable ARMSClient::queryMetricByPageCallable(const QueryMetricByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricByPageOutcome()>>(
			[this, request]()
			{
			return this->queryMetricByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryPromInstallStatusOutcome ARMSClient::queryPromInstallStatus(const QueryPromInstallStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPromInstallStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPromInstallStatusOutcome(QueryPromInstallStatusResult(outcome.result()));
	else
		return QueryPromInstallStatusOutcome(outcome.error());
}

void ARMSClient::queryPromInstallStatusAsync(const QueryPromInstallStatusRequest& request, const QueryPromInstallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPromInstallStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryPromInstallStatusOutcomeCallable ARMSClient::queryPromInstallStatusCallable(const QueryPromInstallStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPromInstallStatusOutcome()>>(
			[this, request]()
			{
			return this->queryPromInstallStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryReleaseMetricOutcome ARMSClient::queryReleaseMetric(const QueryReleaseMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryReleaseMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryReleaseMetricOutcome(QueryReleaseMetricResult(outcome.result()));
	else
		return QueryReleaseMetricOutcome(outcome.error());
}

void ARMSClient::queryReleaseMetricAsync(const QueryReleaseMetricRequest& request, const QueryReleaseMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryReleaseMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryReleaseMetricOutcomeCallable ARMSClient::queryReleaseMetricCallable(const QueryReleaseMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryReleaseMetricOutcome()>>(
			[this, request]()
			{
			return this->queryReleaseMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::RemoveAliClusterIdsFromPrometheusGlobalViewOutcome ARMSClient::removeAliClusterIdsFromPrometheusGlobalView(const RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveAliClusterIdsFromPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveAliClusterIdsFromPrometheusGlobalViewOutcome(RemoveAliClusterIdsFromPrometheusGlobalViewResult(outcome.result()));
	else
		return RemoveAliClusterIdsFromPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::removeAliClusterIdsFromPrometheusGlobalViewAsync(const RemoveAliClusterIdsFromPrometheusGlobalViewRequest& request, const RemoveAliClusterIdsFromPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeAliClusterIdsFromPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::RemoveAliClusterIdsFromPrometheusGlobalViewOutcomeCallable ARMSClient::removeAliClusterIdsFromPrometheusGlobalViewCallable(const RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveAliClusterIdsFromPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->removeAliClusterIdsFromPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::RemoveSourcesFromPrometheusGlobalViewOutcome ARMSClient::removeSourcesFromPrometheusGlobalView(const RemoveSourcesFromPrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSourcesFromPrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSourcesFromPrometheusGlobalViewOutcome(RemoveSourcesFromPrometheusGlobalViewResult(outcome.result()));
	else
		return RemoveSourcesFromPrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::removeSourcesFromPrometheusGlobalViewAsync(const RemoveSourcesFromPrometheusGlobalViewRequest& request, const RemoveSourcesFromPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSourcesFromPrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::RemoveSourcesFromPrometheusGlobalViewOutcomeCallable ARMSClient::removeSourcesFromPrometheusGlobalViewCallable(const RemoveSourcesFromPrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSourcesFromPrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->removeSourcesFromPrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::RestartEnvironmentFeatureOutcome ARMSClient::restartEnvironmentFeature(const RestartEnvironmentFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartEnvironmentFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartEnvironmentFeatureOutcome(RestartEnvironmentFeatureResult(outcome.result()));
	else
		return RestartEnvironmentFeatureOutcome(outcome.error());
}

void ARMSClient::restartEnvironmentFeatureAsync(const RestartEnvironmentFeatureRequest& request, const RestartEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartEnvironmentFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::RestartEnvironmentFeatureOutcomeCallable ARMSClient::restartEnvironmentFeatureCallable(const RestartEnvironmentFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartEnvironmentFeatureOutcome()>>(
			[this, request]()
			{
			return this->restartEnvironmentFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SaveTraceAppConfigOutcome ARMSClient::saveTraceAppConfig(const SaveTraceAppConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTraceAppConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTraceAppConfigOutcome(SaveTraceAppConfigResult(outcome.result()));
	else
		return SaveTraceAppConfigOutcome(outcome.error());
}

void ARMSClient::saveTraceAppConfigAsync(const SaveTraceAppConfigRequest& request, const SaveTraceAppConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTraceAppConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SaveTraceAppConfigOutcomeCallable ARMSClient::saveTraceAppConfigCallable(const SaveTraceAppConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTraceAppConfigOutcome()>>(
			[this, request]()
			{
			return this->saveTraceAppConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchAlertContactOutcome ARMSClient::searchAlertContact(const SearchAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAlertContactOutcome(SearchAlertContactResult(outcome.result()));
	else
		return SearchAlertContactOutcome(outcome.error());
}

void ARMSClient::searchAlertContactAsync(const SearchAlertContactRequest& request, const SearchAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchAlertContactOutcomeCallable ARMSClient::searchAlertContactCallable(const SearchAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAlertContactOutcome()>>(
			[this, request]()
			{
			return this->searchAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchAlertContactGroupOutcome ARMSClient::searchAlertContactGroup(const SearchAlertContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAlertContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAlertContactGroupOutcome(SearchAlertContactGroupResult(outcome.result()));
	else
		return SearchAlertContactGroupOutcome(outcome.error());
}

void ARMSClient::searchAlertContactGroupAsync(const SearchAlertContactGroupRequest& request, const SearchAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAlertContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchAlertContactGroupOutcomeCallable ARMSClient::searchAlertContactGroupCallable(const SearchAlertContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAlertContactGroupOutcome()>>(
			[this, request]()
			{
			return this->searchAlertContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchAlertHistoriesOutcome ARMSClient::searchAlertHistories(const SearchAlertHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAlertHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAlertHistoriesOutcome(SearchAlertHistoriesResult(outcome.result()));
	else
		return SearchAlertHistoriesOutcome(outcome.error());
}

void ARMSClient::searchAlertHistoriesAsync(const SearchAlertHistoriesRequest& request, const SearchAlertHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAlertHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchAlertHistoriesOutcomeCallable ARMSClient::searchAlertHistoriesCallable(const SearchAlertHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAlertHistoriesOutcome()>>(
			[this, request]()
			{
			return this->searchAlertHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchAlertRulesOutcome ARMSClient::searchAlertRules(const SearchAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchAlertRulesOutcome(SearchAlertRulesResult(outcome.result()));
	else
		return SearchAlertRulesOutcome(outcome.error());
}

void ARMSClient::searchAlertRulesAsync(const SearchAlertRulesRequest& request, const SearchAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchAlertRulesOutcomeCallable ARMSClient::searchAlertRulesCallable(const SearchAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->searchAlertRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchEventsOutcome ARMSClient::searchEvents(const SearchEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchEventsOutcome(SearchEventsResult(outcome.result()));
	else
		return SearchEventsOutcome(outcome.error());
}

void ARMSClient::searchEventsAsync(const SearchEventsRequest& request, const SearchEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchEventsOutcomeCallable ARMSClient::searchEventsCallable(const SearchEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchEventsOutcome()>>(
			[this, request]()
			{
			return this->searchEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchRetcodeAppByPageOutcome ARMSClient::searchRetcodeAppByPage(const SearchRetcodeAppByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchRetcodeAppByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchRetcodeAppByPageOutcome(SearchRetcodeAppByPageResult(outcome.result()));
	else
		return SearchRetcodeAppByPageOutcome(outcome.error());
}

void ARMSClient::searchRetcodeAppByPageAsync(const SearchRetcodeAppByPageRequest& request, const SearchRetcodeAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchRetcodeAppByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchRetcodeAppByPageOutcomeCallable ARMSClient::searchRetcodeAppByPageCallable(const SearchRetcodeAppByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchRetcodeAppByPageOutcome()>>(
			[this, request]()
			{
			return this->searchRetcodeAppByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTraceAppByNameOutcome ARMSClient::searchTraceAppByName(const SearchTraceAppByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTraceAppByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTraceAppByNameOutcome(SearchTraceAppByNameResult(outcome.result()));
	else
		return SearchTraceAppByNameOutcome(outcome.error());
}

void ARMSClient::searchTraceAppByNameAsync(const SearchTraceAppByNameRequest& request, const SearchTraceAppByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraceAppByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTraceAppByNameOutcomeCallable ARMSClient::searchTraceAppByNameCallable(const SearchTraceAppByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTraceAppByNameOutcome()>>(
			[this, request]()
			{
			return this->searchTraceAppByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTraceAppByPageOutcome ARMSClient::searchTraceAppByPage(const SearchTraceAppByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTraceAppByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTraceAppByPageOutcome(SearchTraceAppByPageResult(outcome.result()));
	else
		return SearchTraceAppByPageOutcome(outcome.error());
}

void ARMSClient::searchTraceAppByPageAsync(const SearchTraceAppByPageRequest& request, const SearchTraceAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraceAppByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTraceAppByPageOutcomeCallable ARMSClient::searchTraceAppByPageCallable(const SearchTraceAppByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTraceAppByPageOutcome()>>(
			[this, request]()
			{
			return this->searchTraceAppByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTracesOutcome ARMSClient::searchTraces(const SearchTracesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTracesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTracesOutcome(SearchTracesResult(outcome.result()));
	else
		return SearchTracesOutcome(outcome.error());
}

void ARMSClient::searchTracesAsync(const SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTracesOutcomeCallable ARMSClient::searchTracesCallable(const SearchTracesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTracesOutcome()>>(
			[this, request]()
			{
			return this->searchTraces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTracesByPageOutcome ARMSClient::searchTracesByPage(const SearchTracesByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTracesByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTracesByPageOutcome(SearchTracesByPageResult(outcome.result()));
	else
		return SearchTracesByPageOutcome(outcome.error());
}

void ARMSClient::searchTracesByPageAsync(const SearchTracesByPageRequest& request, const SearchTracesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTracesByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTracesByPageOutcomeCallable ARMSClient::searchTracesByPageCallable(const SearchTracesByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTracesByPageOutcome()>>(
			[this, request]()
			{
			return this->searchTracesByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SendTTSVerifyLinkOutcome ARMSClient::sendTTSVerifyLink(const SendTTSVerifyLinkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendTTSVerifyLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendTTSVerifyLinkOutcome(SendTTSVerifyLinkResult(outcome.result()));
	else
		return SendTTSVerifyLinkOutcome(outcome.error());
}

void ARMSClient::sendTTSVerifyLinkAsync(const SendTTSVerifyLinkRequest& request, const SendTTSVerifyLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendTTSVerifyLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SendTTSVerifyLinkOutcomeCallable ARMSClient::sendTTSVerifyLinkCallable(const SendTTSVerifyLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendTTSVerifyLinkOutcome()>>(
			[this, request]()
			{
			return this->sendTTSVerifyLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SetRetcodeShareStatusOutcome ARMSClient::setRetcodeShareStatus(const SetRetcodeShareStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRetcodeShareStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRetcodeShareStatusOutcome(SetRetcodeShareStatusResult(outcome.result()));
	else
		return SetRetcodeShareStatusOutcome(outcome.error());
}

void ARMSClient::setRetcodeShareStatusAsync(const SetRetcodeShareStatusRequest& request, const SetRetcodeShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRetcodeShareStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SetRetcodeShareStatusOutcomeCallable ARMSClient::setRetcodeShareStatusCallable(const SetRetcodeShareStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRetcodeShareStatusOutcome()>>(
			[this, request]()
			{
			return this->setRetcodeShareStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::StartAlertOutcome ARMSClient::startAlert(const StartAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartAlertOutcome(StartAlertResult(outcome.result()));
	else
		return StartAlertOutcome(outcome.error());
}

void ARMSClient::startAlertAsync(const StartAlertRequest& request, const StartAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::StartAlertOutcomeCallable ARMSClient::startAlertCallable(const StartAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartAlertOutcome()>>(
			[this, request]()
			{
			return this->startAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::StartTimingSyntheticTaskOutcome ARMSClient::startTimingSyntheticTask(const StartTimingSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTimingSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTimingSyntheticTaskOutcome(StartTimingSyntheticTaskResult(outcome.result()));
	else
		return StartTimingSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::startTimingSyntheticTaskAsync(const StartTimingSyntheticTaskRequest& request, const StartTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTimingSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::StartTimingSyntheticTaskOutcomeCallable ARMSClient::startTimingSyntheticTaskCallable(const StartTimingSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTimingSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->startTimingSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::StopAlertOutcome ARMSClient::stopAlert(const StopAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopAlertOutcome(StopAlertResult(outcome.result()));
	else
		return StopAlertOutcome(outcome.error());
}

void ARMSClient::stopAlertAsync(const StopAlertRequest& request, const StopAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::StopAlertOutcomeCallable ARMSClient::stopAlertCallable(const StopAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopAlertOutcome()>>(
			[this, request]()
			{
			return this->stopAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::StopTimingSyntheticTaskOutcome ARMSClient::stopTimingSyntheticTask(const StopTimingSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTimingSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTimingSyntheticTaskOutcome(StopTimingSyntheticTaskResult(outcome.result()));
	else
		return StopTimingSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::stopTimingSyntheticTaskAsync(const StopTimingSyntheticTaskRequest& request, const StopTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTimingSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::StopTimingSyntheticTaskOutcomeCallable ARMSClient::stopTimingSyntheticTaskCallable(const StopTimingSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTimingSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->stopTimingSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SwitchSyntheticTaskStatusOutcome ARMSClient::switchSyntheticTaskStatus(const SwitchSyntheticTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchSyntheticTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchSyntheticTaskStatusOutcome(SwitchSyntheticTaskStatusResult(outcome.result()));
	else
		return SwitchSyntheticTaskStatusOutcome(outcome.error());
}

void ARMSClient::switchSyntheticTaskStatusAsync(const SwitchSyntheticTaskStatusRequest& request, const SwitchSyntheticTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchSyntheticTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SwitchSyntheticTaskStatusOutcomeCallable ARMSClient::switchSyntheticTaskStatusCallable(const SwitchSyntheticTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchSyntheticTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->switchSyntheticTaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SyncRecordingRulesOutcome ARMSClient::syncRecordingRules(const SyncRecordingRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SyncRecordingRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SyncRecordingRulesOutcome(SyncRecordingRulesResult(outcome.result()));
	else
		return SyncRecordingRulesOutcome(outcome.error());
}

void ARMSClient::syncRecordingRulesAsync(const SyncRecordingRulesRequest& request, const SyncRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, syncRecordingRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SyncRecordingRulesOutcomeCallable ARMSClient::syncRecordingRulesCallable(const SyncRecordingRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SyncRecordingRulesOutcome()>>(
			[this, request]()
			{
			return this->syncRecordingRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::TagResourcesOutcome ARMSClient::tagResources(const TagResourcesRequest &request) const
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

void ARMSClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::TagResourcesOutcomeCallable ARMSClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UninstallManagedPrometheusOutcome ARMSClient::uninstallManagedPrometheus(const UninstallManagedPrometheusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallManagedPrometheusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallManagedPrometheusOutcome(UninstallManagedPrometheusResult(outcome.result()));
	else
		return UninstallManagedPrometheusOutcome(outcome.error());
}

void ARMSClient::uninstallManagedPrometheusAsync(const UninstallManagedPrometheusRequest& request, const UninstallManagedPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallManagedPrometheus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UninstallManagedPrometheusOutcomeCallable ARMSClient::uninstallManagedPrometheusCallable(const UninstallManagedPrometheusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallManagedPrometheusOutcome()>>(
			[this, request]()
			{
			return this->uninstallManagedPrometheus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UninstallPromClusterOutcome ARMSClient::uninstallPromCluster(const UninstallPromClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallPromClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallPromClusterOutcome(UninstallPromClusterResult(outcome.result()));
	else
		return UninstallPromClusterOutcome(outcome.error());
}

void ARMSClient::uninstallPromClusterAsync(const UninstallPromClusterRequest& request, const UninstallPromClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallPromCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UninstallPromClusterOutcomeCallable ARMSClient::uninstallPromClusterCallable(const UninstallPromClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallPromClusterOutcome()>>(
			[this, request]()
			{
			return this->uninstallPromCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UntagResourcesOutcome ARMSClient::untagResources(const UntagResourcesRequest &request) const
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

void ARMSClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UntagResourcesOutcomeCallable ARMSClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateAlertContactOutcome ARMSClient::updateAlertContact(const UpdateAlertContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAlertContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAlertContactOutcome(UpdateAlertContactResult(outcome.result()));
	else
		return UpdateAlertContactOutcome(outcome.error());
}

void ARMSClient::updateAlertContactAsync(const UpdateAlertContactRequest& request, const UpdateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlertContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateAlertContactOutcomeCallable ARMSClient::updateAlertContactCallable(const UpdateAlertContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAlertContactOutcome()>>(
			[this, request]()
			{
			return this->updateAlertContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateAlertContactGroupOutcome ARMSClient::updateAlertContactGroup(const UpdateAlertContactGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAlertContactGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAlertContactGroupOutcome(UpdateAlertContactGroupResult(outcome.result()));
	else
		return UpdateAlertContactGroupOutcome(outcome.error());
}

void ARMSClient::updateAlertContactGroupAsync(const UpdateAlertContactGroupRequest& request, const UpdateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlertContactGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateAlertContactGroupOutcomeCallable ARMSClient::updateAlertContactGroupCallable(const UpdateAlertContactGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAlertContactGroupOutcome()>>(
			[this, request]()
			{
			return this->updateAlertContactGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateAlertRuleOutcome ARMSClient::updateAlertRule(const UpdateAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAlertRuleOutcome(UpdateAlertRuleResult(outcome.result()));
	else
		return UpdateAlertRuleOutcome(outcome.error());
}

void ARMSClient::updateAlertRuleAsync(const UpdateAlertRuleRequest& request, const UpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateAlertRuleOutcomeCallable ARMSClient::updateAlertRuleCallable(const UpdateAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->updateAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateDispatchRuleOutcome ARMSClient::updateDispatchRule(const UpdateDispatchRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDispatchRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDispatchRuleOutcome(UpdateDispatchRuleResult(outcome.result()));
	else
		return UpdateDispatchRuleOutcome(outcome.error());
}

void ARMSClient::updateDispatchRuleAsync(const UpdateDispatchRuleRequest& request, const UpdateDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDispatchRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateDispatchRuleOutcomeCallable ARMSClient::updateDispatchRuleCallable(const UpdateDispatchRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDispatchRuleOutcome()>>(
			[this, request]()
			{
			return this->updateDispatchRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateEnvCustomJobOutcome ARMSClient::updateEnvCustomJob(const UpdateEnvCustomJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvCustomJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvCustomJobOutcome(UpdateEnvCustomJobResult(outcome.result()));
	else
		return UpdateEnvCustomJobOutcome(outcome.error());
}

void ARMSClient::updateEnvCustomJobAsync(const UpdateEnvCustomJobRequest& request, const UpdateEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvCustomJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateEnvCustomJobOutcomeCallable ARMSClient::updateEnvCustomJobCallable(const UpdateEnvCustomJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvCustomJobOutcome()>>(
			[this, request]()
			{
			return this->updateEnvCustomJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateEnvPodMonitorOutcome ARMSClient::updateEnvPodMonitor(const UpdateEnvPodMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvPodMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvPodMonitorOutcome(UpdateEnvPodMonitorResult(outcome.result()));
	else
		return UpdateEnvPodMonitorOutcome(outcome.error());
}

void ARMSClient::updateEnvPodMonitorAsync(const UpdateEnvPodMonitorRequest& request, const UpdateEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvPodMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateEnvPodMonitorOutcomeCallable ARMSClient::updateEnvPodMonitorCallable(const UpdateEnvPodMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvPodMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateEnvPodMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateEnvServiceMonitorOutcome ARMSClient::updateEnvServiceMonitor(const UpdateEnvServiceMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvServiceMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvServiceMonitorOutcome(UpdateEnvServiceMonitorResult(outcome.result()));
	else
		return UpdateEnvServiceMonitorOutcome(outcome.error());
}

void ARMSClient::updateEnvServiceMonitorAsync(const UpdateEnvServiceMonitorRequest& request, const UpdateEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvServiceMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateEnvServiceMonitorOutcomeCallable ARMSClient::updateEnvServiceMonitorCallable(const UpdateEnvServiceMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvServiceMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateEnvServiceMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateEnvironmentOutcome ARMSClient::updateEnvironment(const UpdateEnvironmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnvironmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnvironmentOutcome(UpdateEnvironmentResult(outcome.result()));
	else
		return UpdateEnvironmentOutcome(outcome.error());
}

void ARMSClient::updateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnvironment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateEnvironmentOutcomeCallable ARMSClient::updateEnvironmentCallable(const UpdateEnvironmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnvironmentOutcome()>>(
			[this, request]()
			{
			return this->updateEnvironment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateGrafanaWorkspaceOutcome ARMSClient::updateGrafanaWorkspace(const UpdateGrafanaWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGrafanaWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGrafanaWorkspaceOutcome(UpdateGrafanaWorkspaceResult(outcome.result()));
	else
		return UpdateGrafanaWorkspaceOutcome(outcome.error());
}

void ARMSClient::updateGrafanaWorkspaceAsync(const UpdateGrafanaWorkspaceRequest& request, const UpdateGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGrafanaWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateGrafanaWorkspaceOutcomeCallable ARMSClient::updateGrafanaWorkspaceCallable(const UpdateGrafanaWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGrafanaWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->updateGrafanaWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateGrafanaWorkspaceVersionOutcome ARMSClient::updateGrafanaWorkspaceVersion(const UpdateGrafanaWorkspaceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateGrafanaWorkspaceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateGrafanaWorkspaceVersionOutcome(UpdateGrafanaWorkspaceVersionResult(outcome.result()));
	else
		return UpdateGrafanaWorkspaceVersionOutcome(outcome.error());
}

void ARMSClient::updateGrafanaWorkspaceVersionAsync(const UpdateGrafanaWorkspaceVersionRequest& request, const UpdateGrafanaWorkspaceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateGrafanaWorkspaceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateGrafanaWorkspaceVersionOutcomeCallable ARMSClient::updateGrafanaWorkspaceVersionCallable(const UpdateGrafanaWorkspaceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateGrafanaWorkspaceVersionOutcome()>>(
			[this, request]()
			{
			return this->updateGrafanaWorkspaceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateIntegrationOutcome ARMSClient::updateIntegration(const UpdateIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIntegrationOutcome(UpdateIntegrationResult(outcome.result()));
	else
		return UpdateIntegrationOutcome(outcome.error());
}

void ARMSClient::updateIntegrationAsync(const UpdateIntegrationRequest& request, const UpdateIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateIntegrationOutcomeCallable ARMSClient::updateIntegrationCallable(const UpdateIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIntegrationOutcome()>>(
			[this, request]()
			{
			return this->updateIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateMetricDropOutcome ARMSClient::updateMetricDrop(const UpdateMetricDropRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMetricDropOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMetricDropOutcome(UpdateMetricDropResult(outcome.result()));
	else
		return UpdateMetricDropOutcome(outcome.error());
}

void ARMSClient::updateMetricDropAsync(const UpdateMetricDropRequest& request, const UpdateMetricDropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMetricDrop(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateMetricDropOutcomeCallable ARMSClient::updateMetricDropCallable(const UpdateMetricDropRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMetricDropOutcome()>>(
			[this, request]()
			{
			return this->updateMetricDrop(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdatePrometheusAlertRuleOutcome ARMSClient::updatePrometheusAlertRule(const UpdatePrometheusAlertRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrometheusAlertRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrometheusAlertRuleOutcome(UpdatePrometheusAlertRuleResult(outcome.result()));
	else
		return UpdatePrometheusAlertRuleOutcome(outcome.error());
}

void ARMSClient::updatePrometheusAlertRuleAsync(const UpdatePrometheusAlertRuleRequest& request, const UpdatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrometheusAlertRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdatePrometheusAlertRuleOutcomeCallable ARMSClient::updatePrometheusAlertRuleCallable(const UpdatePrometheusAlertRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrometheusAlertRuleOutcome()>>(
			[this, request]()
			{
			return this->updatePrometheusAlertRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdatePrometheusGlobalViewOutcome ARMSClient::updatePrometheusGlobalView(const UpdatePrometheusGlobalViewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrometheusGlobalViewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrometheusGlobalViewOutcome(UpdatePrometheusGlobalViewResult(outcome.result()));
	else
		return UpdatePrometheusGlobalViewOutcome(outcome.error());
}

void ARMSClient::updatePrometheusGlobalViewAsync(const UpdatePrometheusGlobalViewRequest& request, const UpdatePrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrometheusGlobalView(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdatePrometheusGlobalViewOutcomeCallable ARMSClient::updatePrometheusGlobalViewCallable(const UpdatePrometheusGlobalViewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrometheusGlobalViewOutcome()>>(
			[this, request]()
			{
			return this->updatePrometheusGlobalView(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdatePrometheusInstanceOutcome ARMSClient::updatePrometheusInstance(const UpdatePrometheusInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrometheusInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrometheusInstanceOutcome(UpdatePrometheusInstanceResult(outcome.result()));
	else
		return UpdatePrometheusInstanceOutcome(outcome.error());
}

void ARMSClient::updatePrometheusInstanceAsync(const UpdatePrometheusInstanceRequest& request, const UpdatePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrometheusInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdatePrometheusInstanceOutcomeCallable ARMSClient::updatePrometheusInstanceCallable(const UpdatePrometheusInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrometheusInstanceOutcome()>>(
			[this, request]()
			{
			return this->updatePrometheusInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdatePrometheusIntegrationOutcome ARMSClient::updatePrometheusIntegration(const UpdatePrometheusIntegrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrometheusIntegrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrometheusIntegrationOutcome(UpdatePrometheusIntegrationResult(outcome.result()));
	else
		return UpdatePrometheusIntegrationOutcome(outcome.error());
}

void ARMSClient::updatePrometheusIntegrationAsync(const UpdatePrometheusIntegrationRequest& request, const UpdatePrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrometheusIntegration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdatePrometheusIntegrationOutcomeCallable ARMSClient::updatePrometheusIntegrationCallable(const UpdatePrometheusIntegrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrometheusIntegrationOutcome()>>(
			[this, request]()
			{
			return this->updatePrometheusIntegration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdatePrometheusMonitoringOutcome ARMSClient::updatePrometheusMonitoring(const UpdatePrometheusMonitoringRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrometheusMonitoringOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrometheusMonitoringOutcome(UpdatePrometheusMonitoringResult(outcome.result()));
	else
		return UpdatePrometheusMonitoringOutcome(outcome.error());
}

void ARMSClient::updatePrometheusMonitoringAsync(const UpdatePrometheusMonitoringRequest& request, const UpdatePrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrometheusMonitoring(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdatePrometheusMonitoringOutcomeCallable ARMSClient::updatePrometheusMonitoringCallable(const UpdatePrometheusMonitoringRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrometheusMonitoringOutcome()>>(
			[this, request]()
			{
			return this->updatePrometheusMonitoring(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdatePrometheusMonitoringStatusOutcome ARMSClient::updatePrometheusMonitoringStatus(const UpdatePrometheusMonitoringStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePrometheusMonitoringStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePrometheusMonitoringStatusOutcome(UpdatePrometheusMonitoringStatusResult(outcome.result()));
	else
		return UpdatePrometheusMonitoringStatusOutcome(outcome.error());
}

void ARMSClient::updatePrometheusMonitoringStatusAsync(const UpdatePrometheusMonitoringStatusRequest& request, const UpdatePrometheusMonitoringStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePrometheusMonitoringStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdatePrometheusMonitoringStatusOutcomeCallable ARMSClient::updatePrometheusMonitoringStatusCallable(const UpdatePrometheusMonitoringStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePrometheusMonitoringStatusOutcome()>>(
			[this, request]()
			{
			return this->updatePrometheusMonitoringStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateRumAppOutcome ARMSClient::updateRumApp(const UpdateRumAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRumAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRumAppOutcome(UpdateRumAppResult(outcome.result()));
	else
		return UpdateRumAppOutcome(outcome.error());
}

void ARMSClient::updateRumAppAsync(const UpdateRumAppRequest& request, const UpdateRumAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRumApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateRumAppOutcomeCallable ARMSClient::updateRumAppCallable(const UpdateRumAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRumAppOutcome()>>(
			[this, request]()
			{
			return this->updateRumApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateRumFileStatusOutcome ARMSClient::updateRumFileStatus(const UpdateRumFileStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRumFileStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRumFileStatusOutcome(UpdateRumFileStatusResult(outcome.result()));
	else
		return UpdateRumFileStatusOutcome(outcome.error());
}

void ARMSClient::updateRumFileStatusAsync(const UpdateRumFileStatusRequest& request, const UpdateRumFileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRumFileStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateRumFileStatusOutcomeCallable ARMSClient::updateRumFileStatusCallable(const UpdateRumFileStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRumFileStatusOutcome()>>(
			[this, request]()
			{
			return this->updateRumFileStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateTimingSyntheticTaskOutcome ARMSClient::updateTimingSyntheticTask(const UpdateTimingSyntheticTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTimingSyntheticTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTimingSyntheticTaskOutcome(UpdateTimingSyntheticTaskResult(outcome.result()));
	else
		return UpdateTimingSyntheticTaskOutcome(outcome.error());
}

void ARMSClient::updateTimingSyntheticTaskAsync(const UpdateTimingSyntheticTaskRequest& request, const UpdateTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTimingSyntheticTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateTimingSyntheticTaskOutcomeCallable ARMSClient::updateTimingSyntheticTaskCallable(const UpdateTimingSyntheticTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTimingSyntheticTaskOutcome()>>(
			[this, request]()
			{
			return this->updateTimingSyntheticTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpdateWebhookOutcome ARMSClient::updateWebhook(const UpdateWebhookRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWebhookOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWebhookOutcome(UpdateWebhookResult(outcome.result()));
	else
		return UpdateWebhookOutcome(outcome.error());
}

void ARMSClient::updateWebhookAsync(const UpdateWebhookRequest& request, const UpdateWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWebhook(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpdateWebhookOutcomeCallable ARMSClient::updateWebhookCallable(const UpdateWebhookRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWebhookOutcome()>>(
			[this, request]()
			{
			return this->updateWebhook(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpgradeAddonReleaseOutcome ARMSClient::upgradeAddonRelease(const UpgradeAddonReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeAddonReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeAddonReleaseOutcome(UpgradeAddonReleaseResult(outcome.result()));
	else
		return UpgradeAddonReleaseOutcome(outcome.error());
}

void ARMSClient::upgradeAddonReleaseAsync(const UpgradeAddonReleaseRequest& request, const UpgradeAddonReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeAddonRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpgradeAddonReleaseOutcomeCallable ARMSClient::upgradeAddonReleaseCallable(const UpgradeAddonReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeAddonReleaseOutcome()>>(
			[this, request]()
			{
			return this->upgradeAddonRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UpgradeEnvironmentFeatureOutcome ARMSClient::upgradeEnvironmentFeature(const UpgradeEnvironmentFeatureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeEnvironmentFeatureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeEnvironmentFeatureOutcome(UpgradeEnvironmentFeatureResult(outcome.result()));
	else
		return UpgradeEnvironmentFeatureOutcome(outcome.error());
}

void ARMSClient::upgradeEnvironmentFeatureAsync(const UpgradeEnvironmentFeatureRequest& request, const UpgradeEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeEnvironmentFeature(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UpgradeEnvironmentFeatureOutcomeCallable ARMSClient::upgradeEnvironmentFeatureCallable(const UpgradeEnvironmentFeatureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeEnvironmentFeatureOutcome()>>(
			[this, request]()
			{
			return this->upgradeEnvironmentFeature(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::UploadOutcome ARMSClient::upload(const UploadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadOutcome(UploadResult(outcome.result()));
	else
		return UploadOutcome(outcome.error());
}

void ARMSClient::uploadAsync(const UploadRequest& request, const UploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upload(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::UploadOutcomeCallable ARMSClient::uploadCallable(const UploadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadOutcome()>>(
			[this, request]()
			{
			return this->upload(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

