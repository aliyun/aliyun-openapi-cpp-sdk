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

ARMSClient::CheckDataConsistencyOutcome ARMSClient::checkDataConsistency(const CheckDataConsistencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDataConsistencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDataConsistencyOutcome(CheckDataConsistencyResult(outcome.result()));
	else
		return CheckDataConsistencyOutcome(outcome.error());
}

void ARMSClient::checkDataConsistencyAsync(const CheckDataConsistencyRequest& request, const CheckDataConsistencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDataConsistency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CheckDataConsistencyOutcomeCallable ARMSClient::checkDataConsistencyCallable(const CheckDataConsistencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDataConsistencyOutcome()>>(
			[this, request]()
			{
			return this->checkDataConsistency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::CheckServiceLinkedRoleForDeletingOutcome ARMSClient::checkServiceLinkedRoleForDeleting(const CheckServiceLinkedRoleForDeletingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckServiceLinkedRoleForDeletingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckServiceLinkedRoleForDeletingOutcome(CheckServiceLinkedRoleForDeletingResult(outcome.result()));
	else
		return CheckServiceLinkedRoleForDeletingOutcome(outcome.error());
}

void ARMSClient::checkServiceLinkedRoleForDeletingAsync(const CheckServiceLinkedRoleForDeletingRequest& request, const CheckServiceLinkedRoleForDeletingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkServiceLinkedRoleForDeleting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::CheckServiceLinkedRoleForDeletingOutcomeCallable ARMSClient::checkServiceLinkedRoleForDeletingCallable(const CheckServiceLinkedRoleForDeletingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckServiceLinkedRoleForDeletingOutcome()>>(
			[this, request]()
			{
			return this->checkServiceLinkedRoleForDeleting(request);
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

ARMSClient::DescribeTraceLocationOutcome ARMSClient::describeTraceLocation(const DescribeTraceLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTraceLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTraceLocationOutcome(DescribeTraceLocationResult(outcome.result()));
	else
		return DescribeTraceLocationOutcome(outcome.error());
}

void ARMSClient::describeTraceLocationAsync(const DescribeTraceLocationRequest& request, const DescribeTraceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::DescribeTraceLocationOutcomeCallable ARMSClient::describeTraceLocationCallable(const DescribeTraceLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceLocationOutcome()>>(
			[this, request]()
			{
			return this->describeTraceLocation(request);
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

ARMSClient::GetConsistencySnapshotOutcome ARMSClient::getConsistencySnapshot(const GetConsistencySnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConsistencySnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConsistencySnapshotOutcome(GetConsistencySnapshotResult(outcome.result()));
	else
		return GetConsistencySnapshotOutcome(outcome.error());
}

void ARMSClient::getConsistencySnapshotAsync(const GetConsistencySnapshotRequest& request, const GetConsistencySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConsistencySnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetConsistencySnapshotOutcomeCallable ARMSClient::getConsistencySnapshotCallable(const GetConsistencySnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConsistencySnapshotOutcome()>>(
			[this, request]()
			{
			return this->getConsistencySnapshot(request);
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

ARMSClient::ImportCustomAlertRulesOutcome ARMSClient::importCustomAlertRules(const ImportCustomAlertRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportCustomAlertRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportCustomAlertRulesOutcome(ImportCustomAlertRulesResult(outcome.result()));
	else
		return ImportCustomAlertRulesOutcome(outcome.error());
}

void ARMSClient::importCustomAlertRulesAsync(const ImportCustomAlertRulesRequest& request, const ImportCustomAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importCustomAlertRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ImportCustomAlertRulesOutcomeCallable ARMSClient::importCustomAlertRulesCallable(const ImportCustomAlertRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportCustomAlertRulesOutcome()>>(
			[this, request]()
			{
			return this->importCustomAlertRules(request);
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

ARMSClient::ListPromClustersOutcome ARMSClient::listPromClusters(const ListPromClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPromClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPromClustersOutcome(ListPromClustersResult(outcome.result()));
	else
		return ListPromClustersOutcome(outcome.error());
}

void ARMSClient::listPromClustersAsync(const ListPromClustersRequest& request, const ListPromClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPromClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ListPromClustersOutcomeCallable ARMSClient::listPromClustersCallable(const ListPromClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPromClustersOutcome()>>(
			[this, request]()
			{
			return this->listPromClusters(request);
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

ARMSClient::QueryDatasetOutcome ARMSClient::queryDataset(const QueryDatasetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetOutcome(QueryDatasetResult(outcome.result()));
	else
		return QueryDatasetOutcome(outcome.error());
}

void ARMSClient::queryDatasetAsync(const QueryDatasetRequest& request, const QueryDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryDatasetOutcomeCallable ARMSClient::queryDatasetCallable(const QueryDatasetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetOutcome()>>(
			[this, request]()
			{
			return this->queryDataset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::QueryMetricOutcome ARMSClient::queryMetric(const QueryMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricOutcome(QueryMetricResult(outcome.result()));
	else
		return QueryMetricOutcome(outcome.error());
}

void ARMSClient::queryMetricAsync(const QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::QueryMetricOutcomeCallable ARMSClient::queryMetricCallable(const QueryMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricOutcome()>>(
			[this, request]()
			{
			return this->queryMetric(request);
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

