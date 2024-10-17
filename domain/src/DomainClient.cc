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

#include <alibabacloud/domain/DomainClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

namespace
{
	const std::string SERVICE_NAME = "Domain";
}

DomainClient::DomainClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "domain");
}

DomainClient::DomainClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "domain");
}

DomainClient::DomainClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "domain");
}

DomainClient::~DomainClient()
{}

DomainClient::AcknowledgeTaskResultOutcome DomainClient::acknowledgeTaskResult(const AcknowledgeTaskResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcknowledgeTaskResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcknowledgeTaskResultOutcome(AcknowledgeTaskResultResult(outcome.result()));
	else
		return AcknowledgeTaskResultOutcome(outcome.error());
}

void DomainClient::acknowledgeTaskResultAsync(const AcknowledgeTaskResultRequest& request, const AcknowledgeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acknowledgeTaskResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::AcknowledgeTaskResultOutcomeCallable DomainClient::acknowledgeTaskResultCallable(const AcknowledgeTaskResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcknowledgeTaskResultOutcome()>>(
			[this, request]()
			{
			return this->acknowledgeTaskResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::BatchFuzzyMatchDomainSensitiveWordOutcome DomainClient::batchFuzzyMatchDomainSensitiveWord(const BatchFuzzyMatchDomainSensitiveWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchFuzzyMatchDomainSensitiveWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchFuzzyMatchDomainSensitiveWordOutcome(BatchFuzzyMatchDomainSensitiveWordResult(outcome.result()));
	else
		return BatchFuzzyMatchDomainSensitiveWordOutcome(outcome.error());
}

void DomainClient::batchFuzzyMatchDomainSensitiveWordAsync(const BatchFuzzyMatchDomainSensitiveWordRequest& request, const BatchFuzzyMatchDomainSensitiveWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchFuzzyMatchDomainSensitiveWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::BatchFuzzyMatchDomainSensitiveWordOutcomeCallable DomainClient::batchFuzzyMatchDomainSensitiveWordCallable(const BatchFuzzyMatchDomainSensitiveWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchFuzzyMatchDomainSensitiveWordOutcome()>>(
			[this, request]()
			{
			return this->batchFuzzyMatchDomainSensitiveWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CancelDomainVerificationOutcome DomainClient::cancelDomainVerification(const CancelDomainVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelDomainVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelDomainVerificationOutcome(CancelDomainVerificationResult(outcome.result()));
	else
		return CancelDomainVerificationOutcome(outcome.error());
}

void DomainClient::cancelDomainVerificationAsync(const CancelDomainVerificationRequest& request, const CancelDomainVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelDomainVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CancelDomainVerificationOutcomeCallable DomainClient::cancelDomainVerificationCallable(const CancelDomainVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelDomainVerificationOutcome()>>(
			[this, request]()
			{
			return this->cancelDomainVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CancelOperationAuditOutcome DomainClient::cancelOperationAudit(const CancelOperationAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelOperationAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelOperationAuditOutcome(CancelOperationAuditResult(outcome.result()));
	else
		return CancelOperationAuditOutcome(outcome.error());
}

void DomainClient::cancelOperationAuditAsync(const CancelOperationAuditRequest& request, const CancelOperationAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelOperationAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CancelOperationAuditOutcomeCallable DomainClient::cancelOperationAuditCallable(const CancelOperationAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelOperationAuditOutcome()>>(
			[this, request]()
			{
			return this->cancelOperationAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CancelQualificationVerificationOutcome DomainClient::cancelQualificationVerification(const CancelQualificationVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelQualificationVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelQualificationVerificationOutcome(CancelQualificationVerificationResult(outcome.result()));
	else
		return CancelQualificationVerificationOutcome(outcome.error());
}

void DomainClient::cancelQualificationVerificationAsync(const CancelQualificationVerificationRequest& request, const CancelQualificationVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelQualificationVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CancelQualificationVerificationOutcomeCallable DomainClient::cancelQualificationVerificationCallable(const CancelQualificationVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelQualificationVerificationOutcome()>>(
			[this, request]()
			{
			return this->cancelQualificationVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CancelTaskOutcome DomainClient::cancelTask(const CancelTaskRequest &request) const
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

void DomainClient::cancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CancelTaskOutcomeCallable DomainClient::cancelTaskCallable(const CancelTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ChangeResourceGroupOutcome DomainClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
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

void DomainClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ChangeResourceGroupOutcomeCallable DomainClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CheckDomainOutcome DomainClient::checkDomain(const CheckDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDomainOutcome(CheckDomainResult(outcome.result()));
	else
		return CheckDomainOutcome(outcome.error());
}

void DomainClient::checkDomainAsync(const CheckDomainRequest& request, const CheckDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CheckDomainOutcomeCallable DomainClient::checkDomainCallable(const CheckDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDomainOutcome()>>(
			[this, request]()
			{
			return this->checkDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CheckDomainSunriseClaimOutcome DomainClient::checkDomainSunriseClaim(const CheckDomainSunriseClaimRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDomainSunriseClaimOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDomainSunriseClaimOutcome(CheckDomainSunriseClaimResult(outcome.result()));
	else
		return CheckDomainSunriseClaimOutcome(outcome.error());
}

void DomainClient::checkDomainSunriseClaimAsync(const CheckDomainSunriseClaimRequest& request, const CheckDomainSunriseClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDomainSunriseClaim(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CheckDomainSunriseClaimOutcomeCallable DomainClient::checkDomainSunriseClaimCallable(const CheckDomainSunriseClaimRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDomainSunriseClaimOutcome()>>(
			[this, request]()
			{
			return this->checkDomainSunriseClaim(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CheckIntlFixPriceDomainStatusOutcome DomainClient::checkIntlFixPriceDomainStatus(const CheckIntlFixPriceDomainStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckIntlFixPriceDomainStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckIntlFixPriceDomainStatusOutcome(CheckIntlFixPriceDomainStatusResult(outcome.result()));
	else
		return CheckIntlFixPriceDomainStatusOutcome(outcome.error());
}

void DomainClient::checkIntlFixPriceDomainStatusAsync(const CheckIntlFixPriceDomainStatusRequest& request, const CheckIntlFixPriceDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkIntlFixPriceDomainStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CheckIntlFixPriceDomainStatusOutcomeCallable DomainClient::checkIntlFixPriceDomainStatusCallable(const CheckIntlFixPriceDomainStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckIntlFixPriceDomainStatusOutcome()>>(
			[this, request]()
			{
			return this->checkIntlFixPriceDomainStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CheckMaxYearOfServerLockOutcome DomainClient::checkMaxYearOfServerLock(const CheckMaxYearOfServerLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMaxYearOfServerLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMaxYearOfServerLockOutcome(CheckMaxYearOfServerLockResult(outcome.result()));
	else
		return CheckMaxYearOfServerLockOutcome(outcome.error());
}

void DomainClient::checkMaxYearOfServerLockAsync(const CheckMaxYearOfServerLockRequest& request, const CheckMaxYearOfServerLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMaxYearOfServerLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CheckMaxYearOfServerLockOutcomeCallable DomainClient::checkMaxYearOfServerLockCallable(const CheckMaxYearOfServerLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMaxYearOfServerLockOutcome()>>(
			[this, request]()
			{
			return this->checkMaxYearOfServerLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CheckProcessingServerLockApplyOutcome DomainClient::checkProcessingServerLockApply(const CheckProcessingServerLockApplyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckProcessingServerLockApplyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckProcessingServerLockApplyOutcome(CheckProcessingServerLockApplyResult(outcome.result()));
	else
		return CheckProcessingServerLockApplyOutcome(outcome.error());
}

void DomainClient::checkProcessingServerLockApplyAsync(const CheckProcessingServerLockApplyRequest& request, const CheckProcessingServerLockApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkProcessingServerLockApply(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CheckProcessingServerLockApplyOutcomeCallable DomainClient::checkProcessingServerLockApplyCallable(const CheckProcessingServerLockApplyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckProcessingServerLockApplyOutcome()>>(
			[this, request]()
			{
			return this->checkProcessingServerLockApply(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CheckTransferInFeasibilityOutcome DomainClient::checkTransferInFeasibility(const CheckTransferInFeasibilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckTransferInFeasibilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckTransferInFeasibilityOutcome(CheckTransferInFeasibilityResult(outcome.result()));
	else
		return CheckTransferInFeasibilityOutcome(outcome.error());
}

void DomainClient::checkTransferInFeasibilityAsync(const CheckTransferInFeasibilityRequest& request, const CheckTransferInFeasibilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkTransferInFeasibility(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CheckTransferInFeasibilityOutcomeCallable DomainClient::checkTransferInFeasibilityCallable(const CheckTransferInFeasibilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckTransferInFeasibilityOutcome()>>(
			[this, request]()
			{
			return this->checkTransferInFeasibility(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ConfirmTransferInEmailOutcome DomainClient::confirmTransferInEmail(const ConfirmTransferInEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmTransferInEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmTransferInEmailOutcome(ConfirmTransferInEmailResult(outcome.result()));
	else
		return ConfirmTransferInEmailOutcome(outcome.error());
}

void DomainClient::confirmTransferInEmailAsync(const ConfirmTransferInEmailRequest& request, const ConfirmTransferInEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmTransferInEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ConfirmTransferInEmailOutcomeCallable DomainClient::confirmTransferInEmailCallable(const ConfirmTransferInEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmTransferInEmailOutcome()>>(
			[this, request]()
			{
			return this->confirmTransferInEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::CreateIntlFixedPriceDomainOrderOutcome DomainClient::createIntlFixedPriceDomainOrder(const CreateIntlFixedPriceDomainOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIntlFixedPriceDomainOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIntlFixedPriceDomainOrderOutcome(CreateIntlFixedPriceDomainOrderResult(outcome.result()));
	else
		return CreateIntlFixedPriceDomainOrderOutcome(outcome.error());
}

void DomainClient::createIntlFixedPriceDomainOrderAsync(const CreateIntlFixedPriceDomainOrderRequest& request, const CreateIntlFixedPriceDomainOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIntlFixedPriceDomainOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::CreateIntlFixedPriceDomainOrderOutcomeCallable DomainClient::createIntlFixedPriceDomainOrderCallable(const CreateIntlFixedPriceDomainOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIntlFixedPriceDomainOrderOutcome()>>(
			[this, request]()
			{
			return this->createIntlFixedPriceDomainOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::DeleteContactTemplatesOutcome DomainClient::deleteContactTemplates(const DeleteContactTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactTemplatesOutcome(DeleteContactTemplatesResult(outcome.result()));
	else
		return DeleteContactTemplatesOutcome(outcome.error());
}

void DomainClient::deleteContactTemplatesAsync(const DeleteContactTemplatesRequest& request, const DeleteContactTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContactTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::DeleteContactTemplatesOutcomeCallable DomainClient::deleteContactTemplatesCallable(const DeleteContactTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactTemplatesOutcome()>>(
			[this, request]()
			{
			return this->deleteContactTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::DeleteDomainGroupOutcome DomainClient::deleteDomainGroup(const DeleteDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainGroupOutcome(DeleteDomainGroupResult(outcome.result()));
	else
		return DeleteDomainGroupOutcome(outcome.error());
}

void DomainClient::deleteDomainGroupAsync(const DeleteDomainGroupRequest& request, const DeleteDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::DeleteDomainGroupOutcomeCallable DomainClient::deleteDomainGroupCallable(const DeleteDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::DeleteEmailVerificationOutcome DomainClient::deleteEmailVerification(const DeleteEmailVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEmailVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEmailVerificationOutcome(DeleteEmailVerificationResult(outcome.result()));
	else
		return DeleteEmailVerificationOutcome(outcome.error());
}

void DomainClient::deleteEmailVerificationAsync(const DeleteEmailVerificationRequest& request, const DeleteEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEmailVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::DeleteEmailVerificationOutcomeCallable DomainClient::deleteEmailVerificationCallable(const DeleteEmailVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEmailVerificationOutcome()>>(
			[this, request]()
			{
			return this->deleteEmailVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::DeleteRegistrantProfileOutcome DomainClient::deleteRegistrantProfile(const DeleteRegistrantProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRegistrantProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRegistrantProfileOutcome(DeleteRegistrantProfileResult(outcome.result()));
	else
		return DeleteRegistrantProfileOutcome(outcome.error());
}

void DomainClient::deleteRegistrantProfileAsync(const DeleteRegistrantProfileRequest& request, const DeleteRegistrantProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRegistrantProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::DeleteRegistrantProfileOutcomeCallable DomainClient::deleteRegistrantProfileCallable(const DeleteRegistrantProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRegistrantProfileOutcome()>>(
			[this, request]()
			{
			return this->deleteRegistrantProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::DomainSpecialBizCancelOutcome DomainClient::domainSpecialBizCancel(const DomainSpecialBizCancelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DomainSpecialBizCancelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DomainSpecialBizCancelOutcome(DomainSpecialBizCancelResult(outcome.result()));
	else
		return DomainSpecialBizCancelOutcome(outcome.error());
}

void DomainClient::domainSpecialBizCancelAsync(const DomainSpecialBizCancelRequest& request, const DomainSpecialBizCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, domainSpecialBizCancel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::DomainSpecialBizCancelOutcomeCallable DomainClient::domainSpecialBizCancelCallable(const DomainSpecialBizCancelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DomainSpecialBizCancelOutcome()>>(
			[this, request]()
			{
			return this->domainSpecialBizCancel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::EmailVerifiedOutcome DomainClient::emailVerified(const EmailVerifiedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EmailVerifiedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EmailVerifiedOutcome(EmailVerifiedResult(outcome.result()));
	else
		return EmailVerifiedOutcome(outcome.error());
}

void DomainClient::emailVerifiedAsync(const EmailVerifiedRequest& request, const EmailVerifiedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, emailVerified(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::EmailVerifiedOutcomeCallable DomainClient::emailVerifiedCallable(const EmailVerifiedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EmailVerifiedOutcome()>>(
			[this, request]()
			{
			return this->emailVerified(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::FuzzyMatchDomainSensitiveWordOutcome DomainClient::fuzzyMatchDomainSensitiveWord(const FuzzyMatchDomainSensitiveWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FuzzyMatchDomainSensitiveWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FuzzyMatchDomainSensitiveWordOutcome(FuzzyMatchDomainSensitiveWordResult(outcome.result()));
	else
		return FuzzyMatchDomainSensitiveWordOutcome(outcome.error());
}

void DomainClient::fuzzyMatchDomainSensitiveWordAsync(const FuzzyMatchDomainSensitiveWordRequest& request, const FuzzyMatchDomainSensitiveWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fuzzyMatchDomainSensitiveWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::FuzzyMatchDomainSensitiveWordOutcomeCallable DomainClient::fuzzyMatchDomainSensitiveWordCallable(const FuzzyMatchDomainSensitiveWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FuzzyMatchDomainSensitiveWordOutcome()>>(
			[this, request]()
			{
			return this->fuzzyMatchDomainSensitiveWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::GetIntlFixPriceDomainListUrlOutcome DomainClient::getIntlFixPriceDomainListUrl(const GetIntlFixPriceDomainListUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIntlFixPriceDomainListUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIntlFixPriceDomainListUrlOutcome(GetIntlFixPriceDomainListUrlResult(outcome.result()));
	else
		return GetIntlFixPriceDomainListUrlOutcome(outcome.error());
}

void DomainClient::getIntlFixPriceDomainListUrlAsync(const GetIntlFixPriceDomainListUrlRequest& request, const GetIntlFixPriceDomainListUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIntlFixPriceDomainListUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::GetIntlFixPriceDomainListUrlOutcomeCallable DomainClient::getIntlFixPriceDomainListUrlCallable(const GetIntlFixPriceDomainListUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIntlFixPriceDomainListUrlOutcome()>>(
			[this, request]()
			{
			return this->getIntlFixPriceDomainListUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::GetOperationOssUploadPolicyOutcome DomainClient::getOperationOssUploadPolicy(const GetOperationOssUploadPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOperationOssUploadPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOperationOssUploadPolicyOutcome(GetOperationOssUploadPolicyResult(outcome.result()));
	else
		return GetOperationOssUploadPolicyOutcome(outcome.error());
}

void DomainClient::getOperationOssUploadPolicyAsync(const GetOperationOssUploadPolicyRequest& request, const GetOperationOssUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOperationOssUploadPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::GetOperationOssUploadPolicyOutcomeCallable DomainClient::getOperationOssUploadPolicyCallable(const GetOperationOssUploadPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOperationOssUploadPolicyOutcome()>>(
			[this, request]()
			{
			return this->getOperationOssUploadPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::GetQualificationUploadPolicyOutcome DomainClient::getQualificationUploadPolicy(const GetQualificationUploadPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualificationUploadPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualificationUploadPolicyOutcome(GetQualificationUploadPolicyResult(outcome.result()));
	else
		return GetQualificationUploadPolicyOutcome(outcome.error());
}

void DomainClient::getQualificationUploadPolicyAsync(const GetQualificationUploadPolicyRequest& request, const GetQualificationUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualificationUploadPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::GetQualificationUploadPolicyOutcomeCallable DomainClient::getQualificationUploadPolicyCallable(const GetQualificationUploadPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualificationUploadPolicyOutcome()>>(
			[this, request]()
			{
			return this->getQualificationUploadPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ListEmailVerificationOutcome DomainClient::listEmailVerification(const ListEmailVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEmailVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEmailVerificationOutcome(ListEmailVerificationResult(outcome.result()));
	else
		return ListEmailVerificationOutcome(outcome.error());
}

void DomainClient::listEmailVerificationAsync(const ListEmailVerificationRequest& request, const ListEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEmailVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ListEmailVerificationOutcomeCallable DomainClient::listEmailVerificationCallable(const ListEmailVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEmailVerificationOutcome()>>(
			[this, request]()
			{
			return this->listEmailVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ListServerLockOutcome DomainClient::listServerLock(const ListServerLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServerLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServerLockOutcome(ListServerLockResult(outcome.result()));
	else
		return ListServerLockOutcome(outcome.error());
}

void DomainClient::listServerLockAsync(const ListServerLockRequest& request, const ListServerLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServerLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ListServerLockOutcomeCallable DomainClient::listServerLockCallable(const ListServerLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServerLockOutcome()>>(
			[this, request]()
			{
			return this->listServerLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::LookupTmchNoticeOutcome DomainClient::lookupTmchNotice(const LookupTmchNoticeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LookupTmchNoticeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LookupTmchNoticeOutcome(LookupTmchNoticeResult(outcome.result()));
	else
		return LookupTmchNoticeOutcome(outcome.error());
}

void DomainClient::lookupTmchNoticeAsync(const LookupTmchNoticeRequest& request, const LookupTmchNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lookupTmchNotice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::LookupTmchNoticeOutcomeCallable DomainClient::lookupTmchNoticeCallable(const LookupTmchNoticeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LookupTmchNoticeOutcome()>>(
			[this, request]()
			{
			return this->lookupTmchNotice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::PollTaskResultOutcome DomainClient::pollTaskResult(const PollTaskResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PollTaskResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PollTaskResultOutcome(PollTaskResultResult(outcome.result()));
	else
		return PollTaskResultOutcome(outcome.error());
}

void DomainClient::pollTaskResultAsync(const PollTaskResultRequest& request, const PollTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pollTaskResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::PollTaskResultOutcomeCallable DomainClient::pollTaskResultCallable(const PollTaskResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PollTaskResultOutcome()>>(
			[this, request]()
			{
			return this->pollTaskResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryAdvancedDomainListOutcome DomainClient::queryAdvancedDomainList(const QueryAdvancedDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAdvancedDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAdvancedDomainListOutcome(QueryAdvancedDomainListResult(outcome.result()));
	else
		return QueryAdvancedDomainListOutcome(outcome.error());
}

void DomainClient::queryAdvancedDomainListAsync(const QueryAdvancedDomainListRequest& request, const QueryAdvancedDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAdvancedDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryAdvancedDomainListOutcomeCallable DomainClient::queryAdvancedDomainListCallable(const QueryAdvancedDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAdvancedDomainListOutcome()>>(
			[this, request]()
			{
			return this->queryAdvancedDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryArtExtensionOutcome DomainClient::queryArtExtension(const QueryArtExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryArtExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryArtExtensionOutcome(QueryArtExtensionResult(outcome.result()));
	else
		return QueryArtExtensionOutcome(outcome.error());
}

void DomainClient::queryArtExtensionAsync(const QueryArtExtensionRequest& request, const QueryArtExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryArtExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryArtExtensionOutcomeCallable DomainClient::queryArtExtensionCallable(const QueryArtExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryArtExtensionOutcome()>>(
			[this, request]()
			{
			return this->queryArtExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryChangeLogListOutcome DomainClient::queryChangeLogList(const QueryChangeLogListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryChangeLogListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryChangeLogListOutcome(QueryChangeLogListResult(outcome.result()));
	else
		return QueryChangeLogListOutcome(outcome.error());
}

void DomainClient::queryChangeLogListAsync(const QueryChangeLogListRequest& request, const QueryChangeLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryChangeLogList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryChangeLogListOutcomeCallable DomainClient::queryChangeLogListCallable(const QueryChangeLogListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryChangeLogListOutcome()>>(
			[this, request]()
			{
			return this->queryChangeLogList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryContactInfoOutcome DomainClient::queryContactInfo(const QueryContactInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryContactInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryContactInfoOutcome(QueryContactInfoResult(outcome.result()));
	else
		return QueryContactInfoOutcome(outcome.error());
}

void DomainClient::queryContactInfoAsync(const QueryContactInfoRequest& request, const QueryContactInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryContactInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryContactInfoOutcomeCallable DomainClient::queryContactInfoCallable(const QueryContactInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryContactInfoOutcome()>>(
			[this, request]()
			{
			return this->queryContactInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDSRecordOutcome DomainClient::queryDSRecord(const QueryDSRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDSRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDSRecordOutcome(QueryDSRecordResult(outcome.result()));
	else
		return QueryDSRecordOutcome(outcome.error());
}

void DomainClient::queryDSRecordAsync(const QueryDSRecordRequest& request, const QueryDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDSRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDSRecordOutcomeCallable DomainClient::queryDSRecordCallable(const QueryDSRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDSRecordOutcome()>>(
			[this, request]()
			{
			return this->queryDSRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDnsHostOutcome DomainClient::queryDnsHost(const QueryDnsHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDnsHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDnsHostOutcome(QueryDnsHostResult(outcome.result()));
	else
		return QueryDnsHostOutcome(outcome.error());
}

void DomainClient::queryDnsHostAsync(const QueryDnsHostRequest& request, const QueryDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDnsHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDnsHostOutcomeCallable DomainClient::queryDnsHostCallable(const QueryDnsHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDnsHostOutcome()>>(
			[this, request]()
			{
			return this->queryDnsHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainAdminDivisionOutcome DomainClient::queryDomainAdminDivision(const QueryDomainAdminDivisionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainAdminDivisionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainAdminDivisionOutcome(QueryDomainAdminDivisionResult(outcome.result()));
	else
		return QueryDomainAdminDivisionOutcome(outcome.error());
}

void DomainClient::queryDomainAdminDivisionAsync(const QueryDomainAdminDivisionRequest& request, const QueryDomainAdminDivisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainAdminDivision(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainAdminDivisionOutcomeCallable DomainClient::queryDomainAdminDivisionCallable(const QueryDomainAdminDivisionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainAdminDivisionOutcome()>>(
			[this, request]()
			{
			return this->queryDomainAdminDivision(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainByDomainNameOutcome DomainClient::queryDomainByDomainName(const QueryDomainByDomainNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainByDomainNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainByDomainNameOutcome(QueryDomainByDomainNameResult(outcome.result()));
	else
		return QueryDomainByDomainNameOutcome(outcome.error());
}

void DomainClient::queryDomainByDomainNameAsync(const QueryDomainByDomainNameRequest& request, const QueryDomainByDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainByDomainName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainByDomainNameOutcomeCallable DomainClient::queryDomainByDomainNameCallable(const QueryDomainByDomainNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainByDomainNameOutcome()>>(
			[this, request]()
			{
			return this->queryDomainByDomainName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainByInstanceIdOutcome DomainClient::queryDomainByInstanceId(const QueryDomainByInstanceIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainByInstanceIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainByInstanceIdOutcome(QueryDomainByInstanceIdResult(outcome.result()));
	else
		return QueryDomainByInstanceIdOutcome(outcome.error());
}

void DomainClient::queryDomainByInstanceIdAsync(const QueryDomainByInstanceIdRequest& request, const QueryDomainByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainByInstanceId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainByInstanceIdOutcomeCallable DomainClient::queryDomainByInstanceIdCallable(const QueryDomainByInstanceIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainByInstanceIdOutcome()>>(
			[this, request]()
			{
			return this->queryDomainByInstanceId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainGroupListOutcome DomainClient::queryDomainGroupList(const QueryDomainGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainGroupListOutcome(QueryDomainGroupListResult(outcome.result()));
	else
		return QueryDomainGroupListOutcome(outcome.error());
}

void DomainClient::queryDomainGroupListAsync(const QueryDomainGroupListRequest& request, const QueryDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainGroupListOutcomeCallable DomainClient::queryDomainGroupListCallable(const QueryDomainGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainGroupListOutcome()>>(
			[this, request]()
			{
			return this->queryDomainGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainListOutcome DomainClient::queryDomainList(const QueryDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainListOutcome(QueryDomainListResult(outcome.result()));
	else
		return QueryDomainListOutcome(outcome.error());
}

void DomainClient::queryDomainListAsync(const QueryDomainListRequest& request, const QueryDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainListOutcomeCallable DomainClient::queryDomainListCallable(const QueryDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainListOutcome()>>(
			[this, request]()
			{
			return this->queryDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainRealNameVerificationInfoOutcome DomainClient::queryDomainRealNameVerificationInfo(const QueryDomainRealNameVerificationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainRealNameVerificationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainRealNameVerificationInfoOutcome(QueryDomainRealNameVerificationInfoResult(outcome.result()));
	else
		return QueryDomainRealNameVerificationInfoOutcome(outcome.error());
}

void DomainClient::queryDomainRealNameVerificationInfoAsync(const QueryDomainRealNameVerificationInfoRequest& request, const QueryDomainRealNameVerificationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainRealNameVerificationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainRealNameVerificationInfoOutcomeCallable DomainClient::queryDomainRealNameVerificationInfoCallable(const QueryDomainRealNameVerificationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainRealNameVerificationInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDomainRealNameVerificationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainSpecialBizDetailOutcome DomainClient::queryDomainSpecialBizDetail(const QueryDomainSpecialBizDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainSpecialBizDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainSpecialBizDetailOutcome(QueryDomainSpecialBizDetailResult(outcome.result()));
	else
		return QueryDomainSpecialBizDetailOutcome(outcome.error());
}

void DomainClient::queryDomainSpecialBizDetailAsync(const QueryDomainSpecialBizDetailRequest& request, const QueryDomainSpecialBizDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainSpecialBizDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainSpecialBizDetailOutcomeCallable DomainClient::queryDomainSpecialBizDetailCallable(const QueryDomainSpecialBizDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainSpecialBizDetailOutcome()>>(
			[this, request]()
			{
			return this->queryDomainSpecialBizDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainSpecialBizInfoByDomainOutcome DomainClient::queryDomainSpecialBizInfoByDomain(const QueryDomainSpecialBizInfoByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainSpecialBizInfoByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainSpecialBizInfoByDomainOutcome(QueryDomainSpecialBizInfoByDomainResult(outcome.result()));
	else
		return QueryDomainSpecialBizInfoByDomainOutcome(outcome.error());
}

void DomainClient::queryDomainSpecialBizInfoByDomainAsync(const QueryDomainSpecialBizInfoByDomainRequest& request, const QueryDomainSpecialBizInfoByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainSpecialBizInfoByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainSpecialBizInfoByDomainOutcomeCallable DomainClient::queryDomainSpecialBizInfoByDomainCallable(const QueryDomainSpecialBizInfoByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainSpecialBizInfoByDomainOutcome()>>(
			[this, request]()
			{
			return this->queryDomainSpecialBizInfoByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryDomainSuffixOutcome DomainClient::queryDomainSuffix(const QueryDomainSuffixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainSuffixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainSuffixOutcome(QueryDomainSuffixResult(outcome.result()));
	else
		return QueryDomainSuffixOutcome(outcome.error());
}

void DomainClient::queryDomainSuffixAsync(const QueryDomainSuffixRequest& request, const QueryDomainSuffixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainSuffix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryDomainSuffixOutcomeCallable DomainClient::queryDomainSuffixCallable(const QueryDomainSuffixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainSuffixOutcome()>>(
			[this, request]()
			{
			return this->queryDomainSuffix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryEmailVerificationOutcome DomainClient::queryEmailVerification(const QueryEmailVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEmailVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEmailVerificationOutcome(QueryEmailVerificationResult(outcome.result()));
	else
		return QueryEmailVerificationOutcome(outcome.error());
}

void DomainClient::queryEmailVerificationAsync(const QueryEmailVerificationRequest& request, const QueryEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEmailVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryEmailVerificationOutcomeCallable DomainClient::queryEmailVerificationCallable(const QueryEmailVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEmailVerificationOutcome()>>(
			[this, request]()
			{
			return this->queryEmailVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryEnsAssociationOutcome DomainClient::queryEnsAssociation(const QueryEnsAssociationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEnsAssociationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEnsAssociationOutcome(QueryEnsAssociationResult(outcome.result()));
	else
		return QueryEnsAssociationOutcome(outcome.error());
}

void DomainClient::queryEnsAssociationAsync(const QueryEnsAssociationRequest& request, const QueryEnsAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEnsAssociation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryEnsAssociationOutcomeCallable DomainClient::queryEnsAssociationCallable(const QueryEnsAssociationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEnsAssociationOutcome()>>(
			[this, request]()
			{
			return this->queryEnsAssociation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryFailReasonForDomainRealNameVerificationOutcome DomainClient::queryFailReasonForDomainRealNameVerification(const QueryFailReasonForDomainRealNameVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFailReasonForDomainRealNameVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFailReasonForDomainRealNameVerificationOutcome(QueryFailReasonForDomainRealNameVerificationResult(outcome.result()));
	else
		return QueryFailReasonForDomainRealNameVerificationOutcome(outcome.error());
}

void DomainClient::queryFailReasonForDomainRealNameVerificationAsync(const QueryFailReasonForDomainRealNameVerificationRequest& request, const QueryFailReasonForDomainRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFailReasonForDomainRealNameVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryFailReasonForDomainRealNameVerificationOutcomeCallable DomainClient::queryFailReasonForDomainRealNameVerificationCallable(const QueryFailReasonForDomainRealNameVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFailReasonForDomainRealNameVerificationOutcome()>>(
			[this, request]()
			{
			return this->queryFailReasonForDomainRealNameVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryFailReasonForRegistrantProfileRealNameVerificationOutcome DomainClient::queryFailReasonForRegistrantProfileRealNameVerification(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFailReasonForRegistrantProfileRealNameVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFailReasonForRegistrantProfileRealNameVerificationOutcome(QueryFailReasonForRegistrantProfileRealNameVerificationResult(outcome.result()));
	else
		return QueryFailReasonForRegistrantProfileRealNameVerificationOutcome(outcome.error());
}

void DomainClient::queryFailReasonForRegistrantProfileRealNameVerificationAsync(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest& request, const QueryFailReasonForRegistrantProfileRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFailReasonForRegistrantProfileRealNameVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryFailReasonForRegistrantProfileRealNameVerificationOutcomeCallable DomainClient::queryFailReasonForRegistrantProfileRealNameVerificationCallable(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFailReasonForRegistrantProfileRealNameVerificationOutcome()>>(
			[this, request]()
			{
			return this->queryFailReasonForRegistrantProfileRealNameVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryFailingReasonListForQualificationOutcome DomainClient::queryFailingReasonListForQualification(const QueryFailingReasonListForQualificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFailingReasonListForQualificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFailingReasonListForQualificationOutcome(QueryFailingReasonListForQualificationResult(outcome.result()));
	else
		return QueryFailingReasonListForQualificationOutcome(outcome.error());
}

void DomainClient::queryFailingReasonListForQualificationAsync(const QueryFailingReasonListForQualificationRequest& request, const QueryFailingReasonListForQualificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFailingReasonListForQualification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryFailingReasonListForQualificationOutcomeCallable DomainClient::queryFailingReasonListForQualificationCallable(const QueryFailingReasonListForQualificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFailingReasonListForQualificationOutcome()>>(
			[this, request]()
			{
			return this->queryFailingReasonListForQualification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryIntlFixedPriceOrderListOutcome DomainClient::queryIntlFixedPriceOrderList(const QueryIntlFixedPriceOrderListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIntlFixedPriceOrderListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIntlFixedPriceOrderListOutcome(QueryIntlFixedPriceOrderListResult(outcome.result()));
	else
		return QueryIntlFixedPriceOrderListOutcome(outcome.error());
}

void DomainClient::queryIntlFixedPriceOrderListAsync(const QueryIntlFixedPriceOrderListRequest& request, const QueryIntlFixedPriceOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIntlFixedPriceOrderList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryIntlFixedPriceOrderListOutcomeCallable DomainClient::queryIntlFixedPriceOrderListCallable(const QueryIntlFixedPriceOrderListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIntlFixedPriceOrderListOutcome()>>(
			[this, request]()
			{
			return this->queryIntlFixedPriceOrderList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryLocalEnsAssociationOutcome DomainClient::queryLocalEnsAssociation(const QueryLocalEnsAssociationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLocalEnsAssociationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLocalEnsAssociationOutcome(QueryLocalEnsAssociationResult(outcome.result()));
	else
		return QueryLocalEnsAssociationOutcome(outcome.error());
}

void DomainClient::queryLocalEnsAssociationAsync(const QueryLocalEnsAssociationRequest& request, const QueryLocalEnsAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLocalEnsAssociation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryLocalEnsAssociationOutcomeCallable DomainClient::queryLocalEnsAssociationCallable(const QueryLocalEnsAssociationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLocalEnsAssociationOutcome()>>(
			[this, request]()
			{
			return this->queryLocalEnsAssociation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryOperationAuditInfoDetailOutcome DomainClient::queryOperationAuditInfoDetail(const QueryOperationAuditInfoDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOperationAuditInfoDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOperationAuditInfoDetailOutcome(QueryOperationAuditInfoDetailResult(outcome.result()));
	else
		return QueryOperationAuditInfoDetailOutcome(outcome.error());
}

void DomainClient::queryOperationAuditInfoDetailAsync(const QueryOperationAuditInfoDetailRequest& request, const QueryOperationAuditInfoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOperationAuditInfoDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryOperationAuditInfoDetailOutcomeCallable DomainClient::queryOperationAuditInfoDetailCallable(const QueryOperationAuditInfoDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOperationAuditInfoDetailOutcome()>>(
			[this, request]()
			{
			return this->queryOperationAuditInfoDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryOperationAuditInfoListOutcome DomainClient::queryOperationAuditInfoList(const QueryOperationAuditInfoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOperationAuditInfoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOperationAuditInfoListOutcome(QueryOperationAuditInfoListResult(outcome.result()));
	else
		return QueryOperationAuditInfoListOutcome(outcome.error());
}

void DomainClient::queryOperationAuditInfoListAsync(const QueryOperationAuditInfoListRequest& request, const QueryOperationAuditInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOperationAuditInfoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryOperationAuditInfoListOutcomeCallable DomainClient::queryOperationAuditInfoListCallable(const QueryOperationAuditInfoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOperationAuditInfoListOutcome()>>(
			[this, request]()
			{
			return this->queryOperationAuditInfoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryQualificationDetailOutcome DomainClient::queryQualificationDetail(const QueryQualificationDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryQualificationDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryQualificationDetailOutcome(QueryQualificationDetailResult(outcome.result()));
	else
		return QueryQualificationDetailOutcome(outcome.error());
}

void DomainClient::queryQualificationDetailAsync(const QueryQualificationDetailRequest& request, const QueryQualificationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryQualificationDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryQualificationDetailOutcomeCallable DomainClient::queryQualificationDetailCallable(const QueryQualificationDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryQualificationDetailOutcome()>>(
			[this, request]()
			{
			return this->queryQualificationDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryRegistrantProfileRealNameVerificationInfoOutcome DomainClient::queryRegistrantProfileRealNameVerificationInfo(const QueryRegistrantProfileRealNameVerificationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRegistrantProfileRealNameVerificationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRegistrantProfileRealNameVerificationInfoOutcome(QueryRegistrantProfileRealNameVerificationInfoResult(outcome.result()));
	else
		return QueryRegistrantProfileRealNameVerificationInfoOutcome(outcome.error());
}

void DomainClient::queryRegistrantProfileRealNameVerificationInfoAsync(const QueryRegistrantProfileRealNameVerificationInfoRequest& request, const QueryRegistrantProfileRealNameVerificationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRegistrantProfileRealNameVerificationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryRegistrantProfileRealNameVerificationInfoOutcomeCallable DomainClient::queryRegistrantProfileRealNameVerificationInfoCallable(const QueryRegistrantProfileRealNameVerificationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRegistrantProfileRealNameVerificationInfoOutcome()>>(
			[this, request]()
			{
			return this->queryRegistrantProfileRealNameVerificationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryRegistrantProfilesOutcome DomainClient::queryRegistrantProfiles(const QueryRegistrantProfilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRegistrantProfilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRegistrantProfilesOutcome(QueryRegistrantProfilesResult(outcome.result()));
	else
		return QueryRegistrantProfilesOutcome(outcome.error());
}

void DomainClient::queryRegistrantProfilesAsync(const QueryRegistrantProfilesRequest& request, const QueryRegistrantProfilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRegistrantProfiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryRegistrantProfilesOutcomeCallable DomainClient::queryRegistrantProfilesCallable(const QueryRegistrantProfilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRegistrantProfilesOutcome()>>(
			[this, request]()
			{
			return this->queryRegistrantProfiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryServerLockOutcome DomainClient::queryServerLock(const QueryServerLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryServerLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryServerLockOutcome(QueryServerLockResult(outcome.result()));
	else
		return QueryServerLockOutcome(outcome.error());
}

void DomainClient::queryServerLockAsync(const QueryServerLockRequest& request, const QueryServerLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryServerLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryServerLockOutcomeCallable DomainClient::queryServerLockCallable(const QueryServerLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryServerLockOutcome()>>(
			[this, request]()
			{
			return this->queryServerLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTaskDetailHistoryOutcome DomainClient::queryTaskDetailHistory(const QueryTaskDetailHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskDetailHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskDetailHistoryOutcome(QueryTaskDetailHistoryResult(outcome.result()));
	else
		return QueryTaskDetailHistoryOutcome(outcome.error());
}

void DomainClient::queryTaskDetailHistoryAsync(const QueryTaskDetailHistoryRequest& request, const QueryTaskDetailHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskDetailHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTaskDetailHistoryOutcomeCallable DomainClient::queryTaskDetailHistoryCallable(const QueryTaskDetailHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskDetailHistoryOutcome()>>(
			[this, request]()
			{
			return this->queryTaskDetailHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTaskDetailListOutcome DomainClient::queryTaskDetailList(const QueryTaskDetailListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskDetailListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskDetailListOutcome(QueryTaskDetailListResult(outcome.result()));
	else
		return QueryTaskDetailListOutcome(outcome.error());
}

void DomainClient::queryTaskDetailListAsync(const QueryTaskDetailListRequest& request, const QueryTaskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskDetailList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTaskDetailListOutcomeCallable DomainClient::queryTaskDetailListCallable(const QueryTaskDetailListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskDetailListOutcome()>>(
			[this, request]()
			{
			return this->queryTaskDetailList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTaskInfoHistoryOutcome DomainClient::queryTaskInfoHistory(const QueryTaskInfoHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskInfoHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskInfoHistoryOutcome(QueryTaskInfoHistoryResult(outcome.result()));
	else
		return QueryTaskInfoHistoryOutcome(outcome.error());
}

void DomainClient::queryTaskInfoHistoryAsync(const QueryTaskInfoHistoryRequest& request, const QueryTaskInfoHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskInfoHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTaskInfoHistoryOutcomeCallable DomainClient::queryTaskInfoHistoryCallable(const QueryTaskInfoHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskInfoHistoryOutcome()>>(
			[this, request]()
			{
			return this->queryTaskInfoHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTaskListOutcome DomainClient::queryTaskList(const QueryTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskListOutcome(QueryTaskListResult(outcome.result()));
	else
		return QueryTaskListOutcome(outcome.error());
}

void DomainClient::queryTaskListAsync(const QueryTaskListRequest& request, const QueryTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTaskListOutcomeCallable DomainClient::queryTaskListCallable(const QueryTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskListOutcome()>>(
			[this, request]()
			{
			return this->queryTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTransferInByInstanceIdOutcome DomainClient::queryTransferInByInstanceId(const QueryTransferInByInstanceIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTransferInByInstanceIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTransferInByInstanceIdOutcome(QueryTransferInByInstanceIdResult(outcome.result()));
	else
		return QueryTransferInByInstanceIdOutcome(outcome.error());
}

void DomainClient::queryTransferInByInstanceIdAsync(const QueryTransferInByInstanceIdRequest& request, const QueryTransferInByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTransferInByInstanceId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTransferInByInstanceIdOutcomeCallable DomainClient::queryTransferInByInstanceIdCallable(const QueryTransferInByInstanceIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTransferInByInstanceIdOutcome()>>(
			[this, request]()
			{
			return this->queryTransferInByInstanceId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTransferInListOutcome DomainClient::queryTransferInList(const QueryTransferInListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTransferInListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTransferInListOutcome(QueryTransferInListResult(outcome.result()));
	else
		return QueryTransferInListOutcome(outcome.error());
}

void DomainClient::queryTransferInListAsync(const QueryTransferInListRequest& request, const QueryTransferInListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTransferInList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTransferInListOutcomeCallable DomainClient::queryTransferInListCallable(const QueryTransferInListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTransferInListOutcome()>>(
			[this, request]()
			{
			return this->queryTransferInList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::QueryTransferOutInfoOutcome DomainClient::queryTransferOutInfo(const QueryTransferOutInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTransferOutInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTransferOutInfoOutcome(QueryTransferOutInfoResult(outcome.result()));
	else
		return QueryTransferOutInfoOutcome(outcome.error());
}

void DomainClient::queryTransferOutInfoAsync(const QueryTransferOutInfoRequest& request, const QueryTransferOutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTransferOutInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryTransferOutInfoOutcomeCallable DomainClient::queryTransferOutInfoCallable(const QueryTransferOutInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTransferOutInfoOutcome()>>(
			[this, request]()
			{
			return this->queryTransferOutInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::RegistrantProfileRealNameVerificationOutcome DomainClient::registrantProfileRealNameVerification(const RegistrantProfileRealNameVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegistrantProfileRealNameVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegistrantProfileRealNameVerificationOutcome(RegistrantProfileRealNameVerificationResult(outcome.result()));
	else
		return RegistrantProfileRealNameVerificationOutcome(outcome.error());
}

void DomainClient::registrantProfileRealNameVerificationAsync(const RegistrantProfileRealNameVerificationRequest& request, const RegistrantProfileRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registrantProfileRealNameVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::RegistrantProfileRealNameVerificationOutcomeCallable DomainClient::registrantProfileRealNameVerificationCallable(const RegistrantProfileRealNameVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegistrantProfileRealNameVerificationOutcome()>>(
			[this, request]()
			{
			return this->registrantProfileRealNameVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ResendEmailVerificationOutcome DomainClient::resendEmailVerification(const ResendEmailVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResendEmailVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResendEmailVerificationOutcome(ResendEmailVerificationResult(outcome.result()));
	else
		return ResendEmailVerificationOutcome(outcome.error());
}

void DomainClient::resendEmailVerificationAsync(const ResendEmailVerificationRequest& request, const ResendEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resendEmailVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ResendEmailVerificationOutcomeCallable DomainClient::resendEmailVerificationCallable(const ResendEmailVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResendEmailVerificationOutcome()>>(
			[this, request]()
			{
			return this->resendEmailVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ResetQualificationVerificationOutcome DomainClient::resetQualificationVerification(const ResetQualificationVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetQualificationVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetQualificationVerificationOutcome(ResetQualificationVerificationResult(outcome.result()));
	else
		return ResetQualificationVerificationOutcome(outcome.error());
}

void DomainClient::resetQualificationVerificationAsync(const ResetQualificationVerificationRequest& request, const ResetQualificationVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetQualificationVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ResetQualificationVerificationOutcomeCallable DomainClient::resetQualificationVerificationCallable(const ResetQualificationVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetQualificationVerificationOutcome()>>(
			[this, request]()
			{
			return this->resetQualificationVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchDomainRemarkOutcome DomainClient::saveBatchDomainRemark(const SaveBatchDomainRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchDomainRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchDomainRemarkOutcome(SaveBatchDomainRemarkResult(outcome.result()));
	else
		return SaveBatchDomainRemarkOutcome(outcome.error());
}

void DomainClient::saveBatchDomainRemarkAsync(const SaveBatchDomainRemarkRequest& request, const SaveBatchDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchDomainRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchDomainRemarkOutcomeCallable DomainClient::saveBatchDomainRemarkCallable(const SaveBatchDomainRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchDomainRemarkOutcome()>>(
			[this, request]()
			{
			return this->saveBatchDomainRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome DomainClient::saveBatchTaskForApplyQuickTransferOutOpenly(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome(SaveBatchTaskForApplyQuickTransferOutOpenlyResult(outcome.result()));
	else
		return SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForApplyQuickTransferOutOpenlyAsync(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& request, const SaveBatchTaskForApplyQuickTransferOutOpenlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForApplyQuickTransferOutOpenly(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForApplyQuickTransferOutOpenlyOutcomeCallable DomainClient::saveBatchTaskForApplyQuickTransferOutOpenlyCallable(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForApplyQuickTransferOutOpenlyOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForApplyQuickTransferOutOpenly(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForCreatingOrderActivateOutcome DomainClient::saveBatchTaskForCreatingOrderActivate(const SaveBatchTaskForCreatingOrderActivateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForCreatingOrderActivateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForCreatingOrderActivateOutcome(SaveBatchTaskForCreatingOrderActivateResult(outcome.result()));
	else
		return SaveBatchTaskForCreatingOrderActivateOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForCreatingOrderActivateAsync(const SaveBatchTaskForCreatingOrderActivateRequest& request, const SaveBatchTaskForCreatingOrderActivateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForCreatingOrderActivate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForCreatingOrderActivateOutcomeCallable DomainClient::saveBatchTaskForCreatingOrderActivateCallable(const SaveBatchTaskForCreatingOrderActivateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForCreatingOrderActivateOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForCreatingOrderActivate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForCreatingOrderRedeemOutcome DomainClient::saveBatchTaskForCreatingOrderRedeem(const SaveBatchTaskForCreatingOrderRedeemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForCreatingOrderRedeemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForCreatingOrderRedeemOutcome(SaveBatchTaskForCreatingOrderRedeemResult(outcome.result()));
	else
		return SaveBatchTaskForCreatingOrderRedeemOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForCreatingOrderRedeemAsync(const SaveBatchTaskForCreatingOrderRedeemRequest& request, const SaveBatchTaskForCreatingOrderRedeemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForCreatingOrderRedeem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForCreatingOrderRedeemOutcomeCallable DomainClient::saveBatchTaskForCreatingOrderRedeemCallable(const SaveBatchTaskForCreatingOrderRedeemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForCreatingOrderRedeemOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForCreatingOrderRedeem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForCreatingOrderRenewOutcome DomainClient::saveBatchTaskForCreatingOrderRenew(const SaveBatchTaskForCreatingOrderRenewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForCreatingOrderRenewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForCreatingOrderRenewOutcome(SaveBatchTaskForCreatingOrderRenewResult(outcome.result()));
	else
		return SaveBatchTaskForCreatingOrderRenewOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForCreatingOrderRenewAsync(const SaveBatchTaskForCreatingOrderRenewRequest& request, const SaveBatchTaskForCreatingOrderRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForCreatingOrderRenew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForCreatingOrderRenewOutcomeCallable DomainClient::saveBatchTaskForCreatingOrderRenewCallable(const SaveBatchTaskForCreatingOrderRenewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForCreatingOrderRenewOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForCreatingOrderRenew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForCreatingOrderTransferOutcome DomainClient::saveBatchTaskForCreatingOrderTransfer(const SaveBatchTaskForCreatingOrderTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForCreatingOrderTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForCreatingOrderTransferOutcome(SaveBatchTaskForCreatingOrderTransferResult(outcome.result()));
	else
		return SaveBatchTaskForCreatingOrderTransferOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForCreatingOrderTransferAsync(const SaveBatchTaskForCreatingOrderTransferRequest& request, const SaveBatchTaskForCreatingOrderTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForCreatingOrderTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForCreatingOrderTransferOutcomeCallable DomainClient::saveBatchTaskForCreatingOrderTransferCallable(const SaveBatchTaskForCreatingOrderTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForCreatingOrderTransferOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForCreatingOrderTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForDomainNameProxyServiceOutcome DomainClient::saveBatchTaskForDomainNameProxyService(const SaveBatchTaskForDomainNameProxyServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForDomainNameProxyServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForDomainNameProxyServiceOutcome(SaveBatchTaskForDomainNameProxyServiceResult(outcome.result()));
	else
		return SaveBatchTaskForDomainNameProxyServiceOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForDomainNameProxyServiceAsync(const SaveBatchTaskForDomainNameProxyServiceRequest& request, const SaveBatchTaskForDomainNameProxyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForDomainNameProxyService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForDomainNameProxyServiceOutcomeCallable DomainClient::saveBatchTaskForDomainNameProxyServiceCallable(const SaveBatchTaskForDomainNameProxyServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForDomainNameProxyServiceOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForDomainNameProxyService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForGenerateDomainCertificateOutcome DomainClient::saveBatchTaskForGenerateDomainCertificate(const SaveBatchTaskForGenerateDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForGenerateDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForGenerateDomainCertificateOutcome(SaveBatchTaskForGenerateDomainCertificateResult(outcome.result()));
	else
		return SaveBatchTaskForGenerateDomainCertificateOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForGenerateDomainCertificateAsync(const SaveBatchTaskForGenerateDomainCertificateRequest& request, const SaveBatchTaskForGenerateDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForGenerateDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForGenerateDomainCertificateOutcomeCallable DomainClient::saveBatchTaskForGenerateDomainCertificateCallable(const SaveBatchTaskForGenerateDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForGenerateDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForGenerateDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForModifyingDomainDnsOutcome DomainClient::saveBatchTaskForModifyingDomainDns(const SaveBatchTaskForModifyingDomainDnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForModifyingDomainDnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForModifyingDomainDnsOutcome(SaveBatchTaskForModifyingDomainDnsResult(outcome.result()));
	else
		return SaveBatchTaskForModifyingDomainDnsOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForModifyingDomainDnsAsync(const SaveBatchTaskForModifyingDomainDnsRequest& request, const SaveBatchTaskForModifyingDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForModifyingDomainDns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForModifyingDomainDnsOutcomeCallable DomainClient::saveBatchTaskForModifyingDomainDnsCallable(const SaveBatchTaskForModifyingDomainDnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForModifyingDomainDnsOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForModifyingDomainDns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForReserveDropListDomainOutcome DomainClient::saveBatchTaskForReserveDropListDomain(const SaveBatchTaskForReserveDropListDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForReserveDropListDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForReserveDropListDomainOutcome(SaveBatchTaskForReserveDropListDomainResult(outcome.result()));
	else
		return SaveBatchTaskForReserveDropListDomainOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForReserveDropListDomainAsync(const SaveBatchTaskForReserveDropListDomainRequest& request, const SaveBatchTaskForReserveDropListDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForReserveDropListDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForReserveDropListDomainOutcomeCallable DomainClient::saveBatchTaskForReserveDropListDomainCallable(const SaveBatchTaskForReserveDropListDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForReserveDropListDomainOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForReserveDropListDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForTransferOutByAuthorizationCodeOutcome DomainClient::saveBatchTaskForTransferOutByAuthorizationCode(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForTransferOutByAuthorizationCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForTransferOutByAuthorizationCodeOutcome(SaveBatchTaskForTransferOutByAuthorizationCodeResult(outcome.result()));
	else
		return SaveBatchTaskForTransferOutByAuthorizationCodeOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForTransferOutByAuthorizationCodeAsync(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest& request, const SaveBatchTaskForTransferOutByAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForTransferOutByAuthorizationCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForTransferOutByAuthorizationCodeOutcomeCallable DomainClient::saveBatchTaskForTransferOutByAuthorizationCodeCallable(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForTransferOutByAuthorizationCodeOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForTransferOutByAuthorizationCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForTransferProhibitionLockOutcome DomainClient::saveBatchTaskForTransferProhibitionLock(const SaveBatchTaskForTransferProhibitionLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForTransferProhibitionLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForTransferProhibitionLockOutcome(SaveBatchTaskForTransferProhibitionLockResult(outcome.result()));
	else
		return SaveBatchTaskForTransferProhibitionLockOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForTransferProhibitionLockAsync(const SaveBatchTaskForTransferProhibitionLockRequest& request, const SaveBatchTaskForTransferProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForTransferProhibitionLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForTransferProhibitionLockOutcomeCallable DomainClient::saveBatchTaskForTransferProhibitionLockCallable(const SaveBatchTaskForTransferProhibitionLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForTransferProhibitionLockOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForTransferProhibitionLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForUpdateProhibitionLockOutcome DomainClient::saveBatchTaskForUpdateProhibitionLock(const SaveBatchTaskForUpdateProhibitionLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForUpdateProhibitionLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForUpdateProhibitionLockOutcome(SaveBatchTaskForUpdateProhibitionLockResult(outcome.result()));
	else
		return SaveBatchTaskForUpdateProhibitionLockOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForUpdateProhibitionLockAsync(const SaveBatchTaskForUpdateProhibitionLockRequest& request, const SaveBatchTaskForUpdateProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForUpdateProhibitionLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForUpdateProhibitionLockOutcomeCallable DomainClient::saveBatchTaskForUpdateProhibitionLockCallable(const SaveBatchTaskForUpdateProhibitionLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForUpdateProhibitionLockOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForUpdateProhibitionLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForUpdatingContactInfoByNewContactOutcome DomainClient::saveBatchTaskForUpdatingContactInfoByNewContact(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForUpdatingContactInfoByNewContactOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForUpdatingContactInfoByNewContactOutcome(SaveBatchTaskForUpdatingContactInfoByNewContactResult(outcome.result()));
	else
		return SaveBatchTaskForUpdatingContactInfoByNewContactOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForUpdatingContactInfoByNewContactAsync(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest& request, const SaveBatchTaskForUpdatingContactInfoByNewContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForUpdatingContactInfoByNewContact(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForUpdatingContactInfoByNewContactOutcomeCallable DomainClient::saveBatchTaskForUpdatingContactInfoByNewContactCallable(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForUpdatingContactInfoByNewContactOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForUpdatingContactInfoByNewContact(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome DomainClient::saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome(SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResult(outcome.result()));
	else
		return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome(outcome.error());
}

void DomainClient::saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdAsync(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& request, const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcomeCallable DomainClient::saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdCallable(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdOutcome()>>(
			[this, request]()
			{
			return this->saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveDomainGroupOutcome DomainClient::saveDomainGroup(const SaveDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveDomainGroupOutcome(SaveDomainGroupResult(outcome.result()));
	else
		return SaveDomainGroupOutcome(outcome.error());
}

void DomainClient::saveDomainGroupAsync(const SaveDomainGroupRequest& request, const SaveDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveDomainGroupOutcomeCallable DomainClient::saveDomainGroupCallable(const SaveDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->saveDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveRegistrantProfileOutcome DomainClient::saveRegistrantProfile(const SaveRegistrantProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveRegistrantProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveRegistrantProfileOutcome(SaveRegistrantProfileResult(outcome.result()));
	else
		return SaveRegistrantProfileOutcome(outcome.error());
}

void DomainClient::saveRegistrantProfileAsync(const SaveRegistrantProfileRequest& request, const SaveRegistrantProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveRegistrantProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveRegistrantProfileOutcomeCallable DomainClient::saveRegistrantProfileCallable(const SaveRegistrantProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveRegistrantProfileOutcome()>>(
			[this, request]()
			{
			return this->saveRegistrantProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveRegistrantProfileRealNameVerificationOutcome DomainClient::saveRegistrantProfileRealNameVerification(const SaveRegistrantProfileRealNameVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveRegistrantProfileRealNameVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveRegistrantProfileRealNameVerificationOutcome(SaveRegistrantProfileRealNameVerificationResult(outcome.result()));
	else
		return SaveRegistrantProfileRealNameVerificationOutcome(outcome.error());
}

void DomainClient::saveRegistrantProfileRealNameVerificationAsync(const SaveRegistrantProfileRealNameVerificationRequest& request, const SaveRegistrantProfileRealNameVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveRegistrantProfileRealNameVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveRegistrantProfileRealNameVerificationOutcomeCallable DomainClient::saveRegistrantProfileRealNameVerificationCallable(const SaveRegistrantProfileRealNameVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveRegistrantProfileRealNameVerificationOutcome()>>(
			[this, request]()
			{
			return this->saveRegistrantProfileRealNameVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForAddingDSRecordOutcome DomainClient::saveSingleTaskForAddingDSRecord(const SaveSingleTaskForAddingDSRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForAddingDSRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForAddingDSRecordOutcome(SaveSingleTaskForAddingDSRecordResult(outcome.result()));
	else
		return SaveSingleTaskForAddingDSRecordOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForAddingDSRecordAsync(const SaveSingleTaskForAddingDSRecordRequest& request, const SaveSingleTaskForAddingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForAddingDSRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForAddingDSRecordOutcomeCallable DomainClient::saveSingleTaskForAddingDSRecordCallable(const SaveSingleTaskForAddingDSRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForAddingDSRecordOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForAddingDSRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome DomainClient::saveSingleTaskForApplyQuickTransferOutOpenly(const SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome(SaveSingleTaskForApplyQuickTransferOutOpenlyResult(outcome.result()));
	else
		return SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForApplyQuickTransferOutOpenlyAsync(const SaveSingleTaskForApplyQuickTransferOutOpenlyRequest& request, const SaveSingleTaskForApplyQuickTransferOutOpenlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForApplyQuickTransferOutOpenly(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForApplyQuickTransferOutOpenlyOutcomeCallable DomainClient::saveSingleTaskForApplyQuickTransferOutOpenlyCallable(const SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForApplyQuickTransferOutOpenlyOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForApplyQuickTransferOutOpenly(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForApprovingTransferOutOutcome DomainClient::saveSingleTaskForApprovingTransferOut(const SaveSingleTaskForApprovingTransferOutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForApprovingTransferOutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForApprovingTransferOutOutcome(SaveSingleTaskForApprovingTransferOutResult(outcome.result()));
	else
		return SaveSingleTaskForApprovingTransferOutOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForApprovingTransferOutAsync(const SaveSingleTaskForApprovingTransferOutRequest& request, const SaveSingleTaskForApprovingTransferOutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForApprovingTransferOut(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForApprovingTransferOutOutcomeCallable DomainClient::saveSingleTaskForApprovingTransferOutCallable(const SaveSingleTaskForApprovingTransferOutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForApprovingTransferOutOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForApprovingTransferOut(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForAssociatingEnsOutcome DomainClient::saveSingleTaskForAssociatingEns(const SaveSingleTaskForAssociatingEnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForAssociatingEnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForAssociatingEnsOutcome(SaveSingleTaskForAssociatingEnsResult(outcome.result()));
	else
		return SaveSingleTaskForAssociatingEnsOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForAssociatingEnsAsync(const SaveSingleTaskForAssociatingEnsRequest& request, const SaveSingleTaskForAssociatingEnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForAssociatingEns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForAssociatingEnsOutcomeCallable DomainClient::saveSingleTaskForAssociatingEnsCallable(const SaveSingleTaskForAssociatingEnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForAssociatingEnsOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForAssociatingEns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCancelingTransferInOutcome DomainClient::saveSingleTaskForCancelingTransferIn(const SaveSingleTaskForCancelingTransferInRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCancelingTransferInOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCancelingTransferInOutcome(SaveSingleTaskForCancelingTransferInResult(outcome.result()));
	else
		return SaveSingleTaskForCancelingTransferInOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCancelingTransferInAsync(const SaveSingleTaskForCancelingTransferInRequest& request, const SaveSingleTaskForCancelingTransferInAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCancelingTransferIn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCancelingTransferInOutcomeCallable DomainClient::saveSingleTaskForCancelingTransferInCallable(const SaveSingleTaskForCancelingTransferInRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCancelingTransferInOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCancelingTransferIn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCancelingTransferOutOutcome DomainClient::saveSingleTaskForCancelingTransferOut(const SaveSingleTaskForCancelingTransferOutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCancelingTransferOutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCancelingTransferOutOutcome(SaveSingleTaskForCancelingTransferOutResult(outcome.result()));
	else
		return SaveSingleTaskForCancelingTransferOutOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCancelingTransferOutAsync(const SaveSingleTaskForCancelingTransferOutRequest& request, const SaveSingleTaskForCancelingTransferOutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCancelingTransferOut(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCancelingTransferOutOutcomeCallable DomainClient::saveSingleTaskForCancelingTransferOutCallable(const SaveSingleTaskForCancelingTransferOutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCancelingTransferOutOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCancelingTransferOut(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCreatingDnsHostOutcome DomainClient::saveSingleTaskForCreatingDnsHost(const SaveSingleTaskForCreatingDnsHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCreatingDnsHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCreatingDnsHostOutcome(SaveSingleTaskForCreatingDnsHostResult(outcome.result()));
	else
		return SaveSingleTaskForCreatingDnsHostOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCreatingDnsHostAsync(const SaveSingleTaskForCreatingDnsHostRequest& request, const SaveSingleTaskForCreatingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCreatingDnsHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCreatingDnsHostOutcomeCallable DomainClient::saveSingleTaskForCreatingDnsHostCallable(const SaveSingleTaskForCreatingDnsHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCreatingDnsHostOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCreatingDnsHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCreatingOrderActivateOutcome DomainClient::saveSingleTaskForCreatingOrderActivate(const SaveSingleTaskForCreatingOrderActivateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCreatingOrderActivateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCreatingOrderActivateOutcome(SaveSingleTaskForCreatingOrderActivateResult(outcome.result()));
	else
		return SaveSingleTaskForCreatingOrderActivateOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCreatingOrderActivateAsync(const SaveSingleTaskForCreatingOrderActivateRequest& request, const SaveSingleTaskForCreatingOrderActivateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCreatingOrderActivate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCreatingOrderActivateOutcomeCallable DomainClient::saveSingleTaskForCreatingOrderActivateCallable(const SaveSingleTaskForCreatingOrderActivateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCreatingOrderActivateOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCreatingOrderActivate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCreatingOrderRedeemOutcome DomainClient::saveSingleTaskForCreatingOrderRedeem(const SaveSingleTaskForCreatingOrderRedeemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCreatingOrderRedeemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCreatingOrderRedeemOutcome(SaveSingleTaskForCreatingOrderRedeemResult(outcome.result()));
	else
		return SaveSingleTaskForCreatingOrderRedeemOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCreatingOrderRedeemAsync(const SaveSingleTaskForCreatingOrderRedeemRequest& request, const SaveSingleTaskForCreatingOrderRedeemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCreatingOrderRedeem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCreatingOrderRedeemOutcomeCallable DomainClient::saveSingleTaskForCreatingOrderRedeemCallable(const SaveSingleTaskForCreatingOrderRedeemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCreatingOrderRedeemOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCreatingOrderRedeem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCreatingOrderRenewOutcome DomainClient::saveSingleTaskForCreatingOrderRenew(const SaveSingleTaskForCreatingOrderRenewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCreatingOrderRenewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCreatingOrderRenewOutcome(SaveSingleTaskForCreatingOrderRenewResult(outcome.result()));
	else
		return SaveSingleTaskForCreatingOrderRenewOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCreatingOrderRenewAsync(const SaveSingleTaskForCreatingOrderRenewRequest& request, const SaveSingleTaskForCreatingOrderRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCreatingOrderRenew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCreatingOrderRenewOutcomeCallable DomainClient::saveSingleTaskForCreatingOrderRenewCallable(const SaveSingleTaskForCreatingOrderRenewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCreatingOrderRenewOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCreatingOrderRenew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForCreatingOrderTransferOutcome DomainClient::saveSingleTaskForCreatingOrderTransfer(const SaveSingleTaskForCreatingOrderTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForCreatingOrderTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForCreatingOrderTransferOutcome(SaveSingleTaskForCreatingOrderTransferResult(outcome.result()));
	else
		return SaveSingleTaskForCreatingOrderTransferOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForCreatingOrderTransferAsync(const SaveSingleTaskForCreatingOrderTransferRequest& request, const SaveSingleTaskForCreatingOrderTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForCreatingOrderTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForCreatingOrderTransferOutcomeCallable DomainClient::saveSingleTaskForCreatingOrderTransferCallable(const SaveSingleTaskForCreatingOrderTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForCreatingOrderTransferOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForCreatingOrderTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForDeletingDSRecordOutcome DomainClient::saveSingleTaskForDeletingDSRecord(const SaveSingleTaskForDeletingDSRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForDeletingDSRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForDeletingDSRecordOutcome(SaveSingleTaskForDeletingDSRecordResult(outcome.result()));
	else
		return SaveSingleTaskForDeletingDSRecordOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForDeletingDSRecordAsync(const SaveSingleTaskForDeletingDSRecordRequest& request, const SaveSingleTaskForDeletingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForDeletingDSRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForDeletingDSRecordOutcomeCallable DomainClient::saveSingleTaskForDeletingDSRecordCallable(const SaveSingleTaskForDeletingDSRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForDeletingDSRecordOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForDeletingDSRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForDeletingDnsHostOutcome DomainClient::saveSingleTaskForDeletingDnsHost(const SaveSingleTaskForDeletingDnsHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForDeletingDnsHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForDeletingDnsHostOutcome(SaveSingleTaskForDeletingDnsHostResult(outcome.result()));
	else
		return SaveSingleTaskForDeletingDnsHostOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForDeletingDnsHostAsync(const SaveSingleTaskForDeletingDnsHostRequest& request, const SaveSingleTaskForDeletingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForDeletingDnsHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForDeletingDnsHostOutcomeCallable DomainClient::saveSingleTaskForDeletingDnsHostCallable(const SaveSingleTaskForDeletingDnsHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForDeletingDnsHostOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForDeletingDnsHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForDisassociatingEnsOutcome DomainClient::saveSingleTaskForDisassociatingEns(const SaveSingleTaskForDisassociatingEnsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForDisassociatingEnsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForDisassociatingEnsOutcome(SaveSingleTaskForDisassociatingEnsResult(outcome.result()));
	else
		return SaveSingleTaskForDisassociatingEnsOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForDisassociatingEnsAsync(const SaveSingleTaskForDisassociatingEnsRequest& request, const SaveSingleTaskForDisassociatingEnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForDisassociatingEns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForDisassociatingEnsOutcomeCallable DomainClient::saveSingleTaskForDisassociatingEnsCallable(const SaveSingleTaskForDisassociatingEnsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForDisassociatingEnsOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForDisassociatingEns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForDomainNameProxyServiceOutcome DomainClient::saveSingleTaskForDomainNameProxyService(const SaveSingleTaskForDomainNameProxyServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForDomainNameProxyServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForDomainNameProxyServiceOutcome(SaveSingleTaskForDomainNameProxyServiceResult(outcome.result()));
	else
		return SaveSingleTaskForDomainNameProxyServiceOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForDomainNameProxyServiceAsync(const SaveSingleTaskForDomainNameProxyServiceRequest& request, const SaveSingleTaskForDomainNameProxyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForDomainNameProxyService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForDomainNameProxyServiceOutcomeCallable DomainClient::saveSingleTaskForDomainNameProxyServiceCallable(const SaveSingleTaskForDomainNameProxyServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForDomainNameProxyServiceOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForDomainNameProxyService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForGenerateDomainCertificateOutcome DomainClient::saveSingleTaskForGenerateDomainCertificate(const SaveSingleTaskForGenerateDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForGenerateDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForGenerateDomainCertificateOutcome(SaveSingleTaskForGenerateDomainCertificateResult(outcome.result()));
	else
		return SaveSingleTaskForGenerateDomainCertificateOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForGenerateDomainCertificateAsync(const SaveSingleTaskForGenerateDomainCertificateRequest& request, const SaveSingleTaskForGenerateDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForGenerateDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForGenerateDomainCertificateOutcomeCallable DomainClient::saveSingleTaskForGenerateDomainCertificateCallable(const SaveSingleTaskForGenerateDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForGenerateDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForGenerateDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForModifyingDSRecordOutcome DomainClient::saveSingleTaskForModifyingDSRecord(const SaveSingleTaskForModifyingDSRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForModifyingDSRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForModifyingDSRecordOutcome(SaveSingleTaskForModifyingDSRecordResult(outcome.result()));
	else
		return SaveSingleTaskForModifyingDSRecordOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForModifyingDSRecordAsync(const SaveSingleTaskForModifyingDSRecordRequest& request, const SaveSingleTaskForModifyingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForModifyingDSRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForModifyingDSRecordOutcomeCallable DomainClient::saveSingleTaskForModifyingDSRecordCallable(const SaveSingleTaskForModifyingDSRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForModifyingDSRecordOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForModifyingDSRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForModifyingDnsHostOutcome DomainClient::saveSingleTaskForModifyingDnsHost(const SaveSingleTaskForModifyingDnsHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForModifyingDnsHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForModifyingDnsHostOutcome(SaveSingleTaskForModifyingDnsHostResult(outcome.result()));
	else
		return SaveSingleTaskForModifyingDnsHostOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForModifyingDnsHostAsync(const SaveSingleTaskForModifyingDnsHostRequest& request, const SaveSingleTaskForModifyingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForModifyingDnsHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForModifyingDnsHostOutcomeCallable DomainClient::saveSingleTaskForModifyingDnsHostCallable(const SaveSingleTaskForModifyingDnsHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForModifyingDnsHostOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForModifyingDnsHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome DomainClient::saveSingleTaskForQueryingTransferAuthorizationCode(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome(SaveSingleTaskForQueryingTransferAuthorizationCodeResult(outcome.result()));
	else
		return SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForQueryingTransferAuthorizationCodeAsync(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest& request, const SaveSingleTaskForQueryingTransferAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForQueryingTransferAuthorizationCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForQueryingTransferAuthorizationCodeOutcomeCallable DomainClient::saveSingleTaskForQueryingTransferAuthorizationCodeCallable(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForQueryingTransferAuthorizationCodeOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForQueryingTransferAuthorizationCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForReserveDropListDomainOutcome DomainClient::saveSingleTaskForReserveDropListDomain(const SaveSingleTaskForReserveDropListDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForReserveDropListDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForReserveDropListDomainOutcome(SaveSingleTaskForReserveDropListDomainResult(outcome.result()));
	else
		return SaveSingleTaskForReserveDropListDomainOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForReserveDropListDomainAsync(const SaveSingleTaskForReserveDropListDomainRequest& request, const SaveSingleTaskForReserveDropListDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForReserveDropListDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForReserveDropListDomainOutcomeCallable DomainClient::saveSingleTaskForReserveDropListDomainCallable(const SaveSingleTaskForReserveDropListDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForReserveDropListDomainOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForReserveDropListDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForSaveArtExtensionOutcome DomainClient::saveSingleTaskForSaveArtExtension(const SaveSingleTaskForSaveArtExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForSaveArtExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForSaveArtExtensionOutcome(SaveSingleTaskForSaveArtExtensionResult(outcome.result()));
	else
		return SaveSingleTaskForSaveArtExtensionOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForSaveArtExtensionAsync(const SaveSingleTaskForSaveArtExtensionRequest& request, const SaveSingleTaskForSaveArtExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForSaveArtExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForSaveArtExtensionOutcomeCallable DomainClient::saveSingleTaskForSaveArtExtensionCallable(const SaveSingleTaskForSaveArtExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForSaveArtExtensionOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForSaveArtExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForSynchronizingDSRecordOutcome DomainClient::saveSingleTaskForSynchronizingDSRecord(const SaveSingleTaskForSynchronizingDSRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForSynchronizingDSRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForSynchronizingDSRecordOutcome(SaveSingleTaskForSynchronizingDSRecordResult(outcome.result()));
	else
		return SaveSingleTaskForSynchronizingDSRecordOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForSynchronizingDSRecordAsync(const SaveSingleTaskForSynchronizingDSRecordRequest& request, const SaveSingleTaskForSynchronizingDSRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForSynchronizingDSRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForSynchronizingDSRecordOutcomeCallable DomainClient::saveSingleTaskForSynchronizingDSRecordCallable(const SaveSingleTaskForSynchronizingDSRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForSynchronizingDSRecordOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForSynchronizingDSRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForSynchronizingDnsHostOutcome DomainClient::saveSingleTaskForSynchronizingDnsHost(const SaveSingleTaskForSynchronizingDnsHostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForSynchronizingDnsHostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForSynchronizingDnsHostOutcome(SaveSingleTaskForSynchronizingDnsHostResult(outcome.result()));
	else
		return SaveSingleTaskForSynchronizingDnsHostOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForSynchronizingDnsHostAsync(const SaveSingleTaskForSynchronizingDnsHostRequest& request, const SaveSingleTaskForSynchronizingDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForSynchronizingDnsHost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForSynchronizingDnsHostOutcomeCallable DomainClient::saveSingleTaskForSynchronizingDnsHostCallable(const SaveSingleTaskForSynchronizingDnsHostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForSynchronizingDnsHostOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForSynchronizingDnsHost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForTransferOutByAuthorizationCodeOutcome DomainClient::saveSingleTaskForTransferOutByAuthorizationCode(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForTransferOutByAuthorizationCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForTransferOutByAuthorizationCodeOutcome(SaveSingleTaskForTransferOutByAuthorizationCodeResult(outcome.result()));
	else
		return SaveSingleTaskForTransferOutByAuthorizationCodeOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForTransferOutByAuthorizationCodeAsync(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest& request, const SaveSingleTaskForTransferOutByAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForTransferOutByAuthorizationCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForTransferOutByAuthorizationCodeOutcomeCallable DomainClient::saveSingleTaskForTransferOutByAuthorizationCodeCallable(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForTransferOutByAuthorizationCodeOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForTransferOutByAuthorizationCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForTransferProhibitionLockOutcome DomainClient::saveSingleTaskForTransferProhibitionLock(const SaveSingleTaskForTransferProhibitionLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForTransferProhibitionLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForTransferProhibitionLockOutcome(SaveSingleTaskForTransferProhibitionLockResult(outcome.result()));
	else
		return SaveSingleTaskForTransferProhibitionLockOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForTransferProhibitionLockAsync(const SaveSingleTaskForTransferProhibitionLockRequest& request, const SaveSingleTaskForTransferProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForTransferProhibitionLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForTransferProhibitionLockOutcomeCallable DomainClient::saveSingleTaskForTransferProhibitionLockCallable(const SaveSingleTaskForTransferProhibitionLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForTransferProhibitionLockOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForTransferProhibitionLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForUpdateProhibitionLockOutcome DomainClient::saveSingleTaskForUpdateProhibitionLock(const SaveSingleTaskForUpdateProhibitionLockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForUpdateProhibitionLockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForUpdateProhibitionLockOutcome(SaveSingleTaskForUpdateProhibitionLockResult(outcome.result()));
	else
		return SaveSingleTaskForUpdateProhibitionLockOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForUpdateProhibitionLockAsync(const SaveSingleTaskForUpdateProhibitionLockRequest& request, const SaveSingleTaskForUpdateProhibitionLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForUpdateProhibitionLock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForUpdateProhibitionLockOutcomeCallable DomainClient::saveSingleTaskForUpdateProhibitionLockCallable(const SaveSingleTaskForUpdateProhibitionLockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForUpdateProhibitionLockOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForUpdateProhibitionLock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveSingleTaskForUpdatingContactInfoOutcome DomainClient::saveSingleTaskForUpdatingContactInfo(const SaveSingleTaskForUpdatingContactInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveSingleTaskForUpdatingContactInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveSingleTaskForUpdatingContactInfoOutcome(SaveSingleTaskForUpdatingContactInfoResult(outcome.result()));
	else
		return SaveSingleTaskForUpdatingContactInfoOutcome(outcome.error());
}

void DomainClient::saveSingleTaskForUpdatingContactInfoAsync(const SaveSingleTaskForUpdatingContactInfoRequest& request, const SaveSingleTaskForUpdatingContactInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveSingleTaskForUpdatingContactInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveSingleTaskForUpdatingContactInfoOutcomeCallable DomainClient::saveSingleTaskForUpdatingContactInfoCallable(const SaveSingleTaskForUpdatingContactInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveSingleTaskForUpdatingContactInfoOutcome()>>(
			[this, request]()
			{
			return this->saveSingleTaskForUpdatingContactInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveTaskForSubmittingDomainDeleteOutcome DomainClient::saveTaskForSubmittingDomainDelete(const SaveTaskForSubmittingDomainDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskForSubmittingDomainDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskForSubmittingDomainDeleteOutcome(SaveTaskForSubmittingDomainDeleteResult(outcome.result()));
	else
		return SaveTaskForSubmittingDomainDeleteOutcome(outcome.error());
}

void DomainClient::saveTaskForSubmittingDomainDeleteAsync(const SaveTaskForSubmittingDomainDeleteRequest& request, const SaveTaskForSubmittingDomainDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTaskForSubmittingDomainDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveTaskForSubmittingDomainDeleteOutcomeCallable DomainClient::saveTaskForSubmittingDomainDeleteCallable(const SaveTaskForSubmittingDomainDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskForSubmittingDomainDeleteOutcome()>>(
			[this, request]()
			{
			return this->saveTaskForSubmittingDomainDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome DomainClient::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome(SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResult(outcome.result()));
	else
		return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome(outcome.error());
}

void DomainClient::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialAsync(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest& request, const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcomeCallable DomainClient::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialCallable(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialOutcome()>>(
			[this, request]()
			{
			return this->saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome DomainClient::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome(SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResult(outcome.result()));
	else
		return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome(outcome.error());
}

void DomainClient::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDAsync(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& request, const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcomeCallable DomainClient::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDCallable(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDOutcome()>>(
			[this, request]()
			{
			return this->saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome DomainClient::saveTaskForUpdatingRegistrantInfoByIdentityCredential(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome(SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResult(outcome.result()));
	else
		return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome(outcome.error());
}

void DomainClient::saveTaskForUpdatingRegistrantInfoByIdentityCredentialAsync(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& request, const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTaskForUpdatingRegistrantInfoByIdentityCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcomeCallable DomainClient::saveTaskForUpdatingRegistrantInfoByIdentityCredentialCallable(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialOutcome()>>(
			[this, request]()
			{
			return this->saveTaskForUpdatingRegistrantInfoByIdentityCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome DomainClient::saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome(SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResult(outcome.result()));
	else
		return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome(outcome.error());
}

void DomainClient::saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDAsync(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& request, const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcomeCallable DomainClient::saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDCallable(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDOutcome()>>(
			[this, request]()
			{
			return this->saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::ScrollDomainListOutcome DomainClient::scrollDomainList(const ScrollDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScrollDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScrollDomainListOutcome(ScrollDomainListResult(outcome.result()));
	else
		return ScrollDomainListOutcome(outcome.error());
}

void DomainClient::scrollDomainListAsync(const ScrollDomainListRequest& request, const ScrollDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scrollDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ScrollDomainListOutcomeCallable DomainClient::scrollDomainListCallable(const ScrollDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScrollDomainListOutcome()>>(
			[this, request]()
			{
			return this->scrollDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SetDefaultRegistrantProfileOutcome DomainClient::setDefaultRegistrantProfile(const SetDefaultRegistrantProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDefaultRegistrantProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDefaultRegistrantProfileOutcome(SetDefaultRegistrantProfileResult(outcome.result()));
	else
		return SetDefaultRegistrantProfileOutcome(outcome.error());
}

void DomainClient::setDefaultRegistrantProfileAsync(const SetDefaultRegistrantProfileRequest& request, const SetDefaultRegistrantProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDefaultRegistrantProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SetDefaultRegistrantProfileOutcomeCallable DomainClient::setDefaultRegistrantProfileCallable(const SetDefaultRegistrantProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDefaultRegistrantProfileOutcome()>>(
			[this, request]()
			{
			return this->setDefaultRegistrantProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SetupDomainAutoRenewOutcome DomainClient::setupDomainAutoRenew(const SetupDomainAutoRenewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetupDomainAutoRenewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetupDomainAutoRenewOutcome(SetupDomainAutoRenewResult(outcome.result()));
	else
		return SetupDomainAutoRenewOutcome(outcome.error());
}

void DomainClient::setupDomainAutoRenewAsync(const SetupDomainAutoRenewRequest& request, const SetupDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setupDomainAutoRenew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SetupDomainAutoRenewOutcomeCallable DomainClient::setupDomainAutoRenewCallable(const SetupDomainAutoRenewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetupDomainAutoRenewOutcome()>>(
			[this, request]()
			{
			return this->setupDomainAutoRenew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SubmitDomainSpecialBizCredentialsOutcome DomainClient::submitDomainSpecialBizCredentials(const SubmitDomainSpecialBizCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDomainSpecialBizCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDomainSpecialBizCredentialsOutcome(SubmitDomainSpecialBizCredentialsResult(outcome.result()));
	else
		return SubmitDomainSpecialBizCredentialsOutcome(outcome.error());
}

void DomainClient::submitDomainSpecialBizCredentialsAsync(const SubmitDomainSpecialBizCredentialsRequest& request, const SubmitDomainSpecialBizCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDomainSpecialBizCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SubmitDomainSpecialBizCredentialsOutcomeCallable DomainClient::submitDomainSpecialBizCredentialsCallable(const SubmitDomainSpecialBizCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDomainSpecialBizCredentialsOutcome()>>(
			[this, request]()
			{
			return this->submitDomainSpecialBizCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SubmitEmailVerificationOutcome DomainClient::submitEmailVerification(const SubmitEmailVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitEmailVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitEmailVerificationOutcome(SubmitEmailVerificationResult(outcome.result()));
	else
		return SubmitEmailVerificationOutcome(outcome.error());
}

void DomainClient::submitEmailVerificationAsync(const SubmitEmailVerificationRequest& request, const SubmitEmailVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitEmailVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SubmitEmailVerificationOutcomeCallable DomainClient::submitEmailVerificationCallable(const SubmitEmailVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitEmailVerificationOutcome()>>(
			[this, request]()
			{
			return this->submitEmailVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SubmitOperationAuditInfoOutcome DomainClient::submitOperationAuditInfo(const SubmitOperationAuditInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitOperationAuditInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitOperationAuditInfoOutcome(SubmitOperationAuditInfoResult(outcome.result()));
	else
		return SubmitOperationAuditInfoOutcome(outcome.error());
}

void DomainClient::submitOperationAuditInfoAsync(const SubmitOperationAuditInfoRequest& request, const SubmitOperationAuditInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitOperationAuditInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SubmitOperationAuditInfoOutcomeCallable DomainClient::submitOperationAuditInfoCallable(const SubmitOperationAuditInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitOperationAuditInfoOutcome()>>(
			[this, request]()
			{
			return this->submitOperationAuditInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::SubmitOperationCredentialsOutcome DomainClient::submitOperationCredentials(const SubmitOperationCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitOperationCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitOperationCredentialsOutcome(SubmitOperationCredentialsResult(outcome.result()));
	else
		return SubmitOperationCredentialsOutcome(outcome.error());
}

void DomainClient::submitOperationCredentialsAsync(const SubmitOperationCredentialsRequest& request, const SubmitOperationCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitOperationCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::SubmitOperationCredentialsOutcomeCallable DomainClient::submitOperationCredentialsCallable(const SubmitOperationCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitOperationCredentialsOutcome()>>(
			[this, request]()
			{
			return this->submitOperationCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::TransferInCheckMailTokenOutcome DomainClient::transferInCheckMailToken(const TransferInCheckMailTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferInCheckMailTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferInCheckMailTokenOutcome(TransferInCheckMailTokenResult(outcome.result()));
	else
		return TransferInCheckMailTokenOutcome(outcome.error());
}

void DomainClient::transferInCheckMailTokenAsync(const TransferInCheckMailTokenRequest& request, const TransferInCheckMailTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferInCheckMailToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::TransferInCheckMailTokenOutcomeCallable DomainClient::transferInCheckMailTokenCallable(const TransferInCheckMailTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferInCheckMailTokenOutcome()>>(
			[this, request]()
			{
			return this->transferInCheckMailToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::TransferInReenterTransferAuthorizationCodeOutcome DomainClient::transferInReenterTransferAuthorizationCode(const TransferInReenterTransferAuthorizationCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferInReenterTransferAuthorizationCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferInReenterTransferAuthorizationCodeOutcome(TransferInReenterTransferAuthorizationCodeResult(outcome.result()));
	else
		return TransferInReenterTransferAuthorizationCodeOutcome(outcome.error());
}

void DomainClient::transferInReenterTransferAuthorizationCodeAsync(const TransferInReenterTransferAuthorizationCodeRequest& request, const TransferInReenterTransferAuthorizationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferInReenterTransferAuthorizationCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::TransferInReenterTransferAuthorizationCodeOutcomeCallable DomainClient::transferInReenterTransferAuthorizationCodeCallable(const TransferInReenterTransferAuthorizationCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferInReenterTransferAuthorizationCodeOutcome()>>(
			[this, request]()
			{
			return this->transferInReenterTransferAuthorizationCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::TransferInRefetchWhoisEmailOutcome DomainClient::transferInRefetchWhoisEmail(const TransferInRefetchWhoisEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferInRefetchWhoisEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferInRefetchWhoisEmailOutcome(TransferInRefetchWhoisEmailResult(outcome.result()));
	else
		return TransferInRefetchWhoisEmailOutcome(outcome.error());
}

void DomainClient::transferInRefetchWhoisEmailAsync(const TransferInRefetchWhoisEmailRequest& request, const TransferInRefetchWhoisEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferInRefetchWhoisEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::TransferInRefetchWhoisEmailOutcomeCallable DomainClient::transferInRefetchWhoisEmailCallable(const TransferInRefetchWhoisEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferInRefetchWhoisEmailOutcome()>>(
			[this, request]()
			{
			return this->transferInRefetchWhoisEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::TransferInResendMailTokenOutcome DomainClient::transferInResendMailToken(const TransferInResendMailTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferInResendMailTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferInResendMailTokenOutcome(TransferInResendMailTokenResult(outcome.result()));
	else
		return TransferInResendMailTokenOutcome(outcome.error());
}

void DomainClient::transferInResendMailTokenAsync(const TransferInResendMailTokenRequest& request, const TransferInResendMailTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferInResendMailToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::TransferInResendMailTokenOutcomeCallable DomainClient::transferInResendMailTokenCallable(const TransferInResendMailTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferInResendMailTokenOutcome()>>(
			[this, request]()
			{
			return this->transferInResendMailToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::UpdateDomainToDomainGroupOutcome DomainClient::updateDomainToDomainGroup(const UpdateDomainToDomainGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainToDomainGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainToDomainGroupOutcome(UpdateDomainToDomainGroupResult(outcome.result()));
	else
		return UpdateDomainToDomainGroupOutcome(outcome.error());
}

void DomainClient::updateDomainToDomainGroupAsync(const UpdateDomainToDomainGroupRequest& request, const UpdateDomainToDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainToDomainGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::UpdateDomainToDomainGroupOutcomeCallable DomainClient::updateDomainToDomainGroupCallable(const UpdateDomainToDomainGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainToDomainGroupOutcome()>>(
			[this, request]()
			{
			return this->updateDomainToDomainGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::VerifyContactFieldOutcome DomainClient::verifyContactField(const VerifyContactFieldRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyContactFieldOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyContactFieldOutcome(VerifyContactFieldResult(outcome.result()));
	else
		return VerifyContactFieldOutcome(outcome.error());
}

void DomainClient::verifyContactFieldAsync(const VerifyContactFieldRequest& request, const VerifyContactFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyContactField(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::VerifyContactFieldOutcomeCallable DomainClient::verifyContactFieldCallable(const VerifyContactFieldRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyContactFieldOutcome()>>(
			[this, request]()
			{
			return this->verifyContactField(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DomainClient::VerifyEmailOutcome DomainClient::verifyEmail(const VerifyEmailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyEmailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyEmailOutcome(VerifyEmailResult(outcome.result()));
	else
		return VerifyEmailOutcome(outcome.error());
}

void DomainClient::verifyEmailAsync(const VerifyEmailRequest& request, const VerifyEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyEmail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::VerifyEmailOutcomeCallable DomainClient::verifyEmailCallable(const VerifyEmailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyEmailOutcome()>>(
			[this, request]()
			{
			return this->verifyEmail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

