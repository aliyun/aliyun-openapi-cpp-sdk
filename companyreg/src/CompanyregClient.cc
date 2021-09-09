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

