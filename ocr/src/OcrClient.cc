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

#include <alibabacloud/ocr/OcrClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ocr;
using namespace AlibabaCloud::Ocr::Model;

namespace
{
	const std::string SERVICE_NAME = "ocr";
}

OcrClient::OcrClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ocr");
}

OcrClient::OcrClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ocr");
}

OcrClient::OcrClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ocr");
}

OcrClient::~OcrClient()
{}

OcrClient::GetAsyncJobResultOutcome OcrClient::getAsyncJobResult(const GetAsyncJobResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsyncJobResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsyncJobResultOutcome(GetAsyncJobResultResult(outcome.result()));
	else
		return GetAsyncJobResultOutcome(outcome.error());
}

void OcrClient::getAsyncJobResultAsync(const GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsyncJobResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::GetAsyncJobResultOutcomeCallable OcrClient::getAsyncJobResultCallable(const GetAsyncJobResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsyncJobResultOutcome()>>(
			[this, request]()
			{
			return this->getAsyncJobResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeBankCardOutcome OcrClient::recognizeBankCard(const RecognizeBankCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeBankCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeBankCardOutcome(RecognizeBankCardResult(outcome.result()));
	else
		return RecognizeBankCardOutcome(outcome.error());
}

void OcrClient::recognizeBankCardAsync(const RecognizeBankCardRequest& request, const RecognizeBankCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeBankCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeBankCardOutcomeCallable OcrClient::recognizeBankCardCallable(const RecognizeBankCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeBankCardOutcome()>>(
			[this, request]()
			{
			return this->recognizeBankCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeBusinessLicenseOutcome OcrClient::recognizeBusinessLicense(const RecognizeBusinessLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeBusinessLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeBusinessLicenseOutcome(RecognizeBusinessLicenseResult(outcome.result()));
	else
		return RecognizeBusinessLicenseOutcome(outcome.error());
}

void OcrClient::recognizeBusinessLicenseAsync(const RecognizeBusinessLicenseRequest& request, const RecognizeBusinessLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeBusinessLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeBusinessLicenseOutcomeCallable OcrClient::recognizeBusinessLicenseCallable(const RecognizeBusinessLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeBusinessLicenseOutcome()>>(
			[this, request]()
			{
			return this->recognizeBusinessLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeCharacterOutcome OcrClient::recognizeCharacter(const RecognizeCharacterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeCharacterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeCharacterOutcome(RecognizeCharacterResult(outcome.result()));
	else
		return RecognizeCharacterOutcome(outcome.error());
}

void OcrClient::recognizeCharacterAsync(const RecognizeCharacterRequest& request, const RecognizeCharacterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeCharacter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeCharacterOutcomeCallable OcrClient::recognizeCharacterCallable(const RecognizeCharacterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeCharacterOutcome()>>(
			[this, request]()
			{
			return this->recognizeCharacter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeDriverLicenseOutcome OcrClient::recognizeDriverLicense(const RecognizeDriverLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeDriverLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeDriverLicenseOutcome(RecognizeDriverLicenseResult(outcome.result()));
	else
		return RecognizeDriverLicenseOutcome(outcome.error());
}

void OcrClient::recognizeDriverLicenseAsync(const RecognizeDriverLicenseRequest& request, const RecognizeDriverLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeDriverLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeDriverLicenseOutcomeCallable OcrClient::recognizeDriverLicenseCallable(const RecognizeDriverLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeDriverLicenseOutcome()>>(
			[this, request]()
			{
			return this->recognizeDriverLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeDrivingLicenseOutcome OcrClient::recognizeDrivingLicense(const RecognizeDrivingLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeDrivingLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeDrivingLicenseOutcome(RecognizeDrivingLicenseResult(outcome.result()));
	else
		return RecognizeDrivingLicenseOutcome(outcome.error());
}

void OcrClient::recognizeDrivingLicenseAsync(const RecognizeDrivingLicenseRequest& request, const RecognizeDrivingLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeDrivingLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeDrivingLicenseOutcomeCallable OcrClient::recognizeDrivingLicenseCallable(const RecognizeDrivingLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeDrivingLicenseOutcome()>>(
			[this, request]()
			{
			return this->recognizeDrivingLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeIdentityCardOutcome OcrClient::recognizeIdentityCard(const RecognizeIdentityCardRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeIdentityCardOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeIdentityCardOutcome(RecognizeIdentityCardResult(outcome.result()));
	else
		return RecognizeIdentityCardOutcome(outcome.error());
}

void OcrClient::recognizeIdentityCardAsync(const RecognizeIdentityCardRequest& request, const RecognizeIdentityCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeIdentityCard(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeIdentityCardOutcomeCallable OcrClient::recognizeIdentityCardCallable(const RecognizeIdentityCardRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeIdentityCardOutcome()>>(
			[this, request]()
			{
			return this->recognizeIdentityCard(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeLicensePlateOutcome OcrClient::recognizeLicensePlate(const RecognizeLicensePlateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeLicensePlateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeLicensePlateOutcome(RecognizeLicensePlateResult(outcome.result()));
	else
		return RecognizeLicensePlateOutcome(outcome.error());
}

void OcrClient::recognizeLicensePlateAsync(const RecognizeLicensePlateRequest& request, const RecognizeLicensePlateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeLicensePlate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeLicensePlateOutcomeCallable OcrClient::recognizeLicensePlateCallable(const RecognizeLicensePlateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeLicensePlateOutcome()>>(
			[this, request]()
			{
			return this->recognizeLicensePlate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizePdfOutcome OcrClient::recognizePdf(const RecognizePdfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizePdfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizePdfOutcome(RecognizePdfResult(outcome.result()));
	else
		return RecognizePdfOutcome(outcome.error());
}

void OcrClient::recognizePdfAsync(const RecognizePdfRequest& request, const RecognizePdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizePdf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizePdfOutcomeCallable OcrClient::recognizePdfCallable(const RecognizePdfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizePdfOutcome()>>(
			[this, request]()
			{
			return this->recognizePdf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeQrCodeOutcome OcrClient::recognizeQrCode(const RecognizeQrCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeQrCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeQrCodeOutcome(RecognizeQrCodeResult(outcome.result()));
	else
		return RecognizeQrCodeOutcome(outcome.error());
}

void OcrClient::recognizeQrCodeAsync(const RecognizeQrCodeRequest& request, const RecognizeQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeQrCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeQrCodeOutcomeCallable OcrClient::recognizeQrCodeCallable(const RecognizeQrCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeQrCodeOutcome()>>(
			[this, request]()
			{
			return this->recognizeQrCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeQuotaInvoiceOutcome OcrClient::recognizeQuotaInvoice(const RecognizeQuotaInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeQuotaInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeQuotaInvoiceOutcome(RecognizeQuotaInvoiceResult(outcome.result()));
	else
		return RecognizeQuotaInvoiceOutcome(outcome.error());
}

void OcrClient::recognizeQuotaInvoiceAsync(const RecognizeQuotaInvoiceRequest& request, const RecognizeQuotaInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeQuotaInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeQuotaInvoiceOutcomeCallable OcrClient::recognizeQuotaInvoiceCallable(const RecognizeQuotaInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeQuotaInvoiceOutcome()>>(
			[this, request]()
			{
			return this->recognizeQuotaInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeTableOutcome OcrClient::recognizeTable(const RecognizeTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeTableOutcome(RecognizeTableResult(outcome.result()));
	else
		return RecognizeTableOutcome(outcome.error());
}

void OcrClient::recognizeTableAsync(const RecognizeTableRequest& request, const RecognizeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeTableOutcomeCallable OcrClient::recognizeTableCallable(const RecognizeTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeTableOutcome()>>(
			[this, request]()
			{
			return this->recognizeTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeTaxiInvoiceOutcome OcrClient::recognizeTaxiInvoice(const RecognizeTaxiInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeTaxiInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeTaxiInvoiceOutcome(RecognizeTaxiInvoiceResult(outcome.result()));
	else
		return RecognizeTaxiInvoiceOutcome(outcome.error());
}

void OcrClient::recognizeTaxiInvoiceAsync(const RecognizeTaxiInvoiceRequest& request, const RecognizeTaxiInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeTaxiInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeTaxiInvoiceOutcomeCallable OcrClient::recognizeTaxiInvoiceCallable(const RecognizeTaxiInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeTaxiInvoiceOutcome()>>(
			[this, request]()
			{
			return this->recognizeTaxiInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeTicketInvoiceOutcome OcrClient::recognizeTicketInvoice(const RecognizeTicketInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeTicketInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeTicketInvoiceOutcome(RecognizeTicketInvoiceResult(outcome.result()));
	else
		return RecognizeTicketInvoiceOutcome(outcome.error());
}

void OcrClient::recognizeTicketInvoiceAsync(const RecognizeTicketInvoiceRequest& request, const RecognizeTicketInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeTicketInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeTicketInvoiceOutcomeCallable OcrClient::recognizeTicketInvoiceCallable(const RecognizeTicketInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeTicketInvoiceOutcome()>>(
			[this, request]()
			{
			return this->recognizeTicketInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeTrainTicketOutcome OcrClient::recognizeTrainTicket(const RecognizeTrainTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeTrainTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeTrainTicketOutcome(RecognizeTrainTicketResult(outcome.result()));
	else
		return RecognizeTrainTicketOutcome(outcome.error());
}

void OcrClient::recognizeTrainTicketAsync(const RecognizeTrainTicketRequest& request, const RecognizeTrainTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeTrainTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeTrainTicketOutcomeCallable OcrClient::recognizeTrainTicketCallable(const RecognizeTrainTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeTrainTicketOutcome()>>(
			[this, request]()
			{
			return this->recognizeTrainTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeVATInvoiceOutcome OcrClient::recognizeVATInvoice(const RecognizeVATInvoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeVATInvoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeVATInvoiceOutcome(RecognizeVATInvoiceResult(outcome.result()));
	else
		return RecognizeVATInvoiceOutcome(outcome.error());
}

void OcrClient::recognizeVATInvoiceAsync(const RecognizeVATInvoiceRequest& request, const RecognizeVATInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeVATInvoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeVATInvoiceOutcomeCallable OcrClient::recognizeVATInvoiceCallable(const RecognizeVATInvoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeVATInvoiceOutcome()>>(
			[this, request]()
			{
			return this->recognizeVATInvoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeVINCodeOutcome OcrClient::recognizeVINCode(const RecognizeVINCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeVINCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeVINCodeOutcome(RecognizeVINCodeResult(outcome.result()));
	else
		return RecognizeVINCodeOutcome(outcome.error());
}

void OcrClient::recognizeVINCodeAsync(const RecognizeVINCodeRequest& request, const RecognizeVINCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeVINCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeVINCodeOutcomeCallable OcrClient::recognizeVINCodeCallable(const RecognizeVINCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeVINCodeOutcome()>>(
			[this, request]()
			{
			return this->recognizeVINCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OcrClient::RecognizeVideoCharacterOutcome OcrClient::recognizeVideoCharacter(const RecognizeVideoCharacterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecognizeVideoCharacterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecognizeVideoCharacterOutcome(RecognizeVideoCharacterResult(outcome.result()));
	else
		return RecognizeVideoCharacterOutcome(outcome.error());
}

void OcrClient::recognizeVideoCharacterAsync(const RecognizeVideoCharacterRequest& request, const RecognizeVideoCharacterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recognizeVideoCharacter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OcrClient::RecognizeVideoCharacterOutcomeCallable OcrClient::recognizeVideoCharacterCallable(const RecognizeVideoCharacterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecognizeVideoCharacterOutcome()>>(
			[this, request]()
			{
			return this->recognizeVideoCharacter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

