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

SasClient::DeleteVulAutoRepairConfigOutcome SasClient::deleteVulAutoRepairConfig(const DeleteVulAutoRepairConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVulAutoRepairConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVulAutoRepairConfigOutcome(DeleteVulAutoRepairConfigResult(outcome.result()));
	else
		return DeleteVulAutoRepairConfigOutcome(outcome.error());
}

void SasClient::deleteVulAutoRepairConfigAsync(const DeleteVulAutoRepairConfigRequest& request, const DeleteVulAutoRepairConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVulAutoRepairConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DeleteVulAutoRepairConfigOutcomeCallable SasClient::deleteVulAutoRepairConfigCallable(const DeleteVulAutoRepairConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVulAutoRepairConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteVulAutoRepairConfig(request);
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

SasClient::DescribeAlarmEventListOutcome SasClient::describeAlarmEventList(const DescribeAlarmEventListRequest &request) const
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

void SasClient::describeAlarmEventListAsync(const DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAlarmEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::DescribeAlarmEventListOutcomeCallable SasClient::describeAlarmEventListCallable(const DescribeAlarmEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAlarmEventListOutcome()>>(
			[this, request]()
			{
			return this->describeAlarmEventList(request);
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

SasClient::RetryInstallProbeOutcome SasClient::retryInstallProbe(const RetryInstallProbeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetryInstallProbeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetryInstallProbeOutcome(RetryInstallProbeResult(outcome.result()));
	else
		return RetryInstallProbeOutcome(outcome.error());
}

void SasClient::retryInstallProbeAsync(const RetryInstallProbeRequest& request, const RetryInstallProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retryInstallProbe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::RetryInstallProbeOutcomeCallable SasClient::retryInstallProbeCallable(const RetryInstallProbeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetryInstallProbeOutcome()>>(
			[this, request]()
			{
			return this->retryInstallProbe(request);
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

SasClient::StartImageVulScanOutcome SasClient::startImageVulScan(const StartImageVulScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartImageVulScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartImageVulScanOutcome(StartImageVulScanResult(outcome.result()));
	else
		return StartImageVulScanOutcome(outcome.error());
}

void SasClient::startImageVulScanAsync(const StartImageVulScanRequest& request, const StartImageVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startImageVulScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SasClient::StartImageVulScanOutcomeCallable SasClient::startImageVulScanCallable(const StartImageVulScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartImageVulScanOutcome()>>(
			[this, request]()
			{
			return this->startImageVulScan(request);
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

