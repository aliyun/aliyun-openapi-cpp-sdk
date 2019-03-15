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

#include <alibabacloud/finmall/FinmallClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

namespace
{
	const std::string SERVICE_NAME = "finmall";
}

FinmallClient::FinmallClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "finmall");
}

FinmallClient::FinmallClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "finmall");
}

FinmallClient::FinmallClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "finmall");
}

FinmallClient::~FinmallClient()
{}

FinmallClient::GetCreditDetailOutcome FinmallClient::getCreditDetail(const GetCreditDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreditDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreditDetailOutcome(GetCreditDetailResult(outcome.result()));
	else
		return GetCreditDetailOutcome(outcome.error());
}

void FinmallClient::getCreditDetailAsync(const GetCreditDetailRequest& request, const GetCreditDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreditDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCreditDetailOutcomeCallable FinmallClient::getCreditDetailCallable(const GetCreditDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreditDetailOutcome()>>(
			[this, request]()
			{
			return this->getCreditDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetDocumentDownloadUrlOutcome FinmallClient::getDocumentDownloadUrl(const GetDocumentDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDocumentDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDocumentDownloadUrlOutcome(GetDocumentDownloadUrlResult(outcome.result()));
	else
		return GetDocumentDownloadUrlOutcome(outcome.error());
}

void FinmallClient::getDocumentDownloadUrlAsync(const GetDocumentDownloadUrlRequest& request, const GetDocumentDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDocumentDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetDocumentDownloadUrlOutcomeCallable FinmallClient::getDocumentDownloadUrlCallable(const GetDocumentDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDocumentDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getDocumentDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCreditWithdrawRecordOutcome FinmallClient::getCreditWithdrawRecord(const GetCreditWithdrawRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreditWithdrawRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreditWithdrawRecordOutcome(GetCreditWithdrawRecordResult(outcome.result()));
	else
		return GetCreditWithdrawRecordOutcome(outcome.error());
}

void FinmallClient::getCreditWithdrawRecordAsync(const GetCreditWithdrawRecordRequest& request, const GetCreditWithdrawRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreditWithdrawRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCreditWithdrawRecordOutcomeCallable FinmallClient::getCreditWithdrawRecordCallable(const GetCreditWithdrawRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreditWithdrawRecordOutcome()>>(
			[this, request]()
			{
			return this->getCreditWithdrawRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCustomerVerifyInfoOutcome FinmallClient::getCustomerVerifyInfo(const GetCustomerVerifyInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomerVerifyInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomerVerifyInfoOutcome(GetCustomerVerifyInfoResult(outcome.result()));
	else
		return GetCustomerVerifyInfoOutcome(outcome.error());
}

void FinmallClient::getCustomerVerifyInfoAsync(const GetCustomerVerifyInfoRequest& request, const GetCustomerVerifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomerVerifyInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCustomerVerifyInfoOutcomeCallable FinmallClient::getCustomerVerifyInfoCallable(const GetCustomerVerifyInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomerVerifyInfoOutcome()>>(
			[this, request]()
			{
			return this->getCustomerVerifyInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::QueryFundPartyListOutcome FinmallClient::queryFundPartyList(const QueryFundPartyListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryFundPartyListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryFundPartyListOutcome(QueryFundPartyListResult(outcome.result()));
	else
		return QueryFundPartyListOutcome(outcome.error());
}

void FinmallClient::queryFundPartyListAsync(const QueryFundPartyListRequest& request, const QueryFundPartyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryFundPartyList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::QueryFundPartyListOutcomeCallable FinmallClient::queryFundPartyListCallable(const QueryFundPartyListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryFundPartyListOutcome()>>(
			[this, request]()
			{
			return this->queryFundPartyList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCreditStatusOutcome FinmallClient::getCreditStatus(const GetCreditStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreditStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreditStatusOutcome(GetCreditStatusResult(outcome.result()));
	else
		return GetCreditStatusOutcome(outcome.error());
}

void FinmallClient::getCreditStatusAsync(const GetCreditStatusRequest& request, const GetCreditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreditStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCreditStatusOutcomeCallable FinmallClient::getCreditStatusCallable(const GetCreditStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreditStatusOutcome()>>(
			[this, request]()
			{
			return this->getCreditStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::SaveAuthenticationInfoOutcome FinmallClient::saveAuthenticationInfo(const SaveAuthenticationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveAuthenticationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveAuthenticationInfoOutcome(SaveAuthenticationInfoResult(outcome.result()));
	else
		return SaveAuthenticationInfoOutcome(outcome.error());
}

void FinmallClient::saveAuthenticationInfoAsync(const SaveAuthenticationInfoRequest& request, const SaveAuthenticationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveAuthenticationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::SaveAuthenticationInfoOutcomeCallable FinmallClient::saveAuthenticationInfoCallable(const SaveAuthenticationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveAuthenticationInfoOutcome()>>(
			[this, request]()
			{
			return this->saveAuthenticationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetTradeDataOutcome FinmallClient::getTradeData(const GetTradeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTradeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTradeDataOutcome(GetTradeDataResult(outcome.result()));
	else
		return GetTradeDataOutcome(outcome.error());
}

void FinmallClient::getTradeDataAsync(const GetTradeDataRequest& request, const GetTradeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTradeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetTradeDataOutcomeCallable FinmallClient::getTradeDataCallable(const GetTradeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTradeDataOutcome()>>(
			[this, request]()
			{
			return this->getTradeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::UploadCustomIDImageOutcome FinmallClient::uploadCustomIDImage(const UploadCustomIDImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadCustomIDImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadCustomIDImageOutcome(UploadCustomIDImageResult(outcome.result()));
	else
		return UploadCustomIDImageOutcome(outcome.error());
}

void FinmallClient::uploadCustomIDImageAsync(const UploadCustomIDImageRequest& request, const UploadCustomIDImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadCustomIDImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::UploadCustomIDImageOutcomeCallable FinmallClient::uploadCustomIDImageCallable(const UploadCustomIDImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadCustomIDImageOutcome()>>(
			[this, request]()
			{
			return this->uploadCustomIDImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::QuerySignResultOutcome FinmallClient::querySignResult(const QuerySignResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySignResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySignResultOutcome(QuerySignResultResult(outcome.result()));
	else
		return QuerySignResultOutcome(outcome.error());
}

void FinmallClient::querySignResultAsync(const QuerySignResultRequest& request, const QuerySignResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySignResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::QuerySignResultOutcomeCallable FinmallClient::querySignResultCallable(const QuerySignResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySignResultOutcome()>>(
			[this, request]()
			{
			return this->querySignResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::ApplyForLoanOutcome FinmallClient::applyForLoan(const ApplyForLoanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyForLoanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyForLoanOutcome(ApplyForLoanResult(outcome.result()));
	else
		return ApplyForLoanOutcome(outcome.error());
}

void FinmallClient::applyForLoanAsync(const ApplyForLoanRequest& request, const ApplyForLoanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyForLoan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::ApplyForLoanOutcomeCallable FinmallClient::applyForLoanCallable(const ApplyForLoanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyForLoanOutcome()>>(
			[this, request]()
			{
			return this->applyForLoan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetZhimaScoreOutcome FinmallClient::getZhimaScore(const GetZhimaScoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetZhimaScoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetZhimaScoreOutcome(GetZhimaScoreResult(outcome.result()));
	else
		return GetZhimaScoreOutcome(outcome.error());
}

void FinmallClient::getZhimaScoreAsync(const GetZhimaScoreRequest& request, const GetZhimaScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getZhimaScore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetZhimaScoreOutcomeCallable FinmallClient::getZhimaScoreCallable(const GetZhimaScoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetZhimaScoreOutcome()>>(
			[this, request]()
			{
			return this->getZhimaScore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::PayForOrderOutcome FinmallClient::payForOrder(const PayForOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PayForOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PayForOrderOutcome(PayForOrderResult(outcome.result()));
	else
		return PayForOrderOutcome(outcome.error());
}

void FinmallClient::payForOrderAsync(const PayForOrderRequest& request, const PayForOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, payForOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::PayForOrderOutcomeCallable FinmallClient::payForOrderCallable(const PayForOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PayForOrderOutcome()>>(
			[this, request]()
			{
			return this->payForOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::QueryTrialRecordsOutcome FinmallClient::queryTrialRecords(const QueryTrialRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTrialRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTrialRecordsOutcome(QueryTrialRecordsResult(outcome.result()));
	else
		return QueryTrialRecordsOutcome(outcome.error());
}

void FinmallClient::queryTrialRecordsAsync(const QueryTrialRecordsRequest& request, const QueryTrialRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTrialRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::QueryTrialRecordsOutcomeCallable FinmallClient::queryTrialRecordsCallable(const QueryTrialRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTrialRecordsOutcome()>>(
			[this, request]()
			{
			return this->queryTrialRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCurrentTermRepayInfoOutcome FinmallClient::getCurrentTermRepayInfo(const GetCurrentTermRepayInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCurrentTermRepayInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCurrentTermRepayInfoOutcome(GetCurrentTermRepayInfoResult(outcome.result()));
	else
		return GetCurrentTermRepayInfoOutcome(outcome.error());
}

void FinmallClient::getCurrentTermRepayInfoAsync(const GetCurrentTermRepayInfoRequest& request, const GetCurrentTermRepayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCurrentTermRepayInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCurrentTermRepayInfoOutcomeCallable FinmallClient::getCurrentTermRepayInfoCallable(const GetCurrentTermRepayInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCurrentTermRepayInfoOutcome()>>(
			[this, request]()
			{
			return this->getCurrentTermRepayInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::UpdateAuthenticationInfoOutcome FinmallClient::updateAuthenticationInfo(const UpdateAuthenticationInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAuthenticationInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAuthenticationInfoOutcome(UpdateAuthenticationInfoResult(outcome.result()));
	else
		return UpdateAuthenticationInfoOutcome(outcome.error());
}

void FinmallClient::updateAuthenticationInfoAsync(const UpdateAuthenticationInfoRequest& request, const UpdateAuthenticationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAuthenticationInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::UpdateAuthenticationInfoOutcomeCallable FinmallClient::updateAuthenticationInfoCallable(const UpdateAuthenticationInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAuthenticationInfoOutcome()>>(
			[this, request]()
			{
			return this->updateAuthenticationInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::UpdateEnterpriseCustomInfoOutcome FinmallClient::updateEnterpriseCustomInfo(const UpdateEnterpriseCustomInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEnterpriseCustomInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEnterpriseCustomInfoOutcome(UpdateEnterpriseCustomInfoResult(outcome.result()));
	else
		return UpdateEnterpriseCustomInfoOutcome(outcome.error());
}

void FinmallClient::updateEnterpriseCustomInfoAsync(const UpdateEnterpriseCustomInfoRequest& request, const UpdateEnterpriseCustomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEnterpriseCustomInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::UpdateEnterpriseCustomInfoOutcomeCallable FinmallClient::updateEnterpriseCustomInfoCallable(const UpdateEnterpriseCustomInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEnterpriseCustomInfoOutcome()>>(
			[this, request]()
			{
			return this->updateEnterpriseCustomInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCreditSignatureInfoOutcome FinmallClient::getCreditSignatureInfo(const GetCreditSignatureInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreditSignatureInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreditSignatureInfoOutcome(GetCreditSignatureInfoResult(outcome.result()));
	else
		return GetCreditSignatureInfoOutcome(outcome.error());
}

void FinmallClient::getCreditSignatureInfoAsync(const GetCreditSignatureInfoRequest& request, const GetCreditSignatureInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreditSignatureInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCreditSignatureInfoOutcomeCallable FinmallClient::getCreditSignatureInfoCallable(const GetCreditSignatureInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreditSignatureInfoOutcome()>>(
			[this, request]()
			{
			return this->getCreditSignatureInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::AddTrialRecordOutcome FinmallClient::addTrialRecord(const AddTrialRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTrialRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTrialRecordOutcome(AddTrialRecordResult(outcome.result()));
	else
		return AddTrialRecordOutcome(outcome.error());
}

void FinmallClient::addTrialRecordAsync(const AddTrialRecordRequest& request, const AddTrialRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTrialRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::AddTrialRecordOutcomeCallable FinmallClient::addTrialRecordCallable(const AddTrialRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTrialRecordOutcome()>>(
			[this, request]()
			{
			return this->addTrialRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetAuthorizeCreditQueryOutcome FinmallClient::getAuthorizeCreditQuery(const GetAuthorizeCreditQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthorizeCreditQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthorizeCreditQueryOutcome(GetAuthorizeCreditQueryResult(outcome.result()));
	else
		return GetAuthorizeCreditQueryOutcome(outcome.error());
}

void FinmallClient::getAuthorizeCreditQueryAsync(const GetAuthorizeCreditQueryRequest& request, const GetAuthorizeCreditQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthorizeCreditQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetAuthorizeCreditQueryOutcomeCallable FinmallClient::getAuthorizeCreditQueryCallable(const GetAuthorizeCreditQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthorizeCreditQueryOutcome()>>(
			[this, request]()
			{
			return this->getAuthorizeCreditQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::CancelCreditOutcome FinmallClient::cancelCredit(const CancelCreditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCreditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCreditOutcome(CancelCreditResult(outcome.result()));
	else
		return CancelCreditOutcome(outcome.error());
}

void FinmallClient::cancelCreditAsync(const CancelCreditRequest& request, const CancelCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCredit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::CancelCreditOutcomeCallable FinmallClient::cancelCreditCallable(const CancelCreditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCreditOutcome()>>(
			[this, request]()
			{
			return this->cancelCredit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCustomStatusInfoOutcome FinmallClient::getCustomStatusInfo(const GetCustomStatusInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomStatusInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomStatusInfoOutcome(GetCustomStatusInfoResult(outcome.result()));
	else
		return GetCustomStatusInfoOutcome(outcome.error());
}

void FinmallClient::getCustomStatusInfoAsync(const GetCustomStatusInfoRequest& request, const GetCustomStatusInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomStatusInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCustomStatusInfoOutcomeCallable FinmallClient::getCustomStatusInfoCallable(const GetCustomStatusInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomStatusInfoOutcome()>>(
			[this, request]()
			{
			return this->getCustomStatusInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetOverdueRecordListOutcome FinmallClient::getOverdueRecordList(const GetOverdueRecordListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOverdueRecordListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOverdueRecordListOutcome(GetOverdueRecordListResult(outcome.result()));
	else
		return GetOverdueRecordListOutcome(outcome.error());
}

void FinmallClient::getOverdueRecordListAsync(const GetOverdueRecordListRequest& request, const GetOverdueRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOverdueRecordList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetOverdueRecordListOutcomeCallable FinmallClient::getOverdueRecordListCallable(const GetOverdueRecordListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOverdueRecordListOutcome()>>(
			[this, request]()
			{
			return this->getOverdueRecordList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetProductDetailOutcome FinmallClient::getProductDetail(const GetProductDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProductDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProductDetailOutcome(GetProductDetailResult(outcome.result()));
	else
		return GetProductDetailOutcome(outcome.error());
}

void FinmallClient::getProductDetailAsync(const GetProductDetailRequest& request, const GetProductDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProductDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetProductDetailOutcomeCallable FinmallClient::getProductDetailCallable(const GetProductDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProductDetailOutcome()>>(
			[this, request]()
			{
			return this->getProductDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::VerifyCustomerOutcome FinmallClient::verifyCustomer(const VerifyCustomerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyCustomerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyCustomerOutcome(VerifyCustomerResult(outcome.result()));
	else
		return VerifyCustomerOutcome(outcome.error());
}

void FinmallClient::verifyCustomerAsync(const VerifyCustomerRequest& request, const VerifyCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyCustomer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::VerifyCustomerOutcomeCallable FinmallClient::verifyCustomerCallable(const VerifyCustomerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyCustomerOutcome()>>(
			[this, request]()
			{
			return this->verifyCustomer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::SignLoanAgreementOutcome FinmallClient::signLoanAgreement(const SignLoanAgreementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignLoanAgreementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignLoanAgreementOutcome(SignLoanAgreementResult(outcome.result()));
	else
		return SignLoanAgreementOutcome(outcome.error());
}

void FinmallClient::signLoanAgreementAsync(const SignLoanAgreementRequest& request, const SignLoanAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signLoanAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::SignLoanAgreementOutcomeCallable FinmallClient::signLoanAgreementCallable(const SignLoanAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignLoanAgreementOutcome()>>(
			[this, request]()
			{
			return this->signLoanAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::AddCustomInfoOutcome FinmallClient::addCustomInfo(const AddCustomInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCustomInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCustomInfoOutcome(AddCustomInfoResult(outcome.result()));
	else
		return AddCustomInfoOutcome(outcome.error());
}

void FinmallClient::addCustomInfoAsync(const AddCustomInfoRequest& request, const AddCustomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCustomInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::AddCustomInfoOutcomeCallable FinmallClient::addCustomInfoCallable(const AddCustomInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCustomInfoOutcome()>>(
			[this, request]()
			{
			return this->addCustomInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetProductListOutcome FinmallClient::getProductList(const GetProductListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProductListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProductListOutcome(GetProductListResult(outcome.result()));
	else
		return GetProductListOutcome(outcome.error());
}

void FinmallClient::getProductListAsync(const GetProductListRequest& request, const GetProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProductList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetProductListOutcomeCallable FinmallClient::getProductListCallable(const GetProductListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProductListOutcome()>>(
			[this, request]()
			{
			return this->getProductList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetLoanAgreementOutcome FinmallClient::getLoanAgreement(const GetLoanAgreementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoanAgreementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoanAgreementOutcome(GetLoanAgreementResult(outcome.result()));
	else
		return GetLoanAgreementOutcome(outcome.error());
}

void FinmallClient::getLoanAgreementAsync(const GetLoanAgreementRequest& request, const GetLoanAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoanAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetLoanAgreementOutcomeCallable FinmallClient::getLoanAgreementCallable(const GetLoanAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoanAgreementOutcome()>>(
			[this, request]()
			{
			return this->getLoanAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetUserInfoAuthorizationAgreementOutcome FinmallClient::getUserInfoAuthorizationAgreement(const GetUserInfoAuthorizationAgreementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserInfoAuthorizationAgreementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserInfoAuthorizationAgreementOutcome(GetUserInfoAuthorizationAgreementResult(outcome.result()));
	else
		return GetUserInfoAuthorizationAgreementOutcome(outcome.error());
}

void FinmallClient::getUserInfoAuthorizationAgreementAsync(const GetUserInfoAuthorizationAgreementRequest& request, const GetUserInfoAuthorizationAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserInfoAuthorizationAgreement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetUserInfoAuthorizationAgreementOutcomeCallable FinmallClient::getUserInfoAuthorizationAgreementCallable(const GetUserInfoAuthorizationAgreementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserInfoAuthorizationAgreementOutcome()>>(
			[this, request]()
			{
			return this->getUserInfoAuthorizationAgreement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::SignedPageResultOutcome FinmallClient::signedPageResult(const SignedPageResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignedPageResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignedPageResultOutcome(SignedPageResultResult(outcome.result()));
	else
		return SignedPageResultOutcome(outcome.error());
}

void FinmallClient::signedPageResultAsync(const SignedPageResultRequest& request, const SignedPageResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signedPageResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::SignedPageResultOutcomeCallable FinmallClient::signedPageResultCallable(const SignedPageResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignedPageResultOutcome()>>(
			[this, request]()
			{
			return this->signedPageResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetLoanApplyRecordListOutcome FinmallClient::getLoanApplyRecordList(const GetLoanApplyRecordListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoanApplyRecordListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoanApplyRecordListOutcome(GetLoanApplyRecordListResult(outcome.result()));
	else
		return GetLoanApplyRecordListOutcome(outcome.error());
}

void FinmallClient::getLoanApplyRecordListAsync(const GetLoanApplyRecordListRequest& request, const GetLoanApplyRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoanApplyRecordList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetLoanApplyRecordListOutcomeCallable FinmallClient::getLoanApplyRecordListCallable(const GetLoanApplyRecordListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoanApplyRecordListOutcome()>>(
			[this, request]()
			{
			return this->getLoanApplyRecordList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetLatestOverdueRecordOutcome FinmallClient::getLatestOverdueRecord(const GetLatestOverdueRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLatestOverdueRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLatestOverdueRecordOutcome(GetLatestOverdueRecordResult(outcome.result()));
	else
		return GetLatestOverdueRecordOutcome(outcome.error());
}

void FinmallClient::getLatestOverdueRecordAsync(const GetLatestOverdueRecordRequest& request, const GetLatestOverdueRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLatestOverdueRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetLatestOverdueRecordOutcomeCallable FinmallClient::getLatestOverdueRecordCallable(const GetLatestOverdueRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLatestOverdueRecordOutcome()>>(
			[this, request]()
			{
			return this->getLatestOverdueRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCreditListOutcome FinmallClient::getCreditList(const GetCreditListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreditListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreditListOutcome(GetCreditListResult(outcome.result()));
	else
		return GetCreditListOutcome(outcome.error());
}

void FinmallClient::getCreditListAsync(const GetCreditListRequest& request, const GetCreditListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreditList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCreditListOutcomeCallable FinmallClient::getCreditListCallable(const GetCreditListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreditListOutcome()>>(
			[this, request]()
			{
			return this->getCreditList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::SignResultNotifyOutcome FinmallClient::signResultNotify(const SignResultNotifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignResultNotifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignResultNotifyOutcome(SignResultNotifyResult(outcome.result()));
	else
		return SignResultNotifyOutcome(outcome.error());
}

void FinmallClient::signResultNotifyAsync(const SignResultNotifyRequest& request, const SignResultNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signResultNotify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::SignResultNotifyOutcomeCallable FinmallClient::signResultNotifyCallable(const SignResultNotifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignResultNotifyOutcome()>>(
			[this, request]()
			{
			return this->signResultNotify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::VerifySMSTokenOutcome FinmallClient::verifySMSToken(const VerifySMSTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifySMSTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifySMSTokenOutcome(VerifySMSTokenResult(outcome.result()));
	else
		return VerifySMSTokenOutcome(outcome.error());
}

void FinmallClient::verifySMSTokenAsync(const VerifySMSTokenRequest& request, const VerifySMSTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifySMSToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::VerifySMSTokenOutcomeCallable FinmallClient::verifySMSTokenCallable(const VerifySMSTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifySMSTokenOutcome()>>(
			[this, request]()
			{
			return this->verifySMSToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetCreditRepayListOutcome FinmallClient::getCreditRepayList(const GetCreditRepayListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCreditRepayListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCreditRepayListOutcome(GetCreditRepayListResult(outcome.result()));
	else
		return GetCreditRepayListOutcome(outcome.error());
}

void FinmallClient::getCreditRepayListAsync(const GetCreditRepayListRequest& request, const GetCreditRepayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCreditRepayList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetCreditRepayListOutcomeCallable FinmallClient::getCreditRepayListCallable(const GetCreditRepayListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCreditRepayListOutcome()>>(
			[this, request]()
			{
			return this->getCreditRepayList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetSignContractUrlOutcome FinmallClient::getSignContractUrl(const GetSignContractUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSignContractUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSignContractUrlOutcome(GetSignContractUrlResult(outcome.result()));
	else
		return GetSignContractUrlOutcome(outcome.error());
}

void FinmallClient::getSignContractUrlAsync(const GetSignContractUrlRequest& request, const GetSignContractUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSignContractUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetSignContractUrlOutcomeCallable FinmallClient::getSignContractUrlCallable(const GetSignContractUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSignContractUrlOutcome()>>(
			[this, request]()
			{
			return this->getSignContractUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FinmallClient::GetRepayPlanTrialOutcome FinmallClient::getRepayPlanTrial(const GetRepayPlanTrialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRepayPlanTrialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRepayPlanTrialOutcome(GetRepayPlanTrialResult(outcome.result()));
	else
		return GetRepayPlanTrialOutcome(outcome.error());
}

void FinmallClient::getRepayPlanTrialAsync(const GetRepayPlanTrialRequest& request, const GetRepayPlanTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRepayPlanTrial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FinmallClient::GetRepayPlanTrialOutcomeCallable FinmallClient::getRepayPlanTrialCallable(const GetRepayPlanTrialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRepayPlanTrialOutcome()>>(
			[this, request]()
			{
			return this->getRepayPlanTrial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

