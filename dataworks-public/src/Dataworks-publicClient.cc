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

#include <alibabacloud/dataworks-public/Dataworks_publicClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

namespace
{
	const std::string SERVICE_NAME = "dataworks-public";
}

Dataworks_publicClient::Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dataworks_publicClient::Dataworks_publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dataworks_publicClient::Dataworks_publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dataworks_publicClient::~Dataworks_publicClient()
{}

Dataworks_publicClient::AbolishDataServiceApiOutcome Dataworks_publicClient::abolishDataServiceApi(const AbolishDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbolishDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbolishDataServiceApiOutcome(AbolishDataServiceApiResult(outcome.result()));
	else
		return AbolishDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::abolishDataServiceApiAsync(const AbolishDataServiceApiRequest& request, const AbolishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abolishDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AbolishDataServiceApiOutcomeCallable Dataworks_publicClient::abolishDataServiceApiCallable(const AbolishDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbolishDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->abolishDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::AddMetaCollectionEntityOutcome Dataworks_publicClient::addMetaCollectionEntity(const AddMetaCollectionEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddMetaCollectionEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddMetaCollectionEntityOutcome(AddMetaCollectionEntityResult(outcome.result()));
	else
		return AddMetaCollectionEntityOutcome(outcome.error());
}

void Dataworks_publicClient::addMetaCollectionEntityAsync(const AddMetaCollectionEntityRequest& request, const AddMetaCollectionEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addMetaCollectionEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AddMetaCollectionEntityOutcomeCallable Dataworks_publicClient::addMetaCollectionEntityCallable(const AddMetaCollectionEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddMetaCollectionEntityOutcome()>>(
			[this, request]()
			{
			return this->addMetaCollectionEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::AddProjectMemberToRoleOutcome Dataworks_publicClient::addProjectMemberToRole(const AddProjectMemberToRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddProjectMemberToRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddProjectMemberToRoleOutcome(AddProjectMemberToRoleResult(outcome.result()));
	else
		return AddProjectMemberToRoleOutcome(outcome.error());
}

void Dataworks_publicClient::addProjectMemberToRoleAsync(const AddProjectMemberToRoleRequest& request, const AddProjectMemberToRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addProjectMemberToRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AddProjectMemberToRoleOutcomeCallable Dataworks_publicClient::addProjectMemberToRoleCallable(const AddProjectMemberToRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddProjectMemberToRoleOutcome()>>(
			[this, request]()
			{
			return this->addProjectMemberToRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::AddRecognizeRuleOutcome Dataworks_publicClient::addRecognizeRule(const AddRecognizeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRecognizeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRecognizeRuleOutcome(AddRecognizeRuleResult(outcome.result()));
	else
		return AddRecognizeRuleOutcome(outcome.error());
}

void Dataworks_publicClient::addRecognizeRuleAsync(const AddRecognizeRuleRequest& request, const AddRecognizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRecognizeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AddRecognizeRuleOutcomeCallable Dataworks_publicClient::addRecognizeRuleCallable(const AddRecognizeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRecognizeRuleOutcome()>>(
			[this, request]()
			{
			return this->addRecognizeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::AddToMetaCategoryOutcome Dataworks_publicClient::addToMetaCategory(const AddToMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddToMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddToMetaCategoryOutcome(AddToMetaCategoryResult(outcome.result()));
	else
		return AddToMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::addToMetaCategoryAsync(const AddToMetaCategoryRequest& request, const AddToMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addToMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AddToMetaCategoryOutcomeCallable Dataworks_publicClient::addToMetaCategoryCallable(const AddToMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddToMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->addToMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ApprovePermissionApplyOrderOutcome Dataworks_publicClient::approvePermissionApplyOrder(const ApprovePermissionApplyOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApprovePermissionApplyOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApprovePermissionApplyOrderOutcome(ApprovePermissionApplyOrderResult(outcome.result()));
	else
		return ApprovePermissionApplyOrderOutcome(outcome.error());
}

void Dataworks_publicClient::approvePermissionApplyOrderAsync(const ApprovePermissionApplyOrderRequest& request, const ApprovePermissionApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, approvePermissionApplyOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ApprovePermissionApplyOrderOutcomeCallable Dataworks_publicClient::approvePermissionApplyOrderCallable(const ApprovePermissionApplyOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApprovePermissionApplyOrderOutcome()>>(
			[this, request]()
			{
			return this->approvePermissionApplyOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CallbackExtensionOutcome Dataworks_publicClient::callbackExtension(const CallbackExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CallbackExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CallbackExtensionOutcome(CallbackExtensionResult(outcome.result()));
	else
		return CallbackExtensionOutcome(outcome.error());
}

void Dataworks_publicClient::callbackExtensionAsync(const CallbackExtensionRequest& request, const CallbackExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, callbackExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CallbackExtensionOutcomeCallable Dataworks_publicClient::callbackExtensionCallable(const CallbackExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CallbackExtensionOutcome()>>(
			[this, request]()
			{
			return this->callbackExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ChangeResourceManagerResourceGroupOutcome Dataworks_publicClient::changeResourceManagerResourceGroup(const ChangeResourceManagerResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceManagerResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceManagerResourceGroupOutcome(ChangeResourceManagerResourceGroupResult(outcome.result()));
	else
		return ChangeResourceManagerResourceGroupOutcome(outcome.error());
}

void Dataworks_publicClient::changeResourceManagerResourceGroupAsync(const ChangeResourceManagerResourceGroupRequest& request, const ChangeResourceManagerResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceManagerResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ChangeResourceManagerResourceGroupOutcomeCallable Dataworks_publicClient::changeResourceManagerResourceGroupCallable(const ChangeResourceManagerResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceManagerResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceManagerResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CheckFileDeploymentOutcome Dataworks_publicClient::checkFileDeployment(const CheckFileDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckFileDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckFileDeploymentOutcome(CheckFileDeploymentResult(outcome.result()));
	else
		return CheckFileDeploymentOutcome(outcome.error());
}

void Dataworks_publicClient::checkFileDeploymentAsync(const CheckFileDeploymentRequest& request, const CheckFileDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkFileDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CheckFileDeploymentOutcomeCallable Dataworks_publicClient::checkFileDeploymentCallable(const CheckFileDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckFileDeploymentOutcome()>>(
			[this, request]()
			{
			return this->checkFileDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CheckMetaPartitionOutcome Dataworks_publicClient::checkMetaPartition(const CheckMetaPartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMetaPartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMetaPartitionOutcome(CheckMetaPartitionResult(outcome.result()));
	else
		return CheckMetaPartitionOutcome(outcome.error());
}

void Dataworks_publicClient::checkMetaPartitionAsync(const CheckMetaPartitionRequest& request, const CheckMetaPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMetaPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CheckMetaPartitionOutcomeCallable Dataworks_publicClient::checkMetaPartitionCallable(const CheckMetaPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMetaPartitionOutcome()>>(
			[this, request]()
			{
			return this->checkMetaPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CheckMetaTableOutcome Dataworks_publicClient::checkMetaTable(const CheckMetaTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMetaTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMetaTableOutcome(CheckMetaTableResult(outcome.result()));
	else
		return CheckMetaTableOutcome(outcome.error());
}

void Dataworks_publicClient::checkMetaTableAsync(const CheckMetaTableRequest& request, const CheckMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMetaTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CheckMetaTableOutcomeCallable Dataworks_publicClient::checkMetaTableCallable(const CheckMetaTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMetaTableOutcome()>>(
			[this, request]()
			{
			return this->checkMetaTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateBaselineOutcome Dataworks_publicClient::createBaseline(const CreateBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBaselineOutcome(CreateBaselineResult(outcome.result()));
	else
		return CreateBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::createBaselineAsync(const CreateBaselineRequest& request, const CreateBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateBaselineOutcomeCallable Dataworks_publicClient::createBaselineCallable(const CreateBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBaselineOutcome()>>(
			[this, request]()
			{
			return this->createBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateBusinessOutcome Dataworks_publicClient::createBusiness(const CreateBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBusinessOutcome(CreateBusinessResult(outcome.result()));
	else
		return CreateBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::createBusinessAsync(const CreateBusinessRequest& request, const CreateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateBusinessOutcomeCallable Dataworks_publicClient::createBusinessCallable(const CreateBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBusinessOutcome()>>(
			[this, request]()
			{
			return this->createBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateConnectionOutcome Dataworks_publicClient::createConnection(const CreateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConnectionOutcome(CreateConnectionResult(outcome.result()));
	else
		return CreateConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::createConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateConnectionOutcomeCallable Dataworks_publicClient::createConnectionCallable(const CreateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConnectionOutcome()>>(
			[this, request]()
			{
			return this->createConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDIAlarmRuleOutcome Dataworks_publicClient::createDIAlarmRule(const CreateDIAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDIAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDIAlarmRuleOutcome(CreateDIAlarmRuleResult(outcome.result()));
	else
		return CreateDIAlarmRuleOutcome(outcome.error());
}

void Dataworks_publicClient::createDIAlarmRuleAsync(const CreateDIAlarmRuleRequest& request, const CreateDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDIAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDIAlarmRuleOutcomeCallable Dataworks_publicClient::createDIAlarmRuleCallable(const CreateDIAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDIAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->createDIAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDIJobOutcome Dataworks_publicClient::createDIJob(const CreateDIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDIJobOutcome(CreateDIJobResult(outcome.result()));
	else
		return CreateDIJobOutcome(outcome.error());
}

void Dataworks_publicClient::createDIJobAsync(const CreateDIJobRequest& request, const CreateDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDIJobOutcomeCallable Dataworks_publicClient::createDIJobCallable(const CreateDIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDIJobOutcome()>>(
			[this, request]()
			{
			return this->createDIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDISyncTaskOutcome Dataworks_publicClient::createDISyncTask(const CreateDISyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDISyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDISyncTaskOutcome(CreateDISyncTaskResult(outcome.result()));
	else
		return CreateDISyncTaskOutcome(outcome.error());
}

void Dataworks_publicClient::createDISyncTaskAsync(const CreateDISyncTaskRequest& request, const CreateDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDISyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDISyncTaskOutcomeCallable Dataworks_publicClient::createDISyncTaskCallable(const CreateDISyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDISyncTaskOutcome()>>(
			[this, request]()
			{
			return this->createDISyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDagComplementOutcome Dataworks_publicClient::createDagComplement(const CreateDagComplementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDagComplementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDagComplementOutcome(CreateDagComplementResult(outcome.result()));
	else
		return CreateDagComplementOutcome(outcome.error());
}

void Dataworks_publicClient::createDagComplementAsync(const CreateDagComplementRequest& request, const CreateDagComplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDagComplement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDagComplementOutcomeCallable Dataworks_publicClient::createDagComplementCallable(const CreateDagComplementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDagComplementOutcome()>>(
			[this, request]()
			{
			return this->createDagComplement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDagTestOutcome Dataworks_publicClient::createDagTest(const CreateDagTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDagTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDagTestOutcome(CreateDagTestResult(outcome.result()));
	else
		return CreateDagTestOutcome(outcome.error());
}

void Dataworks_publicClient::createDagTestAsync(const CreateDagTestRequest& request, const CreateDagTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDagTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDagTestOutcomeCallable Dataworks_publicClient::createDagTestCallable(const CreateDagTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDagTestOutcome()>>(
			[this, request]()
			{
			return this->createDagTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDataServiceApiOutcome Dataworks_publicClient::createDataServiceApi(const CreateDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataServiceApiOutcome(CreateDataServiceApiResult(outcome.result()));
	else
		return CreateDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::createDataServiceApiAsync(const CreateDataServiceApiRequest& request, const CreateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDataServiceApiOutcomeCallable Dataworks_publicClient::createDataServiceApiCallable(const CreateDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->createDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDataServiceApiAuthorityOutcome Dataworks_publicClient::createDataServiceApiAuthority(const CreateDataServiceApiAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataServiceApiAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataServiceApiAuthorityOutcome(CreateDataServiceApiAuthorityResult(outcome.result()));
	else
		return CreateDataServiceApiAuthorityOutcome(outcome.error());
}

void Dataworks_publicClient::createDataServiceApiAuthorityAsync(const CreateDataServiceApiAuthorityRequest& request, const CreateDataServiceApiAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataServiceApiAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDataServiceApiAuthorityOutcomeCallable Dataworks_publicClient::createDataServiceApiAuthorityCallable(const CreateDataServiceApiAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataServiceApiAuthorityOutcome()>>(
			[this, request]()
			{
			return this->createDataServiceApiAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDataServiceFolderOutcome Dataworks_publicClient::createDataServiceFolder(const CreateDataServiceFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataServiceFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataServiceFolderOutcome(CreateDataServiceFolderResult(outcome.result()));
	else
		return CreateDataServiceFolderOutcome(outcome.error());
}

void Dataworks_publicClient::createDataServiceFolderAsync(const CreateDataServiceFolderRequest& request, const CreateDataServiceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataServiceFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDataServiceFolderOutcomeCallable Dataworks_publicClient::createDataServiceFolderCallable(const CreateDataServiceFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataServiceFolderOutcome()>>(
			[this, request]()
			{
			return this->createDataServiceFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDataServiceGroupOutcome Dataworks_publicClient::createDataServiceGroup(const CreateDataServiceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataServiceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataServiceGroupOutcome(CreateDataServiceGroupResult(outcome.result()));
	else
		return CreateDataServiceGroupOutcome(outcome.error());
}

void Dataworks_publicClient::createDataServiceGroupAsync(const CreateDataServiceGroupRequest& request, const CreateDataServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataServiceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDataServiceGroupOutcomeCallable Dataworks_publicClient::createDataServiceGroupCallable(const CreateDataServiceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataServiceGroupOutcome()>>(
			[this, request]()
			{
			return this->createDataServiceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDataSourceOutcome Dataworks_publicClient::createDataSource(const CreateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataSourceOutcome(CreateDataSourceResult(outcome.result()));
	else
		return CreateDataSourceOutcome(outcome.error());
}

void Dataworks_publicClient::createDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDataSourceOutcomeCallable Dataworks_publicClient::createDataSourceCallable(const CreateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateExportMigrationOutcome Dataworks_publicClient::createExportMigration(const CreateExportMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateExportMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateExportMigrationOutcome(CreateExportMigrationResult(outcome.result()));
	else
		return CreateExportMigrationOutcome(outcome.error());
}

void Dataworks_publicClient::createExportMigrationAsync(const CreateExportMigrationRequest& request, const CreateExportMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createExportMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateExportMigrationOutcomeCallable Dataworks_publicClient::createExportMigrationCallable(const CreateExportMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateExportMigrationOutcome()>>(
			[this, request]()
			{
			return this->createExportMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateFileOutcome Dataworks_publicClient::createFile(const CreateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileOutcome(CreateFileResult(outcome.result()));
	else
		return CreateFileOutcome(outcome.error());
}

void Dataworks_publicClient::createFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateFileOutcomeCallable Dataworks_publicClient::createFileCallable(const CreateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileOutcome()>>(
			[this, request]()
			{
			return this->createFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateFolderOutcome Dataworks_publicClient::createFolder(const CreateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFolderOutcome(CreateFolderResult(outcome.result()));
	else
		return CreateFolderOutcome(outcome.error());
}

void Dataworks_publicClient::createFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateFolderOutcomeCallable Dataworks_publicClient::createFolderCallable(const CreateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFolderOutcome()>>(
			[this, request]()
			{
			return this->createFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateImportMigrationOutcome Dataworks_publicClient::createImportMigration(const CreateImportMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateImportMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateImportMigrationOutcome(CreateImportMigrationResult(outcome.result()));
	else
		return CreateImportMigrationOutcome(outcome.error());
}

void Dataworks_publicClient::createImportMigrationAsync(const CreateImportMigrationRequest& request, const CreateImportMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createImportMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateImportMigrationOutcomeCallable Dataworks_publicClient::createImportMigrationCallable(const CreateImportMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateImportMigrationOutcome()>>(
			[this, request]()
			{
			return this->createImportMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateManualDagOutcome Dataworks_publicClient::createManualDag(const CreateManualDagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateManualDagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateManualDagOutcome(CreateManualDagResult(outcome.result()));
	else
		return CreateManualDagOutcome(outcome.error());
}

void Dataworks_publicClient::createManualDagAsync(const CreateManualDagRequest& request, const CreateManualDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createManualDag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateManualDagOutcomeCallable Dataworks_publicClient::createManualDagCallable(const CreateManualDagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateManualDagOutcome()>>(
			[this, request]()
			{
			return this->createManualDag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateMetaCategoryOutcome Dataworks_publicClient::createMetaCategory(const CreateMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMetaCategoryOutcome(CreateMetaCategoryResult(outcome.result()));
	else
		return CreateMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::createMetaCategoryAsync(const CreateMetaCategoryRequest& request, const CreateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateMetaCategoryOutcomeCallable Dataworks_publicClient::createMetaCategoryCallable(const CreateMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->createMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateMetaCollectionOutcome Dataworks_publicClient::createMetaCollection(const CreateMetaCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMetaCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMetaCollectionOutcome(CreateMetaCollectionResult(outcome.result()));
	else
		return CreateMetaCollectionOutcome(outcome.error());
}

void Dataworks_publicClient::createMetaCollectionAsync(const CreateMetaCollectionRequest& request, const CreateMetaCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMetaCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateMetaCollectionOutcomeCallable Dataworks_publicClient::createMetaCollectionCallable(const CreateMetaCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMetaCollectionOutcome()>>(
			[this, request]()
			{
			return this->createMetaCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreatePermissionApplyOrderOutcome Dataworks_publicClient::createPermissionApplyOrder(const CreatePermissionApplyOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePermissionApplyOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePermissionApplyOrderOutcome(CreatePermissionApplyOrderResult(outcome.result()));
	else
		return CreatePermissionApplyOrderOutcome(outcome.error());
}

void Dataworks_publicClient::createPermissionApplyOrderAsync(const CreatePermissionApplyOrderRequest& request, const CreatePermissionApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPermissionApplyOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreatePermissionApplyOrderOutcomeCallable Dataworks_publicClient::createPermissionApplyOrderCallable(const CreatePermissionApplyOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePermissionApplyOrderOutcome()>>(
			[this, request]()
			{
			return this->createPermissionApplyOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateProjectOutcome Dataworks_publicClient::createProject(const CreateProjectRequest &request) const
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

void Dataworks_publicClient::createProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateProjectOutcomeCallable Dataworks_publicClient::createProjectCallable(const CreateProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
			[this, request]()
			{
			return this->createProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateProjectMemberOutcome Dataworks_publicClient::createProjectMember(const CreateProjectMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProjectMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProjectMemberOutcome(CreateProjectMemberResult(outcome.result()));
	else
		return CreateProjectMemberOutcome(outcome.error());
}

void Dataworks_publicClient::createProjectMemberAsync(const CreateProjectMemberRequest& request, const CreateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProjectMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateProjectMemberOutcomeCallable Dataworks_publicClient::createProjectMemberCallable(const CreateProjectMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProjectMemberOutcome()>>(
			[this, request]()
			{
			return this->createProjectMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityEntityOutcome Dataworks_publicClient::createQualityEntity(const CreateQualityEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityEntityOutcome(CreateQualityEntityResult(outcome.result()));
	else
		return CreateQualityEntityOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityEntityAsync(const CreateQualityEntityRequest& request, const CreateQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityEntityOutcomeCallable Dataworks_publicClient::createQualityEntityCallable(const CreateQualityEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityEntityOutcome()>>(
			[this, request]()
			{
			return this->createQualityEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityFollowerOutcome Dataworks_publicClient::createQualityFollower(const CreateQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityFollowerOutcome(CreateQualityFollowerResult(outcome.result()));
	else
		return CreateQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityFollowerAsync(const CreateQualityFollowerRequest& request, const CreateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityFollowerOutcomeCallable Dataworks_publicClient::createQualityFollowerCallable(const CreateQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->createQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityRelativeNodeOutcome Dataworks_publicClient::createQualityRelativeNode(const CreateQualityRelativeNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityRelativeNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityRelativeNodeOutcome(CreateQualityRelativeNodeResult(outcome.result()));
	else
		return CreateQualityRelativeNodeOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityRelativeNodeAsync(const CreateQualityRelativeNodeRequest& request, const CreateQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityRelativeNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityRelativeNodeOutcomeCallable Dataworks_publicClient::createQualityRelativeNodeCallable(const CreateQualityRelativeNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityRelativeNodeOutcome()>>(
			[this, request]()
			{
			return this->createQualityRelativeNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityRuleOutcome Dataworks_publicClient::createQualityRule(const CreateQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityRuleOutcome(CreateQualityRuleResult(outcome.result()));
	else
		return CreateQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityRuleAsync(const CreateQualityRuleRequest& request, const CreateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityRuleOutcomeCallable Dataworks_publicClient::createQualityRuleCallable(const CreateQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->createQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateRemindOutcome Dataworks_publicClient::createRemind(const CreateRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRemindOutcome(CreateRemindResult(outcome.result()));
	else
		return CreateRemindOutcome(outcome.error());
}

void Dataworks_publicClient::createRemindAsync(const CreateRemindRequest& request, const CreateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateRemindOutcomeCallable Dataworks_publicClient::createRemindCallable(const CreateRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRemindOutcome()>>(
			[this, request]()
			{
			return this->createRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateResourceFileOutcome Dataworks_publicClient::createResourceFile(const CreateResourceFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateResourceFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateResourceFileOutcome(CreateResourceFileResult(outcome.result()));
	else
		return CreateResourceFileOutcome(outcome.error());
}

void Dataworks_publicClient::createResourceFileAsync(const CreateResourceFileRequest& request, const CreateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createResourceFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateResourceFileOutcomeCallable Dataworks_publicClient::createResourceFileCallable(const CreateResourceFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateResourceFileOutcome()>>(
			[this, request]()
			{
			return this->createResourceFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateTableOutcome Dataworks_publicClient::createTable(const CreateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTableOutcome(CreateTableResult(outcome.result()));
	else
		return CreateTableOutcome(outcome.error());
}

void Dataworks_publicClient::createTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateTableOutcomeCallable Dataworks_publicClient::createTableCallable(const CreateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
			[this, request]()
			{
			return this->createTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateTableLevelOutcome Dataworks_publicClient::createTableLevel(const CreateTableLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTableLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTableLevelOutcome(CreateTableLevelResult(outcome.result()));
	else
		return CreateTableLevelOutcome(outcome.error());
}

void Dataworks_publicClient::createTableLevelAsync(const CreateTableLevelRequest& request, const CreateTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTableLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateTableLevelOutcomeCallable Dataworks_publicClient::createTableLevelCallable(const CreateTableLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTableLevelOutcome()>>(
			[this, request]()
			{
			return this->createTableLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateTableThemeOutcome Dataworks_publicClient::createTableTheme(const CreateTableThemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTableThemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTableThemeOutcome(CreateTableThemeResult(outcome.result()));
	else
		return CreateTableThemeOutcome(outcome.error());
}

void Dataworks_publicClient::createTableThemeAsync(const CreateTableThemeRequest& request, const CreateTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTableTheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateTableThemeOutcomeCallable Dataworks_publicClient::createTableThemeCallable(const CreateTableThemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTableThemeOutcome()>>(
			[this, request]()
			{
			return this->createTableTheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateUdfFileOutcome Dataworks_publicClient::createUdfFile(const CreateUdfFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUdfFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUdfFileOutcome(CreateUdfFileResult(outcome.result()));
	else
		return CreateUdfFileOutcome(outcome.error());
}

void Dataworks_publicClient::createUdfFileAsync(const CreateUdfFileRequest& request, const CreateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUdfFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateUdfFileOutcomeCallable Dataworks_publicClient::createUdfFileCallable(const CreateUdfFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUdfFileOutcome()>>(
			[this, request]()
			{
			return this->createUdfFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteBaselineOutcome Dataworks_publicClient::deleteBaseline(const DeleteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBaselineOutcome(DeleteBaselineResult(outcome.result()));
	else
		return DeleteBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::deleteBaselineAsync(const DeleteBaselineRequest& request, const DeleteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteBaselineOutcomeCallable Dataworks_publicClient::deleteBaselineCallable(const DeleteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBaselineOutcome()>>(
			[this, request]()
			{
			return this->deleteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteBusinessOutcome Dataworks_publicClient::deleteBusiness(const DeleteBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBusinessOutcome(DeleteBusinessResult(outcome.result()));
	else
		return DeleteBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::deleteBusinessAsync(const DeleteBusinessRequest& request, const DeleteBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteBusinessOutcomeCallable Dataworks_publicClient::deleteBusinessCallable(const DeleteBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBusinessOutcome()>>(
			[this, request]()
			{
			return this->deleteBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteConnectionOutcome Dataworks_publicClient::deleteConnection(const DeleteConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConnectionOutcome(DeleteConnectionResult(outcome.result()));
	else
		return DeleteConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::deleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteConnectionOutcomeCallable Dataworks_publicClient::deleteConnectionCallable(const DeleteConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConnectionOutcome()>>(
			[this, request]()
			{
			return this->deleteConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDIAlarmRuleOutcome Dataworks_publicClient::deleteDIAlarmRule(const DeleteDIAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDIAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDIAlarmRuleOutcome(DeleteDIAlarmRuleResult(outcome.result()));
	else
		return DeleteDIAlarmRuleOutcome(outcome.error());
}

void Dataworks_publicClient::deleteDIAlarmRuleAsync(const DeleteDIAlarmRuleRequest& request, const DeleteDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDIAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDIAlarmRuleOutcomeCallable Dataworks_publicClient::deleteDIAlarmRuleCallable(const DeleteDIAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDIAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteDIAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDIJobOutcome Dataworks_publicClient::deleteDIJob(const DeleteDIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDIJobOutcome(DeleteDIJobResult(outcome.result()));
	else
		return DeleteDIJobOutcome(outcome.error());
}

void Dataworks_publicClient::deleteDIJobAsync(const DeleteDIJobRequest& request, const DeleteDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDIJobOutcomeCallable Dataworks_publicClient::deleteDIJobCallable(const DeleteDIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDIJobOutcome()>>(
			[this, request]()
			{
			return this->deleteDIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDISyncTaskOutcome Dataworks_publicClient::deleteDISyncTask(const DeleteDISyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDISyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDISyncTaskOutcome(DeleteDISyncTaskResult(outcome.result()));
	else
		return DeleteDISyncTaskOutcome(outcome.error());
}

void Dataworks_publicClient::deleteDISyncTaskAsync(const DeleteDISyncTaskRequest& request, const DeleteDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDISyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDISyncTaskOutcomeCallable Dataworks_publicClient::deleteDISyncTaskCallable(const DeleteDISyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDISyncTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteDISyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDataServiceApiOutcome Dataworks_publicClient::deleteDataServiceApi(const DeleteDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataServiceApiOutcome(DeleteDataServiceApiResult(outcome.result()));
	else
		return DeleteDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::deleteDataServiceApiAsync(const DeleteDataServiceApiRequest& request, const DeleteDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDataServiceApiOutcomeCallable Dataworks_publicClient::deleteDataServiceApiCallable(const DeleteDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->deleteDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDataServiceApiAuthorityOutcome Dataworks_publicClient::deleteDataServiceApiAuthority(const DeleteDataServiceApiAuthorityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataServiceApiAuthorityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataServiceApiAuthorityOutcome(DeleteDataServiceApiAuthorityResult(outcome.result()));
	else
		return DeleteDataServiceApiAuthorityOutcome(outcome.error());
}

void Dataworks_publicClient::deleteDataServiceApiAuthorityAsync(const DeleteDataServiceApiAuthorityRequest& request, const DeleteDataServiceApiAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataServiceApiAuthority(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDataServiceApiAuthorityOutcomeCallable Dataworks_publicClient::deleteDataServiceApiAuthorityCallable(const DeleteDataServiceApiAuthorityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataServiceApiAuthorityOutcome()>>(
			[this, request]()
			{
			return this->deleteDataServiceApiAuthority(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDataSourceOutcome Dataworks_publicClient::deleteDataSource(const DeleteDataSourceRequest &request) const
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

void Dataworks_publicClient::deleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDataSourceOutcomeCallable Dataworks_publicClient::deleteDataSourceCallable(const DeleteDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataSourceOutcome()>>(
			[this, request]()
			{
			return this->deleteDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFileOutcome Dataworks_publicClient::deleteFile(const DeleteFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileOutcome(DeleteFileResult(outcome.result()));
	else
		return DeleteFileOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFileOutcomeCallable Dataworks_publicClient::deleteFileCallable(const DeleteFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
			[this, request]()
			{
			return this->deleteFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFolderOutcome Dataworks_publicClient::deleteFolder(const DeleteFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFolderOutcome(DeleteFolderResult(outcome.result()));
	else
		return DeleteFolderOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFolderOutcomeCallable Dataworks_publicClient::deleteFolderCallable(const DeleteFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFolderOutcome()>>(
			[this, request]()
			{
			return this->deleteFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFromMetaCategoryOutcome Dataworks_publicClient::deleteFromMetaCategory(const DeleteFromMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFromMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFromMetaCategoryOutcome(DeleteFromMetaCategoryResult(outcome.result()));
	else
		return DeleteFromMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFromMetaCategoryAsync(const DeleteFromMetaCategoryRequest& request, const DeleteFromMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFromMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFromMetaCategoryOutcomeCallable Dataworks_publicClient::deleteFromMetaCategoryCallable(const DeleteFromMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFromMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteFromMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteLineageRelationOutcome Dataworks_publicClient::deleteLineageRelation(const DeleteLineageRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLineageRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLineageRelationOutcome(DeleteLineageRelationResult(outcome.result()));
	else
		return DeleteLineageRelationOutcome(outcome.error());
}

void Dataworks_publicClient::deleteLineageRelationAsync(const DeleteLineageRelationRequest& request, const DeleteLineageRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLineageRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteLineageRelationOutcomeCallable Dataworks_publicClient::deleteLineageRelationCallable(const DeleteLineageRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLineageRelationOutcome()>>(
			[this, request]()
			{
			return this->deleteLineageRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteMetaCategoryOutcome Dataworks_publicClient::deleteMetaCategory(const DeleteMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetaCategoryOutcome(DeleteMetaCategoryResult(outcome.result()));
	else
		return DeleteMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::deleteMetaCategoryAsync(const DeleteMetaCategoryRequest& request, const DeleteMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteMetaCategoryOutcomeCallable Dataworks_publicClient::deleteMetaCategoryCallable(const DeleteMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteMetaCollectionOutcome Dataworks_publicClient::deleteMetaCollection(const DeleteMetaCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetaCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetaCollectionOutcome(DeleteMetaCollectionResult(outcome.result()));
	else
		return DeleteMetaCollectionOutcome(outcome.error());
}

void Dataworks_publicClient::deleteMetaCollectionAsync(const DeleteMetaCollectionRequest& request, const DeleteMetaCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetaCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteMetaCollectionOutcomeCallable Dataworks_publicClient::deleteMetaCollectionCallable(const DeleteMetaCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetaCollectionOutcome()>>(
			[this, request]()
			{
			return this->deleteMetaCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteMetaCollectionEntityOutcome Dataworks_publicClient::deleteMetaCollectionEntity(const DeleteMetaCollectionEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetaCollectionEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetaCollectionEntityOutcome(DeleteMetaCollectionEntityResult(outcome.result()));
	else
		return DeleteMetaCollectionEntityOutcome(outcome.error());
}

void Dataworks_publicClient::deleteMetaCollectionEntityAsync(const DeleteMetaCollectionEntityRequest& request, const DeleteMetaCollectionEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetaCollectionEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteMetaCollectionEntityOutcomeCallable Dataworks_publicClient::deleteMetaCollectionEntityCallable(const DeleteMetaCollectionEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetaCollectionEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteMetaCollectionEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteProjectMemberOutcome Dataworks_publicClient::deleteProjectMember(const DeleteProjectMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteProjectMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteProjectMemberOutcome(DeleteProjectMemberResult(outcome.result()));
	else
		return DeleteProjectMemberOutcome(outcome.error());
}

void Dataworks_publicClient::deleteProjectMemberAsync(const DeleteProjectMemberRequest& request, const DeleteProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteProjectMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteProjectMemberOutcomeCallable Dataworks_publicClient::deleteProjectMemberCallable(const DeleteProjectMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteProjectMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteProjectMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityEntityOutcome Dataworks_publicClient::deleteQualityEntity(const DeleteQualityEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityEntityOutcome(DeleteQualityEntityResult(outcome.result()));
	else
		return DeleteQualityEntityOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityEntityAsync(const DeleteQualityEntityRequest& request, const DeleteQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityEntityOutcomeCallable Dataworks_publicClient::deleteQualityEntityCallable(const DeleteQualityEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityFollowerOutcome Dataworks_publicClient::deleteQualityFollower(const DeleteQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityFollowerOutcome(DeleteQualityFollowerResult(outcome.result()));
	else
		return DeleteQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityFollowerAsync(const DeleteQualityFollowerRequest& request, const DeleteQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityFollowerOutcomeCallable Dataworks_publicClient::deleteQualityFollowerCallable(const DeleteQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityRelativeNodeOutcome Dataworks_publicClient::deleteQualityRelativeNode(const DeleteQualityRelativeNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityRelativeNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityRelativeNodeOutcome(DeleteQualityRelativeNodeResult(outcome.result()));
	else
		return DeleteQualityRelativeNodeOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityRelativeNodeAsync(const DeleteQualityRelativeNodeRequest& request, const DeleteQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityRelativeNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityRelativeNodeOutcomeCallable Dataworks_publicClient::deleteQualityRelativeNodeCallable(const DeleteQualityRelativeNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityRelativeNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityRelativeNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityRuleOutcome Dataworks_publicClient::deleteQualityRule(const DeleteQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityRuleOutcome(DeleteQualityRuleResult(outcome.result()));
	else
		return DeleteQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityRuleAsync(const DeleteQualityRuleRequest& request, const DeleteQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityRuleOutcomeCallable Dataworks_publicClient::deleteQualityRuleCallable(const DeleteQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteRecognizeRuleOutcome Dataworks_publicClient::deleteRecognizeRule(const DeleteRecognizeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecognizeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecognizeRuleOutcome(DeleteRecognizeRuleResult(outcome.result()));
	else
		return DeleteRecognizeRuleOutcome(outcome.error());
}

void Dataworks_publicClient::deleteRecognizeRuleAsync(const DeleteRecognizeRuleRequest& request, const DeleteRecognizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecognizeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteRecognizeRuleOutcomeCallable Dataworks_publicClient::deleteRecognizeRuleCallable(const DeleteRecognizeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecognizeRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRecognizeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteRemindOutcome Dataworks_publicClient::deleteRemind(const DeleteRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRemindOutcome(DeleteRemindResult(outcome.result()));
	else
		return DeleteRemindOutcome(outcome.error());
}

void Dataworks_publicClient::deleteRemindAsync(const DeleteRemindRequest& request, const DeleteRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteRemindOutcomeCallable Dataworks_publicClient::deleteRemindCallable(const DeleteRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRemindOutcome()>>(
			[this, request]()
			{
			return this->deleteRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteTableOutcome Dataworks_publicClient::deleteTable(const DeleteTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTableOutcome(DeleteTableResult(outcome.result()));
	else
		return DeleteTableOutcome(outcome.error());
}

void Dataworks_publicClient::deleteTableAsync(const DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteTableOutcomeCallable Dataworks_publicClient::deleteTableCallable(const DeleteTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTableOutcome()>>(
			[this, request]()
			{
			return this->deleteTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteTableLevelOutcome Dataworks_publicClient::deleteTableLevel(const DeleteTableLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTableLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTableLevelOutcome(DeleteTableLevelResult(outcome.result()));
	else
		return DeleteTableLevelOutcome(outcome.error());
}

void Dataworks_publicClient::deleteTableLevelAsync(const DeleteTableLevelRequest& request, const DeleteTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTableLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteTableLevelOutcomeCallable Dataworks_publicClient::deleteTableLevelCallable(const DeleteTableLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTableLevelOutcome()>>(
			[this, request]()
			{
			return this->deleteTableLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteTableThemeOutcome Dataworks_publicClient::deleteTableTheme(const DeleteTableThemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTableThemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTableThemeOutcome(DeleteTableThemeResult(outcome.result()));
	else
		return DeleteTableThemeOutcome(outcome.error());
}

void Dataworks_publicClient::deleteTableThemeAsync(const DeleteTableThemeRequest& request, const DeleteTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTableTheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteTableThemeOutcomeCallable Dataworks_publicClient::deleteTableThemeCallable(const DeleteTableThemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTableThemeOutcome()>>(
			[this, request]()
			{
			return this->deleteTableTheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeployDISyncTaskOutcome Dataworks_publicClient::deployDISyncTask(const DeployDISyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployDISyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployDISyncTaskOutcome(DeployDISyncTaskResult(outcome.result()));
	else
		return DeployDISyncTaskOutcome(outcome.error());
}

void Dataworks_publicClient::deployDISyncTaskAsync(const DeployDISyncTaskRequest& request, const DeployDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployDISyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeployDISyncTaskOutcomeCallable Dataworks_publicClient::deployDISyncTaskCallable(const DeployDISyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployDISyncTaskOutcome()>>(
			[this, request]()
			{
			return this->deployDISyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeployFileOutcome Dataworks_publicClient::deployFile(const DeployFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployFileOutcome(DeployFileResult(outcome.result()));
	else
		return DeployFileOutcome(outcome.error());
}

void Dataworks_publicClient::deployFileAsync(const DeployFileRequest& request, const DeployFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeployFileOutcomeCallable Dataworks_publicClient::deployFileCallable(const DeployFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployFileOutcome()>>(
			[this, request]()
			{
			return this->deployFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DesensitizeDataOutcome Dataworks_publicClient::desensitizeData(const DesensitizeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DesensitizeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DesensitizeDataOutcome(DesensitizeDataResult(outcome.result()));
	else
		return DesensitizeDataOutcome(outcome.error());
}

void Dataworks_publicClient::desensitizeDataAsync(const DesensitizeDataRequest& request, const DesensitizeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, desensitizeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DesensitizeDataOutcomeCallable Dataworks_publicClient::desensitizeDataCallable(const DesensitizeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DesensitizeDataOutcome()>>(
			[this, request]()
			{
			return this->desensitizeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgDesensPlanAddOrUpdateOutcome Dataworks_publicClient::dsgDesensPlanAddOrUpdate(const DsgDesensPlanAddOrUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgDesensPlanAddOrUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgDesensPlanAddOrUpdateOutcome(DsgDesensPlanAddOrUpdateResult(outcome.result()));
	else
		return DsgDesensPlanAddOrUpdateOutcome(outcome.error());
}

void Dataworks_publicClient::dsgDesensPlanAddOrUpdateAsync(const DsgDesensPlanAddOrUpdateRequest& request, const DsgDesensPlanAddOrUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgDesensPlanAddOrUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgDesensPlanAddOrUpdateOutcomeCallable Dataworks_publicClient::dsgDesensPlanAddOrUpdateCallable(const DsgDesensPlanAddOrUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgDesensPlanAddOrUpdateOutcome()>>(
			[this, request]()
			{
			return this->dsgDesensPlanAddOrUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgDesensPlanDeleteOutcome Dataworks_publicClient::dsgDesensPlanDelete(const DsgDesensPlanDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgDesensPlanDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgDesensPlanDeleteOutcome(DsgDesensPlanDeleteResult(outcome.result()));
	else
		return DsgDesensPlanDeleteOutcome(outcome.error());
}

void Dataworks_publicClient::dsgDesensPlanDeleteAsync(const DsgDesensPlanDeleteRequest& request, const DsgDesensPlanDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgDesensPlanDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgDesensPlanDeleteOutcomeCallable Dataworks_publicClient::dsgDesensPlanDeleteCallable(const DsgDesensPlanDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgDesensPlanDeleteOutcome()>>(
			[this, request]()
			{
			return this->dsgDesensPlanDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgDesensPlanQueryListOutcome Dataworks_publicClient::dsgDesensPlanQueryList(const DsgDesensPlanQueryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgDesensPlanQueryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgDesensPlanQueryListOutcome(DsgDesensPlanQueryListResult(outcome.result()));
	else
		return DsgDesensPlanQueryListOutcome(outcome.error());
}

void Dataworks_publicClient::dsgDesensPlanQueryListAsync(const DsgDesensPlanQueryListRequest& request, const DsgDesensPlanQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgDesensPlanQueryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgDesensPlanQueryListOutcomeCallable Dataworks_publicClient::dsgDesensPlanQueryListCallable(const DsgDesensPlanQueryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgDesensPlanQueryListOutcome()>>(
			[this, request]()
			{
			return this->dsgDesensPlanQueryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgDesensPlanUpdateStatusOutcome Dataworks_publicClient::dsgDesensPlanUpdateStatus(const DsgDesensPlanUpdateStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgDesensPlanUpdateStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgDesensPlanUpdateStatusOutcome(DsgDesensPlanUpdateStatusResult(outcome.result()));
	else
		return DsgDesensPlanUpdateStatusOutcome(outcome.error());
}

void Dataworks_publicClient::dsgDesensPlanUpdateStatusAsync(const DsgDesensPlanUpdateStatusRequest& request, const DsgDesensPlanUpdateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgDesensPlanUpdateStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgDesensPlanUpdateStatusOutcomeCallable Dataworks_publicClient::dsgDesensPlanUpdateStatusCallable(const DsgDesensPlanUpdateStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgDesensPlanUpdateStatusOutcome()>>(
			[this, request]()
			{
			return this->dsgDesensPlanUpdateStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgPlatformQueryProjectsAndSchemaFromMetaOutcome Dataworks_publicClient::dsgPlatformQueryProjectsAndSchemaFromMeta(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgPlatformQueryProjectsAndSchemaFromMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgPlatformQueryProjectsAndSchemaFromMetaOutcome(DsgPlatformQueryProjectsAndSchemaFromMetaResult(outcome.result()));
	else
		return DsgPlatformQueryProjectsAndSchemaFromMetaOutcome(outcome.error());
}

void Dataworks_publicClient::dsgPlatformQueryProjectsAndSchemaFromMetaAsync(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest& request, const DsgPlatformQueryProjectsAndSchemaFromMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgPlatformQueryProjectsAndSchemaFromMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgPlatformQueryProjectsAndSchemaFromMetaOutcomeCallable Dataworks_publicClient::dsgPlatformQueryProjectsAndSchemaFromMetaCallable(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgPlatformQueryProjectsAndSchemaFromMetaOutcome()>>(
			[this, request]()
			{
			return this->dsgPlatformQueryProjectsAndSchemaFromMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgQueryDefaultTemplatesOutcome Dataworks_publicClient::dsgQueryDefaultTemplates(const DsgQueryDefaultTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgQueryDefaultTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgQueryDefaultTemplatesOutcome(DsgQueryDefaultTemplatesResult(outcome.result()));
	else
		return DsgQueryDefaultTemplatesOutcome(outcome.error());
}

void Dataworks_publicClient::dsgQueryDefaultTemplatesAsync(const DsgQueryDefaultTemplatesRequest& request, const DsgQueryDefaultTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgQueryDefaultTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgQueryDefaultTemplatesOutcomeCallable Dataworks_publicClient::dsgQueryDefaultTemplatesCallable(const DsgQueryDefaultTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgQueryDefaultTemplatesOutcome()>>(
			[this, request]()
			{
			return this->dsgQueryDefaultTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgQuerySensResultOutcome Dataworks_publicClient::dsgQuerySensResult(const DsgQuerySensResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgQuerySensResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgQuerySensResultOutcome(DsgQuerySensResultResult(outcome.result()));
	else
		return DsgQuerySensResultOutcome(outcome.error());
}

void Dataworks_publicClient::dsgQuerySensResultAsync(const DsgQuerySensResultRequest& request, const DsgQuerySensResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgQuerySensResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgQuerySensResultOutcomeCallable Dataworks_publicClient::dsgQuerySensResultCallable(const DsgQuerySensResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgQuerySensResultOutcome()>>(
			[this, request]()
			{
			return this->dsgQuerySensResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgRunSensIdentifyOutcome Dataworks_publicClient::dsgRunSensIdentify(const DsgRunSensIdentifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgRunSensIdentifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgRunSensIdentifyOutcome(DsgRunSensIdentifyResult(outcome.result()));
	else
		return DsgRunSensIdentifyOutcome(outcome.error());
}

void Dataworks_publicClient::dsgRunSensIdentifyAsync(const DsgRunSensIdentifyRequest& request, const DsgRunSensIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgRunSensIdentify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgRunSensIdentifyOutcomeCallable Dataworks_publicClient::dsgRunSensIdentifyCallable(const DsgRunSensIdentifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgRunSensIdentifyOutcome()>>(
			[this, request]()
			{
			return this->dsgRunSensIdentify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgSceneAddOrUpdateSceneOutcome Dataworks_publicClient::dsgSceneAddOrUpdateScene(const DsgSceneAddOrUpdateSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgSceneAddOrUpdateSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgSceneAddOrUpdateSceneOutcome(DsgSceneAddOrUpdateSceneResult(outcome.result()));
	else
		return DsgSceneAddOrUpdateSceneOutcome(outcome.error());
}

void Dataworks_publicClient::dsgSceneAddOrUpdateSceneAsync(const DsgSceneAddOrUpdateSceneRequest& request, const DsgSceneAddOrUpdateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgSceneAddOrUpdateScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgSceneAddOrUpdateSceneOutcomeCallable Dataworks_publicClient::dsgSceneAddOrUpdateSceneCallable(const DsgSceneAddOrUpdateSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgSceneAddOrUpdateSceneOutcome()>>(
			[this, request]()
			{
			return this->dsgSceneAddOrUpdateScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgSceneQuerySceneListByNameOutcome Dataworks_publicClient::dsgSceneQuerySceneListByName(const DsgSceneQuerySceneListByNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgSceneQuerySceneListByNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgSceneQuerySceneListByNameOutcome(DsgSceneQuerySceneListByNameResult(outcome.result()));
	else
		return DsgSceneQuerySceneListByNameOutcome(outcome.error());
}

void Dataworks_publicClient::dsgSceneQuerySceneListByNameAsync(const DsgSceneQuerySceneListByNameRequest& request, const DsgSceneQuerySceneListByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgSceneQuerySceneListByName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgSceneQuerySceneListByNameOutcomeCallable Dataworks_publicClient::dsgSceneQuerySceneListByNameCallable(const DsgSceneQuerySceneListByNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgSceneQuerySceneListByNameOutcome()>>(
			[this, request]()
			{
			return this->dsgSceneQuerySceneListByName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgScenedDeleteSceneOutcome Dataworks_publicClient::dsgScenedDeleteScene(const DsgScenedDeleteSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgScenedDeleteSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgScenedDeleteSceneOutcome(DsgScenedDeleteSceneResult(outcome.result()));
	else
		return DsgScenedDeleteSceneOutcome(outcome.error());
}

void Dataworks_publicClient::dsgScenedDeleteSceneAsync(const DsgScenedDeleteSceneRequest& request, const DsgScenedDeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgScenedDeleteScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgScenedDeleteSceneOutcomeCallable Dataworks_publicClient::dsgScenedDeleteSceneCallable(const DsgScenedDeleteSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgScenedDeleteSceneOutcome()>>(
			[this, request]()
			{
			return this->dsgScenedDeleteScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgStopSensIdentifyOutcome Dataworks_publicClient::dsgStopSensIdentify(const DsgStopSensIdentifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgStopSensIdentifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgStopSensIdentifyOutcome(DsgStopSensIdentifyResult(outcome.result()));
	else
		return DsgStopSensIdentifyOutcome(outcome.error());
}

void Dataworks_publicClient::dsgStopSensIdentifyAsync(const DsgStopSensIdentifyRequest& request, const DsgStopSensIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgStopSensIdentify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgStopSensIdentifyOutcomeCallable Dataworks_publicClient::dsgStopSensIdentifyCallable(const DsgStopSensIdentifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgStopSensIdentifyOutcome()>>(
			[this, request]()
			{
			return this->dsgStopSensIdentify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgUserGroupAddOrUpdateOutcome Dataworks_publicClient::dsgUserGroupAddOrUpdate(const DsgUserGroupAddOrUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgUserGroupAddOrUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgUserGroupAddOrUpdateOutcome(DsgUserGroupAddOrUpdateResult(outcome.result()));
	else
		return DsgUserGroupAddOrUpdateOutcome(outcome.error());
}

void Dataworks_publicClient::dsgUserGroupAddOrUpdateAsync(const DsgUserGroupAddOrUpdateRequest& request, const DsgUserGroupAddOrUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgUserGroupAddOrUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgUserGroupAddOrUpdateOutcomeCallable Dataworks_publicClient::dsgUserGroupAddOrUpdateCallable(const DsgUserGroupAddOrUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgUserGroupAddOrUpdateOutcome()>>(
			[this, request]()
			{
			return this->dsgUserGroupAddOrUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgUserGroupDeleteOutcome Dataworks_publicClient::dsgUserGroupDelete(const DsgUserGroupDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgUserGroupDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgUserGroupDeleteOutcome(DsgUserGroupDeleteResult(outcome.result()));
	else
		return DsgUserGroupDeleteOutcome(outcome.error());
}

void Dataworks_publicClient::dsgUserGroupDeleteAsync(const DsgUserGroupDeleteRequest& request, const DsgUserGroupDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgUserGroupDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgUserGroupDeleteOutcomeCallable Dataworks_publicClient::dsgUserGroupDeleteCallable(const DsgUserGroupDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgUserGroupDeleteOutcome()>>(
			[this, request]()
			{
			return this->dsgUserGroupDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgUserGroupGetOdpsRoleGroupsOutcome Dataworks_publicClient::dsgUserGroupGetOdpsRoleGroups(const DsgUserGroupGetOdpsRoleGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgUserGroupGetOdpsRoleGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgUserGroupGetOdpsRoleGroupsOutcome(DsgUserGroupGetOdpsRoleGroupsResult(outcome.result()));
	else
		return DsgUserGroupGetOdpsRoleGroupsOutcome(outcome.error());
}

void Dataworks_publicClient::dsgUserGroupGetOdpsRoleGroupsAsync(const DsgUserGroupGetOdpsRoleGroupsRequest& request, const DsgUserGroupGetOdpsRoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgUserGroupGetOdpsRoleGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgUserGroupGetOdpsRoleGroupsOutcomeCallable Dataworks_publicClient::dsgUserGroupGetOdpsRoleGroupsCallable(const DsgUserGroupGetOdpsRoleGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgUserGroupGetOdpsRoleGroupsOutcome()>>(
			[this, request]()
			{
			return this->dsgUserGroupGetOdpsRoleGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgUserGroupQueryListOutcome Dataworks_publicClient::dsgUserGroupQueryList(const DsgUserGroupQueryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgUserGroupQueryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgUserGroupQueryListOutcome(DsgUserGroupQueryListResult(outcome.result()));
	else
		return DsgUserGroupQueryListOutcome(outcome.error());
}

void Dataworks_publicClient::dsgUserGroupQueryListAsync(const DsgUserGroupQueryListRequest& request, const DsgUserGroupQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgUserGroupQueryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgUserGroupQueryListOutcomeCallable Dataworks_publicClient::dsgUserGroupQueryListCallable(const DsgUserGroupQueryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgUserGroupQueryListOutcome()>>(
			[this, request]()
			{
			return this->dsgUserGroupQueryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgUserGroupQueryUserListOutcome Dataworks_publicClient::dsgUserGroupQueryUserList(const DsgUserGroupQueryUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgUserGroupQueryUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgUserGroupQueryUserListOutcome(DsgUserGroupQueryUserListResult(outcome.result()));
	else
		return DsgUserGroupQueryUserListOutcome(outcome.error());
}

void Dataworks_publicClient::dsgUserGroupQueryUserListAsync(const DsgUserGroupQueryUserListRequest& request, const DsgUserGroupQueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgUserGroupQueryUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgUserGroupQueryUserListOutcomeCallable Dataworks_publicClient::dsgUserGroupQueryUserListCallable(const DsgUserGroupQueryUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgUserGroupQueryUserListOutcome()>>(
			[this, request]()
			{
			return this->dsgUserGroupQueryUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgWhiteListAddOrUpdateOutcome Dataworks_publicClient::dsgWhiteListAddOrUpdate(const DsgWhiteListAddOrUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgWhiteListAddOrUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgWhiteListAddOrUpdateOutcome(DsgWhiteListAddOrUpdateResult(outcome.result()));
	else
		return DsgWhiteListAddOrUpdateOutcome(outcome.error());
}

void Dataworks_publicClient::dsgWhiteListAddOrUpdateAsync(const DsgWhiteListAddOrUpdateRequest& request, const DsgWhiteListAddOrUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgWhiteListAddOrUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgWhiteListAddOrUpdateOutcomeCallable Dataworks_publicClient::dsgWhiteListAddOrUpdateCallable(const DsgWhiteListAddOrUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgWhiteListAddOrUpdateOutcome()>>(
			[this, request]()
			{
			return this->dsgWhiteListAddOrUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgWhiteListDeleteListOutcome Dataworks_publicClient::dsgWhiteListDeleteList(const DsgWhiteListDeleteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgWhiteListDeleteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgWhiteListDeleteListOutcome(DsgWhiteListDeleteListResult(outcome.result()));
	else
		return DsgWhiteListDeleteListOutcome(outcome.error());
}

void Dataworks_publicClient::dsgWhiteListDeleteListAsync(const DsgWhiteListDeleteListRequest& request, const DsgWhiteListDeleteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgWhiteListDeleteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgWhiteListDeleteListOutcomeCallable Dataworks_publicClient::dsgWhiteListDeleteListCallable(const DsgWhiteListDeleteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgWhiteListDeleteListOutcome()>>(
			[this, request]()
			{
			return this->dsgWhiteListDeleteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DsgWhiteListQueryListOutcome Dataworks_publicClient::dsgWhiteListQueryList(const DsgWhiteListQueryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DsgWhiteListQueryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DsgWhiteListQueryListOutcome(DsgWhiteListQueryListResult(outcome.result()));
	else
		return DsgWhiteListQueryListOutcome(outcome.error());
}

void Dataworks_publicClient::dsgWhiteListQueryListAsync(const DsgWhiteListQueryListRequest& request, const DsgWhiteListQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dsgWhiteListQueryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DsgWhiteListQueryListOutcomeCallable Dataworks_publicClient::dsgWhiteListQueryListCallable(const DsgWhiteListQueryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DsgWhiteListQueryListOutcome()>>(
			[this, request]()
			{
			return this->dsgWhiteListQueryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::EditRecognizeRuleOutcome Dataworks_publicClient::editRecognizeRule(const EditRecognizeRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditRecognizeRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditRecognizeRuleOutcome(EditRecognizeRuleResult(outcome.result()));
	else
		return EditRecognizeRuleOutcome(outcome.error());
}

void Dataworks_publicClient::editRecognizeRuleAsync(const EditRecognizeRuleRequest& request, const EditRecognizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editRecognizeRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::EditRecognizeRuleOutcomeCallable Dataworks_publicClient::editRecognizeRuleCallable(const EditRecognizeRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditRecognizeRuleOutcome()>>(
			[this, request]()
			{
			return this->editRecognizeRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::EstablishRelationTableToBusinessOutcome Dataworks_publicClient::establishRelationTableToBusiness(const EstablishRelationTableToBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstablishRelationTableToBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstablishRelationTableToBusinessOutcome(EstablishRelationTableToBusinessResult(outcome.result()));
	else
		return EstablishRelationTableToBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::establishRelationTableToBusinessAsync(const EstablishRelationTableToBusinessRequest& request, const EstablishRelationTableToBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, establishRelationTableToBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::EstablishRelationTableToBusinessOutcomeCallable Dataworks_publicClient::establishRelationTableToBusinessCallable(const EstablishRelationTableToBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstablishRelationTableToBusinessOutcome()>>(
			[this, request]()
			{
			return this->establishRelationTableToBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ExportDataSourcesOutcome Dataworks_publicClient::exportDataSources(const ExportDataSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportDataSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportDataSourcesOutcome(ExportDataSourcesResult(outcome.result()));
	else
		return ExportDataSourcesOutcome(outcome.error());
}

void Dataworks_publicClient::exportDataSourcesAsync(const ExportDataSourcesRequest& request, const ExportDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportDataSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ExportDataSourcesOutcomeCallable Dataworks_publicClient::exportDataSourcesCallable(const ExportDataSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportDataSourcesOutcome()>>(
			[this, request]()
			{
			return this->exportDataSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GenerateDISyncTaskConfigForCreatingOutcome Dataworks_publicClient::generateDISyncTaskConfigForCreating(const GenerateDISyncTaskConfigForCreatingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDISyncTaskConfigForCreatingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDISyncTaskConfigForCreatingOutcome(GenerateDISyncTaskConfigForCreatingResult(outcome.result()));
	else
		return GenerateDISyncTaskConfigForCreatingOutcome(outcome.error());
}

void Dataworks_publicClient::generateDISyncTaskConfigForCreatingAsync(const GenerateDISyncTaskConfigForCreatingRequest& request, const GenerateDISyncTaskConfigForCreatingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDISyncTaskConfigForCreating(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GenerateDISyncTaskConfigForCreatingOutcomeCallable Dataworks_publicClient::generateDISyncTaskConfigForCreatingCallable(const GenerateDISyncTaskConfigForCreatingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDISyncTaskConfigForCreatingOutcome()>>(
			[this, request]()
			{
			return this->generateDISyncTaskConfigForCreating(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GenerateDISyncTaskConfigForUpdatingOutcome Dataworks_publicClient::generateDISyncTaskConfigForUpdating(const GenerateDISyncTaskConfigForUpdatingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDISyncTaskConfigForUpdatingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDISyncTaskConfigForUpdatingOutcome(GenerateDISyncTaskConfigForUpdatingResult(outcome.result()));
	else
		return GenerateDISyncTaskConfigForUpdatingOutcome(outcome.error());
}

void Dataworks_publicClient::generateDISyncTaskConfigForUpdatingAsync(const GenerateDISyncTaskConfigForUpdatingRequest& request, const GenerateDISyncTaskConfigForUpdatingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDISyncTaskConfigForUpdating(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GenerateDISyncTaskConfigForUpdatingOutcomeCallable Dataworks_publicClient::generateDISyncTaskConfigForUpdatingCallable(const GenerateDISyncTaskConfigForUpdatingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDISyncTaskConfigForUpdatingOutcome()>>(
			[this, request]()
			{
			return this->generateDISyncTaskConfigForUpdating(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetAlertMessageOutcome Dataworks_publicClient::getAlertMessage(const GetAlertMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAlertMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAlertMessageOutcome(GetAlertMessageResult(outcome.result()));
	else
		return GetAlertMessageOutcome(outcome.error());
}

void Dataworks_publicClient::getAlertMessageAsync(const GetAlertMessageRequest& request, const GetAlertMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAlertMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetAlertMessageOutcomeCallable Dataworks_publicClient::getAlertMessageCallable(const GetAlertMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAlertMessageOutcome()>>(
			[this, request]()
			{
			return this->getAlertMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineOutcome Dataworks_publicClient::getBaseline(const GetBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineOutcome(GetBaselineResult(outcome.result()));
	else
		return GetBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineAsync(const GetBaselineRequest& request, const GetBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineOutcomeCallable Dataworks_publicClient::getBaselineCallable(const GetBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineOutcome()>>(
			[this, request]()
			{
			return this->getBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineConfigOutcome Dataworks_publicClient::getBaselineConfig(const GetBaselineConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineConfigOutcome(GetBaselineConfigResult(outcome.result()));
	else
		return GetBaselineConfigOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineConfigAsync(const GetBaselineConfigRequest& request, const GetBaselineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaselineConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineConfigOutcomeCallable Dataworks_publicClient::getBaselineConfigCallable(const GetBaselineConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineConfigOutcome()>>(
			[this, request]()
			{
			return this->getBaselineConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineKeyPathOutcome Dataworks_publicClient::getBaselineKeyPath(const GetBaselineKeyPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineKeyPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineKeyPathOutcome(GetBaselineKeyPathResult(outcome.result()));
	else
		return GetBaselineKeyPathOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineKeyPathAsync(const GetBaselineKeyPathRequest& request, const GetBaselineKeyPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaselineKeyPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineKeyPathOutcomeCallable Dataworks_publicClient::getBaselineKeyPathCallable(const GetBaselineKeyPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineKeyPathOutcome()>>(
			[this, request]()
			{
			return this->getBaselineKeyPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineStatusOutcome Dataworks_publicClient::getBaselineStatus(const GetBaselineStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineStatusOutcome(GetBaselineStatusResult(outcome.result()));
	else
		return GetBaselineStatusOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineStatusAsync(const GetBaselineStatusRequest& request, const GetBaselineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaselineStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineStatusOutcomeCallable Dataworks_publicClient::getBaselineStatusCallable(const GetBaselineStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineStatusOutcome()>>(
			[this, request]()
			{
			return this->getBaselineStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBusinessOutcome Dataworks_publicClient::getBusiness(const GetBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBusinessOutcome(GetBusinessResult(outcome.result()));
	else
		return GetBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::getBusinessAsync(const GetBusinessRequest& request, const GetBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBusinessOutcomeCallable Dataworks_publicClient::getBusinessCallable(const GetBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBusinessOutcome()>>(
			[this, request]()
			{
			return this->getBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDDLJobStatusOutcome Dataworks_publicClient::getDDLJobStatus(const GetDDLJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDDLJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDDLJobStatusOutcome(GetDDLJobStatusResult(outcome.result()));
	else
		return GetDDLJobStatusOutcome(outcome.error());
}

void Dataworks_publicClient::getDDLJobStatusAsync(const GetDDLJobStatusRequest& request, const GetDDLJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDDLJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDDLJobStatusOutcomeCallable Dataworks_publicClient::getDDLJobStatusCallable(const GetDDLJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDDLJobStatusOutcome()>>(
			[this, request]()
			{
			return this->getDDLJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDIAlarmRuleOutcome Dataworks_publicClient::getDIAlarmRule(const GetDIAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDIAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDIAlarmRuleOutcome(GetDIAlarmRuleResult(outcome.result()));
	else
		return GetDIAlarmRuleOutcome(outcome.error());
}

void Dataworks_publicClient::getDIAlarmRuleAsync(const GetDIAlarmRuleRequest& request, const GetDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDIAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDIAlarmRuleOutcomeCallable Dataworks_publicClient::getDIAlarmRuleCallable(const GetDIAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDIAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->getDIAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDIJobOutcome Dataworks_publicClient::getDIJob(const GetDIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDIJobOutcome(GetDIJobResult(outcome.result()));
	else
		return GetDIJobOutcome(outcome.error());
}

void Dataworks_publicClient::getDIJobAsync(const GetDIJobRequest& request, const GetDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDIJobOutcomeCallable Dataworks_publicClient::getDIJobCallable(const GetDIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDIJobOutcome()>>(
			[this, request]()
			{
			return this->getDIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDISyncInstanceInfoOutcome Dataworks_publicClient::getDISyncInstanceInfo(const GetDISyncInstanceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDISyncInstanceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDISyncInstanceInfoOutcome(GetDISyncInstanceInfoResult(outcome.result()));
	else
		return GetDISyncInstanceInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getDISyncInstanceInfoAsync(const GetDISyncInstanceInfoRequest& request, const GetDISyncInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDISyncInstanceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDISyncInstanceInfoOutcomeCallable Dataworks_publicClient::getDISyncInstanceInfoCallable(const GetDISyncInstanceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDISyncInstanceInfoOutcome()>>(
			[this, request]()
			{
			return this->getDISyncInstanceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDISyncTaskOutcome Dataworks_publicClient::getDISyncTask(const GetDISyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDISyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDISyncTaskOutcome(GetDISyncTaskResult(outcome.result()));
	else
		return GetDISyncTaskOutcome(outcome.error());
}

void Dataworks_publicClient::getDISyncTaskAsync(const GetDISyncTaskRequest& request, const GetDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDISyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDISyncTaskOutcomeCallable Dataworks_publicClient::getDISyncTaskCallable(const GetDISyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDISyncTaskOutcome()>>(
			[this, request]()
			{
			return this->getDISyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDagOutcome Dataworks_publicClient::getDag(const GetDagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDagOutcome(GetDagResult(outcome.result()));
	else
		return GetDagOutcome(outcome.error());
}

void Dataworks_publicClient::getDagAsync(const GetDagRequest& request, const GetDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDagOutcomeCallable Dataworks_publicClient::getDagCallable(const GetDagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDagOutcome()>>(
			[this, request]()
			{
			return this->getDag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceApiOutcome Dataworks_publicClient::getDataServiceApi(const GetDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApiOutcome(GetDataServiceApiResult(outcome.result()));
	else
		return GetDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApiAsync(const GetDataServiceApiRequest& request, const GetDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApiOutcomeCallable Dataworks_publicClient::getDataServiceApiCallable(const GetDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceApiTestOutcome Dataworks_publicClient::getDataServiceApiTest(const GetDataServiceApiTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApiTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApiTestOutcome(GetDataServiceApiTestResult(outcome.result()));
	else
		return GetDataServiceApiTestOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApiTestAsync(const GetDataServiceApiTestRequest& request, const GetDataServiceApiTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApiTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApiTestOutcomeCallable Dataworks_publicClient::getDataServiceApiTestCallable(const GetDataServiceApiTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApiTestOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApiTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceApplicationOutcome Dataworks_publicClient::getDataServiceApplication(const GetDataServiceApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApplicationOutcome(GetDataServiceApplicationResult(outcome.result()));
	else
		return GetDataServiceApplicationOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApplicationAsync(const GetDataServiceApplicationRequest& request, const GetDataServiceApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApplicationOutcomeCallable Dataworks_publicClient::getDataServiceApplicationCallable(const GetDataServiceApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApplicationOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceFolderOutcome Dataworks_publicClient::getDataServiceFolder(const GetDataServiceFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceFolderOutcome(GetDataServiceFolderResult(outcome.result()));
	else
		return GetDataServiceFolderOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceFolderAsync(const GetDataServiceFolderRequest& request, const GetDataServiceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceFolderOutcomeCallable Dataworks_publicClient::getDataServiceFolderCallable(const GetDataServiceFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceFolderOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceGroupOutcome Dataworks_publicClient::getDataServiceGroup(const GetDataServiceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceGroupOutcome(GetDataServiceGroupResult(outcome.result()));
	else
		return GetDataServiceGroupOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceGroupAsync(const GetDataServiceGroupRequest& request, const GetDataServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceGroupOutcomeCallable Dataworks_publicClient::getDataServiceGroupCallable(const GetDataServiceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceGroupOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServicePublishedApiOutcome Dataworks_publicClient::getDataServicePublishedApi(const GetDataServicePublishedApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServicePublishedApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServicePublishedApiOutcome(GetDataServicePublishedApiResult(outcome.result()));
	else
		return GetDataServicePublishedApiOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServicePublishedApiAsync(const GetDataServicePublishedApiRequest& request, const GetDataServicePublishedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServicePublishedApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServicePublishedApiOutcomeCallable Dataworks_publicClient::getDataServicePublishedApiCallable(const GetDataServicePublishedApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServicePublishedApiOutcome()>>(
			[this, request]()
			{
			return this->getDataServicePublishedApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataSourceMetaOutcome Dataworks_publicClient::getDataSourceMeta(const GetDataSourceMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataSourceMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataSourceMetaOutcome(GetDataSourceMetaResult(outcome.result()));
	else
		return GetDataSourceMetaOutcome(outcome.error());
}

void Dataworks_publicClient::getDataSourceMetaAsync(const GetDataSourceMetaRequest& request, const GetDataSourceMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataSourceMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataSourceMetaOutcomeCallable Dataworks_publicClient::getDataSourceMetaCallable(const GetDataSourceMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataSourceMetaOutcome()>>(
			[this, request]()
			{
			return this->getDataSourceMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDeploymentOutcome Dataworks_publicClient::getDeployment(const GetDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeploymentOutcome(GetDeploymentResult(outcome.result()));
	else
		return GetDeploymentOutcome(outcome.error());
}

void Dataworks_publicClient::getDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDeploymentOutcomeCallable Dataworks_publicClient::getDeploymentCallable(const GetDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeploymentOutcome()>>(
			[this, request]()
			{
			return this->getDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetExtensionOutcome Dataworks_publicClient::getExtension(const GetExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetExtensionOutcome(GetExtensionResult(outcome.result()));
	else
		return GetExtensionOutcome(outcome.error());
}

void Dataworks_publicClient::getExtensionAsync(const GetExtensionRequest& request, const GetExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetExtensionOutcomeCallable Dataworks_publicClient::getExtensionCallable(const GetExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetExtensionOutcome()>>(
			[this, request]()
			{
			return this->getExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFileOutcome Dataworks_publicClient::getFile(const GetFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileOutcome(GetFileResult(outcome.result()));
	else
		return GetFileOutcome(outcome.error());
}

void Dataworks_publicClient::getFileAsync(const GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFileOutcomeCallable Dataworks_publicClient::getFileCallable(const GetFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileOutcome()>>(
			[this, request]()
			{
			return this->getFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFileTypeStatisticOutcome Dataworks_publicClient::getFileTypeStatistic(const GetFileTypeStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileTypeStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileTypeStatisticOutcome(GetFileTypeStatisticResult(outcome.result()));
	else
		return GetFileTypeStatisticOutcome(outcome.error());
}

void Dataworks_publicClient::getFileTypeStatisticAsync(const GetFileTypeStatisticRequest& request, const GetFileTypeStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileTypeStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFileTypeStatisticOutcomeCallable Dataworks_publicClient::getFileTypeStatisticCallable(const GetFileTypeStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileTypeStatisticOutcome()>>(
			[this, request]()
			{
			return this->getFileTypeStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFileVersionOutcome Dataworks_publicClient::getFileVersion(const GetFileVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileVersionOutcome(GetFileVersionResult(outcome.result()));
	else
		return GetFileVersionOutcome(outcome.error());
}

void Dataworks_publicClient::getFileVersionAsync(const GetFileVersionRequest& request, const GetFileVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFileVersionOutcomeCallable Dataworks_publicClient::getFileVersionCallable(const GetFileVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileVersionOutcome()>>(
			[this, request]()
			{
			return this->getFileVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFolderOutcome Dataworks_publicClient::getFolder(const GetFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFolderOutcome(GetFolderResult(outcome.result()));
	else
		return GetFolderOutcome(outcome.error());
}

void Dataworks_publicClient::getFolderAsync(const GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFolderOutcomeCallable Dataworks_publicClient::getFolderCallable(const GetFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFolderOutcome()>>(
			[this, request]()
			{
			return this->getFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetIDEEventDetailOutcome Dataworks_publicClient::getIDEEventDetail(const GetIDEEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIDEEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIDEEventDetailOutcome(GetIDEEventDetailResult(outcome.result()));
	else
		return GetIDEEventDetailOutcome(outcome.error());
}

void Dataworks_publicClient::getIDEEventDetailAsync(const GetIDEEventDetailRequest& request, const GetIDEEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIDEEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetIDEEventDetailOutcomeCallable Dataworks_publicClient::getIDEEventDetailCallable(const GetIDEEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIDEEventDetailOutcome()>>(
			[this, request]()
			{
			return this->getIDEEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceOutcome Dataworks_publicClient::getInstance(const GetInstanceRequest &request) const
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

void Dataworks_publicClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceOutcomeCallable Dataworks_publicClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceConsumeTimeRankOutcome Dataworks_publicClient::getInstanceConsumeTimeRank(const GetInstanceConsumeTimeRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceConsumeTimeRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceConsumeTimeRankOutcome(GetInstanceConsumeTimeRankResult(outcome.result()));
	else
		return GetInstanceConsumeTimeRankOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceConsumeTimeRankAsync(const GetInstanceConsumeTimeRankRequest& request, const GetInstanceConsumeTimeRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceConsumeTimeRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceConsumeTimeRankOutcomeCallable Dataworks_publicClient::getInstanceConsumeTimeRankCallable(const GetInstanceConsumeTimeRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceConsumeTimeRankOutcome()>>(
			[this, request]()
			{
			return this->getInstanceConsumeTimeRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceCountTrendOutcome Dataworks_publicClient::getInstanceCountTrend(const GetInstanceCountTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceCountTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceCountTrendOutcome(GetInstanceCountTrendResult(outcome.result()));
	else
		return GetInstanceCountTrendOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceCountTrendAsync(const GetInstanceCountTrendRequest& request, const GetInstanceCountTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceCountTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceCountTrendOutcomeCallable Dataworks_publicClient::getInstanceCountTrendCallable(const GetInstanceCountTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceCountTrendOutcome()>>(
			[this, request]()
			{
			return this->getInstanceCountTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceErrorRankOutcome Dataworks_publicClient::getInstanceErrorRank(const GetInstanceErrorRankRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceErrorRankOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceErrorRankOutcome(GetInstanceErrorRankResult(outcome.result()));
	else
		return GetInstanceErrorRankOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceErrorRankAsync(const GetInstanceErrorRankRequest& request, const GetInstanceErrorRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceErrorRank(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceErrorRankOutcomeCallable Dataworks_publicClient::getInstanceErrorRankCallable(const GetInstanceErrorRankRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceErrorRankOutcome()>>(
			[this, request]()
			{
			return this->getInstanceErrorRank(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceLogOutcome Dataworks_publicClient::getInstanceLog(const GetInstanceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceLogOutcome(GetInstanceLogResult(outcome.result()));
	else
		return GetInstanceLogOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceLogAsync(const GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceLogOutcomeCallable Dataworks_publicClient::getInstanceLogCallable(const GetInstanceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceLogOutcome()>>(
			[this, request]()
			{
			return this->getInstanceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceStatusCountOutcome Dataworks_publicClient::getInstanceStatusCount(const GetInstanceStatusCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceStatusCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceStatusCountOutcome(GetInstanceStatusCountResult(outcome.result()));
	else
		return GetInstanceStatusCountOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceStatusCountAsync(const GetInstanceStatusCountRequest& request, const GetInstanceStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceStatusCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceStatusCountOutcomeCallable Dataworks_publicClient::getInstanceStatusCountCallable(const GetInstanceStatusCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceStatusCountOutcome()>>(
			[this, request]()
			{
			return this->getInstanceStatusCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceStatusStatisticOutcome Dataworks_publicClient::getInstanceStatusStatistic(const GetInstanceStatusStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceStatusStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceStatusStatisticOutcome(GetInstanceStatusStatisticResult(outcome.result()));
	else
		return GetInstanceStatusStatisticOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceStatusStatisticAsync(const GetInstanceStatusStatisticRequest& request, const GetInstanceStatusStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceStatusStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceStatusStatisticOutcomeCallable Dataworks_publicClient::getInstanceStatusStatisticCallable(const GetInstanceStatusStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceStatusStatisticOutcome()>>(
			[this, request]()
			{
			return this->getInstanceStatusStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetManualDagInstancesOutcome Dataworks_publicClient::getManualDagInstances(const GetManualDagInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetManualDagInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetManualDagInstancesOutcome(GetManualDagInstancesResult(outcome.result()));
	else
		return GetManualDagInstancesOutcome(outcome.error());
}

void Dataworks_publicClient::getManualDagInstancesAsync(const GetManualDagInstancesRequest& request, const GetManualDagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getManualDagInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetManualDagInstancesOutcomeCallable Dataworks_publicClient::getManualDagInstancesCallable(const GetManualDagInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetManualDagInstancesOutcome()>>(
			[this, request]()
			{
			return this->getManualDagInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaCategoryOutcome Dataworks_publicClient::getMetaCategory(const GetMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaCategoryOutcome(GetMetaCategoryResult(outcome.result()));
	else
		return GetMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaCategoryAsync(const GetMetaCategoryRequest& request, const GetMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaCategoryOutcomeCallable Dataworks_publicClient::getMetaCategoryCallable(const GetMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->getMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaCollectionDetailOutcome Dataworks_publicClient::getMetaCollectionDetail(const GetMetaCollectionDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaCollectionDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaCollectionDetailOutcome(GetMetaCollectionDetailResult(outcome.result()));
	else
		return GetMetaCollectionDetailOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaCollectionDetailAsync(const GetMetaCollectionDetailRequest& request, const GetMetaCollectionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaCollectionDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaCollectionDetailOutcomeCallable Dataworks_publicClient::getMetaCollectionDetailCallable(const GetMetaCollectionDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaCollectionDetailOutcome()>>(
			[this, request]()
			{
			return this->getMetaCollectionDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaColumnLineageOutcome Dataworks_publicClient::getMetaColumnLineage(const GetMetaColumnLineageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaColumnLineageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaColumnLineageOutcome(GetMetaColumnLineageResult(outcome.result()));
	else
		return GetMetaColumnLineageOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaColumnLineageAsync(const GetMetaColumnLineageRequest& request, const GetMetaColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaColumnLineage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaColumnLineageOutcomeCallable Dataworks_publicClient::getMetaColumnLineageCallable(const GetMetaColumnLineageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaColumnLineageOutcome()>>(
			[this, request]()
			{
			return this->getMetaColumnLineage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaDBInfoOutcome Dataworks_publicClient::getMetaDBInfo(const GetMetaDBInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaDBInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaDBInfoOutcome(GetMetaDBInfoResult(outcome.result()));
	else
		return GetMetaDBInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaDBInfoAsync(const GetMetaDBInfoRequest& request, const GetMetaDBInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaDBInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaDBInfoOutcomeCallable Dataworks_publicClient::getMetaDBInfoCallable(const GetMetaDBInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaDBInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaDBInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaDBTableListOutcome Dataworks_publicClient::getMetaDBTableList(const GetMetaDBTableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaDBTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaDBTableListOutcome(GetMetaDBTableListResult(outcome.result()));
	else
		return GetMetaDBTableListOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaDBTableListAsync(const GetMetaDBTableListRequest& request, const GetMetaDBTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaDBTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaDBTableListOutcomeCallable Dataworks_publicClient::getMetaDBTableListCallable(const GetMetaDBTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaDBTableListOutcome()>>(
			[this, request]()
			{
			return this->getMetaDBTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableBasicInfoOutcome Dataworks_publicClient::getMetaTableBasicInfo(const GetMetaTableBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableBasicInfoOutcome(GetMetaTableBasicInfoResult(outcome.result()));
	else
		return GetMetaTableBasicInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableBasicInfoAsync(const GetMetaTableBasicInfoRequest& request, const GetMetaTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableBasicInfoOutcomeCallable Dataworks_publicClient::getMetaTableBasicInfoCallable(const GetMetaTableBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableChangeLogOutcome Dataworks_publicClient::getMetaTableChangeLog(const GetMetaTableChangeLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableChangeLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableChangeLogOutcome(GetMetaTableChangeLogResult(outcome.result()));
	else
		return GetMetaTableChangeLogOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableChangeLogAsync(const GetMetaTableChangeLogRequest& request, const GetMetaTableChangeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableChangeLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableChangeLogOutcomeCallable Dataworks_publicClient::getMetaTableChangeLogCallable(const GetMetaTableChangeLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableChangeLogOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableChangeLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableColumnOutcome Dataworks_publicClient::getMetaTableColumn(const GetMetaTableColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableColumnOutcome(GetMetaTableColumnResult(outcome.result()));
	else
		return GetMetaTableColumnOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableColumnAsync(const GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableColumnOutcomeCallable Dataworks_publicClient::getMetaTableColumnCallable(const GetMetaTableColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableColumnOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableFullInfoOutcome Dataworks_publicClient::getMetaTableFullInfo(const GetMetaTableFullInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableFullInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableFullInfoOutcome(GetMetaTableFullInfoResult(outcome.result()));
	else
		return GetMetaTableFullInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableFullInfoAsync(const GetMetaTableFullInfoRequest& request, const GetMetaTableFullInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableFullInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableFullInfoOutcomeCallable Dataworks_publicClient::getMetaTableFullInfoCallable(const GetMetaTableFullInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableFullInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableFullInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableIntroWikiOutcome Dataworks_publicClient::getMetaTableIntroWiki(const GetMetaTableIntroWikiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableIntroWikiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableIntroWikiOutcome(GetMetaTableIntroWikiResult(outcome.result()));
	else
		return GetMetaTableIntroWikiOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableIntroWikiAsync(const GetMetaTableIntroWikiRequest& request, const GetMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableIntroWiki(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableIntroWikiOutcomeCallable Dataworks_publicClient::getMetaTableIntroWikiCallable(const GetMetaTableIntroWikiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableIntroWikiOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableIntroWiki(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableLineageOutcome Dataworks_publicClient::getMetaTableLineage(const GetMetaTableLineageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableLineageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableLineageOutcome(GetMetaTableLineageResult(outcome.result()));
	else
		return GetMetaTableLineageOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableLineageAsync(const GetMetaTableLineageRequest& request, const GetMetaTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableLineage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableLineageOutcomeCallable Dataworks_publicClient::getMetaTableLineageCallable(const GetMetaTableLineageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableLineageOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableLineage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableListByCategoryOutcome Dataworks_publicClient::getMetaTableListByCategory(const GetMetaTableListByCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableListByCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableListByCategoryOutcome(GetMetaTableListByCategoryResult(outcome.result()));
	else
		return GetMetaTableListByCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableListByCategoryAsync(const GetMetaTableListByCategoryRequest& request, const GetMetaTableListByCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableListByCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableListByCategoryOutcomeCallable Dataworks_publicClient::getMetaTableListByCategoryCallable(const GetMetaTableListByCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableListByCategoryOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableListByCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableOutputOutcome Dataworks_publicClient::getMetaTableOutput(const GetMetaTableOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableOutputOutcome(GetMetaTableOutputResult(outcome.result()));
	else
		return GetMetaTableOutputOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableOutputAsync(const GetMetaTableOutputRequest& request, const GetMetaTableOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableOutputOutcomeCallable Dataworks_publicClient::getMetaTableOutputCallable(const GetMetaTableOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableOutputOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTablePartitionOutcome Dataworks_publicClient::getMetaTablePartition(const GetMetaTablePartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTablePartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTablePartitionOutcome(GetMetaTablePartitionResult(outcome.result()));
	else
		return GetMetaTablePartitionOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTablePartitionAsync(const GetMetaTablePartitionRequest& request, const GetMetaTablePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTablePartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTablePartitionOutcomeCallable Dataworks_publicClient::getMetaTablePartitionCallable(const GetMetaTablePartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTablePartitionOutcome()>>(
			[this, request]()
			{
			return this->getMetaTablePartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableProducingTasksOutcome Dataworks_publicClient::getMetaTableProducingTasks(const GetMetaTableProducingTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableProducingTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableProducingTasksOutcome(GetMetaTableProducingTasksResult(outcome.result()));
	else
		return GetMetaTableProducingTasksOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableProducingTasksAsync(const GetMetaTableProducingTasksRequest& request, const GetMetaTableProducingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableProducingTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableProducingTasksOutcomeCallable Dataworks_publicClient::getMetaTableProducingTasksCallable(const GetMetaTableProducingTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableProducingTasksOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableProducingTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableThemeLevelOutcome Dataworks_publicClient::getMetaTableThemeLevel(const GetMetaTableThemeLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableThemeLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableThemeLevelOutcome(GetMetaTableThemeLevelResult(outcome.result()));
	else
		return GetMetaTableThemeLevelOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableThemeLevelAsync(const GetMetaTableThemeLevelRequest& request, const GetMetaTableThemeLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableThemeLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableThemeLevelOutcomeCallable Dataworks_publicClient::getMetaTableThemeLevelCallable(const GetMetaTableThemeLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableThemeLevelOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableThemeLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMigrationProcessOutcome Dataworks_publicClient::getMigrationProcess(const GetMigrationProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMigrationProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMigrationProcessOutcome(GetMigrationProcessResult(outcome.result()));
	else
		return GetMigrationProcessOutcome(outcome.error());
}

void Dataworks_publicClient::getMigrationProcessAsync(const GetMigrationProcessRequest& request, const GetMigrationProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMigrationProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMigrationProcessOutcomeCallable Dataworks_publicClient::getMigrationProcessCallable(const GetMigrationProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMigrationProcessOutcome()>>(
			[this, request]()
			{
			return this->getMigrationProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMigrationSummaryOutcome Dataworks_publicClient::getMigrationSummary(const GetMigrationSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMigrationSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMigrationSummaryOutcome(GetMigrationSummaryResult(outcome.result()));
	else
		return GetMigrationSummaryOutcome(outcome.error());
}

void Dataworks_publicClient::getMigrationSummaryAsync(const GetMigrationSummaryRequest& request, const GetMigrationSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMigrationSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMigrationSummaryOutcomeCallable Dataworks_publicClient::getMigrationSummaryCallable(const GetMigrationSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMigrationSummaryOutcome()>>(
			[this, request]()
			{
			return this->getMigrationSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeOutcome Dataworks_publicClient::getNode(const GetNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeOutcome(GetNodeResult(outcome.result()));
	else
		return GetNodeOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeAsync(const GetNodeRequest& request, const GetNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeOutcomeCallable Dataworks_publicClient::getNodeCallable(const GetNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeOutcome()>>(
			[this, request]()
			{
			return this->getNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeChildrenOutcome Dataworks_publicClient::getNodeChildren(const GetNodeChildrenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeChildrenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeChildrenOutcome(GetNodeChildrenResult(outcome.result()));
	else
		return GetNodeChildrenOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeChildrenAsync(const GetNodeChildrenRequest& request, const GetNodeChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeChildren(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeChildrenOutcomeCallable Dataworks_publicClient::getNodeChildrenCallable(const GetNodeChildrenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeChildrenOutcome()>>(
			[this, request]()
			{
			return this->getNodeChildren(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeCodeOutcome Dataworks_publicClient::getNodeCode(const GetNodeCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeCodeOutcome(GetNodeCodeResult(outcome.result()));
	else
		return GetNodeCodeOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeCodeAsync(const GetNodeCodeRequest& request, const GetNodeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeCodeOutcomeCallable Dataworks_publicClient::getNodeCodeCallable(const GetNodeCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeCodeOutcome()>>(
			[this, request]()
			{
			return this->getNodeCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeOnBaselineOutcome Dataworks_publicClient::getNodeOnBaseline(const GetNodeOnBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeOnBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeOnBaselineOutcome(GetNodeOnBaselineResult(outcome.result()));
	else
		return GetNodeOnBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeOnBaselineAsync(const GetNodeOnBaselineRequest& request, const GetNodeOnBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeOnBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeOnBaselineOutcomeCallable Dataworks_publicClient::getNodeOnBaselineCallable(const GetNodeOnBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeOnBaselineOutcome()>>(
			[this, request]()
			{
			return this->getNodeOnBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeParentsOutcome Dataworks_publicClient::getNodeParents(const GetNodeParentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeParentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeParentsOutcome(GetNodeParentsResult(outcome.result()));
	else
		return GetNodeParentsOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeParentsAsync(const GetNodeParentsRequest& request, const GetNodeParentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeParents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeParentsOutcomeCallable Dataworks_publicClient::getNodeParentsCallable(const GetNodeParentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeParentsOutcome()>>(
			[this, request]()
			{
			return this->getNodeParents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeTypeListInfoOutcome Dataworks_publicClient::getNodeTypeListInfo(const GetNodeTypeListInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeTypeListInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeTypeListInfoOutcome(GetNodeTypeListInfoResult(outcome.result()));
	else
		return GetNodeTypeListInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeTypeListInfoAsync(const GetNodeTypeListInfoRequest& request, const GetNodeTypeListInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeTypeListInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeTypeListInfoOutcomeCallable Dataworks_publicClient::getNodeTypeListInfoCallable(const GetNodeTypeListInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeTypeListInfoOutcome()>>(
			[this, request]()
			{
			return this->getNodeTypeListInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetOpRiskDataOutcome Dataworks_publicClient::getOpRiskData(const GetOpRiskDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpRiskDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpRiskDataOutcome(GetOpRiskDataResult(outcome.result()));
	else
		return GetOpRiskDataOutcome(outcome.error());
}

void Dataworks_publicClient::getOpRiskDataAsync(const GetOpRiskDataRequest& request, const GetOpRiskDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpRiskData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetOpRiskDataOutcomeCallable Dataworks_publicClient::getOpRiskDataCallable(const GetOpRiskDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpRiskDataOutcome()>>(
			[this, request]()
			{
			return this->getOpRiskData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetOpSensitiveDataOutcome Dataworks_publicClient::getOpSensitiveData(const GetOpSensitiveDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOpSensitiveDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOpSensitiveDataOutcome(GetOpSensitiveDataResult(outcome.result()));
	else
		return GetOpSensitiveDataOutcome(outcome.error());
}

void Dataworks_publicClient::getOpSensitiveDataAsync(const GetOpSensitiveDataRequest& request, const GetOpSensitiveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOpSensitiveData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetOpSensitiveDataOutcomeCallable Dataworks_publicClient::getOpSensitiveDataCallable(const GetOpSensitiveDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOpSensitiveDataOutcome()>>(
			[this, request]()
			{
			return this->getOpSensitiveData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetOptionValueForProjectOutcome Dataworks_publicClient::getOptionValueForProject(const GetOptionValueForProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOptionValueForProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOptionValueForProjectOutcome(GetOptionValueForProjectResult(outcome.result()));
	else
		return GetOptionValueForProjectOutcome(outcome.error());
}

void Dataworks_publicClient::getOptionValueForProjectAsync(const GetOptionValueForProjectRequest& request, const GetOptionValueForProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOptionValueForProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetOptionValueForProjectOutcomeCallable Dataworks_publicClient::getOptionValueForProjectCallable(const GetOptionValueForProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOptionValueForProjectOutcome()>>(
			[this, request]()
			{
			return this->getOptionValueForProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetPermissionApplyOrderDetailOutcome Dataworks_publicClient::getPermissionApplyOrderDetail(const GetPermissionApplyOrderDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPermissionApplyOrderDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPermissionApplyOrderDetailOutcome(GetPermissionApplyOrderDetailResult(outcome.result()));
	else
		return GetPermissionApplyOrderDetailOutcome(outcome.error());
}

void Dataworks_publicClient::getPermissionApplyOrderDetailAsync(const GetPermissionApplyOrderDetailRequest& request, const GetPermissionApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPermissionApplyOrderDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetPermissionApplyOrderDetailOutcomeCallable Dataworks_publicClient::getPermissionApplyOrderDetailCallable(const GetPermissionApplyOrderDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPermissionApplyOrderDetailOutcome()>>(
			[this, request]()
			{
			return this->getPermissionApplyOrderDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetProjectOutcome Dataworks_publicClient::getProject(const GetProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectOutcome(GetProjectResult(outcome.result()));
	else
		return GetProjectOutcome(outcome.error());
}

void Dataworks_publicClient::getProjectAsync(const GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetProjectOutcomeCallable Dataworks_publicClient::getProjectCallable(const GetProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectOutcome()>>(
			[this, request]()
			{
			return this->getProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetProjectDetailOutcome Dataworks_publicClient::getProjectDetail(const GetProjectDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectDetailOutcome(GetProjectDetailResult(outcome.result()));
	else
		return GetProjectDetailOutcome(outcome.error());
}

void Dataworks_publicClient::getProjectDetailAsync(const GetProjectDetailRequest& request, const GetProjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetProjectDetailOutcomeCallable Dataworks_publicClient::getProjectDetailCallable(const GetProjectDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectDetailOutcome()>>(
			[this, request]()
			{
			return this->getProjectDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetQualityEntityOutcome Dataworks_publicClient::getQualityEntity(const GetQualityEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualityEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualityEntityOutcome(GetQualityEntityResult(outcome.result()));
	else
		return GetQualityEntityOutcome(outcome.error());
}

void Dataworks_publicClient::getQualityEntityAsync(const GetQualityEntityRequest& request, const GetQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualityEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetQualityEntityOutcomeCallable Dataworks_publicClient::getQualityEntityCallable(const GetQualityEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualityEntityOutcome()>>(
			[this, request]()
			{
			return this->getQualityEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetQualityFollowerOutcome Dataworks_publicClient::getQualityFollower(const GetQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualityFollowerOutcome(GetQualityFollowerResult(outcome.result()));
	else
		return GetQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::getQualityFollowerAsync(const GetQualityFollowerRequest& request, const GetQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetQualityFollowerOutcomeCallable Dataworks_publicClient::getQualityFollowerCallable(const GetQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->getQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetQualityRuleOutcome Dataworks_publicClient::getQualityRule(const GetQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualityRuleOutcome(GetQualityRuleResult(outcome.result()));
	else
		return GetQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::getQualityRuleAsync(const GetQualityRuleRequest& request, const GetQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetQualityRuleOutcomeCallable Dataworks_publicClient::getQualityRuleCallable(const GetQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->getQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetRemindOutcome Dataworks_publicClient::getRemind(const GetRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRemindOutcome(GetRemindResult(outcome.result()));
	else
		return GetRemindOutcome(outcome.error());
}

void Dataworks_publicClient::getRemindAsync(const GetRemindRequest& request, const GetRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetRemindOutcomeCallable Dataworks_publicClient::getRemindCallable(const GetRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRemindOutcome()>>(
			[this, request]()
			{
			return this->getRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetSensitiveDataOutcome Dataworks_publicClient::getSensitiveData(const GetSensitiveDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSensitiveDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSensitiveDataOutcome(GetSensitiveDataResult(outcome.result()));
	else
		return GetSensitiveDataOutcome(outcome.error());
}

void Dataworks_publicClient::getSensitiveDataAsync(const GetSensitiveDataRequest& request, const GetSensitiveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSensitiveData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetSensitiveDataOutcomeCallable Dataworks_publicClient::getSensitiveDataCallable(const GetSensitiveDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSensitiveDataOutcome()>>(
			[this, request]()
			{
			return this->getSensitiveData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetSuccessInstanceTrendOutcome Dataworks_publicClient::getSuccessInstanceTrend(const GetSuccessInstanceTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSuccessInstanceTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSuccessInstanceTrendOutcome(GetSuccessInstanceTrendResult(outcome.result()));
	else
		return GetSuccessInstanceTrendOutcome(outcome.error());
}

void Dataworks_publicClient::getSuccessInstanceTrendAsync(const GetSuccessInstanceTrendRequest& request, const GetSuccessInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSuccessInstanceTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetSuccessInstanceTrendOutcomeCallable Dataworks_publicClient::getSuccessInstanceTrendCallable(const GetSuccessInstanceTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSuccessInstanceTrendOutcome()>>(
			[this, request]()
			{
			return this->getSuccessInstanceTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetTopicOutcome Dataworks_publicClient::getTopic(const GetTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicOutcome(GetTopicResult(outcome.result()));
	else
		return GetTopicOutcome(outcome.error());
}

void Dataworks_publicClient::getTopicAsync(const GetTopicRequest& request, const GetTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetTopicOutcomeCallable Dataworks_publicClient::getTopicCallable(const GetTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicOutcome()>>(
			[this, request]()
			{
			return this->getTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetTopicInfluenceOutcome Dataworks_publicClient::getTopicInfluence(const GetTopicInfluenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicInfluenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicInfluenceOutcome(GetTopicInfluenceResult(outcome.result()));
	else
		return GetTopicInfluenceOutcome(outcome.error());
}

void Dataworks_publicClient::getTopicInfluenceAsync(const GetTopicInfluenceRequest& request, const GetTopicInfluenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopicInfluence(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetTopicInfluenceOutcomeCallable Dataworks_publicClient::getTopicInfluenceCallable(const GetTopicInfluenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicInfluenceOutcome()>>(
			[this, request]()
			{
			return this->getTopicInfluence(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ImportDataSourcesOutcome Dataworks_publicClient::importDataSources(const ImportDataSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDataSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDataSourcesOutcome(ImportDataSourcesResult(outcome.result()));
	else
		return ImportDataSourcesOutcome(outcome.error());
}

void Dataworks_publicClient::importDataSourcesAsync(const ImportDataSourcesRequest& request, const ImportDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDataSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ImportDataSourcesOutcomeCallable Dataworks_publicClient::importDataSourcesCallable(const ImportDataSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDataSourcesOutcome()>>(
			[this, request]()
			{
			return this->importDataSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListAlertMessagesOutcome Dataworks_publicClient::listAlertMessages(const ListAlertMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertMessagesOutcome(ListAlertMessagesResult(outcome.result()));
	else
		return ListAlertMessagesOutcome(outcome.error());
}

void Dataworks_publicClient::listAlertMessagesAsync(const ListAlertMessagesRequest& request, const ListAlertMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlertMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListAlertMessagesOutcomeCallable Dataworks_publicClient::listAlertMessagesCallable(const ListAlertMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertMessagesOutcome()>>(
			[this, request]()
			{
			return this->listAlertMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBaselineConfigsOutcome Dataworks_publicClient::listBaselineConfigs(const ListBaselineConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaselineConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaselineConfigsOutcome(ListBaselineConfigsResult(outcome.result()));
	else
		return ListBaselineConfigsOutcome(outcome.error());
}

void Dataworks_publicClient::listBaselineConfigsAsync(const ListBaselineConfigsRequest& request, const ListBaselineConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaselineConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBaselineConfigsOutcomeCallable Dataworks_publicClient::listBaselineConfigsCallable(const ListBaselineConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaselineConfigsOutcome()>>(
			[this, request]()
			{
			return this->listBaselineConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBaselineStatusesOutcome Dataworks_publicClient::listBaselineStatuses(const ListBaselineStatusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaselineStatusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaselineStatusesOutcome(ListBaselineStatusesResult(outcome.result()));
	else
		return ListBaselineStatusesOutcome(outcome.error());
}

void Dataworks_publicClient::listBaselineStatusesAsync(const ListBaselineStatusesRequest& request, const ListBaselineStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaselineStatuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBaselineStatusesOutcomeCallable Dataworks_publicClient::listBaselineStatusesCallable(const ListBaselineStatusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaselineStatusesOutcome()>>(
			[this, request]()
			{
			return this->listBaselineStatuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBaselinesOutcome Dataworks_publicClient::listBaselines(const ListBaselinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaselinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaselinesOutcome(ListBaselinesResult(outcome.result()));
	else
		return ListBaselinesOutcome(outcome.error());
}

void Dataworks_publicClient::listBaselinesAsync(const ListBaselinesRequest& request, const ListBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaselines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBaselinesOutcomeCallable Dataworks_publicClient::listBaselinesCallable(const ListBaselinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaselinesOutcome()>>(
			[this, request]()
			{
			return this->listBaselines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBusinessOutcome Dataworks_publicClient::listBusiness(const ListBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBusinessOutcome(ListBusinessResult(outcome.result()));
	else
		return ListBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::listBusinessAsync(const ListBusinessRequest& request, const ListBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBusinessOutcomeCallable Dataworks_publicClient::listBusinessCallable(const ListBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBusinessOutcome()>>(
			[this, request]()
			{
			return this->listBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListCalcEnginesOutcome Dataworks_publicClient::listCalcEngines(const ListCalcEnginesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCalcEnginesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCalcEnginesOutcome(ListCalcEnginesResult(outcome.result()));
	else
		return ListCalcEnginesOutcome(outcome.error());
}

void Dataworks_publicClient::listCalcEnginesAsync(const ListCalcEnginesRequest& request, const ListCalcEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCalcEngines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListCalcEnginesOutcomeCallable Dataworks_publicClient::listCalcEnginesCallable(const ListCalcEnginesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCalcEnginesOutcome()>>(
			[this, request]()
			{
			return this->listCalcEngines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListCheckProcessesOutcome Dataworks_publicClient::listCheckProcesses(const ListCheckProcessesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckProcessesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckProcessesOutcome(ListCheckProcessesResult(outcome.result()));
	else
		return ListCheckProcessesOutcome(outcome.error());
}

void Dataworks_publicClient::listCheckProcessesAsync(const ListCheckProcessesRequest& request, const ListCheckProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckProcesses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListCheckProcessesOutcomeCallable Dataworks_publicClient::listCheckProcessesCallable(const ListCheckProcessesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckProcessesOutcome()>>(
			[this, request]()
			{
			return this->listCheckProcesses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListClusterConfigsOutcome Dataworks_publicClient::listClusterConfigs(const ListClusterConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterConfigsOutcome(ListClusterConfigsResult(outcome.result()));
	else
		return ListClusterConfigsOutcome(outcome.error());
}

void Dataworks_publicClient::listClusterConfigsAsync(const ListClusterConfigsRequest& request, const ListClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListClusterConfigsOutcomeCallable Dataworks_publicClient::listClusterConfigsCallable(const ListClusterConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterConfigsOutcome()>>(
			[this, request]()
			{
			return this->listClusterConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListClustersOutcome Dataworks_publicClient::listClusters(const ListClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClustersOutcome(ListClustersResult(outcome.result()));
	else
		return ListClustersOutcome(outcome.error());
}

void Dataworks_publicClient::listClustersAsync(const ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListClustersOutcomeCallable Dataworks_publicClient::listClustersCallable(const ListClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClustersOutcome()>>(
			[this, request]()
			{
			return this->listClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListConnectionsOutcome Dataworks_publicClient::listConnections(const ListConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConnectionsOutcome(ListConnectionsResult(outcome.result()));
	else
		return ListConnectionsOutcome(outcome.error());
}

void Dataworks_publicClient::listConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListConnectionsOutcomeCallable Dataworks_publicClient::listConnectionsCallable(const ListConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDIAlarmRulesOutcome Dataworks_publicClient::listDIAlarmRules(const ListDIAlarmRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDIAlarmRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDIAlarmRulesOutcome(ListDIAlarmRulesResult(outcome.result()));
	else
		return ListDIAlarmRulesOutcome(outcome.error());
}

void Dataworks_publicClient::listDIAlarmRulesAsync(const ListDIAlarmRulesRequest& request, const ListDIAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDIAlarmRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDIAlarmRulesOutcomeCallable Dataworks_publicClient::listDIAlarmRulesCallable(const ListDIAlarmRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDIAlarmRulesOutcome()>>(
			[this, request]()
			{
			return this->listDIAlarmRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDIJobsOutcome Dataworks_publicClient::listDIJobs(const ListDIJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDIJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDIJobsOutcome(ListDIJobsResult(outcome.result()));
	else
		return ListDIJobsOutcome(outcome.error());
}

void Dataworks_publicClient::listDIJobsAsync(const ListDIJobsRequest& request, const ListDIJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDIJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDIJobsOutcomeCallable Dataworks_publicClient::listDIJobsCallable(const ListDIJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDIJobsOutcome()>>(
			[this, request]()
			{
			return this->listDIJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDIProjectConfigOutcome Dataworks_publicClient::listDIProjectConfig(const ListDIProjectConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDIProjectConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDIProjectConfigOutcome(ListDIProjectConfigResult(outcome.result()));
	else
		return ListDIProjectConfigOutcome(outcome.error());
}

void Dataworks_publicClient::listDIProjectConfigAsync(const ListDIProjectConfigRequest& request, const ListDIProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDIProjectConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDIProjectConfigOutcomeCallable Dataworks_publicClient::listDIProjectConfigCallable(const ListDIProjectConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDIProjectConfigOutcome()>>(
			[this, request]()
			{
			return this->listDIProjectConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDagsOutcome Dataworks_publicClient::listDags(const ListDagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDagsOutcome(ListDagsResult(outcome.result()));
	else
		return ListDagsOutcome(outcome.error());
}

void Dataworks_publicClient::listDagsAsync(const ListDagsRequest& request, const ListDagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDagsOutcomeCallable Dataworks_publicClient::listDagsCallable(const ListDagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDagsOutcome()>>(
			[this, request]()
			{
			return this->listDags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApiAuthoritiesOutcome Dataworks_publicClient::listDataServiceApiAuthorities(const ListDataServiceApiAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApiAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApiAuthoritiesOutcome(ListDataServiceApiAuthoritiesResult(outcome.result()));
	else
		return ListDataServiceApiAuthoritiesOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApiAuthoritiesAsync(const ListDataServiceApiAuthoritiesRequest& request, const ListDataServiceApiAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApiAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApiAuthoritiesOutcomeCallable Dataworks_publicClient::listDataServiceApiAuthoritiesCallable(const ListDataServiceApiAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApiAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApiAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApiTestOutcome Dataworks_publicClient::listDataServiceApiTest(const ListDataServiceApiTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApiTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApiTestOutcome(ListDataServiceApiTestResult(outcome.result()));
	else
		return ListDataServiceApiTestOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApiTestAsync(const ListDataServiceApiTestRequest& request, const ListDataServiceApiTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApiTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApiTestOutcomeCallable Dataworks_publicClient::listDataServiceApiTestCallable(const ListDataServiceApiTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApiTestOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApiTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApisOutcome Dataworks_publicClient::listDataServiceApis(const ListDataServiceApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApisOutcome(ListDataServiceApisResult(outcome.result()));
	else
		return ListDataServiceApisOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApisAsync(const ListDataServiceApisRequest& request, const ListDataServiceApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApisOutcomeCallable Dataworks_publicClient::listDataServiceApisCallable(const ListDataServiceApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApisOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApplicationsOutcome Dataworks_publicClient::listDataServiceApplications(const ListDataServiceApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApplicationsOutcome(ListDataServiceApplicationsResult(outcome.result()));
	else
		return ListDataServiceApplicationsOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApplicationsAsync(const ListDataServiceApplicationsRequest& request, const ListDataServiceApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApplicationsOutcomeCallable Dataworks_publicClient::listDataServiceApplicationsCallable(const ListDataServiceApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceAuthorizedApisOutcome Dataworks_publicClient::listDataServiceAuthorizedApis(const ListDataServiceAuthorizedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceAuthorizedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceAuthorizedApisOutcome(ListDataServiceAuthorizedApisResult(outcome.result()));
	else
		return ListDataServiceAuthorizedApisOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceAuthorizedApisAsync(const ListDataServiceAuthorizedApisRequest& request, const ListDataServiceAuthorizedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceAuthorizedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceAuthorizedApisOutcomeCallable Dataworks_publicClient::listDataServiceAuthorizedApisCallable(const ListDataServiceAuthorizedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceAuthorizedApisOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceAuthorizedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceFoldersOutcome Dataworks_publicClient::listDataServiceFolders(const ListDataServiceFoldersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceFoldersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceFoldersOutcome(ListDataServiceFoldersResult(outcome.result()));
	else
		return ListDataServiceFoldersOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceFoldersAsync(const ListDataServiceFoldersRequest& request, const ListDataServiceFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceFolders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceFoldersOutcomeCallable Dataworks_publicClient::listDataServiceFoldersCallable(const ListDataServiceFoldersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceFoldersOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceFolders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceGroupsOutcome Dataworks_publicClient::listDataServiceGroups(const ListDataServiceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceGroupsOutcome(ListDataServiceGroupsResult(outcome.result()));
	else
		return ListDataServiceGroupsOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceGroupsAsync(const ListDataServiceGroupsRequest& request, const ListDataServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceGroupsOutcomeCallable Dataworks_publicClient::listDataServiceGroupsCallable(const ListDataServiceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServicePublishedApisOutcome Dataworks_publicClient::listDataServicePublishedApis(const ListDataServicePublishedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServicePublishedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServicePublishedApisOutcome(ListDataServicePublishedApisResult(outcome.result()));
	else
		return ListDataServicePublishedApisOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServicePublishedApisAsync(const ListDataServicePublishedApisRequest& request, const ListDataServicePublishedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServicePublishedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServicePublishedApisOutcomeCallable Dataworks_publicClient::listDataServicePublishedApisCallable(const ListDataServicePublishedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServicePublishedApisOutcome()>>(
			[this, request]()
			{
			return this->listDataServicePublishedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataSourcesOutcome Dataworks_publicClient::listDataSources(const ListDataSourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataSourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataSourcesOutcome(ListDataSourcesResult(outcome.result()));
	else
		return ListDataSourcesOutcome(outcome.error());
}

void Dataworks_publicClient::listDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataSourcesOutcomeCallable Dataworks_publicClient::listDataSourcesCallable(const ListDataSourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourcesOutcome()>>(
			[this, request]()
			{
			return this->listDataSources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDeploymentsOutcome Dataworks_publicClient::listDeployments(const ListDeploymentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDeploymentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDeploymentsOutcome(ListDeploymentsResult(outcome.result()));
	else
		return ListDeploymentsOutcome(outcome.error());
}

void Dataworks_publicClient::listDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDeployments(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDeploymentsOutcomeCallable Dataworks_publicClient::listDeploymentsCallable(const ListDeploymentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDeploymentsOutcome()>>(
			[this, request]()
			{
			return this->listDeployments(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListEnabledExtensionsForProjectOutcome Dataworks_publicClient::listEnabledExtensionsForProject(const ListEnabledExtensionsForProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnabledExtensionsForProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnabledExtensionsForProjectOutcome(ListEnabledExtensionsForProjectResult(outcome.result()));
	else
		return ListEnabledExtensionsForProjectOutcome(outcome.error());
}

void Dataworks_publicClient::listEnabledExtensionsForProjectAsync(const ListEnabledExtensionsForProjectRequest& request, const ListEnabledExtensionsForProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnabledExtensionsForProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListEnabledExtensionsForProjectOutcomeCallable Dataworks_publicClient::listEnabledExtensionsForProjectCallable(const ListEnabledExtensionsForProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnabledExtensionsForProjectOutcome()>>(
			[this, request]()
			{
			return this->listEnabledExtensionsForProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListEntitiesByTagsOutcome Dataworks_publicClient::listEntitiesByTags(const ListEntitiesByTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEntitiesByTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEntitiesByTagsOutcome(ListEntitiesByTagsResult(outcome.result()));
	else
		return ListEntitiesByTagsOutcome(outcome.error());
}

void Dataworks_publicClient::listEntitiesByTagsAsync(const ListEntitiesByTagsRequest& request, const ListEntitiesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEntitiesByTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListEntitiesByTagsOutcomeCallable Dataworks_publicClient::listEntitiesByTagsCallable(const ListEntitiesByTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEntitiesByTagsOutcome()>>(
			[this, request]()
			{
			return this->listEntitiesByTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListEntityTagsOutcome Dataworks_publicClient::listEntityTags(const ListEntityTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEntityTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEntityTagsOutcome(ListEntityTagsResult(outcome.result()));
	else
		return ListEntityTagsOutcome(outcome.error());
}

void Dataworks_publicClient::listEntityTagsAsync(const ListEntityTagsRequest& request, const ListEntityTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEntityTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListEntityTagsOutcomeCallable Dataworks_publicClient::listEntityTagsCallable(const ListEntityTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEntityTagsOutcome()>>(
			[this, request]()
			{
			return this->listEntityTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListExtensionsOutcome Dataworks_publicClient::listExtensions(const ListExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListExtensionsOutcome(ListExtensionsResult(outcome.result()));
	else
		return ListExtensionsOutcome(outcome.error());
}

void Dataworks_publicClient::listExtensionsAsync(const ListExtensionsRequest& request, const ListExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListExtensionsOutcomeCallable Dataworks_publicClient::listExtensionsCallable(const ListExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListExtensionsOutcome()>>(
			[this, request]()
			{
			return this->listExtensions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFileTypeOutcome Dataworks_publicClient::listFileType(const ListFileTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFileTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFileTypeOutcome(ListFileTypeResult(outcome.result()));
	else
		return ListFileTypeOutcome(outcome.error());
}

void Dataworks_publicClient::listFileTypeAsync(const ListFileTypeRequest& request, const ListFileTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFileType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFileTypeOutcomeCallable Dataworks_publicClient::listFileTypeCallable(const ListFileTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFileTypeOutcome()>>(
			[this, request]()
			{
			return this->listFileType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFileVersionsOutcome Dataworks_publicClient::listFileVersions(const ListFileVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFileVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFileVersionsOutcome(ListFileVersionsResult(outcome.result()));
	else
		return ListFileVersionsOutcome(outcome.error());
}

void Dataworks_publicClient::listFileVersionsAsync(const ListFileVersionsRequest& request, const ListFileVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFileVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFileVersionsOutcomeCallable Dataworks_publicClient::listFileVersionsCallable(const ListFileVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFileVersionsOutcome()>>(
			[this, request]()
			{
			return this->listFileVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFilesOutcome Dataworks_publicClient::listFiles(const ListFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFilesOutcome(ListFilesResult(outcome.result()));
	else
		return ListFilesOutcome(outcome.error());
}

void Dataworks_publicClient::listFilesAsync(const ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFilesOutcomeCallable Dataworks_publicClient::listFilesCallable(const ListFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFilesOutcome()>>(
			[this, request]()
			{
			return this->listFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFoldersOutcome Dataworks_publicClient::listFolders(const ListFoldersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFoldersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFoldersOutcome(ListFoldersResult(outcome.result()));
	else
		return ListFoldersOutcome(outcome.error());
}

void Dataworks_publicClient::listFoldersAsync(const ListFoldersRequest& request, const ListFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFolders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFoldersOutcomeCallable Dataworks_publicClient::listFoldersCallable(const ListFoldersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFoldersOutcome()>>(
			[this, request]()
			{
			return this->listFolders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListInnerNodesOutcome Dataworks_publicClient::listInnerNodes(const ListInnerNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInnerNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInnerNodesOutcome(ListInnerNodesResult(outcome.result()));
	else
		return ListInnerNodesOutcome(outcome.error());
}

void Dataworks_publicClient::listInnerNodesAsync(const ListInnerNodesRequest& request, const ListInnerNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInnerNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListInnerNodesOutcomeCallable Dataworks_publicClient::listInnerNodesCallable(const ListInnerNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInnerNodesOutcome()>>(
			[this, request]()
			{
			return this->listInnerNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListInstanceAmountOutcome Dataworks_publicClient::listInstanceAmount(const ListInstanceAmountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceAmountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceAmountOutcome(ListInstanceAmountResult(outcome.result()));
	else
		return ListInstanceAmountOutcome(outcome.error());
}

void Dataworks_publicClient::listInstanceAmountAsync(const ListInstanceAmountRequest& request, const ListInstanceAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceAmount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListInstanceAmountOutcomeCallable Dataworks_publicClient::listInstanceAmountCallable(const ListInstanceAmountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceAmountOutcome()>>(
			[this, request]()
			{
			return this->listInstanceAmount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListInstanceHistoryOutcome Dataworks_publicClient::listInstanceHistory(const ListInstanceHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceHistoryOutcome(ListInstanceHistoryResult(outcome.result()));
	else
		return ListInstanceHistoryOutcome(outcome.error());
}

void Dataworks_publicClient::listInstanceHistoryAsync(const ListInstanceHistoryRequest& request, const ListInstanceHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListInstanceHistoryOutcomeCallable Dataworks_publicClient::listInstanceHistoryCallable(const ListInstanceHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceHistoryOutcome()>>(
			[this, request]()
			{
			return this->listInstanceHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListInstancesOutcome Dataworks_publicClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void Dataworks_publicClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListInstancesOutcomeCallable Dataworks_publicClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListLineageOutcome Dataworks_publicClient::listLineage(const ListLineageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLineageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLineageOutcome(ListLineageResult(outcome.result()));
	else
		return ListLineageOutcome(outcome.error());
}

void Dataworks_publicClient::listLineageAsync(const ListLineageRequest& request, const ListLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLineage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListLineageOutcomeCallable Dataworks_publicClient::listLineageCallable(const ListLineageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLineageOutcome()>>(
			[this, request]()
			{
			return this->listLineage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListManualDagInstancesOutcome Dataworks_publicClient::listManualDagInstances(const ListManualDagInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListManualDagInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListManualDagInstancesOutcome(ListManualDagInstancesResult(outcome.result()));
	else
		return ListManualDagInstancesOutcome(outcome.error());
}

void Dataworks_publicClient::listManualDagInstancesAsync(const ListManualDagInstancesRequest& request, const ListManualDagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listManualDagInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListManualDagInstancesOutcomeCallable Dataworks_publicClient::listManualDagInstancesCallable(const ListManualDagInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListManualDagInstancesOutcome()>>(
			[this, request]()
			{
			return this->listManualDagInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListMeasureDataOutcome Dataworks_publicClient::listMeasureData(const ListMeasureDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMeasureDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMeasureDataOutcome(ListMeasureDataResult(outcome.result()));
	else
		return ListMeasureDataOutcome(outcome.error());
}

void Dataworks_publicClient::listMeasureDataAsync(const ListMeasureDataRequest& request, const ListMeasureDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMeasureData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListMeasureDataOutcomeCallable Dataworks_publicClient::listMeasureDataCallable(const ListMeasureDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMeasureDataOutcome()>>(
			[this, request]()
			{
			return this->listMeasureData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListMetaCollectionEntitiesOutcome Dataworks_publicClient::listMetaCollectionEntities(const ListMetaCollectionEntitiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMetaCollectionEntitiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMetaCollectionEntitiesOutcome(ListMetaCollectionEntitiesResult(outcome.result()));
	else
		return ListMetaCollectionEntitiesOutcome(outcome.error());
}

void Dataworks_publicClient::listMetaCollectionEntitiesAsync(const ListMetaCollectionEntitiesRequest& request, const ListMetaCollectionEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMetaCollectionEntities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListMetaCollectionEntitiesOutcomeCallable Dataworks_publicClient::listMetaCollectionEntitiesCallable(const ListMetaCollectionEntitiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMetaCollectionEntitiesOutcome()>>(
			[this, request]()
			{
			return this->listMetaCollectionEntities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListMetaCollectionsOutcome Dataworks_publicClient::listMetaCollections(const ListMetaCollectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMetaCollectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMetaCollectionsOutcome(ListMetaCollectionsResult(outcome.result()));
	else
		return ListMetaCollectionsOutcome(outcome.error());
}

void Dataworks_publicClient::listMetaCollectionsAsync(const ListMetaCollectionsRequest& request, const ListMetaCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMetaCollections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListMetaCollectionsOutcomeCallable Dataworks_publicClient::listMetaCollectionsCallable(const ListMetaCollectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMetaCollectionsOutcome()>>(
			[this, request]()
			{
			return this->listMetaCollections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListMetaDBOutcome Dataworks_publicClient::listMetaDB(const ListMetaDBRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMetaDBOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMetaDBOutcome(ListMetaDBResult(outcome.result()));
	else
		return ListMetaDBOutcome(outcome.error());
}

void Dataworks_publicClient::listMetaDBAsync(const ListMetaDBRequest& request, const ListMetaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMetaDB(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListMetaDBOutcomeCallable Dataworks_publicClient::listMetaDBCallable(const ListMetaDBRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMetaDBOutcome()>>(
			[this, request]()
			{
			return this->listMetaDB(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListMigrationsOutcome Dataworks_publicClient::listMigrations(const ListMigrationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMigrationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMigrationsOutcome(ListMigrationsResult(outcome.result()));
	else
		return ListMigrationsOutcome(outcome.error());
}

void Dataworks_publicClient::listMigrationsAsync(const ListMigrationsRequest& request, const ListMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMigrations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListMigrationsOutcomeCallable Dataworks_publicClient::listMigrationsCallable(const ListMigrationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMigrationsOutcome()>>(
			[this, request]()
			{
			return this->listMigrations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodeIOOutcome Dataworks_publicClient::listNodeIO(const ListNodeIORequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeIOOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeIOOutcome(ListNodeIOResult(outcome.result()));
	else
		return ListNodeIOOutcome(outcome.error());
}

void Dataworks_publicClient::listNodeIOAsync(const ListNodeIORequest& request, const ListNodeIOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeIO(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodeIOOutcomeCallable Dataworks_publicClient::listNodeIOCallable(const ListNodeIORequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeIOOutcome()>>(
			[this, request]()
			{
			return this->listNodeIO(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodeInputOrOutputOutcome Dataworks_publicClient::listNodeInputOrOutput(const ListNodeInputOrOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeInputOrOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeInputOrOutputOutcome(ListNodeInputOrOutputResult(outcome.result()));
	else
		return ListNodeInputOrOutputOutcome(outcome.error());
}

void Dataworks_publicClient::listNodeInputOrOutputAsync(const ListNodeInputOrOutputRequest& request, const ListNodeInputOrOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeInputOrOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodeInputOrOutputOutcomeCallable Dataworks_publicClient::listNodeInputOrOutputCallable(const ListNodeInputOrOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeInputOrOutputOutcome()>>(
			[this, request]()
			{
			return this->listNodeInputOrOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodesOutcome Dataworks_publicClient::listNodes(const ListNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesOutcome(ListNodesResult(outcome.result()));
	else
		return ListNodesOutcome(outcome.error());
}

void Dataworks_publicClient::listNodesAsync(const ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodesOutcomeCallable Dataworks_publicClient::listNodesCallable(const ListNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesOutcome()>>(
			[this, request]()
			{
			return this->listNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodesByBaselineOutcome Dataworks_publicClient::listNodesByBaseline(const ListNodesByBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesByBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesByBaselineOutcome(ListNodesByBaselineResult(outcome.result()));
	else
		return ListNodesByBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::listNodesByBaselineAsync(const ListNodesByBaselineRequest& request, const ListNodesByBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesByBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodesByBaselineOutcomeCallable Dataworks_publicClient::listNodesByBaselineCallable(const ListNodesByBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesByBaselineOutcome()>>(
			[this, request]()
			{
			return this->listNodesByBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodesByOutputOutcome Dataworks_publicClient::listNodesByOutput(const ListNodesByOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesByOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesByOutputOutcome(ListNodesByOutputResult(outcome.result()));
	else
		return ListNodesByOutputOutcome(outcome.error());
}

void Dataworks_publicClient::listNodesByOutputAsync(const ListNodesByOutputRequest& request, const ListNodesByOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodesByOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodesByOutputOutcomeCallable Dataworks_publicClient::listNodesByOutputCallable(const ListNodesByOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesByOutputOutcome()>>(
			[this, request]()
			{
			return this->listNodesByOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListPermissionApplyOrdersOutcome Dataworks_publicClient::listPermissionApplyOrders(const ListPermissionApplyOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPermissionApplyOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPermissionApplyOrdersOutcome(ListPermissionApplyOrdersResult(outcome.result()));
	else
		return ListPermissionApplyOrdersOutcome(outcome.error());
}

void Dataworks_publicClient::listPermissionApplyOrdersAsync(const ListPermissionApplyOrdersRequest& request, const ListPermissionApplyOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPermissionApplyOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListPermissionApplyOrdersOutcomeCallable Dataworks_publicClient::listPermissionApplyOrdersCallable(const ListPermissionApplyOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPermissionApplyOrdersOutcome()>>(
			[this, request]()
			{
			return this->listPermissionApplyOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListProgramTypeCountOutcome Dataworks_publicClient::listProgramTypeCount(const ListProgramTypeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProgramTypeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProgramTypeCountOutcome(ListProgramTypeCountResult(outcome.result()));
	else
		return ListProgramTypeCountOutcome(outcome.error());
}

void Dataworks_publicClient::listProgramTypeCountAsync(const ListProgramTypeCountRequest& request, const ListProgramTypeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProgramTypeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListProgramTypeCountOutcomeCallable Dataworks_publicClient::listProgramTypeCountCallable(const ListProgramTypeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProgramTypeCountOutcome()>>(
			[this, request]()
			{
			return this->listProgramTypeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListProjectIdsOutcome Dataworks_publicClient::listProjectIds(const ListProjectIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectIdsOutcome(ListProjectIdsResult(outcome.result()));
	else
		return ListProjectIdsOutcome(outcome.error());
}

void Dataworks_publicClient::listProjectIdsAsync(const ListProjectIdsRequest& request, const ListProjectIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListProjectIdsOutcomeCallable Dataworks_publicClient::listProjectIdsCallable(const ListProjectIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectIdsOutcome()>>(
			[this, request]()
			{
			return this->listProjectIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListProjectMembersOutcome Dataworks_publicClient::listProjectMembers(const ListProjectMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectMembersOutcome(ListProjectMembersResult(outcome.result()));
	else
		return ListProjectMembersOutcome(outcome.error());
}

void Dataworks_publicClient::listProjectMembersAsync(const ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListProjectMembersOutcomeCallable Dataworks_publicClient::listProjectMembersCallable(const ListProjectMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectMembersOutcome()>>(
			[this, request]()
			{
			return this->listProjectMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListProjectRolesOutcome Dataworks_publicClient::listProjectRoles(const ListProjectRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectRolesOutcome(ListProjectRolesResult(outcome.result()));
	else
		return ListProjectRolesOutcome(outcome.error());
}

void Dataworks_publicClient::listProjectRolesAsync(const ListProjectRolesRequest& request, const ListProjectRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjectRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListProjectRolesOutcomeCallable Dataworks_publicClient::listProjectRolesCallable(const ListProjectRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectRolesOutcome()>>(
			[this, request]()
			{
			return this->listProjectRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListProjectsOutcome Dataworks_publicClient::listProjects(const ListProjectsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProjectsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProjectsOutcome(ListProjectsResult(outcome.result()));
	else
		return ListProjectsOutcome(outcome.error());
}

void Dataworks_publicClient::listProjectsAsync(const ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProjects(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListProjectsOutcomeCallable Dataworks_publicClient::listProjectsCallable(const ListProjectsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProjectsOutcome()>>(
			[this, request]()
			{
			return this->listProjects(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListQualityResultsByEntityOutcome Dataworks_publicClient::listQualityResultsByEntity(const ListQualityResultsByEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQualityResultsByEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQualityResultsByEntityOutcome(ListQualityResultsByEntityResult(outcome.result()));
	else
		return ListQualityResultsByEntityOutcome(outcome.error());
}

void Dataworks_publicClient::listQualityResultsByEntityAsync(const ListQualityResultsByEntityRequest& request, const ListQualityResultsByEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQualityResultsByEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListQualityResultsByEntityOutcomeCallable Dataworks_publicClient::listQualityResultsByEntityCallable(const ListQualityResultsByEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQualityResultsByEntityOutcome()>>(
			[this, request]()
			{
			return this->listQualityResultsByEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListQualityResultsByRuleOutcome Dataworks_publicClient::listQualityResultsByRule(const ListQualityResultsByRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQualityResultsByRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQualityResultsByRuleOutcome(ListQualityResultsByRuleResult(outcome.result()));
	else
		return ListQualityResultsByRuleOutcome(outcome.error());
}

void Dataworks_publicClient::listQualityResultsByRuleAsync(const ListQualityResultsByRuleRequest& request, const ListQualityResultsByRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQualityResultsByRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListQualityResultsByRuleOutcomeCallable Dataworks_publicClient::listQualityResultsByRuleCallable(const ListQualityResultsByRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQualityResultsByRuleOutcome()>>(
			[this, request]()
			{
			return this->listQualityResultsByRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListQualityRulesOutcome Dataworks_publicClient::listQualityRules(const ListQualityRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQualityRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQualityRulesOutcome(ListQualityRulesResult(outcome.result()));
	else
		return ListQualityRulesOutcome(outcome.error());
}

void Dataworks_publicClient::listQualityRulesAsync(const ListQualityRulesRequest& request, const ListQualityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQualityRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListQualityRulesOutcomeCallable Dataworks_publicClient::listQualityRulesCallable(const ListQualityRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQualityRulesOutcome()>>(
			[this, request]()
			{
			return this->listQualityRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListRefDISyncTasksOutcome Dataworks_publicClient::listRefDISyncTasks(const ListRefDISyncTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRefDISyncTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRefDISyncTasksOutcome(ListRefDISyncTasksResult(outcome.result()));
	else
		return ListRefDISyncTasksOutcome(outcome.error());
}

void Dataworks_publicClient::listRefDISyncTasksAsync(const ListRefDISyncTasksRequest& request, const ListRefDISyncTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRefDISyncTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListRefDISyncTasksOutcomeCallable Dataworks_publicClient::listRefDISyncTasksCallable(const ListRefDISyncTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRefDISyncTasksOutcome()>>(
			[this, request]()
			{
			return this->listRefDISyncTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListRemindsOutcome Dataworks_publicClient::listReminds(const ListRemindsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRemindsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRemindsOutcome(ListRemindsResult(outcome.result()));
	else
		return ListRemindsOutcome(outcome.error());
}

void Dataworks_publicClient::listRemindsAsync(const ListRemindsRequest& request, const ListRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listReminds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListRemindsOutcomeCallable Dataworks_publicClient::listRemindsCallable(const ListRemindsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRemindsOutcome()>>(
			[this, request]()
			{
			return this->listReminds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListResourceGroupsOutcome Dataworks_publicClient::listResourceGroups(const ListResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceGroupsOutcome(ListResourceGroupsResult(outcome.result()));
	else
		return ListResourceGroupsOutcome(outcome.error());
}

void Dataworks_publicClient::listResourceGroupsAsync(const ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListResourceGroupsOutcomeCallable Dataworks_publicClient::listResourceGroupsCallable(const ListResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListShiftPersonnelsOutcome Dataworks_publicClient::listShiftPersonnels(const ListShiftPersonnelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListShiftPersonnelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListShiftPersonnelsOutcome(ListShiftPersonnelsResult(outcome.result()));
	else
		return ListShiftPersonnelsOutcome(outcome.error());
}

void Dataworks_publicClient::listShiftPersonnelsAsync(const ListShiftPersonnelsRequest& request, const ListShiftPersonnelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listShiftPersonnels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListShiftPersonnelsOutcomeCallable Dataworks_publicClient::listShiftPersonnelsCallable(const ListShiftPersonnelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListShiftPersonnelsOutcome()>>(
			[this, request]()
			{
			return this->listShiftPersonnels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListShiftSchedulesOutcome Dataworks_publicClient::listShiftSchedules(const ListShiftSchedulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListShiftSchedulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListShiftSchedulesOutcome(ListShiftSchedulesResult(outcome.result()));
	else
		return ListShiftSchedulesOutcome(outcome.error());
}

void Dataworks_publicClient::listShiftSchedulesAsync(const ListShiftSchedulesRequest& request, const ListShiftSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listShiftSchedules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListShiftSchedulesOutcomeCallable Dataworks_publicClient::listShiftSchedulesCallable(const ListShiftSchedulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListShiftSchedulesOutcome()>>(
			[this, request]()
			{
			return this->listShiftSchedules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListSuccessInstanceAmountOutcome Dataworks_publicClient::listSuccessInstanceAmount(const ListSuccessInstanceAmountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSuccessInstanceAmountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSuccessInstanceAmountOutcome(ListSuccessInstanceAmountResult(outcome.result()));
	else
		return ListSuccessInstanceAmountOutcome(outcome.error());
}

void Dataworks_publicClient::listSuccessInstanceAmountAsync(const ListSuccessInstanceAmountRequest& request, const ListSuccessInstanceAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSuccessInstanceAmount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListSuccessInstanceAmountOutcomeCallable Dataworks_publicClient::listSuccessInstanceAmountCallable(const ListSuccessInstanceAmountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSuccessInstanceAmountOutcome()>>(
			[this, request]()
			{
			return this->listSuccessInstanceAmount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListTableLevelOutcome Dataworks_publicClient::listTableLevel(const ListTableLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTableLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTableLevelOutcome(ListTableLevelResult(outcome.result()));
	else
		return ListTableLevelOutcome(outcome.error());
}

void Dataworks_publicClient::listTableLevelAsync(const ListTableLevelRequest& request, const ListTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTableLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListTableLevelOutcomeCallable Dataworks_publicClient::listTableLevelCallable(const ListTableLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTableLevelOutcome()>>(
			[this, request]()
			{
			return this->listTableLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListTableThemeOutcome Dataworks_publicClient::listTableTheme(const ListTableThemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTableThemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTableThemeOutcome(ListTableThemeResult(outcome.result()));
	else
		return ListTableThemeOutcome(outcome.error());
}

void Dataworks_publicClient::listTableThemeAsync(const ListTableThemeRequest& request, const ListTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTableTheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListTableThemeOutcomeCallable Dataworks_publicClient::listTableThemeCallable(const ListTableThemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTableThemeOutcome()>>(
			[this, request]()
			{
			return this->listTableTheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListTablesOutcome Dataworks_publicClient::listTables(const ListTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTablesOutcome(ListTablesResult(outcome.result()));
	else
		return ListTablesOutcome(outcome.error());
}

void Dataworks_publicClient::listTablesAsync(const ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListTablesOutcomeCallable Dataworks_publicClient::listTablesCallable(const ListTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTablesOutcome()>>(
			[this, request]()
			{
			return this->listTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListTopicsOutcome Dataworks_publicClient::listTopics(const ListTopicsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTopicsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTopicsOutcome(ListTopicsResult(outcome.result()));
	else
		return ListTopicsOutcome(outcome.error());
}

void Dataworks_publicClient::listTopicsAsync(const ListTopicsRequest& request, const ListTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTopics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListTopicsOutcomeCallable Dataworks_publicClient::listTopicsCallable(const ListTopicsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTopicsOutcome()>>(
			[this, request]()
			{
			return this->listTopics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::OfflineNodeOutcome Dataworks_publicClient::offlineNode(const OfflineNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OfflineNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OfflineNodeOutcome(OfflineNodeResult(outcome.result()));
	else
		return OfflineNodeOutcome(outcome.error());
}

void Dataworks_publicClient::offlineNodeAsync(const OfflineNodeRequest& request, const OfflineNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, offlineNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::OfflineNodeOutcomeCallable Dataworks_publicClient::offlineNodeCallable(const OfflineNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OfflineNodeOutcome()>>(
			[this, request]()
			{
			return this->offlineNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::PublishDataServiceApiOutcome Dataworks_publicClient::publishDataServiceApi(const PublishDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishDataServiceApiOutcome(PublishDataServiceApiResult(outcome.result()));
	else
		return PublishDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::publishDataServiceApiAsync(const PublishDataServiceApiRequest& request, const PublishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::PublishDataServiceApiOutcomeCallable Dataworks_publicClient::publishDataServiceApiCallable(const PublishDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->publishDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryDISyncTaskConfigProcessResultOutcome Dataworks_publicClient::queryDISyncTaskConfigProcessResult(const QueryDISyncTaskConfigProcessResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDISyncTaskConfigProcessResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDISyncTaskConfigProcessResultOutcome(QueryDISyncTaskConfigProcessResultResult(outcome.result()));
	else
		return QueryDISyncTaskConfigProcessResultOutcome(outcome.error());
}

void Dataworks_publicClient::queryDISyncTaskConfigProcessResultAsync(const QueryDISyncTaskConfigProcessResultRequest& request, const QueryDISyncTaskConfigProcessResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDISyncTaskConfigProcessResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryDISyncTaskConfigProcessResultOutcomeCallable Dataworks_publicClient::queryDISyncTaskConfigProcessResultCallable(const QueryDISyncTaskConfigProcessResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDISyncTaskConfigProcessResultOutcome()>>(
			[this, request]()
			{
			return this->queryDISyncTaskConfigProcessResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryDefaultTemplateOutcome Dataworks_publicClient::queryDefaultTemplate(const QueryDefaultTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDefaultTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDefaultTemplateOutcome(QueryDefaultTemplateResult(outcome.result()));
	else
		return QueryDefaultTemplateOutcome(outcome.error());
}

void Dataworks_publicClient::queryDefaultTemplateAsync(const QueryDefaultTemplateRequest& request, const QueryDefaultTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDefaultTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryDefaultTemplateOutcomeCallable Dataworks_publicClient::queryDefaultTemplateCallable(const QueryDefaultTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDefaultTemplateOutcome()>>(
			[this, request]()
			{
			return this->queryDefaultTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryPublicModelEngineOutcome Dataworks_publicClient::queryPublicModelEngine(const QueryPublicModelEngineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPublicModelEngineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPublicModelEngineOutcome(QueryPublicModelEngineResult(outcome.result()));
	else
		return QueryPublicModelEngineOutcome(outcome.error());
}

void Dataworks_publicClient::queryPublicModelEngineAsync(const QueryPublicModelEngineRequest& request, const QueryPublicModelEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPublicModelEngine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryPublicModelEngineOutcomeCallable Dataworks_publicClient::queryPublicModelEngineCallable(const QueryPublicModelEngineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPublicModelEngineOutcome()>>(
			[this, request]()
			{
			return this->queryPublicModelEngine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryRecognizeDataByRuleTypeOutcome Dataworks_publicClient::queryRecognizeDataByRuleType(const QueryRecognizeDataByRuleTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecognizeDataByRuleTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecognizeDataByRuleTypeOutcome(QueryRecognizeDataByRuleTypeResult(outcome.result()));
	else
		return QueryRecognizeDataByRuleTypeOutcome(outcome.error());
}

void Dataworks_publicClient::queryRecognizeDataByRuleTypeAsync(const QueryRecognizeDataByRuleTypeRequest& request, const QueryRecognizeDataByRuleTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecognizeDataByRuleType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryRecognizeDataByRuleTypeOutcomeCallable Dataworks_publicClient::queryRecognizeDataByRuleTypeCallable(const QueryRecognizeDataByRuleTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecognizeDataByRuleTypeOutcome()>>(
			[this, request]()
			{
			return this->queryRecognizeDataByRuleType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryRecognizeRuleDetailOutcome Dataworks_publicClient::queryRecognizeRuleDetail(const QueryRecognizeRuleDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecognizeRuleDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecognizeRuleDetailOutcome(QueryRecognizeRuleDetailResult(outcome.result()));
	else
		return QueryRecognizeRuleDetailOutcome(outcome.error());
}

void Dataworks_publicClient::queryRecognizeRuleDetailAsync(const QueryRecognizeRuleDetailRequest& request, const QueryRecognizeRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecognizeRuleDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryRecognizeRuleDetailOutcomeCallable Dataworks_publicClient::queryRecognizeRuleDetailCallable(const QueryRecognizeRuleDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecognizeRuleDetailOutcome()>>(
			[this, request]()
			{
			return this->queryRecognizeRuleDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QueryRecognizeRulesTypeOutcome Dataworks_publicClient::queryRecognizeRulesType(const QueryRecognizeRulesTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecognizeRulesTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecognizeRulesTypeOutcome(QueryRecognizeRulesTypeResult(outcome.result()));
	else
		return QueryRecognizeRulesTypeOutcome(outcome.error());
}

void Dataworks_publicClient::queryRecognizeRulesTypeAsync(const QueryRecognizeRulesTypeRequest& request, const QueryRecognizeRulesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecognizeRulesType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QueryRecognizeRulesTypeOutcomeCallable Dataworks_publicClient::queryRecognizeRulesTypeCallable(const QueryRecognizeRulesTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecognizeRulesTypeOutcome()>>(
			[this, request]()
			{
			return this->queryRecognizeRulesType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QuerySensClassificationOutcome Dataworks_publicClient::querySensClassification(const QuerySensClassificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySensClassificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySensClassificationOutcome(QuerySensClassificationResult(outcome.result()));
	else
		return QuerySensClassificationOutcome(outcome.error());
}

void Dataworks_publicClient::querySensClassificationAsync(const QuerySensClassificationRequest& request, const QuerySensClassificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySensClassification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QuerySensClassificationOutcomeCallable Dataworks_publicClient::querySensClassificationCallable(const QuerySensClassificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySensClassificationOutcome()>>(
			[this, request]()
			{
			return this->querySensClassification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QuerySensLevelOutcome Dataworks_publicClient::querySensLevel(const QuerySensLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySensLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySensLevelOutcome(QuerySensLevelResult(outcome.result()));
	else
		return QuerySensLevelOutcome(outcome.error());
}

void Dataworks_publicClient::querySensLevelAsync(const QuerySensLevelRequest& request, const QuerySensLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySensLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QuerySensLevelOutcomeCallable Dataworks_publicClient::querySensLevelCallable(const QuerySensLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySensLevelOutcome()>>(
			[this, request]()
			{
			return this->querySensLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::QuerySensNodeInfoOutcome Dataworks_publicClient::querySensNodeInfo(const QuerySensNodeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySensNodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySensNodeInfoOutcome(QuerySensNodeInfoResult(outcome.result()));
	else
		return QuerySensNodeInfoOutcome(outcome.error());
}

void Dataworks_publicClient::querySensNodeInfoAsync(const QuerySensNodeInfoRequest& request, const QuerySensNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySensNodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::QuerySensNodeInfoOutcomeCallable Dataworks_publicClient::querySensNodeInfoCallable(const QuerySensNodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySensNodeInfoOutcome()>>(
			[this, request]()
			{
			return this->querySensNodeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RegisterLineageRelationOutcome Dataworks_publicClient::registerLineageRelation(const RegisterLineageRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterLineageRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterLineageRelationOutcome(RegisterLineageRelationResult(outcome.result()));
	else
		return RegisterLineageRelationOutcome(outcome.error());
}

void Dataworks_publicClient::registerLineageRelationAsync(const RegisterLineageRelationRequest& request, const RegisterLineageRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerLineageRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RegisterLineageRelationOutcomeCallable Dataworks_publicClient::registerLineageRelationCallable(const RegisterLineageRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterLineageRelationOutcome()>>(
			[this, request]()
			{
			return this->registerLineageRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RemoveEntityTagsOutcome Dataworks_publicClient::removeEntityTags(const RemoveEntityTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEntityTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEntityTagsOutcome(RemoveEntityTagsResult(outcome.result()));
	else
		return RemoveEntityTagsOutcome(outcome.error());
}

void Dataworks_publicClient::removeEntityTagsAsync(const RemoveEntityTagsRequest& request, const RemoveEntityTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEntityTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RemoveEntityTagsOutcomeCallable Dataworks_publicClient::removeEntityTagsCallable(const RemoveEntityTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEntityTagsOutcome()>>(
			[this, request]()
			{
			return this->removeEntityTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RemoveProjectMemberFromRoleOutcome Dataworks_publicClient::removeProjectMemberFromRole(const RemoveProjectMemberFromRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveProjectMemberFromRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveProjectMemberFromRoleOutcome(RemoveProjectMemberFromRoleResult(outcome.result()));
	else
		return RemoveProjectMemberFromRoleOutcome(outcome.error());
}

void Dataworks_publicClient::removeProjectMemberFromRoleAsync(const RemoveProjectMemberFromRoleRequest& request, const RemoveProjectMemberFromRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeProjectMemberFromRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RemoveProjectMemberFromRoleOutcomeCallable Dataworks_publicClient::removeProjectMemberFromRoleCallable(const RemoveProjectMemberFromRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveProjectMemberFromRoleOutcome()>>(
			[this, request]()
			{
			return this->removeProjectMemberFromRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RestartInstanceOutcome Dataworks_publicClient::restartInstance(const RestartInstanceRequest &request) const
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

void Dataworks_publicClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RestartInstanceOutcomeCallable Dataworks_publicClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ResumeInstanceOutcome Dataworks_publicClient::resumeInstance(const ResumeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeInstanceOutcome(ResumeInstanceResult(outcome.result()));
	else
		return ResumeInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::resumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ResumeInstanceOutcomeCallable Dataworks_publicClient::resumeInstanceCallable(const ResumeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeInstanceOutcome()>>(
			[this, request]()
			{
			return this->resumeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RevokeTablePermissionOutcome Dataworks_publicClient::revokeTablePermission(const RevokeTablePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokeTablePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokeTablePermissionOutcome(RevokeTablePermissionResult(outcome.result()));
	else
		return RevokeTablePermissionOutcome(outcome.error());
}

void Dataworks_publicClient::revokeTablePermissionAsync(const RevokeTablePermissionRequest& request, const RevokeTablePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokeTablePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RevokeTablePermissionOutcomeCallable Dataworks_publicClient::revokeTablePermissionCallable(const RevokeTablePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokeTablePermissionOutcome()>>(
			[this, request]()
			{
			return this->revokeTablePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RunCycleDagNodesOutcome Dataworks_publicClient::runCycleDagNodes(const RunCycleDagNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunCycleDagNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunCycleDagNodesOutcome(RunCycleDagNodesResult(outcome.result()));
	else
		return RunCycleDagNodesOutcome(outcome.error());
}

void Dataworks_publicClient::runCycleDagNodesAsync(const RunCycleDagNodesRequest& request, const RunCycleDagNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runCycleDagNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RunCycleDagNodesOutcomeCallable Dataworks_publicClient::runCycleDagNodesCallable(const RunCycleDagNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunCycleDagNodesOutcome()>>(
			[this, request]()
			{
			return this->runCycleDagNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RunManualDagNodesOutcome Dataworks_publicClient::runManualDagNodes(const RunManualDagNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunManualDagNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunManualDagNodesOutcome(RunManualDagNodesResult(outcome.result()));
	else
		return RunManualDagNodesOutcome(outcome.error());
}

void Dataworks_publicClient::runManualDagNodesAsync(const RunManualDagNodesRequest& request, const RunManualDagNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runManualDagNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RunManualDagNodesOutcomeCallable Dataworks_publicClient::runManualDagNodesCallable(const RunManualDagNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunManualDagNodesOutcome()>>(
			[this, request]()
			{
			return this->runManualDagNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RunSmokeTestOutcome Dataworks_publicClient::runSmokeTest(const RunSmokeTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunSmokeTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunSmokeTestOutcome(RunSmokeTestResult(outcome.result()));
	else
		return RunSmokeTestOutcome(outcome.error());
}

void Dataworks_publicClient::runSmokeTestAsync(const RunSmokeTestRequest& request, const RunSmokeTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runSmokeTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RunSmokeTestOutcomeCallable Dataworks_publicClient::runSmokeTestCallable(const RunSmokeTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunSmokeTestOutcome()>>(
			[this, request]()
			{
			return this->runSmokeTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RunTriggerNodeOutcome Dataworks_publicClient::runTriggerNode(const RunTriggerNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunTriggerNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunTriggerNodeOutcome(RunTriggerNodeResult(outcome.result()));
	else
		return RunTriggerNodeOutcome(outcome.error());
}

void Dataworks_publicClient::runTriggerNodeAsync(const RunTriggerNodeRequest& request, const RunTriggerNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runTriggerNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RunTriggerNodeOutcomeCallable Dataworks_publicClient::runTriggerNodeCallable(const RunTriggerNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunTriggerNodeOutcome()>>(
			[this, request]()
			{
			return this->runTriggerNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SaveDataServiceApiTestResultOutcome Dataworks_publicClient::saveDataServiceApiTestResult(const SaveDataServiceApiTestResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveDataServiceApiTestResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveDataServiceApiTestResultOutcome(SaveDataServiceApiTestResultResult(outcome.result()));
	else
		return SaveDataServiceApiTestResultOutcome(outcome.error());
}

void Dataworks_publicClient::saveDataServiceApiTestResultAsync(const SaveDataServiceApiTestResultRequest& request, const SaveDataServiceApiTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveDataServiceApiTestResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SaveDataServiceApiTestResultOutcomeCallable Dataworks_publicClient::saveDataServiceApiTestResultCallable(const SaveDataServiceApiTestResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveDataServiceApiTestResultOutcome()>>(
			[this, request]()
			{
			return this->saveDataServiceApiTestResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ScanSensitiveDataOutcome Dataworks_publicClient::scanSensitiveData(const ScanSensitiveDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScanSensitiveDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScanSensitiveDataOutcome(ScanSensitiveDataResult(outcome.result()));
	else
		return ScanSensitiveDataOutcome(outcome.error());
}

void Dataworks_publicClient::scanSensitiveDataAsync(const ScanSensitiveDataRequest& request, const ScanSensitiveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scanSensitiveData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ScanSensitiveDataOutcomeCallable Dataworks_publicClient::scanSensitiveDataCallable(const ScanSensitiveDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScanSensitiveDataOutcome()>>(
			[this, request]()
			{
			return this->scanSensitiveData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SearchMetaTablesOutcome Dataworks_publicClient::searchMetaTables(const SearchMetaTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMetaTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMetaTablesOutcome(SearchMetaTablesResult(outcome.result()));
	else
		return SearchMetaTablesOutcome(outcome.error());
}

void Dataworks_publicClient::searchMetaTablesAsync(const SearchMetaTablesRequest& request, const SearchMetaTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMetaTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SearchMetaTablesOutcomeCallable Dataworks_publicClient::searchMetaTablesCallable(const SearchMetaTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMetaTablesOutcome()>>(
			[this, request]()
			{
			return this->searchMetaTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SearchNodesByOutputOutcome Dataworks_publicClient::searchNodesByOutput(const SearchNodesByOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchNodesByOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchNodesByOutputOutcome(SearchNodesByOutputResult(outcome.result()));
	else
		return SearchNodesByOutputOutcome(outcome.error());
}

void Dataworks_publicClient::searchNodesByOutputAsync(const SearchNodesByOutputRequest& request, const SearchNodesByOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchNodesByOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SearchNodesByOutputOutcomeCallable Dataworks_publicClient::searchNodesByOutputCallable(const SearchNodesByOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchNodesByOutputOutcome()>>(
			[this, request]()
			{
			return this->searchNodesByOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SetDataSourceShareOutcome Dataworks_publicClient::setDataSourceShare(const SetDataSourceShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataSourceShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataSourceShareOutcome(SetDataSourceShareResult(outcome.result()));
	else
		return SetDataSourceShareOutcome(outcome.error());
}

void Dataworks_publicClient::setDataSourceShareAsync(const SetDataSourceShareRequest& request, const SetDataSourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDataSourceShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SetDataSourceShareOutcomeCallable Dataworks_publicClient::setDataSourceShareCallable(const SetDataSourceShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataSourceShareOutcome()>>(
			[this, request]()
			{
			return this->setDataSourceShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SetEntityTagsOutcome Dataworks_publicClient::setEntityTags(const SetEntityTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetEntityTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetEntityTagsOutcome(SetEntityTagsResult(outcome.result()));
	else
		return SetEntityTagsOutcome(outcome.error());
}

void Dataworks_publicClient::setEntityTagsAsync(const SetEntityTagsRequest& request, const SetEntityTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setEntityTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SetEntityTagsOutcomeCallable Dataworks_publicClient::setEntityTagsCallable(const SetEntityTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetEntityTagsOutcome()>>(
			[this, request]()
			{
			return this->setEntityTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SetSuccessInstanceOutcome Dataworks_publicClient::setSuccessInstance(const SetSuccessInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSuccessInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSuccessInstanceOutcome(SetSuccessInstanceResult(outcome.result()));
	else
		return SetSuccessInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::setSuccessInstanceAsync(const SetSuccessInstanceRequest& request, const SetSuccessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSuccessInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SetSuccessInstanceOutcomeCallable Dataworks_publicClient::setSuccessInstanceCallable(const SetSuccessInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSuccessInstanceOutcome()>>(
			[this, request]()
			{
			return this->setSuccessInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StartDIJobOutcome Dataworks_publicClient::startDIJob(const StartDIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDIJobOutcome(StartDIJobResult(outcome.result()));
	else
		return StartDIJobOutcome(outcome.error());
}

void Dataworks_publicClient::startDIJobAsync(const StartDIJobRequest& request, const StartDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StartDIJobOutcomeCallable Dataworks_publicClient::startDIJobCallable(const StartDIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDIJobOutcome()>>(
			[this, request]()
			{
			return this->startDIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StartDISyncInstanceOutcome Dataworks_publicClient::startDISyncInstance(const StartDISyncInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDISyncInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDISyncInstanceOutcome(StartDISyncInstanceResult(outcome.result()));
	else
		return StartDISyncInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::startDISyncInstanceAsync(const StartDISyncInstanceRequest& request, const StartDISyncInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDISyncInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StartDISyncInstanceOutcomeCallable Dataworks_publicClient::startDISyncInstanceCallable(const StartDISyncInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDISyncInstanceOutcome()>>(
			[this, request]()
			{
			return this->startDISyncInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StartMigrationOutcome Dataworks_publicClient::startMigration(const StartMigrationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartMigrationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartMigrationOutcome(StartMigrationResult(outcome.result()));
	else
		return StartMigrationOutcome(outcome.error());
}

void Dataworks_publicClient::startMigrationAsync(const StartMigrationRequest& request, const StartMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startMigration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StartMigrationOutcomeCallable Dataworks_publicClient::startMigrationCallable(const StartMigrationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartMigrationOutcome()>>(
			[this, request]()
			{
			return this->startMigration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StopDIJobOutcome Dataworks_publicClient::stopDIJob(const StopDIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDIJobOutcome(StopDIJobResult(outcome.result()));
	else
		return StopDIJobOutcome(outcome.error());
}

void Dataworks_publicClient::stopDIJobAsync(const StopDIJobRequest& request, const StopDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StopDIJobOutcomeCallable Dataworks_publicClient::stopDIJobCallable(const StopDIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDIJobOutcome()>>(
			[this, request]()
			{
			return this->stopDIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StopDISyncInstanceOutcome Dataworks_publicClient::stopDISyncInstance(const StopDISyncInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDISyncInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDISyncInstanceOutcome(StopDISyncInstanceResult(outcome.result()));
	else
		return StopDISyncInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::stopDISyncInstanceAsync(const StopDISyncInstanceRequest& request, const StopDISyncInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDISyncInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StopDISyncInstanceOutcomeCallable Dataworks_publicClient::stopDISyncInstanceCallable(const StopDISyncInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDISyncInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopDISyncInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StopInstanceOutcome Dataworks_publicClient::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StopInstanceOutcomeCallable Dataworks_publicClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SubmitDataServiceApiOutcome Dataworks_publicClient::submitDataServiceApi(const SubmitDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDataServiceApiOutcome(SubmitDataServiceApiResult(outcome.result()));
	else
		return SubmitDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::submitDataServiceApiAsync(const SubmitDataServiceApiRequest& request, const SubmitDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SubmitDataServiceApiOutcomeCallable Dataworks_publicClient::submitDataServiceApiCallable(const SubmitDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->submitDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SubmitFileOutcome Dataworks_publicClient::submitFile(const SubmitFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFileOutcome(SubmitFileResult(outcome.result()));
	else
		return SubmitFileOutcome(outcome.error());
}

void Dataworks_publicClient::submitFileAsync(const SubmitFileRequest& request, const SubmitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SubmitFileOutcomeCallable Dataworks_publicClient::submitFileCallable(const SubmitFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFileOutcome()>>(
			[this, request]()
			{
			return this->submitFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SuspendInstanceOutcome Dataworks_publicClient::suspendInstance(const SuspendInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendInstanceOutcome(SuspendInstanceResult(outcome.result()));
	else
		return SuspendInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::suspendInstanceAsync(const SuspendInstanceRequest& request, const SuspendInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SuspendInstanceOutcomeCallable Dataworks_publicClient::suspendInstanceCallable(const SuspendInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendInstanceOutcome()>>(
			[this, request]()
			{
			return this->suspendInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TerminateDISyncInstanceOutcome Dataworks_publicClient::terminateDISyncInstance(const TerminateDISyncInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateDISyncInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateDISyncInstanceOutcome(TerminateDISyncInstanceResult(outcome.result()));
	else
		return TerminateDISyncInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::terminateDISyncInstanceAsync(const TerminateDISyncInstanceRequest& request, const TerminateDISyncInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateDISyncInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TerminateDISyncInstanceOutcomeCallable Dataworks_publicClient::terminateDISyncInstanceCallable(const TerminateDISyncInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateDISyncInstanceOutcome()>>(
			[this, request]()
			{
			return this->terminateDISyncInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TestDataServiceApiOutcome Dataworks_publicClient::testDataServiceApi(const TestDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestDataServiceApiOutcome(TestDataServiceApiResult(outcome.result()));
	else
		return TestDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::testDataServiceApiAsync(const TestDataServiceApiRequest& request, const TestDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TestDataServiceApiOutcomeCallable Dataworks_publicClient::testDataServiceApiCallable(const TestDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->testDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TestNetworkConnectionOutcome Dataworks_publicClient::testNetworkConnection(const TestNetworkConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestNetworkConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestNetworkConnectionOutcome(TestNetworkConnectionResult(outcome.result()));
	else
		return TestNetworkConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::testNetworkConnectionAsync(const TestNetworkConnectionRequest& request, const TestNetworkConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testNetworkConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TestNetworkConnectionOutcomeCallable Dataworks_publicClient::testNetworkConnectionCallable(const TestNetworkConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestNetworkConnectionOutcome()>>(
			[this, request]()
			{
			return this->testNetworkConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TopTenElapsedTimeInstanceOutcome Dataworks_publicClient::topTenElapsedTimeInstance(const TopTenElapsedTimeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TopTenElapsedTimeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TopTenElapsedTimeInstanceOutcome(TopTenElapsedTimeInstanceResult(outcome.result()));
	else
		return TopTenElapsedTimeInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::topTenElapsedTimeInstanceAsync(const TopTenElapsedTimeInstanceRequest& request, const TopTenElapsedTimeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, topTenElapsedTimeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TopTenElapsedTimeInstanceOutcomeCallable Dataworks_publicClient::topTenElapsedTimeInstanceCallable(const TopTenElapsedTimeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TopTenElapsedTimeInstanceOutcome()>>(
			[this, request]()
			{
			return this->topTenElapsedTimeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::TopTenErrorTimesInstanceOutcome Dataworks_publicClient::topTenErrorTimesInstance(const TopTenErrorTimesInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TopTenErrorTimesInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TopTenErrorTimesInstanceOutcome(TopTenErrorTimesInstanceResult(outcome.result()));
	else
		return TopTenErrorTimesInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::topTenErrorTimesInstanceAsync(const TopTenErrorTimesInstanceRequest& request, const TopTenErrorTimesInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, topTenErrorTimesInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::TopTenErrorTimesInstanceOutcomeCallable Dataworks_publicClient::topTenErrorTimesInstanceCallable(const TopTenErrorTimesInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TopTenErrorTimesInstanceOutcome()>>(
			[this, request]()
			{
			return this->topTenErrorTimesInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateBaselineOutcome Dataworks_publicClient::updateBaseline(const UpdateBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBaselineOutcome(UpdateBaselineResult(outcome.result()));
	else
		return UpdateBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::updateBaselineAsync(const UpdateBaselineRequest& request, const UpdateBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateBaselineOutcomeCallable Dataworks_publicClient::updateBaselineCallable(const UpdateBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBaselineOutcome()>>(
			[this, request]()
			{
			return this->updateBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateBusinessOutcome Dataworks_publicClient::updateBusiness(const UpdateBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBusinessOutcome(UpdateBusinessResult(outcome.result()));
	else
		return UpdateBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::updateBusinessAsync(const UpdateBusinessRequest& request, const UpdateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateBusinessOutcomeCallable Dataworks_publicClient::updateBusinessCallable(const UpdateBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBusinessOutcome()>>(
			[this, request]()
			{
			return this->updateBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateClusterConfigsOutcome Dataworks_publicClient::updateClusterConfigs(const UpdateClusterConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateClusterConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateClusterConfigsOutcome(UpdateClusterConfigsResult(outcome.result()));
	else
		return UpdateClusterConfigsOutcome(outcome.error());
}

void Dataworks_publicClient::updateClusterConfigsAsync(const UpdateClusterConfigsRequest& request, const UpdateClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateClusterConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateClusterConfigsOutcomeCallable Dataworks_publicClient::updateClusterConfigsCallable(const UpdateClusterConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateClusterConfigsOutcome()>>(
			[this, request]()
			{
			return this->updateClusterConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateConnectionOutcome Dataworks_publicClient::updateConnection(const UpdateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConnectionOutcome(UpdateConnectionResult(outcome.result()));
	else
		return UpdateConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::updateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateConnectionOutcomeCallable Dataworks_publicClient::updateConnectionCallable(const UpdateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConnectionOutcome()>>(
			[this, request]()
			{
			return this->updateConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDIAlarmRuleOutcome Dataworks_publicClient::updateDIAlarmRule(const UpdateDIAlarmRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDIAlarmRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDIAlarmRuleOutcome(UpdateDIAlarmRuleResult(outcome.result()));
	else
		return UpdateDIAlarmRuleOutcome(outcome.error());
}

void Dataworks_publicClient::updateDIAlarmRuleAsync(const UpdateDIAlarmRuleRequest& request, const UpdateDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDIAlarmRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDIAlarmRuleOutcomeCallable Dataworks_publicClient::updateDIAlarmRuleCallable(const UpdateDIAlarmRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDIAlarmRuleOutcome()>>(
			[this, request]()
			{
			return this->updateDIAlarmRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDIJobOutcome Dataworks_publicClient::updateDIJob(const UpdateDIJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDIJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDIJobOutcome(UpdateDIJobResult(outcome.result()));
	else
		return UpdateDIJobOutcome(outcome.error());
}

void Dataworks_publicClient::updateDIJobAsync(const UpdateDIJobRequest& request, const UpdateDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDIJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDIJobOutcomeCallable Dataworks_publicClient::updateDIJobCallable(const UpdateDIJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDIJobOutcome()>>(
			[this, request]()
			{
			return this->updateDIJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDIProjectConfigOutcome Dataworks_publicClient::updateDIProjectConfig(const UpdateDIProjectConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDIProjectConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDIProjectConfigOutcome(UpdateDIProjectConfigResult(outcome.result()));
	else
		return UpdateDIProjectConfigOutcome(outcome.error());
}

void Dataworks_publicClient::updateDIProjectConfigAsync(const UpdateDIProjectConfigRequest& request, const UpdateDIProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDIProjectConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDIProjectConfigOutcomeCallable Dataworks_publicClient::updateDIProjectConfigCallable(const UpdateDIProjectConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDIProjectConfigOutcome()>>(
			[this, request]()
			{
			return this->updateDIProjectConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDISyncTaskOutcome Dataworks_publicClient::updateDISyncTask(const UpdateDISyncTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDISyncTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDISyncTaskOutcome(UpdateDISyncTaskResult(outcome.result()));
	else
		return UpdateDISyncTaskOutcome(outcome.error());
}

void Dataworks_publicClient::updateDISyncTaskAsync(const UpdateDISyncTaskRequest& request, const UpdateDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDISyncTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDISyncTaskOutcomeCallable Dataworks_publicClient::updateDISyncTaskCallable(const UpdateDISyncTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDISyncTaskOutcome()>>(
			[this, request]()
			{
			return this->updateDISyncTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDataServiceApiOutcome Dataworks_publicClient::updateDataServiceApi(const UpdateDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataServiceApiOutcome(UpdateDataServiceApiResult(outcome.result()));
	else
		return UpdateDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::updateDataServiceApiAsync(const UpdateDataServiceApiRequest& request, const UpdateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDataServiceApiOutcomeCallable Dataworks_publicClient::updateDataServiceApiCallable(const UpdateDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->updateDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDataSourceOutcome Dataworks_publicClient::updateDataSource(const UpdateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataSourceOutcome(UpdateDataSourceResult(outcome.result()));
	else
		return UpdateDataSourceOutcome(outcome.error());
}

void Dataworks_publicClient::updateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDataSourceOutcomeCallable Dataworks_publicClient::updateDataSourceCallable(const UpdateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->updateDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateFileOutcome Dataworks_publicClient::updateFile(const UpdateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFileOutcome(UpdateFileResult(outcome.result()));
	else
		return UpdateFileOutcome(outcome.error());
}

void Dataworks_publicClient::updateFileAsync(const UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateFileOutcomeCallable Dataworks_publicClient::updateFileCallable(const UpdateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFileOutcome()>>(
			[this, request]()
			{
			return this->updateFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateFolderOutcome Dataworks_publicClient::updateFolder(const UpdateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFolderOutcome(UpdateFolderResult(outcome.result()));
	else
		return UpdateFolderOutcome(outcome.error());
}

void Dataworks_publicClient::updateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateFolderOutcomeCallable Dataworks_publicClient::updateFolderCallable(const UpdateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFolderOutcome()>>(
			[this, request]()
			{
			return this->updateFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateIDEEventResultOutcome Dataworks_publicClient::updateIDEEventResult(const UpdateIDEEventResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateIDEEventResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateIDEEventResultOutcome(UpdateIDEEventResultResult(outcome.result()));
	else
		return UpdateIDEEventResultOutcome(outcome.error());
}

void Dataworks_publicClient::updateIDEEventResultAsync(const UpdateIDEEventResultRequest& request, const UpdateIDEEventResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateIDEEventResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateIDEEventResultOutcomeCallable Dataworks_publicClient::updateIDEEventResultCallable(const UpdateIDEEventResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateIDEEventResultOutcome()>>(
			[this, request]()
			{
			return this->updateIDEEventResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateMetaCategoryOutcome Dataworks_publicClient::updateMetaCategory(const UpdateMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMetaCategoryOutcome(UpdateMetaCategoryResult(outcome.result()));
	else
		return UpdateMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::updateMetaCategoryAsync(const UpdateMetaCategoryRequest& request, const UpdateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateMetaCategoryOutcomeCallable Dataworks_publicClient::updateMetaCategoryCallable(const UpdateMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->updateMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateMetaCollectionOutcome Dataworks_publicClient::updateMetaCollection(const UpdateMetaCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMetaCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMetaCollectionOutcome(UpdateMetaCollectionResult(outcome.result()));
	else
		return UpdateMetaCollectionOutcome(outcome.error());
}

void Dataworks_publicClient::updateMetaCollectionAsync(const UpdateMetaCollectionRequest& request, const UpdateMetaCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMetaCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateMetaCollectionOutcomeCallable Dataworks_publicClient::updateMetaCollectionCallable(const UpdateMetaCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMetaCollectionOutcome()>>(
			[this, request]()
			{
			return this->updateMetaCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateMetaTableOutcome Dataworks_publicClient::updateMetaTable(const UpdateMetaTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMetaTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMetaTableOutcome(UpdateMetaTableResult(outcome.result()));
	else
		return UpdateMetaTableOutcome(outcome.error());
}

void Dataworks_publicClient::updateMetaTableAsync(const UpdateMetaTableRequest& request, const UpdateMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMetaTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateMetaTableOutcomeCallable Dataworks_publicClient::updateMetaTableCallable(const UpdateMetaTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMetaTableOutcome()>>(
			[this, request]()
			{
			return this->updateMetaTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateMetaTableIntroWikiOutcome Dataworks_publicClient::updateMetaTableIntroWiki(const UpdateMetaTableIntroWikiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMetaTableIntroWikiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMetaTableIntroWikiOutcome(UpdateMetaTableIntroWikiResult(outcome.result()));
	else
		return UpdateMetaTableIntroWikiOutcome(outcome.error());
}

void Dataworks_publicClient::updateMetaTableIntroWikiAsync(const UpdateMetaTableIntroWikiRequest& request, const UpdateMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMetaTableIntroWiki(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateMetaTableIntroWikiOutcomeCallable Dataworks_publicClient::updateMetaTableIntroWikiCallable(const UpdateMetaTableIntroWikiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMetaTableIntroWikiOutcome()>>(
			[this, request]()
			{
			return this->updateMetaTableIntroWiki(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateNodeOwnerOutcome Dataworks_publicClient::updateNodeOwner(const UpdateNodeOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNodeOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNodeOwnerOutcome(UpdateNodeOwnerResult(outcome.result()));
	else
		return UpdateNodeOwnerOutcome(outcome.error());
}

void Dataworks_publicClient::updateNodeOwnerAsync(const UpdateNodeOwnerRequest& request, const UpdateNodeOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNodeOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateNodeOwnerOutcomeCallable Dataworks_publicClient::updateNodeOwnerCallable(const UpdateNodeOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNodeOwnerOutcome()>>(
			[this, request]()
			{
			return this->updateNodeOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateNodeRunModeOutcome Dataworks_publicClient::updateNodeRunMode(const UpdateNodeRunModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNodeRunModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNodeRunModeOutcome(UpdateNodeRunModeResult(outcome.result()));
	else
		return UpdateNodeRunModeOutcome(outcome.error());
}

void Dataworks_publicClient::updateNodeRunModeAsync(const UpdateNodeRunModeRequest& request, const UpdateNodeRunModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNodeRunMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateNodeRunModeOutcomeCallable Dataworks_publicClient::updateNodeRunModeCallable(const UpdateNodeRunModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNodeRunModeOutcome()>>(
			[this, request]()
			{
			return this->updateNodeRunMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateQualityFollowerOutcome Dataworks_publicClient::updateQualityFollower(const UpdateQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQualityFollowerOutcome(UpdateQualityFollowerResult(outcome.result()));
	else
		return UpdateQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::updateQualityFollowerAsync(const UpdateQualityFollowerRequest& request, const UpdateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateQualityFollowerOutcomeCallable Dataworks_publicClient::updateQualityFollowerCallable(const UpdateQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->updateQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateQualityRuleOutcome Dataworks_publicClient::updateQualityRule(const UpdateQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQualityRuleOutcome(UpdateQualityRuleResult(outcome.result()));
	else
		return UpdateQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::updateQualityRuleAsync(const UpdateQualityRuleRequest& request, const UpdateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateQualityRuleOutcomeCallable Dataworks_publicClient::updateQualityRuleCallable(const UpdateQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->updateQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateRemindOutcome Dataworks_publicClient::updateRemind(const UpdateRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRemindOutcome(UpdateRemindResult(outcome.result()));
	else
		return UpdateRemindOutcome(outcome.error());
}

void Dataworks_publicClient::updateRemindAsync(const UpdateRemindRequest& request, const UpdateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateRemindOutcomeCallable Dataworks_publicClient::updateRemindCallable(const UpdateRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRemindOutcome()>>(
			[this, request]()
			{
			return this->updateRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateTableOutcome Dataworks_publicClient::updateTable(const UpdateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableOutcome(UpdateTableResult(outcome.result()));
	else
		return UpdateTableOutcome(outcome.error());
}

void Dataworks_publicClient::updateTableAsync(const UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateTableOutcomeCallable Dataworks_publicClient::updateTableCallable(const UpdateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableOutcome()>>(
			[this, request]()
			{
			return this->updateTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateTableAddColumnOutcome Dataworks_publicClient::updateTableAddColumn(const UpdateTableAddColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableAddColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableAddColumnOutcome(UpdateTableAddColumnResult(outcome.result()));
	else
		return UpdateTableAddColumnOutcome(outcome.error());
}

void Dataworks_publicClient::updateTableAddColumnAsync(const UpdateTableAddColumnRequest& request, const UpdateTableAddColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTableAddColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateTableAddColumnOutcomeCallable Dataworks_publicClient::updateTableAddColumnCallable(const UpdateTableAddColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableAddColumnOutcome()>>(
			[this, request]()
			{
			return this->updateTableAddColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateTableLevelOutcome Dataworks_publicClient::updateTableLevel(const UpdateTableLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableLevelOutcome(UpdateTableLevelResult(outcome.result()));
	else
		return UpdateTableLevelOutcome(outcome.error());
}

void Dataworks_publicClient::updateTableLevelAsync(const UpdateTableLevelRequest& request, const UpdateTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTableLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateTableLevelOutcomeCallable Dataworks_publicClient::updateTableLevelCallable(const UpdateTableLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableLevelOutcome()>>(
			[this, request]()
			{
			return this->updateTableLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateTableModelInfoOutcome Dataworks_publicClient::updateTableModelInfo(const UpdateTableModelInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableModelInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableModelInfoOutcome(UpdateTableModelInfoResult(outcome.result()));
	else
		return UpdateTableModelInfoOutcome(outcome.error());
}

void Dataworks_publicClient::updateTableModelInfoAsync(const UpdateTableModelInfoRequest& request, const UpdateTableModelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTableModelInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateTableModelInfoOutcomeCallable Dataworks_publicClient::updateTableModelInfoCallable(const UpdateTableModelInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableModelInfoOutcome()>>(
			[this, request]()
			{
			return this->updateTableModelInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateTableThemeOutcome Dataworks_publicClient::updateTableTheme(const UpdateTableThemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTableThemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTableThemeOutcome(UpdateTableThemeResult(outcome.result()));
	else
		return UpdateTableThemeOutcome(outcome.error());
}

void Dataworks_publicClient::updateTableThemeAsync(const UpdateTableThemeRequest& request, const UpdateTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTableTheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateTableThemeOutcomeCallable Dataworks_publicClient::updateTableThemeCallable(const UpdateTableThemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTableThemeOutcome()>>(
			[this, request]()
			{
			return this->updateTableTheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateUdfFileOutcome Dataworks_publicClient::updateUdfFile(const UpdateUdfFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUdfFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUdfFileOutcome(UpdateUdfFileResult(outcome.result()));
	else
		return UpdateUdfFileOutcome(outcome.error());
}

void Dataworks_publicClient::updateUdfFileAsync(const UpdateUdfFileRequest& request, const UpdateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUdfFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateUdfFileOutcomeCallable Dataworks_publicClient::updateUdfFileCallable(const UpdateUdfFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUdfFileOutcome()>>(
			[this, request]()
			{
			return this->updateUdfFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateWorkbenchEventResultOutcome Dataworks_publicClient::updateWorkbenchEventResult(const UpdateWorkbenchEventResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkbenchEventResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkbenchEventResultOutcome(UpdateWorkbenchEventResultResult(outcome.result()));
	else
		return UpdateWorkbenchEventResultOutcome(outcome.error());
}

void Dataworks_publicClient::updateWorkbenchEventResultAsync(const UpdateWorkbenchEventResultRequest& request, const UpdateWorkbenchEventResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkbenchEventResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateWorkbenchEventResultOutcomeCallable Dataworks_publicClient::updateWorkbenchEventResultCallable(const UpdateWorkbenchEventResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkbenchEventResultOutcome()>>(
			[this, request]()
			{
			return this->updateWorkbenchEventResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

