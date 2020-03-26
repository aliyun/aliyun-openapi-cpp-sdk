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

#include <alibabacloud/trademark/TrademarkClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

namespace
{
	const std::string SERVICE_NAME = "Trademark";
}

TrademarkClient::TrademarkClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "trademark");
}

TrademarkClient::TrademarkClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "trademark");
}

TrademarkClient::TrademarkClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "trademark");
}

TrademarkClient::~TrademarkClient()
{}

TrademarkClient::AcceptPartnerNotificationOutcome TrademarkClient::acceptPartnerNotification(const AcceptPartnerNotificationRequest &request) const
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

void TrademarkClient::acceptPartnerNotificationAsync(const AcceptPartnerNotificationRequest& request, const AcceptPartnerNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, acceptPartnerNotification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::AcceptPartnerNotificationOutcomeCallable TrademarkClient::acceptPartnerNotificationCallable(const AcceptPartnerNotificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AcceptPartnerNotificationOutcome()>>(
			[this, request]()
			{
			return this->acceptPartnerNotification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::ApplyNotaryPostOutcome TrademarkClient::applyNotaryPost(const ApplyNotaryPostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyNotaryPostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyNotaryPostOutcome(ApplyNotaryPostResult(outcome.result()));
	else
		return ApplyNotaryPostOutcome(outcome.error());
}

void TrademarkClient::applyNotaryPostAsync(const ApplyNotaryPostRequest& request, const ApplyNotaryPostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyNotaryPost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::ApplyNotaryPostOutcomeCallable TrademarkClient::applyNotaryPostCallable(const ApplyNotaryPostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyNotaryPostOutcome()>>(
			[this, request]()
			{
			return this->applyNotaryPost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::BindMaterialOutcome TrademarkClient::bindMaterial(const BindMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindMaterialOutcome(BindMaterialResult(outcome.result()));
	else
		return BindMaterialOutcome(outcome.error());
}

void TrademarkClient::bindMaterialAsync(const BindMaterialRequest& request, const BindMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::BindMaterialOutcomeCallable TrademarkClient::bindMaterialCallable(const BindMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindMaterialOutcome()>>(
			[this, request]()
			{
			return this->bindMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::CancelTradeOrderOutcome TrademarkClient::cancelTradeOrder(const CancelTradeOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelTradeOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelTradeOrderOutcome(CancelTradeOrderResult(outcome.result()));
	else
		return CancelTradeOrderOutcome(outcome.error());
}

void TrademarkClient::cancelTradeOrderAsync(const CancelTradeOrderRequest& request, const CancelTradeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelTradeOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::CancelTradeOrderOutcomeCallable TrademarkClient::cancelTradeOrderCallable(const CancelTradeOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelTradeOrderOutcome()>>(
			[this, request]()
			{
			return this->cancelTradeOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::CheckLoaFillOutcome TrademarkClient::checkLoaFill(const CheckLoaFillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckLoaFillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckLoaFillOutcome(CheckLoaFillResult(outcome.result()));
	else
		return CheckLoaFillOutcome(outcome.error());
}

void TrademarkClient::checkLoaFillAsync(const CheckLoaFillRequest& request, const CheckLoaFillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkLoaFill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::CheckLoaFillOutcomeCallable TrademarkClient::checkLoaFillCallable(const CheckLoaFillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckLoaFillOutcome()>>(
			[this, request]()
			{
			return this->checkLoaFill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::CheckTrademarkOrderOutcome TrademarkClient::checkTrademarkOrder(const CheckTrademarkOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckTrademarkOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckTrademarkOrderOutcome(CheckTrademarkOrderResult(outcome.result()));
	else
		return CheckTrademarkOrderOutcome(outcome.error());
}

void TrademarkClient::checkTrademarkOrderAsync(const CheckTrademarkOrderRequest& request, const CheckTrademarkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkTrademarkOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::CheckTrademarkOrderOutcomeCallable TrademarkClient::checkTrademarkOrderCallable(const CheckTrademarkOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckTrademarkOrderOutcome()>>(
			[this, request]()
			{
			return this->checkTrademarkOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::CombineLoaOutcome TrademarkClient::combineLoa(const CombineLoaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CombineLoaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CombineLoaOutcome(CombineLoaResult(outcome.result()));
	else
		return CombineLoaOutcome(outcome.error());
}

void TrademarkClient::combineLoaAsync(const CombineLoaRequest& request, const CombineLoaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, combineLoa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::CombineLoaOutcomeCallable TrademarkClient::combineLoaCallable(const CombineLoaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CombineLoaOutcome()>>(
			[this, request]()
			{
			return this->combineLoa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::ConfirmAdditionalMaterialOutcome TrademarkClient::confirmAdditionalMaterial(const ConfirmAdditionalMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmAdditionalMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmAdditionalMaterialOutcome(ConfirmAdditionalMaterialResult(outcome.result()));
	else
		return ConfirmAdditionalMaterialOutcome(outcome.error());
}

void TrademarkClient::confirmAdditionalMaterialAsync(const ConfirmAdditionalMaterialRequest& request, const ConfirmAdditionalMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmAdditionalMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::ConfirmAdditionalMaterialOutcomeCallable TrademarkClient::confirmAdditionalMaterialCallable(const ConfirmAdditionalMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmAdditionalMaterialOutcome()>>(
			[this, request]()
			{
			return this->confirmAdditionalMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::ConfirmApplicantOutcome TrademarkClient::confirmApplicant(const ConfirmApplicantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmApplicantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmApplicantOutcome(ConfirmApplicantResult(outcome.result()));
	else
		return ConfirmApplicantOutcome(outcome.error());
}

void TrademarkClient::confirmApplicantAsync(const ConfirmApplicantRequest& request, const ConfirmApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmApplicant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::ConfirmApplicantOutcomeCallable TrademarkClient::confirmApplicantCallable(const ConfirmApplicantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmApplicantOutcome()>>(
			[this, request]()
			{
			return this->confirmApplicant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::ConvertImageToGrayOutcome TrademarkClient::convertImageToGray(const ConvertImageToGrayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertImageToGrayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertImageToGrayOutcome(ConvertImageToGrayResult(outcome.result()));
	else
		return ConvertImageToGrayOutcome(outcome.error());
}

void TrademarkClient::convertImageToGrayAsync(const ConvertImageToGrayRequest& request, const ConvertImageToGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertImageToGray(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::ConvertImageToGrayOutcomeCallable TrademarkClient::convertImageToGrayCallable(const ConvertImageToGrayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertImageToGrayOutcome()>>(
			[this, request]()
			{
			return this->convertImageToGray(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::CreateIntentionOrderOutcome TrademarkClient::createIntentionOrder(const CreateIntentionOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIntentionOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIntentionOrderOutcome(CreateIntentionOrderResult(outcome.result()));
	else
		return CreateIntentionOrderOutcome(outcome.error());
}

void TrademarkClient::createIntentionOrderAsync(const CreateIntentionOrderRequest& request, const CreateIntentionOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIntentionOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::CreateIntentionOrderOutcomeCallable TrademarkClient::createIntentionOrderCallable(const CreateIntentionOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIntentionOrderOutcome()>>(
			[this, request]()
			{
			return this->createIntentionOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::CreateTrademarkOrderOutcome TrademarkClient::createTrademarkOrder(const CreateTrademarkOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTrademarkOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTrademarkOrderOutcome(CreateTrademarkOrderResult(outcome.result()));
	else
		return CreateTrademarkOrderOutcome(outcome.error());
}

void TrademarkClient::createTrademarkOrderAsync(const CreateTrademarkOrderRequest& request, const CreateTrademarkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTrademarkOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::CreateTrademarkOrderOutcomeCallable TrademarkClient::createTrademarkOrderCallable(const CreateTrademarkOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTrademarkOrderOutcome()>>(
			[this, request]()
			{
			return this->createTrademarkOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::DeleteMaterialOutcome TrademarkClient::deleteMaterial(const DeleteMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMaterialOutcome(DeleteMaterialResult(outcome.result()));
	else
		return DeleteMaterialOutcome(outcome.error());
}

void TrademarkClient::deleteMaterialAsync(const DeleteMaterialRequest& request, const DeleteMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::DeleteMaterialOutcomeCallable TrademarkClient::deleteMaterialCallable(const DeleteMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMaterialOutcome()>>(
			[this, request]()
			{
			return this->deleteMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::DeleteTmMonitorRuleOutcome TrademarkClient::deleteTmMonitorRule(const DeleteTmMonitorRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTmMonitorRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTmMonitorRuleOutcome(DeleteTmMonitorRuleResult(outcome.result()));
	else
		return DeleteTmMonitorRuleOutcome(outcome.error());
}

void TrademarkClient::deleteTmMonitorRuleAsync(const DeleteTmMonitorRuleRequest& request, const DeleteTmMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTmMonitorRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::DeleteTmMonitorRuleOutcomeCallable TrademarkClient::deleteTmMonitorRuleCallable(const DeleteTmMonitorRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTmMonitorRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteTmMonitorRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::DenySupplementOutcome TrademarkClient::denySupplement(const DenySupplementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DenySupplementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DenySupplementOutcome(DenySupplementResult(outcome.result()));
	else
		return DenySupplementOutcome(outcome.error());
}

void TrademarkClient::denySupplementAsync(const DenySupplementRequest& request, const DenySupplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, denySupplement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::DenySupplementOutcomeCallable TrademarkClient::denySupplementCallable(const DenySupplementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DenySupplementOutcome()>>(
			[this, request]()
			{
			return this->denySupplement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::DescirbeCombineTrademarkOutcome TrademarkClient::descirbeCombineTrademark(const DescirbeCombineTrademarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescirbeCombineTrademarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescirbeCombineTrademarkOutcome(DescirbeCombineTrademarkResult(outcome.result()));
	else
		return DescirbeCombineTrademarkOutcome(outcome.error());
}

void TrademarkClient::descirbeCombineTrademarkAsync(const DescirbeCombineTrademarkRequest& request, const DescirbeCombineTrademarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, descirbeCombineTrademark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::DescirbeCombineTrademarkOutcomeCallable TrademarkClient::descirbeCombineTrademarkCallable(const DescirbeCombineTrademarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescirbeCombineTrademarkOutcome()>>(
			[this, request]()
			{
			return this->descirbeCombineTrademark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::FillLogisticsOutcome TrademarkClient::fillLogistics(const FillLogisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FillLogisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FillLogisticsOutcome(FillLogisticsResult(outcome.result()));
	else
		return FillLogisticsOutcome(outcome.error());
}

void TrademarkClient::fillLogisticsAsync(const FillLogisticsRequest& request, const FillLogisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fillLogistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::FillLogisticsOutcomeCallable TrademarkClient::fillLogisticsCallable(const FillLogisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FillLogisticsOutcome()>>(
			[this, request]()
			{
			return this->fillLogistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::FilterUnavailableCodesOutcome TrademarkClient::filterUnavailableCodes(const FilterUnavailableCodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FilterUnavailableCodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FilterUnavailableCodesOutcome(FilterUnavailableCodesResult(outcome.result()));
	else
		return FilterUnavailableCodesOutcome(outcome.error());
}

void TrademarkClient::filterUnavailableCodesAsync(const FilterUnavailableCodesRequest& request, const FilterUnavailableCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, filterUnavailableCodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::FilterUnavailableCodesOutcomeCallable TrademarkClient::filterUnavailableCodesCallable(const FilterUnavailableCodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FilterUnavailableCodesOutcome()>>(
			[this, request]()
			{
			return this->filterUnavailableCodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::GenerateQrCodeOutcome TrademarkClient::generateQrCode(const GenerateQrCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateQrCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateQrCodeOutcome(GenerateQrCodeResult(outcome.result()));
	else
		return GenerateQrCodeOutcome(outcome.error());
}

void TrademarkClient::generateQrCodeAsync(const GenerateQrCodeRequest& request, const GenerateQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateQrCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::GenerateQrCodeOutcomeCallable TrademarkClient::generateQrCodeCallable(const GenerateQrCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateQrCodeOutcome()>>(
			[this, request]()
			{
			return this->generateQrCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::GenerateUploadFilePolicyOutcome TrademarkClient::generateUploadFilePolicy(const GenerateUploadFilePolicyRequest &request) const
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

void TrademarkClient::generateUploadFilePolicyAsync(const GenerateUploadFilePolicyRequest& request, const GenerateUploadFilePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUploadFilePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::GenerateUploadFilePolicyOutcomeCallable TrademarkClient::generateUploadFilePolicyCallable(const GenerateUploadFilePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUploadFilePolicyOutcome()>>(
			[this, request]()
			{
			return this->generateUploadFilePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::GetNotaryOrderOutcome TrademarkClient::getNotaryOrder(const GetNotaryOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNotaryOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNotaryOrderOutcome(GetNotaryOrderResult(outcome.result()));
	else
		return GetNotaryOrderOutcome(outcome.error());
}

void TrademarkClient::getNotaryOrderAsync(const GetNotaryOrderRequest& request, const GetNotaryOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNotaryOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::GetNotaryOrderOutcomeCallable TrademarkClient::getNotaryOrderCallable(const GetNotaryOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNotaryOrderOutcome()>>(
			[this, request]()
			{
			return this->getNotaryOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::InsertMaterialOutcome TrademarkClient::insertMaterial(const InsertMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertMaterialOutcome(InsertMaterialResult(outcome.result()));
	else
		return InsertMaterialOutcome(outcome.error());
}

void TrademarkClient::insertMaterialAsync(const InsertMaterialRequest& request, const InsertMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::InsertMaterialOutcomeCallable TrademarkClient::insertMaterialCallable(const InsertMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertMaterialOutcome()>>(
			[this, request]()
			{
			return this->insertMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::InsertRenewInfoOutcome TrademarkClient::insertRenewInfo(const InsertRenewInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertRenewInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertRenewInfoOutcome(InsertRenewInfoResult(outcome.result()));
	else
		return InsertRenewInfoOutcome(outcome.error());
}

void TrademarkClient::insertRenewInfoAsync(const InsertRenewInfoRequest& request, const InsertRenewInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertRenewInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::InsertRenewInfoOutcomeCallable TrademarkClient::insertRenewInfoCallable(const InsertRenewInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertRenewInfoOutcome()>>(
			[this, request]()
			{
			return this->insertRenewInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::InsertTmMonitorRuleOutcome TrademarkClient::insertTmMonitorRule(const InsertTmMonitorRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertTmMonitorRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertTmMonitorRuleOutcome(InsertTmMonitorRuleResult(outcome.result()));
	else
		return InsertTmMonitorRuleOutcome(outcome.error());
}

void TrademarkClient::insertTmMonitorRuleAsync(const InsertTmMonitorRuleRequest& request, const InsertTmMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertTmMonitorRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::InsertTmMonitorRuleOutcomeCallable TrademarkClient::insertTmMonitorRuleCallable(const InsertTmMonitorRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertTmMonitorRuleOutcome()>>(
			[this, request]()
			{
			return this->insertTmMonitorRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::InsertTradeIntentionUserOutcome TrademarkClient::insertTradeIntentionUser(const InsertTradeIntentionUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InsertTradeIntentionUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InsertTradeIntentionUserOutcome(InsertTradeIntentionUserResult(outcome.result()));
	else
		return InsertTradeIntentionUserOutcome(outcome.error());
}

void TrademarkClient::insertTradeIntentionUserAsync(const InsertTradeIntentionUserRequest& request, const InsertTradeIntentionUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, insertTradeIntentionUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::InsertTradeIntentionUserOutcomeCallable TrademarkClient::insertTradeIntentionUserCallable(const InsertTradeIntentionUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InsertTradeIntentionUserOutcome()>>(
			[this, request]()
			{
			return this->insertTradeIntentionUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::ListNotaryInfosOutcome TrademarkClient::listNotaryInfos(const ListNotaryInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotaryInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotaryInfosOutcome(ListNotaryInfosResult(outcome.result()));
	else
		return ListNotaryInfosOutcome(outcome.error());
}

void TrademarkClient::listNotaryInfosAsync(const ListNotaryInfosRequest& request, const ListNotaryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotaryInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::ListNotaryInfosOutcomeCallable TrademarkClient::listNotaryInfosCallable(const ListNotaryInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotaryInfosOutcome()>>(
			[this, request]()
			{
			return this->listNotaryInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::ListNotaryOrdersOutcome TrademarkClient::listNotaryOrders(const ListNotaryOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNotaryOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNotaryOrdersOutcome(ListNotaryOrdersResult(outcome.result()));
	else
		return ListNotaryOrdersOutcome(outcome.error());
}

void TrademarkClient::listNotaryOrdersAsync(const ListNotaryOrdersRequest& request, const ListNotaryOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNotaryOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::ListNotaryOrdersOutcomeCallable TrademarkClient::listNotaryOrdersCallable(const ListNotaryOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNotaryOrdersOutcome()>>(
			[this, request]()
			{
			return this->listNotaryOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryCommunicationLogsOutcome TrademarkClient::queryCommunicationLogs(const QueryCommunicationLogsRequest &request) const
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

void TrademarkClient::queryCommunicationLogsAsync(const QueryCommunicationLogsRequest& request, const QueryCommunicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCommunicationLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryCommunicationLogsOutcomeCallable TrademarkClient::queryCommunicationLogsCallable(const QueryCommunicationLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCommunicationLogsOutcome()>>(
			[this, request]()
			{
			return this->queryCommunicationLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryCredentialsInfoOutcome TrademarkClient::queryCredentialsInfo(const QueryCredentialsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCredentialsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCredentialsInfoOutcome(QueryCredentialsInfoResult(outcome.result()));
	else
		return QueryCredentialsInfoOutcome(outcome.error());
}

void TrademarkClient::queryCredentialsInfoAsync(const QueryCredentialsInfoRequest& request, const QueryCredentialsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCredentialsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryCredentialsInfoOutcomeCallable TrademarkClient::queryCredentialsInfoCallable(const QueryCredentialsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCredentialsInfoOutcome()>>(
			[this, request]()
			{
			return this->queryCredentialsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryIntentionDetailOutcome TrademarkClient::queryIntentionDetail(const QueryIntentionDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIntentionDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIntentionDetailOutcome(QueryIntentionDetailResult(outcome.result()));
	else
		return QueryIntentionDetailOutcome(outcome.error());
}

void TrademarkClient::queryIntentionDetailAsync(const QueryIntentionDetailRequest& request, const QueryIntentionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIntentionDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryIntentionDetailOutcomeCallable TrademarkClient::queryIntentionDetailCallable(const QueryIntentionDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIntentionDetailOutcome()>>(
			[this, request]()
			{
			return this->queryIntentionDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryIntentionListOutcome TrademarkClient::queryIntentionList(const QueryIntentionListRequest &request) const
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

void TrademarkClient::queryIntentionListAsync(const QueryIntentionListRequest& request, const QueryIntentionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIntentionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryIntentionListOutcomeCallable TrademarkClient::queryIntentionListCallable(const QueryIntentionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIntentionListOutcome()>>(
			[this, request]()
			{
			return this->queryIntentionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryIntentionPriceOutcome TrademarkClient::queryIntentionPrice(const QueryIntentionPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIntentionPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIntentionPriceOutcome(QueryIntentionPriceResult(outcome.result()));
	else
		return QueryIntentionPriceOutcome(outcome.error());
}

void TrademarkClient::queryIntentionPriceAsync(const QueryIntentionPriceRequest& request, const QueryIntentionPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIntentionPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryIntentionPriceOutcomeCallable TrademarkClient::queryIntentionPriceCallable(const QueryIntentionPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIntentionPriceOutcome()>>(
			[this, request]()
			{
			return this->queryIntentionPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryMaterialOutcome TrademarkClient::queryMaterial(const QueryMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMaterialOutcome(QueryMaterialResult(outcome.result()));
	else
		return QueryMaterialOutcome(outcome.error());
}

void TrademarkClient::queryMaterialAsync(const QueryMaterialRequest& request, const QueryMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryMaterialOutcomeCallable TrademarkClient::queryMaterialCallable(const QueryMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMaterialOutcome()>>(
			[this, request]()
			{
			return this->queryMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryMaterialListOutcome TrademarkClient::queryMaterialList(const QueryMaterialListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMaterialListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMaterialListOutcome(QueryMaterialListResult(outcome.result()));
	else
		return QueryMaterialListOutcome(outcome.error());
}

void TrademarkClient::queryMaterialListAsync(const QueryMaterialListRequest& request, const QueryMaterialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMaterialList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryMaterialListOutcomeCallable TrademarkClient::queryMaterialListCallable(const QueryMaterialListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMaterialListOutcome()>>(
			[this, request]()
			{
			return this->queryMaterialList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryMonitorKeywordsOutcome TrademarkClient::queryMonitorKeywords(const QueryMonitorKeywordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMonitorKeywordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMonitorKeywordsOutcome(QueryMonitorKeywordsResult(outcome.result()));
	else
		return QueryMonitorKeywordsOutcome(outcome.error());
}

void TrademarkClient::queryMonitorKeywordsAsync(const QueryMonitorKeywordsRequest& request, const QueryMonitorKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMonitorKeywords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryMonitorKeywordsOutcomeCallable TrademarkClient::queryMonitorKeywordsCallable(const QueryMonitorKeywordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMonitorKeywordsOutcome()>>(
			[this, request]()
			{
			return this->queryMonitorKeywords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryOfficialFileCustomListOutcome TrademarkClient::queryOfficialFileCustomList(const QueryOfficialFileCustomListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOfficialFileCustomListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOfficialFileCustomListOutcome(QueryOfficialFileCustomListResult(outcome.result()));
	else
		return QueryOfficialFileCustomListOutcome(outcome.error());
}

void TrademarkClient::queryOfficialFileCustomListAsync(const QueryOfficialFileCustomListRequest& request, const QueryOfficialFileCustomListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOfficialFileCustomList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryOfficialFileCustomListOutcomeCallable TrademarkClient::queryOfficialFileCustomListCallable(const QueryOfficialFileCustomListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOfficialFileCustomListOutcome()>>(
			[this, request]()
			{
			return this->queryOfficialFileCustomList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryOssResourcesOutcome TrademarkClient::queryOssResources(const QueryOssResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOssResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOssResourcesOutcome(QueryOssResourcesResult(outcome.result()));
	else
		return QueryOssResourcesOutcome(outcome.error());
}

void TrademarkClient::queryOssResourcesAsync(const QueryOssResourcesRequest& request, const QueryOssResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOssResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryOssResourcesOutcomeCallable TrademarkClient::queryOssResourcesCallable(const QueryOssResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOssResourcesOutcome()>>(
			[this, request]()
			{
			return this->queryOssResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryQrCodeUploadStatusOutcome TrademarkClient::queryQrCodeUploadStatus(const QueryQrCodeUploadStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryQrCodeUploadStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryQrCodeUploadStatusOutcome(QueryQrCodeUploadStatusResult(outcome.result()));
	else
		return QueryQrCodeUploadStatusOutcome(outcome.error());
}

void TrademarkClient::queryQrCodeUploadStatusAsync(const QueryQrCodeUploadStatusRequest& request, const QueryQrCodeUploadStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryQrCodeUploadStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryQrCodeUploadStatusOutcomeCallable TrademarkClient::queryQrCodeUploadStatusCallable(const QueryQrCodeUploadStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryQrCodeUploadStatusOutcome()>>(
			[this, request]()
			{
			return this->queryQrCodeUploadStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QuerySupplementDetailOutcome TrademarkClient::querySupplementDetail(const QuerySupplementDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySupplementDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySupplementDetailOutcome(QuerySupplementDetailResult(outcome.result()));
	else
		return QuerySupplementDetailOutcome(outcome.error());
}

void TrademarkClient::querySupplementDetailAsync(const QuerySupplementDetailRequest& request, const QuerySupplementDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySupplementDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QuerySupplementDetailOutcomeCallable TrademarkClient::querySupplementDetailCallable(const QuerySupplementDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySupplementDetailOutcome()>>(
			[this, request]()
			{
			return this->querySupplementDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTaskListOutcome TrademarkClient::queryTaskList(const QueryTaskListRequest &request) const
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

void TrademarkClient::queryTaskListAsync(const QueryTaskListRequest& request, const QueryTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTaskListOutcomeCallable TrademarkClient::queryTaskListCallable(const QueryTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskListOutcome()>>(
			[this, request]()
			{
			return this->queryTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeIntentionUserListOutcome TrademarkClient::queryTradeIntentionUserList(const QueryTradeIntentionUserListRequest &request) const
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

void TrademarkClient::queryTradeIntentionUserListAsync(const QueryTradeIntentionUserListRequest& request, const QueryTradeIntentionUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeIntentionUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeIntentionUserListOutcomeCallable TrademarkClient::queryTradeIntentionUserListCallable(const QueryTradeIntentionUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeIntentionUserListOutcome()>>(
			[this, request]()
			{
			return this->queryTradeIntentionUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeMarkApplicationDetailOutcome TrademarkClient::queryTradeMarkApplicationDetail(const QueryTradeMarkApplicationDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeMarkApplicationDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeMarkApplicationDetailOutcome(QueryTradeMarkApplicationDetailResult(outcome.result()));
	else
		return QueryTradeMarkApplicationDetailOutcome(outcome.error());
}

void TrademarkClient::queryTradeMarkApplicationDetailAsync(const QueryTradeMarkApplicationDetailRequest& request, const QueryTradeMarkApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeMarkApplicationDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeMarkApplicationDetailOutcomeCallable TrademarkClient::queryTradeMarkApplicationDetailCallable(const QueryTradeMarkApplicationDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeMarkApplicationDetailOutcome()>>(
			[this, request]()
			{
			return this->queryTradeMarkApplicationDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeMarkApplicationLogsOutcome TrademarkClient::queryTradeMarkApplicationLogs(const QueryTradeMarkApplicationLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeMarkApplicationLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeMarkApplicationLogsOutcome(QueryTradeMarkApplicationLogsResult(outcome.result()));
	else
		return QueryTradeMarkApplicationLogsOutcome(outcome.error());
}

void TrademarkClient::queryTradeMarkApplicationLogsAsync(const QueryTradeMarkApplicationLogsRequest& request, const QueryTradeMarkApplicationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeMarkApplicationLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeMarkApplicationLogsOutcomeCallable TrademarkClient::queryTradeMarkApplicationLogsCallable(const QueryTradeMarkApplicationLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeMarkApplicationLogsOutcome()>>(
			[this, request]()
			{
			return this->queryTradeMarkApplicationLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeMarkApplicationsOutcome TrademarkClient::queryTradeMarkApplications(const QueryTradeMarkApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeMarkApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeMarkApplicationsOutcome(QueryTradeMarkApplicationsResult(outcome.result()));
	else
		return QueryTradeMarkApplicationsOutcome(outcome.error());
}

void TrademarkClient::queryTradeMarkApplicationsAsync(const QueryTradeMarkApplicationsRequest& request, const QueryTradeMarkApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeMarkApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeMarkApplicationsOutcomeCallable TrademarkClient::queryTradeMarkApplicationsCallable(const QueryTradeMarkApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeMarkApplicationsOutcome()>>(
			[this, request]()
			{
			return this->queryTradeMarkApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeMarkApplicationsByIntentionOutcome TrademarkClient::queryTradeMarkApplicationsByIntention(const QueryTradeMarkApplicationsByIntentionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeMarkApplicationsByIntentionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeMarkApplicationsByIntentionOutcome(QueryTradeMarkApplicationsByIntentionResult(outcome.result()));
	else
		return QueryTradeMarkApplicationsByIntentionOutcome(outcome.error());
}

void TrademarkClient::queryTradeMarkApplicationsByIntentionAsync(const QueryTradeMarkApplicationsByIntentionRequest& request, const QueryTradeMarkApplicationsByIntentionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeMarkApplicationsByIntention(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeMarkApplicationsByIntentionOutcomeCallable TrademarkClient::queryTradeMarkApplicationsByIntentionCallable(const QueryTradeMarkApplicationsByIntentionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeMarkApplicationsByIntentionOutcome()>>(
			[this, request]()
			{
			return this->queryTradeMarkApplicationsByIntention(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeProduceDetailOutcome TrademarkClient::queryTradeProduceDetail(const QueryTradeProduceDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeProduceDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeProduceDetailOutcome(QueryTradeProduceDetailResult(outcome.result()));
	else
		return QueryTradeProduceDetailOutcome(outcome.error());
}

void TrademarkClient::queryTradeProduceDetailAsync(const QueryTradeProduceDetailRequest& request, const QueryTradeProduceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeProduceDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeProduceDetailOutcomeCallable TrademarkClient::queryTradeProduceDetailCallable(const QueryTradeProduceDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeProduceDetailOutcome()>>(
			[this, request]()
			{
			return this->queryTradeProduceDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTradeProduceListOutcome TrademarkClient::queryTradeProduceList(const QueryTradeProduceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTradeProduceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTradeProduceListOutcome(QueryTradeProduceListResult(outcome.result()));
	else
		return QueryTradeProduceListOutcome(outcome.error());
}

void TrademarkClient::queryTradeProduceListAsync(const QueryTradeProduceListRequest& request, const QueryTradeProduceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTradeProduceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTradeProduceListOutcomeCallable TrademarkClient::queryTradeProduceListCallable(const QueryTradeProduceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTradeProduceListOutcome()>>(
			[this, request]()
			{
			return this->queryTradeProduceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTrademarkMonitorResultsOutcome TrademarkClient::queryTrademarkMonitorResults(const QueryTrademarkMonitorResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTrademarkMonitorResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTrademarkMonitorResultsOutcome(QueryTrademarkMonitorResultsResult(outcome.result()));
	else
		return QueryTrademarkMonitorResultsOutcome(outcome.error());
}

void TrademarkClient::queryTrademarkMonitorResultsAsync(const QueryTrademarkMonitorResultsRequest& request, const QueryTrademarkMonitorResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTrademarkMonitorResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTrademarkMonitorResultsOutcomeCallable TrademarkClient::queryTrademarkMonitorResultsCallable(const QueryTrademarkMonitorResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTrademarkMonitorResultsOutcome()>>(
			[this, request]()
			{
			return this->queryTrademarkMonitorResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTrademarkMonitorRulesOutcome TrademarkClient::queryTrademarkMonitorRules(const QueryTrademarkMonitorRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTrademarkMonitorRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTrademarkMonitorRulesOutcome(QueryTrademarkMonitorRulesResult(outcome.result()));
	else
		return QueryTrademarkMonitorRulesOutcome(outcome.error());
}

void TrademarkClient::queryTrademarkMonitorRulesAsync(const QueryTrademarkMonitorRulesRequest& request, const QueryTrademarkMonitorRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTrademarkMonitorRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTrademarkMonitorRulesOutcomeCallable TrademarkClient::queryTrademarkMonitorRulesCallable(const QueryTrademarkMonitorRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTrademarkMonitorRulesOutcome()>>(
			[this, request]()
			{
			return this->queryTrademarkMonitorRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::QueryTrademarkPriceOutcome TrademarkClient::queryTrademarkPrice(const QueryTrademarkPriceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTrademarkPriceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTrademarkPriceOutcome(QueryTrademarkPriceResult(outcome.result()));
	else
		return QueryTrademarkPriceOutcome(outcome.error());
}

void TrademarkClient::queryTrademarkPriceAsync(const QueryTrademarkPriceRequest& request, const QueryTrademarkPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTrademarkPrice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::QueryTrademarkPriceOutcomeCallable TrademarkClient::queryTrademarkPriceCallable(const QueryTrademarkPriceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTrademarkPriceOutcome()>>(
			[this, request]()
			{
			return this->queryTrademarkPrice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::RefundProduceOutcome TrademarkClient::refundProduce(const RefundProduceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefundProduceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefundProduceOutcome(RefundProduceResult(outcome.result()));
	else
		return RefundProduceOutcome(outcome.error());
}

void TrademarkClient::refundProduceAsync(const RefundProduceRequest& request, const RefundProduceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refundProduce(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::RefundProduceOutcomeCallable TrademarkClient::refundProduceCallable(const RefundProduceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefundProduceOutcome()>>(
			[this, request]()
			{
			return this->refundProduce(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::RefuseAdditionalMaterialOutcome TrademarkClient::refuseAdditionalMaterial(const RefuseAdditionalMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefuseAdditionalMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefuseAdditionalMaterialOutcome(RefuseAdditionalMaterialResult(outcome.result()));
	else
		return RefuseAdditionalMaterialOutcome(outcome.error());
}

void TrademarkClient::refuseAdditionalMaterialAsync(const RefuseAdditionalMaterialRequest& request, const RefuseAdditionalMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refuseAdditionalMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::RefuseAdditionalMaterialOutcomeCallable TrademarkClient::refuseAdditionalMaterialCallable(const RefuseAdditionalMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefuseAdditionalMaterialOutcome()>>(
			[this, request]()
			{
			return this->refuseAdditionalMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::RefuseApplicantOutcome TrademarkClient::refuseApplicant(const RefuseApplicantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefuseApplicantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefuseApplicantOutcome(RefuseApplicantResult(outcome.result()));
	else
		return RefuseApplicantOutcome(outcome.error());
}

void TrademarkClient::refuseApplicantAsync(const RefuseApplicantRequest& request, const RefuseApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refuseApplicant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::RefuseApplicantOutcomeCallable TrademarkClient::refuseApplicantCallable(const RefuseApplicantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefuseApplicantOutcome()>>(
			[this, request]()
			{
			return this->refuseApplicant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::RejectApplicantOutcome TrademarkClient::rejectApplicant(const RejectApplicantRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RejectApplicantOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RejectApplicantOutcome(RejectApplicantResult(outcome.result()));
	else
		return RejectApplicantOutcome(outcome.error());
}

void TrademarkClient::rejectApplicantAsync(const RejectApplicantRequest& request, const RejectApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rejectApplicant(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::RejectApplicantOutcomeCallable TrademarkClient::rejectApplicantCallable(const RejectApplicantRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RejectApplicantOutcome()>>(
			[this, request]()
			{
			return this->rejectApplicant(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::SaveTaskOutcome TrademarkClient::saveTask(const SaveTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskOutcome(SaveTaskResult(outcome.result()));
	else
		return SaveTaskOutcome(outcome.error());
}

void TrademarkClient::saveTaskAsync(const SaveTaskRequest& request, const SaveTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::SaveTaskOutcomeCallable TrademarkClient::saveTaskCallable(const SaveTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskOutcome()>>(
			[this, request]()
			{
			return this->saveTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::SaveTaskForOfficialFileCustomOutcome TrademarkClient::saveTaskForOfficialFileCustom(const SaveTaskForOfficialFileCustomRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTaskForOfficialFileCustomOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTaskForOfficialFileCustomOutcome(SaveTaskForOfficialFileCustomResult(outcome.result()));
	else
		return SaveTaskForOfficialFileCustomOutcome(outcome.error());
}

void TrademarkClient::saveTaskForOfficialFileCustomAsync(const SaveTaskForOfficialFileCustomRequest& request, const SaveTaskForOfficialFileCustomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTaskForOfficialFileCustom(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::SaveTaskForOfficialFileCustomOutcomeCallable TrademarkClient::saveTaskForOfficialFileCustomCallable(const SaveTaskForOfficialFileCustomRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTaskForOfficialFileCustomOutcome()>>(
			[this, request]()
			{
			return this->saveTaskForOfficialFileCustom(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::SaveTradeMarkReviewMaterialDetailOutcome TrademarkClient::saveTradeMarkReviewMaterialDetail(const SaveTradeMarkReviewMaterialDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTradeMarkReviewMaterialDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTradeMarkReviewMaterialDetailOutcome(SaveTradeMarkReviewMaterialDetailResult(outcome.result()));
	else
		return SaveTradeMarkReviewMaterialDetailOutcome(outcome.error());
}

void TrademarkClient::saveTradeMarkReviewMaterialDetailAsync(const SaveTradeMarkReviewMaterialDetailRequest& request, const SaveTradeMarkReviewMaterialDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTradeMarkReviewMaterialDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::SaveTradeMarkReviewMaterialDetailOutcomeCallable TrademarkClient::saveTradeMarkReviewMaterialDetailCallable(const SaveTradeMarkReviewMaterialDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTradeMarkReviewMaterialDetailOutcome()>>(
			[this, request]()
			{
			return this->saveTradeMarkReviewMaterialDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::SearchTmOnsalesOutcome TrademarkClient::searchTmOnsales(const SearchTmOnsalesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTmOnsalesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTmOnsalesOutcome(SearchTmOnsalesResult(outcome.result()));
	else
		return SearchTmOnsalesOutcome(outcome.error());
}

void TrademarkClient::searchTmOnsalesAsync(const SearchTmOnsalesRequest& request, const SearchTmOnsalesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTmOnsales(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::SearchTmOnsalesOutcomeCallable TrademarkClient::searchTmOnsalesCallable(const SearchTmOnsalesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTmOnsalesOutcome()>>(
			[this, request]()
			{
			return this->searchTmOnsales(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::StartNotaryOutcome TrademarkClient::startNotary(const StartNotaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartNotaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartNotaryOutcome(StartNotaryResult(outcome.result()));
	else
		return StartNotaryOutcome(outcome.error());
}

void TrademarkClient::startNotaryAsync(const StartNotaryRequest& request, const StartNotaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startNotary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::StartNotaryOutcomeCallable TrademarkClient::startNotaryCallable(const StartNotaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartNotaryOutcome()>>(
			[this, request]()
			{
			return this->startNotary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::StoreMaterialTemporarilyOutcome TrademarkClient::storeMaterialTemporarily(const StoreMaterialTemporarilyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StoreMaterialTemporarilyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StoreMaterialTemporarilyOutcome(StoreMaterialTemporarilyResult(outcome.result()));
	else
		return StoreMaterialTemporarilyOutcome(outcome.error());
}

void TrademarkClient::storeMaterialTemporarilyAsync(const StoreMaterialTemporarilyRequest& request, const StoreMaterialTemporarilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, storeMaterialTemporarily(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::StoreMaterialTemporarilyOutcomeCallable TrademarkClient::storeMaterialTemporarilyCallable(const StoreMaterialTemporarilyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StoreMaterialTemporarilyOutcome()>>(
			[this, request]()
			{
			return this->storeMaterialTemporarily(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::SubmitSupplementOutcome TrademarkClient::submitSupplement(const SubmitSupplementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSupplementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSupplementOutcome(SubmitSupplementResult(outcome.result()));
	else
		return SubmitSupplementOutcome(outcome.error());
}

void TrademarkClient::submitSupplementAsync(const SubmitSupplementRequest& request, const SubmitSupplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSupplement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::SubmitSupplementOutcomeCallable TrademarkClient::submitSupplementCallable(const SubmitSupplementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSupplementOutcome()>>(
			[this, request]()
			{
			return this->submitSupplement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::UpdateMaterialOutcome TrademarkClient::updateMaterial(const UpdateMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMaterialOutcome(UpdateMaterialResult(outcome.result()));
	else
		return UpdateMaterialOutcome(outcome.error());
}

void TrademarkClient::updateMaterialAsync(const UpdateMaterialRequest& request, const UpdateMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::UpdateMaterialOutcomeCallable TrademarkClient::updateMaterialCallable(const UpdateMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMaterialOutcome()>>(
			[this, request]()
			{
			return this->updateMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::UpdateSendMaterialNumOutcome TrademarkClient::updateSendMaterialNum(const UpdateSendMaterialNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSendMaterialNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSendMaterialNumOutcome(UpdateSendMaterialNumResult(outcome.result()));
	else
		return UpdateSendMaterialNumOutcome(outcome.error());
}

void TrademarkClient::updateSendMaterialNumAsync(const UpdateSendMaterialNumRequest& request, const UpdateSendMaterialNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSendMaterialNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::UpdateSendMaterialNumOutcomeCallable TrademarkClient::updateSendMaterialNumCallable(const UpdateSendMaterialNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSendMaterialNumOutcome()>>(
			[this, request]()
			{
			return this->updateSendMaterialNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::UpdateTmMonitorRuleOutcome TrademarkClient::updateTmMonitorRule(const UpdateTmMonitorRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTmMonitorRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTmMonitorRuleOutcome(UpdateTmMonitorRuleResult(outcome.result()));
	else
		return UpdateTmMonitorRuleOutcome(outcome.error());
}

void TrademarkClient::updateTmMonitorRuleAsync(const UpdateTmMonitorRuleRequest& request, const UpdateTmMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTmMonitorRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::UpdateTmMonitorRuleOutcomeCallable TrademarkClient::updateTmMonitorRuleCallable(const UpdateTmMonitorRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTmMonitorRuleOutcome()>>(
			[this, request]()
			{
			return this->updateTmMonitorRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::UploadNotaryDataOutcome TrademarkClient::uploadNotaryData(const UploadNotaryDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadNotaryDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadNotaryDataOutcome(UploadNotaryDataResult(outcome.result()));
	else
		return UploadNotaryDataOutcome(outcome.error());
}

void TrademarkClient::uploadNotaryDataAsync(const UploadNotaryDataRequest& request, const UploadNotaryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadNotaryData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::UploadNotaryDataOutcomeCallable TrademarkClient::uploadNotaryDataCallable(const UploadNotaryDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadNotaryDataOutcome()>>(
			[this, request]()
			{
			return this->uploadNotaryData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::WriteCommunicationLogOutcome TrademarkClient::writeCommunicationLog(const WriteCommunicationLogRequest &request) const
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

void TrademarkClient::writeCommunicationLogAsync(const WriteCommunicationLogRequest& request, const WriteCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeCommunicationLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::WriteCommunicationLogOutcomeCallable TrademarkClient::writeCommunicationLogCallable(const WriteCommunicationLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteCommunicationLogOutcome()>>(
			[this, request]()
			{
			return this->writeCommunicationLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

TrademarkClient::WriteIntentionCommunicationLogOutcome TrademarkClient::writeIntentionCommunicationLog(const WriteIntentionCommunicationLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WriteIntentionCommunicationLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WriteIntentionCommunicationLogOutcome(WriteIntentionCommunicationLogResult(outcome.result()));
	else
		return WriteIntentionCommunicationLogOutcome(outcome.error());
}

void TrademarkClient::writeIntentionCommunicationLogAsync(const WriteIntentionCommunicationLogRequest& request, const WriteIntentionCommunicationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, writeIntentionCommunicationLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

TrademarkClient::WriteIntentionCommunicationLogOutcomeCallable TrademarkClient::writeIntentionCommunicationLogCallable(const WriteIntentionCommunicationLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WriteIntentionCommunicationLogOutcome()>>(
			[this, request]()
			{
			return this->writeIntentionCommunicationLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

