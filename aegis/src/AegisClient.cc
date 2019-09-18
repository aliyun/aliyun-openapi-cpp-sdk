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

#include <alibabacloud/aegis/AegisClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

namespace
{
	const std::string SERVICE_NAME = "aegis";
}

AegisClient::AegisClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "aegis");
}

AegisClient::AegisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "aegis");
}

AegisClient::AegisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "aegis");
}

AegisClient::~AegisClient()
{}

AegisClient::AddEventProcessOutcome AegisClient::addEventProcess(const AddEventProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEventProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEventProcessOutcome(AddEventProcessResult(outcome.result()));
	else
		return AddEventProcessOutcome(outcome.error());
}

void AegisClient::addEventProcessAsync(const AddEventProcessRequest& request, const AddEventProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEventProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::AddEventProcessOutcomeCallable AegisClient::addEventProcessCallable(const AddEventProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEventProcessOutcome()>>(
			[this, request]()
			{
			return this->addEventProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::AutoUpgradeSasOutcome AegisClient::autoUpgradeSas(const AutoUpgradeSasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AutoUpgradeSasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AutoUpgradeSasOutcome(AutoUpgradeSasResult(outcome.result()));
	else
		return AutoUpgradeSasOutcome(outcome.error());
}

void AegisClient::autoUpgradeSasAsync(const AutoUpgradeSasRequest& request, const AutoUpgradeSasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, autoUpgradeSas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::AutoUpgradeSasOutcomeCallable AegisClient::autoUpgradeSasCallable(const AutoUpgradeSasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AutoUpgradeSasOutcome()>>(
			[this, request]()
			{
			return this->autoUpgradeSas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::AutoUpgradeToSasAdvancedVersionOutcome AegisClient::autoUpgradeToSasAdvancedVersion(const AutoUpgradeToSasAdvancedVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AutoUpgradeToSasAdvancedVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AutoUpgradeToSasAdvancedVersionOutcome(AutoUpgradeToSasAdvancedVersionResult(outcome.result()));
	else
		return AutoUpgradeToSasAdvancedVersionOutcome(outcome.error());
}

void AegisClient::autoUpgradeToSasAdvancedVersionAsync(const AutoUpgradeToSasAdvancedVersionRequest& request, const AutoUpgradeToSasAdvancedVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, autoUpgradeToSasAdvancedVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::AutoUpgradeToSasAdvancedVersionOutcomeCallable AegisClient::autoUpgradeToSasAdvancedVersionCallable(const AutoUpgradeToSasAdvancedVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AutoUpgradeToSasAdvancedVersionOutcome()>>(
			[this, request]()
			{
			return this->autoUpgradeToSasAdvancedVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::BatchDeleteWhiteListOutcome AegisClient::batchDeleteWhiteList(const BatchDeleteWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteWhiteListOutcome(BatchDeleteWhiteListResult(outcome.result()));
	else
		return BatchDeleteWhiteListOutcome(outcome.error());
}

void AegisClient::batchDeleteWhiteListAsync(const BatchDeleteWhiteListRequest& request, const BatchDeleteWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::BatchDeleteWhiteListOutcomeCallable AegisClient::batchDeleteWhiteListCallable(const BatchDeleteWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteWhiteListOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CanTrySasOutcome AegisClient::canTrySas(const CanTrySasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CanTrySasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CanTrySasOutcome(CanTrySasResult(outcome.result()));
	else
		return CanTrySasOutcome(outcome.error());
}

void AegisClient::canTrySasAsync(const CanTrySasRequest& request, const CanTrySasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, canTrySas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CanTrySasOutcomeCallable AegisClient::canTrySasCallable(const CanTrySasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CanTrySasOutcome()>>(
			[this, request]()
			{
			return this->canTrySas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CopyCustomizeReportConfigOutcome AegisClient::copyCustomizeReportConfig(const CopyCustomizeReportConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyCustomizeReportConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyCustomizeReportConfigOutcome(CopyCustomizeReportConfigResult(outcome.result()));
	else
		return CopyCustomizeReportConfigOutcome(outcome.error());
}

void AegisClient::copyCustomizeReportConfigAsync(const CopyCustomizeReportConfigRequest& request, const CopyCustomizeReportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyCustomizeReportConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CopyCustomizeReportConfigOutcomeCallable AegisClient::copyCustomizeReportConfigCallable(const CopyCustomizeReportConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyCustomizeReportConfigOutcome()>>(
			[this, request]()
			{
			return this->copyCustomizeReportConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreatScreenSettingOutcome AegisClient::creatScreenSetting(const CreatScreenSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatScreenSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatScreenSettingOutcome(CreatScreenSettingResult(outcome.result()));
	else
		return CreatScreenSettingOutcome(outcome.error());
}

void AegisClient::creatScreenSettingAsync(const CreatScreenSettingRequest& request, const CreatScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, creatScreenSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreatScreenSettingOutcomeCallable AegisClient::creatScreenSettingCallable(const CreatScreenSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatScreenSettingOutcome()>>(
			[this, request]()
			{
			return this->creatScreenSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateInstanceOutcome AegisClient::createInstance(const CreateInstanceRequest &request) const
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

void AegisClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateInstanceOutcomeCallable AegisClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateLogQueryOutcome AegisClient::createLogQuery(const CreateLogQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLogQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLogQueryOutcome(CreateLogQueryResult(outcome.result()));
	else
		return CreateLogQueryOutcome(outcome.error());
}

void AegisClient::createLogQueryAsync(const CreateLogQueryRequest& request, const CreateLogQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLogQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateLogQueryOutcomeCallable AegisClient::createLogQueryCallable(const CreateLogQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLogQueryOutcome()>>(
			[this, request]()
			{
			return this->createLogQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateOrUpdateDataSourceOutcome AegisClient::createOrUpdateDataSource(const CreateOrUpdateDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateDataSourceOutcome(CreateOrUpdateDataSourceResult(outcome.result()));
	else
		return CreateOrUpdateDataSourceOutcome(outcome.error());
}

void AegisClient::createOrUpdateDataSourceAsync(const CreateOrUpdateDataSourceRequest& request, const CreateOrUpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateOrUpdateDataSourceOutcomeCallable AegisClient::createOrUpdateDataSourceCallable(const CreateOrUpdateDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateDataSourceOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateOrUpdateDingTalkOutcome AegisClient::createOrUpdateDingTalk(const CreateOrUpdateDingTalkRequest &request) const
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

void AegisClient::createOrUpdateDingTalkAsync(const CreateOrUpdateDingTalkRequest& request, const CreateOrUpdateDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateDingTalk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateOrUpdateDingTalkOutcomeCallable AegisClient::createOrUpdateDingTalkCallable(const CreateOrUpdateDingTalkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateDingTalkOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateDingTalk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateOrUpdateGroupOutcome AegisClient::createOrUpdateGroup(const CreateOrUpdateGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateGroupOutcome(CreateOrUpdateGroupResult(outcome.result()));
	else
		return CreateOrUpdateGroupOutcome(outcome.error());
}

void AegisClient::createOrUpdateGroupAsync(const CreateOrUpdateGroupRequest& request, const CreateOrUpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateOrUpdateGroupOutcomeCallable AegisClient::createOrUpdateGroupCallable(const CreateOrUpdateGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateGroupOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateOrUpdateJoinRuleOutcome AegisClient::createOrUpdateJoinRule(const CreateOrUpdateJoinRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateJoinRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateJoinRuleOutcome(CreateOrUpdateJoinRuleResult(outcome.result()));
	else
		return CreateOrUpdateJoinRuleOutcome(outcome.error());
}

void AegisClient::createOrUpdateJoinRuleAsync(const CreateOrUpdateJoinRuleRequest& request, const CreateOrUpdateJoinRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateJoinRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateOrUpdateJoinRuleOutcomeCallable AegisClient::createOrUpdateJoinRuleCallable(const CreateOrUpdateJoinRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateJoinRuleOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateJoinRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateOrUpdateRuleOutcome AegisClient::createOrUpdateRule(const CreateOrUpdateRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOrUpdateRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOrUpdateRuleOutcome(CreateOrUpdateRuleResult(outcome.result()));
	else
		return CreateOrUpdateRuleOutcome(outcome.error());
}

void AegisClient::createOrUpdateRuleAsync(const CreateOrUpdateRuleRequest& request, const CreateOrUpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOrUpdateRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateOrUpdateRuleOutcomeCallable AegisClient::createOrUpdateRuleCallable(const CreateOrUpdateRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOrUpdateRuleOutcome()>>(
			[this, request]()
			{
			return this->createOrUpdateRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateScreenSettingOutcome AegisClient::createScreenSetting(const CreateScreenSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScreenSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScreenSettingOutcome(CreateScreenSettingResult(outcome.result()));
	else
		return CreateScreenSettingOutcome(outcome.error());
}

void AegisClient::createScreenSettingAsync(const CreateScreenSettingRequest& request, const CreateScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScreenSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateScreenSettingOutcomeCallable AegisClient::createScreenSettingCallable(const CreateScreenSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScreenSettingOutcome()>>(
			[this, request]()
			{
			return this->createScreenSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateSuspEventNoteOutcome AegisClient::createSuspEventNote(const CreateSuspEventNoteRequest &request) const
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

void AegisClient::createSuspEventNoteAsync(const CreateSuspEventNoteRequest& request, const CreateSuspEventNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSuspEventNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateSuspEventNoteOutcomeCallable AegisClient::createSuspEventNoteCallable(const CreateSuspEventNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSuspEventNoteOutcome()>>(
			[this, request]()
			{
			return this->createSuspEventNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateSuspiciousExportOutcome AegisClient::createSuspiciousExport(const CreateSuspiciousExportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSuspiciousExportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSuspiciousExportOutcome(CreateSuspiciousExportResult(outcome.result()));
	else
		return CreateSuspiciousExportOutcome(outcome.error());
}

void AegisClient::createSuspiciousExportAsync(const CreateSuspiciousExportRequest& request, const CreateSuspiciousExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSuspiciousExport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateSuspiciousExportOutcomeCallable AegisClient::createSuspiciousExportCallable(const CreateSuspiciousExportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSuspiciousExportOutcome()>>(
			[this, request]()
			{
			return this->createSuspiciousExport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateUserSettingOutcome AegisClient::createUserSetting(const CreateUserSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserSettingOutcome(CreateUserSettingResult(outcome.result()));
	else
		return CreateUserSettingOutcome(outcome.error());
}

void AegisClient::createUserSettingAsync(const CreateUserSettingRequest& request, const CreateUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateUserSettingOutcomeCallable AegisClient::createUserSettingCallable(const CreateUserSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserSettingOutcome()>>(
			[this, request]()
			{
			return this->createUserSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateUserWhiteListOutcome AegisClient::createUserWhiteList(const CreateUserWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserWhiteListOutcome(CreateUserWhiteListResult(outcome.result()));
	else
		return CreateUserWhiteListOutcome(outcome.error());
}

void AegisClient::createUserWhiteListAsync(const CreateUserWhiteListRequest& request, const CreateUserWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateUserWhiteListOutcomeCallable AegisClient::createUserWhiteListCallable(const CreateUserWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserWhiteListOutcome()>>(
			[this, request]()
			{
			return this->createUserWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::CreateVulWhitelistOutcome AegisClient::createVulWhitelist(const CreateVulWhitelistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVulWhitelistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVulWhitelistOutcome(CreateVulWhitelistResult(outcome.result()));
	else
		return CreateVulWhitelistOutcome(outcome.error());
}

void AegisClient::createVulWhitelistAsync(const CreateVulWhitelistRequest& request, const CreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::CreateVulWhitelistOutcomeCallable AegisClient::createVulWhitelistCallable(const CreateVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->createVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteCustomizeReportOutcome AegisClient::deleteCustomizeReport(const DeleteCustomizeReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomizeReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomizeReportOutcome(DeleteCustomizeReportResult(outcome.result()));
	else
		return DeleteCustomizeReportOutcome(outcome.error());
}

void AegisClient::deleteCustomizeReportAsync(const DeleteCustomizeReportRequest& request, const DeleteCustomizeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomizeReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteCustomizeReportOutcomeCallable AegisClient::deleteCustomizeReportCallable(const DeleteCustomizeReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomizeReportOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomizeReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteDingTalkOutcome AegisClient::deleteDingTalk(const DeleteDingTalkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDingTalkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDingTalkOutcome(DeleteDingTalkResult(outcome.result()));
	else
		return DeleteDingTalkOutcome(outcome.error());
}

void AegisClient::deleteDingTalkAsync(const DeleteDingTalkRequest& request, const DeleteDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDingTalk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteDingTalkOutcomeCallable AegisClient::deleteDingTalkCallable(const DeleteDingTalkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDingTalkOutcome()>>(
			[this, request]()
			{
			return this->deleteDingTalk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteJoinRuleOutcome AegisClient::deleteJoinRule(const DeleteJoinRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJoinRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJoinRuleOutcome(DeleteJoinRuleResult(outcome.result()));
	else
		return DeleteJoinRuleOutcome(outcome.error());
}

void AegisClient::deleteJoinRuleAsync(const DeleteJoinRuleRequest& request, const DeleteJoinRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJoinRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteJoinRuleOutcomeCallable AegisClient::deleteJoinRuleCallable(const DeleteJoinRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJoinRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteJoinRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteLogQueryOutcome AegisClient::deleteLogQuery(const DeleteLogQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLogQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLogQueryOutcome(DeleteLogQueryResult(outcome.result()));
	else
		return DeleteLogQueryOutcome(outcome.error());
}

void AegisClient::deleteLogQueryAsync(const DeleteLogQueryRequest& request, const DeleteLogQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLogQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteLogQueryOutcomeCallable AegisClient::deleteLogQueryCallable(const DeleteLogQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLogQueryOutcome()>>(
			[this, request]()
			{
			return this->deleteLogQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteRuleOutcome AegisClient::deleteRule(const DeleteRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleOutcome(DeleteRuleResult(outcome.result()));
	else
		return DeleteRuleOutcome(outcome.error());
}

void AegisClient::deleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteRuleOutcomeCallable AegisClient::deleteRuleCallable(const DeleteRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteRuleGroupOutcome AegisClient::deleteRuleGroup(const DeleteRuleGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRuleGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRuleGroupOutcome(DeleteRuleGroupResult(outcome.result()));
	else
		return DeleteRuleGroupOutcome(outcome.error());
}

void AegisClient::deleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRuleGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteRuleGroupOutcomeCallable AegisClient::deleteRuleGroupCallable(const DeleteRuleGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRuleGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteRuleGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteScreenSettingOutcome AegisClient::deleteScreenSetting(const DeleteScreenSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScreenSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScreenSettingOutcome(DeleteScreenSettingResult(outcome.result()));
	else
		return DeleteScreenSettingOutcome(outcome.error());
}

void AegisClient::deleteScreenSettingAsync(const DeleteScreenSettingRequest& request, const DeleteScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScreenSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteScreenSettingOutcomeCallable AegisClient::deleteScreenSettingCallable(const DeleteScreenSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScreenSettingOutcome()>>(
			[this, request]()
			{
			return this->deleteScreenSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteSearchConditionOutcome AegisClient::deleteSearchCondition(const DeleteSearchConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSearchConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSearchConditionOutcome(DeleteSearchConditionResult(outcome.result()));
	else
		return DeleteSearchConditionOutcome(outcome.error());
}

void AegisClient::deleteSearchConditionAsync(const DeleteSearchConditionRequest& request, const DeleteSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSearchCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteSearchConditionOutcomeCallable AegisClient::deleteSearchConditionCallable(const DeleteSearchConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSearchConditionOutcome()>>(
			[this, request]()
			{
			return this->deleteSearchCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteStrategyOutcome AegisClient::deleteStrategy(const DeleteStrategyRequest &request) const
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

void AegisClient::deleteStrategyAsync(const DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteStrategyOutcomeCallable AegisClient::deleteStrategyCallable(const DeleteStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteSuspEventNodeOutcome AegisClient::deleteSuspEventNode(const DeleteSuspEventNodeRequest &request) const
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

void AegisClient::deleteSuspEventNodeAsync(const DeleteSuspEventNodeRequest& request, const DeleteSuspEventNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSuspEventNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteSuspEventNodeOutcomeCallable AegisClient::deleteSuspEventNodeCallable(const DeleteSuspEventNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSuspEventNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteSuspEventNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteVulBatchOutcome AegisClient::deleteVulBatch(const DeleteVulBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVulBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVulBatchOutcome(DeleteVulBatchResult(outcome.result()));
	else
		return DeleteVulBatchOutcome(outcome.error());
}

void AegisClient::deleteVulBatchAsync(const DeleteVulBatchRequest& request, const DeleteVulBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVulBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteVulBatchOutcomeCallable AegisClient::deleteVulBatchCallable(const DeleteVulBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVulBatchOutcome()>>(
			[this, request]()
			{
			return this->deleteVulBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DeleteVulWhitelistOutcome AegisClient::deleteVulWhitelist(const DeleteVulWhitelistRequest &request) const
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

void AegisClient::deleteVulWhitelistAsync(const DeleteVulWhitelistRequest& request, const DeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DeleteVulWhitelistOutcomeCallable AegisClient::deleteVulWhitelistCallable(const DeleteVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->deleteVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAccessKeyLeakDetailOutcome AegisClient::describeAccessKeyLeakDetail(const DescribeAccessKeyLeakDetailRequest &request) const
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

void AegisClient::describeAccessKeyLeakDetailAsync(const DescribeAccessKeyLeakDetailRequest& request, const DescribeAccessKeyLeakDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessKeyLeakDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAccessKeyLeakDetailOutcomeCallable AegisClient::describeAccessKeyLeakDetailCallable(const DescribeAccessKeyLeakDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessKeyLeakDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAccessKeyLeakDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAccesskeyLeakListOutcome AegisClient::describeAccesskeyLeakList(const DescribeAccesskeyLeakListRequest &request) const
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

void AegisClient::describeAccesskeyLeakListAsync(const DescribeAccesskeyLeakListRequest& request, const DescribeAccesskeyLeakListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccesskeyLeakList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAccesskeyLeakListOutcomeCallable AegisClient::describeAccesskeyLeakListCallable(const DescribeAccesskeyLeakListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccesskeyLeakListOutcome()>>(
			[this, request]()
			{
			return this->describeAccesskeyLeakList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAccesskeyRunInfoOutcome AegisClient::describeAccesskeyRunInfo(const DescribeAccesskeyRunInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccesskeyRunInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccesskeyRunInfoOutcome(DescribeAccesskeyRunInfoResult(outcome.result()));
	else
		return DescribeAccesskeyRunInfoOutcome(outcome.error());
}

void AegisClient::describeAccesskeyRunInfoAsync(const DescribeAccesskeyRunInfoRequest& request, const DescribeAccesskeyRunInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccesskeyRunInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAccesskeyRunInfoOutcomeCallable AegisClient::describeAccesskeyRunInfoCallable(const DescribeAccesskeyRunInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccesskeyRunInfoOutcome()>>(
			[this, request]()
			{
			return this->describeAccesskeyRunInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAgentInstallStatusOutcome AegisClient::describeAgentInstallStatus(const DescribeAgentInstallStatusRequest &request) const
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

void AegisClient::describeAgentInstallStatusAsync(const DescribeAgentInstallStatusRequest& request, const DescribeAgentInstallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAgentInstallStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAgentInstallStatusOutcomeCallable AegisClient::describeAgentInstallStatusCallable(const DescribeAgentInstallStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAgentInstallStatusOutcome()>>(
			[this, request]()
			{
			return this->describeAgentInstallStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAlarmEventDetailOutcome AegisClient::describeAlarmEventDetail(const DescribeAlarmEventDetailRequest &request) const
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

void AegisClient::describeAlarmEventDetailAsync(const DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAlarmEventDetailOutcomeCallable AegisClient::describeAlarmEventDetailCallable(const DescribeAlarmEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAlarmEventListOutcome AegisClient::describeAlarmEventList(const DescribeAlarmEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAlarmEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAlarmEventListOutcome(DescribeAlarmEventListResult(outcome.result()));
	else
		return DescribeAlarmEventListOutcome(outcome.error());
}

void AegisClient::describeAlarmEventListAsync(const DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAlarmEventListOutcomeCallable AegisClient::describeAlarmEventListCallable(const DescribeAlarmEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventListOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAllRegionsStatisticsOutcome AegisClient::describeAllRegionsStatistics(const DescribeAllRegionsStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAllRegionsStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAllRegionsStatisticsOutcome(DescribeAllRegionsStatisticsResult(outcome.result()));
	else
		return DescribeAllRegionsStatisticsOutcome(outcome.error());
}

void AegisClient::describeAllRegionsStatisticsAsync(const DescribeAllRegionsStatisticsRequest& request, const DescribeAllRegionsStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAllRegionsStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAllRegionsStatisticsOutcomeCallable AegisClient::describeAllRegionsStatisticsCallable(const DescribeAllRegionsStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAllRegionsStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeAllRegionsStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAnalysisCurveOutcome AegisClient::describeAnalysisCurve(const DescribeAnalysisCurveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalysisCurveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalysisCurveOutcome(DescribeAnalysisCurveResult(outcome.result()));
	else
		return DescribeAnalysisCurveOutcome(outcome.error());
}

void AegisClient::describeAnalysisCurveAsync(const DescribeAnalysisCurveRequest& request, const DescribeAnalysisCurveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalysisCurve(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAnalysisCurveOutcomeCallable AegisClient::describeAnalysisCurveCallable(const DescribeAnalysisCurveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalysisCurveOutcome()>>(
			[this, request]()
			{
			return this->describeAnalysisCurve(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAnalysisHistogramsOutcome AegisClient::describeAnalysisHistograms(const DescribeAnalysisHistogramsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalysisHistogramsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalysisHistogramsOutcome(DescribeAnalysisHistogramsResult(outcome.result()));
	else
		return DescribeAnalysisHistogramsOutcome(outcome.error());
}

void AegisClient::describeAnalysisHistogramsAsync(const DescribeAnalysisHistogramsRequest& request, const DescribeAnalysisHistogramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalysisHistograms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAnalysisHistogramsOutcomeCallable AegisClient::describeAnalysisHistogramsCallable(const DescribeAnalysisHistogramsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalysisHistogramsOutcome()>>(
			[this, request]()
			{
			return this->describeAnalysisHistograms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAnalysisLogsOutcome AegisClient::describeAnalysisLogs(const DescribeAnalysisLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalysisLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalysisLogsOutcome(DescribeAnalysisLogsResult(outcome.result()));
	else
		return DescribeAnalysisLogsOutcome(outcome.error());
}

void AegisClient::describeAnalysisLogsAsync(const DescribeAnalysisLogsRequest& request, const DescribeAnalysisLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalysisLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAnalysisLogsOutcomeCallable AegisClient::describeAnalysisLogsCallable(const DescribeAnalysisLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalysisLogsOutcome()>>(
			[this, request]()
			{
			return this->describeAnalysisLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAnalysisShipperStatusOutcome AegisClient::describeAnalysisShipperStatus(const DescribeAnalysisShipperStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalysisShipperStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalysisShipperStatusOutcome(DescribeAnalysisShipperStatusResult(outcome.result()));
	else
		return DescribeAnalysisShipperStatusOutcome(outcome.error());
}

void AegisClient::describeAnalysisShipperStatusAsync(const DescribeAnalysisShipperStatusRequest& request, const DescribeAnalysisShipperStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalysisShipperStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAnalysisShipperStatusOutcomeCallable AegisClient::describeAnalysisShipperStatusCallable(const DescribeAnalysisShipperStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalysisShipperStatusOutcome()>>(
			[this, request]()
			{
			return this->describeAnalysisShipperStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAnalysisSlsIndexOutcome AegisClient::describeAnalysisSlsIndex(const DescribeAnalysisSlsIndexRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalysisSlsIndexOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalysisSlsIndexOutcome(DescribeAnalysisSlsIndexResult(outcome.result()));
	else
		return DescribeAnalysisSlsIndexOutcome(outcome.error());
}

void AegisClient::describeAnalysisSlsIndexAsync(const DescribeAnalysisSlsIndexRequest& request, const DescribeAnalysisSlsIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalysisSlsIndex(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAnalysisSlsIndexOutcomeCallable AegisClient::describeAnalysisSlsIndexCallable(const DescribeAnalysisSlsIndexRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalysisSlsIndexOutcome()>>(
			[this, request]()
			{
			return this->describeAnalysisSlsIndex(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAnalysisStatisticsOutcome AegisClient::describeAnalysisStatistics(const DescribeAnalysisStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAnalysisStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAnalysisStatisticsOutcome(DescribeAnalysisStatisticsResult(outcome.result()));
	else
		return DescribeAnalysisStatisticsOutcome(outcome.error());
}

void AegisClient::describeAnalysisStatisticsAsync(const DescribeAnalysisStatisticsRequest& request, const DescribeAnalysisStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAnalysisStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAnalysisStatisticsOutcomeCallable AegisClient::describeAnalysisStatisticsCallable(const DescribeAnalysisStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAnalysisStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeAnalysisStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeApiBuySummaryOutcome AegisClient::describeApiBuySummary(const DescribeApiBuySummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApiBuySummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApiBuySummaryOutcome(DescribeApiBuySummaryResult(outcome.result()));
	else
		return DescribeApiBuySummaryOutcome(outcome.error());
}

void AegisClient::describeApiBuySummaryAsync(const DescribeApiBuySummaryRequest& request, const DescribeApiBuySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApiBuySummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeApiBuySummaryOutcomeCallable AegisClient::describeApiBuySummaryCallable(const DescribeApiBuySummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApiBuySummaryOutcome()>>(
			[this, request]()
			{
			return this->describeApiBuySummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAssetDetailByUuidOutcome AegisClient::describeAssetDetailByUuid(const DescribeAssetDetailByUuidRequest &request) const
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

void AegisClient::describeAssetDetailByUuidAsync(const DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetDetailByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAssetDetailByUuidOutcomeCallable AegisClient::describeAssetDetailByUuidCallable(const DescribeAssetDetailByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetDetailByUuidOutcome()>>(
			[this, request]()
			{
			return this->describeAssetDetailByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAssetListOutcome AegisClient::describeAssetList(const DescribeAssetListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAssetListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAssetListOutcome(DescribeAssetListResult(outcome.result()));
	else
		return DescribeAssetListOutcome(outcome.error());
}

void AegisClient::describeAssetListAsync(const DescribeAssetListRequest& request, const DescribeAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAssetListOutcomeCallable AegisClient::describeAssetListCallable(const DescribeAssetListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetListOutcome()>>(
			[this, request]()
			{
			return this->describeAssetList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAssetSummaryOutcome AegisClient::describeAssetSummary(const DescribeAssetSummaryRequest &request) const
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

void AegisClient::describeAssetSummaryAsync(const DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAssetSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAssetSummaryOutcomeCallable AegisClient::describeAssetSummaryCallable(const DescribeAssetSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAssetSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeAssetSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAttackAnalysisDataOutcome AegisClient::describeAttackAnalysisData(const DescribeAttackAnalysisDataRequest &request) const
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

void AegisClient::describeAttackAnalysisDataAsync(const DescribeAttackAnalysisDataRequest& request, const DescribeAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAttackAnalysisData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAttackAnalysisDataOutcomeCallable AegisClient::describeAttackAnalysisDataCallable(const DescribeAttackAnalysisDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAttackAnalysisDataOutcome()>>(
			[this, request]()
			{
			return this->describeAttackAnalysisData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeAutoDelConfigOutcome AegisClient::describeAutoDelConfig(const DescribeAutoDelConfigRequest &request) const
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

void AegisClient::describeAutoDelConfigAsync(const DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoDelConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeAutoDelConfigOutcomeCallable AegisClient::describeAutoDelConfigCallable(const DescribeAutoDelConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoDelConfigOutcome()>>(
			[this, request]()
			{
			return this->describeAutoDelConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeBizStatSimpleQueryResultOutcome AegisClient::describeBizStatSimpleQueryResult(const DescribeBizStatSimpleQueryResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBizStatSimpleQueryResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBizStatSimpleQueryResultOutcome(DescribeBizStatSimpleQueryResultResult(outcome.result()));
	else
		return DescribeBizStatSimpleQueryResultOutcome(outcome.error());
}

void AegisClient::describeBizStatSimpleQueryResultAsync(const DescribeBizStatSimpleQueryResultRequest& request, const DescribeBizStatSimpleQueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBizStatSimpleQueryResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeBizStatSimpleQueryResultOutcomeCallable AegisClient::describeBizStatSimpleQueryResultCallable(const DescribeBizStatSimpleQueryResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBizStatSimpleQueryResultOutcome()>>(
			[this, request]()
			{
			return this->describeBizStatSimpleQueryResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeBuySummaryOutcome AegisClient::describeBuySummary(const DescribeBuySummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBuySummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBuySummaryOutcome(DescribeBuySummaryResult(outcome.result()));
	else
		return DescribeBuySummaryOutcome(outcome.error());
}

void AegisClient::describeBuySummaryAsync(const DescribeBuySummaryRequest& request, const DescribeBuySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBuySummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeBuySummaryOutcomeCallable AegisClient::describeBuySummaryCallable(const DescribeBuySummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBuySummaryOutcome()>>(
			[this, request]()
			{
			return this->describeBuySummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCanTrySasOutcome AegisClient::describeCanTrySas(const DescribeCanTrySasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCanTrySasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCanTrySasOutcome(DescribeCanTrySasResult(outcome.result()));
	else
		return DescribeCanTrySasOutcome(outcome.error());
}

void AegisClient::describeCanTrySasAsync(const DescribeCanTrySasRequest& request, const DescribeCanTrySasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCanTrySas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCanTrySasOutcomeCallable AegisClient::describeCanTrySasCallable(const DescribeCanTrySasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCanTrySasOutcome()>>(
			[this, request]()
			{
			return this->describeCanTrySas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCanUpgradeSasOutcome AegisClient::describeCanUpgradeSas(const DescribeCanUpgradeSasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCanUpgradeSasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCanUpgradeSasOutcome(DescribeCanUpgradeSasResult(outcome.result()));
	else
		return DescribeCanUpgradeSasOutcome(outcome.error());
}

void AegisClient::describeCanUpgradeSasAsync(const DescribeCanUpgradeSasRequest& request, const DescribeCanUpgradeSasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCanUpgradeSas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCanUpgradeSasOutcomeCallable AegisClient::describeCanUpgradeSasCallable(const DescribeCanUpgradeSasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCanUpgradeSasOutcome()>>(
			[this, request]()
			{
			return this->describeCanUpgradeSas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeChartDataOutcome AegisClient::describeChartData(const DescribeChartDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChartDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChartDataOutcome(DescribeChartDataResult(outcome.result()));
	else
		return DescribeChartDataOutcome(outcome.error());
}

void AegisClient::describeChartDataAsync(const DescribeChartDataRequest& request, const DescribeChartDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChartData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeChartDataOutcomeCallable AegisClient::describeChartDataCallable(const DescribeChartDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChartDataOutcome()>>(
			[this, request]()
			{
			return this->describeChartData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeChartListOutcome AegisClient::describeChartList(const DescribeChartListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChartListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChartListOutcome(DescribeChartListResult(outcome.result()));
	else
		return DescribeChartListOutcome(outcome.error());
}

void AegisClient::describeChartListAsync(const DescribeChartListRequest& request, const DescribeChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChartList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeChartListOutcomeCallable AegisClient::describeChartListCallable(const DescribeChartListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChartListOutcome()>>(
			[this, request]()
			{
			return this->describeChartList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCheckWarningCountOutcome AegisClient::describeCheckWarningCount(const DescribeCheckWarningCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCheckWarningCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCheckWarningCountOutcome(DescribeCheckWarningCountResult(outcome.result()));
	else
		return DescribeCheckWarningCountOutcome(outcome.error());
}

void AegisClient::describeCheckWarningCountAsync(const DescribeCheckWarningCountRequest& request, const DescribeCheckWarningCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCheckWarningCountOutcomeCallable AegisClient::describeCheckWarningCountCallable(const DescribeCheckWarningCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningCountOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCheckWarningDetailOutcome AegisClient::describeCheckWarningDetail(const DescribeCheckWarningDetailRequest &request) const
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

void AegisClient::describeCheckWarningDetailAsync(const DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCheckWarningDetailOutcomeCallable AegisClient::describeCheckWarningDetailCallable(const DescribeCheckWarningDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCheckWarningSummaryOutcome AegisClient::describeCheckWarningSummary(const DescribeCheckWarningSummaryRequest &request) const
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

void AegisClient::describeCheckWarningSummaryAsync(const DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarningSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCheckWarningSummaryOutcomeCallable AegisClient::describeCheckWarningSummaryCallable(const DescribeCheckWarningSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarningSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCheckWarningsOutcome AegisClient::describeCheckWarnings(const DescribeCheckWarningsRequest &request) const
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

void AegisClient::describeCheckWarningsAsync(const DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCheckWarningsOutcomeCallable AegisClient::describeCheckWarningsCallable(const DescribeCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->describeCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeConcernNecessityOutcome AegisClient::describeConcernNecessity(const DescribeConcernNecessityRequest &request) const
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

void AegisClient::describeConcernNecessityAsync(const DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConcernNecessity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeConcernNecessityOutcomeCallable AegisClient::describeConcernNecessityCallable(const DescribeConcernNecessityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConcernNecessityOutcome()>>(
			[this, request]()
			{
			return this->describeConcernNecessity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCustomizeReportChartDataOutcome AegisClient::describeCustomizeReportChartData(const DescribeCustomizeReportChartDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeReportChartDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeReportChartDataOutcome(DescribeCustomizeReportChartDataResult(outcome.result()));
	else
		return DescribeCustomizeReportChartDataOutcome(outcome.error());
}

void AegisClient::describeCustomizeReportChartDataAsync(const DescribeCustomizeReportChartDataRequest& request, const DescribeCustomizeReportChartDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeReportChartData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCustomizeReportChartDataOutcomeCallable AegisClient::describeCustomizeReportChartDataCallable(const DescribeCustomizeReportChartDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeReportChartDataOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeReportChartData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCustomizeReportChartListOutcome AegisClient::describeCustomizeReportChartList(const DescribeCustomizeReportChartListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeReportChartListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeReportChartListOutcome(DescribeCustomizeReportChartListResult(outcome.result()));
	else
		return DescribeCustomizeReportChartListOutcome(outcome.error());
}

void AegisClient::describeCustomizeReportChartListAsync(const DescribeCustomizeReportChartListRequest& request, const DescribeCustomizeReportChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeReportChartList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCustomizeReportChartListOutcomeCallable AegisClient::describeCustomizeReportChartListCallable(const DescribeCustomizeReportChartListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeReportChartListOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeReportChartList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCustomizeReportConfigDetailOutcome AegisClient::describeCustomizeReportConfigDetail(const DescribeCustomizeReportConfigDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeReportConfigDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeReportConfigDetailOutcome(DescribeCustomizeReportConfigDetailResult(outcome.result()));
	else
		return DescribeCustomizeReportConfigDetailOutcome(outcome.error());
}

void AegisClient::describeCustomizeReportConfigDetailAsync(const DescribeCustomizeReportConfigDetailRequest& request, const DescribeCustomizeReportConfigDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeReportConfigDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCustomizeReportConfigDetailOutcomeCallable AegisClient::describeCustomizeReportConfigDetailCallable(const DescribeCustomizeReportConfigDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeReportConfigDetailOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeReportConfigDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeCustomizeReportListOutcome AegisClient::describeCustomizeReportList(const DescribeCustomizeReportListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomizeReportListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomizeReportListOutcome(DescribeCustomizeReportListResult(outcome.result()));
	else
		return DescribeCustomizeReportListOutcome(outcome.error());
}

void AegisClient::describeCustomizeReportListAsync(const DescribeCustomizeReportListRequest& request, const DescribeCustomizeReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomizeReportList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeCustomizeReportListOutcomeCallable AegisClient::describeCustomizeReportListCallable(const DescribeCustomizeReportListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomizeReportListOutcome()>>(
			[this, request]()
			{
			return this->describeCustomizeReportList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeDataSourceOutcome AegisClient::describeDataSource(const DescribeDataSourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataSourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataSourceOutcome(DescribeDataSourceResult(outcome.result()));
	else
		return DescribeDataSourceOutcome(outcome.error());
}

void AegisClient::describeDataSourceAsync(const DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeDataSourceOutcomeCallable AegisClient::describeDataSourceCallable(const DescribeDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataSourceOutcome()>>(
			[this, request]()
			{
			return this->describeDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeDefenceThreadOutcome AegisClient::describeDefenceThread(const DescribeDefenceThreadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDefenceThreadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDefenceThreadOutcome(DescribeDefenceThreadResult(outcome.result()));
	else
		return DescribeDefenceThreadOutcome(outcome.error());
}

void AegisClient::describeDefenceThreadAsync(const DescribeDefenceThreadRequest& request, const DescribeDefenceThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDefenceThread(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeDefenceThreadOutcomeCallable AegisClient::describeDefenceThreadCallable(const DescribeDefenceThreadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDefenceThreadOutcome()>>(
			[this, request]()
			{
			return this->describeDefenceThread(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeDingTalkOutcome AegisClient::describeDingTalk(const DescribeDingTalkRequest &request) const
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

void AegisClient::describeDingTalkAsync(const DescribeDingTalkRequest& request, const DescribeDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDingTalk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeDingTalkOutcomeCallable AegisClient::describeDingTalkCallable(const DescribeDingTalkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDingTalkOutcome()>>(
			[this, request]()
			{
			return this->describeDingTalk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEcsStsStatusOutcome AegisClient::describeEcsStsStatus(const DescribeEcsStsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEcsStsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEcsStsStatusOutcome(DescribeEcsStsStatusResult(outcome.result()));
	else
		return DescribeEcsStsStatusOutcome(outcome.error());
}

void AegisClient::describeEcsStsStatusAsync(const DescribeEcsStsStatusRequest& request, const DescribeEcsStsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEcsStsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEcsStsStatusOutcomeCallable AegisClient::describeEcsStsStatusCallable(const DescribeEcsStsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEcsStsStatusOutcome()>>(
			[this, request]()
			{
			return this->describeEcsStsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEmgNoticeOutcome AegisClient::describeEmgNotice(const DescribeEmgNoticeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmgNoticeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmgNoticeOutcome(DescribeEmgNoticeResult(outcome.result()));
	else
		return DescribeEmgNoticeOutcome(outcome.error());
}

void AegisClient::describeEmgNoticeAsync(const DescribeEmgNoticeRequest& request, const DescribeEmgNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmgNotice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEmgNoticeOutcomeCallable AegisClient::describeEmgNoticeCallable(const DescribeEmgNoticeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmgNoticeOutcome()>>(
			[this, request]()
			{
			return this->describeEmgNotice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEmgUserAgreementOutcome AegisClient::describeEmgUserAgreement(const DescribeEmgUserAgreementRequest &request) const
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

void AegisClient::describeEmgUserAgreementAsync(const DescribeEmgUserAgreementRequest& request, const DescribeEmgUserAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmgUserAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEmgUserAgreementOutcomeCallable AegisClient::describeEmgUserAgreementCallable(const DescribeEmgUserAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmgUserAgreementOutcome()>>(
			[this, request]()
			{
			return this->describeEmgUserAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEmgVulGroupOutcome AegisClient::describeEmgVulGroup(const DescribeEmgVulGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmgVulGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmgVulGroupOutcome(DescribeEmgVulGroupResult(outcome.result()));
	else
		return DescribeEmgVulGroupOutcome(outcome.error());
}

void AegisClient::describeEmgVulGroupAsync(const DescribeEmgVulGroupRequest& request, const DescribeEmgVulGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmgVulGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEmgVulGroupOutcomeCallable AegisClient::describeEmgVulGroupCallable(const DescribeEmgVulGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmgVulGroupOutcome()>>(
			[this, request]()
			{
			return this->describeEmgVulGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEntityListOutcome AegisClient::describeEntityList(const DescribeEntityListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEntityListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEntityListOutcome(DescribeEntityListResult(outcome.result()));
	else
		return DescribeEntityListOutcome(outcome.error());
}

void AegisClient::describeEntityListAsync(const DescribeEntityListRequest& request, const DescribeEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEntityList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEntityListOutcomeCallable AegisClient::describeEntityListCallable(const DescribeEntityListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEntityListOutcome()>>(
			[this, request]()
			{
			return this->describeEntityList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEventCountCurveOutcome AegisClient::describeEventCountCurve(const DescribeEventCountCurveRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEventCountCurveOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEventCountCurveOutcome(DescribeEventCountCurveResult(outcome.result()));
	else
		return DescribeEventCountCurveOutcome(outcome.error());
}

void AegisClient::describeEventCountCurveAsync(const DescribeEventCountCurveRequest& request, const DescribeEventCountCurveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventCountCurve(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEventCountCurveOutcomeCallable AegisClient::describeEventCountCurveCallable(const DescribeEventCountCurveRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventCountCurveOutcome()>>(
			[this, request]()
			{
			return this->describeEventCountCurve(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeEventLevelCountOutcome AegisClient::describeEventLevelCount(const DescribeEventLevelCountRequest &request) const
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

void AegisClient::describeEventLevelCountAsync(const DescribeEventLevelCountRequest& request, const DescribeEventLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEventLevelCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeEventLevelCountOutcomeCallable AegisClient::describeEventLevelCountCallable(const DescribeEventLevelCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEventLevelCountOutcome()>>(
			[this, request]()
			{
			return this->describeEventLevelCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeExportInfoOutcome AegisClient::describeExportInfo(const DescribeExportInfoRequest &request) const
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

void AegisClient::describeExportInfoAsync(const DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeExportInfoOutcomeCallable AegisClient::describeExportInfoCallable(const DescribeExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeFilterFieldsOutcome AegisClient::describeFilterFields(const DescribeFilterFieldsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFilterFieldsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFilterFieldsOutcome(DescribeFilterFieldsResult(outcome.result()));
	else
		return DescribeFilterFieldsOutcome(outcome.error());
}

void AegisClient::describeFilterFieldsAsync(const DescribeFilterFieldsRequest& request, const DescribeFilterFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFilterFields(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeFilterFieldsOutcomeCallable AegisClient::describeFilterFieldsCallable(const DescribeFilterFieldsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFilterFieldsOutcome()>>(
			[this, request]()
			{
			return this->describeFilterFields(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeGrayFuncOutcome AegisClient::describeGrayFunc(const DescribeGrayFuncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGrayFuncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGrayFuncOutcome(DescribeGrayFuncResult(outcome.result()));
	else
		return DescribeGrayFuncOutcome(outcome.error());
}

void AegisClient::describeGrayFuncAsync(const DescribeGrayFuncRequest& request, const DescribeGrayFuncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGrayFunc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeGrayFuncOutcomeCallable AegisClient::describeGrayFuncCallable(const DescribeGrayFuncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGrayFuncOutcome()>>(
			[this, request]()
			{
			return this->describeGrayFunc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeGroupListOutcome AegisClient::describeGroupList(const DescribeGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupListOutcome(DescribeGroupListResult(outcome.result()));
	else
		return DescribeGroupListOutcome(outcome.error());
}

void AegisClient::describeGroupListAsync(const DescribeGroupListRequest& request, const DescribeGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeGroupListOutcomeCallable AegisClient::describeGroupListCallable(const DescribeGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupListOutcome()>>(
			[this, request]()
			{
			return this->describeGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeGroupStructOutcome AegisClient::describeGroupStruct(const DescribeGroupStructRequest &request) const
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

void AegisClient::describeGroupStructAsync(const DescribeGroupStructRequest& request, const DescribeGroupStructAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupStruct(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeGroupStructOutcomeCallable AegisClient::describeGroupStructCallable(const DescribeGroupStructRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupStructOutcome()>>(
			[this, request]()
			{
			return this->describeGroupStruct(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeGroupedVulOutcome AegisClient::describeGroupedVul(const DescribeGroupedVulRequest &request) const
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

void AegisClient::describeGroupedVulAsync(const DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupedVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeGroupedVulOutcomeCallable AegisClient::describeGroupedVulCallable(const DescribeGroupedVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupedVulOutcome()>>(
			[this, request]()
			{
			return this->describeGroupedVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeHistogramOutcome AegisClient::describeHistogram(const DescribeHistogramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHistogramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHistogramOutcome(DescribeHistogramResult(outcome.result()));
	else
		return DescribeHistogramOutcome(outcome.error());
}

void AegisClient::describeHistogramAsync(const DescribeHistogramRequest& request, const DescribeHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHistogram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeHistogramOutcomeCallable AegisClient::describeHistogramCallable(const DescribeHistogramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHistogramOutcome()>>(
			[this, request]()
			{
			return this->describeHistogram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeHostStatisticsOutcome AegisClient::describeHostStatistics(const DescribeHostStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHostStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHostStatisticsOutcome(DescribeHostStatisticsResult(outcome.result()));
	else
		return DescribeHostStatisticsOutcome(outcome.error());
}

void AegisClient::describeHostStatisticsAsync(const DescribeHostStatisticsRequest& request, const DescribeHostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHostStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeHostStatisticsOutcomeCallable AegisClient::describeHostStatisticsCallable(const DescribeHostStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHostStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeHostStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeInstanceStatisticsOutcome AegisClient::describeInstanceStatistics(const DescribeInstanceStatisticsRequest &request) const
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

void AegisClient::describeInstanceStatisticsAsync(const DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeInstanceStatisticsOutcomeCallable AegisClient::describeInstanceStatisticsCallable(const DescribeInstanceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeJoinRuleListOutcome AegisClient::describeJoinRuleList(const DescribeJoinRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJoinRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJoinRuleListOutcome(DescribeJoinRuleListResult(outcome.result()));
	else
		return DescribeJoinRuleListOutcome(outcome.error());
}

void AegisClient::describeJoinRuleListAsync(const DescribeJoinRuleListRequest& request, const DescribeJoinRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJoinRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeJoinRuleListOutcomeCallable AegisClient::describeJoinRuleListCallable(const DescribeJoinRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJoinRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeJoinRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLatestActionsOutcome AegisClient::describeLatestActions(const DescribeLatestActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLatestActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLatestActionsOutcome(DescribeLatestActionsResult(outcome.result()));
	else
		return DescribeLatestActionsOutcome(outcome.error());
}

void AegisClient::describeLatestActionsAsync(const DescribeLatestActionsRequest& request, const DescribeLatestActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLatestActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLatestActionsOutcomeCallable AegisClient::describeLatestActionsCallable(const DescribeLatestActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLatestActionsOutcome()>>(
			[this, request]()
			{
			return this->describeLatestActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeListAccessKeyIdAuthOutcome AegisClient::describeListAccessKeyIdAuth(const DescribeListAccessKeyIdAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeListAccessKeyIdAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeListAccessKeyIdAuthOutcome(DescribeListAccessKeyIdAuthResult(outcome.result()));
	else
		return DescribeListAccessKeyIdAuthOutcome(outcome.error());
}

void AegisClient::describeListAccessKeyIdAuthAsync(const DescribeListAccessKeyIdAuthRequest& request, const DescribeListAccessKeyIdAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeListAccessKeyIdAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeListAccessKeyIdAuthOutcomeCallable AegisClient::describeListAccessKeyIdAuthCallable(const DescribeListAccessKeyIdAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeListAccessKeyIdAuthOutcome()>>(
			[this, request]()
			{
			return this->describeListAccessKeyIdAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLogInfoOutcome AegisClient::describeLogInfo(const DescribeLogInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogInfoOutcome(DescribeLogInfoResult(outcome.result()));
	else
		return DescribeLogInfoOutcome(outcome.error());
}

void AegisClient::describeLogInfoAsync(const DescribeLogInfoRequest& request, const DescribeLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLogInfoOutcomeCallable AegisClient::describeLogInfoCallable(const DescribeLogInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLogInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLogItemsOutcome AegisClient::describeLogItems(const DescribeLogItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogItemsOutcome(DescribeLogItemsResult(outcome.result()));
	else
		return DescribeLogItemsOutcome(outcome.error());
}

void AegisClient::describeLogItemsAsync(const DescribeLogItemsRequest& request, const DescribeLogItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLogItemsOutcomeCallable AegisClient::describeLogItemsCallable(const DescribeLogItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogItemsOutcome()>>(
			[this, request]()
			{
			return this->describeLogItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLogMetaOutcome AegisClient::describeLogMeta(const DescribeLogMetaRequest &request) const
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

void AegisClient::describeLogMetaAsync(const DescribeLogMetaRequest& request, const DescribeLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLogMetaOutcomeCallable AegisClient::describeLogMetaCallable(const DescribeLogMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogMetaOutcome()>>(
			[this, request]()
			{
			return this->describeLogMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLogQueryOutcome AegisClient::describeLogQuery(const DescribeLogQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLogQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLogQueryOutcome(DescribeLogQueryResult(outcome.result()));
	else
		return DescribeLogQueryOutcome(outcome.error());
}

void AegisClient::describeLogQueryAsync(const DescribeLogQueryRequest& request, const DescribeLogQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLogQueryOutcomeCallable AegisClient::describeLogQueryCallable(const DescribeLogQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogQueryOutcome()>>(
			[this, request]()
			{
			return this->describeLogQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLogShipperStatusOutcome AegisClient::describeLogShipperStatus(const DescribeLogShipperStatusRequest &request) const
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

void AegisClient::describeLogShipperStatusAsync(const DescribeLogShipperStatusRequest& request, const DescribeLogShipperStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogShipperStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLogShipperStatusOutcomeCallable AegisClient::describeLogShipperStatusCallable(const DescribeLogShipperStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogShipperStatusOutcome()>>(
			[this, request]()
			{
			return this->describeLogShipperStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLoginLogsOutcome AegisClient::describeLoginLogs(const DescribeLoginLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLoginLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLoginLogsOutcome(DescribeLoginLogsResult(outcome.result()));
	else
		return DescribeLoginLogsOutcome(outcome.error());
}

void AegisClient::describeLoginLogsAsync(const DescribeLoginLogsRequest& request, const DescribeLoginLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLoginLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLoginLogsOutcomeCallable AegisClient::describeLoginLogsCallable(const DescribeLoginLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLoginLogsOutcome()>>(
			[this, request]()
			{
			return this->describeLoginLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeLogstoreStorageOutcome AegisClient::describeLogstoreStorage(const DescribeLogstoreStorageRequest &request) const
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

void AegisClient::describeLogstoreStorageAsync(const DescribeLogstoreStorageRequest& request, const DescribeLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLogstoreStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeLogstoreStorageOutcomeCallable AegisClient::describeLogstoreStorageCallable(const DescribeLogstoreStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLogstoreStorageOutcome()>>(
			[this, request]()
			{
			return this->describeLogstoreStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeMacConfigOutcome AegisClient::describeMacConfig(const DescribeMacConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMacConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMacConfigOutcome(DescribeMacConfigResult(outcome.result()));
	else
		return DescribeMacConfigOutcome(outcome.error());
}

void AegisClient::describeMacConfigAsync(const DescribeMacConfigRequest& request, const DescribeMacConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMacConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeMacConfigOutcomeCallable AegisClient::describeMacConfigCallable(const DescribeMacConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMacConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMacConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeMachineConfigOutcome AegisClient::describeMachineConfig(const DescribeMachineConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMachineConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMachineConfigOutcome(DescribeMachineConfigResult(outcome.result()));
	else
		return DescribeMachineConfigOutcome(outcome.error());
}

void AegisClient::describeMachineConfigAsync(const DescribeMachineConfigRequest& request, const DescribeMachineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMachineConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeMachineConfigOutcomeCallable AegisClient::describeMachineConfigCallable(const DescribeMachineConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMachineConfigOutcome()>>(
			[this, request]()
			{
			return this->describeMachineConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeMetaDataOutcome AegisClient::describeMetaData(const DescribeMetaDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMetaDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMetaDataOutcome(DescribeMetaDataResult(outcome.result()));
	else
		return DescribeMetaDataOutcome(outcome.error());
}

void AegisClient::describeMetaDataAsync(const DescribeMetaDataRequest& request, const DescribeMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMetaData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeMetaDataOutcomeCallable AegisClient::describeMetaDataCallable(const DescribeMetaDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMetaDataOutcome()>>(
			[this, request]()
			{
			return this->describeMetaData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeNsasSuspEventTypeOutcome AegisClient::describeNsasSuspEventType(const DescribeNsasSuspEventTypeRequest &request) const
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

void AegisClient::describeNsasSuspEventTypeAsync(const DescribeNsasSuspEventTypeRequest& request, const DescribeNsasSuspEventTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNsasSuspEventType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeNsasSuspEventTypeOutcomeCallable AegisClient::describeNsasSuspEventTypeCallable(const DescribeNsasSuspEventTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNsasSuspEventTypeOutcome()>>(
			[this, request]()
			{
			return this->describeNsasSuspEventType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeOperateInfoOutcome AegisClient::describeOperateInfo(const DescribeOperateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOperateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOperateInfoOutcome(DescribeOperateInfoResult(outcome.result()));
	else
		return DescribeOperateInfoOutcome(outcome.error());
}

void AegisClient::describeOperateInfoAsync(const DescribeOperateInfoRequest& request, const DescribeOperateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOperateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeOperateInfoOutcomeCallable AegisClient::describeOperateInfoCallable(const DescribeOperateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOperateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeOperateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeQuaraFileOutcome AegisClient::describeQuaraFile(const DescribeQuaraFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeQuaraFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeQuaraFileOutcome(DescribeQuaraFileResult(outcome.result()));
	else
		return DescribeQuaraFileOutcome(outcome.error());
}

void AegisClient::describeQuaraFileAsync(const DescribeQuaraFileRequest& request, const DescribeQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeQuaraFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeQuaraFileOutcomeCallable AegisClient::describeQuaraFileCallable(const DescribeQuaraFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeQuaraFileOutcome()>>(
			[this, request]()
			{
			return this->describeQuaraFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeResultListOutcome AegisClient::describeResultList(const DescribeResultListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResultListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResultListOutcome(DescribeResultListResult(outcome.result()));
	else
		return DescribeResultListOutcome(outcome.error());
}

void AegisClient::describeResultListAsync(const DescribeResultListRequest& request, const DescribeResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResultList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeResultListOutcomeCallable AegisClient::describeResultListCallable(const DescribeResultListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResultListOutcome()>>(
			[this, request]()
			{
			return this->describeResultList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeRiskTypeOutcome AegisClient::describeRiskType(const DescribeRiskTypeRequest &request) const
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

void AegisClient::describeRiskTypeAsync(const DescribeRiskTypeRequest& request, const DescribeRiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeRiskTypeOutcomeCallable AegisClient::describeRiskTypeCallable(const DescribeRiskTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskTypeOutcome()>>(
			[this, request]()
			{
			return this->describeRiskType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeRiskWhiteListOutcome AegisClient::describeRiskWhiteList(const DescribeRiskWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskWhiteListOutcome(DescribeRiskWhiteListResult(outcome.result()));
	else
		return DescribeRiskWhiteListOutcome(outcome.error());
}

void AegisClient::describeRiskWhiteListAsync(const DescribeRiskWhiteListRequest& request, const DescribeRiskWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeRiskWhiteListOutcomeCallable AegisClient::describeRiskWhiteListCallable(const DescribeRiskWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeRiskWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeRisksOutcome AegisClient::describeRisks(const DescribeRisksRequest &request) const
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

void AegisClient::describeRisksAsync(const DescribeRisksRequest& request, const DescribeRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeRisksOutcomeCallable AegisClient::describeRisksCallable(const DescribeRisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRisksOutcome()>>(
			[this, request]()
			{
			return this->describeRisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeRuleListOutcome AegisClient::describeRuleList(const DescribeRuleListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRuleListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRuleListOutcome(DescribeRuleListResult(outcome.result()));
	else
		return DescribeRuleListOutcome(outcome.error());
}

void AegisClient::describeRuleListAsync(const DescribeRuleListRequest& request, const DescribeRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRuleList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeRuleListOutcomeCallable AegisClient::describeRuleListCallable(const DescribeRuleListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRuleListOutcome()>>(
			[this, request]()
			{
			return this->describeRuleList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSasAssetStatisticsOutcome AegisClient::describeSasAssetStatistics(const DescribeSasAssetStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSasAssetStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSasAssetStatisticsOutcome(DescribeSasAssetStatisticsResult(outcome.result()));
	else
		return DescribeSasAssetStatisticsOutcome(outcome.error());
}

void AegisClient::describeSasAssetStatisticsAsync(const DescribeSasAssetStatisticsRequest& request, const DescribeSasAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSasAssetStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSasAssetStatisticsOutcomeCallable AegisClient::describeSasAssetStatisticsCallable(const DescribeSasAssetStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSasAssetStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeSasAssetStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSasAssetStatisticsColumnOutcome AegisClient::describeSasAssetStatisticsColumn(const DescribeSasAssetStatisticsColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSasAssetStatisticsColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSasAssetStatisticsColumnOutcome(DescribeSasAssetStatisticsColumnResult(outcome.result()));
	else
		return DescribeSasAssetStatisticsColumnOutcome(outcome.error());
}

void AegisClient::describeSasAssetStatisticsColumnAsync(const DescribeSasAssetStatisticsColumnRequest& request, const DescribeSasAssetStatisticsColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSasAssetStatisticsColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSasAssetStatisticsColumnOutcomeCallable AegisClient::describeSasAssetStatisticsColumnCallable(const DescribeSasAssetStatisticsColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSasAssetStatisticsColumnOutcome()>>(
			[this, request]()
			{
			return this->describeSasAssetStatisticsColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSasLeftConditionOutcome AegisClient::describeSasLeftCondition(const DescribeSasLeftConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSasLeftConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSasLeftConditionOutcome(DescribeSasLeftConditionResult(outcome.result()));
	else
		return DescribeSasLeftConditionOutcome(outcome.error());
}

void AegisClient::describeSasLeftConditionAsync(const DescribeSasLeftConditionRequest& request, const DescribeSasLeftConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSasLeftCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSasLeftConditionOutcomeCallable AegisClient::describeSasLeftConditionCallable(const DescribeSasLeftConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSasLeftConditionOutcome()>>(
			[this, request]()
			{
			return this->describeSasLeftCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenAlarmEventListOutcome AegisClient::describeScreenAlarmEventList(const DescribeScreenAlarmEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenAlarmEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenAlarmEventListOutcome(DescribeScreenAlarmEventListResult(outcome.result()));
	else
		return DescribeScreenAlarmEventListOutcome(outcome.error());
}

void AegisClient::describeScreenAlarmEventListAsync(const DescribeScreenAlarmEventListRequest& request, const DescribeScreenAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenAlarmEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenAlarmEventListOutcomeCallable AegisClient::describeScreenAlarmEventListCallable(const DescribeScreenAlarmEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenAlarmEventListOutcome()>>(
			[this, request]()
			{
			return this->describeScreenAlarmEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenAttackAnalysisDataOutcome AegisClient::describeScreenAttackAnalysisData(const DescribeScreenAttackAnalysisDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenAttackAnalysisDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenAttackAnalysisDataOutcome(DescribeScreenAttackAnalysisDataResult(outcome.result()));
	else
		return DescribeScreenAttackAnalysisDataOutcome(outcome.error());
}

void AegisClient::describeScreenAttackAnalysisDataAsync(const DescribeScreenAttackAnalysisDataRequest& request, const DescribeScreenAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenAttackAnalysisData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenAttackAnalysisDataOutcomeCallable AegisClient::describeScreenAttackAnalysisDataCallable(const DescribeScreenAttackAnalysisDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenAttackAnalysisDataOutcome()>>(
			[this, request]()
			{
			return this->describeScreenAttackAnalysisData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenBizStatSimpleQueryResultOutcome AegisClient::describeScreenBizStatSimpleQueryResult(const DescribeScreenBizStatSimpleQueryResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenBizStatSimpleQueryResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenBizStatSimpleQueryResultOutcome(DescribeScreenBizStatSimpleQueryResultResult(outcome.result()));
	else
		return DescribeScreenBizStatSimpleQueryResultOutcome(outcome.error());
}

void AegisClient::describeScreenBizStatSimpleQueryResultAsync(const DescribeScreenBizStatSimpleQueryResultRequest& request, const DescribeScreenBizStatSimpleQueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenBizStatSimpleQueryResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenBizStatSimpleQueryResultOutcomeCallable AegisClient::describeScreenBizStatSimpleQueryResultCallable(const DescribeScreenBizStatSimpleQueryResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenBizStatSimpleQueryResultOutcome()>>(
			[this, request]()
			{
			return this->describeScreenBizStatSimpleQueryResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenCityMonitorDataOutcome AegisClient::describeScreenCityMonitorData(const DescribeScreenCityMonitorDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenCityMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenCityMonitorDataOutcome(DescribeScreenCityMonitorDataResult(outcome.result()));
	else
		return DescribeScreenCityMonitorDataOutcome(outcome.error());
}

void AegisClient::describeScreenCityMonitorDataAsync(const DescribeScreenCityMonitorDataRequest& request, const DescribeScreenCityMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenCityMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenCityMonitorDataOutcomeCallable AegisClient::describeScreenCityMonitorDataCallable(const DescribeScreenCityMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenCityMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeScreenCityMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenCloudHcRiskOutcome AegisClient::describeScreenCloudHcRisk(const DescribeScreenCloudHcRiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenCloudHcRiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenCloudHcRiskOutcome(DescribeScreenCloudHcRiskResult(outcome.result()));
	else
		return DescribeScreenCloudHcRiskOutcome(outcome.error());
}

void AegisClient::describeScreenCloudHcRiskAsync(const DescribeScreenCloudHcRiskRequest& request, const DescribeScreenCloudHcRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenCloudHcRisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenCloudHcRiskOutcomeCallable AegisClient::describeScreenCloudHcRiskCallable(const DescribeScreenCloudHcRiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenCloudHcRiskOutcome()>>(
			[this, request]()
			{
			return this->describeScreenCloudHcRisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenDataMapOutcome AegisClient::describeScreenDataMap(const DescribeScreenDataMapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenDataMapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenDataMapOutcome(DescribeScreenDataMapResult(outcome.result()));
	else
		return DescribeScreenDataMapOutcome(outcome.error());
}

void AegisClient::describeScreenDataMapAsync(const DescribeScreenDataMapRequest& request, const DescribeScreenDataMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenDataMap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenDataMapOutcomeCallable AegisClient::describeScreenDataMapCallable(const DescribeScreenDataMapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenDataMapOutcome()>>(
			[this, request]()
			{
			return this->describeScreenDataMap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenEmerRiskOutcome AegisClient::describeScreenEmerRisk(const DescribeScreenEmerRiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenEmerRiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenEmerRiskOutcome(DescribeScreenEmerRiskResult(outcome.result()));
	else
		return DescribeScreenEmerRiskOutcome(outcome.error());
}

void AegisClient::describeScreenEmerRiskAsync(const DescribeScreenEmerRiskRequest& request, const DescribeScreenEmerRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenEmerRisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenEmerRiskOutcomeCallable AegisClient::describeScreenEmerRiskCallable(const DescribeScreenEmerRiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenEmerRiskOutcome()>>(
			[this, request]()
			{
			return this->describeScreenEmerRisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenFlowRequestCountOutcome AegisClient::describeScreenFlowRequestCount(const DescribeScreenFlowRequestCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenFlowRequestCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenFlowRequestCountOutcome(DescribeScreenFlowRequestCountResult(outcome.result()));
	else
		return DescribeScreenFlowRequestCountOutcome(outcome.error());
}

void AegisClient::describeScreenFlowRequestCountAsync(const DescribeScreenFlowRequestCountRequest& request, const DescribeScreenFlowRequestCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenFlowRequestCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenFlowRequestCountOutcomeCallable AegisClient::describeScreenFlowRequestCountCallable(const DescribeScreenFlowRequestCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenFlowRequestCountOutcome()>>(
			[this, request]()
			{
			return this->describeScreenFlowRequestCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenHostStatisticsOutcome AegisClient::describeScreenHostStatistics(const DescribeScreenHostStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenHostStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenHostStatisticsOutcome(DescribeScreenHostStatisticsResult(outcome.result()));
	else
		return DescribeScreenHostStatisticsOutcome(outcome.error());
}

void AegisClient::describeScreenHostStatisticsAsync(const DescribeScreenHostStatisticsRequest& request, const DescribeScreenHostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenHostStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenHostStatisticsOutcomeCallable AegisClient::describeScreenHostStatisticsCallable(const DescribeScreenHostStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenHostStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeScreenHostStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenOperateInfoOutcome AegisClient::describeScreenOperateInfo(const DescribeScreenOperateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenOperateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenOperateInfoOutcome(DescribeScreenOperateInfoResult(outcome.result()));
	else
		return DescribeScreenOperateInfoOutcome(outcome.error());
}

void AegisClient::describeScreenOperateInfoAsync(const DescribeScreenOperateInfoRequest& request, const DescribeScreenOperateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenOperateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenOperateInfoOutcomeCallable AegisClient::describeScreenOperateInfoCallable(const DescribeScreenOperateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenOperateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScreenOperateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenOssUploadInfoOutcome AegisClient::describeScreenOssUploadInfo(const DescribeScreenOssUploadInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenOssUploadInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenOssUploadInfoOutcome(DescribeScreenOssUploadInfoResult(outcome.result()));
	else
		return DescribeScreenOssUploadInfoOutcome(outcome.error());
}

void AegisClient::describeScreenOssUploadInfoAsync(const DescribeScreenOssUploadInfoRequest& request, const DescribeScreenOssUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenOssUploadInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenOssUploadInfoOutcomeCallable AegisClient::describeScreenOssUploadInfoCallable(const DescribeScreenOssUploadInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenOssUploadInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScreenOssUploadInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenRequestTopTypeOutcome AegisClient::describeScreenRequestTopType(const DescribeScreenRequestTopTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenRequestTopTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenRequestTopTypeOutcome(DescribeScreenRequestTopTypeResult(outcome.result()));
	else
		return DescribeScreenRequestTopTypeOutcome(outcome.error());
}

void AegisClient::describeScreenRequestTopTypeAsync(const DescribeScreenRequestTopTypeRequest& request, const DescribeScreenRequestTopTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenRequestTopType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenRequestTopTypeOutcomeCallable AegisClient::describeScreenRequestTopTypeCallable(const DescribeScreenRequestTopTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenRequestTopTypeOutcome()>>(
			[this, request]()
			{
			return this->describeScreenRequestTopType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenScoreThreadOutcome AegisClient::describeScreenScoreThread(const DescribeScreenScoreThreadRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenScoreThreadOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenScoreThreadOutcome(DescribeScreenScoreThreadResult(outcome.result()));
	else
		return DescribeScreenScoreThreadOutcome(outcome.error());
}

void AegisClient::describeScreenScoreThreadAsync(const DescribeScreenScoreThreadRequest& request, const DescribeScreenScoreThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenScoreThread(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenScoreThreadOutcomeCallable AegisClient::describeScreenScoreThreadCallable(const DescribeScreenScoreThreadRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenScoreThreadOutcome()>>(
			[this, request]()
			{
			return this->describeScreenScoreThread(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenSecurityStatInfoOutcome AegisClient::describeScreenSecurityStatInfo(const DescribeScreenSecurityStatInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenSecurityStatInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenSecurityStatInfoOutcome(DescribeScreenSecurityStatInfoResult(outcome.result()));
	else
		return DescribeScreenSecurityStatInfoOutcome(outcome.error());
}

void AegisClient::describeScreenSecurityStatInfoAsync(const DescribeScreenSecurityStatInfoRequest& request, const DescribeScreenSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenSecurityStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenSecurityStatInfoOutcomeCallable AegisClient::describeScreenSecurityStatInfoCallable(const DescribeScreenSecurityStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenSecurityStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScreenSecurityStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenSettingOutcome AegisClient::describeScreenSetting(const DescribeScreenSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenSettingOutcome(DescribeScreenSettingResult(outcome.result()));
	else
		return DescribeScreenSettingOutcome(outcome.error());
}

void AegisClient::describeScreenSettingAsync(const DescribeScreenSettingRequest& request, const DescribeScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenSettingOutcomeCallable AegisClient::describeScreenSettingCallable(const DescribeScreenSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenSettingOutcome()>>(
			[this, request]()
			{
			return this->describeScreenSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenSettingsOutcome AegisClient::describeScreenSettings(const DescribeScreenSettingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenSettingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenSettingsOutcome(DescribeScreenSettingsResult(outcome.result()));
	else
		return DescribeScreenSettingsOutcome(outcome.error());
}

void AegisClient::describeScreenSettingsAsync(const DescribeScreenSettingsRequest& request, const DescribeScreenSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenSettings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenSettingsOutcomeCallable AegisClient::describeScreenSettingsCallable(const DescribeScreenSettingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenSettingsOutcome()>>(
			[this, request]()
			{
			return this->describeScreenSettings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenSummaryInfoOutcome AegisClient::describeScreenSummaryInfo(const DescribeScreenSummaryInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenSummaryInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenSummaryInfoOutcome(DescribeScreenSummaryInfoResult(outcome.result()));
	else
		return DescribeScreenSummaryInfoOutcome(outcome.error());
}

void AegisClient::describeScreenSummaryInfoAsync(const DescribeScreenSummaryInfoRequest& request, const DescribeScreenSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenSummaryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenSummaryInfoOutcomeCallable AegisClient::describeScreenSummaryInfoCallable(const DescribeScreenSummaryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenSummaryInfoOutcome()>>(
			[this, request]()
			{
			return this->describeScreenSummaryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenTitlesOutcome AegisClient::describeScreenTitles(const DescribeScreenTitlesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenTitlesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenTitlesOutcome(DescribeScreenTitlesResult(outcome.result()));
	else
		return DescribeScreenTitlesOutcome(outcome.error());
}

void AegisClient::describeScreenTitlesAsync(const DescribeScreenTitlesRequest& request, const DescribeScreenTitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenTitles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenTitlesOutcomeCallable AegisClient::describeScreenTitlesCallable(const DescribeScreenTitlesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenTitlesOutcome()>>(
			[this, request]()
			{
			return this->describeScreenTitles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenTopRequestAndFlowOutcome AegisClient::describeScreenTopRequestAndFlow(const DescribeScreenTopRequestAndFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenTopRequestAndFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenTopRequestAndFlowOutcome(DescribeScreenTopRequestAndFlowResult(outcome.result()));
	else
		return DescribeScreenTopRequestAndFlowOutcome(outcome.error());
}

void AegisClient::describeScreenTopRequestAndFlowAsync(const DescribeScreenTopRequestAndFlowRequest& request, const DescribeScreenTopRequestAndFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenTopRequestAndFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenTopRequestAndFlowOutcomeCallable AegisClient::describeScreenTopRequestAndFlowCallable(const DescribeScreenTopRequestAndFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenTopRequestAndFlowOutcome()>>(
			[this, request]()
			{
			return this->describeScreenTopRequestAndFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeScreenVersionConfigOutcome AegisClient::describeScreenVersionConfig(const DescribeScreenVersionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScreenVersionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScreenVersionConfigOutcome(DescribeScreenVersionConfigResult(outcome.result()));
	else
		return DescribeScreenVersionConfigOutcome(outcome.error());
}

void AegisClient::describeScreenVersionConfigAsync(const DescribeScreenVersionConfigRequest& request, const DescribeScreenVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScreenVersionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeScreenVersionConfigOutcomeCallable AegisClient::describeScreenVersionConfigCallable(const DescribeScreenVersionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScreenVersionConfigOutcome()>>(
			[this, request]()
			{
			return this->describeScreenVersionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSearchConditionOutcome AegisClient::describeSearchCondition(const DescribeSearchConditionRequest &request) const
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

void AegisClient::describeSearchConditionAsync(const DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSearchCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSearchConditionOutcomeCallable AegisClient::describeSearchConditionCallable(const DescribeSearchConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSearchConditionOutcome()>>(
			[this, request]()
			{
			return this->describeSearchCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSecureSuggestionOutcome AegisClient::describeSecureSuggestion(const DescribeSecureSuggestionRequest &request) const
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

void AegisClient::describeSecureSuggestionAsync(const DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecureSuggestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSecureSuggestionOutcomeCallable AegisClient::describeSecureSuggestionCallable(const DescribeSecureSuggestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecureSuggestionOutcome()>>(
			[this, request]()
			{
			return this->describeSecureSuggestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSecurityStatInfoOutcome AegisClient::describeSecurityStatInfo(const DescribeSecurityStatInfoRequest &request) const
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

void AegisClient::describeSecurityStatInfoAsync(const DescribeSecurityStatInfoRequest& request, const DescribeSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecurityStatInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSecurityStatInfoOutcomeCallable AegisClient::describeSecurityStatInfoCallable(const DescribeSecurityStatInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecurityStatInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSecurityStatInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSlsProjectOutcome AegisClient::describeSlsProject(const DescribeSlsProjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSlsProjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSlsProjectOutcome(DescribeSlsProjectResult(outcome.result()));
	else
		return DescribeSlsProjectOutcome(outcome.error());
}

void AegisClient::describeSlsProjectAsync(const DescribeSlsProjectRequest& request, const DescribeSlsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSlsProject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSlsProjectOutcomeCallable AegisClient::describeSlsProjectCallable(const DescribeSlsProjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSlsProjectOutcome()>>(
			[this, request]()
			{
			return this->describeSlsProject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStatisticsOutcome AegisClient::describeStatistics(const DescribeStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatisticsOutcome(DescribeStatisticsResult(outcome.result()));
	else
		return DescribeStatisticsOutcome(outcome.error());
}

void AegisClient::describeStatisticsAsync(const DescribeStatisticsRequest& request, const DescribeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStatisticsOutcomeCallable AegisClient::describeStatisticsCallable(const DescribeStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStrategyExecDetailOutcome AegisClient::describeStrategyExecDetail(const DescribeStrategyExecDetailRequest &request) const
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

void AegisClient::describeStrategyExecDetailAsync(const DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyExecDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStrategyExecDetailOutcomeCallable AegisClient::describeStrategyExecDetailCallable(const DescribeStrategyExecDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyExecDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyExecDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStrategyProcessOutcome AegisClient::describeStrategyProcess(const DescribeStrategyProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStrategyProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStrategyProcessOutcome(DescribeStrategyProcessResult(outcome.result()));
	else
		return DescribeStrategyProcessOutcome(outcome.error());
}

void AegisClient::describeStrategyProcessAsync(const DescribeStrategyProcessRequest& request, const DescribeStrategyProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStrategyProcessOutcomeCallable AegisClient::describeStrategyProcessCallable(const DescribeStrategyProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyProcessOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStrategyTargetOutcome AegisClient::describeStrategyTarget(const DescribeStrategyTargetRequest &request) const
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

void AegisClient::describeStrategyTargetAsync(const DescribeStrategyTargetRequest& request, const DescribeStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStrategyTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStrategyTargetOutcomeCallable AegisClient::describeStrategyTargetCallable(const DescribeStrategyTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStrategyTargetOutcome()>>(
			[this, request]()
			{
			return this->describeStrategyTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStratetyOutcome AegisClient::describeStratety(const DescribeStratetyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStratetyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStratetyOutcome(DescribeStratetyResult(outcome.result()));
	else
		return DescribeStratetyOutcome(outcome.error());
}

void AegisClient::describeStratetyAsync(const DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStratety(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStratetyOutcomeCallable AegisClient::describeStratetyCallable(const DescribeStratetyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStratetyOutcome()>>(
			[this, request]()
			{
			return this->describeStratety(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeStratetyDetailOutcome AegisClient::describeStratetyDetail(const DescribeStratetyDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStratetyDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStratetyDetailOutcome(DescribeStratetyDetailResult(outcome.result()));
	else
		return DescribeStratetyDetailOutcome(outcome.error());
}

void AegisClient::describeStratetyDetailAsync(const DescribeStratetyDetailRequest& request, const DescribeStratetyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStratetyDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeStratetyDetailOutcomeCallable AegisClient::describeStratetyDetailCallable(const DescribeStratetyDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStratetyDetailOutcome()>>(
			[this, request]()
			{
			return this->describeStratetyDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSummaryInfoOutcome AegisClient::describeSummaryInfo(const DescribeSummaryInfoRequest &request) const
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

void AegisClient::describeSummaryInfoAsync(const DescribeSummaryInfoRequest& request, const DescribeSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSummaryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSummaryInfoOutcomeCallable AegisClient::describeSummaryInfoCallable(const DescribeSummaryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSummaryInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSummaryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSupervisonInfoOutcome AegisClient::describeSupervisonInfo(const DescribeSupervisonInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSupervisonInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSupervisonInfoOutcome(DescribeSupervisonInfoResult(outcome.result()));
	else
		return DescribeSupervisonInfoOutcome(outcome.error());
}

void AegisClient::describeSupervisonInfoAsync(const DescribeSupervisonInfoRequest& request, const DescribeSupervisonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSupervisonInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSupervisonInfoOutcomeCallable AegisClient::describeSupervisonInfoCallable(const DescribeSupervisonInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSupervisonInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSupervisonInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspEventDetailOutcome AegisClient::describeSuspEventDetail(const DescribeSuspEventDetailRequest &request) const
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

void AegisClient::describeSuspEventDetailAsync(const DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspEventDetailOutcomeCallable AegisClient::describeSuspEventDetailCallable(const DescribeSuspEventDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventDetailOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspEventExportInfoOutcome AegisClient::describeSuspEventExportInfo(const DescribeSuspEventExportInfoRequest &request) const
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

void AegisClient::describeSuspEventExportInfoAsync(const DescribeSuspEventExportInfoRequest& request, const DescribeSuspEventExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspEventExportInfoOutcomeCallable AegisClient::describeSuspEventExportInfoCallable(const DescribeSuspEventExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspEventQuaraFilesOutcome AegisClient::describeSuspEventQuaraFiles(const DescribeSuspEventQuaraFilesRequest &request) const
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

void AegisClient::describeSuspEventQuaraFilesAsync(const DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventQuaraFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspEventQuaraFilesOutcomeCallable AegisClient::describeSuspEventQuaraFilesCallable(const DescribeSuspEventQuaraFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventQuaraFilesOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventQuaraFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspEventTypesOutcome AegisClient::describeSuspEventTypes(const DescribeSuspEventTypesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspEventTypesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspEventTypesOutcome(DescribeSuspEventTypesResult(outcome.result()));
	else
		return DescribeSuspEventTypesOutcome(outcome.error());
}

void AegisClient::describeSuspEventTypesAsync(const DescribeSuspEventTypesRequest& request, const DescribeSuspEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventTypes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspEventTypesOutcomeCallable AegisClient::describeSuspEventTypesCallable(const DescribeSuspEventTypesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventTypesOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventTypes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspEventUserSettingOutcome AegisClient::describeSuspEventUserSetting(const DescribeSuspEventUserSettingRequest &request) const
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

void AegisClient::describeSuspEventUserSettingAsync(const DescribeSuspEventUserSettingRequest& request, const DescribeSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEventUserSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspEventUserSettingOutcomeCallable AegisClient::describeSuspEventUserSettingCallable(const DescribeSuspEventUserSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventUserSettingOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEventUserSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspEventsOutcome AegisClient::describeSuspEvents(const DescribeSuspEventsRequest &request) const
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

void AegisClient::describeSuspEventsAsync(const DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspEventsOutcomeCallable AegisClient::describeSuspEventsCallable(const DescribeSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspTrendStatisticsOutcome AegisClient::describeSuspTrendStatistics(const DescribeSuspTrendStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspTrendStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspTrendStatisticsOutcome(DescribeSuspTrendStatisticsResult(outcome.result()));
	else
		return DescribeSuspTrendStatisticsOutcome(outcome.error());
}

void AegisClient::describeSuspTrendStatisticsAsync(const DescribeSuspTrendStatisticsRequest& request, const DescribeSuspTrendStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspTrendStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspTrendStatisticsOutcomeCallable AegisClient::describeSuspTrendStatisticsCallable(const DescribeSuspTrendStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspTrendStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspTrendStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspiciousEventsOutcome AegisClient::describeSuspiciousEvents(const DescribeSuspiciousEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspiciousEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspiciousEventsOutcome(DescribeSuspiciousEventsResult(outcome.result()));
	else
		return DescribeSuspiciousEventsOutcome(outcome.error());
}

void AegisClient::describeSuspiciousEventsAsync(const DescribeSuspiciousEventsRequest& request, const DescribeSuspiciousEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspiciousEventsOutcomeCallable AegisClient::describeSuspiciousEventsCallable(const DescribeSuspiciousEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousEventsOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspiciousExportInfoOutcome AegisClient::describeSuspiciousExportInfo(const DescribeSuspiciousExportInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSuspiciousExportInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSuspiciousExportInfoOutcome(DescribeSuspiciousExportInfoResult(outcome.result()));
	else
		return DescribeSuspiciousExportInfoOutcome(outcome.error());
}

void AegisClient::describeSuspiciousExportInfoAsync(const DescribeSuspiciousExportInfoRequest& request, const DescribeSuspiciousExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspiciousExportInfoOutcomeCallable AegisClient::describeSuspiciousExportInfoCallable(const DescribeSuspiciousExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspiciousOverallConfigOutcome AegisClient::describeSuspiciousOverallConfig(const DescribeSuspiciousOverallConfigRequest &request) const
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

void AegisClient::describeSuspiciousOverallConfigAsync(const DescribeSuspiciousOverallConfigRequest& request, const DescribeSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspiciousOverallConfigOutcomeCallable AegisClient::describeSuspiciousOverallConfigCallable(const DescribeSuspiciousOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeSuspiciousUUIDConfigOutcome AegisClient::describeSuspiciousUUIDConfig(const DescribeSuspiciousUUIDConfigRequest &request) const
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

void AegisClient::describeSuspiciousUUIDConfigAsync(const DescribeSuspiciousUUIDConfigRequest& request, const DescribeSuspiciousUUIDConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSuspiciousUUIDConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeSuspiciousUUIDConfigOutcomeCallable AegisClient::describeSuspiciousUUIDConfigCallable(const DescribeSuspiciousUUIDConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSuspiciousUUIDConfigOutcome()>>(
			[this, request]()
			{
			return this->describeSuspiciousUUIDConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTargetOutcome AegisClient::describeTarget(const DescribeTargetRequest &request) const
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

void AegisClient::describeTargetAsync(const DescribeTargetRequest& request, const DescribeTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTargetOutcomeCallable AegisClient::describeTargetCallable(const DescribeTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTargetOutcome()>>(
			[this, request]()
			{
			return this->describeTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTargetConfigOutcome AegisClient::describeTargetConfig(const DescribeTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTargetConfigOutcome(DescribeTargetConfigResult(outcome.result()));
	else
		return DescribeTargetConfigOutcome(outcome.error());
}

void AegisClient::describeTargetConfigAsync(const DescribeTargetConfigRequest& request, const DescribeTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTargetConfigOutcomeCallable AegisClient::describeTargetConfigCallable(const DescribeTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->describeTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTopRiskyAssetsOutcome AegisClient::describeTopRiskyAssets(const DescribeTopRiskyAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTopRiskyAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTopRiskyAssetsOutcome(DescribeTopRiskyAssetsResult(outcome.result()));
	else
		return DescribeTopRiskyAssetsOutcome(outcome.error());
}

void AegisClient::describeTopRiskyAssetsAsync(const DescribeTopRiskyAssetsRequest& request, const DescribeTopRiskyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTopRiskyAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTopRiskyAssetsOutcomeCallable AegisClient::describeTopRiskyAssetsCallable(const DescribeTopRiskyAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTopRiskyAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeTopRiskyAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTopicListOutcome AegisClient::describeTopicList(const DescribeTopicListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTopicListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTopicListOutcome(DescribeTopicListResult(outcome.result()));
	else
		return DescribeTopicListOutcome(outcome.error());
}

void AegisClient::describeTopicListAsync(const DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTopicList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTopicListOutcomeCallable AegisClient::describeTopicListCallable(const DescribeTopicListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTopicListOutcome()>>(
			[this, request]()
			{
			return this->describeTopicList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTotalStatisticsOutcome AegisClient::describeTotalStatistics(const DescribeTotalStatisticsRequest &request) const
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

void AegisClient::describeTotalStatisticsAsync(const DescribeTotalStatisticsRequest& request, const DescribeTotalStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTotalStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTotalStatisticsOutcomeCallable AegisClient::describeTotalStatisticsCallable(const DescribeTotalStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTotalStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeTotalStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTraceInfoDetailOutcome AegisClient::describeTraceInfoDetail(const DescribeTraceInfoDetailRequest &request) const
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

void AegisClient::describeTraceInfoDetailAsync(const DescribeTraceInfoDetailRequest& request, const DescribeTraceInfoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceInfoDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTraceInfoDetailOutcomeCallable AegisClient::describeTraceInfoDetailCallable(const DescribeTraceInfoDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceInfoDetailOutcome()>>(
			[this, request]()
			{
			return this->describeTraceInfoDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTraceInfoNodeOutcome AegisClient::describeTraceInfoNode(const DescribeTraceInfoNodeRequest &request) const
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

void AegisClient::describeTraceInfoNodeAsync(const DescribeTraceInfoNodeRequest& request, const DescribeTraceInfoNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceInfoNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTraceInfoNodeOutcomeCallable AegisClient::describeTraceInfoNodeCallable(const DescribeTraceInfoNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceInfoNodeOutcome()>>(
			[this, request]()
			{
			return this->describeTraceInfoNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeTraceInfoNodeListOutcome AegisClient::describeTraceInfoNodeList(const DescribeTraceInfoNodeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTraceInfoNodeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTraceInfoNodeListOutcome(DescribeTraceInfoNodeListResult(outcome.result()));
	else
		return DescribeTraceInfoNodeListOutcome(outcome.error());
}

void AegisClient::describeTraceInfoNodeListAsync(const DescribeTraceInfoNodeListRequest& request, const DescribeTraceInfoNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTraceInfoNodeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeTraceInfoNodeListOutcomeCallable AegisClient::describeTraceInfoNodeListCallable(const DescribeTraceInfoNodeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTraceInfoNodeListOutcome()>>(
			[this, request]()
			{
			return this->describeTraceInfoNodeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeUserSettingOutcome AegisClient::describeUserSetting(const DescribeUserSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserSettingOutcome(DescribeUserSettingResult(outcome.result()));
	else
		return DescribeUserSettingOutcome(outcome.error());
}

void AegisClient::describeUserSettingAsync(const DescribeUserSettingRequest& request, const DescribeUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeUserSettingOutcomeCallable AegisClient::describeUserSettingCallable(const DescribeUserSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserSettingOutcome()>>(
			[this, request]()
			{
			return this->describeUserSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeUuidConfigOutcome AegisClient::describeUuidConfig(const DescribeUuidConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUuidConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUuidConfigOutcome(DescribeUuidConfigResult(outcome.result()));
	else
		return DescribeUuidConfigOutcome(outcome.error());
}

void AegisClient::describeUuidConfigAsync(const DescribeUuidConfigRequest& request, const DescribeUuidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUuidConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeUuidConfigOutcomeCallable AegisClient::describeUuidConfigCallable(const DescribeUuidConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUuidConfigOutcome()>>(
			[this, request]()
			{
			return this->describeUuidConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVersionConfigOutcome AegisClient::describeVersionConfig(const DescribeVersionConfigRequest &request) const
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

void AegisClient::describeVersionConfigAsync(const DescribeVersionConfigRequest& request, const DescribeVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVersionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVersionConfigOutcomeCallable AegisClient::describeVersionConfigCallable(const DescribeVersionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVersionConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVersionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulBatchOutcome AegisClient::describeVulBatch(const DescribeVulBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulBatchOutcome(DescribeVulBatchResult(outcome.result()));
	else
		return DescribeVulBatchOutcome(outcome.error());
}

void AegisClient::describeVulBatchAsync(const DescribeVulBatchRequest& request, const DescribeVulBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulBatchOutcomeCallable AegisClient::describeVulBatchCallable(const DescribeVulBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulBatchOutcome()>>(
			[this, request]()
			{
			return this->describeVulBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulConfigOutcome AegisClient::describeVulConfig(const DescribeVulConfigRequest &request) const
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

void AegisClient::describeVulConfigAsync(const DescribeVulConfigRequest& request, const DescribeVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulConfigOutcomeCallable AegisClient::describeVulConfigCallable(const DescribeVulConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulConfigOutcome()>>(
			[this, request]()
			{
			return this->describeVulConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulDetailsOutcome AegisClient::describeVulDetails(const DescribeVulDetailsRequest &request) const
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

void AegisClient::describeVulDetailsAsync(const DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulDetailsOutcomeCallable AegisClient::describeVulDetailsCallable(const DescribeVulDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulDetailsOutcome()>>(
			[this, request]()
			{
			return this->describeVulDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulExportInfoOutcome AegisClient::describeVulExportInfo(const DescribeVulExportInfoRequest &request) const
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

void AegisClient::describeVulExportInfoAsync(const DescribeVulExportInfoRequest& request, const DescribeVulExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulExportInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulExportInfoOutcomeCallable AegisClient::describeVulExportInfoCallable(const DescribeVulExportInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulExportInfoOutcome()>>(
			[this, request]()
			{
			return this->describeVulExportInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulLevelOutcome AegisClient::describeVulLevel(const DescribeVulLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulLevelOutcome(DescribeVulLevelResult(outcome.result()));
	else
		return DescribeVulLevelOutcome(outcome.error());
}

void AegisClient::describeVulLevelAsync(const DescribeVulLevelRequest& request, const DescribeVulLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulLevelOutcomeCallable AegisClient::describeVulLevelCallable(const DescribeVulLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulLevelOutcome()>>(
			[this, request]()
			{
			return this->describeVulLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulLevelStatisticsOutcome AegisClient::describeVulLevelStatistics(const DescribeVulLevelStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulLevelStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulLevelStatisticsOutcome(DescribeVulLevelStatisticsResult(outcome.result()));
	else
		return DescribeVulLevelStatisticsOutcome(outcome.error());
}

void AegisClient::describeVulLevelStatisticsAsync(const DescribeVulLevelStatisticsRequest& request, const DescribeVulLevelStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulLevelStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulLevelStatisticsOutcomeCallable AegisClient::describeVulLevelStatisticsCallable(const DescribeVulLevelStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulLevelStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulLevelStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulListOutcome AegisClient::describeVulList(const DescribeVulListRequest &request) const
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

void AegisClient::describeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulListOutcomeCallable AegisClient::describeVulListCallable(const DescribeVulListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
			[this, request]()
			{
			return this->describeVulList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulMachineListOutcome AegisClient::describeVulMachineList(const DescribeVulMachineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulMachineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulMachineListOutcome(DescribeVulMachineListResult(outcome.result()));
	else
		return DescribeVulMachineListOutcome(outcome.error());
}

void AegisClient::describeVulMachineListAsync(const DescribeVulMachineListRequest& request, const DescribeVulMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulMachineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulMachineListOutcomeCallable AegisClient::describeVulMachineListCallable(const DescribeVulMachineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulMachineListOutcome()>>(
			[this, request]()
			{
			return this->describeVulMachineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulNumStatisticsOutcome AegisClient::describeVulNumStatistics(const DescribeVulNumStatisticsRequest &request) const
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

void AegisClient::describeVulNumStatisticsAsync(const DescribeVulNumStatisticsRequest& request, const DescribeVulNumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulNumStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulNumStatisticsOutcomeCallable AegisClient::describeVulNumStatisticsCallable(const DescribeVulNumStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulNumStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulNumStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulRelatedProcessOutcome AegisClient::describeVulRelatedProcess(const DescribeVulRelatedProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulRelatedProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulRelatedProcessOutcome(DescribeVulRelatedProcessResult(outcome.result()));
	else
		return DescribeVulRelatedProcessOutcome(outcome.error());
}

void AegisClient::describeVulRelatedProcessAsync(const DescribeVulRelatedProcessRequest& request, const DescribeVulRelatedProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulRelatedProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulRelatedProcessOutcomeCallable AegisClient::describeVulRelatedProcessCallable(const DescribeVulRelatedProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulRelatedProcessOutcome()>>(
			[this, request]()
			{
			return this->describeVulRelatedProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulStatisticsOutcome AegisClient::describeVulStatistics(const DescribeVulStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulStatisticsOutcome(DescribeVulStatisticsResult(outcome.result()));
	else
		return DescribeVulStatisticsOutcome(outcome.error());
}

void AegisClient::describeVulStatisticsAsync(const DescribeVulStatisticsRequest& request, const DescribeVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulStatisticsOutcomeCallable AegisClient::describeVulStatisticsCallable(const DescribeVulStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulTargetStatisticsOutcome AegisClient::describeVulTargetStatistics(const DescribeVulTargetStatisticsRequest &request) const
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

void AegisClient::describeVulTargetStatisticsAsync(const DescribeVulTargetStatisticsRequest& request, const DescribeVulTargetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulTargetStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulTargetStatisticsOutcomeCallable AegisClient::describeVulTargetStatisticsCallable(const DescribeVulTargetStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulTargetStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeVulTargetStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulWhitelistOutcome AegisClient::describeVulWhitelist(const DescribeVulWhitelistRequest &request) const
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

void AegisClient::describeVulWhitelistAsync(const DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulWhitelist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulWhitelistOutcomeCallable AegisClient::describeVulWhitelistCallable(const DescribeVulWhitelistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulWhitelistOutcome()>>(
			[this, request]()
			{
			return this->describeVulWhitelist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeVulnerabilitySummaryOutcome AegisClient::describeVulnerabilitySummary(const DescribeVulnerabilitySummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVulnerabilitySummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVulnerabilitySummaryOutcome(DescribeVulnerabilitySummaryResult(outcome.result()));
	else
		return DescribeVulnerabilitySummaryOutcome(outcome.error());
}

void AegisClient::describeVulnerabilitySummaryAsync(const DescribeVulnerabilitySummaryRequest& request, const DescribeVulnerabilitySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVulnerabilitySummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeVulnerabilitySummaryOutcomeCallable AegisClient::describeVulnerabilitySummaryCallable(const DescribeVulnerabilitySummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVulnerabilitySummaryOutcome()>>(
			[this, request]()
			{
			return this->describeVulnerabilitySummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWarningOutcome AegisClient::describeWarning(const DescribeWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWarningOutcome(DescribeWarningResult(outcome.result()));
	else
		return DescribeWarningOutcome(outcome.error());
}

void AegisClient::describeWarningAsync(const DescribeWarningRequest& request, const DescribeWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWarningOutcomeCallable AegisClient::describeWarningCallable(const DescribeWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWarningOutcome()>>(
			[this, request]()
			{
			return this->describeWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWarningMachinesOutcome AegisClient::describeWarningMachines(const DescribeWarningMachinesRequest &request) const
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

void AegisClient::describeWarningMachinesAsync(const DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWarningMachines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWarningMachinesOutcomeCallable AegisClient::describeWarningMachinesCallable(const DescribeWarningMachinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWarningMachinesOutcome()>>(
			[this, request]()
			{
			return this->describeWarningMachines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebLockBindListOutcome AegisClient::describeWebLockBindList(const DescribeWebLockBindListRequest &request) const
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

void AegisClient::describeWebLockBindListAsync(const DescribeWebLockBindListRequest& request, const DescribeWebLockBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockBindList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebLockBindListOutcomeCallable AegisClient::describeWebLockBindListCallable(const DescribeWebLockBindListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockBindListOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockBindList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebLockConfigListOutcome AegisClient::describeWebLockConfigList(const DescribeWebLockConfigListRequest &request) const
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

void AegisClient::describeWebLockConfigListAsync(const DescribeWebLockConfigListRequest& request, const DescribeWebLockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockConfigList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebLockConfigListOutcomeCallable AegisClient::describeWebLockConfigListCallable(const DescribeWebLockConfigListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockConfigListOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockConfigList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebLockEventsOutcome AegisClient::describeWebLockEvents(const DescribeWebLockEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockEventsOutcome(DescribeWebLockEventsResult(outcome.result()));
	else
		return DescribeWebLockEventsOutcome(outcome.error());
}

void AegisClient::describeWebLockEventsAsync(const DescribeWebLockEventsRequest& request, const DescribeWebLockEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebLockEventsOutcomeCallable AegisClient::describeWebLockEventsCallable(const DescribeWebLockEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockEventsOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebLockMachineListOutcome AegisClient::describeWebLockMachineList(const DescribeWebLockMachineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebLockMachineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebLockMachineListOutcome(DescribeWebLockMachineListResult(outcome.result()));
	else
		return DescribeWebLockMachineListOutcome(outcome.error());
}

void AegisClient::describeWebLockMachineListAsync(const DescribeWebLockMachineListRequest& request, const DescribeWebLockMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockMachineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebLockMachineListOutcomeCallable AegisClient::describeWebLockMachineListCallable(const DescribeWebLockMachineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockMachineListOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockMachineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebLockStatusOutcome AegisClient::describeWebLockStatus(const DescribeWebLockStatusRequest &request) const
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

void AegisClient::describeWebLockStatusAsync(const DescribeWebLockStatusRequest& request, const DescribeWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebLockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebLockStatusOutcomeCallable AegisClient::describeWebLockStatusCallable(const DescribeWebLockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebLockStatusOutcome()>>(
			[this, request]()
			{
			return this->describeWebLockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebshellOutcome AegisClient::describeWebshell(const DescribeWebshellRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebshellOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebshellOutcome(DescribeWebshellResult(outcome.result()));
	else
		return DescribeWebshellOutcome(outcome.error());
}

void AegisClient::describeWebshellAsync(const DescribeWebshellRequest& request, const DescribeWebshellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebshell(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebshellOutcomeCallable AegisClient::describeWebshellCallable(const DescribeWebshellRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebshellOutcome()>>(
			[this, request]()
			{
			return this->describeWebshell(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWebshellListOutcome AegisClient::describeWebshellList(const DescribeWebshellListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWebshellListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWebshellListOutcome(DescribeWebshellListResult(outcome.result()));
	else
		return DescribeWebshellListOutcome(outcome.error());
}

void AegisClient::describeWebshellListAsync(const DescribeWebshellListRequest& request, const DescribeWebshellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWebshellList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWebshellListOutcomeCallable AegisClient::describeWebshellListCallable(const DescribeWebshellListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWebshellListOutcome()>>(
			[this, request]()
			{
			return this->describeWebshellList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListAssetOutcome AegisClient::describeWhiteListAsset(const DescribeWhiteListAssetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListAssetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListAssetOutcome(DescribeWhiteListAssetResult(outcome.result()));
	else
		return DescribeWhiteListAssetOutcome(outcome.error());
}

void AegisClient::describeWhiteListAssetAsync(const DescribeWhiteListAssetRequest& request, const DescribeWhiteListAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListAsset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListAssetOutcomeCallable AegisClient::describeWhiteListAssetCallable(const DescribeWhiteListAssetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListAssetOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListAsset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListAuthorizeOutcome AegisClient::describeWhiteListAuthorize(const DescribeWhiteListAuthorizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListAuthorizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListAuthorizeOutcome(DescribeWhiteListAuthorizeResult(outcome.result()));
	else
		return DescribeWhiteListAuthorizeOutcome(outcome.error());
}

void AegisClient::describeWhiteListAuthorizeAsync(const DescribeWhiteListAuthorizeRequest& request, const DescribeWhiteListAuthorizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListAuthorize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListAuthorizeOutcomeCallable AegisClient::describeWhiteListAuthorizeCallable(const DescribeWhiteListAuthorizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListAuthorizeOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListAuthorize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListEffectiveAssetsOutcome AegisClient::describeWhiteListEffectiveAssets(const DescribeWhiteListEffectiveAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListEffectiveAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListEffectiveAssetsOutcome(DescribeWhiteListEffectiveAssetsResult(outcome.result()));
	else
		return DescribeWhiteListEffectiveAssetsOutcome(outcome.error());
}

void AegisClient::describeWhiteListEffectiveAssetsAsync(const DescribeWhiteListEffectiveAssetsRequest& request, const DescribeWhiteListEffectiveAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListEffectiveAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListEffectiveAssetsOutcomeCallable AegisClient::describeWhiteListEffectiveAssetsCallable(const DescribeWhiteListEffectiveAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListEffectiveAssetsOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListEffectiveAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListProcessOutcome AegisClient::describeWhiteListProcess(const DescribeWhiteListProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListProcessOutcome(DescribeWhiteListProcessResult(outcome.result()));
	else
		return DescribeWhiteListProcessOutcome(outcome.error());
}

void AegisClient::describeWhiteListProcessAsync(const DescribeWhiteListProcessRequest& request, const DescribeWhiteListProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListProcessOutcomeCallable AegisClient::describeWhiteListProcessCallable(const DescribeWhiteListProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListProcessOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListProcess(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListStrategyCountOutcome AegisClient::describeWhiteListStrategyCount(const DescribeWhiteListStrategyCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListStrategyCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListStrategyCountOutcome(DescribeWhiteListStrategyCountResult(outcome.result()));
	else
		return DescribeWhiteListStrategyCountOutcome(outcome.error());
}

void AegisClient::describeWhiteListStrategyCountAsync(const DescribeWhiteListStrategyCountRequest& request, const DescribeWhiteListStrategyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListStrategyCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListStrategyCountOutcomeCallable AegisClient::describeWhiteListStrategyCountCallable(const DescribeWhiteListStrategyCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListStrategyCountOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListStrategyCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListStrategyListOutcome AegisClient::describeWhiteListStrategyList(const DescribeWhiteListStrategyListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListStrategyListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListStrategyListOutcome(DescribeWhiteListStrategyListResult(outcome.result()));
	else
		return DescribeWhiteListStrategyListOutcome(outcome.error());
}

void AegisClient::describeWhiteListStrategyListAsync(const DescribeWhiteListStrategyListRequest& request, const DescribeWhiteListStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListStrategyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListStrategyListOutcomeCallable AegisClient::describeWhiteListStrategyListCallable(const DescribeWhiteListStrategyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListStrategyListOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListStrategyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListStrategyStatisticsOutcome AegisClient::describeWhiteListStrategyStatistics(const DescribeWhiteListStrategyStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListStrategyStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListStrategyStatisticsOutcome(DescribeWhiteListStrategyStatisticsResult(outcome.result()));
	else
		return DescribeWhiteListStrategyStatisticsOutcome(outcome.error());
}

void AegisClient::describeWhiteListStrategyStatisticsAsync(const DescribeWhiteListStrategyStatisticsRequest& request, const DescribeWhiteListStrategyStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListStrategyStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListStrategyStatisticsOutcomeCallable AegisClient::describeWhiteListStrategyStatisticsCallable(const DescribeWhiteListStrategyStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListStrategyStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListStrategyStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeWhiteListStrategyUuidCountOutcome AegisClient::describeWhiteListStrategyUuidCount(const DescribeWhiteListStrategyUuidCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeWhiteListStrategyUuidCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeWhiteListStrategyUuidCountOutcome(DescribeWhiteListStrategyUuidCountResult(outcome.result()));
	else
		return DescribeWhiteListStrategyUuidCountOutcome(outcome.error());
}

void AegisClient::describeWhiteListStrategyUuidCountAsync(const DescribeWhiteListStrategyUuidCountRequest& request, const DescribeWhiteListStrategyUuidCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeWhiteListStrategyUuidCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeWhiteListStrategyUuidCountOutcomeCallable AegisClient::describeWhiteListStrategyUuidCountCallable(const DescribeWhiteListStrategyUuidCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeWhiteListStrategyUuidCountOutcome()>>(
			[this, request]()
			{
			return this->describeWhiteListStrategyUuidCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribeYesterdayStatisticsOutcome AegisClient::describeYesterdayStatistics(const DescribeYesterdayStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeYesterdayStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeYesterdayStatisticsOutcome(DescribeYesterdayStatisticsResult(outcome.result()));
	else
		return DescribeYesterdayStatisticsOutcome(outcome.error());
}

void AegisClient::describeYesterdayStatisticsAsync(const DescribeYesterdayStatisticsRequest& request, const DescribeYesterdayStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeYesterdayStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribeYesterdayStatisticsOutcomeCallable AegisClient::describeYesterdayStatisticsCallable(const DescribeYesterdayStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeYesterdayStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeYesterdayStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DescribesummaryOutcome AegisClient::describesummary(const DescribesummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribesummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribesummaryOutcome(DescribesummaryResult(outcome.result()));
	else
		return DescribesummaryOutcome(outcome.error());
}

void AegisClient::describesummaryAsync(const DescribesummaryRequest& request, const DescribesummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describesummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DescribesummaryOutcomeCallable AegisClient::describesummaryCallable(const DescribesummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribesummaryOutcome()>>(
			[this, request]()
			{
			return this->describesummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::DownloadLogOutcome AegisClient::downloadLog(const DownloadLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadLogOutcome(DownloadLogResult(outcome.result()));
	else
		return DownloadLogOutcome(outcome.error());
}

void AegisClient::downloadLogAsync(const DownloadLogRequest& request, const DownloadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::DownloadLogOutcomeCallable AegisClient::downloadLogCallable(const DownloadLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadLogOutcome()>>(
			[this, request]()
			{
			return this->downloadLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ExecStrategyOutcome AegisClient::execStrategy(const ExecStrategyRequest &request) const
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

void AegisClient::execStrategyAsync(const ExecStrategyRequest& request, const ExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, execStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ExecStrategyOutcomeCallable AegisClient::execStrategyCallable(const ExecStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecStrategyOutcome()>>(
			[this, request]()
			{
			return this->execStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ExecuteRuleEngineActualTimeOutcome AegisClient::executeRuleEngineActualTime(const ExecuteRuleEngineActualTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteRuleEngineActualTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteRuleEngineActualTimeOutcome(ExecuteRuleEngineActualTimeResult(outcome.result()));
	else
		return ExecuteRuleEngineActualTimeOutcome(outcome.error());
}

void AegisClient::executeRuleEngineActualTimeAsync(const ExecuteRuleEngineActualTimeRequest& request, const ExecuteRuleEngineActualTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeRuleEngineActualTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ExecuteRuleEngineActualTimeOutcomeCallable AegisClient::executeRuleEngineActualTimeCallable(const ExecuteRuleEngineActualTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteRuleEngineActualTimeOutcome()>>(
			[this, request]()
			{
			return this->executeRuleEngineActualTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ExportSuspEventsOutcome AegisClient::exportSuspEvents(const ExportSuspEventsRequest &request) const
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

void AegisClient::exportSuspEventsAsync(const ExportSuspEventsRequest& request, const ExportSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ExportSuspEventsOutcomeCallable AegisClient::exportSuspEventsCallable(const ExportSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->exportSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ExportVulOutcome AegisClient::exportVul(const ExportVulRequest &request) const
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

void AegisClient::exportVulAsync(const ExportVulRequest& request, const ExportVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ExportVulOutcomeCallable AegisClient::exportVulCallable(const ExportVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportVulOutcome()>>(
			[this, request]()
			{
			return this->exportVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ExportWarningOutcome AegisClient::exportWarning(const ExportWarningRequest &request) const
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

void AegisClient::exportWarningAsync(const ExportWarningRequest& request, const ExportWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ExportWarningOutcomeCallable AegisClient::exportWarningCallable(const ExportWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportWarningOutcome()>>(
			[this, request]()
			{
			return this->exportWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetAccountStatisticsOutcome AegisClient::getAccountStatistics(const GetAccountStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountStatisticsOutcome(GetAccountStatisticsResult(outcome.result()));
	else
		return GetAccountStatisticsOutcome(outcome.error());
}

void AegisClient::getAccountStatisticsAsync(const GetAccountStatisticsRequest& request, const GetAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetAccountStatisticsOutcomeCallable AegisClient::getAccountStatisticsCallable(const GetAccountStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getAccountStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetCrackStatisticsOutcome AegisClient::getCrackStatistics(const GetCrackStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCrackStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCrackStatisticsOutcome(GetCrackStatisticsResult(outcome.result()));
	else
		return GetCrackStatisticsOutcome(outcome.error());
}

void AegisClient::getCrackStatisticsAsync(const GetCrackStatisticsRequest& request, const GetCrackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCrackStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetCrackStatisticsOutcomeCallable AegisClient::getCrackStatisticsCallable(const GetCrackStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCrackStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getCrackStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetEntityListOutcome AegisClient::getEntityList(const GetEntityListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEntityListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEntityListOutcome(GetEntityListResult(outcome.result()));
	else
		return GetEntityListOutcome(outcome.error());
}

void AegisClient::getEntityListAsync(const GetEntityListRequest& request, const GetEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEntityList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetEntityListOutcomeCallable AegisClient::getEntityListCallable(const GetEntityListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEntityListOutcome()>>(
			[this, request]()
			{
			return this->getEntityList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetStatisticsOutcome AegisClient::getStatistics(const GetStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatisticsOutcome(GetStatisticsResult(outcome.result()));
	else
		return GetStatisticsOutcome(outcome.error());
}

void AegisClient::getStatisticsAsync(const GetStatisticsRequest& request, const GetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetStatisticsOutcomeCallable AegisClient::getStatisticsCallable(const GetStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::GetStatisticsByUuidOutcome AegisClient::getStatisticsByUuid(const GetStatisticsByUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetStatisticsByUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetStatisticsByUuidOutcome(GetStatisticsByUuidResult(outcome.result()));
	else
		return GetStatisticsByUuidOutcome(outcome.error());
}

void AegisClient::getStatisticsByUuidAsync(const GetStatisticsByUuidRequest& request, const GetStatisticsByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getStatisticsByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::GetStatisticsByUuidOutcomeCallable AegisClient::getStatisticsByUuidCallable(const GetStatisticsByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetStatisticsByUuidOutcome()>>(
			[this, request]()
			{
			return this->getStatisticsByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::IgnoreHcCheckWarningsOutcome AegisClient::ignoreHcCheckWarnings(const IgnoreHcCheckWarningsRequest &request) const
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

void AegisClient::ignoreHcCheckWarningsAsync(const IgnoreHcCheckWarningsRequest& request, const IgnoreHcCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ignoreHcCheckWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::IgnoreHcCheckWarningsOutcomeCallable AegisClient::ignoreHcCheckWarningsCallable(const IgnoreHcCheckWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IgnoreHcCheckWarningsOutcome()>>(
			[this, request]()
			{
			return this->ignoreHcCheckWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyAccessKeyLeakDealOutcome AegisClient::modifyAccessKeyLeakDeal(const ModifyAccessKeyLeakDealRequest &request) const
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

void AegisClient::modifyAccessKeyLeakDealAsync(const ModifyAccessKeyLeakDealRequest& request, const ModifyAccessKeyLeakDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessKeyLeakDeal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyAccessKeyLeakDealOutcomeCallable AegisClient::modifyAccessKeyLeakDealCallable(const ModifyAccessKeyLeakDealRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessKeyLeakDealOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessKeyLeakDeal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyAccessKeyLeakInstRunOutcome AegisClient::modifyAccessKeyLeakInstRun(const ModifyAccessKeyLeakInstRunRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccessKeyLeakInstRunOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccessKeyLeakInstRunOutcome(ModifyAccessKeyLeakInstRunResult(outcome.result()));
	else
		return ModifyAccessKeyLeakInstRunOutcome(outcome.error());
}

void AegisClient::modifyAccessKeyLeakInstRunAsync(const ModifyAccessKeyLeakInstRunRequest& request, const ModifyAccessKeyLeakInstRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessKeyLeakInstRun(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyAccessKeyLeakInstRunOutcomeCallable AegisClient::modifyAccessKeyLeakInstRunCallable(const ModifyAccessKeyLeakInstRunRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessKeyLeakInstRunOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessKeyLeakInstRun(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyAssetGroupOutcome AegisClient::modifyAssetGroup(const ModifyAssetGroupRequest &request) const
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

void AegisClient::modifyAssetGroupAsync(const ModifyAssetGroupRequest& request, const ModifyAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAssetGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyAssetGroupOutcomeCallable AegisClient::modifyAssetGroupCallable(const ModifyAssetGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAssetGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyAssetGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyAutoDelConfigOutcome AegisClient::modifyAutoDelConfig(const ModifyAutoDelConfigRequest &request) const
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

void AegisClient::modifyAutoDelConfigAsync(const ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAutoDelConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyAutoDelConfigOutcomeCallable AegisClient::modifyAutoDelConfigCallable(const ModifyAutoDelConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAutoDelConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAutoDelConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyBatchIgnoreVulOutcome AegisClient::modifyBatchIgnoreVul(const ModifyBatchIgnoreVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBatchIgnoreVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBatchIgnoreVulOutcome(ModifyBatchIgnoreVulResult(outcome.result()));
	else
		return ModifyBatchIgnoreVulOutcome(outcome.error());
}

void AegisClient::modifyBatchIgnoreVulAsync(const ModifyBatchIgnoreVulRequest& request, const ModifyBatchIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBatchIgnoreVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyBatchIgnoreVulOutcomeCallable AegisClient::modifyBatchIgnoreVulCallable(const ModifyBatchIgnoreVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBatchIgnoreVulOutcome()>>(
			[this, request]()
			{
			return this->modifyBatchIgnoreVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyClearLogstoreStorageOutcome AegisClient::modifyClearLogstoreStorage(const ModifyClearLogstoreStorageRequest &request) const
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

void AegisClient::modifyClearLogstoreStorageAsync(const ModifyClearLogstoreStorageRequest& request, const ModifyClearLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyClearLogstoreStorage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyClearLogstoreStorageOutcomeCallable AegisClient::modifyClearLogstoreStorageCallable(const ModifyClearLogstoreStorageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyClearLogstoreStorageOutcome()>>(
			[this, request]()
			{
			return this->modifyClearLogstoreStorage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyConcernNecessityOutcome AegisClient::modifyConcernNecessity(const ModifyConcernNecessityRequest &request) const
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

void AegisClient::modifyConcernNecessityAsync(const ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyConcernNecessity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyConcernNecessityOutcomeCallable AegisClient::modifyConcernNecessityCallable(const ModifyConcernNecessityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyConcernNecessityOutcome()>>(
			[this, request]()
			{
			return this->modifyConcernNecessity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyEmgVulSubmitOutcome AegisClient::modifyEmgVulSubmit(const ModifyEmgVulSubmitRequest &request) const
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

void AegisClient::modifyEmgVulSubmitAsync(const ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEmgVulSubmit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyEmgVulSubmitOutcomeCallable AegisClient::modifyEmgVulSubmitCallable(const ModifyEmgVulSubmitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEmgVulSubmitOutcome()>>(
			[this, request]()
			{
			return this->modifyEmgVulSubmit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyLogMetaStatusOutcome AegisClient::modifyLogMetaStatus(const ModifyLogMetaStatusRequest &request) const
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

void AegisClient::modifyLogMetaStatusAsync(const ModifyLogMetaStatusRequest& request, const ModifyLogMetaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLogMetaStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyLogMetaStatusOutcomeCallable AegisClient::modifyLogMetaStatusCallable(const ModifyLogMetaStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLogMetaStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyLogMetaStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyMachineConfigOutcome AegisClient::modifyMachineConfig(const ModifyMachineConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMachineConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMachineConfigOutcome(ModifyMachineConfigResult(outcome.result()));
	else
		return ModifyMachineConfigOutcome(outcome.error());
}

void AegisClient::modifyMachineConfigAsync(const ModifyMachineConfigRequest& request, const ModifyMachineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMachineConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyMachineConfigOutcomeCallable AegisClient::modifyMachineConfigCallable(const ModifyMachineConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMachineConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyMachineConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyOpenLogShipperOutcome AegisClient::modifyOpenLogShipper(const ModifyOpenLogShipperRequest &request) const
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

void AegisClient::modifyOpenLogShipperAsync(const ModifyOpenLogShipperRequest& request, const ModifyOpenLogShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOpenLogShipper(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyOpenLogShipperOutcomeCallable AegisClient::modifyOpenLogShipperCallable(const ModifyOpenLogShipperRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOpenLogShipperOutcome()>>(
			[this, request]()
			{
			return this->modifyOpenLogShipper(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyRefreshProcessInfoOutcome AegisClient::modifyRefreshProcessInfo(const ModifyRefreshProcessInfoRequest &request) const
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

void AegisClient::modifyRefreshProcessInfoAsync(const ModifyRefreshProcessInfoRequest& request, const ModifyRefreshProcessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRefreshProcessInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyRefreshProcessInfoOutcomeCallable AegisClient::modifyRefreshProcessInfoCallable(const ModifyRefreshProcessInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRefreshProcessInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyRefreshProcessInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifySasAssetStatisticsColumnOutcome AegisClient::modifySasAssetStatisticsColumn(const ModifySasAssetStatisticsColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySasAssetStatisticsColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySasAssetStatisticsColumnOutcome(ModifySasAssetStatisticsColumnResult(outcome.result()));
	else
		return ModifySasAssetStatisticsColumnOutcome(outcome.error());
}

void AegisClient::modifySasAssetStatisticsColumnAsync(const ModifySasAssetStatisticsColumnRequest& request, const ModifySasAssetStatisticsColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySasAssetStatisticsColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifySasAssetStatisticsColumnOutcomeCallable AegisClient::modifySasAssetStatisticsColumnCallable(const ModifySasAssetStatisticsColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySasAssetStatisticsColumnOutcome()>>(
			[this, request]()
			{
			return this->modifySasAssetStatisticsColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifySaveVulBatchOutcome AegisClient::modifySaveVulBatch(const ModifySaveVulBatchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySaveVulBatchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySaveVulBatchOutcome(ModifySaveVulBatchResult(outcome.result()));
	else
		return ModifySaveVulBatchOutcome(outcome.error());
}

void AegisClient::modifySaveVulBatchAsync(const ModifySaveVulBatchRequest& request, const ModifySaveVulBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySaveVulBatch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifySaveVulBatchOutcomeCallable AegisClient::modifySaveVulBatchCallable(const ModifySaveVulBatchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySaveVulBatchOutcome()>>(
			[this, request]()
			{
			return this->modifySaveVulBatch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyScreenSettingOutcome AegisClient::modifyScreenSetting(const ModifyScreenSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScreenSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScreenSettingOutcome(ModifyScreenSettingResult(outcome.result()));
	else
		return ModifyScreenSettingOutcome(outcome.error());
}

void AegisClient::modifyScreenSettingAsync(const ModifyScreenSettingRequest& request, const ModifyScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScreenSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyScreenSettingOutcomeCallable AegisClient::modifyScreenSettingCallable(const ModifyScreenSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScreenSettingOutcome()>>(
			[this, request]()
			{
			return this->modifyScreenSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifySearchConditionOutcome AegisClient::modifySearchCondition(const ModifySearchConditionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySearchConditionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySearchConditionOutcome(ModifySearchConditionResult(outcome.result()));
	else
		return ModifySearchConditionOutcome(outcome.error());
}

void AegisClient::modifySearchConditionAsync(const ModifySearchConditionRequest& request, const ModifySearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySearchCondition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifySearchConditionOutcomeCallable AegisClient::modifySearchConditionCallable(const ModifySearchConditionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySearchConditionOutcome()>>(
			[this, request]()
			{
			return this->modifySearchCondition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyStrategyOutcome AegisClient::modifyStrategy(const ModifyStrategyRequest &request) const
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

void AegisClient::modifyStrategyAsync(const ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyStrategyOutcomeCallable AegisClient::modifyStrategyCallable(const ModifyStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStrategyOutcome()>>(
			[this, request]()
			{
			return this->modifyStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyStrategyTargetOutcome AegisClient::modifyStrategyTarget(const ModifyStrategyTargetRequest &request) const
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

void AegisClient::modifyStrategyTargetAsync(const ModifyStrategyTargetRequest& request, const ModifyStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStrategyTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyStrategyTargetOutcomeCallable AegisClient::modifyStrategyTargetCallable(const ModifyStrategyTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStrategyTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyStrategyTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyTargetConfigOutcome AegisClient::modifyTargetConfig(const ModifyTargetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTargetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTargetConfigOutcome(ModifyTargetConfigResult(outcome.result()));
	else
		return ModifyTargetConfigOutcome(outcome.error());
}

void AegisClient::modifyTargetConfigAsync(const ModifyTargetConfigRequest& request, const ModifyTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyTargetConfigOutcomeCallable AegisClient::modifyTargetConfigCallable(const ModifyTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyVulConfigOutcome AegisClient::modifyVulConfig(const ModifyVulConfigRequest &request) const
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

void AegisClient::modifyVulConfigAsync(const ModifyVulConfigRequest& request, const ModifyVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyVulConfigOutcomeCallable AegisClient::modifyVulConfigCallable(const ModifyVulConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyVulConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyVulLevelOutcome AegisClient::modifyVulLevel(const ModifyVulLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVulLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVulLevelOutcome(ModifyVulLevelResult(outcome.result()));
	else
		return ModifyVulLevelOutcome(outcome.error());
}

void AegisClient::modifyVulLevelAsync(const ModifyVulLevelRequest& request, const ModifyVulLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyVulLevelOutcomeCallable AegisClient::modifyVulLevelCallable(const ModifyVulLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulLevelOutcome()>>(
			[this, request]()
			{
			return this->modifyVulLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyVulTargetOutcome AegisClient::modifyVulTarget(const ModifyVulTargetRequest &request) const
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

void AegisClient::modifyVulTargetAsync(const ModifyVulTargetRequest& request, const ModifyVulTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVulTarget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyVulTargetOutcomeCallable AegisClient::modifyVulTargetCallable(const ModifyVulTargetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVulTargetOutcome()>>(
			[this, request]()
			{
			return this->modifyVulTarget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockCreateConfigOutcome AegisClient::modifyWebLockCreateConfig(const ModifyWebLockCreateConfigRequest &request) const
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

void AegisClient::modifyWebLockCreateConfigAsync(const ModifyWebLockCreateConfigRequest& request, const ModifyWebLockCreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockCreateConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockCreateConfigOutcomeCallable AegisClient::modifyWebLockCreateConfigCallable(const ModifyWebLockCreateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockCreateConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockCreateConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockDeleteConfigOutcome AegisClient::modifyWebLockDeleteConfig(const ModifyWebLockDeleteConfigRequest &request) const
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

void AegisClient::modifyWebLockDeleteConfigAsync(const ModifyWebLockDeleteConfigRequest& request, const ModifyWebLockDeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockDeleteConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockDeleteConfigOutcomeCallable AegisClient::modifyWebLockDeleteConfigCallable(const ModifyWebLockDeleteConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockDeleteConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockDeleteConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockMachineListOutcome AegisClient::modifyWebLockMachineList(const ModifyWebLockMachineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockMachineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockMachineListOutcome(ModifyWebLockMachineListResult(outcome.result()));
	else
		return ModifyWebLockMachineListOutcome(outcome.error());
}

void AegisClient::modifyWebLockMachineListAsync(const ModifyWebLockMachineListRequest& request, const ModifyWebLockMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockMachineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockMachineListOutcomeCallable AegisClient::modifyWebLockMachineListCallable(const ModifyWebLockMachineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockMachineListOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockMachineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockOperateEventsOutcome AegisClient::modifyWebLockOperateEvents(const ModifyWebLockOperateEventsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockOperateEventsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockOperateEventsOutcome(ModifyWebLockOperateEventsResult(outcome.result()));
	else
		return ModifyWebLockOperateEventsOutcome(outcome.error());
}

void AegisClient::modifyWebLockOperateEventsAsync(const ModifyWebLockOperateEventsRequest& request, const ModifyWebLockOperateEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockOperateEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockOperateEventsOutcomeCallable AegisClient::modifyWebLockOperateEventsCallable(const ModifyWebLockOperateEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockOperateEventsOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockOperateEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockRefreshOutcome AegisClient::modifyWebLockRefresh(const ModifyWebLockRefreshRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyWebLockRefreshOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyWebLockRefreshOutcome(ModifyWebLockRefreshResult(outcome.result()));
	else
		return ModifyWebLockRefreshOutcome(outcome.error());
}

void AegisClient::modifyWebLockRefreshAsync(const ModifyWebLockRefreshRequest& request, const ModifyWebLockRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockRefresh(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockRefreshOutcomeCallable AegisClient::modifyWebLockRefreshCallable(const ModifyWebLockRefreshRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockRefreshOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockRefresh(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockStatusOutcome AegisClient::modifyWebLockStatus(const ModifyWebLockStatusRequest &request) const
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

void AegisClient::modifyWebLockStatusAsync(const ModifyWebLockStatusRequest& request, const ModifyWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockStatusOutcomeCallable AegisClient::modifyWebLockStatusCallable(const ModifyWebLockStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ModifyWebLockUpdateConfigOutcome AegisClient::modifyWebLockUpdateConfig(const ModifyWebLockUpdateConfigRequest &request) const
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

void AegisClient::modifyWebLockUpdateConfigAsync(const ModifyWebLockUpdateConfigRequest& request, const ModifyWebLockUpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyWebLockUpdateConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ModifyWebLockUpdateConfigOutcomeCallable AegisClient::modifyWebLockUpdateConfigCallable(const ModifyWebLockUpdateConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyWebLockUpdateConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyWebLockUpdateConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OpenSasTrialOutcome AegisClient::openSasTrial(const OpenSasTrialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenSasTrialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenSasTrialOutcome(OpenSasTrialResult(outcome.result()));
	else
		return OpenSasTrialOutcome(outcome.error());
}

void AegisClient::openSasTrialAsync(const OpenSasTrialRequest& request, const OpenSasTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openSasTrial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OpenSasTrialOutcomeCallable AegisClient::openSasTrialCallable(const OpenSasTrialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenSasTrialOutcome()>>(
			[this, request]()
			{
			return this->openSasTrial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateAgentClientInstallOutcome AegisClient::operateAgentClientInstall(const OperateAgentClientInstallRequest &request) const
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

void AegisClient::operateAgentClientInstallAsync(const OperateAgentClientInstallRequest& request, const OperateAgentClientInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAgentClientInstall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateAgentClientInstallOutcomeCallable AegisClient::operateAgentClientInstallCallable(const OperateAgentClientInstallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAgentClientInstallOutcome()>>(
			[this, request]()
			{
			return this->operateAgentClientInstall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateResultOutcome AegisClient::operateResult(const OperateResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateResultOutcome(OperateResultResult(outcome.result()));
	else
		return OperateResultOutcome(outcome.error());
}

void AegisClient::operateResultAsync(const OperateResultRequest& request, const OperateResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateResultOutcomeCallable AegisClient::operateResultCallable(const OperateResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateResultOutcome()>>(
			[this, request]()
			{
			return this->operateResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateSuspiciousEventOutcome AegisClient::operateSuspiciousEvent(const OperateSuspiciousEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateSuspiciousEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateSuspiciousEventOutcome(OperateSuspiciousEventResult(outcome.result()));
	else
		return OperateSuspiciousEventOutcome(outcome.error());
}

void AegisClient::operateSuspiciousEventAsync(const OperateSuspiciousEventRequest& request, const OperateSuspiciousEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateSuspiciousEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateSuspiciousEventOutcomeCallable AegisClient::operateSuspiciousEventCallable(const OperateSuspiciousEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateSuspiciousEventOutcome()>>(
			[this, request]()
			{
			return this->operateSuspiciousEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateSuspiciousOverallConfigOutcome AegisClient::operateSuspiciousOverallConfig(const OperateSuspiciousOverallConfigRequest &request) const
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

void AegisClient::operateSuspiciousOverallConfigAsync(const OperateSuspiciousOverallConfigRequest& request, const OperateSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateSuspiciousOverallConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateSuspiciousOverallConfigOutcomeCallable AegisClient::operateSuspiciousOverallConfigCallable(const OperateSuspiciousOverallConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateSuspiciousOverallConfigOutcome()>>(
			[this, request]()
			{
			return this->operateSuspiciousOverallConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateSuspiciousTargetConfigOutcome AegisClient::operateSuspiciousTargetConfig(const OperateSuspiciousTargetConfigRequest &request) const
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

void AegisClient::operateSuspiciousTargetConfigAsync(const OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateSuspiciousTargetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateSuspiciousTargetConfigOutcomeCallable AegisClient::operateSuspiciousTargetConfigCallable(const OperateSuspiciousTargetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateSuspiciousTargetConfigOutcome()>>(
			[this, request]()
			{
			return this->operateSuspiciousTargetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateVulOutcome AegisClient::operateVul(const OperateVulRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateVulOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateVulOutcome(OperateVulResult(outcome.result()));
	else
		return OperateVulOutcome(outcome.error());
}

void AegisClient::operateVulAsync(const OperateVulRequest& request, const OperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateVul(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateVulOutcomeCallable AegisClient::operateVulCallable(const OperateVulRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateVulOutcome()>>(
			[this, request]()
			{
			return this->operateVul(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperateWarningOutcome AegisClient::operateWarning(const OperateWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateWarningOutcome(OperateWarningResult(outcome.result()));
	else
		return OperateWarningOutcome(outcome.error());
}

void AegisClient::operateWarningAsync(const OperateWarningRequest& request, const OperateWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperateWarningOutcomeCallable AegisClient::operateWarningCallable(const OperateWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateWarningOutcome()>>(
			[this, request]()
			{
			return this->operateWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperationCustomizeReportChartOutcome AegisClient::operationCustomizeReportChart(const OperationCustomizeReportChartRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperationCustomizeReportChartOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperationCustomizeReportChartOutcome(OperationCustomizeReportChartResult(outcome.result()));
	else
		return OperationCustomizeReportChartOutcome(outcome.error());
}

void AegisClient::operationCustomizeReportChartAsync(const OperationCustomizeReportChartRequest& request, const OperationCustomizeReportChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operationCustomizeReportChart(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperationCustomizeReportChartOutcomeCallable AegisClient::operationCustomizeReportChartCallable(const OperationCustomizeReportChartRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperationCustomizeReportChartOutcome()>>(
			[this, request]()
			{
			return this->operationCustomizeReportChart(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::OperationSuspEventsOutcome AegisClient::operationSuspEvents(const OperationSuspEventsRequest &request) const
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

void AegisClient::operationSuspEventsAsync(const OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operationSuspEvents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::OperationSuspEventsOutcomeCallable AegisClient::operationSuspEventsCallable(const OperationSuspEventsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperationSuspEventsOutcome()>>(
			[this, request]()
			{
			return this->operationSuspEvents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::QueryCrackEventOutcome AegisClient::queryCrackEvent(const QueryCrackEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCrackEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCrackEventOutcome(QueryCrackEventResult(outcome.result()));
	else
		return QueryCrackEventOutcome(outcome.error());
}

void AegisClient::queryCrackEventAsync(const QueryCrackEventRequest& request, const QueryCrackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCrackEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::QueryCrackEventOutcomeCallable AegisClient::queryCrackEventCallable(const QueryCrackEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCrackEventOutcome()>>(
			[this, request]()
			{
			return this->queryCrackEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::QueryLoginEventOutcome AegisClient::queryLoginEvent(const QueryLoginEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLoginEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLoginEventOutcome(QueryLoginEventResult(outcome.result()));
	else
		return QueryLoginEventOutcome(outcome.error());
}

void AegisClient::queryLoginEventAsync(const QueryLoginEventRequest& request, const QueryLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLoginEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::QueryLoginEventOutcomeCallable AegisClient::queryLoginEventCallable(const QueryLoginEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLoginEventOutcome()>>(
			[this, request]()
			{
			return this->queryLoginEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ReleaseInstanceOutcome AegisClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void AegisClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ReleaseInstanceOutcomeCallable AegisClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::RenewInstanceOutcome AegisClient::renewInstance(const RenewInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RenewInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RenewInstanceOutcome(RenewInstanceResult(outcome.result()));
	else
		return RenewInstanceOutcome(outcome.error());
}

void AegisClient::renewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, renewInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::RenewInstanceOutcomeCallable AegisClient::renewInstanceCallable(const RenewInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
			[this, request]()
			{
			return this->renewInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::RollbackQuaraFileOutcome AegisClient::rollbackQuaraFile(const RollbackQuaraFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackQuaraFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackQuaraFileOutcome(RollbackQuaraFileResult(outcome.result()));
	else
		return RollbackQuaraFileOutcome(outcome.error());
}

void AegisClient::rollbackQuaraFileAsync(const RollbackQuaraFileRequest& request, const RollbackQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackQuaraFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::RollbackQuaraFileOutcomeCallable AegisClient::rollbackQuaraFileCallable(const RollbackQuaraFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackQuaraFileOutcome()>>(
			[this, request]()
			{
			return this->rollbackQuaraFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::RollbackSuspEventQuaraFileOutcome AegisClient::rollbackSuspEventQuaraFile(const RollbackSuspEventQuaraFileRequest &request) const
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

void AegisClient::rollbackSuspEventQuaraFileAsync(const RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackSuspEventQuaraFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::RollbackSuspEventQuaraFileOutcomeCallable AegisClient::rollbackSuspEventQuaraFileCallable(const RollbackSuspEventQuaraFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackSuspEventQuaraFileOutcome()>>(
			[this, request]()
			{
			return this->rollbackSuspEventQuaraFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::SaveCustomizeReportConfigOutcome AegisClient::saveCustomizeReportConfig(const SaveCustomizeReportConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveCustomizeReportConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveCustomizeReportConfigOutcome(SaveCustomizeReportConfigResult(outcome.result()));
	else
		return SaveCustomizeReportConfigOutcome(outcome.error());
}

void AegisClient::saveCustomizeReportConfigAsync(const SaveCustomizeReportConfigRequest& request, const SaveCustomizeReportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveCustomizeReportConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::SaveCustomizeReportConfigOutcomeCallable AegisClient::saveCustomizeReportConfigCallable(const SaveCustomizeReportConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveCustomizeReportConfigOutcome()>>(
			[this, request]()
			{
			return this->saveCustomizeReportConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::SaveSuspEventUserSettingOutcome AegisClient::saveSuspEventUserSetting(const SaveSuspEventUserSettingRequest &request) const
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

void AegisClient::saveSuspEventUserSettingAsync(const SaveSuspEventUserSettingRequest& request, const SaveSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSuspEventUserSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::SaveSuspEventUserSettingOutcomeCallable AegisClient::saveSuspEventUserSettingCallable(const SaveSuspEventUserSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSuspEventUserSettingOutcome()>>(
			[this, request]()
			{
			return this->saveSuspEventUserSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::SaveWhiteListStrategyOutcome AegisClient::saveWhiteListStrategy(const SaveWhiteListStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveWhiteListStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveWhiteListStrategyOutcome(SaveWhiteListStrategyResult(outcome.result()));
	else
		return SaveWhiteListStrategyOutcome(outcome.error());
}

void AegisClient::saveWhiteListStrategyAsync(const SaveWhiteListStrategyRequest& request, const SaveWhiteListStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveWhiteListStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::SaveWhiteListStrategyOutcomeCallable AegisClient::saveWhiteListStrategyCallable(const SaveWhiteListStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveWhiteListStrategyOutcome()>>(
			[this, request]()
			{
			return this->saveWhiteListStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::SaveWhiteListStrategyAssetsOutcome AegisClient::saveWhiteListStrategyAssets(const SaveWhiteListStrategyAssetsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveWhiteListStrategyAssetsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveWhiteListStrategyAssetsOutcome(SaveWhiteListStrategyAssetsResult(outcome.result()));
	else
		return SaveWhiteListStrategyAssetsOutcome(outcome.error());
}

void AegisClient::saveWhiteListStrategyAssetsAsync(const SaveWhiteListStrategyAssetsRequest& request, const SaveWhiteListStrategyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveWhiteListStrategyAssets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::SaveWhiteListStrategyAssetsOutcomeCallable AegisClient::saveWhiteListStrategyAssetsCallable(const SaveWhiteListStrategyAssetsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveWhiteListStrategyAssetsOutcome()>>(
			[this, request]()
			{
			return this->saveWhiteListStrategyAssets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::SendCustomizeReportOutcome AegisClient::sendCustomizeReport(const SendCustomizeReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendCustomizeReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendCustomizeReportOutcome(SendCustomizeReportResult(outcome.result()));
	else
		return SendCustomizeReportOutcome(outcome.error());
}

void AegisClient::sendCustomizeReportAsync(const SendCustomizeReportRequest& request, const SendCustomizeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendCustomizeReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::SendCustomizeReportOutcomeCallable AegisClient::sendCustomizeReportCallable(const SendCustomizeReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendCustomizeReportOutcome()>>(
			[this, request]()
			{
			return this->sendCustomizeReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::SetDatasourceStatusOutcome AegisClient::setDatasourceStatus(const SetDatasourceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDatasourceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDatasourceStatusOutcome(SetDatasourceStatusResult(outcome.result()));
	else
		return SetDatasourceStatusOutcome(outcome.error());
}

void AegisClient::setDatasourceStatusAsync(const SetDatasourceStatusRequest& request, const SetDatasourceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDatasourceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::SetDatasourceStatusOutcomeCallable AegisClient::setDatasourceStatusCallable(const SetDatasourceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDatasourceStatusOutcome()>>(
			[this, request]()
			{
			return this->setDatasourceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::TransformLeakageOutcome AegisClient::transformLeakage(const TransformLeakageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransformLeakageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransformLeakageOutcome(TransformLeakageResult(outcome.result()));
	else
		return TransformLeakageOutcome(outcome.error());
}

void AegisClient::transformLeakageAsync(const TransformLeakageRequest& request, const TransformLeakageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transformLeakage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::TransformLeakageOutcomeCallable AegisClient::transformLeakageCallable(const TransformLeakageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransformLeakageOutcome()>>(
			[this, request]()
			{
			return this->transformLeakage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::UpdateCustomizeReportStatusOutcome AegisClient::updateCustomizeReportStatus(const UpdateCustomizeReportStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomizeReportStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomizeReportStatusOutcome(UpdateCustomizeReportStatusResult(outcome.result()));
	else
		return UpdateCustomizeReportStatusOutcome(outcome.error());
}

void AegisClient::updateCustomizeReportStatusAsync(const UpdateCustomizeReportStatusRequest& request, const UpdateCustomizeReportStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomizeReportStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::UpdateCustomizeReportStatusOutcomeCallable AegisClient::updateCustomizeReportStatusCallable(const UpdateCustomizeReportStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomizeReportStatusOutcome()>>(
			[this, request]()
			{
			return this->updateCustomizeReportStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::UpdateWhiteListProcessStatusOutcome AegisClient::updateWhiteListProcessStatus(const UpdateWhiteListProcessStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWhiteListProcessStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWhiteListProcessStatusOutcome(UpdateWhiteListProcessStatusResult(outcome.result()));
	else
		return UpdateWhiteListProcessStatusOutcome(outcome.error());
}

void AegisClient::updateWhiteListProcessStatusAsync(const UpdateWhiteListProcessStatusRequest& request, const UpdateWhiteListProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWhiteListProcessStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::UpdateWhiteListProcessStatusOutcomeCallable AegisClient::updateWhiteListProcessStatusCallable(const UpdateWhiteListProcessStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWhiteListProcessStatusOutcome()>>(
			[this, request]()
			{
			return this->updateWhiteListProcessStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::UpdateWhiteListStrategyRelationOutcome AegisClient::updateWhiteListStrategyRelation(const UpdateWhiteListStrategyRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWhiteListStrategyRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWhiteListStrategyRelationOutcome(UpdateWhiteListStrategyRelationResult(outcome.result()));
	else
		return UpdateWhiteListStrategyRelationOutcome(outcome.error());
}

void AegisClient::updateWhiteListStrategyRelationAsync(const UpdateWhiteListStrategyRelationRequest& request, const UpdateWhiteListStrategyRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWhiteListStrategyRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::UpdateWhiteListStrategyRelationOutcomeCallable AegisClient::updateWhiteListStrategyRelationCallable(const UpdateWhiteListStrategyRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWhiteListStrategyRelationOutcome()>>(
			[this, request]()
			{
			return this->updateWhiteListStrategyRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::UpdateWhiteListStrategyStatusOutcome AegisClient::updateWhiteListStrategyStatus(const UpdateWhiteListStrategyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWhiteListStrategyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWhiteListStrategyStatusOutcome(UpdateWhiteListStrategyStatusResult(outcome.result()));
	else
		return UpdateWhiteListStrategyStatusOutcome(outcome.error());
}

void AegisClient::updateWhiteListStrategyStatusAsync(const UpdateWhiteListStrategyStatusRequest& request, const UpdateWhiteListStrategyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWhiteListStrategyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::UpdateWhiteListStrategyStatusOutcomeCallable AegisClient::updateWhiteListStrategyStatusCallable(const UpdateWhiteListStrategyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWhiteListStrategyStatusOutcome()>>(
			[this, request]()
			{
			return this->updateWhiteListStrategyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::UpgradeInstanceOutcome AegisClient::upgradeInstance(const UpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceOutcome(UpgradeInstanceResult(outcome.result()));
	else
		return UpgradeInstanceOutcome(outcome.error());
}

void AegisClient::upgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::UpgradeInstanceOutcomeCallable AegisClient::upgradeInstanceCallable(const UpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AegisClient::ValidateHcWarningsOutcome AegisClient::validateHcWarnings(const ValidateHcWarningsRequest &request) const
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

void AegisClient::validateHcWarningsAsync(const ValidateHcWarningsRequest& request, const ValidateHcWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, validateHcWarnings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AegisClient::ValidateHcWarningsOutcomeCallable AegisClient::validateHcWarningsCallable(const ValidateHcWarningsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ValidateHcWarningsOutcome()>>(
			[this, request]()
			{
			return this->validateHcWarnings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

