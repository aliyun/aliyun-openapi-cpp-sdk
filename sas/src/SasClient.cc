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

#include <alibabacloud/sas/SasClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

namespace
{
	const std::string SERVICE_NAME = "Sas";
}

SasClient::SasClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SasClient::SasClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SasClient::SasClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SasClient::~SasClient()
{}

SasClient::AddAssetSelectionCriteriaOutcome SasClient::addAssetSelectionCriteria(const AddAssetSelectionCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAssetSelectionCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAssetSelectionCriteriaOutcome(AddAssetSelectionCriteriaResult(outcome.result()));
	else
		return AddAssetSelectionCriteriaOutcome(outcome.error());
}

void SasClient::addAssetSelectionCriteriaAsync(const AddAssetSelectionCriteriaRequest& request, const AddAssetSelectionCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAssetSelectionCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddAssetSelectionCriteriaOutcomeCallable SasClient::addAssetSelectionCriteriaCallable(const AddAssetSelectionCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAssetSelectionCriteriaOutcome()>>(
			[this, request]()
			{
			return this->addAssetSelectionCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddCheckInstanceResultWhiteListOutcome SasClient::addCheckInstanceResultWhiteList(const AddCheckInstanceResultWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCheckInstanceResultWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCheckInstanceResultWhiteListOutcome(AddCheckInstanceResultWhiteListResult(outcome.result()));
	else
		return AddCheckInstanceResultWhiteListOutcome(outcome.error());
}

void SasClient::addCheckInstanceResultWhiteListAsync(const AddCheckInstanceResultWhiteListRequest& request, const AddCheckInstanceResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCheckInstanceResultWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddCheckInstanceResultWhiteListOutcomeCallable SasClient::addCheckInstanceResultWhiteListCallable(const AddCheckInstanceResultWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCheckInstanceResultWhiteListOutcome()>>(
			[this, request]()
			{
			return this->addCheckInstanceResultWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddCheckResultWhiteListOutcome SasClient::addCheckResultWhiteList(const AddCheckResultWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCheckResultWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCheckResultWhiteListOutcome(AddCheckResultWhiteListResult(outcome.result()));
	else
		return AddCheckResultWhiteListOutcome(outcome.error());
}

void SasClient::addCheckResultWhiteListAsync(const AddCheckResultWhiteListRequest& request, const AddCheckResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCheckResultWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddCheckResultWhiteListOutcomeCallable SasClient::addCheckResultWhiteListCallable(const AddCheckResultWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCheckResultWhiteListOutcome()>>(
			[this, request]()
			{
			return this->addCheckResultWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddClientUserDefineRuleOutcome SasClient::addClientUserDefineRule(const AddClientUserDefineRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddClientUserDefineRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddClientUserDefineRuleOutcome(AddClientUserDefineRuleResult(outcome.result()));
	else
		return AddClientUserDefineRuleOutcome(outcome.error());
}

void SasClient::addClientUserDefineRuleAsync(const AddClientUserDefineRuleRequest& request, const AddClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addClientUserDefineRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddClientUserDefineRuleOutcomeCallable SasClient::addClientUserDefineRuleCallable(const AddClientUserDefineRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddClientUserDefineRuleOutcome()>>(
			[this, request]()
			{
			return this->addClientUserDefineRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddImageVulWhiteListOutcome SasClient::addImageVulWhiteList(const AddImageVulWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddImageVulWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddImageVulWhiteListOutcome(AddImageVulWhiteListResult(outcome.result()));
	else
		return AddImageVulWhiteListOutcome(outcome.error());
}

void SasClient::addImageVulWhiteListAsync(const AddImageVulWhiteListRequest& request, const AddImageVulWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addImageVulWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddImageVulWhiteListOutcomeCallable SasClient::addImageVulWhiteListCallable(const AddImageVulWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddImageVulWhiteListOutcome()>>(
			[this, request]()
			{
			return this->addImageVulWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddInstallCodeOutcome SasClient::addInstallCode(const AddInstallCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddInstallCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddInstallCodeOutcome(AddInstallCodeResult(outcome.result()));
	else
		return AddInstallCodeOutcome(outcome.error());
}

void SasClient::addInstallCodeAsync(const AddInstallCodeRequest& request, const AddInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addInstallCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddInstallCodeOutcomeCallable SasClient::addInstallCodeCallable(const AddInstallCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddInstallCodeOutcome()>>(
			[this, request]()
			{
			return this->addInstallCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddPrivateRegistryOutcome SasClient::addPrivateRegistry(const AddPrivateRegistryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPrivateRegistryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPrivateRegistryOutcome(AddPrivateRegistryResult(outcome.result()));
	else
		return AddPrivateRegistryOutcome(outcome.error());
}

void SasClient::addPrivateRegistryAsync(const AddPrivateRegistryRequest& request, const AddPrivateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPrivateRegistry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddPrivateRegistryOutcomeCallable SasClient::addPrivateRegistryCallable(const AddPrivateRegistryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPrivateRegistryOutcome()>>(
			[this, request]()
			{
			return this->addPrivateRegistry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddTagWithUuidOutcome SasClient::addTagWithUuid(const AddTagWithUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTagWithUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTagWithUuidOutcome(AddTagWithUuidResult(outcome.result()));
	else
		return AddTagWithUuidOutcome(outcome.error());
}

void SasClient::addTagWithUuidAsync(const AddTagWithUuidRequest& request, const AddTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTagWithUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddTagWithUuidOutcomeCallable SasClient::addTagWithUuidCallable(const AddTagWithUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTagWithUuidOutcome()>>(
			[this, request]()
			{
			return this->addTagWithUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddUninstallClientsByUuidsOutcome SasClient::addUninstallClientsByUuids(const AddUninstallClientsByUuidsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUninstallClientsByUuidsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUninstallClientsByUuidsOutcome(AddUninstallClientsByUuidsResult(outcome.result()));
	else
		return AddUninstallClientsByUuidsOutcome(outcome.error());
}

void SasClient::addUninstallClientsByUuidsAsync(const AddUninstallClientsByUuidsRequest& request, const AddUninstallClientsByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUninstallClientsByUuids(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddUninstallClientsByUuidsOutcomeCallable SasClient::addUninstallClientsByUuidsCallable(const AddUninstallClientsByUuidsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUninstallClientsByUuidsOutcome()>>(
			[this, request]()
			{
			return this->addUninstallClientsByUuids(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AddVpcHoneyPotOutcome SasClient::addVpcHoneyPot(const AddVpcHoneyPotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddVpcHoneyPotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddVpcHoneyPotOutcome(AddVpcHoneyPotResult(outcome.result()));
	else
		return AddVpcHoneyPotOutcome(outcome.error());
}

void SasClient::addVpcHoneyPotAsync(const AddVpcHoneyPotRequest& request, const AddVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addVpcHoneyPot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AddVpcHoneyPotOutcomeCallable SasClient::addVpcHoneyPotCallable(const AddVpcHoneyPotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddVpcHoneyPotOutcome()>>(
			[this, request]()
			{
			return this->addVpcHoneyPot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::AdvanceSecurityEventOperationsOutcome SasClient::advanceSecurityEventOperations(const AdvanceSecurityEventOperationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AdvanceSecurityEventOperationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AdvanceSecurityEventOperationsOutcome(AdvanceSecurityEventOperationsResult(outcome.result()));
	else
		return AdvanceSecurityEventOperationsOutcome(outcome.error());
}

void SasClient::advanceSecurityEventOperationsAsync(const AdvanceSecurityEventOperationsRequest& request, const AdvanceSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, advanceSecurityEventOperations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::AdvanceSecurityEventOperationsOutcomeCallable SasClient::advanceSecurityEventOperationsCallable(const AdvanceSecurityEventOperationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AdvanceSecurityEventOperationsOutcome()>>(
			[this, request]()
			{
			return this->advanceSecurityEventOperations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::BatchOperateCommonOverallConfigOutcome SasClient::batchOperateCommonOverallConfig(const BatchOperateCommonOverallConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchOperateCommonOverallConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchOperateCommonOverallConfigOutcome(BatchOperateCommonOverallConfigResult(outcome.result()));
	else
		return BatchOperateCommonOverallConfigOutcome(outcome.error());
}

void SasClient::batchOperateCommonOverallConfigAsync(const BatchOperateCommonOverallConfigRequest& request, const BatchOperateCommonOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchOperateCommonOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::BatchOperateCommonOverallConfigOutcomeCallable SasClient::batchOperateCommonOverallConfigCallable(const BatchOperateCommonOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchOperateCommonOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->batchOperateCommonOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::BindAuthToMachineOutcome SasClient::bindAuthToMachine(const BindAuthToMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAuthToMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAuthToMachineOutcome(BindAuthToMachineResult(outcome.result()));
	else
		return BindAuthToMachineOutcome(outcome.error());
}

void SasClient::bindAuthToMachineAsync(const BindAuthToMachineRequest& request, const BindAuthToMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAuthToMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::BindAuthToMachineOutcomeCallable SasClient::bindAuthToMachineCallable(const BindAuthToMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAuthToMachineOutcome()>>(
			[this, request]()
			{
			return this->bindAuthToMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CancelOnceTaskOutcome SasClient::cancelOnceTask(const CancelOnceTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOnceTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOnceTaskOutcome(CancelOnceTaskResult(outcome.result()));
	else
		return CancelOnceTaskOutcome(outcome.error());
}

void SasClient::cancelOnceTaskAsync(const CancelOnceTaskRequest& request, const CancelOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOnceTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CancelOnceTaskOutcomeCallable SasClient::cancelOnceTaskCallable(const CancelOnceTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOnceTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelOnceTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ChangeAssetRefreshTaskConfigOutcome SasClient::changeAssetRefreshTaskConfig(const ChangeAssetRefreshTaskConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeAssetRefreshTaskConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeAssetRefreshTaskConfigOutcome(ChangeAssetRefreshTaskConfigResult(outcome.result()));
	else
		return ChangeAssetRefreshTaskConfigOutcome(outcome.error());
}

void SasClient::changeAssetRefreshTaskConfigAsync(const ChangeAssetRefreshTaskConfigRequest& request, const ChangeAssetRefreshTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeAssetRefreshTaskConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ChangeAssetRefreshTaskConfigOutcomeCallable SasClient::changeAssetRefreshTaskConfigCallable(const ChangeAssetRefreshTaskConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeAssetRefreshTaskConfigOutcome()>>(
			[this, request]()
			{
			return this->changeAssetRefreshTaskConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ChangeCheckConfigOutcome SasClient::changeCheckConfig(const ChangeCheckConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeCheckConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeCheckConfigOutcome(ChangeCheckConfigResult(outcome.result()));
	else
		return ChangeCheckConfigOutcome(outcome.error());
}

void SasClient::changeCheckConfigAsync(const ChangeCheckConfigRequest& request, const ChangeCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeCheckConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ChangeCheckConfigOutcomeCallable SasClient::changeCheckConfigCallable(const ChangeCheckConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeCheckConfigOutcome()>>(
			[this, request]()
			{
			return this->changeCheckConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ChangeCheckCustomConfigOutcome SasClient::changeCheckCustomConfig(const ChangeCheckCustomConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeCheckCustomConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeCheckCustomConfigOutcome(ChangeCheckCustomConfigResult(outcome.result()));
	else
		return ChangeCheckCustomConfigOutcome(outcome.error());
}

void SasClient::changeCheckCustomConfigAsync(const ChangeCheckCustomConfigRequest& request, const ChangeCheckCustomConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeCheckCustomConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ChangeCheckCustomConfigOutcomeCallable SasClient::changeCheckCustomConfigCallable(const ChangeCheckCustomConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeCheckCustomConfigOutcome()>>(
			[this, request]()
			{
			return this->changeCheckCustomConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CheckQuaraFileIdOutcome SasClient::checkQuaraFileId(const CheckQuaraFileIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckQuaraFileIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckQuaraFileIdOutcome(CheckQuaraFileIdResult(outcome.result()));
	else
		return CheckQuaraFileIdOutcome(outcome.error());
}

void SasClient::checkQuaraFileIdAsync(const CheckQuaraFileIdRequest& request, const CheckQuaraFileIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkQuaraFileId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CheckQuaraFileIdOutcomeCallable SasClient::checkQuaraFileIdCallable(const CheckQuaraFileIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckQuaraFileIdOutcome()>>(
			[this, request]()
			{
			return this->checkQuaraFileId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CheckSecurityEventIdOutcome SasClient::checkSecurityEventId(const CheckSecurityEventIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSecurityEventIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSecurityEventIdOutcome(CheckSecurityEventIdResult(outcome.result()));
	else
		return CheckSecurityEventIdOutcome(outcome.error());
}

void SasClient::checkSecurityEventIdAsync(const CheckSecurityEventIdRequest& request, const CheckSecurityEventIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSecurityEventId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CheckSecurityEventIdOutcomeCallable SasClient::checkSecurityEventIdCallable(const CheckSecurityEventIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSecurityEventIdOutcome()>>(
			[this, request]()
			{
			return this->checkSecurityEventId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CheckUserHasEcsOutcome SasClient::checkUserHasEcs(const CheckUserHasEcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckUserHasEcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckUserHasEcsOutcome(CheckUserHasEcsResult(outcome.result()));
	else
		return CheckUserHasEcsOutcome(outcome.error());
}

void SasClient::checkUserHasEcsAsync(const CheckUserHasEcsRequest& request, const CheckUserHasEcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkUserHasEcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CheckUserHasEcsOutcomeCallable SasClient::checkUserHasEcsCallable(const CheckUserHasEcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckUserHasEcsOutcome()>>(
			[this, request]()
			{
			return this->checkUserHasEcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ConfirmVirusEventsOutcome SasClient::confirmVirusEvents(const ConfirmVirusEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmVirusEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmVirusEventsOutcome(ConfirmVirusEventsResult(outcome.result()));
	else
		return ConfirmVirusEventsOutcome(outcome.error());
}

void SasClient::confirmVirusEventsAsync(const ConfirmVirusEventsRequest& request, const ConfirmVirusEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmVirusEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ConfirmVirusEventsOutcomeCallable SasClient::confirmVirusEventsCallable(const ConfirmVirusEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmVirusEventsOutcome()>>(
			[this, request]()
			{
			return this->confirmVirusEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateAgentlessScanTaskOutcome SasClient::createAgentlessScanTask(const CreateAgentlessScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAgentlessScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAgentlessScanTaskOutcome(CreateAgentlessScanTaskResult(outcome.result()));
	else
		return CreateAgentlessScanTaskOutcome(outcome.error());
}

void SasClient::createAgentlessScanTaskAsync(const CreateAgentlessScanTaskRequest& request, const CreateAgentlessScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAgentlessScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateAgentlessScanTaskOutcomeCallable SasClient::createAgentlessScanTaskCallable(const CreateAgentlessScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAgentlessScanTaskOutcome()>>(
			[this, request]()
			{
			return this->createAgentlessScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateAntiBruteForceRuleOutcome SasClient::createAntiBruteForceRule(const CreateAntiBruteForceRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAntiBruteForceRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAntiBruteForceRuleOutcome(CreateAntiBruteForceRuleResult(outcome.result()));
	else
		return CreateAntiBruteForceRuleOutcome(outcome.error());
}

void SasClient::createAntiBruteForceRuleAsync(const CreateAntiBruteForceRuleRequest& request, const CreateAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAntiBruteForceRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateAntiBruteForceRuleOutcomeCallable SasClient::createAntiBruteForceRuleCallable(const CreateAntiBruteForceRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAntiBruteForceRuleOutcome()>>(
			[this, request]()
			{
			return this->createAntiBruteForceRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateAssetSelectionConfigOutcome SasClient::createAssetSelectionConfig(const CreateAssetSelectionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAssetSelectionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAssetSelectionConfigOutcome(CreateAssetSelectionConfigResult(outcome.result()));
	else
		return CreateAssetSelectionConfigOutcome(outcome.error());
}

void SasClient::createAssetSelectionConfigAsync(const CreateAssetSelectionConfigRequest& request, const CreateAssetSelectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAssetSelectionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateAssetSelectionConfigOutcomeCallable SasClient::createAssetSelectionConfigCallable(const CreateAssetSelectionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAssetSelectionConfigOutcome()>>(
			[this, request]()
			{
			return this->createAssetSelectionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateBackupPolicyOutcome SasClient::createBackupPolicy(const CreateBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBackupPolicyOutcome(CreateBackupPolicyResult(outcome.result()));
	else
		return CreateBackupPolicyOutcome(outcome.error());
}

void SasClient::createBackupPolicyAsync(const CreateBackupPolicyRequest& request, const CreateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateBackupPolicyOutcomeCallable SasClient::createBackupPolicyCallable(const CreateBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->createBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateContainerScanTaskOutcome SasClient::createContainerScanTask(const CreateContainerScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateContainerScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateContainerScanTaskOutcome(CreateContainerScanTaskResult(outcome.result()));
	else
		return CreateContainerScanTaskOutcome(outcome.error());
}

void SasClient::createContainerScanTaskAsync(const CreateContainerScanTaskRequest& request, const CreateContainerScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createContainerScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateContainerScanTaskOutcomeCallable SasClient::createContainerScanTaskCallable(const CreateContainerScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateContainerScanTaskOutcome()>>(
			[this, request]()
			{
			return this->createContainerScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateCustomBlockRecordOutcome SasClient::createCustomBlockRecord(const CreateCustomBlockRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomBlockRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomBlockRecordOutcome(CreateCustomBlockRecordResult(outcome.result()));
	else
		return CreateCustomBlockRecordOutcome(outcome.error());
}

void SasClient::createCustomBlockRecordAsync(const CreateCustomBlockRecordRequest& request, const CreateCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomBlockRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateCustomBlockRecordOutcomeCallable SasClient::createCustomBlockRecordCallable(const CreateCustomBlockRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomBlockRecordOutcome()>>(
			[this, request]()
			{
			return this->createCustomBlockRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateCycleTaskOutcome SasClient::createCycleTask(const CreateCycleTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCycleTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCycleTaskOutcome(CreateCycleTaskResult(outcome.result()));
	else
		return CreateCycleTaskOutcome(outcome.error());
}

void SasClient::createCycleTaskAsync(const CreateCycleTaskRequest& request, const CreateCycleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCycleTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateCycleTaskOutcomeCallable SasClient::createCycleTaskCallable(const CreateCycleTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCycleTaskOutcome()>>(
			[this, request]()
			{
			return this->createCycleTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateFileDetectOutcome SasClient::createFileDetect(const CreateFileDetectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileDetectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileDetectOutcome(CreateFileDetectResult(outcome.result()));
	else
		return CreateFileDetectOutcome(outcome.error());
}

void SasClient::createFileDetectAsync(const CreateFileDetectRequest& request, const CreateFileDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileDetect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateFileDetectOutcomeCallable SasClient::createFileDetectCallable(const CreateFileDetectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileDetectOutcome()>>(
			[this, request]()
			{
			return this->createFileDetect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateFileDetectUploadUrlOutcome SasClient::createFileDetectUploadUrl(const CreateFileDetectUploadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileDetectUploadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileDetectUploadUrlOutcome(CreateFileDetectUploadUrlResult(outcome.result()));
	else
		return CreateFileDetectUploadUrlOutcome(outcome.error());
}

void SasClient::createFileDetectUploadUrlAsync(const CreateFileDetectUploadUrlRequest& request, const CreateFileDetectUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFileDetectUploadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateFileDetectUploadUrlOutcomeCallable SasClient::createFileDetectUploadUrlCallable(const CreateFileDetectUploadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileDetectUploadUrlOutcome()>>(
			[this, request]()
			{
			return this->createFileDetectUploadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateHoneypotOutcome SasClient::createHoneypot(const CreateHoneypotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHoneypotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHoneypotOutcome(CreateHoneypotResult(outcome.result()));
	else
		return CreateHoneypotOutcome(outcome.error());
}

void SasClient::createHoneypotAsync(const CreateHoneypotRequest& request, const CreateHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHoneypot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateHoneypotOutcomeCallable SasClient::createHoneypotCallable(const CreateHoneypotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHoneypotOutcome()>>(
			[this, request]()
			{
			return this->createHoneypot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateHoneypotNodeOutcome SasClient::createHoneypotNode(const CreateHoneypotNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHoneypotNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHoneypotNodeOutcome(CreateHoneypotNodeResult(outcome.result()));
	else
		return CreateHoneypotNodeOutcome(outcome.error());
}

void SasClient::createHoneypotNodeAsync(const CreateHoneypotNodeRequest& request, const CreateHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHoneypotNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateHoneypotNodeOutcomeCallable SasClient::createHoneypotNodeCallable(const CreateHoneypotNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHoneypotNodeOutcome()>>(
			[this, request]()
			{
			return this->createHoneypotNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateHoneypotPresetOutcome SasClient::createHoneypotPreset(const CreateHoneypotPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHoneypotPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHoneypotPresetOutcome(CreateHoneypotPresetResult(outcome.result()));
	else
		return CreateHoneypotPresetOutcome(outcome.error());
}

void SasClient::createHoneypotPresetAsync(const CreateHoneypotPresetRequest& request, const CreateHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHoneypotPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateHoneypotPresetOutcomeCallable SasClient::createHoneypotPresetCallable(const CreateHoneypotPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHoneypotPresetOutcome()>>(
			[this, request]()
			{
			return this->createHoneypotPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateHoneypotProbeOutcome SasClient::createHoneypotProbe(const CreateHoneypotProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHoneypotProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHoneypotProbeOutcome(CreateHoneypotProbeResult(outcome.result()));
	else
		return CreateHoneypotProbeOutcome(outcome.error());
}

void SasClient::createHoneypotProbeAsync(const CreateHoneypotProbeRequest& request, const CreateHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHoneypotProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateHoneypotProbeOutcomeCallable SasClient::createHoneypotProbeCallable(const CreateHoneypotProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHoneypotProbeOutcome()>>(
			[this, request]()
			{
			return this->createHoneypotProbe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateInterceptionRuleOutcome SasClient::createInterceptionRule(const CreateInterceptionRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInterceptionRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInterceptionRuleOutcome(CreateInterceptionRuleResult(outcome.result()));
	else
		return CreateInterceptionRuleOutcome(outcome.error());
}

void SasClient::createInterceptionRuleAsync(const CreateInterceptionRuleRequest& request, const CreateInterceptionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInterceptionRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateInterceptionRuleOutcomeCallable SasClient::createInterceptionRuleCallable(const CreateInterceptionRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInterceptionRuleOutcome()>>(
			[this, request]()
			{
			return this->createInterceptionRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateInterceptionTargetOutcome SasClient::createInterceptionTarget(const CreateInterceptionTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInterceptionTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInterceptionTargetOutcome(CreateInterceptionTargetResult(outcome.result()));
	else
		return CreateInterceptionTargetOutcome(outcome.error());
}

void SasClient::createInterceptionTargetAsync(const CreateInterceptionTargetRequest& request, const CreateInterceptionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInterceptionTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateInterceptionTargetOutcomeCallable SasClient::createInterceptionTargetCallable(const CreateInterceptionTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInterceptionTargetOutcome()>>(
			[this, request]()
			{
			return this->createInterceptionTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateJenkinsImageRegistryOutcome SasClient::createJenkinsImageRegistry(const CreateJenkinsImageRegistryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJenkinsImageRegistryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJenkinsImageRegistryOutcome(CreateJenkinsImageRegistryResult(outcome.result()));
	else
		return CreateJenkinsImageRegistryOutcome(outcome.error());
}

void SasClient::createJenkinsImageRegistryAsync(const CreateJenkinsImageRegistryRequest& request, const CreateJenkinsImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJenkinsImageRegistry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateJenkinsImageRegistryOutcomeCallable SasClient::createJenkinsImageRegistryCallable(const CreateJenkinsImageRegistryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJenkinsImageRegistryOutcome()>>(
			[this, request]()
			{
			return this->createJenkinsImageRegistry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateOrUpdateAssetGroupOutcome SasClient::createOrUpdateAssetGroup(const CreateOrUpdateAssetGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateAssetGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateAssetGroupOutcome(CreateOrUpdateAssetGroupResult(outcome.result()));
	else
		return CreateOrUpdateAssetGroupOutcome(outcome.error());
}

void SasClient::createOrUpdateAssetGroupAsync(const CreateOrUpdateAssetGroupRequest& request, const CreateOrUpdateAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateAssetGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateOrUpdateAssetGroupOutcomeCallable SasClient::createOrUpdateAssetGroupCallable(const CreateOrUpdateAssetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateAssetGroupOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateAssetGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateOrUpdateDingTalkOutcome SasClient::createOrUpdateDingTalk(const CreateOrUpdateDingTalkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateDingTalkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateDingTalkOutcome(CreateOrUpdateDingTalkResult(outcome.result()));
	else
		return CreateOrUpdateDingTalkOutcome(outcome.error());
}

void SasClient::createOrUpdateDingTalkAsync(const CreateOrUpdateDingTalkRequest& request, const CreateOrUpdateDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateDingTalk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateOrUpdateDingTalkOutcomeCallable SasClient::createOrUpdateDingTalkCallable(const CreateOrUpdateDingTalkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateDingTalkOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateDingTalk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateRestoreJobOutcome SasClient::createRestoreJob(const CreateRestoreJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRestoreJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRestoreJobOutcome(CreateRestoreJobResult(outcome.result()));
	else
		return CreateRestoreJobOutcome(outcome.error());
}

void SasClient::createRestoreJobAsync(const CreateRestoreJobRequest& request, const CreateRestoreJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRestoreJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateRestoreJobOutcomeCallable SasClient::createRestoreJobCallable(const CreateRestoreJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRestoreJobOutcome()>>(
			[this, request]()
			{
			return this->createRestoreJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateServiceLinkedRoleOutcome SasClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void SasClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateServiceLinkedRoleOutcomeCallable SasClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateServiceTrailOutcome SasClient::createServiceTrail(const CreateServiceTrailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceTrailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceTrailOutcome(CreateServiceTrailResult(outcome.result()));
	else
		return CreateServiceTrailOutcome(outcome.error());
}

void SasClient::createServiceTrailAsync(const CreateServiceTrailRequest& request, const CreateServiceTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceTrail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateServiceTrailOutcomeCallable SasClient::createServiceTrailCallable(const CreateServiceTrailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceTrailOutcome()>>(
			[this, request]()
			{
			return this->createServiceTrail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateSimilarSecurityEventsQueryTaskOutcome SasClient::createSimilarSecurityEventsQueryTask(const CreateSimilarSecurityEventsQueryTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSimilarSecurityEventsQueryTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSimilarSecurityEventsQueryTaskOutcome(CreateSimilarSecurityEventsQueryTaskResult(outcome.result()));
	else
		return CreateSimilarSecurityEventsQueryTaskOutcome(outcome.error());
}

void SasClient::createSimilarSecurityEventsQueryTaskAsync(const CreateSimilarSecurityEventsQueryTaskRequest& request, const CreateSimilarSecurityEventsQueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSimilarSecurityEventsQueryTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateSimilarSecurityEventsQueryTaskOutcomeCallable SasClient::createSimilarSecurityEventsQueryTaskCallable(const CreateSimilarSecurityEventsQueryTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSimilarSecurityEventsQueryTaskOutcome()>>(
			[this, request]()
			{
			return this->createSimilarSecurityEventsQueryTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateSuspEventNoteOutcome SasClient::createSuspEventNote(const CreateSuspEventNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSuspEventNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSuspEventNoteOutcome(CreateSuspEventNoteResult(outcome.result()));
	else
		return CreateSuspEventNoteOutcome(outcome.error());
}

void SasClient::createSuspEventNoteAsync(const CreateSuspEventNoteRequest& request, const CreateSuspEventNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSuspEventNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateSuspEventNoteOutcomeCallable SasClient::createSuspEventNoteCallable(const CreateSuspEventNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSuspEventNoteOutcome()>>(
			[this, request]()
			{
			return this->createSuspEventNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateUniBackupPolicyOutcome SasClient::createUniBackupPolicy(const CreateUniBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUniBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUniBackupPolicyOutcome(CreateUniBackupPolicyResult(outcome.result()));
	else
		return CreateUniBackupPolicyOutcome(outcome.error());
}

void SasClient::createUniBackupPolicyAsync(const CreateUniBackupPolicyRequest& request, const CreateUniBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUniBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateUniBackupPolicyOutcomeCallable SasClient::createUniBackupPolicyCallable(const CreateUniBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUniBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->createUniBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateUniRestorePlanOutcome SasClient::createUniRestorePlan(const CreateUniRestorePlanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUniRestorePlanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUniRestorePlanOutcome(CreateUniRestorePlanResult(outcome.result()));
	else
		return CreateUniRestorePlanOutcome(outcome.error());
}

void SasClient::createUniRestorePlanAsync(const CreateUniRestorePlanRequest& request, const CreateUniRestorePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUniRestorePlan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateUniRestorePlanOutcomeCallable SasClient::createUniRestorePlanCallable(const CreateUniRestorePlanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUniRestorePlanOutcome()>>(
			[this, request]()
			{
			return this->createUniRestorePlan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::CreateVulAutoRepairConfigOutcome SasClient::createVulAutoRepairConfig(const CreateVulAutoRepairConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVulAutoRepairConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVulAutoRepairConfigOutcome(CreateVulAutoRepairConfigResult(outcome.result()));
	else
		return CreateVulAutoRepairConfigOutcome(outcome.error());
}

void SasClient::createVulAutoRepairConfigAsync(const CreateVulAutoRepairConfigRequest& request, const CreateVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVulAutoRepairConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::CreateVulAutoRepairConfigOutcomeCallable SasClient::createVulAutoRepairConfigCallable(const CreateVulAutoRepairConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVulAutoRepairConfigOutcome()>>(
			[this, request]()
			{
			return this->createVulAutoRepairConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteAntiBruteForceRuleOutcome SasClient::deleteAntiBruteForceRule(const DeleteAntiBruteForceRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAntiBruteForceRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAntiBruteForceRuleOutcome(DeleteAntiBruteForceRuleResult(outcome.result()));
	else
		return DeleteAntiBruteForceRuleOutcome(outcome.error());
}

void SasClient::deleteAntiBruteForceRuleAsync(const DeleteAntiBruteForceRuleRequest& request, const DeleteAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAntiBruteForceRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteAntiBruteForceRuleOutcomeCallable SasClient::deleteAntiBruteForceRuleCallable(const DeleteAntiBruteForceRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAntiBruteForceRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAntiBruteForceRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteBackupPolicyOutcome SasClient::deleteBackupPolicy(const DeleteBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupPolicyOutcome(DeleteBackupPolicyResult(outcome.result()));
	else
		return DeleteBackupPolicyOutcome(outcome.error());
}

void SasClient::deleteBackupPolicyAsync(const DeleteBackupPolicyRequest& request, const DeleteBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteBackupPolicyOutcomeCallable SasClient::deleteBackupPolicyCallable(const DeleteBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteBackupPolicyMachineOutcome SasClient::deleteBackupPolicyMachine(const DeleteBackupPolicyMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBackupPolicyMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBackupPolicyMachineOutcome(DeleteBackupPolicyMachineResult(outcome.result()));
	else
		return DeleteBackupPolicyMachineOutcome(outcome.error());
}

void SasClient::deleteBackupPolicyMachineAsync(const DeleteBackupPolicyMachineRequest& request, const DeleteBackupPolicyMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBackupPolicyMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteBackupPolicyMachineOutcomeCallable SasClient::deleteBackupPolicyMachineCallable(const DeleteBackupPolicyMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBackupPolicyMachineOutcome()>>(
			[this, request]()
			{
			return this->deleteBackupPolicyMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteBinarySecurityPolicyOutcome SasClient::deleteBinarySecurityPolicy(const DeleteBinarySecurityPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBinarySecurityPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBinarySecurityPolicyOutcome(DeleteBinarySecurityPolicyResult(outcome.result()));
	else
		return DeleteBinarySecurityPolicyOutcome(outcome.error());
}

void SasClient::deleteBinarySecurityPolicyAsync(const DeleteBinarySecurityPolicyRequest& request, const DeleteBinarySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBinarySecurityPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteBinarySecurityPolicyOutcomeCallable SasClient::deleteBinarySecurityPolicyCallable(const DeleteBinarySecurityPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBinarySecurityPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteBinarySecurityPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteClientUserDefineRuleOutcome SasClient::deleteClientUserDefineRule(const DeleteClientUserDefineRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClientUserDefineRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClientUserDefineRuleOutcome(DeleteClientUserDefineRuleResult(outcome.result()));
	else
		return DeleteClientUserDefineRuleOutcome(outcome.error());
}

void SasClient::deleteClientUserDefineRuleAsync(const DeleteClientUserDefineRuleRequest& request, const DeleteClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClientUserDefineRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteClientUserDefineRuleOutcomeCallable SasClient::deleteClientUserDefineRuleCallable(const DeleteClientUserDefineRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClientUserDefineRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteClientUserDefineRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteCustomBlockRecordOutcome SasClient::deleteCustomBlockRecord(const DeleteCustomBlockRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomBlockRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomBlockRecordOutcome(DeleteCustomBlockRecordResult(outcome.result()));
	else
		return DeleteCustomBlockRecordOutcome(outcome.error());
}

void SasClient::deleteCustomBlockRecordAsync(const DeleteCustomBlockRecordRequest& request, const DeleteCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomBlockRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteCustomBlockRecordOutcomeCallable SasClient::deleteCustomBlockRecordCallable(const DeleteCustomBlockRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomBlockRecordOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomBlockRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteCycleTaskOutcome SasClient::deleteCycleTask(const DeleteCycleTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCycleTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCycleTaskOutcome(DeleteCycleTaskResult(outcome.result()));
	else
		return DeleteCycleTaskOutcome(outcome.error());
}

void SasClient::deleteCycleTaskAsync(const DeleteCycleTaskRequest& request, const DeleteCycleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCycleTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteCycleTaskOutcomeCallable SasClient::deleteCycleTaskCallable(const DeleteCycleTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCycleTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteCycleTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteGroupOutcome SasClient::deleteGroup(const DeleteGroupRequest &request) const
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

void SasClient::deleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteGroupOutcomeCallable SasClient::deleteGroupCallable(const DeleteGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteHoneypotOutcome SasClient::deleteHoneypot(const DeleteHoneypotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHoneypotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHoneypotOutcome(DeleteHoneypotResult(outcome.result()));
	else
		return DeleteHoneypotOutcome(outcome.error());
}

void SasClient::deleteHoneypotAsync(const DeleteHoneypotRequest& request, const DeleteHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHoneypot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteHoneypotOutcomeCallable SasClient::deleteHoneypotCallable(const DeleteHoneypotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHoneypotOutcome()>>(
			[this, request]()
			{
			return this->deleteHoneypot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteHoneypotNodeOutcome SasClient::deleteHoneypotNode(const DeleteHoneypotNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHoneypotNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHoneypotNodeOutcome(DeleteHoneypotNodeResult(outcome.result()));
	else
		return DeleteHoneypotNodeOutcome(outcome.error());
}

void SasClient::deleteHoneypotNodeAsync(const DeleteHoneypotNodeRequest& request, const DeleteHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHoneypotNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteHoneypotNodeOutcomeCallable SasClient::deleteHoneypotNodeCallable(const DeleteHoneypotNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHoneypotNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteHoneypotNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteHoneypotPresetOutcome SasClient::deleteHoneypotPreset(const DeleteHoneypotPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHoneypotPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHoneypotPresetOutcome(DeleteHoneypotPresetResult(outcome.result()));
	else
		return DeleteHoneypotPresetOutcome(outcome.error());
}

void SasClient::deleteHoneypotPresetAsync(const DeleteHoneypotPresetRequest& request, const DeleteHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHoneypotPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteHoneypotPresetOutcomeCallable SasClient::deleteHoneypotPresetCallable(const DeleteHoneypotPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHoneypotPresetOutcome()>>(
			[this, request]()
			{
			return this->deleteHoneypotPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteHoneypotProbeOutcome SasClient::deleteHoneypotProbe(const DeleteHoneypotProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHoneypotProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHoneypotProbeOutcome(DeleteHoneypotProbeResult(outcome.result()));
	else
		return DeleteHoneypotProbeOutcome(outcome.error());
}

void SasClient::deleteHoneypotProbeAsync(const DeleteHoneypotProbeRequest& request, const DeleteHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHoneypotProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteHoneypotProbeOutcomeCallable SasClient::deleteHoneypotProbeCallable(const DeleteHoneypotProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHoneypotProbeOutcome()>>(
			[this, request]()
			{
			return this->deleteHoneypotProbe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteInstallCodeOutcome SasClient::deleteInstallCode(const DeleteInstallCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstallCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstallCodeOutcome(DeleteInstallCodeResult(outcome.result()));
	else
		return DeleteInstallCodeOutcome(outcome.error());
}

void SasClient::deleteInstallCodeAsync(const DeleteInstallCodeRequest& request, const DeleteInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstallCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteInstallCodeOutcomeCallable SasClient::deleteInstallCodeCallable(const DeleteInstallCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstallCodeOutcome()>>(
			[this, request]()
			{
			return this->deleteInstallCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteInterceptionRuleOutcome SasClient::deleteInterceptionRule(const DeleteInterceptionRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInterceptionRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInterceptionRuleOutcome(DeleteInterceptionRuleResult(outcome.result()));
	else
		return DeleteInterceptionRuleOutcome(outcome.error());
}

void SasClient::deleteInterceptionRuleAsync(const DeleteInterceptionRuleRequest& request, const DeleteInterceptionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInterceptionRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteInterceptionRuleOutcomeCallable SasClient::deleteInterceptionRuleCallable(const DeleteInterceptionRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInterceptionRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteInterceptionRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteInterceptionTargetOutcome SasClient::deleteInterceptionTarget(const DeleteInterceptionTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInterceptionTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInterceptionTargetOutcome(DeleteInterceptionTargetResult(outcome.result()));
	else
		return DeleteInterceptionTargetOutcome(outcome.error());
}

void SasClient::deleteInterceptionTargetAsync(const DeleteInterceptionTargetRequest& request, const DeleteInterceptionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInterceptionTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteInterceptionTargetOutcomeCallable SasClient::deleteInterceptionTargetCallable(const DeleteInterceptionTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInterceptionTargetOutcome()>>(
			[this, request]()
			{
			return this->deleteInterceptionTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteLoginBaseConfigOutcome SasClient::deleteLoginBaseConfig(const DeleteLoginBaseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLoginBaseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLoginBaseConfigOutcome(DeleteLoginBaseConfigResult(outcome.result()));
	else
		return DeleteLoginBaseConfigOutcome(outcome.error());
}

void SasClient::deleteLoginBaseConfigAsync(const DeleteLoginBaseConfigRequest& request, const DeleteLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLoginBaseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteLoginBaseConfigOutcomeCallable SasClient::deleteLoginBaseConfigCallable(const DeleteLoginBaseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLoginBaseConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLoginBaseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeletePrivateRegistryOutcome SasClient::deletePrivateRegistry(const DeletePrivateRegistryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePrivateRegistryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePrivateRegistryOutcome(DeletePrivateRegistryResult(outcome.result()));
	else
		return DeletePrivateRegistryOutcome(outcome.error());
}

void SasClient::deletePrivateRegistryAsync(const DeletePrivateRegistryRequest& request, const DeletePrivateRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePrivateRegistry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeletePrivateRegistryOutcomeCallable SasClient::deletePrivateRegistryCallable(const DeletePrivateRegistryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePrivateRegistryOutcome()>>(
			[this, request]()
			{
			return this->deletePrivateRegistry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteSecurityEventMarkMissListOutcome SasClient::deleteSecurityEventMarkMissList(const DeleteSecurityEventMarkMissListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecurityEventMarkMissListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecurityEventMarkMissListOutcome(DeleteSecurityEventMarkMissListResult(outcome.result()));
	else
		return DeleteSecurityEventMarkMissListOutcome(outcome.error());
}

void SasClient::deleteSecurityEventMarkMissListAsync(const DeleteSecurityEventMarkMissListRequest& request, const DeleteSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecurityEventMarkMissList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteSecurityEventMarkMissListOutcomeCallable SasClient::deleteSecurityEventMarkMissListCallable(const DeleteSecurityEventMarkMissListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecurityEventMarkMissListOutcome()>>(
			[this, request]()
			{
			return this->deleteSecurityEventMarkMissList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteServiceTrailOutcome SasClient::deleteServiceTrail(const DeleteServiceTrailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteServiceTrailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteServiceTrailOutcome(DeleteServiceTrailResult(outcome.result()));
	else
		return DeleteServiceTrailOutcome(outcome.error());
}

void SasClient::deleteServiceTrailAsync(const DeleteServiceTrailRequest& request, const DeleteServiceTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteServiceTrail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteServiceTrailOutcomeCallable SasClient::deleteServiceTrailCallable(const DeleteServiceTrailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteServiceTrailOutcome()>>(
			[this, request]()
			{
			return this->deleteServiceTrail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteStrategyOutcome SasClient::deleteStrategy(const DeleteStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStrategyOutcome(DeleteStrategyResult(outcome.result()));
	else
		return DeleteStrategyOutcome(outcome.error());
}

void SasClient::deleteStrategyAsync(const DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteStrategyOutcomeCallable SasClient::deleteStrategyCallable(const DeleteStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteSuspEventNodeOutcome SasClient::deleteSuspEventNode(const DeleteSuspEventNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSuspEventNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSuspEventNodeOutcome(DeleteSuspEventNodeResult(outcome.result()));
	else
		return DeleteSuspEventNodeOutcome(outcome.error());
}

void SasClient::deleteSuspEventNodeAsync(const DeleteSuspEventNodeRequest& request, const DeleteSuspEventNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSuspEventNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteSuspEventNodeOutcomeCallable SasClient::deleteSuspEventNodeCallable(const DeleteSuspEventNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSuspEventNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteSuspEventNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteTagWithUuidOutcome SasClient::deleteTagWithUuid(const DeleteTagWithUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTagWithUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTagWithUuidOutcome(DeleteTagWithUuidResult(outcome.result()));
	else
		return DeleteTagWithUuidOutcome(outcome.error());
}

void SasClient::deleteTagWithUuidAsync(const DeleteTagWithUuidRequest& request, const DeleteTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTagWithUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteTagWithUuidOutcomeCallable SasClient::deleteTagWithUuidCallable(const DeleteTagWithUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTagWithUuidOutcome()>>(
			[this, request]()
			{
			return this->deleteTagWithUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteUniBackupPolicyOutcome SasClient::deleteUniBackupPolicy(const DeleteUniBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUniBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUniBackupPolicyOutcome(DeleteUniBackupPolicyResult(outcome.result()));
	else
		return DeleteUniBackupPolicyOutcome(outcome.error());
}

void SasClient::deleteUniBackupPolicyAsync(const DeleteUniBackupPolicyRequest& request, const DeleteUniBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUniBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteUniBackupPolicyOutcomeCallable SasClient::deleteUniBackupPolicyCallable(const DeleteUniBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUniBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->deleteUniBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteVpcHoneyPotOutcome SasClient::deleteVpcHoneyPot(const DeleteVpcHoneyPotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcHoneyPotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcHoneyPotOutcome(DeleteVpcHoneyPotResult(outcome.result()));
	else
		return DeleteVpcHoneyPotOutcome(outcome.error());
}

void SasClient::deleteVpcHoneyPotAsync(const DeleteVpcHoneyPotRequest& request, const DeleteVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpcHoneyPot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteVpcHoneyPotOutcomeCallable SasClient::deleteVpcHoneyPotCallable(const DeleteVpcHoneyPotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcHoneyPotOutcome()>>(
			[this, request]()
			{
			return this->deleteVpcHoneyPot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DeleteVulWhitelistOutcome SasClient::deleteVulWhitelist(const DeleteVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVulWhitelistOutcome(DeleteVulWhitelistResult(outcome.result()));
	else
		return DeleteVulWhitelistOutcome(outcome.error());
}

void SasClient::deleteVulWhitelistAsync(const DeleteVulWhitelistRequest& request, const DeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteVulWhitelistOutcomeCallable SasClient::deleteVulWhitelistCallable(const DeleteVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->deleteVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAccessKeyLeakDetailOutcome SasClient::describeAccessKeyLeakDetail(const DescribeAccessKeyLeakDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessKeyLeakDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessKeyLeakDetailOutcome(DescribeAccessKeyLeakDetailResult(outcome.result()));
	else
		return DescribeAccessKeyLeakDetailOutcome(outcome.error());
}

void SasClient::describeAccessKeyLeakDetailAsync(const DescribeAccessKeyLeakDetailRequest& request, const DescribeAccessKeyLeakDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessKeyLeakDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAccessKeyLeakDetailOutcomeCallable SasClient::describeAccessKeyLeakDetailCallable(const DescribeAccessKeyLeakDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessKeyLeakDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAccessKeyLeakDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAccesskeyLeakListOutcome SasClient::describeAccesskeyLeakList(const DescribeAccesskeyLeakListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccesskeyLeakListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccesskeyLeakListOutcome(DescribeAccesskeyLeakListResult(outcome.result()));
	else
		return DescribeAccesskeyLeakListOutcome(outcome.error());
}

void SasClient::describeAccesskeyLeakListAsync(const DescribeAccesskeyLeakListRequest& request, const DescribeAccesskeyLeakListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccesskeyLeakList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAccesskeyLeakListOutcomeCallable SasClient::describeAccesskeyLeakListCallable(const DescribeAccesskeyLeakListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccesskeyLeakListOutcome()>>(
			[this, request]()
			{
			return this->describeAccesskeyLeakList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAffectedAssetsOutcome SasClient::describeAffectedAssets(const DescribeAffectedAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAffectedAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAffectedAssetsOutcome(DescribeAffectedAssetsResult(outcome.result()));
	else
		return DescribeAffectedAssetsOutcome(outcome.error());
}

void SasClient::describeAffectedAssetsAsync(const DescribeAffectedAssetsRequest& request, const DescribeAffectedAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAffectedAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAffectedAssetsOutcomeCallable SasClient::describeAffectedAssetsCallable(const DescribeAffectedAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAffectedAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeAffectedAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAffectedMaliciousFileImagesOutcome SasClient::describeAffectedMaliciousFileImages(const DescribeAffectedMaliciousFileImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAffectedMaliciousFileImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAffectedMaliciousFileImagesOutcome(DescribeAffectedMaliciousFileImagesResult(outcome.result()));
	else
		return DescribeAffectedMaliciousFileImagesOutcome(outcome.error());
}

void SasClient::describeAffectedMaliciousFileImagesAsync(const DescribeAffectedMaliciousFileImagesRequest& request, const DescribeAffectedMaliciousFileImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAffectedMaliciousFileImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAffectedMaliciousFileImagesOutcomeCallable SasClient::describeAffectedMaliciousFileImagesCallable(const DescribeAffectedMaliciousFileImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAffectedMaliciousFileImagesOutcome()>>(
			[this, request]()
			{
			return this->describeAffectedMaliciousFileImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAgentInstallStatusOutcome SasClient::describeAgentInstallStatus(const DescribeAgentInstallStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAgentInstallStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAgentInstallStatusOutcome(DescribeAgentInstallStatusResult(outcome.result()));
	else
		return DescribeAgentInstallStatusOutcome(outcome.error());
}

void SasClient::describeAgentInstallStatusAsync(const DescribeAgentInstallStatusRequest& request, const DescribeAgentInstallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAgentInstallStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAgentInstallStatusOutcomeCallable SasClient::describeAgentInstallStatusCallable(const DescribeAgentInstallStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAgentInstallStatusOutcome()>>(
			[this, request]()
			{
			return this->describeAgentInstallStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAlarmEventDetailOutcome SasClient::describeAlarmEventDetail(const DescribeAlarmEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmEventDetailOutcome(DescribeAlarmEventDetailResult(outcome.result()));
	else
		return DescribeAlarmEventDetailOutcome(outcome.error());
}

void SasClient::describeAlarmEventDetailAsync(const DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAlarmEventDetailOutcomeCallable SasClient::describeAlarmEventDetailCallable(const DescribeAlarmEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAlarmEventStackInfoOutcome SasClient::describeAlarmEventStackInfo(const DescribeAlarmEventStackInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmEventStackInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmEventStackInfoOutcome(DescribeAlarmEventStackInfoResult(outcome.result()));
	else
		return DescribeAlarmEventStackInfoOutcome(outcome.error());
}

void SasClient::describeAlarmEventStackInfoAsync(const DescribeAlarmEventStackInfoRequest& request, const DescribeAlarmEventStackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventStackInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAlarmEventStackInfoOutcomeCallable SasClient::describeAlarmEventStackInfoCallable(const DescribeAlarmEventStackInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventStackInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventStackInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAllEntityOutcome SasClient::describeAllEntity(const DescribeAllEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllEntityOutcome(DescribeAllEntityResult(outcome.result()));
	else
		return DescribeAllEntityOutcome(outcome.error());
}

void SasClient::describeAllEntityAsync(const DescribeAllEntityRequest& request, const DescribeAllEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAllEntityOutcomeCallable SasClient::describeAllEntityCallable(const DescribeAllEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllEntityOutcome()>>(
			[this, request]()
			{
			return this->describeAllEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAllGroupsOutcome SasClient::describeAllGroups(const DescribeAllGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllGroupsOutcome(DescribeAllGroupsResult(outcome.result()));
	else
		return DescribeAllGroupsOutcome(outcome.error());
}

void SasClient::describeAllGroupsAsync(const DescribeAllGroupsRequest& request, const DescribeAllGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAllGroupsOutcomeCallable SasClient::describeAllGroupsCallable(const DescribeAllGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeAllGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAllImageBaselineOutcome SasClient::describeAllImageBaseline(const DescribeAllImageBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllImageBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllImageBaselineOutcome(DescribeAllImageBaselineResult(outcome.result()));
	else
		return DescribeAllImageBaselineOutcome(outcome.error());
}

void SasClient::describeAllImageBaselineAsync(const DescribeAllImageBaselineRequest& request, const DescribeAllImageBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllImageBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAllImageBaselineOutcomeCallable SasClient::describeAllImageBaselineCallable(const DescribeAllImageBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllImageBaselineOutcome()>>(
			[this, request]()
			{
			return this->describeAllImageBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAntiBruteForceRulesOutcome SasClient::describeAntiBruteForceRules(const DescribeAntiBruteForceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAntiBruteForceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAntiBruteForceRulesOutcome(DescribeAntiBruteForceRulesResult(outcome.result()));
	else
		return DescribeAntiBruteForceRulesOutcome(outcome.error());
}

void SasClient::describeAntiBruteForceRulesAsync(const DescribeAntiBruteForceRulesRequest& request, const DescribeAntiBruteForceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAntiBruteForceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAntiBruteForceRulesOutcomeCallable SasClient::describeAntiBruteForceRulesCallable(const DescribeAntiBruteForceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAntiBruteForceRulesOutcome()>>(
			[this, request]()
			{
			return this->describeAntiBruteForceRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAppVulScanCycleOutcome SasClient::describeAppVulScanCycle(const DescribeAppVulScanCycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppVulScanCycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppVulScanCycleOutcome(DescribeAppVulScanCycleResult(outcome.result()));
	else
		return DescribeAppVulScanCycleOutcome(outcome.error());
}

void SasClient::describeAppVulScanCycleAsync(const DescribeAppVulScanCycleRequest& request, const DescribeAppVulScanCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppVulScanCycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAppVulScanCycleOutcomeCallable SasClient::describeAppVulScanCycleCallable(const DescribeAppVulScanCycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppVulScanCycleOutcome()>>(
			[this, request]()
			{
			return this->describeAppVulScanCycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAssetDetailByUuidOutcome SasClient::describeAssetDetailByUuid(const DescribeAssetDetailByUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetDetailByUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetDetailByUuidOutcome(DescribeAssetDetailByUuidResult(outcome.result()));
	else
		return DescribeAssetDetailByUuidOutcome(outcome.error());
}

void SasClient::describeAssetDetailByUuidAsync(const DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetDetailByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAssetDetailByUuidOutcomeCallable SasClient::describeAssetDetailByUuidCallable(const DescribeAssetDetailByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetDetailByUuidOutcome()>>(
			[this, request]()
			{
			return this->describeAssetDetailByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAssetDetailByUuidsOutcome SasClient::describeAssetDetailByUuids(const DescribeAssetDetailByUuidsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetDetailByUuidsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetDetailByUuidsOutcome(DescribeAssetDetailByUuidsResult(outcome.result()));
	else
		return DescribeAssetDetailByUuidsOutcome(outcome.error());
}

void SasClient::describeAssetDetailByUuidsAsync(const DescribeAssetDetailByUuidsRequest& request, const DescribeAssetDetailByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetDetailByUuids(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAssetDetailByUuidsOutcomeCallable SasClient::describeAssetDetailByUuidsCallable(const DescribeAssetDetailByUuidsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetDetailByUuidsOutcome()>>(
			[this, request]()
			{
			return this->describeAssetDetailByUuids(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAssetSummaryOutcome SasClient::describeAssetSummary(const DescribeAssetSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetSummaryOutcome(DescribeAssetSummaryResult(outcome.result()));
	else
		return DescribeAssetSummaryOutcome(outcome.error());
}

void SasClient::describeAssetSummaryAsync(const DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAssetSummaryOutcomeCallable SasClient::describeAssetSummaryCallable(const DescribeAssetSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeAssetSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAssetsSecurityEventSummaryOutcome SasClient::describeAssetsSecurityEventSummary(const DescribeAssetsSecurityEventSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetsSecurityEventSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetsSecurityEventSummaryOutcome(DescribeAssetsSecurityEventSummaryResult(outcome.result()));
	else
		return DescribeAssetsSecurityEventSummaryOutcome(outcome.error());
}

void SasClient::describeAssetsSecurityEventSummaryAsync(const DescribeAssetsSecurityEventSummaryRequest& request, const DescribeAssetsSecurityEventSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetsSecurityEventSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAssetsSecurityEventSummaryOutcomeCallable SasClient::describeAssetsSecurityEventSummaryCallable(const DescribeAssetsSecurityEventSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetsSecurityEventSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeAssetsSecurityEventSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAttackAnalysisDataOutcome SasClient::describeAttackAnalysisData(const DescribeAttackAnalysisDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAttackAnalysisDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAttackAnalysisDataOutcome(DescribeAttackAnalysisDataResult(outcome.result()));
	else
		return DescribeAttackAnalysisDataOutcome(outcome.error());
}

void SasClient::describeAttackAnalysisDataAsync(const DescribeAttackAnalysisDataRequest& request, const DescribeAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAttackAnalysisData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAttackAnalysisDataOutcomeCallable SasClient::describeAttackAnalysisDataCallable(const DescribeAttackAnalysisDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAttackAnalysisDataOutcome()>>(
			[this, request]()
			{
			return this->describeAttackAnalysisData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeAutoDelConfigOutcome SasClient::describeAutoDelConfig(const DescribeAutoDelConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoDelConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoDelConfigOutcome(DescribeAutoDelConfigResult(outcome.result()));
	else
		return DescribeAutoDelConfigOutcome(outcome.error());
}

void SasClient::describeAutoDelConfigAsync(const DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoDelConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAutoDelConfigOutcomeCallable SasClient::describeAutoDelConfigCallable(const DescribeAutoDelConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoDelConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAutoDelConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackUpExportInfoOutcome SasClient::describeBackUpExportInfo(const DescribeBackUpExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackUpExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackUpExportInfoOutcome(DescribeBackUpExportInfoResult(outcome.result()));
	else
		return DescribeBackUpExportInfoOutcome(outcome.error());
}

void SasClient::describeBackUpExportInfoAsync(const DescribeBackUpExportInfoRequest& request, const DescribeBackUpExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackUpExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackUpExportInfoOutcomeCallable SasClient::describeBackUpExportInfoCallable(const DescribeBackUpExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackUpExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeBackUpExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackupClientsOutcome SasClient::describeBackupClients(const DescribeBackupClientsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupClientsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupClientsOutcome(DescribeBackupClientsResult(outcome.result()));
	else
		return DescribeBackupClientsOutcome(outcome.error());
}

void SasClient::describeBackupClientsAsync(const DescribeBackupClientsRequest& request, const DescribeBackupClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupClients(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackupClientsOutcomeCallable SasClient::describeBackupClientsCallable(const DescribeBackupClientsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupClientsOutcome()>>(
			[this, request]()
			{
			return this->describeBackupClients(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackupFilesOutcome SasClient::describeBackupFiles(const DescribeBackupFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupFilesOutcome(DescribeBackupFilesResult(outcome.result()));
	else
		return DescribeBackupFilesOutcome(outcome.error());
}

void SasClient::describeBackupFilesAsync(const DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackupFilesOutcomeCallable SasClient::describeBackupFilesCallable(const DescribeBackupFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupFilesOutcome()>>(
			[this, request]()
			{
			return this->describeBackupFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackupMachineStatusOutcome SasClient::describeBackupMachineStatus(const DescribeBackupMachineStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupMachineStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupMachineStatusOutcome(DescribeBackupMachineStatusResult(outcome.result()));
	else
		return DescribeBackupMachineStatusOutcome(outcome.error());
}

void SasClient::describeBackupMachineStatusAsync(const DescribeBackupMachineStatusRequest& request, const DescribeBackupMachineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupMachineStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackupMachineStatusOutcomeCallable SasClient::describeBackupMachineStatusCallable(const DescribeBackupMachineStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupMachineStatusOutcome()>>(
			[this, request]()
			{
			return this->describeBackupMachineStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackupPoliciesOutcome SasClient::describeBackupPolicies(const DescribeBackupPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPoliciesOutcome(DescribeBackupPoliciesResult(outcome.result()));
	else
		return DescribeBackupPoliciesOutcome(outcome.error());
}

void SasClient::describeBackupPoliciesAsync(const DescribeBackupPoliciesRequest& request, const DescribeBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackupPoliciesOutcomeCallable SasClient::describeBackupPoliciesCallable(const DescribeBackupPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackupPolicyOutcome SasClient::describeBackupPolicy(const DescribeBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupPolicyOutcome(DescribeBackupPolicyResult(outcome.result()));
	else
		return DescribeBackupPolicyOutcome(outcome.error());
}

void SasClient::describeBackupPolicyAsync(const DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackupPolicyOutcomeCallable SasClient::describeBackupPolicyCallable(const DescribeBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->describeBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBackupRestoreCountOutcome SasClient::describeBackupRestoreCount(const DescribeBackupRestoreCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBackupRestoreCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBackupRestoreCountOutcome(DescribeBackupRestoreCountResult(outcome.result()));
	else
		return DescribeBackupRestoreCountOutcome(outcome.error());
}

void SasClient::describeBackupRestoreCountAsync(const DescribeBackupRestoreCountRequest& request, const DescribeBackupRestoreCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBackupRestoreCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBackupRestoreCountOutcomeCallable SasClient::describeBackupRestoreCountCallable(const DescribeBackupRestoreCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBackupRestoreCountOutcome()>>(
			[this, request]()
			{
			return this->describeBackupRestoreCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBruteForceRecordsOutcome SasClient::describeBruteForceRecords(const DescribeBruteForceRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBruteForceRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBruteForceRecordsOutcome(DescribeBruteForceRecordsResult(outcome.result()));
	else
		return DescribeBruteForceRecordsOutcome(outcome.error());
}

void SasClient::describeBruteForceRecordsAsync(const DescribeBruteForceRecordsRequest& request, const DescribeBruteForceRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBruteForceRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBruteForceRecordsOutcomeCallable SasClient::describeBruteForceRecordsCallable(const DescribeBruteForceRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBruteForceRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeBruteForceRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeBruteForceSummaryOutcome SasClient::describeBruteForceSummary(const DescribeBruteForceSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBruteForceSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBruteForceSummaryOutcome(DescribeBruteForceSummaryResult(outcome.result()));
	else
		return DescribeBruteForceSummaryOutcome(outcome.error());
}

void SasClient::describeBruteForceSummaryAsync(const DescribeBruteForceSummaryRequest& request, const DescribeBruteForceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBruteForceSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeBruteForceSummaryOutcomeCallable SasClient::describeBruteForceSummaryCallable(const DescribeBruteForceSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBruteForceSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeBruteForceSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckEcsWarningsOutcome SasClient::describeCheckEcsWarnings(const DescribeCheckEcsWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckEcsWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckEcsWarningsOutcome(DescribeCheckEcsWarningsResult(outcome.result()));
	else
		return DescribeCheckEcsWarningsOutcome(outcome.error());
}

void SasClient::describeCheckEcsWarningsAsync(const DescribeCheckEcsWarningsRequest& request, const DescribeCheckEcsWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckEcsWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckEcsWarningsOutcomeCallable SasClient::describeCheckEcsWarningsCallable(const DescribeCheckEcsWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckEcsWarningsOutcome()>>(
			[this, request]()
			{
			return this->describeCheckEcsWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckFixDetailsOutcome SasClient::describeCheckFixDetails(const DescribeCheckFixDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckFixDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckFixDetailsOutcome(DescribeCheckFixDetailsResult(outcome.result()));
	else
		return DescribeCheckFixDetailsOutcome(outcome.error());
}

void SasClient::describeCheckFixDetailsAsync(const DescribeCheckFixDetailsRequest& request, const DescribeCheckFixDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckFixDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckFixDetailsOutcomeCallable SasClient::describeCheckFixDetailsCallable(const DescribeCheckFixDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckFixDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeCheckFixDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningDetailOutcome SasClient::describeCheckWarningDetail(const DescribeCheckWarningDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningDetailOutcome(DescribeCheckWarningDetailResult(outcome.result()));
	else
		return DescribeCheckWarningDetailOutcome(outcome.error());
}

void SasClient::describeCheckWarningDetailAsync(const DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningDetailOutcomeCallable SasClient::describeCheckWarningDetailCallable(const DescribeCheckWarningDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningMachinesOutcome SasClient::describeCheckWarningMachines(const DescribeCheckWarningMachinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningMachinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningMachinesOutcome(DescribeCheckWarningMachinesResult(outcome.result()));
	else
		return DescribeCheckWarningMachinesOutcome(outcome.error());
}

void SasClient::describeCheckWarningMachinesAsync(const DescribeCheckWarningMachinesRequest& request, const DescribeCheckWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningMachinesOutcomeCallable SasClient::describeCheckWarningMachinesCallable(const DescribeCheckWarningMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningMachinesOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningSummaryOutcome SasClient::describeCheckWarningSummary(const DescribeCheckWarningSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningSummaryOutcome(DescribeCheckWarningSummaryResult(outcome.result()));
	else
		return DescribeCheckWarningSummaryOutcome(outcome.error());
}

void SasClient::describeCheckWarningSummaryAsync(const DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningSummaryOutcomeCallable SasClient::describeCheckWarningSummaryCallable(const DescribeCheckWarningSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCheckWarningsOutcome SasClient::describeCheckWarnings(const DescribeCheckWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningsOutcome(DescribeCheckWarningsResult(outcome.result()));
	else
		return DescribeCheckWarningsOutcome(outcome.error());
}

void SasClient::describeCheckWarningsAsync(const DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCheckWarningsOutcomeCallable SasClient::describeCheckWarningsCallable(const DescribeCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeClientConfSetupOutcome SasClient::describeClientConfSetup(const DescribeClientConfSetupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientConfSetupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientConfSetupOutcome(DescribeClientConfSetupResult(outcome.result()));
	else
		return DescribeClientConfSetupOutcome(outcome.error());
}

void SasClient::describeClientConfSetupAsync(const DescribeClientConfSetupRequest& request, const DescribeClientConfSetupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientConfSetup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeClientConfSetupOutcomeCallable SasClient::describeClientConfSetupCallable(const DescribeClientConfSetupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientConfSetupOutcome()>>(
			[this, request]()
			{
			return this->describeClientConfSetup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeClientConfStrategyOutcome SasClient::describeClientConfStrategy(const DescribeClientConfStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientConfStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientConfStrategyOutcome(DescribeClientConfStrategyResult(outcome.result()));
	else
		return DescribeClientConfStrategyOutcome(outcome.error());
}

void SasClient::describeClientConfStrategyAsync(const DescribeClientConfStrategyRequest& request, const DescribeClientConfStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientConfStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeClientConfStrategyOutcomeCallable SasClient::describeClientConfStrategyCallable(const DescribeClientConfStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientConfStrategyOutcome()>>(
			[this, request]()
			{
			return this->describeClientConfStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCloudCenterInstancesOutcome SasClient::describeCloudCenterInstances(const DescribeCloudCenterInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudCenterInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudCenterInstancesOutcome(DescribeCloudCenterInstancesResult(outcome.result()));
	else
		return DescribeCloudCenterInstancesOutcome(outcome.error());
}

void SasClient::describeCloudCenterInstancesAsync(const DescribeCloudCenterInstancesRequest& request, const DescribeCloudCenterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudCenterInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCloudCenterInstancesOutcomeCallable SasClient::describeCloudCenterInstancesCallable(const DescribeCloudCenterInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudCenterInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeCloudCenterInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCloudProductFieldStatisticsOutcome SasClient::describeCloudProductFieldStatistics(const DescribeCloudProductFieldStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCloudProductFieldStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCloudProductFieldStatisticsOutcome(DescribeCloudProductFieldStatisticsResult(outcome.result()));
	else
		return DescribeCloudProductFieldStatisticsOutcome(outcome.error());
}

void SasClient::describeCloudProductFieldStatisticsAsync(const DescribeCloudProductFieldStatisticsRequest& request, const DescribeCloudProductFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCloudProductFieldStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCloudProductFieldStatisticsOutcomeCallable SasClient::describeCloudProductFieldStatisticsCallable(const DescribeCloudProductFieldStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCloudProductFieldStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeCloudProductFieldStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeClusterBasicInfoOutcome SasClient::describeClusterBasicInfo(const DescribeClusterBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterBasicInfoOutcome(DescribeClusterBasicInfoResult(outcome.result()));
	else
		return DescribeClusterBasicInfoOutcome(outcome.error());
}

void SasClient::describeClusterBasicInfoAsync(const DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeClusterBasicInfoOutcomeCallable SasClient::describeClusterBasicInfoCallable(const DescribeClusterBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->describeClusterBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeClusterInfoListOutcome SasClient::describeClusterInfoList(const DescribeClusterInfoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterInfoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterInfoListOutcome(DescribeClusterInfoListResult(outcome.result()));
	else
		return DescribeClusterInfoListOutcome(outcome.error());
}

void SasClient::describeClusterInfoListAsync(const DescribeClusterInfoListRequest& request, const DescribeClusterInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterInfoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeClusterInfoListOutcomeCallable SasClient::describeClusterInfoListCallable(const DescribeClusterInfoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterInfoListOutcome()>>(
			[this, request]()
			{
			return this->describeClusterInfoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeClusterNetworkOutcome SasClient::describeClusterNetwork(const DescribeClusterNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterNetworkOutcome(DescribeClusterNetworkResult(outcome.result()));
	else
		return DescribeClusterNetworkOutcome(outcome.error());
}

void SasClient::describeClusterNetworkAsync(const DescribeClusterNetworkRequest& request, const DescribeClusterNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeClusterNetworkOutcomeCallable SasClient::describeClusterNetworkCallable(const DescribeClusterNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterNetworkOutcome()>>(
			[this, request]()
			{
			return this->describeClusterNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeClusterVulStatisticsOutcome SasClient::describeClusterVulStatistics(const DescribeClusterVulStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClusterVulStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClusterVulStatisticsOutcome(DescribeClusterVulStatisticsResult(outcome.result()));
	else
		return DescribeClusterVulStatisticsOutcome(outcome.error());
}

void SasClient::describeClusterVulStatisticsAsync(const DescribeClusterVulStatisticsRequest& request, const DescribeClusterVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClusterVulStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeClusterVulStatisticsOutcomeCallable SasClient::describeClusterVulStatisticsCallable(const DescribeClusterVulStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClusterVulStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeClusterVulStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCommonOverallConfigOutcome SasClient::describeCommonOverallConfig(const DescribeCommonOverallConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommonOverallConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommonOverallConfigOutcome(DescribeCommonOverallConfigResult(outcome.result()));
	else
		return DescribeCommonOverallConfigOutcome(outcome.error());
}

void SasClient::describeCommonOverallConfigAsync(const DescribeCommonOverallConfigRequest& request, const DescribeCommonOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommonOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCommonOverallConfigOutcomeCallable SasClient::describeCommonOverallConfigCallable(const DescribeCommonOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommonOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->describeCommonOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCommonOverallConfigListOutcome SasClient::describeCommonOverallConfigList(const DescribeCommonOverallConfigListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommonOverallConfigListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommonOverallConfigListOutcome(DescribeCommonOverallConfigListResult(outcome.result()));
	else
		return DescribeCommonOverallConfigListOutcome(outcome.error());
}

void SasClient::describeCommonOverallConfigListAsync(const DescribeCommonOverallConfigListRequest& request, const DescribeCommonOverallConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommonOverallConfigList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCommonOverallConfigListOutcomeCallable SasClient::describeCommonOverallConfigListCallable(const DescribeCommonOverallConfigListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommonOverallConfigListOutcome()>>(
			[this, request]()
			{
			return this->describeCommonOverallConfigList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCommonTargetConfigOutcome SasClient::describeCommonTargetConfig(const DescribeCommonTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommonTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommonTargetConfigOutcome(DescribeCommonTargetConfigResult(outcome.result()));
	else
		return DescribeCommonTargetConfigOutcome(outcome.error());
}

void SasClient::describeCommonTargetConfigAsync(const DescribeCommonTargetConfigRequest& request, const DescribeCommonTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommonTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCommonTargetConfigOutcomeCallable SasClient::describeCommonTargetConfigCallable(const DescribeCommonTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommonTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->describeCommonTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCommonTargetResultListOutcome SasClient::describeCommonTargetResultList(const DescribeCommonTargetResultListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommonTargetResultListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommonTargetResultListOutcome(DescribeCommonTargetResultListResult(outcome.result()));
	else
		return DescribeCommonTargetResultListOutcome(outcome.error());
}

void SasClient::describeCommonTargetResultListAsync(const DescribeCommonTargetResultListRequest& request, const DescribeCommonTargetResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommonTargetResultList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCommonTargetResultListOutcomeCallable SasClient::describeCommonTargetResultListCallable(const DescribeCommonTargetResultListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommonTargetResultListOutcome()>>(
			[this, request]()
			{
			return this->describeCommonTargetResultList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeConcernNecessityOutcome SasClient::describeConcernNecessity(const DescribeConcernNecessityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConcernNecessityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConcernNecessityOutcome(DescribeConcernNecessityResult(outcome.result()));
	else
		return DescribeConcernNecessityOutcome(outcome.error());
}

void SasClient::describeConcernNecessityAsync(const DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConcernNecessity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeConcernNecessityOutcomeCallable SasClient::describeConcernNecessityCallable(const DescribeConcernNecessityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConcernNecessityOutcome()>>(
			[this, request]()
			{
			return this->describeConcernNecessity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeContainerCriteriaOutcome SasClient::describeContainerCriteria(const DescribeContainerCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContainerCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContainerCriteriaOutcome(DescribeContainerCriteriaResult(outcome.result()));
	else
		return DescribeContainerCriteriaOutcome(outcome.error());
}

void SasClient::describeContainerCriteriaAsync(const DescribeContainerCriteriaRequest& request, const DescribeContainerCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContainerCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeContainerCriteriaOutcomeCallable SasClient::describeContainerCriteriaCallable(const DescribeContainerCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContainerCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeContainerCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeContainerInstancesOutcome SasClient::describeContainerInstances(const DescribeContainerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContainerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContainerInstancesOutcome(DescribeContainerInstancesResult(outcome.result()));
	else
		return DescribeContainerInstancesOutcome(outcome.error());
}

void SasClient::describeContainerInstancesAsync(const DescribeContainerInstancesRequest& request, const DescribeContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContainerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeContainerInstancesOutcomeCallable SasClient::describeContainerInstancesCallable(const DescribeContainerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContainerInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeContainerInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeContainerStatisticsOutcome SasClient::describeContainerStatistics(const DescribeContainerStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContainerStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContainerStatisticsOutcome(DescribeContainerStatisticsResult(outcome.result()));
	else
		return DescribeContainerStatisticsOutcome(outcome.error());
}

void SasClient::describeContainerStatisticsAsync(const DescribeContainerStatisticsRequest& request, const DescribeContainerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContainerStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeContainerStatisticsOutcomeCallable SasClient::describeContainerStatisticsCallable(const DescribeContainerStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContainerStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeContainerStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeContainerTagsOutcome SasClient::describeContainerTags(const DescribeContainerTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeContainerTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeContainerTagsOutcome(DescribeContainerTagsResult(outcome.result()));
	else
		return DescribeContainerTagsOutcome(outcome.error());
}

void SasClient::describeContainerTagsAsync(const DescribeContainerTagsRequest& request, const DescribeContainerTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeContainerTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeContainerTagsOutcomeCallable SasClient::describeContainerTagsCallable(const DescribeContainerTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeContainerTagsOutcome()>>(
			[this, request]()
			{
			return this->describeContainerTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCountNotScannedImageOutcome SasClient::describeCountNotScannedImage(const DescribeCountNotScannedImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCountNotScannedImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCountNotScannedImageOutcome(DescribeCountNotScannedImageResult(outcome.result()));
	else
		return DescribeCountNotScannedImageOutcome(outcome.error());
}

void SasClient::describeCountNotScannedImageAsync(const DescribeCountNotScannedImageRequest& request, const DescribeCountNotScannedImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCountNotScannedImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCountNotScannedImageOutcomeCallable SasClient::describeCountNotScannedImageCallable(const DescribeCountNotScannedImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCountNotScannedImageOutcome()>>(
			[this, request]()
			{
			return this->describeCountNotScannedImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCountScannedImageOutcome SasClient::describeCountScannedImage(const DescribeCountScannedImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCountScannedImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCountScannedImageOutcome(DescribeCountScannedImageResult(outcome.result()));
	else
		return DescribeCountScannedImageOutcome(outcome.error());
}

void SasClient::describeCountScannedImageAsync(const DescribeCountScannedImageRequest& request, const DescribeCountScannedImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCountScannedImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCountScannedImageOutcomeCallable SasClient::describeCountScannedImageCallable(const DescribeCountScannedImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCountScannedImageOutcome()>>(
			[this, request]()
			{
			return this->describeCountScannedImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCriteriaOutcome SasClient::describeCriteria(const DescribeCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCriteriaOutcome(DescribeCriteriaResult(outcome.result()));
	else
		return DescribeCriteriaOutcome(outcome.error());
}

void SasClient::describeCriteriaAsync(const DescribeCriteriaRequest& request, const DescribeCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCriteriaOutcomeCallable SasClient::describeCriteriaCallable(const DescribeCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCustomBlockRecordsOutcome SasClient::describeCustomBlockRecords(const DescribeCustomBlockRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomBlockRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomBlockRecordsOutcome(DescribeCustomBlockRecordsResult(outcome.result()));
	else
		return DescribeCustomBlockRecordsOutcome(outcome.error());
}

void SasClient::describeCustomBlockRecordsAsync(const DescribeCustomBlockRecordsRequest& request, const DescribeCustomBlockRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomBlockRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCustomBlockRecordsOutcomeCallable SasClient::describeCustomBlockRecordsCallable(const DescribeCustomBlockRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomBlockRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeCustomBlockRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeCycleTaskListOutcome SasClient::describeCycleTaskList(const DescribeCycleTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCycleTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCycleTaskListOutcome(DescribeCycleTaskListResult(outcome.result()));
	else
		return DescribeCycleTaskListOutcome(outcome.error());
}

void SasClient::describeCycleTaskListAsync(const DescribeCycleTaskListRequest& request, const DescribeCycleTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCycleTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeCycleTaskListOutcomeCallable SasClient::describeCycleTaskListCallable(const DescribeCycleTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCycleTaskListOutcome()>>(
			[this, request]()
			{
			return this->describeCycleTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDingTalkOutcome SasClient::describeDingTalk(const DescribeDingTalkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDingTalkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDingTalkOutcome(DescribeDingTalkResult(outcome.result()));
	else
		return DescribeDingTalkOutcome(outcome.error());
}

void SasClient::describeDingTalkAsync(const DescribeDingTalkRequest& request, const DescribeDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDingTalk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDingTalkOutcomeCallable SasClient::describeDingTalkCallable(const DescribeDingTalkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDingTalkOutcome()>>(
			[this, request]()
			{
			return this->describeDingTalk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDomainCountOutcome SasClient::describeDomainCount(const DescribeDomainCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainCountOutcome(DescribeDomainCountResult(outcome.result()));
	else
		return DescribeDomainCountOutcome(outcome.error());
}

void SasClient::describeDomainCountAsync(const DescribeDomainCountRequest& request, const DescribeDomainCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDomainCountOutcomeCallable SasClient::describeDomainCountCallable(const DescribeDomainCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainCountOutcome()>>(
			[this, request]()
			{
			return this->describeDomainCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDomainDetailOutcome SasClient::describeDomainDetail(const DescribeDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainDetailOutcome(DescribeDomainDetailResult(outcome.result()));
	else
		return DescribeDomainDetailOutcome(outcome.error());
}

void SasClient::describeDomainDetailAsync(const DescribeDomainDetailRequest& request, const DescribeDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDomainDetailOutcomeCallable SasClient::describeDomainDetailCallable(const DescribeDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeDomainListOutcome SasClient::describeDomainList(const DescribeDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainListOutcome(DescribeDomainListResult(outcome.result()));
	else
		return DescribeDomainListOutcome(outcome.error());
}

void SasClient::describeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeDomainListOutcomeCallable SasClient::describeDomainListCallable(const DescribeDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainListOutcome()>>(
			[this, request]()
			{
			return this->describeDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeEmgUserAgreementOutcome SasClient::describeEmgUserAgreement(const DescribeEmgUserAgreementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmgUserAgreementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmgUserAgreementOutcome(DescribeEmgUserAgreementResult(outcome.result()));
	else
		return DescribeEmgUserAgreementOutcome(outcome.error());
}

void SasClient::describeEmgUserAgreementAsync(const DescribeEmgUserAgreementRequest& request, const DescribeEmgUserAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmgUserAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeEmgUserAgreementOutcomeCallable SasClient::describeEmgUserAgreementCallable(const DescribeEmgUserAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmgUserAgreementOutcome()>>(
			[this, request]()
			{
			return this->describeEmgUserAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeEmgVulItemOutcome SasClient::describeEmgVulItem(const DescribeEmgVulItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmgVulItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmgVulItemOutcome(DescribeEmgVulItemResult(outcome.result()));
	else
		return DescribeEmgVulItemOutcome(outcome.error());
}

void SasClient::describeEmgVulItemAsync(const DescribeEmgVulItemRequest& request, const DescribeEmgVulItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmgVulItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeEmgVulItemOutcomeCallable SasClient::describeEmgVulItemCallable(const DescribeEmgVulItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmgVulItemOutcome()>>(
			[this, request]()
			{
			return this->describeEmgVulItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeEventLevelCountOutcome SasClient::describeEventLevelCount(const DescribeEventLevelCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventLevelCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventLevelCountOutcome(DescribeEventLevelCountResult(outcome.result()));
	else
		return DescribeEventLevelCountOutcome(outcome.error());
}

void SasClient::describeEventLevelCountAsync(const DescribeEventLevelCountRequest& request, const DescribeEventLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventLevelCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeEventLevelCountOutcomeCallable SasClient::describeEventLevelCountCallable(const DescribeEventLevelCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventLevelCountOutcome()>>(
			[this, request]()
			{
			return this->describeEventLevelCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeEventOnStageOutcome SasClient::describeEventOnStage(const DescribeEventOnStageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventOnStageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventOnStageOutcome(DescribeEventOnStageResult(outcome.result()));
	else
		return DescribeEventOnStageOutcome(outcome.error());
}

void SasClient::describeEventOnStageAsync(const DescribeEventOnStageRequest& request, const DescribeEventOnStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventOnStage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeEventOnStageOutcomeCallable SasClient::describeEventOnStageCallable(const DescribeEventOnStageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventOnStageOutcome()>>(
			[this, request]()
			{
			return this->describeEventOnStage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExcludeSystemPathOutcome SasClient::describeExcludeSystemPath(const DescribeExcludeSystemPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExcludeSystemPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExcludeSystemPathOutcome(DescribeExcludeSystemPathResult(outcome.result()));
	else
		return DescribeExcludeSystemPathOutcome(outcome.error());
}

void SasClient::describeExcludeSystemPathAsync(const DescribeExcludeSystemPathRequest& request, const DescribeExcludeSystemPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExcludeSystemPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExcludeSystemPathOutcomeCallable SasClient::describeExcludeSystemPathCallable(const DescribeExcludeSystemPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExcludeSystemPathOutcome()>>(
			[this, request]()
			{
			return this->describeExcludeSystemPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExportInfoOutcome SasClient::describeExportInfo(const DescribeExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExportInfoOutcome(DescribeExportInfoResult(outcome.result()));
	else
		return DescribeExportInfoOutcome(outcome.error());
}

void SasClient::describeExportInfoAsync(const DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExportInfoOutcomeCallable SasClient::describeExportInfoCallable(const DescribeExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExposedCheckWarningOutcome SasClient::describeExposedCheckWarning(const DescribeExposedCheckWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposedCheckWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposedCheckWarningOutcome(DescribeExposedCheckWarningResult(outcome.result()));
	else
		return DescribeExposedCheckWarningOutcome(outcome.error());
}

void SasClient::describeExposedCheckWarningAsync(const DescribeExposedCheckWarningRequest& request, const DescribeExposedCheckWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposedCheckWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExposedCheckWarningOutcomeCallable SasClient::describeExposedCheckWarningCallable(const DescribeExposedCheckWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposedCheckWarningOutcome()>>(
			[this, request]()
			{
			return this->describeExposedCheckWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExposedInstanceCriteriaOutcome SasClient::describeExposedInstanceCriteria(const DescribeExposedInstanceCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposedInstanceCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposedInstanceCriteriaOutcome(DescribeExposedInstanceCriteriaResult(outcome.result()));
	else
		return DescribeExposedInstanceCriteriaOutcome(outcome.error());
}

void SasClient::describeExposedInstanceCriteriaAsync(const DescribeExposedInstanceCriteriaRequest& request, const DescribeExposedInstanceCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposedInstanceCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExposedInstanceCriteriaOutcomeCallable SasClient::describeExposedInstanceCriteriaCallable(const DescribeExposedInstanceCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposedInstanceCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeExposedInstanceCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExposedInstanceDetailOutcome SasClient::describeExposedInstanceDetail(const DescribeExposedInstanceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposedInstanceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposedInstanceDetailOutcome(DescribeExposedInstanceDetailResult(outcome.result()));
	else
		return DescribeExposedInstanceDetailOutcome(outcome.error());
}

void SasClient::describeExposedInstanceDetailAsync(const DescribeExposedInstanceDetailRequest& request, const DescribeExposedInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposedInstanceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExposedInstanceDetailOutcomeCallable SasClient::describeExposedInstanceDetailCallable(const DescribeExposedInstanceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposedInstanceDetailOutcome()>>(
			[this, request]()
			{
			return this->describeExposedInstanceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExposedInstanceListOutcome SasClient::describeExposedInstanceList(const DescribeExposedInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposedInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposedInstanceListOutcome(DescribeExposedInstanceListResult(outcome.result()));
	else
		return DescribeExposedInstanceListOutcome(outcome.error());
}

void SasClient::describeExposedInstanceListAsync(const DescribeExposedInstanceListRequest& request, const DescribeExposedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposedInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExposedInstanceListOutcomeCallable SasClient::describeExposedInstanceListCallable(const DescribeExposedInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposedInstanceListOutcome()>>(
			[this, request]()
			{
			return this->describeExposedInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExposedStatisticsOutcome SasClient::describeExposedStatistics(const DescribeExposedStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposedStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposedStatisticsOutcome(DescribeExposedStatisticsResult(outcome.result()));
	else
		return DescribeExposedStatisticsOutcome(outcome.error());
}

void SasClient::describeExposedStatisticsAsync(const DescribeExposedStatisticsRequest& request, const DescribeExposedStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposedStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExposedStatisticsOutcomeCallable SasClient::describeExposedStatisticsCallable(const DescribeExposedStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposedStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeExposedStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeExposedStatisticsDetailOutcome SasClient::describeExposedStatisticsDetail(const DescribeExposedStatisticsDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExposedStatisticsDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExposedStatisticsDetailOutcome(DescribeExposedStatisticsDetailResult(outcome.result()));
	else
		return DescribeExposedStatisticsDetailOutcome(outcome.error());
}

void SasClient::describeExposedStatisticsDetailAsync(const DescribeExposedStatisticsDetailRequest& request, const DescribeExposedStatisticsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExposedStatisticsDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeExposedStatisticsDetailOutcomeCallable SasClient::describeExposedStatisticsDetailCallable(const DescribeExposedStatisticsDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExposedStatisticsDetailOutcome()>>(
			[this, request]()
			{
			return this->describeExposedStatisticsDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeFieldStatisticsOutcome SasClient::describeFieldStatistics(const DescribeFieldStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFieldStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFieldStatisticsOutcome(DescribeFieldStatisticsResult(outcome.result()));
	else
		return DescribeFieldStatisticsOutcome(outcome.error());
}

void SasClient::describeFieldStatisticsAsync(const DescribeFieldStatisticsRequest& request, const DescribeFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFieldStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeFieldStatisticsOutcomeCallable SasClient::describeFieldStatisticsCallable(const DescribeFieldStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFieldStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeFieldStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeFrontVulPatchListOutcome SasClient::describeFrontVulPatchList(const DescribeFrontVulPatchListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFrontVulPatchListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFrontVulPatchListOutcome(DescribeFrontVulPatchListResult(outcome.result()));
	else
		return DescribeFrontVulPatchListOutcome(outcome.error());
}

void SasClient::describeFrontVulPatchListAsync(const DescribeFrontVulPatchListRequest& request, const DescribeFrontVulPatchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFrontVulPatchList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeFrontVulPatchListOutcomeCallable SasClient::describeFrontVulPatchListCallable(const DescribeFrontVulPatchListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFrontVulPatchListOutcome()>>(
			[this, request]()
			{
			return this->describeFrontVulPatchList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupStructOutcome SasClient::describeGroupStruct(const DescribeGroupStructRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupStructOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupStructOutcome(DescribeGroupStructResult(outcome.result()));
	else
		return DescribeGroupStructOutcome(outcome.error());
}

void SasClient::describeGroupStructAsync(const DescribeGroupStructRequest& request, const DescribeGroupStructAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupStruct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupStructOutcomeCallable SasClient::describeGroupStructCallable(const DescribeGroupStructRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupStructOutcome()>>(
			[this, request]()
			{
			return this->describeGroupStruct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedContainerInstancesOutcome SasClient::describeGroupedContainerInstances(const DescribeGroupedContainerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedContainerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedContainerInstancesOutcome(DescribeGroupedContainerInstancesResult(outcome.result()));
	else
		return DescribeGroupedContainerInstancesOutcome(outcome.error());
}

void SasClient::describeGroupedContainerInstancesAsync(const DescribeGroupedContainerInstancesRequest& request, const DescribeGroupedContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedContainerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedContainerInstancesOutcomeCallable SasClient::describeGroupedContainerInstancesCallable(const DescribeGroupedContainerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedContainerInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedContainerInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedInstancesOutcome SasClient::describeGroupedInstances(const DescribeGroupedInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedInstancesOutcome(DescribeGroupedInstancesResult(outcome.result()));
	else
		return DescribeGroupedInstancesOutcome(outcome.error());
}

void SasClient::describeGroupedInstancesAsync(const DescribeGroupedInstancesRequest& request, const DescribeGroupedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedInstancesOutcomeCallable SasClient::describeGroupedInstancesCallable(const DescribeGroupedInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedMaliciousFilesOutcome SasClient::describeGroupedMaliciousFiles(const DescribeGroupedMaliciousFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedMaliciousFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedMaliciousFilesOutcome(DescribeGroupedMaliciousFilesResult(outcome.result()));
	else
		return DescribeGroupedMaliciousFilesOutcome(outcome.error());
}

void SasClient::describeGroupedMaliciousFilesAsync(const DescribeGroupedMaliciousFilesRequest& request, const DescribeGroupedMaliciousFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedMaliciousFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedMaliciousFilesOutcomeCallable SasClient::describeGroupedMaliciousFilesCallable(const DescribeGroupedMaliciousFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedMaliciousFilesOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedMaliciousFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedTagsOutcome SasClient::describeGroupedTags(const DescribeGroupedTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedTagsOutcome(DescribeGroupedTagsResult(outcome.result()));
	else
		return DescribeGroupedTagsOutcome(outcome.error());
}

void SasClient::describeGroupedTagsAsync(const DescribeGroupedTagsRequest& request, const DescribeGroupedTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedTagsOutcomeCallable SasClient::describeGroupedTagsCallable(const DescribeGroupedTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedTagsOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeGroupedVulOutcome SasClient::describeGroupedVul(const DescribeGroupedVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupedVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupedVulOutcome(DescribeGroupedVulResult(outcome.result()));
	else
		return DescribeGroupedVulOutcome(outcome.error());
}

void SasClient::describeGroupedVulAsync(const DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeGroupedVulOutcomeCallable SasClient::describeGroupedVulCallable(const DescribeGroupedVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedVulOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeHcExportInfoOutcome SasClient::describeHcExportInfo(const DescribeHcExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHcExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHcExportInfoOutcome(DescribeHcExportInfoResult(outcome.result()));
	else
		return DescribeHcExportInfoOutcome(outcome.error());
}

void SasClient::describeHcExportInfoAsync(const DescribeHcExportInfoRequest& request, const DescribeHcExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHcExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeHcExportInfoOutcomeCallable SasClient::describeHcExportInfoCallable(const DescribeHcExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHcExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeHcExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeHoneyPotAuthOutcome SasClient::describeHoneyPotAuth(const DescribeHoneyPotAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHoneyPotAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHoneyPotAuthOutcome(DescribeHoneyPotAuthResult(outcome.result()));
	else
		return DescribeHoneyPotAuthOutcome(outcome.error());
}

void SasClient::describeHoneyPotAuthAsync(const DescribeHoneyPotAuthRequest& request, const DescribeHoneyPotAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHoneyPotAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeHoneyPotAuthOutcomeCallable SasClient::describeHoneyPotAuthCallable(const DescribeHoneyPotAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHoneyPotAuthOutcome()>>(
			[this, request]()
			{
			return this->describeHoneyPotAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeHoneyPotSuspStatisticsOutcome SasClient::describeHoneyPotSuspStatistics(const DescribeHoneyPotSuspStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHoneyPotSuspStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHoneyPotSuspStatisticsOutcome(DescribeHoneyPotSuspStatisticsResult(outcome.result()));
	else
		return DescribeHoneyPotSuspStatisticsOutcome(outcome.error());
}

void SasClient::describeHoneyPotSuspStatisticsAsync(const DescribeHoneyPotSuspStatisticsRequest& request, const DescribeHoneyPotSuspStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHoneyPotSuspStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeHoneyPotSuspStatisticsOutcomeCallable SasClient::describeHoneyPotSuspStatisticsCallable(const DescribeHoneyPotSuspStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHoneyPotSuspStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeHoneyPotSuspStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageOutcome SasClient::describeImage(const DescribeImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageOutcome(DescribeImageResult(outcome.result()));
	else
		return DescribeImageOutcome(outcome.error());
}

void SasClient::describeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageOutcomeCallable SasClient::describeImageCallable(const DescribeImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageOutcome()>>(
			[this, request]()
			{
			return this->describeImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageBaselineCheckResultOutcome SasClient::describeImageBaselineCheckResult(const DescribeImageBaselineCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageBaselineCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageBaselineCheckResultOutcome(DescribeImageBaselineCheckResultResult(outcome.result()));
	else
		return DescribeImageBaselineCheckResultOutcome(outcome.error());
}

void SasClient::describeImageBaselineCheckResultAsync(const DescribeImageBaselineCheckResultRequest& request, const DescribeImageBaselineCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageBaselineCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageBaselineCheckResultOutcomeCallable SasClient::describeImageBaselineCheckResultCallable(const DescribeImageBaselineCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageBaselineCheckResultOutcome()>>(
			[this, request]()
			{
			return this->describeImageBaselineCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageBaselineCheckSummaryOutcome SasClient::describeImageBaselineCheckSummary(const DescribeImageBaselineCheckSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageBaselineCheckSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageBaselineCheckSummaryOutcome(DescribeImageBaselineCheckSummaryResult(outcome.result()));
	else
		return DescribeImageBaselineCheckSummaryOutcome(outcome.error());
}

void SasClient::describeImageBaselineCheckSummaryAsync(const DescribeImageBaselineCheckSummaryRequest& request, const DescribeImageBaselineCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageBaselineCheckSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageBaselineCheckSummaryOutcomeCallable SasClient::describeImageBaselineCheckSummaryCallable(const DescribeImageBaselineCheckSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageBaselineCheckSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeImageBaselineCheckSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageBaselineDetailOutcome SasClient::describeImageBaselineDetail(const DescribeImageBaselineDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageBaselineDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageBaselineDetailOutcome(DescribeImageBaselineDetailResult(outcome.result()));
	else
		return DescribeImageBaselineDetailOutcome(outcome.error());
}

void SasClient::describeImageBaselineDetailAsync(const DescribeImageBaselineDetailRequest& request, const DescribeImageBaselineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageBaselineDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageBaselineDetailOutcomeCallable SasClient::describeImageBaselineDetailCallable(const DescribeImageBaselineDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageBaselineDetailOutcome()>>(
			[this, request]()
			{
			return this->describeImageBaselineDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageBaselineItemListOutcome SasClient::describeImageBaselineItemList(const DescribeImageBaselineItemListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageBaselineItemListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageBaselineItemListOutcome(DescribeImageBaselineItemListResult(outcome.result()));
	else
		return DescribeImageBaselineItemListOutcome(outcome.error());
}

void SasClient::describeImageBaselineItemListAsync(const DescribeImageBaselineItemListRequest& request, const DescribeImageBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageBaselineItemList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageBaselineItemListOutcomeCallable SasClient::describeImageBaselineItemListCallable(const DescribeImageBaselineItemListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageBaselineItemListOutcome()>>(
			[this, request]()
			{
			return this->describeImageBaselineItemList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageBaselineStrategyOutcome SasClient::describeImageBaselineStrategy(const DescribeImageBaselineStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageBaselineStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageBaselineStrategyOutcome(DescribeImageBaselineStrategyResult(outcome.result()));
	else
		return DescribeImageBaselineStrategyOutcome(outcome.error());
}

void SasClient::describeImageBaselineStrategyAsync(const DescribeImageBaselineStrategyRequest& request, const DescribeImageBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageBaselineStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageBaselineStrategyOutcomeCallable SasClient::describeImageBaselineStrategyCallable(const DescribeImageBaselineStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageBaselineStrategyOutcome()>>(
			[this, request]()
			{
			return this->describeImageBaselineStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageCriteriaOutcome SasClient::describeImageCriteria(const DescribeImageCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageCriteriaOutcome(DescribeImageCriteriaResult(outcome.result()));
	else
		return DescribeImageCriteriaOutcome(outcome.error());
}

void SasClient::describeImageCriteriaAsync(const DescribeImageCriteriaRequest& request, const DescribeImageCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageCriteriaOutcomeCallable SasClient::describeImageCriteriaCallable(const DescribeImageCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeImageCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageFixTaskOutcome SasClient::describeImageFixTask(const DescribeImageFixTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageFixTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageFixTaskOutcome(DescribeImageFixTaskResult(outcome.result()));
	else
		return DescribeImageFixTaskOutcome(outcome.error());
}

void SasClient::describeImageFixTaskAsync(const DescribeImageFixTaskRequest& request, const DescribeImageFixTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageFixTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageFixTaskOutcomeCallable SasClient::describeImageFixTaskCallable(const DescribeImageFixTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageFixTaskOutcome()>>(
			[this, request]()
			{
			return this->describeImageFixTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageGroupedVulListOutcome SasClient::describeImageGroupedVulList(const DescribeImageGroupedVulListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageGroupedVulListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageGroupedVulListOutcome(DescribeImageGroupedVulListResult(outcome.result()));
	else
		return DescribeImageGroupedVulListOutcome(outcome.error());
}

void SasClient::describeImageGroupedVulListAsync(const DescribeImageGroupedVulListRequest& request, const DescribeImageGroupedVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageGroupedVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageGroupedVulListOutcomeCallable SasClient::describeImageGroupedVulListCallable(const DescribeImageGroupedVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageGroupedVulListOutcome()>>(
			[this, request]()
			{
			return this->describeImageGroupedVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageInfoListOutcome SasClient::describeImageInfoList(const DescribeImageInfoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageInfoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageInfoListOutcome(DescribeImageInfoListResult(outcome.result()));
	else
		return DescribeImageInfoListOutcome(outcome.error());
}

void SasClient::describeImageInfoListAsync(const DescribeImageInfoListRequest& request, const DescribeImageInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageInfoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageInfoListOutcomeCallable SasClient::describeImageInfoListCallable(const DescribeImageInfoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageInfoListOutcome()>>(
			[this, request]()
			{
			return this->describeImageInfoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageInstancesOutcome SasClient::describeImageInstances(const DescribeImageInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageInstancesOutcome(DescribeImageInstancesResult(outcome.result()));
	else
		return DescribeImageInstancesOutcome(outcome.error());
}

void SasClient::describeImageInstancesAsync(const DescribeImageInstancesRequest& request, const DescribeImageInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageInstancesOutcomeCallable SasClient::describeImageInstancesCallable(const DescribeImageInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeImageInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageLatestScanTaskOutcome SasClient::describeImageLatestScanTask(const DescribeImageLatestScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageLatestScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageLatestScanTaskOutcome(DescribeImageLatestScanTaskResult(outcome.result()));
	else
		return DescribeImageLatestScanTaskOutcome(outcome.error());
}

void SasClient::describeImageLatestScanTaskAsync(const DescribeImageLatestScanTaskRequest& request, const DescribeImageLatestScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageLatestScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageLatestScanTaskOutcomeCallable SasClient::describeImageLatestScanTaskCallable(const DescribeImageLatestScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageLatestScanTaskOutcome()>>(
			[this, request]()
			{
			return this->describeImageLatestScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageListBySensitiveFileOutcome SasClient::describeImageListBySensitiveFile(const DescribeImageListBySensitiveFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageListBySensitiveFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageListBySensitiveFileOutcome(DescribeImageListBySensitiveFileResult(outcome.result()));
	else
		return DescribeImageListBySensitiveFileOutcome(outcome.error());
}

void SasClient::describeImageListBySensitiveFileAsync(const DescribeImageListBySensitiveFileRequest& request, const DescribeImageListBySensitiveFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageListBySensitiveFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageListBySensitiveFileOutcomeCallable SasClient::describeImageListBySensitiveFileCallable(const DescribeImageListBySensitiveFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageListBySensitiveFileOutcome()>>(
			[this, request]()
			{
			return this->describeImageListBySensitiveFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageListWithBaselineNameOutcome SasClient::describeImageListWithBaselineName(const DescribeImageListWithBaselineNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageListWithBaselineNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageListWithBaselineNameOutcome(DescribeImageListWithBaselineNameResult(outcome.result()));
	else
		return DescribeImageListWithBaselineNameOutcome(outcome.error());
}

void SasClient::describeImageListWithBaselineNameAsync(const DescribeImageListWithBaselineNameRequest& request, const DescribeImageListWithBaselineNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageListWithBaselineName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageListWithBaselineNameOutcomeCallable SasClient::describeImageListWithBaselineNameCallable(const DescribeImageListWithBaselineNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageListWithBaselineNameOutcome()>>(
			[this, request]()
			{
			return this->describeImageListWithBaselineName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageRepoCriteriaOutcome SasClient::describeImageRepoCriteria(const DescribeImageRepoCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageRepoCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageRepoCriteriaOutcome(DescribeImageRepoCriteriaResult(outcome.result()));
	else
		return DescribeImageRepoCriteriaOutcome(outcome.error());
}

void SasClient::describeImageRepoCriteriaAsync(const DescribeImageRepoCriteriaRequest& request, const DescribeImageRepoCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageRepoCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageRepoCriteriaOutcomeCallable SasClient::describeImageRepoCriteriaCallable(const DescribeImageRepoCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageRepoCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeImageRepoCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageRepoDetailListOutcome SasClient::describeImageRepoDetailList(const DescribeImageRepoDetailListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageRepoDetailListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageRepoDetailListOutcome(DescribeImageRepoDetailListResult(outcome.result()));
	else
		return DescribeImageRepoDetailListOutcome(outcome.error());
}

void SasClient::describeImageRepoDetailListAsync(const DescribeImageRepoDetailListRequest& request, const DescribeImageRepoDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageRepoDetailList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageRepoDetailListOutcomeCallable SasClient::describeImageRepoDetailListCallable(const DescribeImageRepoDetailListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageRepoDetailListOutcome()>>(
			[this, request]()
			{
			return this->describeImageRepoDetailList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageRepoListOutcome SasClient::describeImageRepoList(const DescribeImageRepoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageRepoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageRepoListOutcome(DescribeImageRepoListResult(outcome.result()));
	else
		return DescribeImageRepoListOutcome(outcome.error());
}

void SasClient::describeImageRepoListAsync(const DescribeImageRepoListRequest& request, const DescribeImageRepoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageRepoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageRepoListOutcomeCallable SasClient::describeImageRepoListCallable(const DescribeImageRepoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageRepoListOutcome()>>(
			[this, request]()
			{
			return this->describeImageRepoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageScanAuthCountOutcome SasClient::describeImageScanAuthCount(const DescribeImageScanAuthCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageScanAuthCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageScanAuthCountOutcome(DescribeImageScanAuthCountResult(outcome.result()));
	else
		return DescribeImageScanAuthCountOutcome(outcome.error());
}

void SasClient::describeImageScanAuthCountAsync(const DescribeImageScanAuthCountRequest& request, const DescribeImageScanAuthCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageScanAuthCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageScanAuthCountOutcomeCallable SasClient::describeImageScanAuthCountCallable(const DescribeImageScanAuthCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageScanAuthCountOutcome()>>(
			[this, request]()
			{
			return this->describeImageScanAuthCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageScanAuthorizationOutcome SasClient::describeImageScanAuthorization(const DescribeImageScanAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageScanAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageScanAuthorizationOutcome(DescribeImageScanAuthorizationResult(outcome.result()));
	else
		return DescribeImageScanAuthorizationOutcome(outcome.error());
}

void SasClient::describeImageScanAuthorizationAsync(const DescribeImageScanAuthorizationRequest& request, const DescribeImageScanAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageScanAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageScanAuthorizationOutcomeCallable SasClient::describeImageScanAuthorizationCallable(const DescribeImageScanAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageScanAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->describeImageScanAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageSensitiveFileByKeyOutcome SasClient::describeImageSensitiveFileByKey(const DescribeImageSensitiveFileByKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageSensitiveFileByKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageSensitiveFileByKeyOutcome(DescribeImageSensitiveFileByKeyResult(outcome.result()));
	else
		return DescribeImageSensitiveFileByKeyOutcome(outcome.error());
}

void SasClient::describeImageSensitiveFileByKeyAsync(const DescribeImageSensitiveFileByKeyRequest& request, const DescribeImageSensitiveFileByKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageSensitiveFileByKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageSensitiveFileByKeyOutcomeCallable SasClient::describeImageSensitiveFileByKeyCallable(const DescribeImageSensitiveFileByKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageSensitiveFileByKeyOutcome()>>(
			[this, request]()
			{
			return this->describeImageSensitiveFileByKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageSensitiveFileListOutcome SasClient::describeImageSensitiveFileList(const DescribeImageSensitiveFileListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageSensitiveFileListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageSensitiveFileListOutcome(DescribeImageSensitiveFileListResult(outcome.result()));
	else
		return DescribeImageSensitiveFileListOutcome(outcome.error());
}

void SasClient::describeImageSensitiveFileListAsync(const DescribeImageSensitiveFileListRequest& request, const DescribeImageSensitiveFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageSensitiveFileList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageSensitiveFileListOutcomeCallable SasClient::describeImageSensitiveFileListCallable(const DescribeImageSensitiveFileListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageSensitiveFileListOutcome()>>(
			[this, request]()
			{
			return this->describeImageSensitiveFileList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageStatisticsOutcome SasClient::describeImageStatistics(const DescribeImageStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageStatisticsOutcome(DescribeImageStatisticsResult(outcome.result()));
	else
		return DescribeImageStatisticsOutcome(outcome.error());
}

void SasClient::describeImageStatisticsAsync(const DescribeImageStatisticsRequest& request, const DescribeImageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageStatisticsOutcomeCallable SasClient::describeImageStatisticsCallable(const DescribeImageStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeImageStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageVulListOutcome SasClient::describeImageVulList(const DescribeImageVulListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageVulListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageVulListOutcome(DescribeImageVulListResult(outcome.result()));
	else
		return DescribeImageVulListOutcome(outcome.error());
}

void SasClient::describeImageVulListAsync(const DescribeImageVulListRequest& request, const DescribeImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageVulListOutcomeCallable SasClient::describeImageVulListCallable(const DescribeImageVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageVulListOutcome()>>(
			[this, request]()
			{
			return this->describeImageVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeImageVulWhiteListOutcome SasClient::describeImageVulWhiteList(const DescribeImageVulWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeImageVulWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeImageVulWhiteListOutcome(DescribeImageVulWhiteListResult(outcome.result()));
	else
		return DescribeImageVulWhiteListOutcome(outcome.error());
}

void SasClient::describeImageVulWhiteListAsync(const DescribeImageVulWhiteListRequest& request, const DescribeImageVulWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeImageVulWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeImageVulWhiteListOutcomeCallable SasClient::describeImageVulWhiteListCallable(const DescribeImageVulWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeImageVulWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeImageVulWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstallCaptchaOutcome SasClient::describeInstallCaptcha(const DescribeInstallCaptchaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstallCaptchaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstallCaptchaOutcome(DescribeInstallCaptchaResult(outcome.result()));
	else
		return DescribeInstallCaptchaOutcome(outcome.error());
}

void SasClient::describeInstallCaptchaAsync(const DescribeInstallCaptchaRequest& request, const DescribeInstallCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstallCaptcha(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstallCaptchaOutcomeCallable SasClient::describeInstallCaptchaCallable(const DescribeInstallCaptchaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstallCaptchaOutcome()>>(
			[this, request]()
			{
			return this->describeInstallCaptcha(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstallCodeOutcome SasClient::describeInstallCode(const DescribeInstallCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstallCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstallCodeOutcome(DescribeInstallCodeResult(outcome.result()));
	else
		return DescribeInstallCodeOutcome(outcome.error());
}

void SasClient::describeInstallCodeAsync(const DescribeInstallCodeRequest& request, const DescribeInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstallCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstallCodeOutcomeCallable SasClient::describeInstallCodeCallable(const DescribeInstallCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstallCodeOutcome()>>(
			[this, request]()
			{
			return this->describeInstallCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstallCodesOutcome SasClient::describeInstallCodes(const DescribeInstallCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstallCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstallCodesOutcome(DescribeInstallCodesResult(outcome.result()));
	else
		return DescribeInstallCodesOutcome(outcome.error());
}

void SasClient::describeInstallCodesAsync(const DescribeInstallCodesRequest& request, const DescribeInstallCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstallCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstallCodesOutcomeCallable SasClient::describeInstallCodesCallable(const DescribeInstallCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstallCodesOutcome()>>(
			[this, request]()
			{
			return this->describeInstallCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstanceAntiBruteForceRulesOutcome SasClient::describeInstanceAntiBruteForceRules(const DescribeInstanceAntiBruteForceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceAntiBruteForceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceAntiBruteForceRulesOutcome(DescribeInstanceAntiBruteForceRulesResult(outcome.result()));
	else
		return DescribeInstanceAntiBruteForceRulesOutcome(outcome.error());
}

void SasClient::describeInstanceAntiBruteForceRulesAsync(const DescribeInstanceAntiBruteForceRulesRequest& request, const DescribeInstanceAntiBruteForceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceAntiBruteForceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstanceAntiBruteForceRulesOutcomeCallable SasClient::describeInstanceAntiBruteForceRulesCallable(const DescribeInstanceAntiBruteForceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceAntiBruteForceRulesOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceAntiBruteForceRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstanceRebootStatusOutcome SasClient::describeInstanceRebootStatus(const DescribeInstanceRebootStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceRebootStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceRebootStatusOutcome(DescribeInstanceRebootStatusResult(outcome.result()));
	else
		return DescribeInstanceRebootStatusOutcome(outcome.error());
}

void SasClient::describeInstanceRebootStatusAsync(const DescribeInstanceRebootStatusRequest& request, const DescribeInstanceRebootStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceRebootStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstanceRebootStatusOutcomeCallable SasClient::describeInstanceRebootStatusCallable(const DescribeInstanceRebootStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceRebootStatusOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceRebootStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeInstanceStatisticsOutcome SasClient::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceStatisticsOutcome(DescribeInstanceStatisticsResult(outcome.result()));
	else
		return DescribeInstanceStatisticsOutcome(outcome.error());
}

void SasClient::describeInstanceStatisticsAsync(const DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeInstanceStatisticsOutcomeCallable SasClient::describeInstanceStatisticsCallable(const DescribeInstanceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeIpTagsOutcome SasClient::describeIpTags(const DescribeIpTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpTagsOutcome(DescribeIpTagsResult(outcome.result()));
	else
		return DescribeIpTagsOutcome(outcome.error());
}

void SasClient::describeIpTagsAsync(const DescribeIpTagsRequest& request, const DescribeIpTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeIpTagsOutcomeCallable SasClient::describeIpTagsCallable(const DescribeIpTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpTagsOutcome()>>(
			[this, request]()
			{
			return this->describeIpTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeLatestScanTaskOutcome SasClient::describeLatestScanTask(const DescribeLatestScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLatestScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLatestScanTaskOutcome(DescribeLatestScanTaskResult(outcome.result()));
	else
		return DescribeLatestScanTaskOutcome(outcome.error());
}

void SasClient::describeLatestScanTaskAsync(const DescribeLatestScanTaskRequest& request, const DescribeLatestScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLatestScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeLatestScanTaskOutcomeCallable SasClient::describeLatestScanTaskCallable(const DescribeLatestScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLatestScanTaskOutcome()>>(
			[this, request]()
			{
			return this->describeLatestScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeLogMetaOutcome SasClient::describeLogMeta(const DescribeLogMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogMetaOutcome(DescribeLogMetaResult(outcome.result()));
	else
		return DescribeLogMetaOutcome(outcome.error());
}

void SasClient::describeLogMetaAsync(const DescribeLogMetaRequest& request, const DescribeLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeLogMetaOutcomeCallable SasClient::describeLogMetaCallable(const DescribeLogMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogMetaOutcome()>>(
			[this, request]()
			{
			return this->describeLogMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeLogShipperStatusOutcome SasClient::describeLogShipperStatus(const DescribeLogShipperStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogShipperStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogShipperStatusOutcome(DescribeLogShipperStatusResult(outcome.result()));
	else
		return DescribeLogShipperStatusOutcome(outcome.error());
}

void SasClient::describeLogShipperStatusAsync(const DescribeLogShipperStatusRequest& request, const DescribeLogShipperStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogShipperStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeLogShipperStatusOutcomeCallable SasClient::describeLogShipperStatusCallable(const DescribeLogShipperStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogShipperStatusOutcome()>>(
			[this, request]()
			{
			return this->describeLogShipperStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeLoginBaseConfigsOutcome SasClient::describeLoginBaseConfigs(const DescribeLoginBaseConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoginBaseConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoginBaseConfigsOutcome(DescribeLoginBaseConfigsResult(outcome.result()));
	else
		return DescribeLoginBaseConfigsOutcome(outcome.error());
}

void SasClient::describeLoginBaseConfigsAsync(const DescribeLoginBaseConfigsRequest& request, const DescribeLoginBaseConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoginBaseConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeLoginBaseConfigsOutcomeCallable SasClient::describeLoginBaseConfigsCallable(const DescribeLoginBaseConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoginBaseConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeLoginBaseConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeLoginSwitchConfigsOutcome SasClient::describeLoginSwitchConfigs(const DescribeLoginSwitchConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoginSwitchConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoginSwitchConfigsOutcome(DescribeLoginSwitchConfigsResult(outcome.result()));
	else
		return DescribeLoginSwitchConfigsOutcome(outcome.error());
}

void SasClient::describeLoginSwitchConfigsAsync(const DescribeLoginSwitchConfigsRequest& request, const DescribeLoginSwitchConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoginSwitchConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeLoginSwitchConfigsOutcomeCallable SasClient::describeLoginSwitchConfigsCallable(const DescribeLoginSwitchConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoginSwitchConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeLoginSwitchConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeLogstoreStorageOutcome SasClient::describeLogstoreStorage(const DescribeLogstoreStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogstoreStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogstoreStorageOutcome(DescribeLogstoreStorageResult(outcome.result()));
	else
		return DescribeLogstoreStorageOutcome(outcome.error());
}

void SasClient::describeLogstoreStorageAsync(const DescribeLogstoreStorageRequest& request, const DescribeLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogstoreStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeLogstoreStorageOutcomeCallable SasClient::describeLogstoreStorageCallable(const DescribeLogstoreStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogstoreStorageOutcome()>>(
			[this, request]()
			{
			return this->describeLogstoreStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeMachineCanRebootOutcome SasClient::describeMachineCanReboot(const DescribeMachineCanRebootRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMachineCanRebootOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMachineCanRebootOutcome(DescribeMachineCanRebootResult(outcome.result()));
	else
		return DescribeMachineCanRebootOutcome(outcome.error());
}

void SasClient::describeMachineCanRebootAsync(const DescribeMachineCanRebootRequest& request, const DescribeMachineCanRebootAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMachineCanReboot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeMachineCanRebootOutcomeCallable SasClient::describeMachineCanRebootCallable(const DescribeMachineCanRebootRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMachineCanRebootOutcome()>>(
			[this, request]()
			{
			return this->describeMachineCanReboot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeModuleConfigOutcome SasClient::describeModuleConfig(const DescribeModuleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeModuleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeModuleConfigOutcome(DescribeModuleConfigResult(outcome.result()));
	else
		return DescribeModuleConfigOutcome(outcome.error());
}

void SasClient::describeModuleConfigAsync(const DescribeModuleConfigRequest& request, const DescribeModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeModuleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeModuleConfigOutcomeCallable SasClient::describeModuleConfigCallable(const DescribeModuleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeModuleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeModuleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeMonitorAccountsOutcome SasClient::describeMonitorAccounts(const DescribeMonitorAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMonitorAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMonitorAccountsOutcome(DescribeMonitorAccountsResult(outcome.result()));
	else
		return DescribeMonitorAccountsOutcome(outcome.error());
}

void SasClient::describeMonitorAccountsAsync(const DescribeMonitorAccountsRequest& request, const DescribeMonitorAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMonitorAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeMonitorAccountsOutcomeCallable SasClient::describeMonitorAccountsCallable(const DescribeMonitorAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMonitorAccountsOutcome()>>(
			[this, request]()
			{
			return this->describeMonitorAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeNoticeConfigOutcome SasClient::describeNoticeConfig(const DescribeNoticeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNoticeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNoticeConfigOutcome(DescribeNoticeConfigResult(outcome.result()));
	else
		return DescribeNoticeConfigOutcome(outcome.error());
}

void SasClient::describeNoticeConfigAsync(const DescribeNoticeConfigRequest& request, const DescribeNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNoticeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeNoticeConfigOutcomeCallable SasClient::describeNoticeConfigCallable(const DescribeNoticeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNoticeConfigOutcome()>>(
			[this, request]()
			{
			return this->describeNoticeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeNsasSuspEventTypeOutcome SasClient::describeNsasSuspEventType(const DescribeNsasSuspEventTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNsasSuspEventTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNsasSuspEventTypeOutcome(DescribeNsasSuspEventTypeResult(outcome.result()));
	else
		return DescribeNsasSuspEventTypeOutcome(outcome.error());
}

void SasClient::describeNsasSuspEventTypeAsync(const DescribeNsasSuspEventTypeRequest& request, const DescribeNsasSuspEventTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNsasSuspEventType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeNsasSuspEventTypeOutcomeCallable SasClient::describeNsasSuspEventTypeCallable(const DescribeNsasSuspEventTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNsasSuspEventTypeOutcome()>>(
			[this, request]()
			{
			return this->describeNsasSuspEventType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeOfflineMachinesOutcome SasClient::describeOfflineMachines(const DescribeOfflineMachinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOfflineMachinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOfflineMachinesOutcome(DescribeOfflineMachinesResult(outcome.result()));
	else
		return DescribeOfflineMachinesOutcome(outcome.error());
}

void SasClient::describeOfflineMachinesAsync(const DescribeOfflineMachinesRequest& request, const DescribeOfflineMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOfflineMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeOfflineMachinesOutcomeCallable SasClient::describeOfflineMachinesCallable(const DescribeOfflineMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOfflineMachinesOutcome()>>(
			[this, request]()
			{
			return this->describeOfflineMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeOnceTaskOutcome SasClient::describeOnceTask(const DescribeOnceTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOnceTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOnceTaskOutcome(DescribeOnceTaskResult(outcome.result()));
	else
		return DescribeOnceTaskOutcome(outcome.error());
}

void SasClient::describeOnceTaskAsync(const DescribeOnceTaskRequest& request, const DescribeOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOnceTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeOnceTaskOutcomeCallable SasClient::describeOnceTaskCallable(const DescribeOnceTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOnceTaskOutcome()>>(
			[this, request]()
			{
			return this->describeOnceTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeOnceTaskLeafRecordPageOutcome SasClient::describeOnceTaskLeafRecordPage(const DescribeOnceTaskLeafRecordPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOnceTaskLeafRecordPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOnceTaskLeafRecordPageOutcome(DescribeOnceTaskLeafRecordPageResult(outcome.result()));
	else
		return DescribeOnceTaskLeafRecordPageOutcome(outcome.error());
}

void SasClient::describeOnceTaskLeafRecordPageAsync(const DescribeOnceTaskLeafRecordPageRequest& request, const DescribeOnceTaskLeafRecordPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOnceTaskLeafRecordPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeOnceTaskLeafRecordPageOutcomeCallable SasClient::describeOnceTaskLeafRecordPageCallable(const DescribeOnceTaskLeafRecordPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOnceTaskLeafRecordPageOutcome()>>(
			[this, request]()
			{
			return this->describeOnceTaskLeafRecordPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyCountOutcome SasClient::describePropertyCount(const DescribePropertyCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyCountOutcome(DescribePropertyCountResult(outcome.result()));
	else
		return DescribePropertyCountOutcome(outcome.error());
}

void SasClient::describePropertyCountAsync(const DescribePropertyCountRequest& request, const DescribePropertyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyCountOutcomeCallable SasClient::describePropertyCountCallable(const DescribePropertyCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyCountOutcome()>>(
			[this, request]()
			{
			return this->describePropertyCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyCronDetailOutcome SasClient::describePropertyCronDetail(const DescribePropertyCronDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyCronDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyCronDetailOutcome(DescribePropertyCronDetailResult(outcome.result()));
	else
		return DescribePropertyCronDetailOutcome(outcome.error());
}

void SasClient::describePropertyCronDetailAsync(const DescribePropertyCronDetailRequest& request, const DescribePropertyCronDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyCronDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyCronDetailOutcomeCallable SasClient::describePropertyCronDetailCallable(const DescribePropertyCronDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyCronDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyCronDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyCronItemOutcome SasClient::describePropertyCronItem(const DescribePropertyCronItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyCronItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyCronItemOutcome(DescribePropertyCronItemResult(outcome.result()));
	else
		return DescribePropertyCronItemOutcome(outcome.error());
}

void SasClient::describePropertyCronItemAsync(const DescribePropertyCronItemRequest& request, const DescribePropertyCronItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyCronItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyCronItemOutcomeCallable SasClient::describePropertyCronItemCallable(const DescribePropertyCronItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyCronItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyCronItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyPortDetailOutcome SasClient::describePropertyPortDetail(const DescribePropertyPortDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyPortDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyPortDetailOutcome(DescribePropertyPortDetailResult(outcome.result()));
	else
		return DescribePropertyPortDetailOutcome(outcome.error());
}

void SasClient::describePropertyPortDetailAsync(const DescribePropertyPortDetailRequest& request, const DescribePropertyPortDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyPortDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyPortDetailOutcomeCallable SasClient::describePropertyPortDetailCallable(const DescribePropertyPortDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyPortDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyPortDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyPortItemOutcome SasClient::describePropertyPortItem(const DescribePropertyPortItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyPortItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyPortItemOutcome(DescribePropertyPortItemResult(outcome.result()));
	else
		return DescribePropertyPortItemOutcome(outcome.error());
}

void SasClient::describePropertyPortItemAsync(const DescribePropertyPortItemRequest& request, const DescribePropertyPortItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyPortItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyPortItemOutcomeCallable SasClient::describePropertyPortItemCallable(const DescribePropertyPortItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyPortItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyPortItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyProcDetailOutcome SasClient::describePropertyProcDetail(const DescribePropertyProcDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyProcDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyProcDetailOutcome(DescribePropertyProcDetailResult(outcome.result()));
	else
		return DescribePropertyProcDetailOutcome(outcome.error());
}

void SasClient::describePropertyProcDetailAsync(const DescribePropertyProcDetailRequest& request, const DescribePropertyProcDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyProcDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyProcDetailOutcomeCallable SasClient::describePropertyProcDetailCallable(const DescribePropertyProcDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyProcDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyProcDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyProcItemOutcome SasClient::describePropertyProcItem(const DescribePropertyProcItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyProcItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyProcItemOutcome(DescribePropertyProcItemResult(outcome.result()));
	else
		return DescribePropertyProcItemOutcome(outcome.error());
}

void SasClient::describePropertyProcItemAsync(const DescribePropertyProcItemRequest& request, const DescribePropertyProcItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyProcItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyProcItemOutcomeCallable SasClient::describePropertyProcItemCallable(const DescribePropertyProcItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyProcItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyProcItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyScaDetailOutcome SasClient::describePropertyScaDetail(const DescribePropertyScaDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyScaDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyScaDetailOutcome(DescribePropertyScaDetailResult(outcome.result()));
	else
		return DescribePropertyScaDetailOutcome(outcome.error());
}

void SasClient::describePropertyScaDetailAsync(const DescribePropertyScaDetailRequest& request, const DescribePropertyScaDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyScaDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyScaDetailOutcomeCallable SasClient::describePropertyScaDetailCallable(const DescribePropertyScaDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyScaDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyScaDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyScaItemOutcome SasClient::describePropertyScaItem(const DescribePropertyScaItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyScaItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyScaItemOutcome(DescribePropertyScaItemResult(outcome.result()));
	else
		return DescribePropertyScaItemOutcome(outcome.error());
}

void SasClient::describePropertyScaItemAsync(const DescribePropertyScaItemRequest& request, const DescribePropertyScaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyScaItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyScaItemOutcomeCallable SasClient::describePropertyScaItemCallable(const DescribePropertyScaItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyScaItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyScaItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyScheduleConfigOutcome SasClient::describePropertyScheduleConfig(const DescribePropertyScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyScheduleConfigOutcome(DescribePropertyScheduleConfigResult(outcome.result()));
	else
		return DescribePropertyScheduleConfigOutcome(outcome.error());
}

void SasClient::describePropertyScheduleConfigAsync(const DescribePropertyScheduleConfigRequest& request, const DescribePropertyScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyScheduleConfigOutcomeCallable SasClient::describePropertyScheduleConfigCallable(const DescribePropertyScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->describePropertyScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertySoftwareDetailOutcome SasClient::describePropertySoftwareDetail(const DescribePropertySoftwareDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertySoftwareDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertySoftwareDetailOutcome(DescribePropertySoftwareDetailResult(outcome.result()));
	else
		return DescribePropertySoftwareDetailOutcome(outcome.error());
}

void SasClient::describePropertySoftwareDetailAsync(const DescribePropertySoftwareDetailRequest& request, const DescribePropertySoftwareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertySoftwareDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertySoftwareDetailOutcomeCallable SasClient::describePropertySoftwareDetailCallable(const DescribePropertySoftwareDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertySoftwareDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertySoftwareDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertySoftwareItemOutcome SasClient::describePropertySoftwareItem(const DescribePropertySoftwareItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertySoftwareItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertySoftwareItemOutcome(DescribePropertySoftwareItemResult(outcome.result()));
	else
		return DescribePropertySoftwareItemOutcome(outcome.error());
}

void SasClient::describePropertySoftwareItemAsync(const DescribePropertySoftwareItemRequest& request, const DescribePropertySoftwareItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertySoftwareItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertySoftwareItemOutcomeCallable SasClient::describePropertySoftwareItemCallable(const DescribePropertySoftwareItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertySoftwareItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertySoftwareItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyTypeScaItemOutcome SasClient::describePropertyTypeScaItem(const DescribePropertyTypeScaItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyTypeScaItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyTypeScaItemOutcome(DescribePropertyTypeScaItemResult(outcome.result()));
	else
		return DescribePropertyTypeScaItemOutcome(outcome.error());
}

void SasClient::describePropertyTypeScaItemAsync(const DescribePropertyTypeScaItemRequest& request, const DescribePropertyTypeScaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyTypeScaItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyTypeScaItemOutcomeCallable SasClient::describePropertyTypeScaItemCallable(const DescribePropertyTypeScaItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyTypeScaItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyTypeScaItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyUsageNewestOutcome SasClient::describePropertyUsageNewest(const DescribePropertyUsageNewestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyUsageNewestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyUsageNewestOutcome(DescribePropertyUsageNewestResult(outcome.result()));
	else
		return DescribePropertyUsageNewestOutcome(outcome.error());
}

void SasClient::describePropertyUsageNewestAsync(const DescribePropertyUsageNewestRequest& request, const DescribePropertyUsageNewestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyUsageNewest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyUsageNewestOutcomeCallable SasClient::describePropertyUsageNewestCallable(const DescribePropertyUsageNewestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyUsageNewestOutcome()>>(
			[this, request]()
			{
			return this->describePropertyUsageNewest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyUserDetailOutcome SasClient::describePropertyUserDetail(const DescribePropertyUserDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyUserDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyUserDetailOutcome(DescribePropertyUserDetailResult(outcome.result()));
	else
		return DescribePropertyUserDetailOutcome(outcome.error());
}

void SasClient::describePropertyUserDetailAsync(const DescribePropertyUserDetailRequest& request, const DescribePropertyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyUserDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyUserDetailOutcomeCallable SasClient::describePropertyUserDetailCallable(const DescribePropertyUserDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyUserDetailOutcome()>>(
			[this, request]()
			{
			return this->describePropertyUserDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribePropertyUserItemOutcome SasClient::describePropertyUserItem(const DescribePropertyUserItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePropertyUserItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePropertyUserItemOutcome(DescribePropertyUserItemResult(outcome.result()));
	else
		return DescribePropertyUserItemOutcome(outcome.error());
}

void SasClient::describePropertyUserItemAsync(const DescribePropertyUserItemRequest& request, const DescribePropertyUserItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePropertyUserItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribePropertyUserItemOutcomeCallable SasClient::describePropertyUserItemCallable(const DescribePropertyUserItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePropertyUserItemOutcome()>>(
			[this, request]()
			{
			return this->describePropertyUserItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeQuaraFileDownloadInfoOutcome SasClient::describeQuaraFileDownloadInfo(const DescribeQuaraFileDownloadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQuaraFileDownloadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQuaraFileDownloadInfoOutcome(DescribeQuaraFileDownloadInfoResult(outcome.result()));
	else
		return DescribeQuaraFileDownloadInfoOutcome(outcome.error());
}

void SasClient::describeQuaraFileDownloadInfoAsync(const DescribeQuaraFileDownloadInfoRequest& request, const DescribeQuaraFileDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQuaraFileDownloadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeQuaraFileDownloadInfoOutcomeCallable SasClient::describeQuaraFileDownloadInfoCallable(const DescribeQuaraFileDownloadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQuaraFileDownloadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeQuaraFileDownloadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRestoreJobsOutcome SasClient::describeRestoreJobs(const DescribeRestoreJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestoreJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestoreJobsOutcome(DescribeRestoreJobsResult(outcome.result()));
	else
		return DescribeRestoreJobsOutcome(outcome.error());
}

void SasClient::describeRestoreJobsAsync(const DescribeRestoreJobsRequest& request, const DescribeRestoreJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestoreJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRestoreJobsOutcomeCallable SasClient::describeRestoreJobsCallable(const DescribeRestoreJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestoreJobsOutcome()>>(
			[this, request]()
			{
			return this->describeRestoreJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRestorePlansOutcome SasClient::describeRestorePlans(const DescribeRestorePlansRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRestorePlansOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRestorePlansOutcome(DescribeRestorePlansResult(outcome.result()));
	else
		return DescribeRestorePlansOutcome(outcome.error());
}

void SasClient::describeRestorePlansAsync(const DescribeRestorePlansRequest& request, const DescribeRestorePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRestorePlans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRestorePlansOutcomeCallable SasClient::describeRestorePlansCallable(const DescribeRestorePlansRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRestorePlansOutcome()>>(
			[this, request]()
			{
			return this->describeRestorePlans(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskCheckItemResultOutcome SasClient::describeRiskCheckItemResult(const DescribeRiskCheckItemResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskCheckItemResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskCheckItemResultOutcome(DescribeRiskCheckItemResultResult(outcome.result()));
	else
		return DescribeRiskCheckItemResultOutcome(outcome.error());
}

void SasClient::describeRiskCheckItemResultAsync(const DescribeRiskCheckItemResultRequest& request, const DescribeRiskCheckItemResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskCheckItemResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskCheckItemResultOutcomeCallable SasClient::describeRiskCheckItemResultCallable(const DescribeRiskCheckItemResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskCheckItemResultOutcome()>>(
			[this, request]()
			{
			return this->describeRiskCheckItemResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskCheckResultOutcome SasClient::describeRiskCheckResult(const DescribeRiskCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskCheckResultOutcome(DescribeRiskCheckResultResult(outcome.result()));
	else
		return DescribeRiskCheckResultOutcome(outcome.error());
}

void SasClient::describeRiskCheckResultAsync(const DescribeRiskCheckResultRequest& request, const DescribeRiskCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskCheckResultOutcomeCallable SasClient::describeRiskCheckResultCallable(const DescribeRiskCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskCheckResultOutcome()>>(
			[this, request]()
			{
			return this->describeRiskCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskCheckSummaryOutcome SasClient::describeRiskCheckSummary(const DescribeRiskCheckSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskCheckSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskCheckSummaryOutcome(DescribeRiskCheckSummaryResult(outcome.result()));
	else
		return DescribeRiskCheckSummaryOutcome(outcome.error());
}

void SasClient::describeRiskCheckSummaryAsync(const DescribeRiskCheckSummaryRequest& request, const DescribeRiskCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskCheckSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskCheckSummaryOutcomeCallable SasClient::describeRiskCheckSummaryCallable(const DescribeRiskCheckSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskCheckSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeRiskCheckSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskItemTypeOutcome SasClient::describeRiskItemType(const DescribeRiskItemTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskItemTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskItemTypeOutcome(DescribeRiskItemTypeResult(outcome.result()));
	else
		return DescribeRiskItemTypeOutcome(outcome.error());
}

void SasClient::describeRiskItemTypeAsync(const DescribeRiskItemTypeRequest& request, const DescribeRiskItemTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskItemType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskItemTypeOutcomeCallable SasClient::describeRiskItemTypeCallable(const DescribeRiskItemTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskItemTypeOutcome()>>(
			[this, request]()
			{
			return this->describeRiskItemType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskListCheckResultOutcome SasClient::describeRiskListCheckResult(const DescribeRiskListCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskListCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskListCheckResultOutcome(DescribeRiskListCheckResultResult(outcome.result()));
	else
		return DescribeRiskListCheckResultOutcome(outcome.error());
}

void SasClient::describeRiskListCheckResultAsync(const DescribeRiskListCheckResultRequest& request, const DescribeRiskListCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskListCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskListCheckResultOutcomeCallable SasClient::describeRiskListCheckResultCallable(const DescribeRiskListCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskListCheckResultOutcome()>>(
			[this, request]()
			{
			return this->describeRiskListCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRiskTypeOutcome SasClient::describeRiskType(const DescribeRiskTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskTypeOutcome(DescribeRiskTypeResult(outcome.result()));
	else
		return DescribeRiskTypeOutcome(outcome.error());
}

void SasClient::describeRiskTypeAsync(const DescribeRiskTypeRequest& request, const DescribeRiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRiskTypeOutcomeCallable SasClient::describeRiskTypeCallable(const DescribeRiskTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskTypeOutcome()>>(
			[this, request]()
			{
			return this->describeRiskType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeRisksOutcome SasClient::describeRisks(const DescribeRisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRisksOutcome(DescribeRisksResult(outcome.result()));
	else
		return DescribeRisksOutcome(outcome.error());
}

void SasClient::describeRisksAsync(const DescribeRisksRequest& request, const DescribeRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeRisksOutcomeCallable SasClient::describeRisksCallable(const DescribeRisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRisksOutcome()>>(
			[this, request]()
			{
			return this->describeRisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSasPmAgentListOutcome SasClient::describeSasPmAgentList(const DescribeSasPmAgentListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSasPmAgentListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSasPmAgentListOutcome(DescribeSasPmAgentListResult(outcome.result()));
	else
		return DescribeSasPmAgentListOutcome(outcome.error());
}

void SasClient::describeSasPmAgentListAsync(const DescribeSasPmAgentListRequest& request, const DescribeSasPmAgentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSasPmAgentList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSasPmAgentListOutcomeCallable SasClient::describeSasPmAgentListCallable(const DescribeSasPmAgentListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSasPmAgentListOutcome()>>(
			[this, request]()
			{
			return this->describeSasPmAgentList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeScanTaskProgressOutcome SasClient::describeScanTaskProgress(const DescribeScanTaskProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScanTaskProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScanTaskProgressOutcome(DescribeScanTaskProgressResult(outcome.result()));
	else
		return DescribeScanTaskProgressOutcome(outcome.error());
}

void SasClient::describeScanTaskProgressAsync(const DescribeScanTaskProgressRequest& request, const DescribeScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScanTaskProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeScanTaskProgressOutcomeCallable SasClient::describeScanTaskProgressCallable(const DescribeScanTaskProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScanTaskProgressOutcome()>>(
			[this, request]()
			{
			return this->describeScanTaskProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeScanTaskStatisticsOutcome SasClient::describeScanTaskStatistics(const DescribeScanTaskStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScanTaskStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScanTaskStatisticsOutcome(DescribeScanTaskStatisticsResult(outcome.result()));
	else
		return DescribeScanTaskStatisticsOutcome(outcome.error());
}

void SasClient::describeScanTaskStatisticsAsync(const DescribeScanTaskStatisticsRequest& request, const DescribeScanTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScanTaskStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeScanTaskStatisticsOutcomeCallable SasClient::describeScanTaskStatisticsCallable(const DescribeScanTaskStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScanTaskStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeScanTaskStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSearchConditionOutcome SasClient::describeSearchCondition(const DescribeSearchConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSearchConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSearchConditionOutcome(DescribeSearchConditionResult(outcome.result()));
	else
		return DescribeSearchConditionOutcome(outcome.error());
}

void SasClient::describeSearchConditionAsync(const DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSearchCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSearchConditionOutcomeCallable SasClient::describeSearchConditionCallable(const DescribeSearchConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSearchConditionOutcome()>>(
			[this, request]()
			{
			return this->describeSearchCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecureSuggestionOutcome SasClient::describeSecureSuggestion(const DescribeSecureSuggestionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecureSuggestionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecureSuggestionOutcome(DescribeSecureSuggestionResult(outcome.result()));
	else
		return DescribeSecureSuggestionOutcome(outcome.error());
}

void SasClient::describeSecureSuggestionAsync(const DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecureSuggestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecureSuggestionOutcomeCallable SasClient::describeSecureSuggestionCallable(const DescribeSecureSuggestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecureSuggestionOutcome()>>(
			[this, request]()
			{
			return this->describeSecureSuggestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityCheckScheduleConfigOutcome SasClient::describeSecurityCheckScheduleConfig(const DescribeSecurityCheckScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityCheckScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityCheckScheduleConfigOutcome(DescribeSecurityCheckScheduleConfigResult(outcome.result()));
	else
		return DescribeSecurityCheckScheduleConfigOutcome(outcome.error());
}

void SasClient::describeSecurityCheckScheduleConfigAsync(const DescribeSecurityCheckScheduleConfigRequest& request, const DescribeSecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityCheckScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityCheckScheduleConfigOutcomeCallable SasClient::describeSecurityCheckScheduleConfigCallable(const DescribeSecurityCheckScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityCheckScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityCheckScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityEventMarkMissListOutcome SasClient::describeSecurityEventMarkMissList(const DescribeSecurityEventMarkMissListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityEventMarkMissListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityEventMarkMissListOutcome(DescribeSecurityEventMarkMissListResult(outcome.result()));
	else
		return DescribeSecurityEventMarkMissListOutcome(outcome.error());
}

void SasClient::describeSecurityEventMarkMissListAsync(const DescribeSecurityEventMarkMissListRequest& request, const DescribeSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityEventMarkMissList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityEventMarkMissListOutcomeCallable SasClient::describeSecurityEventMarkMissListCallable(const DescribeSecurityEventMarkMissListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityEventMarkMissListOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityEventMarkMissList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityEventOperationStatusOutcome SasClient::describeSecurityEventOperationStatus(const DescribeSecurityEventOperationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityEventOperationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityEventOperationStatusOutcome(DescribeSecurityEventOperationStatusResult(outcome.result()));
	else
		return DescribeSecurityEventOperationStatusOutcome(outcome.error());
}

void SasClient::describeSecurityEventOperationStatusAsync(const DescribeSecurityEventOperationStatusRequest& request, const DescribeSecurityEventOperationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityEventOperationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityEventOperationStatusOutcomeCallable SasClient::describeSecurityEventOperationStatusCallable(const DescribeSecurityEventOperationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityEventOperationStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityEventOperationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityEventOperationsOutcome SasClient::describeSecurityEventOperations(const DescribeSecurityEventOperationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityEventOperationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityEventOperationsOutcome(DescribeSecurityEventOperationsResult(outcome.result()));
	else
		return DescribeSecurityEventOperationsOutcome(outcome.error());
}

void SasClient::describeSecurityEventOperationsAsync(const DescribeSecurityEventOperationsRequest& request, const DescribeSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityEventOperations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityEventOperationsOutcomeCallable SasClient::describeSecurityEventOperationsCallable(const DescribeSecurityEventOperationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityEventOperationsOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityEventOperations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSecurityStatInfoOutcome SasClient::describeSecurityStatInfo(const DescribeSecurityStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecurityStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecurityStatInfoOutcome(DescribeSecurityStatInfoResult(outcome.result()));
	else
		return DescribeSecurityStatInfoOutcome(outcome.error());
}

void SasClient::describeSecurityStatInfoAsync(const DescribeSecurityStatInfoRequest& request, const DescribeSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSecurityStatInfoOutcomeCallable SasClient::describeSecurityStatInfoCallable(const DescribeSecurityStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeServiceLinkedRoleStatusOutcome SasClient::describeServiceLinkedRoleStatus(const DescribeServiceLinkedRoleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServiceLinkedRoleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServiceLinkedRoleStatusOutcome(DescribeServiceLinkedRoleStatusResult(outcome.result()));
	else
		return DescribeServiceLinkedRoleStatusOutcome(outcome.error());
}

void SasClient::describeServiceLinkedRoleStatusAsync(const DescribeServiceLinkedRoleStatusRequest& request, const DescribeServiceLinkedRoleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServiceLinkedRoleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeServiceLinkedRoleStatusOutcomeCallable SasClient::describeServiceLinkedRoleStatusCallable(const DescribeServiceLinkedRoleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServiceLinkedRoleStatusOutcome()>>(
			[this, request]()
			{
			return this->describeServiceLinkedRoleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSimilarEventScenariosOutcome SasClient::describeSimilarEventScenarios(const DescribeSimilarEventScenariosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSimilarEventScenariosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSimilarEventScenariosOutcome(DescribeSimilarEventScenariosResult(outcome.result()));
	else
		return DescribeSimilarEventScenariosOutcome(outcome.error());
}

void SasClient::describeSimilarEventScenariosAsync(const DescribeSimilarEventScenariosRequest& request, const DescribeSimilarEventScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSimilarEventScenarios(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSimilarEventScenariosOutcomeCallable SasClient::describeSimilarEventScenariosCallable(const DescribeSimilarEventScenariosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSimilarEventScenariosOutcome()>>(
			[this, request]()
			{
			return this->describeSimilarEventScenarios(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSimilarSecurityEventsOutcome SasClient::describeSimilarSecurityEvents(const DescribeSimilarSecurityEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSimilarSecurityEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSimilarSecurityEventsOutcome(DescribeSimilarSecurityEventsResult(outcome.result()));
	else
		return DescribeSimilarSecurityEventsOutcome(outcome.error());
}

void SasClient::describeSimilarSecurityEventsAsync(const DescribeSimilarSecurityEventsRequest& request, const DescribeSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSimilarSecurityEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSimilarSecurityEventsOutcomeCallable SasClient::describeSimilarSecurityEventsCallable(const DescribeSimilarSecurityEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSimilarSecurityEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSimilarSecurityEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSnapshotsOutcome SasClient::describeSnapshots(const DescribeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnapshotsOutcome(DescribeSnapshotsResult(outcome.result()));
	else
		return DescribeSnapshotsOutcome(outcome.error());
}

void SasClient::describeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSnapshotsOutcomeCallable SasClient::describeSnapshotsCallable(const DescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->describeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeStrategyOutcome SasClient::describeStrategy(const DescribeStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyOutcome(DescribeStrategyResult(outcome.result()));
	else
		return DescribeStrategyOutcome(outcome.error());
}

void SasClient::describeStrategyAsync(const DescribeStrategyRequest& request, const DescribeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeStrategyOutcomeCallable SasClient::describeStrategyCallable(const DescribeStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyOutcome()>>(
			[this, request]()
			{
			return this->describeStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeStrategyDetailOutcome SasClient::describeStrategyDetail(const DescribeStrategyDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyDetailOutcome(DescribeStrategyDetailResult(outcome.result()));
	else
		return DescribeStrategyDetailOutcome(outcome.error());
}

void SasClient::describeStrategyDetailAsync(const DescribeStrategyDetailRequest& request, const DescribeStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeStrategyDetailOutcomeCallable SasClient::describeStrategyDetailCallable(const DescribeStrategyDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeStrategyExecDetailOutcome SasClient::describeStrategyExecDetail(const DescribeStrategyExecDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyExecDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyExecDetailOutcome(DescribeStrategyExecDetailResult(outcome.result()));
	else
		return DescribeStrategyExecDetailOutcome(outcome.error());
}

void SasClient::describeStrategyExecDetailAsync(const DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyExecDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeStrategyExecDetailOutcomeCallable SasClient::describeStrategyExecDetailCallable(const DescribeStrategyExecDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyExecDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyExecDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeStrategyTargetOutcome SasClient::describeStrategyTarget(const DescribeStrategyTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyTargetOutcome(DescribeStrategyTargetResult(outcome.result()));
	else
		return DescribeStrategyTargetOutcome(outcome.error());
}

void SasClient::describeStrategyTargetAsync(const DescribeStrategyTargetRequest& request, const DescribeStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeStrategyTargetOutcomeCallable SasClient::describeStrategyTargetCallable(const DescribeStrategyTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyTargetOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSummaryInfoOutcome SasClient::describeSummaryInfo(const DescribeSummaryInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSummaryInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSummaryInfoOutcome(DescribeSummaryInfoResult(outcome.result()));
	else
		return DescribeSummaryInfoOutcome(outcome.error());
}

void SasClient::describeSummaryInfoAsync(const DescribeSummaryInfoRequest& request, const DescribeSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSummaryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSummaryInfoOutcomeCallable SasClient::describeSummaryInfoCallable(const DescribeSummaryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSummaryInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSummaryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSupportRegionOutcome SasClient::describeSupportRegion(const DescribeSupportRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSupportRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSupportRegionOutcome(DescribeSupportRegionResult(outcome.result()));
	else
		return DescribeSupportRegionOutcome(outcome.error());
}

void SasClient::describeSupportRegionAsync(const DescribeSupportRegionRequest& request, const DescribeSupportRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSupportRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSupportRegionOutcomeCallable SasClient::describeSupportRegionCallable(const DescribeSupportRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSupportRegionOutcome()>>(
			[this, request]()
			{
			return this->describeSupportRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventDetailOutcome SasClient::describeSuspEventDetail(const DescribeSuspEventDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventDetailOutcome(DescribeSuspEventDetailResult(outcome.result()));
	else
		return DescribeSuspEventDetailOutcome(outcome.error());
}

void SasClient::describeSuspEventDetailAsync(const DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventDetailOutcomeCallable SasClient::describeSuspEventDetailCallable(const DescribeSuspEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventExportInfoOutcome SasClient::describeSuspEventExportInfo(const DescribeSuspEventExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventExportInfoOutcome(DescribeSuspEventExportInfoResult(outcome.result()));
	else
		return DescribeSuspEventExportInfoOutcome(outcome.error());
}

void SasClient::describeSuspEventExportInfoAsync(const DescribeSuspEventExportInfoRequest& request, const DescribeSuspEventExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventExportInfoOutcomeCallable SasClient::describeSuspEventExportInfoCallable(const DescribeSuspEventExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventQuaraFilesOutcome SasClient::describeSuspEventQuaraFiles(const DescribeSuspEventQuaraFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventQuaraFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventQuaraFilesOutcome(DescribeSuspEventQuaraFilesResult(outcome.result()));
	else
		return DescribeSuspEventQuaraFilesOutcome(outcome.error());
}

void SasClient::describeSuspEventQuaraFilesAsync(const DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventQuaraFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventQuaraFilesOutcomeCallable SasClient::describeSuspEventQuaraFilesCallable(const DescribeSuspEventQuaraFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventQuaraFilesOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventQuaraFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventUserSettingOutcome SasClient::describeSuspEventUserSetting(const DescribeSuspEventUserSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventUserSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventUserSettingOutcome(DescribeSuspEventUserSettingResult(outcome.result()));
	else
		return DescribeSuspEventUserSettingOutcome(outcome.error());
}

void SasClient::describeSuspEventUserSettingAsync(const DescribeSuspEventUserSettingRequest& request, const DescribeSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventUserSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventUserSettingOutcomeCallable SasClient::describeSuspEventUserSettingCallable(const DescribeSuspEventUserSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventUserSettingOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventUserSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspEventsOutcome SasClient::describeSuspEvents(const DescribeSuspEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventsOutcome(DescribeSuspEventsResult(outcome.result()));
	else
		return DescribeSuspEventsOutcome(outcome.error());
}

void SasClient::describeSuspEventsAsync(const DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspEventsOutcomeCallable SasClient::describeSuspEventsCallable(const DescribeSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspiciousOverallConfigOutcome SasClient::describeSuspiciousOverallConfig(const DescribeSuspiciousOverallConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspiciousOverallConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspiciousOverallConfigOutcome(DescribeSuspiciousOverallConfigResult(outcome.result()));
	else
		return DescribeSuspiciousOverallConfigOutcome(outcome.error());
}

void SasClient::describeSuspiciousOverallConfigAsync(const DescribeSuspiciousOverallConfigRequest& request, const DescribeSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspiciousOverallConfigOutcomeCallable SasClient::describeSuspiciousOverallConfigCallable(const DescribeSuspiciousOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeSuspiciousUUIDConfigOutcome SasClient::describeSuspiciousUUIDConfig(const DescribeSuspiciousUUIDConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspiciousUUIDConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspiciousUUIDConfigOutcome(DescribeSuspiciousUUIDConfigResult(outcome.result()));
	else
		return DescribeSuspiciousUUIDConfigOutcome(outcome.error());
}

void SasClient::describeSuspiciousUUIDConfigAsync(const DescribeSuspiciousUUIDConfigRequest& request, const DescribeSuspiciousUUIDConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousUUIDConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeSuspiciousUUIDConfigOutcomeCallable SasClient::describeSuspiciousUUIDConfigCallable(const DescribeSuspiciousUUIDConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousUUIDConfigOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousUUIDConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeTargetOutcome SasClient::describeTarget(const DescribeTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTargetOutcome(DescribeTargetResult(outcome.result()));
	else
		return DescribeTargetOutcome(outcome.error());
}

void SasClient::describeTargetAsync(const DescribeTargetRequest& request, const DescribeTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeTargetOutcomeCallable SasClient::describeTargetCallable(const DescribeTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTargetOutcome()>>(
			[this, request]()
			{
			return this->describeTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeTaskErrorLogOutcome SasClient::describeTaskErrorLog(const DescribeTaskErrorLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTaskErrorLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTaskErrorLogOutcome(DescribeTaskErrorLogResult(outcome.result()));
	else
		return DescribeTaskErrorLogOutcome(outcome.error());
}

void SasClient::describeTaskErrorLogAsync(const DescribeTaskErrorLogRequest& request, const DescribeTaskErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTaskErrorLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeTaskErrorLogOutcomeCallable SasClient::describeTaskErrorLogCallable(const DescribeTaskErrorLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTaskErrorLogOutcome()>>(
			[this, request]()
			{
			return this->describeTaskErrorLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeTotalStatisticsOutcome SasClient::describeTotalStatistics(const DescribeTotalStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTotalStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTotalStatisticsOutcome(DescribeTotalStatisticsResult(outcome.result()));
	else
		return DescribeTotalStatisticsOutcome(outcome.error());
}

void SasClient::describeTotalStatisticsAsync(const DescribeTotalStatisticsRequest& request, const DescribeTotalStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTotalStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeTotalStatisticsOutcomeCallable SasClient::describeTotalStatisticsCallable(const DescribeTotalStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTotalStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeTotalStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeTraceInfoDetailOutcome SasClient::describeTraceInfoDetail(const DescribeTraceInfoDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTraceInfoDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTraceInfoDetailOutcome(DescribeTraceInfoDetailResult(outcome.result()));
	else
		return DescribeTraceInfoDetailOutcome(outcome.error());
}

void SasClient::describeTraceInfoDetailAsync(const DescribeTraceInfoDetailRequest& request, const DescribeTraceInfoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceInfoDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeTraceInfoDetailOutcomeCallable SasClient::describeTraceInfoDetailCallable(const DescribeTraceInfoDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceInfoDetailOutcome()>>(
			[this, request]()
			{
			return this->describeTraceInfoDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeTraceInfoNodeOutcome SasClient::describeTraceInfoNode(const DescribeTraceInfoNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTraceInfoNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTraceInfoNodeOutcome(DescribeTraceInfoNodeResult(outcome.result()));
	else
		return DescribeTraceInfoNodeOutcome(outcome.error());
}

void SasClient::describeTraceInfoNodeAsync(const DescribeTraceInfoNodeRequest& request, const DescribeTraceInfoNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceInfoNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeTraceInfoNodeOutcomeCallable SasClient::describeTraceInfoNodeCallable(const DescribeTraceInfoNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceInfoNodeOutcome()>>(
			[this, request]()
			{
			return this->describeTraceInfoNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUniBackupDatabaseOutcome SasClient::describeUniBackupDatabase(const DescribeUniBackupDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUniBackupDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUniBackupDatabaseOutcome(DescribeUniBackupDatabaseResult(outcome.result()));
	else
		return DescribeUniBackupDatabaseOutcome(outcome.error());
}

void SasClient::describeUniBackupDatabaseAsync(const DescribeUniBackupDatabaseRequest& request, const DescribeUniBackupDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUniBackupDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUniBackupDatabaseOutcomeCallable SasClient::describeUniBackupDatabaseCallable(const DescribeUniBackupDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUniBackupDatabaseOutcome()>>(
			[this, request]()
			{
			return this->describeUniBackupDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUniBackupPoliciesOutcome SasClient::describeUniBackupPolicies(const DescribeUniBackupPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUniBackupPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUniBackupPoliciesOutcome(DescribeUniBackupPoliciesResult(outcome.result()));
	else
		return DescribeUniBackupPoliciesOutcome(outcome.error());
}

void SasClient::describeUniBackupPoliciesAsync(const DescribeUniBackupPoliciesRequest& request, const DescribeUniBackupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUniBackupPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUniBackupPoliciesOutcomeCallable SasClient::describeUniBackupPoliciesCallable(const DescribeUniBackupPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUniBackupPoliciesOutcome()>>(
			[this, request]()
			{
			return this->describeUniBackupPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUniBackupPolicyDetailOutcome SasClient::describeUniBackupPolicyDetail(const DescribeUniBackupPolicyDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUniBackupPolicyDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUniBackupPolicyDetailOutcome(DescribeUniBackupPolicyDetailResult(outcome.result()));
	else
		return DescribeUniBackupPolicyDetailOutcome(outcome.error());
}

void SasClient::describeUniBackupPolicyDetailAsync(const DescribeUniBackupPolicyDetailRequest& request, const DescribeUniBackupPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUniBackupPolicyDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUniBackupPolicyDetailOutcomeCallable SasClient::describeUniBackupPolicyDetailCallable(const DescribeUniBackupPolicyDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUniBackupPolicyDetailOutcome()>>(
			[this, request]()
			{
			return this->describeUniBackupPolicyDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUniRecoverableListOutcome SasClient::describeUniRecoverableList(const DescribeUniRecoverableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUniRecoverableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUniRecoverableListOutcome(DescribeUniRecoverableListResult(outcome.result()));
	else
		return DescribeUniRecoverableListOutcome(outcome.error());
}

void SasClient::describeUniRecoverableListAsync(const DescribeUniRecoverableListRequest& request, const DescribeUniRecoverableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUniRecoverableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUniRecoverableListOutcomeCallable SasClient::describeUniRecoverableListCallable(const DescribeUniRecoverableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUniRecoverableListOutcome()>>(
			[this, request]()
			{
			return this->describeUniRecoverableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUniSupportRegionOutcome SasClient::describeUniSupportRegion(const DescribeUniSupportRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUniSupportRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUniSupportRegionOutcome(DescribeUniSupportRegionResult(outcome.result()));
	else
		return DescribeUniSupportRegionOutcome(outcome.error());
}

void SasClient::describeUniSupportRegionAsync(const DescribeUniSupportRegionRequest& request, const DescribeUniSupportRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUniSupportRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUniSupportRegionOutcomeCallable SasClient::describeUniSupportRegionCallable(const DescribeUniSupportRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUniSupportRegionOutcome()>>(
			[this, request]()
			{
			return this->describeUniSupportRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUserBackupMachinesOutcome SasClient::describeUserBackupMachines(const DescribeUserBackupMachinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBackupMachinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBackupMachinesOutcome(DescribeUserBackupMachinesResult(outcome.result()));
	else
		return DescribeUserBackupMachinesOutcome(outcome.error());
}

void SasClient::describeUserBackupMachinesAsync(const DescribeUserBackupMachinesRequest& request, const DescribeUserBackupMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBackupMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUserBackupMachinesOutcomeCallable SasClient::describeUserBackupMachinesCallable(const DescribeUserBackupMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBackupMachinesOutcome()>>(
			[this, request]()
			{
			return this->describeUserBackupMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUserBaselineAuthorizationOutcome SasClient::describeUserBaselineAuthorization(const DescribeUserBaselineAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserBaselineAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserBaselineAuthorizationOutcome(DescribeUserBaselineAuthorizationResult(outcome.result()));
	else
		return DescribeUserBaselineAuthorizationOutcome(outcome.error());
}

void SasClient::describeUserBaselineAuthorizationAsync(const DescribeUserBaselineAuthorizationRequest& request, const DescribeUserBaselineAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserBaselineAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUserBaselineAuthorizationOutcomeCallable SasClient::describeUserBaselineAuthorizationCallable(const DescribeUserBaselineAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserBaselineAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->describeUserBaselineAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUserLayoutAuthorizationOutcome SasClient::describeUserLayoutAuthorization(const DescribeUserLayoutAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserLayoutAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserLayoutAuthorizationOutcome(DescribeUserLayoutAuthorizationResult(outcome.result()));
	else
		return DescribeUserLayoutAuthorizationOutcome(outcome.error());
}

void SasClient::describeUserLayoutAuthorizationAsync(const DescribeUserLayoutAuthorizationRequest& request, const DescribeUserLayoutAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserLayoutAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUserLayoutAuthorizationOutcomeCallable SasClient::describeUserLayoutAuthorizationCallable(const DescribeUserLayoutAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserLayoutAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->describeUserLayoutAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeUuidsByVulNamesOutcome SasClient::describeUuidsByVulNames(const DescribeUuidsByVulNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUuidsByVulNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUuidsByVulNamesOutcome(DescribeUuidsByVulNamesResult(outcome.result()));
	else
		return DescribeUuidsByVulNamesOutcome(outcome.error());
}

void SasClient::describeUuidsByVulNamesAsync(const DescribeUuidsByVulNamesRequest& request, const DescribeUuidsByVulNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUuidsByVulNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeUuidsByVulNamesOutcomeCallable SasClient::describeUuidsByVulNamesCallable(const DescribeUuidsByVulNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUuidsByVulNamesOutcome()>>(
			[this, request]()
			{
			return this->describeUuidsByVulNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVendorListOutcome SasClient::describeVendorList(const DescribeVendorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVendorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVendorListOutcome(DescribeVendorListResult(outcome.result()));
	else
		return DescribeVendorListOutcome(outcome.error());
}

void SasClient::describeVendorListAsync(const DescribeVendorListRequest& request, const DescribeVendorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVendorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVendorListOutcomeCallable SasClient::describeVendorListCallable(const DescribeVendorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVendorListOutcome()>>(
			[this, request]()
			{
			return this->describeVendorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVersionConfigOutcome SasClient::describeVersionConfig(const DescribeVersionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVersionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVersionConfigOutcome(DescribeVersionConfigResult(outcome.result()));
	else
		return DescribeVersionConfigOutcome(outcome.error());
}

void SasClient::describeVersionConfigAsync(const DescribeVersionConfigRequest& request, const DescribeVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVersionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVersionConfigOutcomeCallable SasClient::describeVersionConfigCallable(const DescribeVersionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVersionConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVersionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVpcHoneyPotCriteriaOutcome SasClient::describeVpcHoneyPotCriteria(const DescribeVpcHoneyPotCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcHoneyPotCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcHoneyPotCriteriaOutcome(DescribeVpcHoneyPotCriteriaResult(outcome.result()));
	else
		return DescribeVpcHoneyPotCriteriaOutcome(outcome.error());
}

void SasClient::describeVpcHoneyPotCriteriaAsync(const DescribeVpcHoneyPotCriteriaRequest& request, const DescribeVpcHoneyPotCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcHoneyPotCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVpcHoneyPotCriteriaOutcomeCallable SasClient::describeVpcHoneyPotCriteriaCallable(const DescribeVpcHoneyPotCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcHoneyPotCriteriaOutcome()>>(
			[this, request]()
			{
			return this->describeVpcHoneyPotCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVpcHoneyPotListOutcome SasClient::describeVpcHoneyPotList(const DescribeVpcHoneyPotListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcHoneyPotListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcHoneyPotListOutcome(DescribeVpcHoneyPotListResult(outcome.result()));
	else
		return DescribeVpcHoneyPotListOutcome(outcome.error());
}

void SasClient::describeVpcHoneyPotListAsync(const DescribeVpcHoneyPotListRequest& request, const DescribeVpcHoneyPotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcHoneyPotList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVpcHoneyPotListOutcomeCallable SasClient::describeVpcHoneyPotListCallable(const DescribeVpcHoneyPotListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcHoneyPotListOutcome()>>(
			[this, request]()
			{
			return this->describeVpcHoneyPotList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVpcListOutcome SasClient::describeVpcList(const DescribeVpcListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcListOutcome(DescribeVpcListResult(outcome.result()));
	else
		return DescribeVpcListOutcome(outcome.error());
}

void SasClient::describeVpcListAsync(const DescribeVpcListRequest& request, const DescribeVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVpcListOutcomeCallable SasClient::describeVpcListCallable(const DescribeVpcListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcListOutcome()>>(
			[this, request]()
			{
			return this->describeVpcList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulCheckTaskStatusDetailOutcome SasClient::describeVulCheckTaskStatusDetail(const DescribeVulCheckTaskStatusDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulCheckTaskStatusDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulCheckTaskStatusDetailOutcome(DescribeVulCheckTaskStatusDetailResult(outcome.result()));
	else
		return DescribeVulCheckTaskStatusDetailOutcome(outcome.error());
}

void SasClient::describeVulCheckTaskStatusDetailAsync(const DescribeVulCheckTaskStatusDetailRequest& request, const DescribeVulCheckTaskStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulCheckTaskStatusDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulCheckTaskStatusDetailOutcomeCallable SasClient::describeVulCheckTaskStatusDetailCallable(const DescribeVulCheckTaskStatusDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulCheckTaskStatusDetailOutcome()>>(
			[this, request]()
			{
			return this->describeVulCheckTaskStatusDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulConfigOutcome SasClient::describeVulConfig(const DescribeVulConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulConfigOutcome(DescribeVulConfigResult(outcome.result()));
	else
		return DescribeVulConfigOutcome(outcome.error());
}

void SasClient::describeVulConfigAsync(const DescribeVulConfigRequest& request, const DescribeVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulConfigOutcomeCallable SasClient::describeVulConfigCallable(const DescribeVulConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVulConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulDetailsOutcome SasClient::describeVulDetails(const DescribeVulDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulDetailsOutcome(DescribeVulDetailsResult(outcome.result()));
	else
		return DescribeVulDetailsOutcome(outcome.error());
}

void SasClient::describeVulDetailsAsync(const DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulDetailsOutcomeCallable SasClient::describeVulDetailsCallable(const DescribeVulDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeVulDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulExportInfoOutcome SasClient::describeVulExportInfo(const DescribeVulExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulExportInfoOutcome(DescribeVulExportInfoResult(outcome.result()));
	else
		return DescribeVulExportInfoOutcome(outcome.error());
}

void SasClient::describeVulExportInfoAsync(const DescribeVulExportInfoRequest& request, const DescribeVulExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulExportInfoOutcomeCallable SasClient::describeVulExportInfoCallable(const DescribeVulExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeVulExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulFixStatisticsOutcome SasClient::describeVulFixStatistics(const DescribeVulFixStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulFixStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulFixStatisticsOutcome(DescribeVulFixStatisticsResult(outcome.result()));
	else
		return DescribeVulFixStatisticsOutcome(outcome.error());
}

void SasClient::describeVulFixStatisticsAsync(const DescribeVulFixStatisticsRequest& request, const DescribeVulFixStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulFixStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulFixStatisticsOutcomeCallable SasClient::describeVulFixStatisticsCallable(const DescribeVulFixStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulFixStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulFixStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulListOutcome SasClient::describeVulList(const DescribeVulListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulListOutcome(DescribeVulListResult(outcome.result()));
	else
		return DescribeVulListOutcome(outcome.error());
}

void SasClient::describeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulListOutcomeCallable SasClient::describeVulListCallable(const DescribeVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
			[this, request]()
			{
			return this->describeVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulListPageOutcome SasClient::describeVulListPage(const DescribeVulListPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulListPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulListPageOutcome(DescribeVulListPageResult(outcome.result()));
	else
		return DescribeVulListPageOutcome(outcome.error());
}

void SasClient::describeVulListPageAsync(const DescribeVulListPageRequest& request, const DescribeVulListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulListPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulListPageOutcomeCallable SasClient::describeVulListPageCallable(const DescribeVulListPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulListPageOutcome()>>(
			[this, request]()
			{
			return this->describeVulListPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulNumStatisticsOutcome SasClient::describeVulNumStatistics(const DescribeVulNumStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulNumStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulNumStatisticsOutcome(DescribeVulNumStatisticsResult(outcome.result()));
	else
		return DescribeVulNumStatisticsOutcome(outcome.error());
}

void SasClient::describeVulNumStatisticsAsync(const DescribeVulNumStatisticsRequest& request, const DescribeVulNumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulNumStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulNumStatisticsOutcomeCallable SasClient::describeVulNumStatisticsCallable(const DescribeVulNumStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulNumStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulNumStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulTargetConfigOutcome SasClient::describeVulTargetConfig(const DescribeVulTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulTargetConfigOutcome(DescribeVulTargetConfigResult(outcome.result()));
	else
		return DescribeVulTargetConfigOutcome(outcome.error());
}

void SasClient::describeVulTargetConfigAsync(const DescribeVulTargetConfigRequest& request, const DescribeVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulTargetConfigOutcomeCallable SasClient::describeVulTargetConfigCallable(const DescribeVulTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVulTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulTargetStatisticsOutcome SasClient::describeVulTargetStatistics(const DescribeVulTargetStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulTargetStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulTargetStatisticsOutcome(DescribeVulTargetStatisticsResult(outcome.result()));
	else
		return DescribeVulTargetStatisticsOutcome(outcome.error());
}

void SasClient::describeVulTargetStatisticsAsync(const DescribeVulTargetStatisticsRequest& request, const DescribeVulTargetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulTargetStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulTargetStatisticsOutcomeCallable SasClient::describeVulTargetStatisticsCallable(const DescribeVulTargetStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulTargetStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulTargetStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeVulWhitelistOutcome SasClient::describeVulWhitelist(const DescribeVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulWhitelistOutcome(DescribeVulWhitelistResult(outcome.result()));
	else
		return DescribeVulWhitelistOutcome(outcome.error());
}

void SasClient::describeVulWhitelistAsync(const DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeVulWhitelistOutcomeCallable SasClient::describeVulWhitelistCallable(const DescribeVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWarningExportInfoOutcome SasClient::describeWarningExportInfo(const DescribeWarningExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWarningExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWarningExportInfoOutcome(DescribeWarningExportInfoResult(outcome.result()));
	else
		return DescribeWarningExportInfoOutcome(outcome.error());
}

void SasClient::describeWarningExportInfoAsync(const DescribeWarningExportInfoRequest& request, const DescribeWarningExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWarningExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWarningExportInfoOutcomeCallable SasClient::describeWarningExportInfoCallable(const DescribeWarningExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWarningExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeWarningExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWarningMachinesOutcome SasClient::describeWarningMachines(const DescribeWarningMachinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWarningMachinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWarningMachinesOutcome(DescribeWarningMachinesResult(outcome.result()));
	else
		return DescribeWarningMachinesOutcome(outcome.error());
}

void SasClient::describeWarningMachinesAsync(const DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWarningMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWarningMachinesOutcomeCallable SasClient::describeWarningMachinesCallable(const DescribeWarningMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWarningMachinesOutcome()>>(
			[this, request]()
			{
			return this->describeWarningMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockBindListOutcome SasClient::describeWebLockBindList(const DescribeWebLockBindListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockBindListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockBindListOutcome(DescribeWebLockBindListResult(outcome.result()));
	else
		return DescribeWebLockBindListOutcome(outcome.error());
}

void SasClient::describeWebLockBindListAsync(const DescribeWebLockBindListRequest& request, const DescribeWebLockBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockBindList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockBindListOutcomeCallable SasClient::describeWebLockBindListCallable(const DescribeWebLockBindListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockBindListOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockBindList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockConfigListOutcome SasClient::describeWebLockConfigList(const DescribeWebLockConfigListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockConfigListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockConfigListOutcome(DescribeWebLockConfigListResult(outcome.result()));
	else
		return DescribeWebLockConfigListOutcome(outcome.error());
}

void SasClient::describeWebLockConfigListAsync(const DescribeWebLockConfigListRequest& request, const DescribeWebLockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockConfigList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockConfigListOutcomeCallable SasClient::describeWebLockConfigListCallable(const DescribeWebLockConfigListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockConfigListOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockConfigList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockExclusiveFileTypeOutcome SasClient::describeWebLockExclusiveFileType(const DescribeWebLockExclusiveFileTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockExclusiveFileTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockExclusiveFileTypeOutcome(DescribeWebLockExclusiveFileTypeResult(outcome.result()));
	else
		return DescribeWebLockExclusiveFileTypeOutcome(outcome.error());
}

void SasClient::describeWebLockExclusiveFileTypeAsync(const DescribeWebLockExclusiveFileTypeRequest& request, const DescribeWebLockExclusiveFileTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockExclusiveFileType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockExclusiveFileTypeOutcomeCallable SasClient::describeWebLockExclusiveFileTypeCallable(const DescribeWebLockExclusiveFileTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockExclusiveFileTypeOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockExclusiveFileType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockFileChangeStatisticsOutcome SasClient::describeWebLockFileChangeStatistics(const DescribeWebLockFileChangeStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockFileChangeStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockFileChangeStatisticsOutcome(DescribeWebLockFileChangeStatisticsResult(outcome.result()));
	else
		return DescribeWebLockFileChangeStatisticsOutcome(outcome.error());
}

void SasClient::describeWebLockFileChangeStatisticsAsync(const DescribeWebLockFileChangeStatisticsRequest& request, const DescribeWebLockFileChangeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockFileChangeStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockFileChangeStatisticsOutcomeCallable SasClient::describeWebLockFileChangeStatisticsCallable(const DescribeWebLockFileChangeStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockFileChangeStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockFileChangeStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockFileEventsOutcome SasClient::describeWebLockFileEvents(const DescribeWebLockFileEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockFileEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockFileEventsOutcome(DescribeWebLockFileEventsResult(outcome.result()));
	else
		return DescribeWebLockFileEventsOutcome(outcome.error());
}

void SasClient::describeWebLockFileEventsAsync(const DescribeWebLockFileEventsRequest& request, const DescribeWebLockFileEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockFileEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockFileEventsOutcomeCallable SasClient::describeWebLockFileEventsCallable(const DescribeWebLockFileEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockFileEventsOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockFileEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockFileTypeSummaryOutcome SasClient::describeWebLockFileTypeSummary(const DescribeWebLockFileTypeSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockFileTypeSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockFileTypeSummaryOutcome(DescribeWebLockFileTypeSummaryResult(outcome.result()));
	else
		return DescribeWebLockFileTypeSummaryOutcome(outcome.error());
}

void SasClient::describeWebLockFileTypeSummaryAsync(const DescribeWebLockFileTypeSummaryRequest& request, const DescribeWebLockFileTypeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockFileTypeSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockFileTypeSummaryOutcomeCallable SasClient::describeWebLockFileTypeSummaryCallable(const DescribeWebLockFileTypeSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockFileTypeSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockFileTypeSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockInclusiveFileTypeOutcome SasClient::describeWebLockInclusiveFileType(const DescribeWebLockInclusiveFileTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockInclusiveFileTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockInclusiveFileTypeOutcome(DescribeWebLockInclusiveFileTypeResult(outcome.result()));
	else
		return DescribeWebLockInclusiveFileTypeOutcome(outcome.error());
}

void SasClient::describeWebLockInclusiveFileTypeAsync(const DescribeWebLockInclusiveFileTypeRequest& request, const DescribeWebLockInclusiveFileTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockInclusiveFileType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockInclusiveFileTypeOutcomeCallable SasClient::describeWebLockInclusiveFileTypeCallable(const DescribeWebLockInclusiveFileTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockInclusiveFileTypeOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockInclusiveFileType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockProcessBlockStatisticsOutcome SasClient::describeWebLockProcessBlockStatistics(const DescribeWebLockProcessBlockStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockProcessBlockStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockProcessBlockStatisticsOutcome(DescribeWebLockProcessBlockStatisticsResult(outcome.result()));
	else
		return DescribeWebLockProcessBlockStatisticsOutcome(outcome.error());
}

void SasClient::describeWebLockProcessBlockStatisticsAsync(const DescribeWebLockProcessBlockStatisticsRequest& request, const DescribeWebLockProcessBlockStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockProcessBlockStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockProcessBlockStatisticsOutcomeCallable SasClient::describeWebLockProcessBlockStatisticsCallable(const DescribeWebLockProcessBlockStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockProcessBlockStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockProcessBlockStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockProcessListOutcome SasClient::describeWebLockProcessList(const DescribeWebLockProcessListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockProcessListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockProcessListOutcome(DescribeWebLockProcessListResult(outcome.result()));
	else
		return DescribeWebLockProcessListOutcome(outcome.error());
}

void SasClient::describeWebLockProcessListAsync(const DescribeWebLockProcessListRequest& request, const DescribeWebLockProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockProcessList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockProcessListOutcomeCallable SasClient::describeWebLockProcessListCallable(const DescribeWebLockProcessListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockProcessListOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockProcessList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockStatusOutcome SasClient::describeWebLockStatus(const DescribeWebLockStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockStatusOutcome(DescribeWebLockStatusResult(outcome.result()));
	else
		return DescribeWebLockStatusOutcome(outcome.error());
}

void SasClient::describeWebLockStatusAsync(const DescribeWebLockStatusRequest& request, const DescribeWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockStatusOutcomeCallable SasClient::describeWebLockStatusCallable(const DescribeWebLockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockStatusOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebLockTotalFileChangeCountOutcome SasClient::describeWebLockTotalFileChangeCount(const DescribeWebLockTotalFileChangeCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockTotalFileChangeCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockTotalFileChangeCountOutcome(DescribeWebLockTotalFileChangeCountResult(outcome.result()));
	else
		return DescribeWebLockTotalFileChangeCountOutcome(outcome.error());
}

void SasClient::describeWebLockTotalFileChangeCountAsync(const DescribeWebLockTotalFileChangeCountRequest& request, const DescribeWebLockTotalFileChangeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockTotalFileChangeCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebLockTotalFileChangeCountOutcomeCallable SasClient::describeWebLockTotalFileChangeCountCallable(const DescribeWebLockTotalFileChangeCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockTotalFileChangeCountOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockTotalFileChangeCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DescribeWebPathOutcome SasClient::describeWebPath(const DescribeWebPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebPathOutcome(DescribeWebPathResult(outcome.result()));
	else
		return DescribeWebPathOutcome(outcome.error());
}

void SasClient::describeWebPathAsync(const DescribeWebPathRequest& request, const DescribeWebPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeWebPathOutcomeCallable SasClient::describeWebPathCallable(const DescribeWebPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebPathOutcome()>>(
			[this, request]()
			{
			return this->describeWebPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DisableBruteForceRecordOutcome SasClient::disableBruteForceRecord(const DisableBruteForceRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableBruteForceRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableBruteForceRecordOutcome(DisableBruteForceRecordResult(outcome.result()));
	else
		return DisableBruteForceRecordOutcome(outcome.error());
}

void SasClient::disableBruteForceRecordAsync(const DisableBruteForceRecordRequest& request, const DisableBruteForceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableBruteForceRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DisableBruteForceRecordOutcomeCallable SasClient::disableBruteForceRecordCallable(const DisableBruteForceRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableBruteForceRecordOutcome()>>(
			[this, request]()
			{
			return this->disableBruteForceRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::DisableCustomBlockRecordOutcome SasClient::disableCustomBlockRecord(const DisableCustomBlockRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableCustomBlockRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableCustomBlockRecordOutcome(DisableCustomBlockRecordResult(outcome.result()));
	else
		return DisableCustomBlockRecordOutcome(outcome.error());
}

void SasClient::disableCustomBlockRecordAsync(const DisableCustomBlockRecordRequest& request, const DisableCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableCustomBlockRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DisableCustomBlockRecordOutcomeCallable SasClient::disableCustomBlockRecordCallable(const DisableCustomBlockRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableCustomBlockRecordOutcome()>>(
			[this, request]()
			{
			return this->disableCustomBlockRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::EnableBruteForceRecordOutcome SasClient::enableBruteForceRecord(const EnableBruteForceRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableBruteForceRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableBruteForceRecordOutcome(EnableBruteForceRecordResult(outcome.result()));
	else
		return EnableBruteForceRecordOutcome(outcome.error());
}

void SasClient::enableBruteForceRecordAsync(const EnableBruteForceRecordRequest& request, const EnableBruteForceRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableBruteForceRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::EnableBruteForceRecordOutcomeCallable SasClient::enableBruteForceRecordCallable(const EnableBruteForceRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableBruteForceRecordOutcome()>>(
			[this, request]()
			{
			return this->enableBruteForceRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::EnableCustomBlockRecordOutcome SasClient::enableCustomBlockRecord(const EnableCustomBlockRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableCustomBlockRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableCustomBlockRecordOutcome(EnableCustomBlockRecordResult(outcome.result()));
	else
		return EnableCustomBlockRecordOutcome(outcome.error());
}

void SasClient::enableCustomBlockRecordAsync(const EnableCustomBlockRecordRequest& request, const EnableCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableCustomBlockRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::EnableCustomBlockRecordOutcomeCallable SasClient::enableCustomBlockRecordCallable(const EnableCustomBlockRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableCustomBlockRecordOutcome()>>(
			[this, request]()
			{
			return this->enableCustomBlockRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ExecStrategyOutcome SasClient::execStrategy(const ExecStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecStrategyOutcome(ExecStrategyResult(outcome.result()));
	else
		return ExecStrategyOutcome(outcome.error());
}

void SasClient::execStrategyAsync(const ExecStrategyRequest& request, const ExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, execStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ExecStrategyOutcomeCallable SasClient::execStrategyCallable(const ExecStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecStrategyOutcome()>>(
			[this, request]()
			{
			return this->execStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ExportRecordOutcome SasClient::exportRecord(const ExportRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportRecordOutcome(ExportRecordResult(outcome.result()));
	else
		return ExportRecordOutcome(outcome.error());
}

void SasClient::exportRecordAsync(const ExportRecordRequest& request, const ExportRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ExportRecordOutcomeCallable SasClient::exportRecordCallable(const ExportRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportRecordOutcome()>>(
			[this, request]()
			{
			return this->exportRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ExportSuspEventsOutcome SasClient::exportSuspEvents(const ExportSuspEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportSuspEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportSuspEventsOutcome(ExportSuspEventsResult(outcome.result()));
	else
		return ExportSuspEventsOutcome(outcome.error());
}

void SasClient::exportSuspEventsAsync(const ExportSuspEventsRequest& request, const ExportSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ExportSuspEventsOutcomeCallable SasClient::exportSuspEventsCallable(const ExportSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->exportSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ExportVulOutcome SasClient::exportVul(const ExportVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportVulOutcome(ExportVulResult(outcome.result()));
	else
		return ExportVulOutcome(outcome.error());
}

void SasClient::exportVulAsync(const ExportVulRequest& request, const ExportVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ExportVulOutcomeCallable SasClient::exportVulCallable(const ExportVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportVulOutcome()>>(
			[this, request]()
			{
			return this->exportVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ExportWarningOutcome SasClient::exportWarning(const ExportWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportWarningOutcome(ExportWarningResult(outcome.result()));
	else
		return ExportWarningOutcome(outcome.error());
}

void SasClient::exportWarningAsync(const ExportWarningRequest& request, const ExportWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ExportWarningOutcomeCallable SasClient::exportWarningCallable(const ExportWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportWarningOutcome()>>(
			[this, request]()
			{
			return this->exportWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::FindContainerNetworkConnectOutcome SasClient::findContainerNetworkConnect(const FindContainerNetworkConnectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FindContainerNetworkConnectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FindContainerNetworkConnectOutcome(FindContainerNetworkConnectResult(outcome.result()));
	else
		return FindContainerNetworkConnectOutcome(outcome.error());
}

void SasClient::findContainerNetworkConnectAsync(const FindContainerNetworkConnectRequest& request, const FindContainerNetworkConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, findContainerNetworkConnect(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::FindContainerNetworkConnectOutcomeCallable SasClient::findContainerNetworkConnectCallable(const FindContainerNetworkConnectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FindContainerNetworkConnectOutcome()>>(
			[this, request]()
			{
			return this->findContainerNetworkConnect(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::FixCheckWarningsOutcome SasClient::fixCheckWarnings(const FixCheckWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FixCheckWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FixCheckWarningsOutcome(FixCheckWarningsResult(outcome.result()));
	else
		return FixCheckWarningsOutcome(outcome.error());
}

void SasClient::fixCheckWarningsAsync(const FixCheckWarningsRequest& request, const FixCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fixCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::FixCheckWarningsOutcomeCallable SasClient::fixCheckWarningsCallable(const FixCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FixCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->fixCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GenerateOnceTaskOutcome SasClient::generateOnceTask(const GenerateOnceTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateOnceTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateOnceTaskOutcome(GenerateOnceTaskResult(outcome.result()));
	else
		return GenerateOnceTaskOutcome(outcome.error());
}

void SasClient::generateOnceTaskAsync(const GenerateOnceTaskRequest& request, const GenerateOnceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateOnceTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GenerateOnceTaskOutcomeCallable SasClient::generateOnceTaskCallable(const GenerateOnceTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateOnceTaskOutcome()>>(
			[this, request]()
			{
			return this->generateOnceTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAgentlessTaskCountOutcome SasClient::getAgentlessTaskCount(const GetAgentlessTaskCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAgentlessTaskCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAgentlessTaskCountOutcome(GetAgentlessTaskCountResult(outcome.result()));
	else
		return GetAgentlessTaskCountOutcome(outcome.error());
}

void SasClient::getAgentlessTaskCountAsync(const GetAgentlessTaskCountRequest& request, const GetAgentlessTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAgentlessTaskCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAgentlessTaskCountOutcomeCallable SasClient::getAgentlessTaskCountCallable(const GetAgentlessTaskCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAgentlessTaskCountOutcome()>>(
			[this, request]()
			{
			return this->getAgentlessTaskCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAlarmMachineCountOutcome SasClient::getAlarmMachineCount(const GetAlarmMachineCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAlarmMachineCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAlarmMachineCountOutcome(GetAlarmMachineCountResult(outcome.result()));
	else
		return GetAlarmMachineCountOutcome(outcome.error());
}

void SasClient::getAlarmMachineCountAsync(const GetAlarmMachineCountRequest& request, const GetAlarmMachineCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAlarmMachineCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAlarmMachineCountOutcomeCallable SasClient::getAlarmMachineCountCallable(const GetAlarmMachineCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAlarmMachineCountOutcome()>>(
			[this, request]()
			{
			return this->getAlarmMachineCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAppNetworkOutcome SasClient::getAppNetwork(const GetAppNetworkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAppNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAppNetworkOutcome(GetAppNetworkResult(outcome.result()));
	else
		return GetAppNetworkOutcome(outcome.error());
}

void SasClient::getAppNetworkAsync(const GetAppNetworkRequest& request, const GetAppNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAppNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAppNetworkOutcomeCallable SasClient::getAppNetworkCallable(const GetAppNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAppNetworkOutcome()>>(
			[this, request]()
			{
			return this->getAppNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAssetDetailByUuidOutcome SasClient::getAssetDetailByUuid(const GetAssetDetailByUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAssetDetailByUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAssetDetailByUuidOutcome(GetAssetDetailByUuidResult(outcome.result()));
	else
		return GetAssetDetailByUuidOutcome(outcome.error());
}

void SasClient::getAssetDetailByUuidAsync(const GetAssetDetailByUuidRequest& request, const GetAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAssetDetailByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAssetDetailByUuidOutcomeCallable SasClient::getAssetDetailByUuidCallable(const GetAssetDetailByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAssetDetailByUuidOutcome()>>(
			[this, request]()
			{
			return this->getAssetDetailByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAssetSelectionConfigOutcome SasClient::getAssetSelectionConfig(const GetAssetSelectionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAssetSelectionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAssetSelectionConfigOutcome(GetAssetSelectionConfigResult(outcome.result()));
	else
		return GetAssetSelectionConfigOutcome(outcome.error());
}

void SasClient::getAssetSelectionConfigAsync(const GetAssetSelectionConfigRequest& request, const GetAssetSelectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAssetSelectionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAssetSelectionConfigOutcomeCallable SasClient::getAssetSelectionConfigCallable(const GetAssetSelectionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAssetSelectionConfigOutcome()>>(
			[this, request]()
			{
			return this->getAssetSelectionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAssetsPropertyDetailOutcome SasClient::getAssetsPropertyDetail(const GetAssetsPropertyDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAssetsPropertyDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAssetsPropertyDetailOutcome(GetAssetsPropertyDetailResult(outcome.result()));
	else
		return GetAssetsPropertyDetailOutcome(outcome.error());
}

void SasClient::getAssetsPropertyDetailAsync(const GetAssetsPropertyDetailRequest& request, const GetAssetsPropertyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAssetsPropertyDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAssetsPropertyDetailOutcomeCallable SasClient::getAssetsPropertyDetailCallable(const GetAssetsPropertyDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAssetsPropertyDetailOutcome()>>(
			[this, request]()
			{
			return this->getAssetsPropertyDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetAssetsPropertyItemOutcome SasClient::getAssetsPropertyItem(const GetAssetsPropertyItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAssetsPropertyItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAssetsPropertyItemOutcome(GetAssetsPropertyItemResult(outcome.result()));
	else
		return GetAssetsPropertyItemOutcome(outcome.error());
}

void SasClient::getAssetsPropertyItemAsync(const GetAssetsPropertyItemRequest& request, const GetAssetsPropertyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAssetsPropertyItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetAssetsPropertyItemOutcomeCallable SasClient::getAssetsPropertyItemCallable(const GetAssetsPropertyItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAssetsPropertyItemOutcome()>>(
			[this, request]()
			{
			return this->getAssetsPropertyItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetBackupStorageCountOutcome SasClient::getBackupStorageCount(const GetBackupStorageCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBackupStorageCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBackupStorageCountOutcome(GetBackupStorageCountResult(outcome.result()));
	else
		return GetBackupStorageCountOutcome(outcome.error());
}

void SasClient::getBackupStorageCountAsync(const GetBackupStorageCountRequest& request, const GetBackupStorageCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBackupStorageCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetBackupStorageCountOutcomeCallable SasClient::getBackupStorageCountCallable(const GetBackupStorageCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBackupStorageCountOutcome()>>(
			[this, request]()
			{
			return this->getBackupStorageCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCheckConfigOutcome SasClient::getCheckConfig(const GetCheckConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckConfigOutcome(GetCheckConfigResult(outcome.result()));
	else
		return GetCheckConfigOutcome(outcome.error());
}

void SasClient::getCheckConfigAsync(const GetCheckConfigRequest& request, const GetCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCheckConfigOutcomeCallable SasClient::getCheckConfigCallable(const GetCheckConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckConfigOutcome()>>(
			[this, request]()
			{
			return this->getCheckConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCheckDetailOutcome SasClient::getCheckDetail(const GetCheckDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckDetailOutcome(GetCheckDetailResult(outcome.result()));
	else
		return GetCheckDetailOutcome(outcome.error());
}

void SasClient::getCheckDetailAsync(const GetCheckDetailRequest& request, const GetCheckDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCheckDetailOutcomeCallable SasClient::getCheckDetailCallable(const GetCheckDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckDetailOutcome()>>(
			[this, request]()
			{
			return this->getCheckDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCheckProcessOutcome SasClient::getCheckProcess(const GetCheckProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckProcessOutcome(GetCheckProcessResult(outcome.result()));
	else
		return GetCheckProcessOutcome(outcome.error());
}

void SasClient::getCheckProcessAsync(const GetCheckProcessRequest& request, const GetCheckProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCheckProcessOutcomeCallable SasClient::getCheckProcessCallable(const GetCheckProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckProcessOutcome()>>(
			[this, request]()
			{
			return this->getCheckProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCheckRiskStatisticsOutcome SasClient::getCheckRiskStatistics(const GetCheckRiskStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckRiskStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckRiskStatisticsOutcome(GetCheckRiskStatisticsResult(outcome.result()));
	else
		return GetCheckRiskStatisticsOutcome(outcome.error());
}

void SasClient::getCheckRiskStatisticsAsync(const GetCheckRiskStatisticsRequest& request, const GetCheckRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckRiskStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCheckRiskStatisticsOutcomeCallable SasClient::getCheckRiskStatisticsCallable(const GetCheckRiskStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckRiskStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getCheckRiskStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCheckSummaryOutcome SasClient::getCheckSummary(const GetCheckSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCheckSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCheckSummaryOutcome(GetCheckSummaryResult(outcome.result()));
	else
		return GetCheckSummaryOutcome(outcome.error());
}

void SasClient::getCheckSummaryAsync(const GetCheckSummaryRequest& request, const GetCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCheckSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCheckSummaryOutcomeCallable SasClient::getCheckSummaryCallable(const GetCheckSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCheckSummaryOutcome()>>(
			[this, request]()
			{
			return this->getCheckSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetClientRatioStatisticOutcome SasClient::getClientRatioStatistic(const GetClientRatioStatisticRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClientRatioStatisticOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClientRatioStatisticOutcome(GetClientRatioStatisticResult(outcome.result()));
	else
		return GetClientRatioStatisticOutcome(outcome.error());
}

void SasClient::getClientRatioStatisticAsync(const GetClientRatioStatisticRequest& request, const GetClientRatioStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClientRatioStatistic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetClientRatioStatisticOutcomeCallable SasClient::getClientRatioStatisticCallable(const GetClientRatioStatisticRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClientRatioStatisticOutcome()>>(
			[this, request]()
			{
			return this->getClientRatioStatistic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetClientUserDefineRuleOutcome SasClient::getClientUserDefineRule(const GetClientUserDefineRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClientUserDefineRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClientUserDefineRuleOutcome(GetClientUserDefineRuleResult(outcome.result()));
	else
		return GetClientUserDefineRuleOutcome(outcome.error());
}

void SasClient::getClientUserDefineRuleAsync(const GetClientUserDefineRuleRequest& request, const GetClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClientUserDefineRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetClientUserDefineRuleOutcomeCallable SasClient::getClientUserDefineRuleCallable(const GetClientUserDefineRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClientUserDefineRuleOutcome()>>(
			[this, request]()
			{
			return this->getClientUserDefineRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCloudAssetCriteriaOutcome SasClient::getCloudAssetCriteria(const GetCloudAssetCriteriaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudAssetCriteriaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudAssetCriteriaOutcome(GetCloudAssetCriteriaResult(outcome.result()));
	else
		return GetCloudAssetCriteriaOutcome(outcome.error());
}

void SasClient::getCloudAssetCriteriaAsync(const GetCloudAssetCriteriaRequest& request, const GetCloudAssetCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudAssetCriteria(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCloudAssetCriteriaOutcomeCallable SasClient::getCloudAssetCriteriaCallable(const GetCloudAssetCriteriaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudAssetCriteriaOutcome()>>(
			[this, request]()
			{
			return this->getCloudAssetCriteria(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCloudAssetDetailOutcome SasClient::getCloudAssetDetail(const GetCloudAssetDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudAssetDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudAssetDetailOutcome(GetCloudAssetDetailResult(outcome.result()));
	else
		return GetCloudAssetDetailOutcome(outcome.error());
}

void SasClient::getCloudAssetDetailAsync(const GetCloudAssetDetailRequest& request, const GetCloudAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudAssetDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCloudAssetDetailOutcomeCallable SasClient::getCloudAssetDetailCallable(const GetCloudAssetDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudAssetDetailOutcome()>>(
			[this, request]()
			{
			return this->getCloudAssetDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetCloudAssetSummaryOutcome SasClient::getCloudAssetSummary(const GetCloudAssetSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCloudAssetSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCloudAssetSummaryOutcome(GetCloudAssetSummaryResult(outcome.result()));
	else
		return GetCloudAssetSummaryOutcome(outcome.error());
}

void SasClient::getCloudAssetSummaryAsync(const GetCloudAssetSummaryRequest& request, const GetCloudAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCloudAssetSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetCloudAssetSummaryOutcomeCallable SasClient::getCloudAssetSummaryCallable(const GetCloudAssetSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCloudAssetSummaryOutcome()>>(
			[this, request]()
			{
			return this->getCloudAssetSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetClusterCheckItemWarningStatisticsOutcome SasClient::getClusterCheckItemWarningStatistics(const GetClusterCheckItemWarningStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterCheckItemWarningStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterCheckItemWarningStatisticsOutcome(GetClusterCheckItemWarningStatisticsResult(outcome.result()));
	else
		return GetClusterCheckItemWarningStatisticsOutcome(outcome.error());
}

void SasClient::getClusterCheckItemWarningStatisticsAsync(const GetClusterCheckItemWarningStatisticsRequest& request, const GetClusterCheckItemWarningStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterCheckItemWarningStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetClusterCheckItemWarningStatisticsOutcomeCallable SasClient::getClusterCheckItemWarningStatisticsCallable(const GetClusterCheckItemWarningStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterCheckItemWarningStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getClusterCheckItemWarningStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetClusterRuleSummaryOutcome SasClient::getClusterRuleSummary(const GetClusterRuleSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterRuleSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterRuleSummaryOutcome(GetClusterRuleSummaryResult(outcome.result()));
	else
		return GetClusterRuleSummaryOutcome(outcome.error());
}

void SasClient::getClusterRuleSummaryAsync(const GetClusterRuleSummaryRequest& request, const GetClusterRuleSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterRuleSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetClusterRuleSummaryOutcomeCallable SasClient::getClusterRuleSummaryCallable(const GetClusterRuleSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterRuleSummaryOutcome()>>(
			[this, request]()
			{
			return this->getClusterRuleSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetClusterSuspEventStatisticsOutcome SasClient::getClusterSuspEventStatistics(const GetClusterSuspEventStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClusterSuspEventStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClusterSuspEventStatisticsOutcome(GetClusterSuspEventStatisticsResult(outcome.result()));
	else
		return GetClusterSuspEventStatisticsOutcome(outcome.error());
}

void SasClient::getClusterSuspEventStatisticsAsync(const GetClusterSuspEventStatisticsRequest& request, const GetClusterSuspEventStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClusterSuspEventStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetClusterSuspEventStatisticsOutcomeCallable SasClient::getClusterSuspEventStatisticsCallable(const GetClusterSuspEventStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClusterSuspEventStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getClusterSuspEventStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetFileDetectApiInvokeInfoOutcome SasClient::getFileDetectApiInvokeInfo(const GetFileDetectApiInvokeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileDetectApiInvokeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileDetectApiInvokeInfoOutcome(GetFileDetectApiInvokeInfoResult(outcome.result()));
	else
		return GetFileDetectApiInvokeInfoOutcome(outcome.error());
}

void SasClient::getFileDetectApiInvokeInfoAsync(const GetFileDetectApiInvokeInfoRequest& request, const GetFileDetectApiInvokeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileDetectApiInvokeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetFileDetectApiInvokeInfoOutcomeCallable SasClient::getFileDetectApiInvokeInfoCallable(const GetFileDetectApiInvokeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileDetectApiInvokeInfoOutcome()>>(
			[this, request]()
			{
			return this->getFileDetectApiInvokeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetFileDetectResultOutcome SasClient::getFileDetectResult(const GetFileDetectResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileDetectResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileDetectResultOutcome(GetFileDetectResultResult(outcome.result()));
	else
		return GetFileDetectResultOutcome(outcome.error());
}

void SasClient::getFileDetectResultAsync(const GetFileDetectResultRequest& request, const GetFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileDetectResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetFileDetectResultOutcomeCallable SasClient::getFileDetectResultCallable(const GetFileDetectResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileDetectResultOutcome()>>(
			[this, request]()
			{
			return this->getFileDetectResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetHoneypotNodeOutcome SasClient::getHoneypotNode(const GetHoneypotNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHoneypotNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHoneypotNodeOutcome(GetHoneypotNodeResult(outcome.result()));
	else
		return GetHoneypotNodeOutcome(outcome.error());
}

void SasClient::getHoneypotNodeAsync(const GetHoneypotNodeRequest& request, const GetHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHoneypotNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetHoneypotNodeOutcomeCallable SasClient::getHoneypotNodeCallable(const GetHoneypotNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHoneypotNodeOutcome()>>(
			[this, request]()
			{
			return this->getHoneypotNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetHoneypotPresetOutcome SasClient::getHoneypotPreset(const GetHoneypotPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHoneypotPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHoneypotPresetOutcome(GetHoneypotPresetResult(outcome.result()));
	else
		return GetHoneypotPresetOutcome(outcome.error());
}

void SasClient::getHoneypotPresetAsync(const GetHoneypotPresetRequest& request, const GetHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHoneypotPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetHoneypotPresetOutcomeCallable SasClient::getHoneypotPresetCallable(const GetHoneypotPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHoneypotPresetOutcome()>>(
			[this, request]()
			{
			return this->getHoneypotPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetHoneypotProbeOutcome SasClient::getHoneypotProbe(const GetHoneypotProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHoneypotProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHoneypotProbeOutcome(GetHoneypotProbeResult(outcome.result()));
	else
		return GetHoneypotProbeOutcome(outcome.error());
}

void SasClient::getHoneypotProbeAsync(const GetHoneypotProbeRequest& request, const GetHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHoneypotProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetHoneypotProbeOutcomeCallable SasClient::getHoneypotProbeCallable(const GetHoneypotProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHoneypotProbeOutcome()>>(
			[this, request]()
			{
			return this->getHoneypotProbe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetImageScanNumInPeriodOutcome SasClient::getImageScanNumInPeriod(const GetImageScanNumInPeriodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageScanNumInPeriodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageScanNumInPeriodOutcome(GetImageScanNumInPeriodResult(outcome.result()));
	else
		return GetImageScanNumInPeriodOutcome(outcome.error());
}

void SasClient::getImageScanNumInPeriodAsync(const GetImageScanNumInPeriodRequest& request, const GetImageScanNumInPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageScanNumInPeriod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetImageScanNumInPeriodOutcomeCallable SasClient::getImageScanNumInPeriodCallable(const GetImageScanNumInPeriodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageScanNumInPeriodOutcome()>>(
			[this, request]()
			{
			return this->getImageScanNumInPeriod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetInterceptionRuleDetailOutcome SasClient::getInterceptionRuleDetail(const GetInterceptionRuleDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInterceptionRuleDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInterceptionRuleDetailOutcome(GetInterceptionRuleDetailResult(outcome.result()));
	else
		return GetInterceptionRuleDetailOutcome(outcome.error());
}

void SasClient::getInterceptionRuleDetailAsync(const GetInterceptionRuleDetailRequest& request, const GetInterceptionRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInterceptionRuleDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetInterceptionRuleDetailOutcomeCallable SasClient::getInterceptionRuleDetailCallable(const GetInterceptionRuleDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInterceptionRuleDetailOutcome()>>(
			[this, request]()
			{
			return this->getInterceptionRuleDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetInterceptionSummaryOutcome SasClient::getInterceptionSummary(const GetInterceptionSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInterceptionSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInterceptionSummaryOutcome(GetInterceptionSummaryResult(outcome.result()));
	else
		return GetInterceptionSummaryOutcome(outcome.error());
}

void SasClient::getInterceptionSummaryAsync(const GetInterceptionSummaryRequest& request, const GetInterceptionSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInterceptionSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetInterceptionSummaryOutcomeCallable SasClient::getInterceptionSummaryCallable(const GetInterceptionSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInterceptionSummaryOutcome()>>(
			[this, request]()
			{
			return this->getInterceptionSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetInterceptionTargetDetailOutcome SasClient::getInterceptionTargetDetail(const GetInterceptionTargetDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInterceptionTargetDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInterceptionTargetDetailOutcome(GetInterceptionTargetDetailResult(outcome.result()));
	else
		return GetInterceptionTargetDetailOutcome(outcome.error());
}

void SasClient::getInterceptionTargetDetailAsync(const GetInterceptionTargetDetailRequest& request, const GetInterceptionTargetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInterceptionTargetDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetInterceptionTargetDetailOutcomeCallable SasClient::getInterceptionTargetDetailCallable(const GetInterceptionTargetDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInterceptionTargetDetailOutcome()>>(
			[this, request]()
			{
			return this->getInterceptionTargetDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetLastOnceTaskInfoOutcome SasClient::getLastOnceTaskInfo(const GetLastOnceTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLastOnceTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLastOnceTaskInfoOutcome(GetLastOnceTaskInfoResult(outcome.result()));
	else
		return GetLastOnceTaskInfoOutcome(outcome.error());
}

void SasClient::getLastOnceTaskInfoAsync(const GetLastOnceTaskInfoRequest& request, const GetLastOnceTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLastOnceTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetLastOnceTaskInfoOutcomeCallable SasClient::getLastOnceTaskInfoCallable(const GetLastOnceTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLastOnceTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->getLastOnceTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetModuleConfigOutcome SasClient::getModuleConfig(const GetModuleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetModuleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetModuleConfigOutcome(GetModuleConfigResult(outcome.result()));
	else
		return GetModuleConfigOutcome(outcome.error());
}

void SasClient::getModuleConfigAsync(const GetModuleConfigRequest& request, const GetModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getModuleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetModuleConfigOutcomeCallable SasClient::getModuleConfigCallable(const GetModuleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetModuleConfigOutcome()>>(
			[this, request]()
			{
			return this->getModuleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetOnceTaskResultInfoOutcome SasClient::getOnceTaskResultInfo(const GetOnceTaskResultInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOnceTaskResultInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOnceTaskResultInfoOutcome(GetOnceTaskResultInfoResult(outcome.result()));
	else
		return GetOnceTaskResultInfoOutcome(outcome.error());
}

void SasClient::getOnceTaskResultInfoAsync(const GetOnceTaskResultInfoRequest& request, const GetOnceTaskResultInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOnceTaskResultInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetOnceTaskResultInfoOutcomeCallable SasClient::getOnceTaskResultInfoCallable(const GetOnceTaskResultInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOnceTaskResultInfoOutcome()>>(
			[this, request]()
			{
			return this->getOnceTaskResultInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetPropertyScheduleConfigOutcome SasClient::getPropertyScheduleConfig(const GetPropertyScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPropertyScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPropertyScheduleConfigOutcome(GetPropertyScheduleConfigResult(outcome.result()));
	else
		return GetPropertyScheduleConfigOutcome(outcome.error());
}

void SasClient::getPropertyScheduleConfigAsync(const GetPropertyScheduleConfigRequest& request, const GetPropertyScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPropertyScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetPropertyScheduleConfigOutcomeCallable SasClient::getPropertyScheduleConfigCallable(const GetPropertyScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPropertyScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->getPropertyScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetRulesCountOutcome SasClient::getRulesCount(const GetRulesCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRulesCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRulesCountOutcome(GetRulesCountResult(outcome.result()));
	else
		return GetRulesCountOutcome(outcome.error());
}

void SasClient::getRulesCountAsync(const GetRulesCountRequest& request, const GetRulesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRulesCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetRulesCountOutcomeCallable SasClient::getRulesCountCallable(const GetRulesCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRulesCountOutcome()>>(
			[this, request]()
			{
			return this->getRulesCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetServiceTrailOutcome SasClient::getServiceTrail(const GetServiceTrailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceTrailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceTrailOutcome(GetServiceTrailResult(outcome.result()));
	else
		return GetServiceTrailOutcome(outcome.error());
}

void SasClient::getServiceTrailAsync(const GetServiceTrailRequest& request, const GetServiceTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceTrail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetServiceTrailOutcomeCallable SasClient::getServiceTrailCallable(const GetServiceTrailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceTrailOutcome()>>(
			[this, request]()
			{
			return this->getServiceTrail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetSuspiciousStatisticsOutcome SasClient::getSuspiciousStatistics(const GetSuspiciousStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSuspiciousStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSuspiciousStatisticsOutcome(GetSuspiciousStatisticsResult(outcome.result()));
	else
		return GetSuspiciousStatisticsOutcome(outcome.error());
}

void SasClient::getSuspiciousStatisticsAsync(const GetSuspiciousStatisticsRequest& request, const GetSuspiciousStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSuspiciousStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetSuspiciousStatisticsOutcomeCallable SasClient::getSuspiciousStatisticsCallable(const GetSuspiciousStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSuspiciousStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getSuspiciousStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetVulStatisticsOutcome SasClient::getVulStatistics(const GetVulStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVulStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVulStatisticsOutcome(GetVulStatisticsResult(outcome.result()));
	else
		return GetVulStatisticsOutcome(outcome.error());
}

void SasClient::getVulStatisticsAsync(const GetVulStatisticsRequest& request, const GetVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVulStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetVulStatisticsOutcomeCallable SasClient::getVulStatisticsCallable(const GetVulStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVulStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getVulStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::GetVulWhitelistOutcome SasClient::getVulWhitelist(const GetVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVulWhitelistOutcome(GetVulWhitelistResult(outcome.result()));
	else
		return GetVulWhitelistOutcome(outcome.error());
}

void SasClient::getVulWhitelistAsync(const GetVulWhitelistRequest& request, const GetVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::GetVulWhitelistOutcomeCallable SasClient::getVulWhitelistCallable(const GetVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->getVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::HandleSecurityEventsOutcome SasClient::handleSecurityEvents(const HandleSecurityEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HandleSecurityEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HandleSecurityEventsOutcome(HandleSecurityEventsResult(outcome.result()));
	else
		return HandleSecurityEventsOutcome(outcome.error());
}

void SasClient::handleSecurityEventsAsync(const HandleSecurityEventsRequest& request, const HandleSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, handleSecurityEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::HandleSecurityEventsOutcomeCallable SasClient::handleSecurityEventsCallable(const HandleSecurityEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HandleSecurityEventsOutcome()>>(
			[this, request]()
			{
			return this->handleSecurityEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::HandleSimilarSecurityEventsOutcome SasClient::handleSimilarSecurityEvents(const HandleSimilarSecurityEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HandleSimilarSecurityEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HandleSimilarSecurityEventsOutcome(HandleSimilarSecurityEventsResult(outcome.result()));
	else
		return HandleSimilarSecurityEventsOutcome(outcome.error());
}

void SasClient::handleSimilarSecurityEventsAsync(const HandleSimilarSecurityEventsRequest& request, const HandleSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, handleSimilarSecurityEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::HandleSimilarSecurityEventsOutcomeCallable SasClient::handleSimilarSecurityEventsCallable(const HandleSimilarSecurityEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HandleSimilarSecurityEventsOutcome()>>(
			[this, request]()
			{
			return this->handleSimilarSecurityEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::IgnoreCheckItemsOutcome SasClient::ignoreCheckItems(const IgnoreCheckItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IgnoreCheckItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IgnoreCheckItemsOutcome(IgnoreCheckItemsResult(outcome.result()));
	else
		return IgnoreCheckItemsOutcome(outcome.error());
}

void SasClient::ignoreCheckItemsAsync(const IgnoreCheckItemsRequest& request, const IgnoreCheckItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ignoreCheckItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::IgnoreCheckItemsOutcomeCallable SasClient::ignoreCheckItemsCallable(const IgnoreCheckItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IgnoreCheckItemsOutcome()>>(
			[this, request]()
			{
			return this->ignoreCheckItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::IgnoreHcCheckWarningsOutcome SasClient::ignoreHcCheckWarnings(const IgnoreHcCheckWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IgnoreHcCheckWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IgnoreHcCheckWarningsOutcome(IgnoreHcCheckWarningsResult(outcome.result()));
	else
		return IgnoreHcCheckWarningsOutcome(outcome.error());
}

void SasClient::ignoreHcCheckWarningsAsync(const IgnoreHcCheckWarningsRequest& request, const IgnoreHcCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ignoreHcCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::IgnoreHcCheckWarningsOutcomeCallable SasClient::ignoreHcCheckWarningsCallable(const IgnoreHcCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IgnoreHcCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->ignoreHcCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::InstallBackupClientOutcome SasClient::installBackupClient(const InstallBackupClientRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallBackupClientOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallBackupClientOutcome(InstallBackupClientResult(outcome.result()));
	else
		return InstallBackupClientOutcome(outcome.error());
}

void SasClient::installBackupClientAsync(const InstallBackupClientRequest& request, const InstallBackupClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installBackupClient(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::InstallBackupClientOutcomeCallable SasClient::installBackupClientCallable(const InstallBackupClientRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallBackupClientOutcome()>>(
			[this, request]()
			{
			return this->installBackupClient(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::InstallCloudMonitorOutcome SasClient::installCloudMonitor(const InstallCloudMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallCloudMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallCloudMonitorOutcome(InstallCloudMonitorResult(outcome.result()));
	else
		return InstallCloudMonitorOutcome(outcome.error());
}

void SasClient::installCloudMonitorAsync(const InstallCloudMonitorRequest& request, const InstallCloudMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installCloudMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::InstallCloudMonitorOutcomeCallable SasClient::installCloudMonitorCallable(const InstallCloudMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallCloudMonitorOutcome()>>(
			[this, request]()
			{
			return this->installCloudMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::InstallPmAgentOutcome SasClient::installPmAgent(const InstallPmAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallPmAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallPmAgentOutcome(InstallPmAgentResult(outcome.result()));
	else
		return InstallPmAgentOutcome(outcome.error());
}

void SasClient::installPmAgentAsync(const InstallPmAgentRequest& request, const InstallPmAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installPmAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::InstallPmAgentOutcomeCallable SasClient::installPmAgentCallable(const InstallPmAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallPmAgentOutcome()>>(
			[this, request]()
			{
			return this->installPmAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::InstallUniBackupAgentOutcome SasClient::installUniBackupAgent(const InstallUniBackupAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InstallUniBackupAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InstallUniBackupAgentOutcome(InstallUniBackupAgentResult(outcome.result()));
	else
		return InstallUniBackupAgentOutcome(outcome.error());
}

void SasClient::installUniBackupAgentAsync(const InstallUniBackupAgentRequest& request, const InstallUniBackupAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, installUniBackupAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::InstallUniBackupAgentOutcomeCallable SasClient::installUniBackupAgentCallable(const InstallUniBackupAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InstallUniBackupAgentOutcome()>>(
			[this, request]()
			{
			return this->installUniBackupAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::JoinWebLockProcessWhiteListOutcome SasClient::joinWebLockProcessWhiteList(const JoinWebLockProcessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinWebLockProcessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinWebLockProcessWhiteListOutcome(JoinWebLockProcessWhiteListResult(outcome.result()));
	else
		return JoinWebLockProcessWhiteListOutcome(outcome.error());
}

void SasClient::joinWebLockProcessWhiteListAsync(const JoinWebLockProcessWhiteListRequest& request, const JoinWebLockProcessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinWebLockProcessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::JoinWebLockProcessWhiteListOutcomeCallable SasClient::joinWebLockProcessWhiteListCallable(const JoinWebLockProcessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinWebLockProcessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->joinWebLockProcessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAgentlessRegionOutcome SasClient::listAgentlessRegion(const ListAgentlessRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentlessRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentlessRegionOutcome(ListAgentlessRegionResult(outcome.result()));
	else
		return ListAgentlessRegionOutcome(outcome.error());
}

void SasClient::listAgentlessRegionAsync(const ListAgentlessRegionRequest& request, const ListAgentlessRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentlessRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAgentlessRegionOutcomeCallable SasClient::listAgentlessRegionCallable(const ListAgentlessRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentlessRegionOutcome()>>(
			[this, request]()
			{
			return this->listAgentlessRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAgentlessRelateMaliciousOutcome SasClient::listAgentlessRelateMalicious(const ListAgentlessRelateMaliciousRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentlessRelateMaliciousOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentlessRelateMaliciousOutcome(ListAgentlessRelateMaliciousResult(outcome.result()));
	else
		return ListAgentlessRelateMaliciousOutcome(outcome.error());
}

void SasClient::listAgentlessRelateMaliciousAsync(const ListAgentlessRelateMaliciousRequest& request, const ListAgentlessRelateMaliciousAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentlessRelateMalicious(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAgentlessRelateMaliciousOutcomeCallable SasClient::listAgentlessRelateMaliciousCallable(const ListAgentlessRelateMaliciousRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentlessRelateMaliciousOutcome()>>(
			[this, request]()
			{
			return this->listAgentlessRelateMalicious(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAgentlessRiskUuidOutcome SasClient::listAgentlessRiskUuid(const ListAgentlessRiskUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentlessRiskUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentlessRiskUuidOutcome(ListAgentlessRiskUuidResult(outcome.result()));
	else
		return ListAgentlessRiskUuidOutcome(outcome.error());
}

void SasClient::listAgentlessRiskUuidAsync(const ListAgentlessRiskUuidRequest& request, const ListAgentlessRiskUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentlessRiskUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAgentlessRiskUuidOutcomeCallable SasClient::listAgentlessRiskUuidCallable(const ListAgentlessRiskUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentlessRiskUuidOutcome()>>(
			[this, request]()
			{
			return this->listAgentlessRiskUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAgentlessTaskOutcome SasClient::listAgentlessTask(const ListAgentlessTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentlessTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentlessTaskOutcome(ListAgentlessTaskResult(outcome.result()));
	else
		return ListAgentlessTaskOutcome(outcome.error());
}

void SasClient::listAgentlessTaskAsync(const ListAgentlessTaskRequest& request, const ListAgentlessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentlessTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAgentlessTaskOutcomeCallable SasClient::listAgentlessTaskCallable(const ListAgentlessTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentlessTaskOutcome()>>(
			[this, request]()
			{
			return this->listAgentlessTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAssetRefreshTaskConfigOutcome SasClient::listAssetRefreshTaskConfig(const ListAssetRefreshTaskConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAssetRefreshTaskConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAssetRefreshTaskConfigOutcome(ListAssetRefreshTaskConfigResult(outcome.result()));
	else
		return ListAssetRefreshTaskConfigOutcome(outcome.error());
}

void SasClient::listAssetRefreshTaskConfigAsync(const ListAssetRefreshTaskConfigRequest& request, const ListAssetRefreshTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAssetRefreshTaskConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAssetRefreshTaskConfigOutcomeCallable SasClient::listAssetRefreshTaskConfigCallable(const ListAssetRefreshTaskConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAssetRefreshTaskConfigOutcome()>>(
			[this, request]()
			{
			return this->listAssetRefreshTaskConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAssetSelectionSelectedTargetOutcome SasClient::listAssetSelectionSelectedTarget(const ListAssetSelectionSelectedTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAssetSelectionSelectedTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAssetSelectionSelectedTargetOutcome(ListAssetSelectionSelectedTargetResult(outcome.result()));
	else
		return ListAssetSelectionSelectedTargetOutcome(outcome.error());
}

void SasClient::listAssetSelectionSelectedTargetAsync(const ListAssetSelectionSelectedTargetRequest& request, const ListAssetSelectionSelectedTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAssetSelectionSelectedTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAssetSelectionSelectedTargetOutcomeCallable SasClient::listAssetSelectionSelectedTargetCallable(const ListAssetSelectionSelectedTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAssetSelectionSelectedTargetOutcome()>>(
			[this, request]()
			{
			return this->listAssetSelectionSelectedTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAssetSelectionTargetOutcome SasClient::listAssetSelectionTarget(const ListAssetSelectionTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAssetSelectionTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAssetSelectionTargetOutcome(ListAssetSelectionTargetResult(outcome.result()));
	else
		return ListAssetSelectionTargetOutcome(outcome.error());
}

void SasClient::listAssetSelectionTargetAsync(const ListAssetSelectionTargetRequest& request, const ListAssetSelectionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAssetSelectionTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAssetSelectionTargetOutcomeCallable SasClient::listAssetSelectionTargetCallable(const ListAssetSelectionTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAssetSelectionTargetOutcome()>>(
			[this, request]()
			{
			return this->listAssetSelectionTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListAvailableHoneypotOutcome SasClient::listAvailableHoneypot(const ListAvailableHoneypotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAvailableHoneypotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAvailableHoneypotOutcome(ListAvailableHoneypotResult(outcome.result()));
	else
		return ListAvailableHoneypotOutcome(outcome.error());
}

void SasClient::listAvailableHoneypotAsync(const ListAvailableHoneypotRequest& request, const ListAvailableHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAvailableHoneypot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListAvailableHoneypotOutcomeCallable SasClient::listAvailableHoneypotCallable(const ListAvailableHoneypotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAvailableHoneypotOutcome()>>(
			[this, request]()
			{
			return this->listAvailableHoneypot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListCheckInstanceResultOutcome SasClient::listCheckInstanceResult(const ListCheckInstanceResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckInstanceResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckInstanceResultOutcome(ListCheckInstanceResultResult(outcome.result()));
	else
		return ListCheckInstanceResultOutcome(outcome.error());
}

void SasClient::listCheckInstanceResultAsync(const ListCheckInstanceResultRequest& request, const ListCheckInstanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckInstanceResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListCheckInstanceResultOutcomeCallable SasClient::listCheckInstanceResultCallable(const ListCheckInstanceResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckInstanceResultOutcome()>>(
			[this, request]()
			{
			return this->listCheckInstanceResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListCheckItemWarningMachineOutcome SasClient::listCheckItemWarningMachine(const ListCheckItemWarningMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckItemWarningMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckItemWarningMachineOutcome(ListCheckItemWarningMachineResult(outcome.result()));
	else
		return ListCheckItemWarningMachineOutcome(outcome.error());
}

void SasClient::listCheckItemWarningMachineAsync(const ListCheckItemWarningMachineRequest& request, const ListCheckItemWarningMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckItemWarningMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListCheckItemWarningMachineOutcomeCallable SasClient::listCheckItemWarningMachineCallable(const ListCheckItemWarningMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckItemWarningMachineOutcome()>>(
			[this, request]()
			{
			return this->listCheckItemWarningMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListCheckItemWarningSummaryOutcome SasClient::listCheckItemWarningSummary(const ListCheckItemWarningSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckItemWarningSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckItemWarningSummaryOutcome(ListCheckItemWarningSummaryResult(outcome.result()));
	else
		return ListCheckItemWarningSummaryOutcome(outcome.error());
}

void SasClient::listCheckItemWarningSummaryAsync(const ListCheckItemWarningSummaryRequest& request, const ListCheckItemWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckItemWarningSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListCheckItemWarningSummaryOutcomeCallable SasClient::listCheckItemWarningSummaryCallable(const ListCheckItemWarningSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckItemWarningSummaryOutcome()>>(
			[this, request]()
			{
			return this->listCheckItemWarningSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListCheckResultOutcome SasClient::listCheckResult(const ListCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckResultOutcome(ListCheckResultResult(outcome.result()));
	else
		return ListCheckResultOutcome(outcome.error());
}

void SasClient::listCheckResultAsync(const ListCheckResultRequest& request, const ListCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListCheckResultOutcomeCallable SasClient::listCheckResultCallable(const ListCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckResultOutcome()>>(
			[this, request]()
			{
			return this->listCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListCheckStandardOutcome SasClient::listCheckStandard(const ListCheckStandardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCheckStandardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCheckStandardOutcome(ListCheckStandardResult(outcome.result()));
	else
		return ListCheckStandardOutcome(outcome.error());
}

void SasClient::listCheckStandardAsync(const ListCheckStandardRequest& request, const ListCheckStandardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCheckStandard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListCheckStandardOutcomeCallable SasClient::listCheckStandardCallable(const ListCheckStandardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCheckStandardOutcome()>>(
			[this, request]()
			{
			return this->listCheckStandard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListClientUserDefineRuleTypesOutcome SasClient::listClientUserDefineRuleTypes(const ListClientUserDefineRuleTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClientUserDefineRuleTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClientUserDefineRuleTypesOutcome(ListClientUserDefineRuleTypesResult(outcome.result()));
	else
		return ListClientUserDefineRuleTypesOutcome(outcome.error());
}

void SasClient::listClientUserDefineRuleTypesAsync(const ListClientUserDefineRuleTypesRequest& request, const ListClientUserDefineRuleTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClientUserDefineRuleTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListClientUserDefineRuleTypesOutcomeCallable SasClient::listClientUserDefineRuleTypesCallable(const ListClientUserDefineRuleTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClientUserDefineRuleTypesOutcome()>>(
			[this, request]()
			{
			return this->listClientUserDefineRuleTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListClientUserDefineRulesOutcome SasClient::listClientUserDefineRules(const ListClientUserDefineRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClientUserDefineRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClientUserDefineRulesOutcome(ListClientUserDefineRulesResult(outcome.result()));
	else
		return ListClientUserDefineRulesOutcome(outcome.error());
}

void SasClient::listClientUserDefineRulesAsync(const ListClientUserDefineRulesRequest& request, const ListClientUserDefineRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClientUserDefineRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListClientUserDefineRulesOutcomeCallable SasClient::listClientUserDefineRulesCallable(const ListClientUserDefineRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClientUserDefineRulesOutcome()>>(
			[this, request]()
			{
			return this->listClientUserDefineRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListCloudAssetInstancesOutcome SasClient::listCloudAssetInstances(const ListCloudAssetInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCloudAssetInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCloudAssetInstancesOutcome(ListCloudAssetInstancesResult(outcome.result()));
	else
		return ListCloudAssetInstancesOutcome(outcome.error());
}

void SasClient::listCloudAssetInstancesAsync(const ListCloudAssetInstancesRequest& request, const ListCloudAssetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCloudAssetInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListCloudAssetInstancesOutcomeCallable SasClient::listCloudAssetInstancesCallable(const ListCloudAssetInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCloudAssetInstancesOutcome()>>(
			[this, request]()
			{
			return this->listCloudAssetInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListClusterCnnfStatusDetailOutcome SasClient::listClusterCnnfStatusDetail(const ListClusterCnnfStatusDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterCnnfStatusDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterCnnfStatusDetailOutcome(ListClusterCnnfStatusDetailResult(outcome.result()));
	else
		return ListClusterCnnfStatusDetailOutcome(outcome.error());
}

void SasClient::listClusterCnnfStatusDetailAsync(const ListClusterCnnfStatusDetailRequest& request, const ListClusterCnnfStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterCnnfStatusDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListClusterCnnfStatusDetailOutcomeCallable SasClient::listClusterCnnfStatusDetailCallable(const ListClusterCnnfStatusDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterCnnfStatusDetailOutcome()>>(
			[this, request]()
			{
			return this->listClusterCnnfStatusDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListClusterInterceptionConfigOutcome SasClient::listClusterInterceptionConfig(const ListClusterInterceptionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClusterInterceptionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClusterInterceptionConfigOutcome(ListClusterInterceptionConfigResult(outcome.result()));
	else
		return ListClusterInterceptionConfigOutcome(outcome.error());
}

void SasClient::listClusterInterceptionConfigAsync(const ListClusterInterceptionConfigRequest& request, const ListClusterInterceptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClusterInterceptionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListClusterInterceptionConfigOutcomeCallable SasClient::listClusterInterceptionConfigCallable(const ListClusterInterceptionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClusterInterceptionConfigOutcome()>>(
			[this, request]()
			{
			return this->listClusterInterceptionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListHoneypotOutcome SasClient::listHoneypot(const ListHoneypotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHoneypotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHoneypotOutcome(ListHoneypotResult(outcome.result()));
	else
		return ListHoneypotOutcome(outcome.error());
}

void SasClient::listHoneypotAsync(const ListHoneypotRequest& request, const ListHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHoneypot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListHoneypotOutcomeCallable SasClient::listHoneypotCallable(const ListHoneypotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHoneypotOutcome()>>(
			[this, request]()
			{
			return this->listHoneypot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListHoneypotAlarmEventsOutcome SasClient::listHoneypotAlarmEvents(const ListHoneypotAlarmEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHoneypotAlarmEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHoneypotAlarmEventsOutcome(ListHoneypotAlarmEventsResult(outcome.result()));
	else
		return ListHoneypotAlarmEventsOutcome(outcome.error());
}

void SasClient::listHoneypotAlarmEventsAsync(const ListHoneypotAlarmEventsRequest& request, const ListHoneypotAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHoneypotAlarmEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListHoneypotAlarmEventsOutcomeCallable SasClient::listHoneypotAlarmEventsCallable(const ListHoneypotAlarmEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHoneypotAlarmEventsOutcome()>>(
			[this, request]()
			{
			return this->listHoneypotAlarmEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListHoneypotNodeOutcome SasClient::listHoneypotNode(const ListHoneypotNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHoneypotNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHoneypotNodeOutcome(ListHoneypotNodeResult(outcome.result()));
	else
		return ListHoneypotNodeOutcome(outcome.error());
}

void SasClient::listHoneypotNodeAsync(const ListHoneypotNodeRequest& request, const ListHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHoneypotNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListHoneypotNodeOutcomeCallable SasClient::listHoneypotNodeCallable(const ListHoneypotNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHoneypotNodeOutcome()>>(
			[this, request]()
			{
			return this->listHoneypotNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListHoneypotPresetOutcome SasClient::listHoneypotPreset(const ListHoneypotPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHoneypotPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHoneypotPresetOutcome(ListHoneypotPresetResult(outcome.result()));
	else
		return ListHoneypotPresetOutcome(outcome.error());
}

void SasClient::listHoneypotPresetAsync(const ListHoneypotPresetRequest& request, const ListHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHoneypotPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListHoneypotPresetOutcomeCallable SasClient::listHoneypotPresetCallable(const ListHoneypotPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHoneypotPresetOutcome()>>(
			[this, request]()
			{
			return this->listHoneypotPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListHoneypotProbeOutcome SasClient::listHoneypotProbe(const ListHoneypotProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHoneypotProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHoneypotProbeOutcome(ListHoneypotProbeResult(outcome.result()));
	else
		return ListHoneypotProbeOutcome(outcome.error());
}

void SasClient::listHoneypotProbeAsync(const ListHoneypotProbeRequest& request, const ListHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHoneypotProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListHoneypotProbeOutcomeCallable SasClient::listHoneypotProbeCallable(const ListHoneypotProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHoneypotProbeOutcome()>>(
			[this, request]()
			{
			return this->listHoneypotProbe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListImageRegistryRegionOutcome SasClient::listImageRegistryRegion(const ListImageRegistryRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImageRegistryRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImageRegistryRegionOutcome(ListImageRegistryRegionResult(outcome.result()));
	else
		return ListImageRegistryRegionOutcome(outcome.error());
}

void SasClient::listImageRegistryRegionAsync(const ListImageRegistryRegionRequest& request, const ListImageRegistryRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImageRegistryRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListImageRegistryRegionOutcomeCallable SasClient::listImageRegistryRegionCallable(const ListImageRegistryRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImageRegistryRegionOutcome()>>(
			[this, request]()
			{
			return this->listImageRegistryRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListImageRiskOutcome SasClient::listImageRisk(const ListImageRiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListImageRiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListImageRiskOutcome(ListImageRiskResult(outcome.result()));
	else
		return ListImageRiskOutcome(outcome.error());
}

void SasClient::listImageRiskAsync(const ListImageRiskRequest& request, const ListImageRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listImageRisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListImageRiskOutcomeCallable SasClient::listImageRiskCallable(const ListImageRiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListImageRiskOutcome()>>(
			[this, request]()
			{
			return this->listImageRisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListInstanceCatalogOutcome SasClient::listInstanceCatalog(const ListInstanceCatalogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstanceCatalogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstanceCatalogOutcome(ListInstanceCatalogResult(outcome.result()));
	else
		return ListInstanceCatalogOutcome(outcome.error());
}

void SasClient::listInstanceCatalogAsync(const ListInstanceCatalogRequest& request, const ListInstanceCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstanceCatalog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListInstanceCatalogOutcomeCallable SasClient::listInstanceCatalogCallable(const ListInstanceCatalogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstanceCatalogOutcome()>>(
			[this, request]()
			{
			return this->listInstanceCatalog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListInterceptionHistoryOutcome SasClient::listInterceptionHistory(const ListInterceptionHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterceptionHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterceptionHistoryOutcome(ListInterceptionHistoryResult(outcome.result()));
	else
		return ListInterceptionHistoryOutcome(outcome.error());
}

void SasClient::listInterceptionHistoryAsync(const ListInterceptionHistoryRequest& request, const ListInterceptionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterceptionHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListInterceptionHistoryOutcomeCallable SasClient::listInterceptionHistoryCallable(const ListInterceptionHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterceptionHistoryOutcome()>>(
			[this, request]()
			{
			return this->listInterceptionHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListInterceptionRulePageOutcome SasClient::listInterceptionRulePage(const ListInterceptionRulePageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterceptionRulePageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterceptionRulePageOutcome(ListInterceptionRulePageResult(outcome.result()));
	else
		return ListInterceptionRulePageOutcome(outcome.error());
}

void SasClient::listInterceptionRulePageAsync(const ListInterceptionRulePageRequest& request, const ListInterceptionRulePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterceptionRulePage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListInterceptionRulePageOutcomeCallable SasClient::listInterceptionRulePageCallable(const ListInterceptionRulePageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterceptionRulePageOutcome()>>(
			[this, request]()
			{
			return this->listInterceptionRulePage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListInterceptionTargetPageOutcome SasClient::listInterceptionTargetPage(const ListInterceptionTargetPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInterceptionTargetPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInterceptionTargetPageOutcome(ListInterceptionTargetPageResult(outcome.result()));
	else
		return ListInterceptionTargetPageOutcome(outcome.error());
}

void SasClient::listInterceptionTargetPageAsync(const ListInterceptionTargetPageRequest& request, const ListInterceptionTargetPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInterceptionTargetPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListInterceptionTargetPageOutcomeCallable SasClient::listInterceptionTargetPageCallable(const ListInterceptionTargetPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInterceptionTargetPageOutcome()>>(
			[this, request]()
			{
			return this->listInterceptionTargetPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListPluginForUuidOutcome SasClient::listPluginForUuid(const ListPluginForUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPluginForUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPluginForUuidOutcome(ListPluginForUuidResult(outcome.result()));
	else
		return ListPluginForUuidOutcome(outcome.error());
}

void SasClient::listPluginForUuidAsync(const ListPluginForUuidRequest& request, const ListPluginForUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPluginForUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListPluginForUuidOutcomeCallable SasClient::listPluginForUuidCallable(const ListPluginForUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPluginForUuidOutcome()>>(
			[this, request]()
			{
			return this->listPluginForUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListPodRiskOutcome SasClient::listPodRisk(const ListPodRiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPodRiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPodRiskOutcome(ListPodRiskResult(outcome.result()));
	else
		return ListPodRiskOutcome(outcome.error());
}

void SasClient::listPodRiskAsync(const ListPodRiskRequest& request, const ListPodRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPodRisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListPodRiskOutcomeCallable SasClient::listPodRiskCallable(const ListPodRiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPodRiskOutcome()>>(
			[this, request]()
			{
			return this->listPodRisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListPrivateRegistryListOutcome SasClient::listPrivateRegistryList(const ListPrivateRegistryListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateRegistryListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateRegistryListOutcome(ListPrivateRegistryListResult(outcome.result()));
	else
		return ListPrivateRegistryListOutcome(outcome.error());
}

void SasClient::listPrivateRegistryListAsync(const ListPrivateRegistryListRequest& request, const ListPrivateRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateRegistryList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListPrivateRegistryListOutcomeCallable SasClient::listPrivateRegistryListCallable(const ListPrivateRegistryListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateRegistryListOutcome()>>(
			[this, request]()
			{
			return this->listPrivateRegistryList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListPrivateRegistryTypeOutcome SasClient::listPrivateRegistryType(const ListPrivateRegistryTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivateRegistryTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivateRegistryTypeOutcome(ListPrivateRegistryTypeResult(outcome.result()));
	else
		return ListPrivateRegistryTypeOutcome(outcome.error());
}

void SasClient::listPrivateRegistryTypeAsync(const ListPrivateRegistryTypeRequest& request, const ListPrivateRegistryTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivateRegistryType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListPrivateRegistryTypeOutcomeCallable SasClient::listPrivateRegistryTypeCallable(const ListPrivateRegistryTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivateRegistryTypeOutcome()>>(
			[this, request]()
			{
			return this->listPrivateRegistryType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListQueryRaspAppInfoOutcome SasClient::listQueryRaspAppInfo(const ListQueryRaspAppInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQueryRaspAppInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQueryRaspAppInfoOutcome(ListQueryRaspAppInfoResult(outcome.result()));
	else
		return ListQueryRaspAppInfoOutcome(outcome.error());
}

void SasClient::listQueryRaspAppInfoAsync(const ListQueryRaspAppInfoRequest& request, const ListQueryRaspAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQueryRaspAppInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListQueryRaspAppInfoOutcomeCallable SasClient::listQueryRaspAppInfoCallable(const ListQueryRaspAppInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQueryRaspAppInfoOutcome()>>(
			[this, request]()
			{
			return this->listQueryRaspAppInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListRuleTargetAllOutcome SasClient::listRuleTargetAll(const ListRuleTargetAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRuleTargetAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRuleTargetAllOutcome(ListRuleTargetAllResult(outcome.result()));
	else
		return ListRuleTargetAllOutcome(outcome.error());
}

void SasClient::listRuleTargetAllAsync(const ListRuleTargetAllRequest& request, const ListRuleTargetAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRuleTargetAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListRuleTargetAllOutcomeCallable SasClient::listRuleTargetAllCallable(const ListRuleTargetAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRuleTargetAllOutcome()>>(
			[this, request]()
			{
			return this->listRuleTargetAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListSystemAggregationRulesOutcome SasClient::listSystemAggregationRules(const ListSystemAggregationRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemAggregationRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemAggregationRulesOutcome(ListSystemAggregationRulesResult(outcome.result()));
	else
		return ListSystemAggregationRulesOutcome(outcome.error());
}

void SasClient::listSystemAggregationRulesAsync(const ListSystemAggregationRulesRequest& request, const ListSystemAggregationRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemAggregationRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListSystemAggregationRulesOutcomeCallable SasClient::listSystemAggregationRulesCallable(const ListSystemAggregationRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemAggregationRulesOutcome()>>(
			[this, request]()
			{
			return this->listSystemAggregationRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListSystemClientRuleTypesOutcome SasClient::listSystemClientRuleTypes(const ListSystemClientRuleTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemClientRuleTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemClientRuleTypesOutcome(ListSystemClientRuleTypesResult(outcome.result()));
	else
		return ListSystemClientRuleTypesOutcome(outcome.error());
}

void SasClient::listSystemClientRuleTypesAsync(const ListSystemClientRuleTypesRequest& request, const ListSystemClientRuleTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemClientRuleTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListSystemClientRuleTypesOutcomeCallable SasClient::listSystemClientRuleTypesCallable(const ListSystemClientRuleTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemClientRuleTypesOutcome()>>(
			[this, request]()
			{
			return this->listSystemClientRuleTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListSystemClientRulesOutcome SasClient::listSystemClientRules(const ListSystemClientRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemClientRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemClientRulesOutcome(ListSystemClientRulesResult(outcome.result()));
	else
		return ListSystemClientRulesOutcome(outcome.error());
}

void SasClient::listSystemClientRulesAsync(const ListSystemClientRulesRequest& request, const ListSystemClientRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemClientRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListSystemClientRulesOutcomeCallable SasClient::listSystemClientRulesCallable(const ListSystemClientRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemClientRulesOutcome()>>(
			[this, request]()
			{
			return this->listSystemClientRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListSystemRuleAggregationTypesOutcome SasClient::listSystemRuleAggregationTypes(const ListSystemRuleAggregationTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSystemRuleAggregationTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSystemRuleAggregationTypesOutcome(ListSystemRuleAggregationTypesResult(outcome.result()));
	else
		return ListSystemRuleAggregationTypesOutcome(outcome.error());
}

void SasClient::listSystemRuleAggregationTypesAsync(const ListSystemRuleAggregationTypesRequest& request, const ListSystemRuleAggregationTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSystemRuleAggregationTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListSystemRuleAggregationTypesOutcomeCallable SasClient::listSystemRuleAggregationTypesCallable(const ListSystemRuleAggregationTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSystemRuleAggregationTypesOutcome()>>(
			[this, request]()
			{
			return this->listSystemRuleAggregationTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListUninstallAegisMachinesOutcome SasClient::listUninstallAegisMachines(const ListUninstallAegisMachinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUninstallAegisMachinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUninstallAegisMachinesOutcome(ListUninstallAegisMachinesResult(outcome.result()));
	else
		return ListUninstallAegisMachinesOutcome(outcome.error());
}

void SasClient::listUninstallAegisMachinesAsync(const ListUninstallAegisMachinesRequest& request, const ListUninstallAegisMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUninstallAegisMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListUninstallAegisMachinesOutcomeCallable SasClient::listUninstallAegisMachinesCallable(const ListUninstallAegisMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUninstallAegisMachinesOutcome()>>(
			[this, request]()
			{
			return this->listUninstallAegisMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListUuidsByWebPathOutcome SasClient::listUuidsByWebPath(const ListUuidsByWebPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUuidsByWebPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUuidsByWebPathOutcome(ListUuidsByWebPathResult(outcome.result()));
	else
		return ListUuidsByWebPathOutcome(outcome.error());
}

void SasClient::listUuidsByWebPathAsync(const ListUuidsByWebPathRequest& request, const ListUuidsByWebPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUuidsByWebPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListUuidsByWebPathOutcomeCallable SasClient::listUuidsByWebPathCallable(const ListUuidsByWebPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUuidsByWebPathOutcome()>>(
			[this, request]()
			{
			return this->listUuidsByWebPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ListVulAutoRepairConfigOutcome SasClient::listVulAutoRepairConfig(const ListVulAutoRepairConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVulAutoRepairConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVulAutoRepairConfigOutcome(ListVulAutoRepairConfigResult(outcome.result()));
	else
		return ListVulAutoRepairConfigOutcome(outcome.error());
}

void SasClient::listVulAutoRepairConfigAsync(const ListVulAutoRepairConfigRequest& request, const ListVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVulAutoRepairConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ListVulAutoRepairConfigOutcomeCallable SasClient::listVulAutoRepairConfigCallable(const ListVulAutoRepairConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVulAutoRepairConfigOutcome()>>(
			[this, request]()
			{
			return this->listVulAutoRepairConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAccessKeyLeakDealOutcome SasClient::modifyAccessKeyLeakDeal(const ModifyAccessKeyLeakDealRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccessKeyLeakDealOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccessKeyLeakDealOutcome(ModifyAccessKeyLeakDealResult(outcome.result()));
	else
		return ModifyAccessKeyLeakDealOutcome(outcome.error());
}

void SasClient::modifyAccessKeyLeakDealAsync(const ModifyAccessKeyLeakDealRequest& request, const ModifyAccessKeyLeakDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessKeyLeakDeal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAccessKeyLeakDealOutcomeCallable SasClient::modifyAccessKeyLeakDealCallable(const ModifyAccessKeyLeakDealRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessKeyLeakDealOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessKeyLeakDeal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAntiBruteForceRuleOutcome SasClient::modifyAntiBruteForceRule(const ModifyAntiBruteForceRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAntiBruteForceRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAntiBruteForceRuleOutcome(ModifyAntiBruteForceRuleResult(outcome.result()));
	else
		return ModifyAntiBruteForceRuleOutcome(outcome.error());
}

void SasClient::modifyAntiBruteForceRuleAsync(const ModifyAntiBruteForceRuleRequest& request, const ModifyAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAntiBruteForceRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAntiBruteForceRuleOutcomeCallable SasClient::modifyAntiBruteForceRuleCallable(const ModifyAntiBruteForceRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAntiBruteForceRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyAntiBruteForceRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAppVulScanCycleOutcome SasClient::modifyAppVulScanCycle(const ModifyAppVulScanCycleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppVulScanCycleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppVulScanCycleOutcome(ModifyAppVulScanCycleResult(outcome.result()));
	else
		return ModifyAppVulScanCycleOutcome(outcome.error());
}

void SasClient::modifyAppVulScanCycleAsync(const ModifyAppVulScanCycleRequest& request, const ModifyAppVulScanCycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAppVulScanCycle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAppVulScanCycleOutcomeCallable SasClient::modifyAppVulScanCycleCallable(const ModifyAppVulScanCycleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppVulScanCycleOutcome()>>(
			[this, request]()
			{
			return this->modifyAppVulScanCycle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAssetGroupOutcome SasClient::modifyAssetGroup(const ModifyAssetGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAssetGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAssetGroupOutcome(ModifyAssetGroupResult(outcome.result()));
	else
		return ModifyAssetGroupOutcome(outcome.error());
}

void SasClient::modifyAssetGroupAsync(const ModifyAssetGroupRequest& request, const ModifyAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAssetGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAssetGroupOutcomeCallable SasClient::modifyAssetGroupCallable(const ModifyAssetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAssetGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAssetGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAssetImportantOutcome SasClient::modifyAssetImportant(const ModifyAssetImportantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAssetImportantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAssetImportantOutcome(ModifyAssetImportantResult(outcome.result()));
	else
		return ModifyAssetImportantOutcome(outcome.error());
}

void SasClient::modifyAssetImportantAsync(const ModifyAssetImportantRequest& request, const ModifyAssetImportantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAssetImportant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAssetImportantOutcomeCallable SasClient::modifyAssetImportantCallable(const ModifyAssetImportantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAssetImportantOutcome()>>(
			[this, request]()
			{
			return this->modifyAssetImportant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyAutoDelConfigOutcome SasClient::modifyAutoDelConfig(const ModifyAutoDelConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAutoDelConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAutoDelConfigOutcome(ModifyAutoDelConfigResult(outcome.result()));
	else
		return ModifyAutoDelConfigOutcome(outcome.error());
}

void SasClient::modifyAutoDelConfigAsync(const ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoDelConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyAutoDelConfigOutcomeCallable SasClient::modifyAutoDelConfigCallable(const ModifyAutoDelConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoDelConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoDelConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyBackupPolicyOutcome SasClient::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPolicyOutcome(ModifyBackupPolicyResult(outcome.result()));
	else
		return ModifyBackupPolicyOutcome(outcome.error());
}

void SasClient::modifyBackupPolicyAsync(const ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyBackupPolicyOutcomeCallable SasClient::modifyBackupPolicyCallable(const ModifyBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyBackupPolicyStatusOutcome SasClient::modifyBackupPolicyStatus(const ModifyBackupPolicyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBackupPolicyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBackupPolicyStatusOutcome(ModifyBackupPolicyStatusResult(outcome.result()));
	else
		return ModifyBackupPolicyStatusOutcome(outcome.error());
}

void SasClient::modifyBackupPolicyStatusAsync(const ModifyBackupPolicyStatusRequest& request, const ModifyBackupPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBackupPolicyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyBackupPolicyStatusOutcomeCallable SasClient::modifyBackupPolicyStatusCallable(const ModifyBackupPolicyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBackupPolicyStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyBackupPolicyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyClearLogstoreStorageOutcome SasClient::modifyClearLogstoreStorage(const ModifyClearLogstoreStorageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClearLogstoreStorageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClearLogstoreStorageOutcome(ModifyClearLogstoreStorageResult(outcome.result()));
	else
		return ModifyClearLogstoreStorageOutcome(outcome.error());
}

void SasClient::modifyClearLogstoreStorageAsync(const ModifyClearLogstoreStorageRequest& request, const ModifyClearLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClearLogstoreStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyClearLogstoreStorageOutcomeCallable SasClient::modifyClearLogstoreStorageCallable(const ModifyClearLogstoreStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClearLogstoreStorageOutcome()>>(
			[this, request]()
			{
			return this->modifyClearLogstoreStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyClientConfSetupOutcome SasClient::modifyClientConfSetup(const ModifyClientConfSetupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClientConfSetupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClientConfSetupOutcome(ModifyClientConfSetupResult(outcome.result()));
	else
		return ModifyClientConfSetupOutcome(outcome.error());
}

void SasClient::modifyClientConfSetupAsync(const ModifyClientConfSetupRequest& request, const ModifyClientConfSetupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClientConfSetup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyClientConfSetupOutcomeCallable SasClient::modifyClientConfSetupCallable(const ModifyClientConfSetupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClientConfSetupOutcome()>>(
			[this, request]()
			{
			return this->modifyClientConfSetup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyClientConfStrategyOutcome SasClient::modifyClientConfStrategy(const ModifyClientConfStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClientConfStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClientConfStrategyOutcome(ModifyClientConfStrategyResult(outcome.result()));
	else
		return ModifyClientConfStrategyOutcome(outcome.error());
}

void SasClient::modifyClientConfStrategyAsync(const ModifyClientConfStrategyRequest& request, const ModifyClientConfStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClientConfStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyClientConfStrategyOutcomeCallable SasClient::modifyClientConfStrategyCallable(const ModifyClientConfStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClientConfStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyClientConfStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyClientUserDefineRuleOutcome SasClient::modifyClientUserDefineRule(const ModifyClientUserDefineRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClientUserDefineRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClientUserDefineRuleOutcome(ModifyClientUserDefineRuleResult(outcome.result()));
	else
		return ModifyClientUserDefineRuleOutcome(outcome.error());
}

void SasClient::modifyClientUserDefineRuleAsync(const ModifyClientUserDefineRuleRequest& request, const ModifyClientUserDefineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClientUserDefineRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyClientUserDefineRuleOutcomeCallable SasClient::modifyClientUserDefineRuleCallable(const ModifyClientUserDefineRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClientUserDefineRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyClientUserDefineRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyClusterCnnfStatusUserConfirmOutcome SasClient::modifyClusterCnnfStatusUserConfirm(const ModifyClusterCnnfStatusUserConfirmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyClusterCnnfStatusUserConfirmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyClusterCnnfStatusUserConfirmOutcome(ModifyClusterCnnfStatusUserConfirmResult(outcome.result()));
	else
		return ModifyClusterCnnfStatusUserConfirmOutcome(outcome.error());
}

void SasClient::modifyClusterCnnfStatusUserConfirmAsync(const ModifyClusterCnnfStatusUserConfirmRequest& request, const ModifyClusterCnnfStatusUserConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClusterCnnfStatusUserConfirm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyClusterCnnfStatusUserConfirmOutcomeCallable SasClient::modifyClusterCnnfStatusUserConfirmCallable(const ModifyClusterCnnfStatusUserConfirmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClusterCnnfStatusUserConfirmOutcome()>>(
			[this, request]()
			{
			return this->modifyClusterCnnfStatusUserConfirm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyConcernNecessityOutcome SasClient::modifyConcernNecessity(const ModifyConcernNecessityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyConcernNecessityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyConcernNecessityOutcome(ModifyConcernNecessityResult(outcome.result()));
	else
		return ModifyConcernNecessityOutcome(outcome.error());
}

void SasClient::modifyConcernNecessityAsync(const ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyConcernNecessity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyConcernNecessityOutcomeCallable SasClient::modifyConcernNecessityCallable(const ModifyConcernNecessityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyConcernNecessityOutcome()>>(
			[this, request]()
			{
			return this->modifyConcernNecessity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyCreateVulWhitelistOutcome SasClient::modifyCreateVulWhitelist(const ModifyCreateVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCreateVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCreateVulWhitelistOutcome(ModifyCreateVulWhitelistResult(outcome.result()));
	else
		return ModifyCreateVulWhitelistOutcome(outcome.error());
}

void SasClient::modifyCreateVulWhitelistAsync(const ModifyCreateVulWhitelistRequest& request, const ModifyCreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCreateVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyCreateVulWhitelistOutcomeCallable SasClient::modifyCreateVulWhitelistCallable(const ModifyCreateVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCreateVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->modifyCreateVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyCustomBlockRecordOutcome SasClient::modifyCustomBlockRecord(const ModifyCustomBlockRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCustomBlockRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCustomBlockRecordOutcome(ModifyCustomBlockRecordResult(outcome.result()));
	else
		return ModifyCustomBlockRecordOutcome(outcome.error());
}

void SasClient::modifyCustomBlockRecordAsync(const ModifyCustomBlockRecordRequest& request, const ModifyCustomBlockRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCustomBlockRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyCustomBlockRecordOutcomeCallable SasClient::modifyCustomBlockRecordCallable(const ModifyCustomBlockRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCustomBlockRecordOutcome()>>(
			[this, request]()
			{
			return this->modifyCustomBlockRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyCycleTaskOutcome SasClient::modifyCycleTask(const ModifyCycleTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCycleTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCycleTaskOutcome(ModifyCycleTaskResult(outcome.result()));
	else
		return ModifyCycleTaskOutcome(outcome.error());
}

void SasClient::modifyCycleTaskAsync(const ModifyCycleTaskRequest& request, const ModifyCycleTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCycleTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyCycleTaskOutcomeCallable SasClient::modifyCycleTaskCallable(const ModifyCycleTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCycleTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyCycleTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyEmgVulSubmitOutcome SasClient::modifyEmgVulSubmit(const ModifyEmgVulSubmitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEmgVulSubmitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEmgVulSubmitOutcome(ModifyEmgVulSubmitResult(outcome.result()));
	else
		return ModifyEmgVulSubmitOutcome(outcome.error());
}

void SasClient::modifyEmgVulSubmitAsync(const ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEmgVulSubmit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyEmgVulSubmitOutcomeCallable SasClient::modifyEmgVulSubmitCallable(const ModifyEmgVulSubmitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEmgVulSubmitOutcome()>>(
			[this, request]()
			{
			return this->modifyEmgVulSubmit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyGroupPropertyOutcome SasClient::modifyGroupProperty(const ModifyGroupPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGroupPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGroupPropertyOutcome(ModifyGroupPropertyResult(outcome.result()));
	else
		return ModifyGroupPropertyOutcome(outcome.error());
}

void SasClient::modifyGroupPropertyAsync(const ModifyGroupPropertyRequest& request, const ModifyGroupPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGroupProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyGroupPropertyOutcomeCallable SasClient::modifyGroupPropertyCallable(const ModifyGroupPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGroupPropertyOutcome()>>(
			[this, request]()
			{
			return this->modifyGroupProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyInstanceAntiBruteForceRuleOutcome SasClient::modifyInstanceAntiBruteForceRule(const ModifyInstanceAntiBruteForceRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceAntiBruteForceRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceAntiBruteForceRuleOutcome(ModifyInstanceAntiBruteForceRuleResult(outcome.result()));
	else
		return ModifyInstanceAntiBruteForceRuleOutcome(outcome.error());
}

void SasClient::modifyInstanceAntiBruteForceRuleAsync(const ModifyInstanceAntiBruteForceRuleRequest& request, const ModifyInstanceAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceAntiBruteForceRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyInstanceAntiBruteForceRuleOutcomeCallable SasClient::modifyInstanceAntiBruteForceRuleCallable(const ModifyInstanceAntiBruteForceRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceAntiBruteForceRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceAntiBruteForceRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyInterceptionRuleOutcome SasClient::modifyInterceptionRule(const ModifyInterceptionRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInterceptionRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInterceptionRuleOutcome(ModifyInterceptionRuleResult(outcome.result()));
	else
		return ModifyInterceptionRuleOutcome(outcome.error());
}

void SasClient::modifyInterceptionRuleAsync(const ModifyInterceptionRuleRequest& request, const ModifyInterceptionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInterceptionRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyInterceptionRuleOutcomeCallable SasClient::modifyInterceptionRuleCallable(const ModifyInterceptionRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInterceptionRuleOutcome()>>(
			[this, request]()
			{
			return this->modifyInterceptionRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyInterceptionRuleSwitchOutcome SasClient::modifyInterceptionRuleSwitch(const ModifyInterceptionRuleSwitchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInterceptionRuleSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInterceptionRuleSwitchOutcome(ModifyInterceptionRuleSwitchResult(outcome.result()));
	else
		return ModifyInterceptionRuleSwitchOutcome(outcome.error());
}

void SasClient::modifyInterceptionRuleSwitchAsync(const ModifyInterceptionRuleSwitchRequest& request, const ModifyInterceptionRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInterceptionRuleSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyInterceptionRuleSwitchOutcomeCallable SasClient::modifyInterceptionRuleSwitchCallable(const ModifyInterceptionRuleSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInterceptionRuleSwitchOutcome()>>(
			[this, request]()
			{
			return this->modifyInterceptionRuleSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyInterceptionTargetOutcome SasClient::modifyInterceptionTarget(const ModifyInterceptionTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInterceptionTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInterceptionTargetOutcome(ModifyInterceptionTargetResult(outcome.result()));
	else
		return ModifyInterceptionTargetOutcome(outcome.error());
}

void SasClient::modifyInterceptionTargetAsync(const ModifyInterceptionTargetRequest& request, const ModifyInterceptionTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInterceptionTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyInterceptionTargetOutcomeCallable SasClient::modifyInterceptionTargetCallable(const ModifyInterceptionTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInterceptionTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyInterceptionTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyLogMetaStatusOutcome SasClient::modifyLogMetaStatus(const ModifyLogMetaStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLogMetaStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLogMetaStatusOutcome(ModifyLogMetaStatusResult(outcome.result()));
	else
		return ModifyLogMetaStatusOutcome(outcome.error());
}

void SasClient::modifyLogMetaStatusAsync(const ModifyLogMetaStatusRequest& request, const ModifyLogMetaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogMetaStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyLogMetaStatusOutcomeCallable SasClient::modifyLogMetaStatusCallable(const ModifyLogMetaStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogMetaStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyLogMetaStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyLoginBaseConfigOutcome SasClient::modifyLoginBaseConfig(const ModifyLoginBaseConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoginBaseConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoginBaseConfigOutcome(ModifyLoginBaseConfigResult(outcome.result()));
	else
		return ModifyLoginBaseConfigOutcome(outcome.error());
}

void SasClient::modifyLoginBaseConfigAsync(const ModifyLoginBaseConfigRequest& request, const ModifyLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoginBaseConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyLoginBaseConfigOutcomeCallable SasClient::modifyLoginBaseConfigCallable(const ModifyLoginBaseConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoginBaseConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyLoginBaseConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyLoginSwitchConfigOutcome SasClient::modifyLoginSwitchConfig(const ModifyLoginSwitchConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLoginSwitchConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLoginSwitchConfigOutcome(ModifyLoginSwitchConfigResult(outcome.result()));
	else
		return ModifyLoginSwitchConfigOutcome(outcome.error());
}

void SasClient::modifyLoginSwitchConfigAsync(const ModifyLoginSwitchConfigRequest& request, const ModifyLoginSwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLoginSwitchConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyLoginSwitchConfigOutcomeCallable SasClient::modifyLoginSwitchConfigCallable(const ModifyLoginSwitchConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLoginSwitchConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyLoginSwitchConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyNoticeConfigOutcome SasClient::modifyNoticeConfig(const ModifyNoticeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNoticeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNoticeConfigOutcome(ModifyNoticeConfigResult(outcome.result()));
	else
		return ModifyNoticeConfigOutcome(outcome.error());
}

void SasClient::modifyNoticeConfigAsync(const ModifyNoticeConfigRequest& request, const ModifyNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNoticeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyNoticeConfigOutcomeCallable SasClient::modifyNoticeConfigCallable(const ModifyNoticeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNoticeConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyNoticeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyOpenLogShipperOutcome SasClient::modifyOpenLogShipper(const ModifyOpenLogShipperRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOpenLogShipperOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOpenLogShipperOutcome(ModifyOpenLogShipperResult(outcome.result()));
	else
		return ModifyOpenLogShipperOutcome(outcome.error());
}

void SasClient::modifyOpenLogShipperAsync(const ModifyOpenLogShipperRequest& request, const ModifyOpenLogShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOpenLogShipper(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyOpenLogShipperOutcomeCallable SasClient::modifyOpenLogShipperCallable(const ModifyOpenLogShipperRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOpenLogShipperOutcome()>>(
			[this, request]()
			{
			return this->modifyOpenLogShipper(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyOperateVulOutcome SasClient::modifyOperateVul(const ModifyOperateVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOperateVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOperateVulOutcome(ModifyOperateVulResult(outcome.result()));
	else
		return ModifyOperateVulOutcome(outcome.error());
}

void SasClient::modifyOperateVulAsync(const ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOperateVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyOperateVulOutcomeCallable SasClient::modifyOperateVulCallable(const ModifyOperateVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOperateVulOutcome()>>(
			[this, request]()
			{
			return this->modifyOperateVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyPropertyScheduleConfigOutcome SasClient::modifyPropertyScheduleConfig(const ModifyPropertyScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPropertyScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPropertyScheduleConfigOutcome(ModifyPropertyScheduleConfigResult(outcome.result()));
	else
		return ModifyPropertyScheduleConfigOutcome(outcome.error());
}

void SasClient::modifyPropertyScheduleConfigAsync(const ModifyPropertyScheduleConfigRequest& request, const ModifyPropertyScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPropertyScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyPropertyScheduleConfigOutcomeCallable SasClient::modifyPropertyScheduleConfigCallable(const ModifyPropertyScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPropertyScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyPropertyScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyPushAllTaskOutcome SasClient::modifyPushAllTask(const ModifyPushAllTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPushAllTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPushAllTaskOutcome(ModifyPushAllTaskResult(outcome.result()));
	else
		return ModifyPushAllTaskOutcome(outcome.error());
}

void SasClient::modifyPushAllTaskAsync(const ModifyPushAllTaskRequest& request, const ModifyPushAllTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPushAllTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyPushAllTaskOutcomeCallable SasClient::modifyPushAllTaskCallable(const ModifyPushAllTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPushAllTaskOutcome()>>(
			[this, request]()
			{
			return this->modifyPushAllTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyRefreshProcessInfoOutcome SasClient::modifyRefreshProcessInfo(const ModifyRefreshProcessInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRefreshProcessInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRefreshProcessInfoOutcome(ModifyRefreshProcessInfoResult(outcome.result()));
	else
		return ModifyRefreshProcessInfoOutcome(outcome.error());
}

void SasClient::modifyRefreshProcessInfoAsync(const ModifyRefreshProcessInfoRequest& request, const ModifyRefreshProcessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRefreshProcessInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyRefreshProcessInfoOutcomeCallable SasClient::modifyRefreshProcessInfoCallable(const ModifyRefreshProcessInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRefreshProcessInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyRefreshProcessInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyRiskCheckStatusOutcome SasClient::modifyRiskCheckStatus(const ModifyRiskCheckStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRiskCheckStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRiskCheckStatusOutcome(ModifyRiskCheckStatusResult(outcome.result()));
	else
		return ModifyRiskCheckStatusOutcome(outcome.error());
}

void SasClient::modifyRiskCheckStatusAsync(const ModifyRiskCheckStatusRequest& request, const ModifyRiskCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRiskCheckStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyRiskCheckStatusOutcomeCallable SasClient::modifyRiskCheckStatusCallable(const ModifyRiskCheckStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRiskCheckStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRiskCheckStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyRiskSingleResultStatusOutcome SasClient::modifyRiskSingleResultStatus(const ModifyRiskSingleResultStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRiskSingleResultStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRiskSingleResultStatusOutcome(ModifyRiskSingleResultStatusResult(outcome.result()));
	else
		return ModifyRiskSingleResultStatusOutcome(outcome.error());
}

void SasClient::modifyRiskSingleResultStatusAsync(const ModifyRiskSingleResultStatusRequest& request, const ModifyRiskSingleResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRiskSingleResultStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyRiskSingleResultStatusOutcomeCallable SasClient::modifyRiskSingleResultStatusCallable(const ModifyRiskSingleResultStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRiskSingleResultStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyRiskSingleResultStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifySecurityCheckScheduleConfigOutcome SasClient::modifySecurityCheckScheduleConfig(const ModifySecurityCheckScheduleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityCheckScheduleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityCheckScheduleConfigOutcome(ModifySecurityCheckScheduleConfigResult(outcome.result()));
	else
		return ModifySecurityCheckScheduleConfigOutcome(outcome.error());
}

void SasClient::modifySecurityCheckScheduleConfigAsync(const ModifySecurityCheckScheduleConfigRequest& request, const ModifySecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityCheckScheduleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifySecurityCheckScheduleConfigOutcomeCallable SasClient::modifySecurityCheckScheduleConfigCallable(const ModifySecurityCheckScheduleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityCheckScheduleConfigOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityCheckScheduleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifySecurityEventMarkMissIndividuallyOutcome SasClient::modifySecurityEventMarkMissIndividually(const ModifySecurityEventMarkMissIndividuallyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySecurityEventMarkMissIndividuallyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySecurityEventMarkMissIndividuallyOutcome(ModifySecurityEventMarkMissIndividuallyResult(outcome.result()));
	else
		return ModifySecurityEventMarkMissIndividuallyOutcome(outcome.error());
}

void SasClient::modifySecurityEventMarkMissIndividuallyAsync(const ModifySecurityEventMarkMissIndividuallyRequest& request, const ModifySecurityEventMarkMissIndividuallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySecurityEventMarkMissIndividually(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifySecurityEventMarkMissIndividuallyOutcomeCallable SasClient::modifySecurityEventMarkMissIndividuallyCallable(const ModifySecurityEventMarkMissIndividuallyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySecurityEventMarkMissIndividuallyOutcome()>>(
			[this, request]()
			{
			return this->modifySecurityEventMarkMissIndividually(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyStartVulScanOutcome SasClient::modifyStartVulScan(const ModifyStartVulScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStartVulScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStartVulScanOutcome(ModifyStartVulScanResult(outcome.result()));
	else
		return ModifyStartVulScanOutcome(outcome.error());
}

void SasClient::modifyStartVulScanAsync(const ModifyStartVulScanRequest& request, const ModifyStartVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStartVulScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyStartVulScanOutcomeCallable SasClient::modifyStartVulScanCallable(const ModifyStartVulScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStartVulScanOutcome()>>(
			[this, request]()
			{
			return this->modifyStartVulScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyStrategyOutcome SasClient::modifyStrategy(const ModifyStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStrategyOutcome(ModifyStrategyResult(outcome.result()));
	else
		return ModifyStrategyOutcome(outcome.error());
}

void SasClient::modifyStrategyAsync(const ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyStrategyOutcomeCallable SasClient::modifyStrategyCallable(const ModifyStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyStrategyTargetOutcome SasClient::modifyStrategyTarget(const ModifyStrategyTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStrategyTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStrategyTargetOutcome(ModifyStrategyTargetResult(outcome.result()));
	else
		return ModifyStrategyTargetOutcome(outcome.error());
}

void SasClient::modifyStrategyTargetAsync(const ModifyStrategyTargetRequest& request, const ModifyStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStrategyTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyStrategyTargetOutcomeCallable SasClient::modifyStrategyTargetCallable(const ModifyStrategyTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStrategyTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyStrategyTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyTagWithUuidOutcome SasClient::modifyTagWithUuid(const ModifyTagWithUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTagWithUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTagWithUuidOutcome(ModifyTagWithUuidResult(outcome.result()));
	else
		return ModifyTagWithUuidOutcome(outcome.error());
}

void SasClient::modifyTagWithUuidAsync(const ModifyTagWithUuidRequest& request, const ModifyTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTagWithUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyTagWithUuidOutcomeCallable SasClient::modifyTagWithUuidCallable(const ModifyTagWithUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTagWithUuidOutcome()>>(
			[this, request]()
			{
			return this->modifyTagWithUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyUniBackupPolicyOutcome SasClient::modifyUniBackupPolicy(const ModifyUniBackupPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUniBackupPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUniBackupPolicyOutcome(ModifyUniBackupPolicyResult(outcome.result()));
	else
		return ModifyUniBackupPolicyOutcome(outcome.error());
}

void SasClient::modifyUniBackupPolicyAsync(const ModifyUniBackupPolicyRequest& request, const ModifyUniBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUniBackupPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyUniBackupPolicyOutcomeCallable SasClient::modifyUniBackupPolicyCallable(const ModifyUniBackupPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUniBackupPolicyOutcome()>>(
			[this, request]()
			{
			return this->modifyUniBackupPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyVpcHoneyPotOutcome SasClient::modifyVpcHoneyPot(const ModifyVpcHoneyPotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpcHoneyPotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpcHoneyPotOutcome(ModifyVpcHoneyPotResult(outcome.result()));
	else
		return ModifyVpcHoneyPotOutcome(outcome.error());
}

void SasClient::modifyVpcHoneyPotAsync(const ModifyVpcHoneyPotRequest& request, const ModifyVpcHoneyPotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpcHoneyPot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyVpcHoneyPotOutcomeCallable SasClient::modifyVpcHoneyPotCallable(const ModifyVpcHoneyPotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpcHoneyPotOutcome()>>(
			[this, request]()
			{
			return this->modifyVpcHoneyPot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyVulConfigOutcome SasClient::modifyVulConfig(const ModifyVulConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVulConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVulConfigOutcome(ModifyVulConfigResult(outcome.result()));
	else
		return ModifyVulConfigOutcome(outcome.error());
}

void SasClient::modifyVulConfigAsync(const ModifyVulConfigRequest& request, const ModifyVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyVulConfigOutcomeCallable SasClient::modifyVulConfigCallable(const ModifyVulConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyVulConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyVulTargetOutcome SasClient::modifyVulTarget(const ModifyVulTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVulTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVulTargetOutcome(ModifyVulTargetResult(outcome.result()));
	else
		return ModifyVulTargetOutcome(outcome.error());
}

void SasClient::modifyVulTargetAsync(const ModifyVulTargetRequest& request, const ModifyVulTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyVulTargetOutcomeCallable SasClient::modifyVulTargetCallable(const ModifyVulTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyVulTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyVulTargetConfigOutcome SasClient::modifyVulTargetConfig(const ModifyVulTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVulTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVulTargetConfigOutcome(ModifyVulTargetConfigResult(outcome.result()));
	else
		return ModifyVulTargetConfigOutcome(outcome.error());
}

void SasClient::modifyVulTargetConfigAsync(const ModifyVulTargetConfigRequest& request, const ModifyVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyVulTargetConfigOutcomeCallable SasClient::modifyVulTargetConfigCallable(const ModifyVulTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyVulTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyVulWhitelistTargetOutcome SasClient::modifyVulWhitelistTarget(const ModifyVulWhitelistTargetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVulWhitelistTargetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVulWhitelistTargetOutcome(ModifyVulWhitelistTargetResult(outcome.result()));
	else
		return ModifyVulWhitelistTargetOutcome(outcome.error());
}

void SasClient::modifyVulWhitelistTargetAsync(const ModifyVulWhitelistTargetRequest& request, const ModifyVulWhitelistTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulWhitelistTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyVulWhitelistTargetOutcomeCallable SasClient::modifyVulWhitelistTargetCallable(const ModifyVulWhitelistTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulWhitelistTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyVulWhitelistTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockCreateConfigOutcome SasClient::modifyWebLockCreateConfig(const ModifyWebLockCreateConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockCreateConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockCreateConfigOutcome(ModifyWebLockCreateConfigResult(outcome.result()));
	else
		return ModifyWebLockCreateConfigOutcome(outcome.error());
}

void SasClient::modifyWebLockCreateConfigAsync(const ModifyWebLockCreateConfigRequest& request, const ModifyWebLockCreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockCreateConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockCreateConfigOutcomeCallable SasClient::modifyWebLockCreateConfigCallable(const ModifyWebLockCreateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockCreateConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockCreateConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockDeleteConfigOutcome SasClient::modifyWebLockDeleteConfig(const ModifyWebLockDeleteConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockDeleteConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockDeleteConfigOutcome(ModifyWebLockDeleteConfigResult(outcome.result()));
	else
		return ModifyWebLockDeleteConfigOutcome(outcome.error());
}

void SasClient::modifyWebLockDeleteConfigAsync(const ModifyWebLockDeleteConfigRequest& request, const ModifyWebLockDeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockDeleteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockDeleteConfigOutcomeCallable SasClient::modifyWebLockDeleteConfigCallable(const ModifyWebLockDeleteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockDeleteConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockDeleteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockProcessStatusOutcome SasClient::modifyWebLockProcessStatus(const ModifyWebLockProcessStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockProcessStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockProcessStatusOutcome(ModifyWebLockProcessStatusResult(outcome.result()));
	else
		return ModifyWebLockProcessStatusOutcome(outcome.error());
}

void SasClient::modifyWebLockProcessStatusAsync(const ModifyWebLockProcessStatusRequest& request, const ModifyWebLockProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockProcessStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockProcessStatusOutcomeCallable SasClient::modifyWebLockProcessStatusCallable(const ModifyWebLockProcessStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockProcessStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockProcessStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockStartOutcome SasClient::modifyWebLockStart(const ModifyWebLockStartRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockStartOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockStartOutcome(ModifyWebLockStartResult(outcome.result()));
	else
		return ModifyWebLockStartOutcome(outcome.error());
}

void SasClient::modifyWebLockStartAsync(const ModifyWebLockStartRequest& request, const ModifyWebLockStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockStart(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockStartOutcomeCallable SasClient::modifyWebLockStartCallable(const ModifyWebLockStartRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockStartOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockStart(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockStatusOutcome SasClient::modifyWebLockStatus(const ModifyWebLockStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockStatusOutcome(ModifyWebLockStatusResult(outcome.result()));
	else
		return ModifyWebLockStatusOutcome(outcome.error());
}

void SasClient::modifyWebLockStatusAsync(const ModifyWebLockStatusRequest& request, const ModifyWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockStatusOutcomeCallable SasClient::modifyWebLockStatusCallable(const ModifyWebLockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockUnbindOutcome SasClient::modifyWebLockUnbind(const ModifyWebLockUnbindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockUnbindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockUnbindOutcome(ModifyWebLockUnbindResult(outcome.result()));
	else
		return ModifyWebLockUnbindOutcome(outcome.error());
}

void SasClient::modifyWebLockUnbindAsync(const ModifyWebLockUnbindRequest& request, const ModifyWebLockUnbindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockUnbind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockUnbindOutcomeCallable SasClient::modifyWebLockUnbindCallable(const ModifyWebLockUnbindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockUnbindOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockUnbind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebLockUpdateConfigOutcome SasClient::modifyWebLockUpdateConfig(const ModifyWebLockUpdateConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockUpdateConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockUpdateConfigOutcome(ModifyWebLockUpdateConfigResult(outcome.result()));
	else
		return ModifyWebLockUpdateConfigOutcome(outcome.error());
}

void SasClient::modifyWebLockUpdateConfigAsync(const ModifyWebLockUpdateConfigRequest& request, const ModifyWebLockUpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockUpdateConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebLockUpdateConfigOutcomeCallable SasClient::modifyWebLockUpdateConfigCallable(const ModifyWebLockUpdateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockUpdateConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockUpdateConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ModifyWebPathOutcome SasClient::modifyWebPath(const ModifyWebPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebPathOutcome(ModifyWebPathResult(outcome.result()));
	else
		return ModifyWebPathOutcome(outcome.error());
}

void SasClient::modifyWebPathAsync(const ModifyWebPathRequest& request, const ModifyWebPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ModifyWebPathOutcomeCallable SasClient::modifyWebPathCallable(const ModifyWebPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebPathOutcome()>>(
			[this, request]()
			{
			return this->modifyWebPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OpenSensitiveFileScanOutcome SasClient::openSensitiveFileScan(const OpenSensitiveFileScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenSensitiveFileScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenSensitiveFileScanOutcome(OpenSensitiveFileScanResult(outcome.result()));
	else
		return OpenSensitiveFileScanOutcome(outcome.error());
}

void SasClient::openSensitiveFileScanAsync(const OpenSensitiveFileScanRequest& request, const OpenSensitiveFileScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openSensitiveFileScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OpenSensitiveFileScanOutcomeCallable SasClient::openSensitiveFileScanCallable(const OpenSensitiveFileScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenSensitiveFileScanOutcome()>>(
			[this, request]()
			{
			return this->openSensitiveFileScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateAgentClientInstallOutcome SasClient::operateAgentClientInstall(const OperateAgentClientInstallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateAgentClientInstallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateAgentClientInstallOutcome(OperateAgentClientInstallResult(outcome.result()));
	else
		return OperateAgentClientInstallOutcome(outcome.error());
}

void SasClient::operateAgentClientInstallAsync(const OperateAgentClientInstallRequest& request, const OperateAgentClientInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAgentClientInstall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateAgentClientInstallOutcomeCallable SasClient::operateAgentClientInstallCallable(const OperateAgentClientInstallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAgentClientInstallOutcome()>>(
			[this, request]()
			{
			return this->operateAgentClientInstall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateCommonOverallConfigOutcome SasClient::operateCommonOverallConfig(const OperateCommonOverallConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateCommonOverallConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateCommonOverallConfigOutcome(OperateCommonOverallConfigResult(outcome.result()));
	else
		return OperateCommonOverallConfigOutcome(outcome.error());
}

void SasClient::operateCommonOverallConfigAsync(const OperateCommonOverallConfigRequest& request, const OperateCommonOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateCommonOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateCommonOverallConfigOutcomeCallable SasClient::operateCommonOverallConfigCallable(const OperateCommonOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateCommonOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->operateCommonOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateCommonTargetConfigOutcome SasClient::operateCommonTargetConfig(const OperateCommonTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateCommonTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateCommonTargetConfigOutcome(OperateCommonTargetConfigResult(outcome.result()));
	else
		return OperateCommonTargetConfigOutcome(outcome.error());
}

void SasClient::operateCommonTargetConfigAsync(const OperateCommonTargetConfigRequest& request, const OperateCommonTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateCommonTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateCommonTargetConfigOutcomeCallable SasClient::operateCommonTargetConfigCallable(const OperateCommonTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateCommonTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->operateCommonTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateImageBaselineWhitelistOutcome SasClient::operateImageBaselineWhitelist(const OperateImageBaselineWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateImageBaselineWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateImageBaselineWhitelistOutcome(OperateImageBaselineWhitelistResult(outcome.result()));
	else
		return OperateImageBaselineWhitelistOutcome(outcome.error());
}

void SasClient::operateImageBaselineWhitelistAsync(const OperateImageBaselineWhitelistRequest& request, const OperateImageBaselineWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateImageBaselineWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateImageBaselineWhitelistOutcomeCallable SasClient::operateImageBaselineWhitelistCallable(const OperateImageBaselineWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateImageBaselineWhitelistOutcome()>>(
			[this, request]()
			{
			return this->operateImageBaselineWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateImageVulOutcome SasClient::operateImageVul(const OperateImageVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateImageVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateImageVulOutcome(OperateImageVulResult(outcome.result()));
	else
		return OperateImageVulOutcome(outcome.error());
}

void SasClient::operateImageVulAsync(const OperateImageVulRequest& request, const OperateImageVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateImageVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateImageVulOutcomeCallable SasClient::operateImageVulCallable(const OperateImageVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateImageVulOutcome()>>(
			[this, request]()
			{
			return this->operateImageVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateSuspiciousOverallConfigOutcome SasClient::operateSuspiciousOverallConfig(const OperateSuspiciousOverallConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateSuspiciousOverallConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateSuspiciousOverallConfigOutcome(OperateSuspiciousOverallConfigResult(outcome.result()));
	else
		return OperateSuspiciousOverallConfigOutcome(outcome.error());
}

void SasClient::operateSuspiciousOverallConfigAsync(const OperateSuspiciousOverallConfigRequest& request, const OperateSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateSuspiciousOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateSuspiciousOverallConfigOutcomeCallable SasClient::operateSuspiciousOverallConfigCallable(const OperateSuspiciousOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateSuspiciousOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->operateSuspiciousOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateSuspiciousTargetConfigOutcome SasClient::operateSuspiciousTargetConfig(const OperateSuspiciousTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateSuspiciousTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateSuspiciousTargetConfigOutcome(OperateSuspiciousTargetConfigResult(outcome.result()));
	else
		return OperateSuspiciousTargetConfigOutcome(outcome.error());
}

void SasClient::operateSuspiciousTargetConfigAsync(const OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateSuspiciousTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateSuspiciousTargetConfigOutcomeCallable SasClient::operateSuspiciousTargetConfigCallable(const OperateSuspiciousTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateSuspiciousTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->operateSuspiciousTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateVirusEventsOutcome SasClient::operateVirusEvents(const OperateVirusEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateVirusEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateVirusEventsOutcome(OperateVirusEventsResult(outcome.result()));
	else
		return OperateVirusEventsOutcome(outcome.error());
}

void SasClient::operateVirusEventsAsync(const OperateVirusEventsRequest& request, const OperateVirusEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateVirusEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateVirusEventsOutcomeCallable SasClient::operateVirusEventsCallable(const OperateVirusEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateVirusEventsOutcome()>>(
			[this, request]()
			{
			return this->operateVirusEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateVulsOutcome SasClient::operateVuls(const OperateVulsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateVulsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateVulsOutcome(OperateVulsResult(outcome.result()));
	else
		return OperateVulsOutcome(outcome.error());
}

void SasClient::operateVulsAsync(const OperateVulsRequest& request, const OperateVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateVuls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateVulsOutcomeCallable SasClient::operateVulsCallable(const OperateVulsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateVulsOutcome()>>(
			[this, request]()
			{
			return this->operateVuls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperateWebLockFileEventsOutcome SasClient::operateWebLockFileEvents(const OperateWebLockFileEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateWebLockFileEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateWebLockFileEventsOutcome(OperateWebLockFileEventsResult(outcome.result()));
	else
		return OperateWebLockFileEventsOutcome(outcome.error());
}

void SasClient::operateWebLockFileEventsAsync(const OperateWebLockFileEventsRequest& request, const OperateWebLockFileEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateWebLockFileEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperateWebLockFileEventsOutcomeCallable SasClient::operateWebLockFileEventsCallable(const OperateWebLockFileEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateWebLockFileEventsOutcome()>>(
			[this, request]()
			{
			return this->operateWebLockFileEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperationCancelIgnoreSuspEventOutcome SasClient::operationCancelIgnoreSuspEvent(const OperationCancelIgnoreSuspEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperationCancelIgnoreSuspEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperationCancelIgnoreSuspEventOutcome(OperationCancelIgnoreSuspEventResult(outcome.result()));
	else
		return OperationCancelIgnoreSuspEventOutcome(outcome.error());
}

void SasClient::operationCancelIgnoreSuspEventAsync(const OperationCancelIgnoreSuspEventRequest& request, const OperationCancelIgnoreSuspEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operationCancelIgnoreSuspEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperationCancelIgnoreSuspEventOutcomeCallable SasClient::operationCancelIgnoreSuspEventCallable(const OperationCancelIgnoreSuspEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperationCancelIgnoreSuspEventOutcome()>>(
			[this, request]()
			{
			return this->operationCancelIgnoreSuspEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::OperationSuspEventsOutcome SasClient::operationSuspEvents(const OperationSuspEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperationSuspEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperationSuspEventsOutcome(OperationSuspEventsResult(outcome.result()));
	else
		return OperationSuspEventsOutcome(outcome.error());
}

void SasClient::operationSuspEventsAsync(const OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operationSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::OperationSuspEventsOutcomeCallable SasClient::operationSuspEventsCallable(const OperationSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperationSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->operationSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::PageImageRegistryOutcome SasClient::pageImageRegistry(const PageImageRegistryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PageImageRegistryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PageImageRegistryOutcome(PageImageRegistryResult(outcome.result()));
	else
		return PageImageRegistryOutcome(outcome.error());
}

void SasClient::pageImageRegistryAsync(const PageImageRegistryRequest& request, const PageImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pageImageRegistry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::PageImageRegistryOutcomeCallable SasClient::pageImageRegistryCallable(const PageImageRegistryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PageImageRegistryOutcome()>>(
			[this, request]()
			{
			return this->pageImageRegistry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::PauseClientOutcome SasClient::pauseClient(const PauseClientRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseClientOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseClientOutcome(PauseClientResult(outcome.result()));
	else
		return PauseClientOutcome(outcome.error());
}

void SasClient::pauseClientAsync(const PauseClientRequest& request, const PauseClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseClient(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::PauseClientOutcomeCallable SasClient::pauseClientCallable(const PauseClientRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseClientOutcome()>>(
			[this, request]()
			{
			return this->pauseClient(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::PublicCreateImageScanTaskOutcome SasClient::publicCreateImageScanTask(const PublicCreateImageScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublicCreateImageScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublicCreateImageScanTaskOutcome(PublicCreateImageScanTaskResult(outcome.result()));
	else
		return PublicCreateImageScanTaskOutcome(outcome.error());
}

void SasClient::publicCreateImageScanTaskAsync(const PublicCreateImageScanTaskRequest& request, const PublicCreateImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publicCreateImageScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::PublicCreateImageScanTaskOutcomeCallable SasClient::publicCreateImageScanTaskCallable(const PublicCreateImageScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublicCreateImageScanTaskOutcome()>>(
			[this, request]()
			{
			return this->publicCreateImageScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::PublicPreCheckImageScanTaskOutcome SasClient::publicPreCheckImageScanTask(const PublicPreCheckImageScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublicPreCheckImageScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublicPreCheckImageScanTaskOutcome(PublicPreCheckImageScanTaskResult(outcome.result()));
	else
		return PublicPreCheckImageScanTaskOutcome(outcome.error());
}

void SasClient::publicPreCheckImageScanTaskAsync(const PublicPreCheckImageScanTaskRequest& request, const PublicPreCheckImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publicPreCheckImageScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::PublicPreCheckImageScanTaskOutcomeCallable SasClient::publicPreCheckImageScanTaskCallable(const PublicPreCheckImageScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublicPreCheckImageScanTaskOutcome()>>(
			[this, request]()
			{
			return this->publicPreCheckImageScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::PublicSyncAndCreateImageScanTaskOutcome SasClient::publicSyncAndCreateImageScanTask(const PublicSyncAndCreateImageScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublicSyncAndCreateImageScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublicSyncAndCreateImageScanTaskOutcome(PublicSyncAndCreateImageScanTaskResult(outcome.result()));
	else
		return PublicSyncAndCreateImageScanTaskOutcome(outcome.error());
}

void SasClient::publicSyncAndCreateImageScanTaskAsync(const PublicSyncAndCreateImageScanTaskRequest& request, const PublicSyncAndCreateImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publicSyncAndCreateImageScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::PublicSyncAndCreateImageScanTaskOutcomeCallable SasClient::publicSyncAndCreateImageScanTaskCallable(const PublicSyncAndCreateImageScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublicSyncAndCreateImageScanTaskOutcome()>>(
			[this, request]()
			{
			return this->publicSyncAndCreateImageScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::QueryDiscoverDatabaseOutcome SasClient::queryDiscoverDatabase(const QueryDiscoverDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDiscoverDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDiscoverDatabaseOutcome(QueryDiscoverDatabaseResult(outcome.result()));
	else
		return QueryDiscoverDatabaseOutcome(outcome.error());
}

void SasClient::queryDiscoverDatabaseAsync(const QueryDiscoverDatabaseRequest& request, const QueryDiscoverDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDiscoverDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::QueryDiscoverDatabaseOutcomeCallable SasClient::queryDiscoverDatabaseCallable(const QueryDiscoverDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDiscoverDatabaseOutcome()>>(
			[this, request]()
			{
			return this->queryDiscoverDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::QueryGroupIdByGroupNameOutcome SasClient::queryGroupIdByGroupName(const QueryGroupIdByGroupNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGroupIdByGroupNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGroupIdByGroupNameOutcome(QueryGroupIdByGroupNameResult(outcome.result()));
	else
		return QueryGroupIdByGroupNameOutcome(outcome.error());
}

void SasClient::queryGroupIdByGroupNameAsync(const QueryGroupIdByGroupNameRequest& request, const QueryGroupIdByGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGroupIdByGroupName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::QueryGroupIdByGroupNameOutcomeCallable SasClient::queryGroupIdByGroupNameCallable(const QueryGroupIdByGroupNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGroupIdByGroupNameOutcome()>>(
			[this, request]()
			{
			return this->queryGroupIdByGroupName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::QueryGroupedSecurityEventMarkMissListOutcome SasClient::queryGroupedSecurityEventMarkMissList(const QueryGroupedSecurityEventMarkMissListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGroupedSecurityEventMarkMissListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGroupedSecurityEventMarkMissListOutcome(QueryGroupedSecurityEventMarkMissListResult(outcome.result()));
	else
		return QueryGroupedSecurityEventMarkMissListOutcome(outcome.error());
}

void SasClient::queryGroupedSecurityEventMarkMissListAsync(const QueryGroupedSecurityEventMarkMissListRequest& request, const QueryGroupedSecurityEventMarkMissListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGroupedSecurityEventMarkMissList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::QueryGroupedSecurityEventMarkMissListOutcomeCallable SasClient::queryGroupedSecurityEventMarkMissListCallable(const QueryGroupedSecurityEventMarkMissListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGroupedSecurityEventMarkMissListOutcome()>>(
			[this, request]()
			{
			return this->queryGroupedSecurityEventMarkMissList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::QueryJenkinsImageRegistryPersistenceDayOutcome SasClient::queryJenkinsImageRegistryPersistenceDay(const QueryJenkinsImageRegistryPersistenceDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryJenkinsImageRegistryPersistenceDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryJenkinsImageRegistryPersistenceDayOutcome(QueryJenkinsImageRegistryPersistenceDayResult(outcome.result()));
	else
		return QueryJenkinsImageRegistryPersistenceDayOutcome(outcome.error());
}

void SasClient::queryJenkinsImageRegistryPersistenceDayAsync(const QueryJenkinsImageRegistryPersistenceDayRequest& request, const QueryJenkinsImageRegistryPersistenceDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryJenkinsImageRegistryPersistenceDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::QueryJenkinsImageRegistryPersistenceDayOutcomeCallable SasClient::queryJenkinsImageRegistryPersistenceDayCallable(const QueryJenkinsImageRegistryPersistenceDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryJenkinsImageRegistryPersistenceDayOutcome()>>(
			[this, request]()
			{
			return this->queryJenkinsImageRegistryPersistenceDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::QueryPreCheckDatabaseOutcome SasClient::queryPreCheckDatabase(const QueryPreCheckDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPreCheckDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPreCheckDatabaseOutcome(QueryPreCheckDatabaseResult(outcome.result()));
	else
		return QueryPreCheckDatabaseOutcome(outcome.error());
}

void SasClient::queryPreCheckDatabaseAsync(const QueryPreCheckDatabaseRequest& request, const QueryPreCheckDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPreCheckDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::QueryPreCheckDatabaseOutcomeCallable SasClient::queryPreCheckDatabaseCallable(const QueryPreCheckDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPreCheckDatabaseOutcome()>>(
			[this, request]()
			{
			return this->queryPreCheckDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::RebootMachineOutcome SasClient::rebootMachine(const RebootMachineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RebootMachineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RebootMachineOutcome(RebootMachineResult(outcome.result()));
	else
		return RebootMachineOutcome(outcome.error());
}

void SasClient::rebootMachineAsync(const RebootMachineRequest& request, const RebootMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rebootMachine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RebootMachineOutcomeCallable SasClient::rebootMachineCallable(const RebootMachineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RebootMachineOutcome()>>(
			[this, request]()
			{
			return this->rebootMachine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::RefreshAssetsOutcome SasClient::refreshAssets(const RefreshAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshAssetsOutcome(RefreshAssetsResult(outcome.result()));
	else
		return RefreshAssetsOutcome(outcome.error());
}

void SasClient::refreshAssetsAsync(const RefreshAssetsRequest& request, const RefreshAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RefreshAssetsOutcomeCallable SasClient::refreshAssetsCallable(const RefreshAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshAssetsOutcome()>>(
			[this, request]()
			{
			return this->refreshAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::RefreshContainerAssetsOutcome SasClient::refreshContainerAssets(const RefreshContainerAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshContainerAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshContainerAssetsOutcome(RefreshContainerAssetsResult(outcome.result()));
	else
		return RefreshContainerAssetsOutcome(outcome.error());
}

void SasClient::refreshContainerAssetsAsync(const RefreshContainerAssetsRequest& request, const RefreshContainerAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshContainerAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RefreshContainerAssetsOutcomeCallable SasClient::refreshContainerAssetsCallable(const RefreshContainerAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshContainerAssetsOutcome()>>(
			[this, request]()
			{
			return this->refreshContainerAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::RemoveCheckInstanceResultWhiteListOutcome SasClient::removeCheckInstanceResultWhiteList(const RemoveCheckInstanceResultWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCheckInstanceResultWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCheckInstanceResultWhiteListOutcome(RemoveCheckInstanceResultWhiteListResult(outcome.result()));
	else
		return RemoveCheckInstanceResultWhiteListOutcome(outcome.error());
}

void SasClient::removeCheckInstanceResultWhiteListAsync(const RemoveCheckInstanceResultWhiteListRequest& request, const RemoveCheckInstanceResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCheckInstanceResultWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RemoveCheckInstanceResultWhiteListOutcomeCallable SasClient::removeCheckInstanceResultWhiteListCallable(const RemoveCheckInstanceResultWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCheckInstanceResultWhiteListOutcome()>>(
			[this, request]()
			{
			return this->removeCheckInstanceResultWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::RemoveCheckResultWhiteListOutcome SasClient::removeCheckResultWhiteList(const RemoveCheckResultWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCheckResultWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCheckResultWhiteListOutcome(RemoveCheckResultWhiteListResult(outcome.result()));
	else
		return RemoveCheckResultWhiteListOutcome(outcome.error());
}

void SasClient::removeCheckResultWhiteListAsync(const RemoveCheckResultWhiteListRequest& request, const RemoveCheckResultWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCheckResultWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RemoveCheckResultWhiteListOutcomeCallable SasClient::removeCheckResultWhiteListCallable(const RemoveCheckResultWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCheckResultWhiteListOutcome()>>(
			[this, request]()
			{
			return this->removeCheckResultWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::RollbackSuspEventQuaraFileOutcome SasClient::rollbackSuspEventQuaraFile(const RollbackSuspEventQuaraFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackSuspEventQuaraFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackSuspEventQuaraFileOutcome(RollbackSuspEventQuaraFileResult(outcome.result()));
	else
		return RollbackSuspEventQuaraFileOutcome(outcome.error());
}

void SasClient::rollbackSuspEventQuaraFileAsync(const RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackSuspEventQuaraFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RollbackSuspEventQuaraFileOutcomeCallable SasClient::rollbackSuspEventQuaraFileCallable(const RollbackSuspEventQuaraFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackSuspEventQuaraFileOutcome()>>(
			[this, request]()
			{
			return this->rollbackSuspEventQuaraFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SasInstallCodeOutcome SasClient::sasInstallCode(const SasInstallCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SasInstallCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SasInstallCodeOutcome(SasInstallCodeResult(outcome.result()));
	else
		return SasInstallCodeOutcome(outcome.error());
}

void SasClient::sasInstallCodeAsync(const SasInstallCodeRequest& request, const SasInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sasInstallCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SasInstallCodeOutcomeCallable SasClient::sasInstallCodeCallable(const SasInstallCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SasInstallCodeOutcome()>>(
			[this, request]()
			{
			return this->sasInstallCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SaveImageBaselineStrategyOutcome SasClient::saveImageBaselineStrategy(const SaveImageBaselineStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveImageBaselineStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveImageBaselineStrategyOutcome(SaveImageBaselineStrategyResult(outcome.result()));
	else
		return SaveImageBaselineStrategyOutcome(outcome.error());
}

void SasClient::saveImageBaselineStrategyAsync(const SaveImageBaselineStrategyRequest& request, const SaveImageBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveImageBaselineStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SaveImageBaselineStrategyOutcomeCallable SasClient::saveImageBaselineStrategyCallable(const SaveImageBaselineStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveImageBaselineStrategyOutcome()>>(
			[this, request]()
			{
			return this->saveImageBaselineStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SaveSuspEventUserSettingOutcome SasClient::saveSuspEventUserSetting(const SaveSuspEventUserSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSuspEventUserSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSuspEventUserSettingOutcome(SaveSuspEventUserSettingResult(outcome.result()));
	else
		return SaveSuspEventUserSettingOutcome(outcome.error());
}

void SasClient::saveSuspEventUserSettingAsync(const SaveSuspEventUserSettingRequest& request, const SaveSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSuspEventUserSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SaveSuspEventUserSettingOutcomeCallable SasClient::saveSuspEventUserSettingCallable(const SaveSuspEventUserSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSuspEventUserSettingOutcome()>>(
			[this, request]()
			{
			return this->saveSuspEventUserSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SetClusterInterceptionConfigOutcome SasClient::setClusterInterceptionConfig(const SetClusterInterceptionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetClusterInterceptionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetClusterInterceptionConfigOutcome(SetClusterInterceptionConfigResult(outcome.result()));
	else
		return SetClusterInterceptionConfigOutcome(outcome.error());
}

void SasClient::setClusterInterceptionConfigAsync(const SetClusterInterceptionConfigRequest& request, const SetClusterInterceptionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setClusterInterceptionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SetClusterInterceptionConfigOutcomeCallable SasClient::setClusterInterceptionConfigCallable(const SetClusterInterceptionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetClusterInterceptionConfigOutcome()>>(
			[this, request]()
			{
			return this->setClusterInterceptionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SetRegistryScanDayNumOutcome SasClient::setRegistryScanDayNum(const SetRegistryScanDayNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRegistryScanDayNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRegistryScanDayNumOutcome(SetRegistryScanDayNumResult(outcome.result()));
	else
		return SetRegistryScanDayNumOutcome(outcome.error());
}

void SasClient::setRegistryScanDayNumAsync(const SetRegistryScanDayNumRequest& request, const SetRegistryScanDayNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRegistryScanDayNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SetRegistryScanDayNumOutcomeCallable SasClient::setRegistryScanDayNumCallable(const SetRegistryScanDayNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRegistryScanDayNumOutcome()>>(
			[this, request]()
			{
			return this->setRegistryScanDayNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::StartBaselineSecurityCheckOutcome SasClient::startBaselineSecurityCheck(const StartBaselineSecurityCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBaselineSecurityCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBaselineSecurityCheckOutcome(StartBaselineSecurityCheckResult(outcome.result()));
	else
		return StartBaselineSecurityCheckOutcome(outcome.error());
}

void SasClient::startBaselineSecurityCheckAsync(const StartBaselineSecurityCheckRequest& request, const StartBaselineSecurityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBaselineSecurityCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::StartBaselineSecurityCheckOutcomeCallable SasClient::startBaselineSecurityCheckCallable(const StartBaselineSecurityCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBaselineSecurityCheckOutcome()>>(
			[this, request]()
			{
			return this->startBaselineSecurityCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::StartDiscoverDatabaseTaskOutcome SasClient::startDiscoverDatabaseTask(const StartDiscoverDatabaseTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDiscoverDatabaseTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDiscoverDatabaseTaskOutcome(StartDiscoverDatabaseTaskResult(outcome.result()));
	else
		return StartDiscoverDatabaseTaskOutcome(outcome.error());
}

void SasClient::startDiscoverDatabaseTaskAsync(const StartDiscoverDatabaseTaskRequest& request, const StartDiscoverDatabaseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDiscoverDatabaseTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::StartDiscoverDatabaseTaskOutcomeCallable SasClient::startDiscoverDatabaseTaskCallable(const StartDiscoverDatabaseTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDiscoverDatabaseTaskOutcome()>>(
			[this, request]()
			{
			return this->startDiscoverDatabaseTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::StartPreCheckDatabaseOutcome SasClient::startPreCheckDatabase(const StartPreCheckDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPreCheckDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPreCheckDatabaseOutcome(StartPreCheckDatabaseResult(outcome.result()));
	else
		return StartPreCheckDatabaseOutcome(outcome.error());
}

void SasClient::startPreCheckDatabaseAsync(const StartPreCheckDatabaseRequest& request, const StartPreCheckDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPreCheckDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::StartPreCheckDatabaseOutcomeCallable SasClient::startPreCheckDatabaseCallable(const StartPreCheckDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPreCheckDatabaseOutcome()>>(
			[this, request]()
			{
			return this->startPreCheckDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::StartVirusScanTaskOutcome SasClient::startVirusScanTask(const StartVirusScanTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartVirusScanTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartVirusScanTaskOutcome(StartVirusScanTaskResult(outcome.result()));
	else
		return StartVirusScanTaskOutcome(outcome.error());
}

void SasClient::startVirusScanTaskAsync(const StartVirusScanTaskRequest& request, const StartVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startVirusScanTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::StartVirusScanTaskOutcomeCallable SasClient::startVirusScanTaskCallable(const StartVirusScanTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartVirusScanTaskOutcome()>>(
			[this, request]()
			{
			return this->startVirusScanTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::SubmitCheckOutcome SasClient::submitCheck(const SubmitCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCheckOutcome(SubmitCheckResult(outcome.result()));
	else
		return SubmitCheckOutcome(outcome.error());
}

void SasClient::submitCheckAsync(const SubmitCheckRequest& request, const SubmitCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::SubmitCheckOutcomeCallable SasClient::submitCheckCallable(const SubmitCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCheckOutcome()>>(
			[this, request]()
			{
			return this->submitCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UnbindAegisOutcome SasClient::unbindAegis(const UnbindAegisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindAegisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindAegisOutcome(UnbindAegisResult(outcome.result()));
	else
		return UnbindAegisOutcome(outcome.error());
}

void SasClient::unbindAegisAsync(const UnbindAegisRequest& request, const UnbindAegisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindAegis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UnbindAegisOutcomeCallable SasClient::unbindAegisCallable(const UnbindAegisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindAegisOutcome()>>(
			[this, request]()
			{
			return this->unbindAegis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UninstallBackupClientOutcome SasClient::uninstallBackupClient(const UninstallBackupClientRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallBackupClientOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallBackupClientOutcome(UninstallBackupClientResult(outcome.result()));
	else
		return UninstallBackupClientOutcome(outcome.error());
}

void SasClient::uninstallBackupClientAsync(const UninstallBackupClientRequest& request, const UninstallBackupClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallBackupClient(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UninstallBackupClientOutcomeCallable SasClient::uninstallBackupClientCallable(const UninstallBackupClientRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallBackupClientOutcome()>>(
			[this, request]()
			{
			return this->uninstallBackupClient(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UninstallUniBackupAgentOutcome SasClient::uninstallUniBackupAgent(const UninstallUniBackupAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UninstallUniBackupAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UninstallUniBackupAgentOutcome(UninstallUniBackupAgentResult(outcome.result()));
	else
		return UninstallUniBackupAgentOutcome(outcome.error());
}

void SasClient::uninstallUniBackupAgentAsync(const UninstallUniBackupAgentRequest& request, const UninstallUniBackupAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uninstallUniBackupAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UninstallUniBackupAgentOutcomeCallable SasClient::uninstallUniBackupAgentCallable(const UninstallUniBackupAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UninstallUniBackupAgentOutcome()>>(
			[this, request]()
			{
			return this->uninstallUniBackupAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpdateHoneypotOutcome SasClient::updateHoneypot(const UpdateHoneypotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHoneypotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHoneypotOutcome(UpdateHoneypotResult(outcome.result()));
	else
		return UpdateHoneypotOutcome(outcome.error());
}

void SasClient::updateHoneypotAsync(const UpdateHoneypotRequest& request, const UpdateHoneypotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHoneypot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpdateHoneypotOutcomeCallable SasClient::updateHoneypotCallable(const UpdateHoneypotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHoneypotOutcome()>>(
			[this, request]()
			{
			return this->updateHoneypot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpdateHoneypotNodeOutcome SasClient::updateHoneypotNode(const UpdateHoneypotNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHoneypotNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHoneypotNodeOutcome(UpdateHoneypotNodeResult(outcome.result()));
	else
		return UpdateHoneypotNodeOutcome(outcome.error());
}

void SasClient::updateHoneypotNodeAsync(const UpdateHoneypotNodeRequest& request, const UpdateHoneypotNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHoneypotNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpdateHoneypotNodeOutcomeCallable SasClient::updateHoneypotNodeCallable(const UpdateHoneypotNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHoneypotNodeOutcome()>>(
			[this, request]()
			{
			return this->updateHoneypotNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpdateHoneypotPresetOutcome SasClient::updateHoneypotPreset(const UpdateHoneypotPresetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHoneypotPresetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHoneypotPresetOutcome(UpdateHoneypotPresetResult(outcome.result()));
	else
		return UpdateHoneypotPresetOutcome(outcome.error());
}

void SasClient::updateHoneypotPresetAsync(const UpdateHoneypotPresetRequest& request, const UpdateHoneypotPresetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHoneypotPreset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpdateHoneypotPresetOutcomeCallable SasClient::updateHoneypotPresetCallable(const UpdateHoneypotPresetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHoneypotPresetOutcome()>>(
			[this, request]()
			{
			return this->updateHoneypotPreset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpdateHoneypotProbeOutcome SasClient::updateHoneypotProbe(const UpdateHoneypotProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateHoneypotProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateHoneypotProbeOutcome(UpdateHoneypotProbeResult(outcome.result()));
	else
		return UpdateHoneypotProbeOutcome(outcome.error());
}

void SasClient::updateHoneypotProbeAsync(const UpdateHoneypotProbeRequest& request, const UpdateHoneypotProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateHoneypotProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpdateHoneypotProbeOutcomeCallable SasClient::updateHoneypotProbeCallable(const UpdateHoneypotProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateHoneypotProbeOutcome()>>(
			[this, request]()
			{
			return this->updateHoneypotProbe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpdateJenkinsImageRegistryNameOutcome SasClient::updateJenkinsImageRegistryName(const UpdateJenkinsImageRegistryNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJenkinsImageRegistryNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJenkinsImageRegistryNameOutcome(UpdateJenkinsImageRegistryNameResult(outcome.result()));
	else
		return UpdateJenkinsImageRegistryNameOutcome(outcome.error());
}

void SasClient::updateJenkinsImageRegistryNameAsync(const UpdateJenkinsImageRegistryNameRequest& request, const UpdateJenkinsImageRegistryNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJenkinsImageRegistryName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpdateJenkinsImageRegistryNameOutcomeCallable SasClient::updateJenkinsImageRegistryNameCallable(const UpdateJenkinsImageRegistryNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJenkinsImageRegistryNameOutcome()>>(
			[this, request]()
			{
			return this->updateJenkinsImageRegistryName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpdateJenkinsImageRegistryPersistenceDayOutcome SasClient::updateJenkinsImageRegistryPersistenceDay(const UpdateJenkinsImageRegistryPersistenceDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJenkinsImageRegistryPersistenceDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJenkinsImageRegistryPersistenceDayOutcome(UpdateJenkinsImageRegistryPersistenceDayResult(outcome.result()));
	else
		return UpdateJenkinsImageRegistryPersistenceDayOutcome(outcome.error());
}

void SasClient::updateJenkinsImageRegistryPersistenceDayAsync(const UpdateJenkinsImageRegistryPersistenceDayRequest& request, const UpdateJenkinsImageRegistryPersistenceDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJenkinsImageRegistryPersistenceDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpdateJenkinsImageRegistryPersistenceDayOutcomeCallable SasClient::updateJenkinsImageRegistryPersistenceDayCallable(const UpdateJenkinsImageRegistryPersistenceDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJenkinsImageRegistryPersistenceDayOutcome()>>(
			[this, request]()
			{
			return this->updateJenkinsImageRegistryPersistenceDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::UpgradeBackupPolicyVersionOutcome SasClient::upgradeBackupPolicyVersion(const UpgradeBackupPolicyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeBackupPolicyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeBackupPolicyVersionOutcome(UpgradeBackupPolicyVersionResult(outcome.result()));
	else
		return UpgradeBackupPolicyVersionOutcome(outcome.error());
}

void SasClient::upgradeBackupPolicyVersionAsync(const UpgradeBackupPolicyVersionRequest& request, const UpgradeBackupPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeBackupPolicyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::UpgradeBackupPolicyVersionOutcomeCallable SasClient::upgradeBackupPolicyVersionCallable(const UpgradeBackupPolicyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeBackupPolicyVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeBackupPolicyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::ValidateHcWarningsOutcome SasClient::validateHcWarnings(const ValidateHcWarningsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ValidateHcWarningsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ValidateHcWarningsOutcome(ValidateHcWarningsResult(outcome.result()));
	else
		return ValidateHcWarningsOutcome(outcome.error());
}

void SasClient::validateHcWarningsAsync(const ValidateHcWarningsRequest& request, const ValidateHcWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateHcWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::ValidateHcWarningsOutcomeCallable SasClient::validateHcWarningsCallable(const ValidateHcWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateHcWarningsOutcome()>>(
			[this, request]()
			{
			return this->validateHcWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::VerifyCheckInstanceResultOutcome SasClient::verifyCheckInstanceResult(const VerifyCheckInstanceResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyCheckInstanceResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyCheckInstanceResultOutcome(VerifyCheckInstanceResultResult(outcome.result()));
	else
		return VerifyCheckInstanceResultOutcome(outcome.error());
}

void SasClient::verifyCheckInstanceResultAsync(const VerifyCheckInstanceResultRequest& request, const VerifyCheckInstanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyCheckInstanceResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::VerifyCheckInstanceResultOutcomeCallable SasClient::verifyCheckInstanceResultCallable(const VerifyCheckInstanceResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyCheckInstanceResultOutcome()>>(
			[this, request]()
			{
			return this->verifyCheckInstanceResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SasClient::VerifyCheckResultOutcome SasClient::verifyCheckResult(const VerifyCheckResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyCheckResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyCheckResultOutcome(VerifyCheckResultResult(outcome.result()));
	else
		return VerifyCheckResultOutcome(outcome.error());
}

void SasClient::verifyCheckResultAsync(const VerifyCheckResultRequest& request, const VerifyCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyCheckResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::VerifyCheckResultOutcomeCallable SasClient::verifyCheckResultCallable(const VerifyCheckResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyCheckResultOutcome()>>(
			[this, request]()
			{
			return this->verifyCheckResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

