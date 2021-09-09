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

CompanyregClient::BindProduceAuthorizationOutcome CompanyregClient::bindProduceAuthorization(const BindProduceAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindProduceAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindProduceAuthorizationOutcome(BindProduceAuthorizationResult(outcome.result()));
	else
		return BindProduceAuthorizationOutcome(outcome.error());
}

void CompanyregClient::bindProduceAuthorizationAsync(const BindProduceAuthorizationRequest& request, const BindProduceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindProduceAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::BindProduceAuthorizationOutcomeCallable CompanyregClient::bindProduceAuthorizationCallable(const BindProduceAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindProduceAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->bindProduceAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CheckCompanyRegOutcome CompanyregClient::checkCompanyReg(const CheckCompanyRegRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCompanyRegOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCompanyRegOutcome(CheckCompanyRegResult(outcome.result()));
	else
		return CheckCompanyRegOutcome(outcome.error());
}

void CompanyregClient::checkCompanyRegAsync(const CheckCompanyRegRequest& request, const CheckCompanyRegAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCompanyReg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CheckCompanyRegOutcomeCallable CompanyregClient::checkCompanyRegCallable(const CheckCompanyRegRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCompanyRegOutcome()>>(
			[this, request]()
			{
			return this->checkCompanyReg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CheckCopyPayrollOutcome CompanyregClient::checkCopyPayroll(const CheckCopyPayrollRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCopyPayrollOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCopyPayrollOutcome(CheckCopyPayrollResult(outcome.result()));
	else
		return CheckCopyPayrollOutcome(outcome.error());
}

void CompanyregClient::checkCopyPayrollAsync(const CheckCopyPayrollRequest& request, const CheckCopyPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCopyPayroll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CheckCopyPayrollOutcomeCallable CompanyregClient::checkCopyPayrollCallable(const CheckCopyPayrollRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCopyPayrollOutcome()>>(
			[this, request]()
			{
			return this->checkCopyPayroll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CheckSavePayrollOutcome CompanyregClient::checkSavePayroll(const CheckSavePayrollRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSavePayrollOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSavePayrollOutcome(CheckSavePayrollResult(outcome.result()));
	else
		return CheckSavePayrollOutcome(outcome.error());
}

void CompanyregClient::checkSavePayrollAsync(const CheckSavePayrollRequest& request, const CheckSavePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSavePayroll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CheckSavePayrollOutcomeCallable CompanyregClient::checkSavePayrollCallable(const CheckSavePayrollRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSavePayrollOutcome()>>(
			[this, request]()
			{
			return this->checkSavePayroll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CheckSavePayrollDetailOutcome CompanyregClient::checkSavePayrollDetail(const CheckSavePayrollDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSavePayrollDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSavePayrollDetailOutcome(CheckSavePayrollDetailResult(outcome.result()));
	else
		return CheckSavePayrollDetailOutcome(outcome.error());
}

void CompanyregClient::checkSavePayrollDetailAsync(const CheckSavePayrollDetailRequest& request, const CheckSavePayrollDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSavePayrollDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CheckSavePayrollDetailOutcomeCallable CompanyregClient::checkSavePayrollDetailCallable(const CheckSavePayrollDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSavePayrollDetailOutcome()>>(
			[this, request]()
			{
			return this->checkSavePayrollDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ClearTrailDataOutcome CompanyregClient::clearTrailData(const ClearTrailDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClearTrailDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClearTrailDataOutcome(ClearTrailDataResult(outcome.result()));
	else
		return ClearTrailDataOutcome(outcome.error());
}

void CompanyregClient::clearTrailDataAsync(const ClearTrailDataRequest& request, const ClearTrailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clearTrailData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ClearTrailDataOutcomeCallable CompanyregClient::clearTrailDataCallable(const ClearTrailDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClearTrailDataOutcome()>>(
			[this, request]()
			{
			return this->clearTrailData(request);
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

CompanyregClient::CloseIntentionForPartnerOutcome CompanyregClient::closeIntentionForPartner(const CloseIntentionForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseIntentionForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseIntentionForPartnerOutcome(CloseIntentionForPartnerResult(outcome.result()));
	else
		return CloseIntentionForPartnerOutcome(outcome.error());
}

void CompanyregClient::closeIntentionForPartnerAsync(const CloseIntentionForPartnerRequest& request, const CloseIntentionForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeIntentionForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CloseIntentionForPartnerOutcomeCallable CompanyregClient::closeIntentionForPartnerCallable(const CloseIntentionForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseIntentionForPartnerOutcome()>>(
			[this, request]()
			{
			return this->closeIntentionForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CloseUserIntentionOutcome CompanyregClient::closeUserIntention(const CloseUserIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseUserIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseUserIntentionOutcome(CloseUserIntentionResult(outcome.result()));
	else
		return CloseUserIntentionOutcome(outcome.error());
}

void CompanyregClient::closeUserIntentionAsync(const CloseUserIntentionRequest& request, const CloseUserIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeUserIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CloseUserIntentionOutcomeCallable CompanyregClient::closeUserIntentionCallable(const CloseUserIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseUserIntentionOutcome()>>(
			[this, request]()
			{
			return this->closeUserIntention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ConfirmIcpIntentionOutcome CompanyregClient::confirmIcpIntention(const ConfirmIcpIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmIcpIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmIcpIntentionOutcome(ConfirmIcpIntentionResult(outcome.result()));
	else
		return ConfirmIcpIntentionOutcome(outcome.error());
}

void CompanyregClient::confirmIcpIntentionAsync(const ConfirmIcpIntentionRequest& request, const ConfirmIcpIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmIcpIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ConfirmIcpIntentionOutcomeCallable CompanyregClient::confirmIcpIntentionCallable(const ConfirmIcpIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmIcpIntentionOutcome()>>(
			[this, request]()
			{
			return this->confirmIcpIntention(request);
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

CompanyregClient::ConvertFeeOutcome CompanyregClient::convertFee(const ConvertFeeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertFeeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertFeeOutcome(ConvertFeeResult(outcome.result()));
	else
		return ConvertFeeOutcome(outcome.error());
}

void CompanyregClient::convertFeeAsync(const ConvertFeeRequest& request, const ConvertFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertFee(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ConvertFeeOutcomeCallable CompanyregClient::convertFeeCallable(const ConvertFeeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertFeeOutcome()>>(
			[this, request]()
			{
			return this->convertFee(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ConvertInvoiceOutcome CompanyregClient::convertInvoice(const ConvertInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertInvoiceOutcome(ConvertInvoiceResult(outcome.result()));
	else
		return ConvertInvoiceOutcome(outcome.error());
}

void CompanyregClient::convertInvoiceAsync(const ConvertInvoiceRequest& request, const ConvertInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ConvertInvoiceOutcomeCallable CompanyregClient::convertInvoiceCallable(const ConvertInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertInvoiceOutcome()>>(
			[this, request]()
			{
			return this->convertInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CopyPayrollOutcome CompanyregClient::copyPayroll(const CopyPayrollRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyPayrollOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyPayrollOutcome(CopyPayrollResult(outcome.result()));
	else
		return CopyPayrollOutcome(outcome.error());
}

void CompanyregClient::copyPayrollAsync(const CopyPayrollRequest& request, const CopyPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyPayroll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CopyPayrollOutcomeCallable CompanyregClient::copyPayrollCallable(const CopyPayrollRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyPayrollOutcome()>>(
			[this, request]()
			{
			return this->copyPayroll(request);
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

CompanyregClient::CreateBusinessOpportunityOutcome CompanyregClient::createBusinessOpportunity(const CreateBusinessOpportunityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBusinessOpportunityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBusinessOpportunityOutcome(CreateBusinessOpportunityResult(outcome.result()));
	else
		return CreateBusinessOpportunityOutcome(outcome.error());
}

void CompanyregClient::createBusinessOpportunityAsync(const CreateBusinessOpportunityRequest& request, const CreateBusinessOpportunityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBusinessOpportunity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CreateBusinessOpportunityOutcomeCallable CompanyregClient::createBusinessOpportunityCallable(const CreateBusinessOpportunityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBusinessOpportunityOutcome()>>(
			[this, request]()
			{
			return this->createBusinessOpportunity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::CreateProduceForPartnerOutcome CompanyregClient::createProduceForPartner(const CreateProduceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateProduceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateProduceForPartnerOutcome(CreateProduceForPartnerResult(outcome.result()));
	else
		return CreateProduceForPartnerOutcome(outcome.error());
}

void CompanyregClient::createProduceForPartnerAsync(const CreateProduceForPartnerRequest& request, const CreateProduceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createProduceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::CreateProduceForPartnerOutcomeCallable CompanyregClient::createProduceForPartnerCallable(const CreateProduceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateProduceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->createProduceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::DeleteFeeOutcome CompanyregClient::deleteFee(const DeleteFeeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFeeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFeeOutcome(DeleteFeeResult(outcome.result()));
	else
		return DeleteFeeOutcome(outcome.error());
}

void CompanyregClient::deleteFeeAsync(const DeleteFeeRequest& request, const DeleteFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFee(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::DeleteFeeOutcomeCallable CompanyregClient::deleteFeeCallable(const DeleteFeeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFeeOutcome()>>(
			[this, request]()
			{
			return this->deleteFee(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::DeleteInvoiceOutcome CompanyregClient::deleteInvoice(const DeleteInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInvoiceOutcome(DeleteInvoiceResult(outcome.result()));
	else
		return DeleteInvoiceOutcome(outcome.error());
}

void CompanyregClient::deleteInvoiceAsync(const DeleteInvoiceRequest& request, const DeleteInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::DeleteInvoiceOutcomeCallable CompanyregClient::deleteInvoiceCallable(const DeleteInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInvoiceOutcome()>>(
			[this, request]()
			{
			return this->deleteInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::DeletePayrollOutcome CompanyregClient::deletePayroll(const DeletePayrollRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePayrollOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePayrollOutcome(DeletePayrollResult(outcome.result()));
	else
		return DeletePayrollOutcome(outcome.error());
}

void CompanyregClient::deletePayrollAsync(const DeletePayrollRequest& request, const DeletePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePayroll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::DeletePayrollOutcomeCallable CompanyregClient::deletePayrollCallable(const DeletePayrollRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePayrollOutcome()>>(
			[this, request]()
			{
			return this->deletePayroll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::DescribePartnerConfigOutcome CompanyregClient::describePartnerConfig(const DescribePartnerConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePartnerConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePartnerConfigOutcome(DescribePartnerConfigResult(outcome.result()));
	else
		return DescribePartnerConfigOutcome(outcome.error());
}

void CompanyregClient::describePartnerConfigAsync(const DescribePartnerConfigRequest& request, const DescribePartnerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePartnerConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::DescribePartnerConfigOutcomeCallable CompanyregClient::describePartnerConfigCallable(const DescribePartnerConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePartnerConfigOutcome()>>(
			[this, request]()
			{
			return this->describePartnerConfig(request);
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

CompanyregClient::GetAlipayUrlOutcome CompanyregClient::getAlipayUrl(const GetAlipayUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAlipayUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAlipayUrlOutcome(GetAlipayUrlResult(outcome.result()));
	else
		return GetAlipayUrlOutcome(outcome.error());
}

void CompanyregClient::getAlipayUrlAsync(const GetAlipayUrlRequest& request, const GetAlipayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAlipayUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetAlipayUrlOutcomeCallable CompanyregClient::getAlipayUrlCallable(const GetAlipayUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAlipayUrlOutcome()>>(
			[this, request]()
			{
			return this->getAlipayUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetBalanceSheetInfoOutcome CompanyregClient::getBalanceSheetInfo(const GetBalanceSheetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBalanceSheetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBalanceSheetInfoOutcome(GetBalanceSheetInfoResult(outcome.result()));
	else
		return GetBalanceSheetInfoOutcome(outcome.error());
}

void CompanyregClient::getBalanceSheetInfoAsync(const GetBalanceSheetInfoRequest& request, const GetBalanceSheetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBalanceSheetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetBalanceSheetInfoOutcomeCallable CompanyregClient::getBalanceSheetInfoCallable(const GetBalanceSheetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBalanceSheetInfoOutcome()>>(
			[this, request]()
			{
			return this->getBalanceSheetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetCashFlowInfoOutcome CompanyregClient::getCashFlowInfo(const GetCashFlowInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCashFlowInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCashFlowInfoOutcome(GetCashFlowInfoResult(outcome.result()));
	else
		return GetCashFlowInfoOutcome(outcome.error());
}

void CompanyregClient::getCashFlowInfoAsync(const GetCashFlowInfoRequest& request, const GetCashFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCashFlowInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetCashFlowInfoOutcomeCallable CompanyregClient::getCashFlowInfoCallable(const GetCashFlowInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCashFlowInfoOutcome()>>(
			[this, request]()
			{
			return this->getCashFlowInfo(request);
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

CompanyregClient::GetEnterprisesInfoOutcome CompanyregClient::getEnterprisesInfo(const GetEnterprisesInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEnterprisesInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEnterprisesInfoOutcome(GetEnterprisesInfoResult(outcome.result()));
	else
		return GetEnterprisesInfoOutcome(outcome.error());
}

void CompanyregClient::getEnterprisesInfoAsync(const GetEnterprisesInfoRequest& request, const GetEnterprisesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEnterprisesInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetEnterprisesInfoOutcomeCallable CompanyregClient::getEnterprisesInfoCallable(const GetEnterprisesInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEnterprisesInfoOutcome()>>(
			[this, request]()
			{
			return this->getEnterprisesInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetFeeOutcome CompanyregClient::getFee(const GetFeeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFeeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFeeOutcome(GetFeeResult(outcome.result()));
	else
		return GetFeeOutcome(outcome.error());
}

void CompanyregClient::getFeeAsync(const GetFeeRequest& request, const GetFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFee(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetFeeOutcomeCallable CompanyregClient::getFeeCallable(const GetFeeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFeeOutcome()>>(
			[this, request]()
			{
			return this->getFee(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetHomePageOutcome CompanyregClient::getHomePage(const GetHomePageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHomePageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHomePageOutcome(GetHomePageResult(outcome.result()));
	else
		return GetHomePageOutcome(outcome.error());
}

void CompanyregClient::getHomePageAsync(const GetHomePageRequest& request, const GetHomePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHomePage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetHomePageOutcomeCallable CompanyregClient::getHomePageCallable(const GetHomePageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHomePageOutcome()>>(
			[this, request]()
			{
			return this->getHomePage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetIncomeStatementInfoOutcome CompanyregClient::getIncomeStatementInfo(const GetIncomeStatementInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIncomeStatementInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIncomeStatementInfoOutcome(GetIncomeStatementInfoResult(outcome.result()));
	else
		return GetIncomeStatementInfoOutcome(outcome.error());
}

void CompanyregClient::getIncomeStatementInfoAsync(const GetIncomeStatementInfoRequest& request, const GetIncomeStatementInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIncomeStatementInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetIncomeStatementInfoOutcomeCallable CompanyregClient::getIncomeStatementInfoCallable(const GetIncomeStatementInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIncomeStatementInfoOutcome()>>(
			[this, request]()
			{
			return this->getIncomeStatementInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetIndustryCommerceInfoOutcome CompanyregClient::getIndustryCommerceInfo(const GetIndustryCommerceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIndustryCommerceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIndustryCommerceInfoOutcome(GetIndustryCommerceInfoResult(outcome.result()));
	else
		return GetIndustryCommerceInfoOutcome(outcome.error());
}

void CompanyregClient::getIndustryCommerceInfoAsync(const GetIndustryCommerceInfoRequest& request, const GetIndustryCommerceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIndustryCommerceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetIndustryCommerceInfoOutcomeCallable CompanyregClient::getIndustryCommerceInfoCallable(const GetIndustryCommerceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIndustryCommerceInfoOutcome()>>(
			[this, request]()
			{
			return this->getIndustryCommerceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetInitFlowOutcome CompanyregClient::getInitFlow(const GetInitFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInitFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInitFlowOutcome(GetInitFlowResult(outcome.result()));
	else
		return GetInitFlowOutcome(outcome.error());
}

void CompanyregClient::getInitFlowAsync(const GetInitFlowRequest& request, const GetInitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInitFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetInitFlowOutcomeCallable CompanyregClient::getInitFlowCallable(const GetInitFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInitFlowOutcome()>>(
			[this, request]()
			{
			return this->getInitFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetInvoiceInfoOutcome CompanyregClient::getInvoiceInfo(const GetInvoiceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInvoiceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInvoiceInfoOutcome(GetInvoiceInfoResult(outcome.result()));
	else
		return GetInvoiceInfoOutcome(outcome.error());
}

void CompanyregClient::getInvoiceInfoAsync(const GetInvoiceInfoRequest& request, const GetInvoiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInvoiceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetInvoiceInfoOutcomeCallable CompanyregClient::getInvoiceInfoCallable(const GetInvoiceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInvoiceInfoOutcome()>>(
			[this, request]()
			{
			return this->getInvoiceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetLastMonthInvoiceCountOutcome CompanyregClient::getLastMonthInvoiceCount(const GetLastMonthInvoiceCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLastMonthInvoiceCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLastMonthInvoiceCountOutcome(GetLastMonthInvoiceCountResult(outcome.result()));
	else
		return GetLastMonthInvoiceCountOutcome(outcome.error());
}

void CompanyregClient::getLastMonthInvoiceCountAsync(const GetLastMonthInvoiceCountRequest& request, const GetLastMonthInvoiceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLastMonthInvoiceCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetLastMonthInvoiceCountOutcomeCallable CompanyregClient::getLastMonthInvoiceCountCallable(const GetLastMonthInvoiceCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLastMonthInvoiceCountOutcome()>>(
			[this, request]()
			{
			return this->getLastMonthInvoiceCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetNoticeOutcome CompanyregClient::getNotice(const GetNoticeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNoticeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNoticeOutcome(GetNoticeResult(outcome.result()));
	else
		return GetNoticeOutcome(outcome.error());
}

void CompanyregClient::getNoticeAsync(const GetNoticeRequest& request, const GetNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNotice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetNoticeOutcomeCallable CompanyregClient::getNoticeCallable(const GetNoticeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNoticeOutcome()>>(
			[this, request]()
			{
			return this->getNotice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetOssStsOutcome CompanyregClient::getOssSts(const GetOssStsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOssStsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOssStsOutcome(GetOssStsResult(outcome.result()));
	else
		return GetOssStsOutcome(outcome.error());
}

void CompanyregClient::getOssStsAsync(const GetOssStsRequest& request, const GetOssStsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOssSts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetOssStsOutcomeCallable CompanyregClient::getOssStsCallable(const GetOssStsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOssStsOutcome()>>(
			[this, request]()
			{
			return this->getOssSts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetPayrollInfoOutcome CompanyregClient::getPayrollInfo(const GetPayrollInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPayrollInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPayrollInfoOutcome(GetPayrollInfoResult(outcome.result()));
	else
		return GetPayrollInfoOutcome(outcome.error());
}

void CompanyregClient::getPayrollInfoAsync(const GetPayrollInfoRequest& request, const GetPayrollInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPayrollInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetPayrollInfoOutcomeCallable CompanyregClient::getPayrollInfoCallable(const GetPayrollInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPayrollInfoOutcome()>>(
			[this, request]()
			{
			return this->getPayrollInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetPayrollSettingOutcome CompanyregClient::getPayrollSetting(const GetPayrollSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPayrollSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPayrollSettingOutcome(GetPayrollSettingResult(outcome.result()));
	else
		return GetPayrollSettingOutcome(outcome.error());
}

void CompanyregClient::getPayrollSettingAsync(const GetPayrollSettingRequest& request, const GetPayrollSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPayrollSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetPayrollSettingOutcomeCallable CompanyregClient::getPayrollSettingCallable(const GetPayrollSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPayrollSettingOutcome()>>(
			[this, request]()
			{
			return this->getPayrollSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetPeriodInfoOutcome CompanyregClient::getPeriodInfo(const GetPeriodInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPeriodInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPeriodInfoOutcome(GetPeriodInfoResult(outcome.result()));
	else
		return GetPeriodInfoOutcome(outcome.error());
}

void CompanyregClient::getPeriodInfoAsync(const GetPeriodInfoRequest& request, const GetPeriodInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPeriodInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetPeriodInfoOutcomeCallable CompanyregClient::getPeriodInfoCallable(const GetPeriodInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPeriodInfoOutcome()>>(
			[this, request]()
			{
			return this->getPeriodInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetQuarterCashFlowInfoOutcome CompanyregClient::getQuarterCashFlowInfo(const GetQuarterCashFlowInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuarterCashFlowInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuarterCashFlowInfoOutcome(GetQuarterCashFlowInfoResult(outcome.result()));
	else
		return GetQuarterCashFlowInfoOutcome(outcome.error());
}

void CompanyregClient::getQuarterCashFlowInfoAsync(const GetQuarterCashFlowInfoRequest& request, const GetQuarterCashFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuarterCashFlowInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetQuarterCashFlowInfoOutcomeCallable CompanyregClient::getQuarterCashFlowInfoCallable(const GetQuarterCashFlowInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuarterCashFlowInfoOutcome()>>(
			[this, request]()
			{
			return this->getQuarterCashFlowInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetQuarterIncomeStatementInfoOutcome CompanyregClient::getQuarterIncomeStatementInfo(const GetQuarterIncomeStatementInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuarterIncomeStatementInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuarterIncomeStatementInfoOutcome(GetQuarterIncomeStatementInfoResult(outcome.result()));
	else
		return GetQuarterIncomeStatementInfoOutcome(outcome.error());
}

void CompanyregClient::getQuarterIncomeStatementInfoAsync(const GetQuarterIncomeStatementInfoRequest& request, const GetQuarterIncomeStatementInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuarterIncomeStatementInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetQuarterIncomeStatementInfoOutcomeCallable CompanyregClient::getQuarterIncomeStatementInfoCallable(const GetQuarterIncomeStatementInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuarterIncomeStatementInfoOutcome()>>(
			[this, request]()
			{
			return this->getQuarterIncomeStatementInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetServiceInfoOutcome CompanyregClient::getServiceInfo(const GetServiceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceInfoOutcome(GetServiceInfoResult(outcome.result()));
	else
		return GetServiceInfoOutcome(outcome.error());
}

void CompanyregClient::getServiceInfoAsync(const GetServiceInfoRequest& request, const GetServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetServiceInfoOutcomeCallable CompanyregClient::getServiceInfoCallable(const GetServiceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceInfoOutcome()>>(
			[this, request]()
			{
			return this->getServiceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetSsoUserInfoOutcome CompanyregClient::getSsoUserInfo(const GetSsoUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSsoUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSsoUserInfoOutcome(GetSsoUserInfoResult(outcome.result()));
	else
		return GetSsoUserInfoOutcome(outcome.error());
}

void CompanyregClient::getSsoUserInfoAsync(const GetSsoUserInfoRequest& request, const GetSsoUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSsoUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetSsoUserInfoOutcomeCallable CompanyregClient::getSsoUserInfoCallable(const GetSsoUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSsoUserInfoOutcome()>>(
			[this, request]()
			{
			return this->getSsoUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetTaxInfoOutcome CompanyregClient::getTaxInfo(const GetTaxInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaxInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaxInfoOutcome(GetTaxInfoResult(outcome.result()));
	else
		return GetTaxInfoOutcome(outcome.error());
}

void CompanyregClient::getTaxInfoAsync(const GetTaxInfoRequest& request, const GetTaxInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaxInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetTaxInfoOutcomeCallable CompanyregClient::getTaxInfoCallable(const GetTaxInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaxInfoOutcome()>>(
			[this, request]()
			{
			return this->getTaxInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetTaxationCalendarOutcome CompanyregClient::getTaxationCalendar(const GetTaxationCalendarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaxationCalendarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaxationCalendarOutcome(GetTaxationCalendarResult(outcome.result()));
	else
		return GetTaxationCalendarOutcome(outcome.error());
}

void CompanyregClient::getTaxationCalendarAsync(const GetTaxationCalendarRequest& request, const GetTaxationCalendarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaxationCalendar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetTaxationCalendarOutcomeCallable CompanyregClient::getTaxationCalendarCallable(const GetTaxationCalendarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaxationCalendarOutcome()>>(
			[this, request]()
			{
			return this->getTaxationCalendar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetTaxationInfoOutcome CompanyregClient::getTaxationInfo(const GetTaxationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaxationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaxationInfoOutcome(GetTaxationInfoResult(outcome.result()));
	else
		return GetTaxationInfoOutcome(outcome.error());
}

void CompanyregClient::getTaxationInfoAsync(const GetTaxationInfoRequest& request, const GetTaxationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaxationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetTaxationInfoOutcomeCallable CompanyregClient::getTaxationInfoCallable(const GetTaxationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaxationInfoOutcome()>>(
			[this, request]()
			{
			return this->getTaxationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetTypeListOutcome CompanyregClient::getTypeList(const GetTypeListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTypeListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTypeListOutcome(GetTypeListResult(outcome.result()));
	else
		return GetTypeListOutcome(outcome.error());
}

void CompanyregClient::getTypeListAsync(const GetTypeListRequest& request, const GetTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTypeList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetTypeListOutcomeCallable CompanyregClient::getTypeListCallable(const GetTypeListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTypeListOutcome()>>(
			[this, request]()
			{
			return this->getTypeList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetVoucherCountOutcome CompanyregClient::getVoucherCount(const GetVoucherCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVoucherCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVoucherCountOutcome(GetVoucherCountResult(outcome.result()));
	else
		return GetVoucherCountOutcome(outcome.error());
}

void CompanyregClient::getVoucherCountAsync(const GetVoucherCountRequest& request, const GetVoucherCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVoucherCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetVoucherCountOutcomeCallable CompanyregClient::getVoucherCountCallable(const GetVoucherCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVoucherCountOutcome()>>(
			[this, request]()
			{
			return this->getVoucherCount(request);
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

CompanyregClient::ListCashJournalOutcome CompanyregClient::listCashJournal(const ListCashJournalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCashJournalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCashJournalOutcome(ListCashJournalResult(outcome.result()));
	else
		return ListCashJournalOutcome(outcome.error());
}

void CompanyregClient::listCashJournalAsync(const ListCashJournalRequest& request, const ListCashJournalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCashJournal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListCashJournalOutcomeCallable CompanyregClient::listCashJournalCallable(const ListCashJournalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCashJournalOutcome()>>(
			[this, request]()
			{
			return this->listCashJournal(request);
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

CompanyregClient::ListEnterprisesOutcome CompanyregClient::listEnterprises(const ListEnterprisesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEnterprisesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEnterprisesOutcome(ListEnterprisesResult(outcome.result()));
	else
		return ListEnterprisesOutcome(outcome.error());
}

void CompanyregClient::listEnterprisesAsync(const ListEnterprisesRequest& request, const ListEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEnterprises(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListEnterprisesOutcomeCallable CompanyregClient::listEnterprisesCallable(const ListEnterprisesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEnterprisesOutcome()>>(
			[this, request]()
			{
			return this->listEnterprises(request);
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

CompanyregClient::ListIntentionNoteOutcome CompanyregClient::listIntentionNote(const ListIntentionNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIntentionNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIntentionNoteOutcome(ListIntentionNoteResult(outcome.result()));
	else
		return ListIntentionNoteOutcome(outcome.error());
}

void CompanyregClient::listIntentionNoteAsync(const ListIntentionNoteRequest& request, const ListIntentionNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIntentionNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListIntentionNoteOutcomeCallable CompanyregClient::listIntentionNoteCallable(const ListIntentionNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIntentionNoteOutcome()>>(
			[this, request]()
			{
			return this->listIntentionNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListInvoiceOutcome CompanyregClient::listInvoice(const ListInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInvoiceOutcome(ListInvoiceResult(outcome.result()));
	else
		return ListInvoiceOutcome(outcome.error());
}

void CompanyregClient::listInvoiceAsync(const ListInvoiceRequest& request, const ListInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListInvoiceOutcomeCallable CompanyregClient::listInvoiceCallable(const ListInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInvoiceOutcome()>>(
			[this, request]()
			{
			return this->listInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListLastMonthInvoiceOutcome CompanyregClient::listLastMonthInvoice(const ListLastMonthInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLastMonthInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLastMonthInvoiceOutcome(ListLastMonthInvoiceResult(outcome.result()));
	else
		return ListLastMonthInvoiceOutcome(outcome.error());
}

void CompanyregClient::listLastMonthInvoiceAsync(const ListLastMonthInvoiceRequest& request, const ListLastMonthInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLastMonthInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListLastMonthInvoiceOutcomeCallable CompanyregClient::listLastMonthInvoiceCallable(const ListLastMonthInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLastMonthInvoiceOutcome()>>(
			[this, request]()
			{
			return this->listLastMonthInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListPayrollOutcome CompanyregClient::listPayroll(const ListPayrollRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPayrollOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPayrollOutcome(ListPayrollResult(outcome.result()));
	else
		return ListPayrollOutcome(outcome.error());
}

void CompanyregClient::listPayrollAsync(const ListPayrollRequest& request, const ListPayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPayroll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListPayrollOutcomeCallable CompanyregClient::listPayrollCallable(const ListPayrollRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPayrollOutcome()>>(
			[this, request]()
			{
			return this->listPayroll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListProduceAuthorizationOutcome CompanyregClient::listProduceAuthorization(const ListProduceAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProduceAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProduceAuthorizationOutcome(ListProduceAuthorizationResult(outcome.result()));
	else
		return ListProduceAuthorizationOutcome(outcome.error());
}

void CompanyregClient::listProduceAuthorizationAsync(const ListProduceAuthorizationRequest& request, const ListProduceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProduceAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListProduceAuthorizationOutcomeCallable CompanyregClient::listProduceAuthorizationCallable(const ListProduceAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProduceAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->listProduceAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListUserDetailSolutionsOutcome CompanyregClient::listUserDetailSolutions(const ListUserDetailSolutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserDetailSolutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserDetailSolutionsOutcome(ListUserDetailSolutionsResult(outcome.result()));
	else
		return ListUserDetailSolutionsOutcome(outcome.error());
}

void CompanyregClient::listUserDetailSolutionsAsync(const ListUserDetailSolutionsRequest& request, const ListUserDetailSolutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserDetailSolutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListUserDetailSolutionsOutcomeCallable CompanyregClient::listUserDetailSolutionsCallable(const ListUserDetailSolutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserDetailSolutionsOutcome()>>(
			[this, request]()
			{
			return this->listUserDetailSolutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListUserIntentionNotesOutcome CompanyregClient::listUserIntentionNotes(const ListUserIntentionNotesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserIntentionNotesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserIntentionNotesOutcome(ListUserIntentionNotesResult(outcome.result()));
	else
		return ListUserIntentionNotesOutcome(outcome.error());
}

void CompanyregClient::listUserIntentionNotesAsync(const ListUserIntentionNotesRequest& request, const ListUserIntentionNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserIntentionNotes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListUserIntentionNotesOutcomeCallable CompanyregClient::listUserIntentionNotesCallable(const ListUserIntentionNotesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserIntentionNotesOutcome()>>(
			[this, request]()
			{
			return this->listUserIntentionNotes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListUserIntentionsOutcome CompanyregClient::listUserIntentions(const ListUserIntentionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserIntentionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserIntentionsOutcome(ListUserIntentionsResult(outcome.result()));
	else
		return ListUserIntentionsOutcome(outcome.error());
}

void CompanyregClient::listUserIntentionsAsync(const ListUserIntentionsRequest& request, const ListUserIntentionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserIntentions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListUserIntentionsOutcomeCallable CompanyregClient::listUserIntentionsCallable(const ListUserIntentionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserIntentionsOutcome()>>(
			[this, request]()
			{
			return this->listUserIntentions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListUserProduceOperateLogsOutcome CompanyregClient::listUserProduceOperateLogs(const ListUserProduceOperateLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserProduceOperateLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserProduceOperateLogsOutcome(ListUserProduceOperateLogsResult(outcome.result()));
	else
		return ListUserProduceOperateLogsOutcome(outcome.error());
}

void CompanyregClient::listUserProduceOperateLogsAsync(const ListUserProduceOperateLogsRequest& request, const ListUserProduceOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserProduceOperateLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListUserProduceOperateLogsOutcomeCallable CompanyregClient::listUserProduceOperateLogsCallable(const ListUserProduceOperateLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserProduceOperateLogsOutcome()>>(
			[this, request]()
			{
			return this->listUserProduceOperateLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListUserSolutionsOutcome CompanyregClient::listUserSolutions(const ListUserSolutionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserSolutionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserSolutionsOutcome(ListUserSolutionsResult(outcome.result()));
	else
		return ListUserSolutionsOutcome(outcome.error());
}

void CompanyregClient::listUserSolutionsAsync(const ListUserSolutionsRequest& request, const ListUserSolutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserSolutions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListUserSolutionsOutcomeCallable CompanyregClient::listUserSolutionsCallable(const ListUserSolutionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserSolutionsOutcome()>>(
			[this, request]()
			{
			return this->listUserSolutions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListVoucherOutcome CompanyregClient::listVoucher(const ListVoucherRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVoucherOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVoucherOutcome(ListVoucherResult(outcome.result()));
	else
		return ListVoucherOutcome(outcome.error());
}

void CompanyregClient::listVoucherAsync(const ListVoucherRequest& request, const ListVoucherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVoucher(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListVoucherOutcomeCallable CompanyregClient::listVoucherCallable(const ListVoucherRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVoucherOutcome()>>(
			[this, request]()
			{
			return this->listVoucher(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::OperateProduceForPartnerOutcome CompanyregClient::operateProduceForPartner(const OperateProduceForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateProduceForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateProduceForPartnerOutcome(OperateProduceForPartnerResult(outcome.result()));
	else
		return OperateProduceForPartnerOutcome(outcome.error());
}

void CompanyregClient::operateProduceForPartnerAsync(const OperateProduceForPartnerRequest& request, const OperateProduceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateProduceForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::OperateProduceForPartnerOutcomeCallable CompanyregClient::operateProduceForPartnerCallable(const OperateProduceForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateProduceForPartnerOutcome()>>(
			[this, request]()
			{
			return this->operateProduceForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::PhotoInvoiceOutcome CompanyregClient::photoInvoice(const PhotoInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhotoInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhotoInvoiceOutcome(PhotoInvoiceResult(outcome.result()));
	else
		return PhotoInvoiceOutcome(outcome.error());
}

void CompanyregClient::photoInvoiceAsync(const PhotoInvoiceRequest& request, const PhotoInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, photoInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::PhotoInvoiceOutcomeCallable CompanyregClient::photoInvoiceCallable(const PhotoInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhotoInvoiceOutcome()>>(
			[this, request]()
			{
			return this->photoInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::PrintAcctgTransOutcome CompanyregClient::printAcctgTrans(const PrintAcctgTransRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PrintAcctgTransOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PrintAcctgTransOutcome(PrintAcctgTransResult(outcome.result()));
	else
		return PrintAcctgTransOutcome(outcome.error());
}

void CompanyregClient::printAcctgTransAsync(const PrintAcctgTransRequest& request, const PrintAcctgTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, printAcctgTrans(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::PrintAcctgTransOutcomeCallable CompanyregClient::printAcctgTransCallable(const PrintAcctgTransRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PrintAcctgTransOutcome()>>(
			[this, request]()
			{
			return this->printAcctgTrans(request);
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

CompanyregClient::PutMeasureDataOutcome CompanyregClient::putMeasureData(const PutMeasureDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMeasureDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMeasureDataOutcome(PutMeasureDataResult(outcome.result()));
	else
		return PutMeasureDataOutcome(outcome.error());
}

void CompanyregClient::putMeasureDataAsync(const PutMeasureDataRequest& request, const PutMeasureDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMeasureData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::PutMeasureDataOutcomeCallable CompanyregClient::putMeasureDataCallable(const PutMeasureDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMeasureDataOutcome()>>(
			[this, request]()
			{
			return this->putMeasureData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::PutMeasureReadyFlagOutcome CompanyregClient::putMeasureReadyFlag(const PutMeasureReadyFlagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutMeasureReadyFlagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutMeasureReadyFlagOutcome(PutMeasureReadyFlagResult(outcome.result()));
	else
		return PutMeasureReadyFlagOutcome(outcome.error());
}

void CompanyregClient::putMeasureReadyFlagAsync(const PutMeasureReadyFlagRequest& request, const PutMeasureReadyFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putMeasureReadyFlag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::PutMeasureReadyFlagOutcomeCallable CompanyregClient::putMeasureReadyFlagCallable(const PutMeasureReadyFlagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutMeasureReadyFlagOutcome()>>(
			[this, request]()
			{
			return this->putMeasureReadyFlag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryBagRemainingOutcome CompanyregClient::queryBagRemaining(const QueryBagRemainingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBagRemainingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBagRemainingOutcome(QueryBagRemainingResult(outcome.result()));
	else
		return QueryBagRemainingOutcome(outcome.error());
}

void CompanyregClient::queryBagRemainingAsync(const QueryBagRemainingRequest& request, const QueryBagRemainingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBagRemaining(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryBagRemainingOutcomeCallable CompanyregClient::queryBagRemainingCallable(const QueryBagRemainingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBagRemainingOutcome()>>(
			[this, request]()
			{
			return this->queryBagRemaining(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryBookkeepingCommoditiesOutcome CompanyregClient::queryBookkeepingCommodities(const QueryBookkeepingCommoditiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBookkeepingCommoditiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBookkeepingCommoditiesOutcome(QueryBookkeepingCommoditiesResult(outcome.result()));
	else
		return QueryBookkeepingCommoditiesOutcome(outcome.error());
}

void CompanyregClient::queryBookkeepingCommoditiesAsync(const QueryBookkeepingCommoditiesRequest& request, const QueryBookkeepingCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBookkeepingCommodities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryBookkeepingCommoditiesOutcomeCallable CompanyregClient::queryBookkeepingCommoditiesCallable(const QueryBookkeepingCommoditiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBookkeepingCommoditiesOutcome()>>(
			[this, request]()
			{
			return this->queryBookkeepingCommodities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryBookkeepingCommodityModulesOutcome CompanyregClient::queryBookkeepingCommodityModules(const QueryBookkeepingCommodityModulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryBookkeepingCommodityModulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryBookkeepingCommodityModulesOutcome(QueryBookkeepingCommodityModulesResult(outcome.result()));
	else
		return QueryBookkeepingCommodityModulesOutcome(outcome.error());
}

void CompanyregClient::queryBookkeepingCommodityModulesAsync(const QueryBookkeepingCommodityModulesRequest& request, const QueryBookkeepingCommodityModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryBookkeepingCommodityModules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryBookkeepingCommodityModulesOutcomeCallable CompanyregClient::queryBookkeepingCommodityModulesCallable(const QueryBookkeepingCommodityModulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryBookkeepingCommodityModulesOutcome()>>(
			[this, request]()
			{
			return this->queryBookkeepingCommodityModules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::QueryCommodityConfigOutcome CompanyregClient::queryCommodityConfig(const QueryCommodityConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCommodityConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCommodityConfigOutcome(QueryCommodityConfigResult(outcome.result()));
	else
		return QueryCommodityConfigOutcome(outcome.error());
}

void CompanyregClient::queryCommodityConfigAsync(const QueryCommodityConfigRequest& request, const QueryCommodityConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCommodityConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryCommodityConfigOutcomeCallable CompanyregClient::queryCommodityConfigCallable(const QueryCommodityConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCommodityConfigOutcome()>>(
			[this, request]()
			{
			return this->queryCommodityConfig(request);
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

CompanyregClient::QueryInstanceOutcome CompanyregClient::queryInstance(const QueryInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryInstanceOutcome(QueryInstanceResult(outcome.result()));
	else
		return QueryInstanceOutcome(outcome.error());
}

void CompanyregClient::queryInstanceAsync(const QueryInstanceRequest& request, const QueryInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryInstanceOutcomeCallable CompanyregClient::queryInstanceCallable(const QueryInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryInstanceOutcome()>>(
			[this, request]()
			{
			return this->queryInstance(request);
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

CompanyregClient::QueryUserNeedAuthOutcome CompanyregClient::queryUserNeedAuth(const QueryUserNeedAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserNeedAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserNeedAuthOutcome(QueryUserNeedAuthResult(outcome.result()));
	else
		return QueryUserNeedAuthOutcome(outcome.error());
}

void CompanyregClient::queryUserNeedAuthAsync(const QueryUserNeedAuthRequest& request, const QueryUserNeedAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserNeedAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::QueryUserNeedAuthOutcomeCallable CompanyregClient::queryUserNeedAuthCallable(const QueryUserNeedAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserNeedAuthOutcome()>>(
			[this, request]()
			{
			return this->queryUserNeedAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ReSubmitIcpSolutionOutcome CompanyregClient::reSubmitIcpSolution(const ReSubmitIcpSolutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReSubmitIcpSolutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReSubmitIcpSolutionOutcome(ReSubmitIcpSolutionResult(outcome.result()));
	else
		return ReSubmitIcpSolutionOutcome(outcome.error());
}

void CompanyregClient::reSubmitIcpSolutionAsync(const ReSubmitIcpSolutionRequest& request, const ReSubmitIcpSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reSubmitIcpSolution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ReSubmitIcpSolutionOutcomeCallable CompanyregClient::reSubmitIcpSolutionCallable(const ReSubmitIcpSolutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReSubmitIcpSolutionOutcome()>>(
			[this, request]()
			{
			return this->reSubmitIcpSolution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::RefreshCustomerInfoOutcome CompanyregClient::refreshCustomerInfo(const RefreshCustomerInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshCustomerInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshCustomerInfoOutcome(RefreshCustomerInfoResult(outcome.result()));
	else
		return RefreshCustomerInfoOutcome(outcome.error());
}

void CompanyregClient::refreshCustomerInfoAsync(const RefreshCustomerInfoRequest& request, const RefreshCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshCustomerInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::RefreshCustomerInfoOutcomeCallable CompanyregClient::refreshCustomerInfoCallable(const RefreshCustomerInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshCustomerInfoOutcome()>>(
			[this, request]()
			{
			return this->refreshCustomerInfo(request);
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

CompanyregClient::RejectSolutionOutcome CompanyregClient::rejectSolution(const RejectSolutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectSolutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectSolutionOutcome(RejectSolutionResult(outcome.result()));
	else
		return RejectSolutionOutcome(outcome.error());
}

void CompanyregClient::rejectSolutionAsync(const RejectSolutionRequest& request, const RejectSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectSolution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::RejectSolutionOutcomeCallable CompanyregClient::rejectSolutionCallable(const RejectSolutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectSolutionOutcome()>>(
			[this, request]()
			{
			return this->rejectSolution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::RejectUserSolutionOutcome CompanyregClient::rejectUserSolution(const RejectUserSolutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectUserSolutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectUserSolutionOutcome(RejectUserSolutionResult(outcome.result()));
	else
		return RejectUserSolutionOutcome(outcome.error());
}

void CompanyregClient::rejectUserSolutionAsync(const RejectUserSolutionRequest& request, const RejectUserSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectUserSolution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::RejectUserSolutionOutcomeCallable CompanyregClient::rejectUserSolutionCallable(const RejectUserSolutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectUserSolutionOutcome()>>(
			[this, request]()
			{
			return this->rejectUserSolution(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ReleaseProduceAuthorizationOutcome CompanyregClient::releaseProduceAuthorization(const ReleaseProduceAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseProduceAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseProduceAuthorizationOutcome(ReleaseProduceAuthorizationResult(outcome.result()));
	else
		return ReleaseProduceAuthorizationOutcome(outcome.error());
}

void CompanyregClient::releaseProduceAuthorizationAsync(const ReleaseProduceAuthorizationRequest& request, const ReleaseProduceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseProduceAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ReleaseProduceAuthorizationOutcomeCallable CompanyregClient::releaseProduceAuthorizationCallable(const ReleaseProduceAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseProduceAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->releaseProduceAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SaveOpeningBalanceStatusOutcome CompanyregClient::saveOpeningBalanceStatus(const SaveOpeningBalanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveOpeningBalanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveOpeningBalanceStatusOutcome(SaveOpeningBalanceStatusResult(outcome.result()));
	else
		return SaveOpeningBalanceStatusOutcome(outcome.error());
}

void CompanyregClient::saveOpeningBalanceStatusAsync(const SaveOpeningBalanceStatusRequest& request, const SaveOpeningBalanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveOpeningBalanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SaveOpeningBalanceStatusOutcomeCallable CompanyregClient::saveOpeningBalanceStatusCallable(const SaveOpeningBalanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveOpeningBalanceStatusOutcome()>>(
			[this, request]()
			{
			return this->saveOpeningBalanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SavePayrollOutcome CompanyregClient::savePayroll(const SavePayrollRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SavePayrollOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SavePayrollOutcome(SavePayrollResult(outcome.result()));
	else
		return SavePayrollOutcome(outcome.error());
}

void CompanyregClient::savePayrollAsync(const SavePayrollRequest& request, const SavePayrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, savePayroll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SavePayrollOutcomeCallable CompanyregClient::savePayrollCallable(const SavePayrollRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SavePayrollOutcome()>>(
			[this, request]()
			{
			return this->savePayroll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SavePayrollSettingOutcome CompanyregClient::savePayrollSetting(const SavePayrollSettingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SavePayrollSettingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SavePayrollSettingOutcome(SavePayrollSettingResult(outcome.result()));
	else
		return SavePayrollSettingOutcome(outcome.error());
}

void CompanyregClient::savePayrollSettingAsync(const SavePayrollSettingRequest& request, const SavePayrollSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, savePayrollSetting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SavePayrollSettingOutcomeCallable CompanyregClient::savePayrollSettingCallable(const SavePayrollSettingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SavePayrollSettingOutcome()>>(
			[this, request]()
			{
			return this->savePayrollSetting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ScanInvoiceOutcome CompanyregClient::scanInvoice(const ScanInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScanInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScanInvoiceOutcome(ScanInvoiceResult(outcome.result()));
	else
		return ScanInvoiceOutcome(outcome.error());
}

void CompanyregClient::scanInvoiceAsync(const ScanInvoiceRequest& request, const ScanInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scanInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ScanInvoiceOutcomeCallable CompanyregClient::scanInvoiceCallable(const ScanInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScanInvoiceOutcome()>>(
			[this, request]()
			{
			return this->scanInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SendMessageOutcome CompanyregClient::sendMessage(const SendMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageOutcome(SendMessageResult(outcome.result()));
	else
		return SendMessageOutcome(outcome.error());
}

void CompanyregClient::sendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SendMessageOutcomeCallable CompanyregClient::sendMessageCallable(const SendMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageOutcome()>>(
			[this, request]()
			{
			return this->sendMessage(request);
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

CompanyregClient::SubmitIntentionNoteOutcome CompanyregClient::submitIntentionNote(const SubmitIntentionNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitIntentionNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitIntentionNoteOutcome(SubmitIntentionNoteResult(outcome.result()));
	else
		return SubmitIntentionNoteOutcome(outcome.error());
}

void CompanyregClient::submitIntentionNoteAsync(const SubmitIntentionNoteRequest& request, const SubmitIntentionNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitIntentionNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitIntentionNoteOutcomeCallable CompanyregClient::submitIntentionNoteCallable(const SubmitIntentionNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitIntentionNoteOutcome()>>(
			[this, request]()
			{
			return this->submitIntentionNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitPartnerCompanyInformationOutcome CompanyregClient::submitPartnerCompanyInformation(const SubmitPartnerCompanyInformationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitPartnerCompanyInformationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitPartnerCompanyInformationOutcome(SubmitPartnerCompanyInformationResult(outcome.result()));
	else
		return SubmitPartnerCompanyInformationOutcome(outcome.error());
}

void CompanyregClient::submitPartnerCompanyInformationAsync(const SubmitPartnerCompanyInformationRequest& request, const SubmitPartnerCompanyInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitPartnerCompanyInformation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitPartnerCompanyInformationOutcomeCallable CompanyregClient::submitPartnerCompanyInformationCallable(const SubmitPartnerCompanyInformationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitPartnerCompanyInformationOutcome()>>(
			[this, request]()
			{
			return this->submitPartnerCompanyInformation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitSolutionOutcome CompanyregClient::submitSolution(const SubmitSolutionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSolutionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSolutionOutcome(SubmitSolutionResult(outcome.result()));
	else
		return SubmitSolutionOutcome(outcome.error());
}

void CompanyregClient::submitSolutionAsync(const SubmitSolutionRequest& request, const SubmitSolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSolution(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitSolutionOutcomeCallable CompanyregClient::submitSolutionCallable(const SubmitSolutionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSolutionOutcome()>>(
			[this, request]()
			{
			return this->submitSolution(request);
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

CompanyregClient::UpdateCustomerInfoOutcome CompanyregClient::updateCustomerInfo(const UpdateCustomerInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomerInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomerInfoOutcome(UpdateCustomerInfoResult(outcome.result()));
	else
		return UpdateCustomerInfoOutcome(outcome.error());
}

void CompanyregClient::updateCustomerInfoAsync(const UpdateCustomerInfoRequest& request, const UpdateCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomerInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UpdateCustomerInfoOutcomeCallable CompanyregClient::updateCustomerInfoCallable(const UpdateCustomerInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomerInfoOutcome()>>(
			[this, request]()
			{
			return this->updateCustomerInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::UpdateFeeOutcome CompanyregClient::updateFee(const UpdateFeeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFeeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFeeOutcome(UpdateFeeResult(outcome.result()));
	else
		return UpdateFeeOutcome(outcome.error());
}

void CompanyregClient::updateFeeAsync(const UpdateFeeRequest& request, const UpdateFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFee(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UpdateFeeOutcomeCallable CompanyregClient::updateFeeCallable(const UpdateFeeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFeeOutcome()>>(
			[this, request]()
			{
			return this->updateFee(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::UpdateProduceOutcome CompanyregClient::updateProduce(const UpdateProduceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateProduceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateProduceOutcome(UpdateProduceResult(outcome.result()));
	else
		return UpdateProduceOutcome(outcome.error());
}

void CompanyregClient::updateProduceAsync(const UpdateProduceRequest& request, const UpdateProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateProduce(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UpdateProduceOutcomeCallable CompanyregClient::updateProduceCallable(const UpdateProduceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateProduceOutcome()>>(
			[this, request]()
			{
			return this->updateProduce(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::UpdateTaxInfoOutcome CompanyregClient::updateTaxInfo(const UpdateTaxInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaxInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaxInfoOutcome(UpdateTaxInfoResult(outcome.result()));
	else
		return UpdateTaxInfoOutcome(outcome.error());
}

void CompanyregClient::updateTaxInfoAsync(const UpdateTaxInfoRequest& request, const UpdateTaxInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaxInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UpdateTaxInfoOutcomeCallable CompanyregClient::updateTaxInfoCallable(const UpdateTaxInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaxInfoOutcome()>>(
			[this, request]()
			{
			return this->updateTaxInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::UpdateTaxationProcessOutcome CompanyregClient::updateTaxationProcess(const UpdateTaxationProcessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTaxationProcessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTaxationProcessOutcome(UpdateTaxationProcessResult(outcome.result()));
	else
		return UpdateTaxationProcessOutcome(outcome.error());
}

void CompanyregClient::updateTaxationProcessAsync(const UpdateTaxationProcessRequest& request, const UpdateTaxationProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTaxationProcess(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UpdateTaxationProcessOutcomeCallable CompanyregClient::updateTaxationProcessCallable(const UpdateTaxationProcessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTaxationProcessOutcome()>>(
			[this, request]()
			{
			return this->updateTaxationProcess(request);
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

CompanyregClient::UploadUserMaterialOutcome CompanyregClient::uploadUserMaterial(const UploadUserMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadUserMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadUserMaterialOutcome(UploadUserMaterialResult(outcome.result()));
	else
		return UploadUserMaterialOutcome(outcome.error());
}

void CompanyregClient::uploadUserMaterialAsync(const UploadUserMaterialRequest& request, const UploadUserMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadUserMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::UploadUserMaterialOutcomeCallable CompanyregClient::uploadUserMaterialCallable(const UploadUserMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadUserMaterialOutcome()>>(
			[this, request]()
			{
			return this->uploadUserMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::VerifyTaxSmsCodeOutcome CompanyregClient::verifyTaxSmsCode(const VerifyTaxSmsCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyTaxSmsCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyTaxSmsCodeOutcome(VerifyTaxSmsCodeResult(outcome.result()));
	else
		return VerifyTaxSmsCodeOutcome(outcome.error());
}

void CompanyregClient::verifyTaxSmsCodeAsync(const VerifyTaxSmsCodeRequest& request, const VerifyTaxSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyTaxSmsCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::VerifyTaxSmsCodeOutcomeCallable CompanyregClient::verifyTaxSmsCodeCallable(const VerifyTaxSmsCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyTaxSmsCodeOutcome()>>(
			[this, request]()
			{
			return this->verifyTaxSmsCode(request);
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

