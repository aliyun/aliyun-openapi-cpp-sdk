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

#include <alibabacloud/governance/GovernanceClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

namespace
{
	const std::string SERVICE_NAME = "governance";
}

GovernanceClient::GovernanceClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "governance");
}

GovernanceClient::GovernanceClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "governance");
}

GovernanceClient::GovernanceClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "governance");
}

GovernanceClient::~GovernanceClient()
{}

GovernanceClient::BatchEnrollAccountsOutcome GovernanceClient::batchEnrollAccounts(const BatchEnrollAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchEnrollAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchEnrollAccountsOutcome(BatchEnrollAccountsResult(outcome.result()));
	else
		return BatchEnrollAccountsOutcome(outcome.error());
}

void GovernanceClient::batchEnrollAccountsAsync(const BatchEnrollAccountsRequest& request, const BatchEnrollAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchEnrollAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::BatchEnrollAccountsOutcomeCallable GovernanceClient::batchEnrollAccountsCallable(const BatchEnrollAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchEnrollAccountsOutcome()>>(
			[this, request]()
			{
			return this->batchEnrollAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::CreateAccountFactoryBaselineOutcome GovernanceClient::createAccountFactoryBaseline(const CreateAccountFactoryBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccountFactoryBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccountFactoryBaselineOutcome(CreateAccountFactoryBaselineResult(outcome.result()));
	else
		return CreateAccountFactoryBaselineOutcome(outcome.error());
}

void GovernanceClient::createAccountFactoryBaselineAsync(const CreateAccountFactoryBaselineRequest& request, const CreateAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccountFactoryBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::CreateAccountFactoryBaselineOutcomeCallable GovernanceClient::createAccountFactoryBaselineCallable(const CreateAccountFactoryBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccountFactoryBaselineOutcome()>>(
			[this, request]()
			{
			return this->createAccountFactoryBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::DeleteAccountFactoryBaselineOutcome GovernanceClient::deleteAccountFactoryBaseline(const DeleteAccountFactoryBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountFactoryBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountFactoryBaselineOutcome(DeleteAccountFactoryBaselineResult(outcome.result()));
	else
		return DeleteAccountFactoryBaselineOutcome(outcome.error());
}

void GovernanceClient::deleteAccountFactoryBaselineAsync(const DeleteAccountFactoryBaselineRequest& request, const DeleteAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccountFactoryBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::DeleteAccountFactoryBaselineOutcomeCallable GovernanceClient::deleteAccountFactoryBaselineCallable(const DeleteAccountFactoryBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountFactoryBaselineOutcome()>>(
			[this, request]()
			{
			return this->deleteAccountFactoryBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::EnrollAccountOutcome GovernanceClient::enrollAccount(const EnrollAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnrollAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnrollAccountOutcome(EnrollAccountResult(outcome.result()));
	else
		return EnrollAccountOutcome(outcome.error());
}

void GovernanceClient::enrollAccountAsync(const EnrollAccountRequest& request, const EnrollAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enrollAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::EnrollAccountOutcomeCallable GovernanceClient::enrollAccountCallable(const EnrollAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnrollAccountOutcome()>>(
			[this, request]()
			{
			return this->enrollAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::GetAccountFactoryBaselineOutcome GovernanceClient::getAccountFactoryBaseline(const GetAccountFactoryBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountFactoryBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountFactoryBaselineOutcome(GetAccountFactoryBaselineResult(outcome.result()));
	else
		return GetAccountFactoryBaselineOutcome(outcome.error());
}

void GovernanceClient::getAccountFactoryBaselineAsync(const GetAccountFactoryBaselineRequest& request, const GetAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountFactoryBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::GetAccountFactoryBaselineOutcomeCallable GovernanceClient::getAccountFactoryBaselineCallable(const GetAccountFactoryBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountFactoryBaselineOutcome()>>(
			[this, request]()
			{
			return this->getAccountFactoryBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::GetEnrolledAccountOutcome GovernanceClient::getEnrolledAccount(const GetEnrolledAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEnrolledAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEnrolledAccountOutcome(GetEnrolledAccountResult(outcome.result()));
	else
		return GetEnrolledAccountOutcome(outcome.error());
}

void GovernanceClient::getEnrolledAccountAsync(const GetEnrolledAccountRequest& request, const GetEnrolledAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEnrolledAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::GetEnrolledAccountOutcomeCallable GovernanceClient::getEnrolledAccountCallable(const GetEnrolledAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEnrolledAccountOutcome()>>(
			[this, request]()
			{
			return this->getEnrolledAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListAccountFactoryBaselineItemsOutcome GovernanceClient::listAccountFactoryBaselineItems(const ListAccountFactoryBaselineItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountFactoryBaselineItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountFactoryBaselineItemsOutcome(ListAccountFactoryBaselineItemsResult(outcome.result()));
	else
		return ListAccountFactoryBaselineItemsOutcome(outcome.error());
}

void GovernanceClient::listAccountFactoryBaselineItemsAsync(const ListAccountFactoryBaselineItemsRequest& request, const ListAccountFactoryBaselineItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccountFactoryBaselineItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListAccountFactoryBaselineItemsOutcomeCallable GovernanceClient::listAccountFactoryBaselineItemsCallable(const ListAccountFactoryBaselineItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountFactoryBaselineItemsOutcome()>>(
			[this, request]()
			{
			return this->listAccountFactoryBaselineItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListAccountFactoryBaselinesOutcome GovernanceClient::listAccountFactoryBaselines(const ListAccountFactoryBaselinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAccountFactoryBaselinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAccountFactoryBaselinesOutcome(ListAccountFactoryBaselinesResult(outcome.result()));
	else
		return ListAccountFactoryBaselinesOutcome(outcome.error());
}

void GovernanceClient::listAccountFactoryBaselinesAsync(const ListAccountFactoryBaselinesRequest& request, const ListAccountFactoryBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAccountFactoryBaselines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListAccountFactoryBaselinesOutcomeCallable GovernanceClient::listAccountFactoryBaselinesCallable(const ListAccountFactoryBaselinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAccountFactoryBaselinesOutcome()>>(
			[this, request]()
			{
			return this->listAccountFactoryBaselines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListEnrolledAccountsOutcome GovernanceClient::listEnrolledAccounts(const ListEnrolledAccountsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnrolledAccountsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnrolledAccountsOutcome(ListEnrolledAccountsResult(outcome.result()));
	else
		return ListEnrolledAccountsOutcome(outcome.error());
}

void GovernanceClient::listEnrolledAccountsAsync(const ListEnrolledAccountsRequest& request, const ListEnrolledAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnrolledAccounts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListEnrolledAccountsOutcomeCallable GovernanceClient::listEnrolledAccountsCallable(const ListEnrolledAccountsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnrolledAccountsOutcome()>>(
			[this, request]()
			{
			return this->listEnrolledAccounts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListEvaluationMetadataOutcome GovernanceClient::listEvaluationMetadata(const ListEvaluationMetadataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEvaluationMetadataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEvaluationMetadataOutcome(ListEvaluationMetadataResult(outcome.result()));
	else
		return ListEvaluationMetadataOutcome(outcome.error());
}

void GovernanceClient::listEvaluationMetadataAsync(const ListEvaluationMetadataRequest& request, const ListEvaluationMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEvaluationMetadata(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListEvaluationMetadataOutcomeCallable GovernanceClient::listEvaluationMetadataCallable(const ListEvaluationMetadataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEvaluationMetadataOutcome()>>(
			[this, request]()
			{
			return this->listEvaluationMetadata(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListEvaluationMetricDetailsOutcome GovernanceClient::listEvaluationMetricDetails(const ListEvaluationMetricDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEvaluationMetricDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEvaluationMetricDetailsOutcome(ListEvaluationMetricDetailsResult(outcome.result()));
	else
		return ListEvaluationMetricDetailsOutcome(outcome.error());
}

void GovernanceClient::listEvaluationMetricDetailsAsync(const ListEvaluationMetricDetailsRequest& request, const ListEvaluationMetricDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEvaluationMetricDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListEvaluationMetricDetailsOutcomeCallable GovernanceClient::listEvaluationMetricDetailsCallable(const ListEvaluationMetricDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEvaluationMetricDetailsOutcome()>>(
			[this, request]()
			{
			return this->listEvaluationMetricDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListEvaluationResultsOutcome GovernanceClient::listEvaluationResults(const ListEvaluationResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEvaluationResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEvaluationResultsOutcome(ListEvaluationResultsResult(outcome.result()));
	else
		return ListEvaluationResultsOutcome(outcome.error());
}

void GovernanceClient::listEvaluationResultsAsync(const ListEvaluationResultsRequest& request, const ListEvaluationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEvaluationResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListEvaluationResultsOutcomeCallable GovernanceClient::listEvaluationResultsCallable(const ListEvaluationResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEvaluationResultsOutcome()>>(
			[this, request]()
			{
			return this->listEvaluationResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::ListEvaluationScoreHistoryOutcome GovernanceClient::listEvaluationScoreHistory(const ListEvaluationScoreHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEvaluationScoreHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEvaluationScoreHistoryOutcome(ListEvaluationScoreHistoryResult(outcome.result()));
	else
		return ListEvaluationScoreHistoryOutcome(outcome.error());
}

void GovernanceClient::listEvaluationScoreHistoryAsync(const ListEvaluationScoreHistoryRequest& request, const ListEvaluationScoreHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEvaluationScoreHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::ListEvaluationScoreHistoryOutcomeCallable GovernanceClient::listEvaluationScoreHistoryCallable(const ListEvaluationScoreHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEvaluationScoreHistoryOutcome()>>(
			[this, request]()
			{
			return this->listEvaluationScoreHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::RunEvaluationOutcome GovernanceClient::runEvaluation(const RunEvaluationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RunEvaluationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RunEvaluationOutcome(RunEvaluationResult(outcome.result()));
	else
		return RunEvaluationOutcome(outcome.error());
}

void GovernanceClient::runEvaluationAsync(const RunEvaluationRequest& request, const RunEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, runEvaluation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::RunEvaluationOutcomeCallable GovernanceClient::runEvaluationCallable(const RunEvaluationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RunEvaluationOutcome()>>(
			[this, request]()
			{
			return this->runEvaluation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GovernanceClient::UpdateAccountFactoryBaselineOutcome GovernanceClient::updateAccountFactoryBaseline(const UpdateAccountFactoryBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccountFactoryBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccountFactoryBaselineOutcome(UpdateAccountFactoryBaselineResult(outcome.result()));
	else
		return UpdateAccountFactoryBaselineOutcome(outcome.error());
}

void GovernanceClient::updateAccountFactoryBaselineAsync(const UpdateAccountFactoryBaselineRequest& request, const UpdateAccountFactoryBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccountFactoryBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GovernanceClient::UpdateAccountFactoryBaselineOutcomeCallable GovernanceClient::updateAccountFactoryBaselineCallable(const UpdateAccountFactoryBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccountFactoryBaselineOutcome()>>(
			[this, request]()
			{
			return this->updateAccountFactoryBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

