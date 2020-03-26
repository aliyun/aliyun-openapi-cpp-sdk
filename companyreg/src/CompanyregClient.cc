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

#include <alibabacloud/companyreg/CompanyregClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

namespace
{
	const std::string SERVICE_NAME = "companyreg";
}

CompanyregClient::CompanyregClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "companyreg");
}

CompanyregClient::CompanyregClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "companyreg");
}

CompanyregClient::CompanyregClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "companyreg");
}

CompanyregClient::~CompanyregClient()
{}

CompanyregClient::AcceptBookkeepingAuditResultOutcome CompanyregClient::acceptBookkeepingAuditResult(const AcceptBookkeepingAuditResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptBookkeepingAuditResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptBookkeepingAuditResultOutcome(AcceptBookkeepingAuditResultResult(outcome.result()));
	else
		return AcceptBookkeepingAuditResultOutcome(outcome.error());
}

void CompanyregClient::acceptBookkeepingAuditResultAsync(const AcceptBookkeepingAuditResultRequest& request, const AcceptBookkeepingAuditResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptBookkeepingAuditResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::AcceptBookkeepingAuditResultOutcomeCallable CompanyregClient::acceptBookkeepingAuditResultCallable(const AcceptBookkeepingAuditResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptBookkeepingAuditResultOutcome()>>(
			[this, request]()
			{
			return this->acceptBookkeepingAuditResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::AcceptBookkeepingDetailStatusChangeOutcome CompanyregClient::acceptBookkeepingDetailStatusChange(const AcceptBookkeepingDetailStatusChangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptBookkeepingDetailStatusChangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptBookkeepingDetailStatusChangeOutcome(AcceptBookkeepingDetailStatusChangeResult(outcome.result()));
	else
		return AcceptBookkeepingDetailStatusChangeOutcome(outcome.error());
}

void CompanyregClient::acceptBookkeepingDetailStatusChangeAsync(const AcceptBookkeepingDetailStatusChangeRequest& request, const AcceptBookkeepingDetailStatusChangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptBookkeepingDetailStatusChange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::AcceptBookkeepingDetailStatusChangeOutcomeCallable CompanyregClient::acceptBookkeepingDetailStatusChangeCallable(const AcceptBookkeepingDetailStatusChangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptBookkeepingDetailStatusChangeOutcome()>>(
			[this, request]()
			{
			return this->acceptBookkeepingDetailStatusChange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::AcceptPartnerNotificationOutcome CompanyregClient::acceptPartnerNotification(const AcceptPartnerNotificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AcceptPartnerNotificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AcceptPartnerNotificationOutcome(AcceptPartnerNotificationResult(outcome.result()));
	else
		return AcceptPartnerNotificationOutcome(outcome.error());
}

void CompanyregClient::acceptPartnerNotificationAsync(const AcceptPartnerNotificationRequest& request, const AcceptPartnerNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptPartnerNotification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::AcceptPartnerNotificationOutcomeCallable CompanyregClient::acceptPartnerNotificationCallable(const AcceptPartnerNotificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptPartnerNotificationOutcome()>>(
			[this, request]()
			{
			return this->acceptPartnerNotification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CloseIcpProduceOutcome CompanyregClient::closeIcpProduce(const CloseIcpProduceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseIcpProduceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseIcpProduceOutcome(CloseIcpProduceResult(outcome.result()));
	else
		return CloseIcpProduceOutcome(outcome.error());
}

void CompanyregClient::closeIcpProduceAsync(const CloseIcpProduceRequest& request, const CloseIcpProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeIcpProduce(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CloseIcpProduceOutcomeCallable CompanyregClient::closeIcpProduceCallable(const CloseIcpProduceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseIcpProduceOutcome()>>(
			[this, request]()
			{
			return this->closeIcpProduce(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CloseIntentionOutcome CompanyregClient::closeIntention(const CloseIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseIntentionOutcome(CloseIntentionResult(outcome.result()));
	else
		return CloseIntentionOutcome(outcome.error());
}

void CompanyregClient::closeIntentionAsync(const CloseIntentionRequest& request, const CloseIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CloseIntentionOutcomeCallable CompanyregClient::closeIntentionCallable(const CloseIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseIntentionOutcome()>>(
			[this, request]()
			{
			return this->closeIntention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ConfirmIntentionOutcome CompanyregClient::confirmIntention(const ConfirmIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmIntentionOutcome(ConfirmIntentionResult(outcome.result()));
	else
		return ConfirmIntentionOutcome(outcome.error());
}

void CompanyregClient::confirmIntentionAsync(const ConfirmIntentionRequest& request, const ConfirmIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ConfirmIntentionOutcomeCallable CompanyregClient::confirmIntentionCallable(const ConfirmIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmIntentionOutcome()>>(
			[this, request]()
			{
			return this->confirmIntention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ConfirmMaterialOutcome CompanyregClient::confirmMaterial(const ConfirmMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmMaterialOutcome(ConfirmMaterialResult(outcome.result()));
	else
		return ConfirmMaterialOutcome(outcome.error());
}

void CompanyregClient::confirmMaterialAsync(const ConfirmMaterialRequest& request, const ConfirmMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ConfirmMaterialOutcomeCallable CompanyregClient::confirmMaterialCallable(const ConfirmMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmMaterialOutcome()>>(
			[this, request]()
			{
			return this->confirmMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ConfirmTaxAmountOutcome CompanyregClient::confirmTaxAmount(const ConfirmTaxAmountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmTaxAmountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmTaxAmountOutcome(ConfirmTaxAmountResult(outcome.result()));
	else
		return ConfirmTaxAmountOutcome(outcome.error());
}

void CompanyregClient::confirmTaxAmountAsync(const ConfirmTaxAmountRequest& request, const ConfirmTaxAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmTaxAmount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ConfirmTaxAmountOutcomeCallable CompanyregClient::confirmTaxAmountCallable(const ConfirmTaxAmountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmTaxAmountOutcome()>>(
			[this, request]()
			{
			return this->confirmTaxAmount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CreateBookkeepingIntentionOutcome CompanyregClient::createBookkeepingIntention(const CreateBookkeepingIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBookkeepingIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBookkeepingIntentionOutcome(CreateBookkeepingIntentionResult(outcome.result()));
	else
		return CreateBookkeepingIntentionOutcome(outcome.error());
}

void CompanyregClient::createBookkeepingIntentionAsync(const CreateBookkeepingIntentionRequest& request, const CreateBookkeepingIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBookkeepingIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CreateBookkeepingIntentionOutcomeCallable CompanyregClient::createBookkeepingIntentionCallable(const CreateBookkeepingIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBookkeepingIntentionOutcome()>>(
			[this, request]()
			{
			return this->createBookkeepingIntention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GenerateCompanyRegUploadPolicyOutcome CompanyregClient::generateCompanyRegUploadPolicy(const GenerateCompanyRegUploadPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateCompanyRegUploadPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateCompanyRegUploadPolicyOutcome(GenerateCompanyRegUploadPolicyResult(outcome.result()));
	else
		return GenerateCompanyRegUploadPolicyOutcome(outcome.error());
}

void CompanyregClient::generateCompanyRegUploadPolicyAsync(const GenerateCompanyRegUploadPolicyRequest& request, const GenerateCompanyRegUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateCompanyRegUploadPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GenerateCompanyRegUploadPolicyOutcomeCallable CompanyregClient::generateCompanyRegUploadPolicyCallable(const GenerateCompanyRegUploadPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateCompanyRegUploadPolicyOutcome()>>(
			[this, request]()
			{
			return this->generateCompanyRegUploadPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GenerateUploadFilePolicyOutcome CompanyregClient::generateUploadFilePolicy(const GenerateUploadFilePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateUploadFilePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateUploadFilePolicyOutcome(GenerateUploadFilePolicyResult(outcome.result()));
	else
		return GenerateUploadFilePolicyOutcome(outcome.error());
}

void CompanyregClient::generateUploadFilePolicyAsync(const GenerateUploadFilePolicyRequest& request, const GenerateUploadFilePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUploadFilePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GenerateUploadFilePolicyOutcomeCallable CompanyregClient::generateUploadFilePolicyCallable(const GenerateUploadFilePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUploadFilePolicyOutcome()>>(
			[this, request]()
			{
			return this->generateUploadFilePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetCompanyRegOrderOutcome CompanyregClient::getCompanyRegOrder(const GetCompanyRegOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompanyRegOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompanyRegOrderOutcome(GetCompanyRegOrderResult(outcome.result()));
	else
		return GetCompanyRegOrderOutcome(outcome.error());
}

void CompanyregClient::getCompanyRegOrderAsync(const GetCompanyRegOrderRequest& request, const GetCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompanyRegOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetCompanyRegOrderOutcomeCallable CompanyregClient::getCompanyRegOrderCallable(const GetCompanyRegOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompanyRegOrderOutcome()>>(
			[this, request]()
			{
			return this->getCompanyRegOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListApplicationLogsOutcome CompanyregClient::listApplicationLogs(const ListApplicationLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationLogsOutcome(ListApplicationLogsResult(outcome.result()));
	else
		return ListApplicationLogsOutcome(outcome.error());
}

void CompanyregClient::listApplicationLogsAsync(const ListApplicationLogsRequest& request, const ListApplicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListApplicationLogsOutcomeCallable CompanyregClient::listApplicationLogsCallable(const ListApplicationLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationLogsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListBookkeepingStatisticsesOutcome CompanyregClient::listBookkeepingStatisticses(const ListBookkeepingStatisticsesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBookkeepingStatisticsesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBookkeepingStatisticsesOutcome(ListBookkeepingStatisticsesResult(outcome.result()));
	else
		return ListBookkeepingStatisticsesOutcome(outcome.error());
}

void CompanyregClient::listBookkeepingStatisticsesAsync(const ListBookkeepingStatisticsesRequest& request, const ListBookkeepingStatisticsesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBookkeepingStatisticses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListBookkeepingStatisticsesOutcomeCallable CompanyregClient::listBookkeepingStatisticsesCallable(const ListBookkeepingStatisticsesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBookkeepingStatisticsesOutcome()>>(
			[this, request]()
			{
			return this->listBookkeepingStatisticses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListBookkeepingSubjectBalancesOutcome CompanyregClient::listBookkeepingSubjectBalances(const ListBookkeepingSubjectBalancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBookkeepingSubjectBalancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBookkeepingSubjectBalancesOutcome(ListBookkeepingSubjectBalancesResult(outcome.result()));
	else
		return ListBookkeepingSubjectBalancesOutcome(outcome.error());
}

void CompanyregClient::listBookkeepingSubjectBalancesAsync(const ListBookkeepingSubjectBalancesRequest& request, const ListBookkeepingSubjectBalancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBookkeepingSubjectBalances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListBookkeepingSubjectBalancesOutcomeCallable CompanyregClient::listBookkeepingSubjectBalancesCallable(const ListBookkeepingSubjectBalancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBookkeepingSubjectBalancesOutcome()>>(
			[this, request]()
			{
			return this->listBookkeepingSubjectBalances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListBookkeepingsOutcome CompanyregClient::listBookkeepings(const ListBookkeepingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBookkeepingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBookkeepingsOutcome(ListBookkeepingsResult(outcome.result()));
	else
		return ListBookkeepingsOutcome(outcome.error());
}

void CompanyregClient::listBookkeepingsAsync(const ListBookkeepingsRequest& request, const ListBookkeepingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBookkeepings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListBookkeepingsOutcomeCallable CompanyregClient::listBookkeepingsCallable(const ListBookkeepingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBookkeepingsOutcome()>>(
			[this, request]()
			{
			return this->listBookkeepings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListCompanyRegConsultationsOutcome CompanyregClient::listCompanyRegConsultations(const ListCompanyRegConsultationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCompanyRegConsultationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCompanyRegConsultationsOutcome(ListCompanyRegConsultationsResult(outcome.result()));
	else
		return ListCompanyRegConsultationsOutcome(outcome.error());
}

void CompanyregClient::listCompanyRegConsultationsAsync(const ListCompanyRegConsultationsRequest& request, const ListCompanyRegConsultationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCompanyRegConsultations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListCompanyRegConsultationsOutcomeCallable CompanyregClient::listCompanyRegConsultationsCallable(const ListCompanyRegConsultationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCompanyRegConsultationsOutcome()>>(
			[this, request]()
			{
			return this->listCompanyRegConsultations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListCompanyRegOrdersOutcome CompanyregClient::listCompanyRegOrders(const ListCompanyRegOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCompanyRegOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCompanyRegOrdersOutcome(ListCompanyRegOrdersResult(outcome.result()));
	else
		return ListCompanyRegOrdersOutcome(outcome.error());
}

void CompanyregClient::listCompanyRegOrdersAsync(const ListCompanyRegOrdersRequest& request, const ListCompanyRegOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCompanyRegOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListCompanyRegOrdersOutcomeCallable CompanyregClient::listCompanyRegOrdersCallable(const ListCompanyRegOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCompanyRegOrdersOutcome()>>(
			[this, request]()
			{
			return this->listCompanyRegOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListIcpApplicationsOutcome CompanyregClient::listIcpApplications(const ListIcpApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIcpApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIcpApplicationsOutcome(ListIcpApplicationsResult(outcome.result()));
	else
		return ListIcpApplicationsOutcome(outcome.error());
}

void CompanyregClient::listIcpApplicationsAsync(const ListIcpApplicationsRequest& request, const ListIcpApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIcpApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListIcpApplicationsOutcomeCallable CompanyregClient::listIcpApplicationsCallable(const ListIcpApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIcpApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listIcpApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ProcessCompanyRegOrderOutcome CompanyregClient::processCompanyRegOrder(const ProcessCompanyRegOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProcessCompanyRegOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProcessCompanyRegOrderOutcome(ProcessCompanyRegOrderResult(outcome.result()));
	else
		return ProcessCompanyRegOrderOutcome(outcome.error());
}

void CompanyregClient::processCompanyRegOrderAsync(const ProcessCompanyRegOrderRequest& request, const ProcessCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, processCompanyRegOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ProcessCompanyRegOrderOutcomeCallable CompanyregClient::processCompanyRegOrderCallable(const ProcessCompanyRegOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProcessCompanyRegOrderOutcome()>>(
			[this, request]()
			{
			return this->processCompanyRegOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryCommunicationLogsOutcome CompanyregClient::queryCommunicationLogs(const QueryCommunicationLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCommunicationLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCommunicationLogsOutcome(QueryCommunicationLogsResult(outcome.result()));
	else
		return QueryCommunicationLogsOutcome(outcome.error());
}

void CompanyregClient::queryCommunicationLogsAsync(const QueryCommunicationLogsRequest& request, const QueryCommunicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCommunicationLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryCommunicationLogsOutcomeCallable CompanyregClient::queryCommunicationLogsCallable(const QueryCommunicationLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCommunicationLogsOutcome()>>(
			[this, request]()
			{
			return this->queryCommunicationLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryIntentionListOutcome CompanyregClient::queryIntentionList(const QueryIntentionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIntentionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIntentionListOutcome(QueryIntentionListResult(outcome.result()));
	else
		return QueryIntentionListOutcome(outcome.error());
}

void CompanyregClient::queryIntentionListAsync(const QueryIntentionListRequest& request, const QueryIntentionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIntentionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryIntentionListOutcomeCallable CompanyregClient::queryIntentionListCallable(const QueryIntentionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIntentionListOutcome()>>(
			[this, request]()
			{
			return this->queryIntentionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryTradeIntentionUserListOutcome CompanyregClient::queryTradeIntentionUserList(const QueryTradeIntentionUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeIntentionUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeIntentionUserListOutcome(QueryTradeIntentionUserListResult(outcome.result()));
	else
		return QueryTradeIntentionUserListOutcome(outcome.error());
}

void CompanyregClient::queryTradeIntentionUserListAsync(const QueryTradeIntentionUserListRequest& request, const QueryTradeIntentionUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeIntentionUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryTradeIntentionUserListOutcomeCallable CompanyregClient::queryTradeIntentionUserListCallable(const QueryTradeIntentionUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeIntentionUserListOutcome()>>(
			[this, request]()
			{
			return this->queryTradeIntentionUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::RefuseMaterialOutcome CompanyregClient::refuseMaterial(const RefuseMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefuseMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefuseMaterialOutcome(RefuseMaterialResult(outcome.result()));
	else
		return RefuseMaterialOutcome(outcome.error());
}

void CompanyregClient::refuseMaterialAsync(const RefuseMaterialRequest& request, const RefuseMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refuseMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::RefuseMaterialOutcomeCallable CompanyregClient::refuseMaterialCallable(const RefuseMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefuseMaterialOutcome()>>(
			[this, request]()
			{
			return this->refuseMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::RejectIcpIntentionOutcome CompanyregClient::rejectIcpIntention(const RejectIcpIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectIcpIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectIcpIntentionOutcome(RejectIcpIntentionResult(outcome.result()));
	else
		return RejectIcpIntentionOutcome(outcome.error());
}

void CompanyregClient::rejectIcpIntentionAsync(const RejectIcpIntentionRequest& request, const RejectIcpIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectIcpIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::RejectIcpIntentionOutcomeCallable CompanyregClient::rejectIcpIntentionCallable(const RejectIcpIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectIcpIntentionOutcome()>>(
			[this, request]()
			{
			return this->rejectIcpIntention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SendVcodeOutcome CompanyregClient::sendVcode(const SendVcodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVcodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVcodeOutcome(SendVcodeResult(outcome.result()));
	else
		return SendVcodeOutcome(outcome.error());
}

void CompanyregClient::sendVcodeAsync(const SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVcode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SendVcodeOutcomeCallable CompanyregClient::sendVcodeCallable(const SendVcodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVcodeOutcome()>>(
			[this, request]()
			{
			return this->sendVcode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitCommunicationNoteOutcome CompanyregClient::submitCommunicationNote(const SubmitCommunicationNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCommunicationNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCommunicationNoteOutcome(SubmitCommunicationNoteResult(outcome.result()));
	else
		return SubmitCommunicationNoteOutcome(outcome.error());
}

void CompanyregClient::submitCommunicationNoteAsync(const SubmitCommunicationNoteRequest& request, const SubmitCommunicationNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCommunicationNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitCommunicationNoteOutcomeCallable CompanyregClient::submitCommunicationNoteCallable(const SubmitCommunicationNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCommunicationNoteOutcome()>>(
			[this, request]()
			{
			return this->submitCommunicationNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitConsultationOutcome CompanyregClient::submitConsultation(const SubmitConsultationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitConsultationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitConsultationOutcome(SubmitConsultationResult(outcome.result()));
	else
		return SubmitConsultationOutcome(outcome.error());
}

void CompanyregClient::submitConsultationAsync(const SubmitConsultationRequest& request, const SubmitConsultationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitConsultation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitConsultationOutcomeCallable CompanyregClient::submitConsultationCallable(const SubmitConsultationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitConsultationOutcome()>>(
			[this, request]()
			{
			return this->submitConsultation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitIcpSolutionOutcome CompanyregClient::submitIcpSolution(const SubmitIcpSolutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitIcpSolutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitIcpSolutionOutcome(SubmitIcpSolutionResult(outcome.result()));
	else
		return SubmitIcpSolutionOutcome(outcome.error());
}

void CompanyregClient::submitIcpSolutionAsync(const SubmitIcpSolutionRequest& request, const SubmitIcpSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitIcpSolution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitIcpSolutionOutcomeCallable CompanyregClient::submitIcpSolutionCallable(const SubmitIcpSolutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitIcpSolutionOutcome()>>(
			[this, request]()
			{
			return this->submitIcpSolution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::UpdateBookkeepingOrgOutcome CompanyregClient::updateBookkeepingOrg(const UpdateBookkeepingOrgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBookkeepingOrgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBookkeepingOrgOutcome(UpdateBookkeepingOrgResult(outcome.result()));
	else
		return UpdateBookkeepingOrgOutcome(outcome.error());
}

void CompanyregClient::updateBookkeepingOrgAsync(const UpdateBookkeepingOrgRequest& request, const UpdateBookkeepingOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBookkeepingOrg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UpdateBookkeepingOrgOutcomeCallable CompanyregClient::updateBookkeepingOrgCallable(const UpdateBookkeepingOrgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBookkeepingOrgOutcome()>>(
			[this, request]()
			{
			return this->updateBookkeepingOrg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::UploadIcpBasicMaterialOutcome CompanyregClient::uploadIcpBasicMaterial(const UploadIcpBasicMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadIcpBasicMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadIcpBasicMaterialOutcome(UploadIcpBasicMaterialResult(outcome.result()));
	else
		return UploadIcpBasicMaterialOutcome(outcome.error());
}

void CompanyregClient::uploadIcpBasicMaterialAsync(const UploadIcpBasicMaterialRequest& request, const UploadIcpBasicMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadIcpBasicMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UploadIcpBasicMaterialOutcomeCallable CompanyregClient::uploadIcpBasicMaterialCallable(const UploadIcpBasicMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadIcpBasicMaterialOutcome()>>(
			[this, request]()
			{
			return this->uploadIcpBasicMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::WriteCommunicationLogOutcome CompanyregClient::writeCommunicationLog(const WriteCommunicationLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WriteCommunicationLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WriteCommunicationLogOutcome(WriteCommunicationLogResult(outcome.result()));
	else
		return WriteCommunicationLogOutcome(outcome.error());
}

void CompanyregClient::writeCommunicationLogAsync(const WriteCommunicationLogRequest& request, const WriteCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeCommunicationLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::WriteCommunicationLogOutcomeCallable CompanyregClient::writeCommunicationLogCallable(const WriteCommunicationLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteCommunicationLogOutcome()>>(
			[this, request]()
			{
			return this->writeCommunicationLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

