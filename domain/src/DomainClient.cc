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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DomainClient::DomainClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DomainClient::DomainClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DomainClient::~DomainClient()
{}

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

DomainClient::QueryBookingDomainInfoOutcome DomainClient::queryBookingDomainInfo(const QueryBookingDomainInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBookingDomainInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBookingDomainInfoOutcome(QueryBookingDomainInfoResult(outcome.result()));
	else
		return QueryBookingDomainInfoOutcome(outcome.error());
}

void DomainClient::queryBookingDomainInfoAsync(const QueryBookingDomainInfoRequest& request, const QueryBookingDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBookingDomainInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryBookingDomainInfoOutcomeCallable DomainClient::queryBookingDomainInfoCallable(const QueryBookingDomainInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBookingDomainInfoOutcome()>>(
			[this, request]()
			{
			return this->queryBookingDomainInfo(request);
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

DomainClient::QueryAuctionsOutcome DomainClient::queryAuctions(const QueryAuctionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAuctionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAuctionsOutcome(QueryAuctionsResult(outcome.result()));
	else
		return QueryAuctionsOutcome(outcome.error());
}

void DomainClient::queryAuctionsAsync(const QueryAuctionsRequest& request, const QueryAuctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAuctions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryAuctionsOutcomeCallable DomainClient::queryAuctionsCallable(const QueryAuctionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAuctionsOutcome()>>(
			[this, request]()
			{
			return this->queryAuctions(request);
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

DomainClient::QueryBidRecordsOutcome DomainClient::queryBidRecords(const QueryBidRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBidRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBidRecordsOutcome(QueryBidRecordsResult(outcome.result()));
	else
		return QueryBidRecordsOutcome(outcome.error());
}

void DomainClient::queryBidRecordsAsync(const QueryBidRecordsRequest& request, const QueryBidRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBidRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryBidRecordsOutcomeCallable DomainClient::queryBidRecordsCallable(const QueryBidRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBidRecordsOutcome()>>(
			[this, request]()
			{
			return this->queryBidRecords(request);
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

DomainClient::ReserveDomainOutcome DomainClient::reserveDomain(const ReserveDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReserveDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReserveDomainOutcome(ReserveDomainResult(outcome.result()));
	else
		return ReserveDomainOutcome(outcome.error());
}

void DomainClient::reserveDomainAsync(const ReserveDomainRequest& request, const ReserveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reserveDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::ReserveDomainOutcomeCallable DomainClient::reserveDomainCallable(const ReserveDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReserveDomainOutcome()>>(
			[this, request]()
			{
			return this->reserveDomain(request);
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

DomainClient::GetReserveDomainUrlOutcome DomainClient::getReserveDomainUrl(const GetReserveDomainUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetReserveDomainUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetReserveDomainUrlOutcome(GetReserveDomainUrlResult(outcome.result()));
	else
		return GetReserveDomainUrlOutcome(outcome.error());
}

void DomainClient::getReserveDomainUrlAsync(const GetReserveDomainUrlRequest& request, const GetReserveDomainUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getReserveDomainUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::GetReserveDomainUrlOutcomeCallable DomainClient::getReserveDomainUrlCallable(const GetReserveDomainUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetReserveDomainUrlOutcome()>>(
			[this, request]()
			{
			return this->getReserveDomainUrl(request);
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

DomainClient::BidDomainOutcome DomainClient::bidDomain(const BidDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BidDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BidDomainOutcome(BidDomainResult(outcome.result()));
	else
		return BidDomainOutcome(outcome.error());
}

void DomainClient::bidDomainAsync(const BidDomainRequest& request, const BidDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bidDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::BidDomainOutcomeCallable DomainClient::bidDomainCallable(const BidDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BidDomainOutcome()>>(
			[this, request]()
			{
			return this->bidDomain(request);
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

DomainClient::QueryAuctionDetailOutcome DomainClient::queryAuctionDetail(const QueryAuctionDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAuctionDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAuctionDetailOutcome(QueryAuctionDetailResult(outcome.result()));
	else
		return QueryAuctionDetailOutcome(outcome.error());
}

void DomainClient::queryAuctionDetailAsync(const QueryAuctionDetailRequest& request, const QueryAuctionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAuctionDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DomainClient::QueryAuctionDetailOutcomeCallable DomainClient::queryAuctionDetailCallable(const QueryAuctionDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAuctionDetailOutcome()>>(
			[this, request]()
			{
			return this->queryAuctionDetail(request);
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

