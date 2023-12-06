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

#ifndef ALIBABACLOUD_OCR_OCRCLIENT_H_
#define ALIBABACLOUD_OCR_OCRCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OcrExport.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/RecognizeBankCardRequest.h"
#include "model/RecognizeBankCardResult.h"
#include "model/RecognizeBusinessLicenseRequest.h"
#include "model/RecognizeBusinessLicenseResult.h"
#include "model/RecognizeCharacterRequest.h"
#include "model/RecognizeCharacterResult.h"
#include "model/RecognizeDriverLicenseRequest.h"
#include "model/RecognizeDriverLicenseResult.h"
#include "model/RecognizeDrivingLicenseRequest.h"
#include "model/RecognizeDrivingLicenseResult.h"
#include "model/RecognizeIdentityCardRequest.h"
#include "model/RecognizeIdentityCardResult.h"
#include "model/RecognizeLicensePlateRequest.h"
#include "model/RecognizeLicensePlateResult.h"
#include "model/RecognizePdfRequest.h"
#include "model/RecognizePdfResult.h"
#include "model/RecognizeQrCodeRequest.h"
#include "model/RecognizeQrCodeResult.h"
#include "model/RecognizeQuotaInvoiceRequest.h"
#include "model/RecognizeQuotaInvoiceResult.h"
#include "model/RecognizeTableRequest.h"
#include "model/RecognizeTableResult.h"
#include "model/RecognizeTaxiInvoiceRequest.h"
#include "model/RecognizeTaxiInvoiceResult.h"
#include "model/RecognizeTicketInvoiceRequest.h"
#include "model/RecognizeTicketInvoiceResult.h"
#include "model/RecognizeTrainTicketRequest.h"
#include "model/RecognizeTrainTicketResult.h"
#include "model/RecognizeVATInvoiceRequest.h"
#include "model/RecognizeVATInvoiceResult.h"
#include "model/RecognizeVINCodeRequest.h"
#include "model/RecognizeVINCodeResult.h"
#include "model/RecognizeVideoCharacterRequest.h"
#include "model/RecognizeVideoCharacterResult.h"


namespace AlibabaCloud
{
	namespace Ocr
	{
		class ALIBABACLOUD_OCR_EXPORT OcrClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::RecognizeBankCardResult> RecognizeBankCardOutcome;
			typedef std::future<RecognizeBankCardOutcome> RecognizeBankCardOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeBankCardRequest&, const RecognizeBankCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBankCardAsyncHandler;
			typedef Outcome<Error, Model::RecognizeBusinessLicenseResult> RecognizeBusinessLicenseOutcome;
			typedef std::future<RecognizeBusinessLicenseOutcome> RecognizeBusinessLicenseOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeBusinessLicenseRequest&, const RecognizeBusinessLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeBusinessLicenseAsyncHandler;
			typedef Outcome<Error, Model::RecognizeCharacterResult> RecognizeCharacterOutcome;
			typedef std::future<RecognizeCharacterOutcome> RecognizeCharacterOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeCharacterRequest&, const RecognizeCharacterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeCharacterAsyncHandler;
			typedef Outcome<Error, Model::RecognizeDriverLicenseResult> RecognizeDriverLicenseOutcome;
			typedef std::future<RecognizeDriverLicenseOutcome> RecognizeDriverLicenseOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeDriverLicenseRequest&, const RecognizeDriverLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeDriverLicenseAsyncHandler;
			typedef Outcome<Error, Model::RecognizeDrivingLicenseResult> RecognizeDrivingLicenseOutcome;
			typedef std::future<RecognizeDrivingLicenseOutcome> RecognizeDrivingLicenseOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeDrivingLicenseRequest&, const RecognizeDrivingLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeDrivingLicenseAsyncHandler;
			typedef Outcome<Error, Model::RecognizeIdentityCardResult> RecognizeIdentityCardOutcome;
			typedef std::future<RecognizeIdentityCardOutcome> RecognizeIdentityCardOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeIdentityCardRequest&, const RecognizeIdentityCardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeIdentityCardAsyncHandler;
			typedef Outcome<Error, Model::RecognizeLicensePlateResult> RecognizeLicensePlateOutcome;
			typedef std::future<RecognizeLicensePlateOutcome> RecognizeLicensePlateOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeLicensePlateRequest&, const RecognizeLicensePlateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeLicensePlateAsyncHandler;
			typedef Outcome<Error, Model::RecognizePdfResult> RecognizePdfOutcome;
			typedef std::future<RecognizePdfOutcome> RecognizePdfOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizePdfRequest&, const RecognizePdfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizePdfAsyncHandler;
			typedef Outcome<Error, Model::RecognizeQrCodeResult> RecognizeQrCodeOutcome;
			typedef std::future<RecognizeQrCodeOutcome> RecognizeQrCodeOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeQrCodeRequest&, const RecognizeQrCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeQrCodeAsyncHandler;
			typedef Outcome<Error, Model::RecognizeQuotaInvoiceResult> RecognizeQuotaInvoiceOutcome;
			typedef std::future<RecognizeQuotaInvoiceOutcome> RecognizeQuotaInvoiceOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeQuotaInvoiceRequest&, const RecognizeQuotaInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeQuotaInvoiceAsyncHandler;
			typedef Outcome<Error, Model::RecognizeTableResult> RecognizeTableOutcome;
			typedef std::future<RecognizeTableOutcome> RecognizeTableOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeTableRequest&, const RecognizeTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTableAsyncHandler;
			typedef Outcome<Error, Model::RecognizeTaxiInvoiceResult> RecognizeTaxiInvoiceOutcome;
			typedef std::future<RecognizeTaxiInvoiceOutcome> RecognizeTaxiInvoiceOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeTaxiInvoiceRequest&, const RecognizeTaxiInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTaxiInvoiceAsyncHandler;
			typedef Outcome<Error, Model::RecognizeTicketInvoiceResult> RecognizeTicketInvoiceOutcome;
			typedef std::future<RecognizeTicketInvoiceOutcome> RecognizeTicketInvoiceOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeTicketInvoiceRequest&, const RecognizeTicketInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTicketInvoiceAsyncHandler;
			typedef Outcome<Error, Model::RecognizeTrainTicketResult> RecognizeTrainTicketOutcome;
			typedef std::future<RecognizeTrainTicketOutcome> RecognizeTrainTicketOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeTrainTicketRequest&, const RecognizeTrainTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTrainTicketAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVATInvoiceResult> RecognizeVATInvoiceOutcome;
			typedef std::future<RecognizeVATInvoiceOutcome> RecognizeVATInvoiceOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeVATInvoiceRequest&, const RecognizeVATInvoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVATInvoiceAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVINCodeResult> RecognizeVINCodeOutcome;
			typedef std::future<RecognizeVINCodeOutcome> RecognizeVINCodeOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeVINCodeRequest&, const RecognizeVINCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVINCodeAsyncHandler;
			typedef Outcome<Error, Model::RecognizeVideoCharacterResult> RecognizeVideoCharacterOutcome;
			typedef std::future<RecognizeVideoCharacterOutcome> RecognizeVideoCharacterOutcomeCallable;
			typedef std::function<void(const OcrClient*, const Model::RecognizeVideoCharacterRequest&, const RecognizeVideoCharacterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeVideoCharacterAsyncHandler;

			OcrClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OcrClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OcrClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OcrClient();
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			RecognizeBankCardOutcome recognizeBankCard(const Model::RecognizeBankCardRequest &request)const;
			void recognizeBankCardAsync(const Model::RecognizeBankCardRequest& request, const RecognizeBankCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeBankCardOutcomeCallable recognizeBankCardCallable(const Model::RecognizeBankCardRequest& request) const;
			RecognizeBusinessLicenseOutcome recognizeBusinessLicense(const Model::RecognizeBusinessLicenseRequest &request)const;
			void recognizeBusinessLicenseAsync(const Model::RecognizeBusinessLicenseRequest& request, const RecognizeBusinessLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeBusinessLicenseOutcomeCallable recognizeBusinessLicenseCallable(const Model::RecognizeBusinessLicenseRequest& request) const;
			RecognizeCharacterOutcome recognizeCharacter(const Model::RecognizeCharacterRequest &request)const;
			void recognizeCharacterAsync(const Model::RecognizeCharacterRequest& request, const RecognizeCharacterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeCharacterOutcomeCallable recognizeCharacterCallable(const Model::RecognizeCharacterRequest& request) const;
			RecognizeDriverLicenseOutcome recognizeDriverLicense(const Model::RecognizeDriverLicenseRequest &request)const;
			void recognizeDriverLicenseAsync(const Model::RecognizeDriverLicenseRequest& request, const RecognizeDriverLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeDriverLicenseOutcomeCallable recognizeDriverLicenseCallable(const Model::RecognizeDriverLicenseRequest& request) const;
			RecognizeDrivingLicenseOutcome recognizeDrivingLicense(const Model::RecognizeDrivingLicenseRequest &request)const;
			void recognizeDrivingLicenseAsync(const Model::RecognizeDrivingLicenseRequest& request, const RecognizeDrivingLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeDrivingLicenseOutcomeCallable recognizeDrivingLicenseCallable(const Model::RecognizeDrivingLicenseRequest& request) const;
			RecognizeIdentityCardOutcome recognizeIdentityCard(const Model::RecognizeIdentityCardRequest &request)const;
			void recognizeIdentityCardAsync(const Model::RecognizeIdentityCardRequest& request, const RecognizeIdentityCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeIdentityCardOutcomeCallable recognizeIdentityCardCallable(const Model::RecognizeIdentityCardRequest& request) const;
			RecognizeLicensePlateOutcome recognizeLicensePlate(const Model::RecognizeLicensePlateRequest &request)const;
			void recognizeLicensePlateAsync(const Model::RecognizeLicensePlateRequest& request, const RecognizeLicensePlateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeLicensePlateOutcomeCallable recognizeLicensePlateCallable(const Model::RecognizeLicensePlateRequest& request) const;
			RecognizePdfOutcome recognizePdf(const Model::RecognizePdfRequest &request)const;
			void recognizePdfAsync(const Model::RecognizePdfRequest& request, const RecognizePdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizePdfOutcomeCallable recognizePdfCallable(const Model::RecognizePdfRequest& request) const;
			RecognizeQrCodeOutcome recognizeQrCode(const Model::RecognizeQrCodeRequest &request)const;
			void recognizeQrCodeAsync(const Model::RecognizeQrCodeRequest& request, const RecognizeQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeQrCodeOutcomeCallable recognizeQrCodeCallable(const Model::RecognizeQrCodeRequest& request) const;
			RecognizeQuotaInvoiceOutcome recognizeQuotaInvoice(const Model::RecognizeQuotaInvoiceRequest &request)const;
			void recognizeQuotaInvoiceAsync(const Model::RecognizeQuotaInvoiceRequest& request, const RecognizeQuotaInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeQuotaInvoiceOutcomeCallable recognizeQuotaInvoiceCallable(const Model::RecognizeQuotaInvoiceRequest& request) const;
			RecognizeTableOutcome recognizeTable(const Model::RecognizeTableRequest &request)const;
			void recognizeTableAsync(const Model::RecognizeTableRequest& request, const RecognizeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeTableOutcomeCallable recognizeTableCallable(const Model::RecognizeTableRequest& request) const;
			RecognizeTaxiInvoiceOutcome recognizeTaxiInvoice(const Model::RecognizeTaxiInvoiceRequest &request)const;
			void recognizeTaxiInvoiceAsync(const Model::RecognizeTaxiInvoiceRequest& request, const RecognizeTaxiInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeTaxiInvoiceOutcomeCallable recognizeTaxiInvoiceCallable(const Model::RecognizeTaxiInvoiceRequest& request) const;
			RecognizeTicketInvoiceOutcome recognizeTicketInvoice(const Model::RecognizeTicketInvoiceRequest &request)const;
			void recognizeTicketInvoiceAsync(const Model::RecognizeTicketInvoiceRequest& request, const RecognizeTicketInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeTicketInvoiceOutcomeCallable recognizeTicketInvoiceCallable(const Model::RecognizeTicketInvoiceRequest& request) const;
			RecognizeTrainTicketOutcome recognizeTrainTicket(const Model::RecognizeTrainTicketRequest &request)const;
			void recognizeTrainTicketAsync(const Model::RecognizeTrainTicketRequest& request, const RecognizeTrainTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeTrainTicketOutcomeCallable recognizeTrainTicketCallable(const Model::RecognizeTrainTicketRequest& request) const;
			RecognizeVATInvoiceOutcome recognizeVATInvoice(const Model::RecognizeVATInvoiceRequest &request)const;
			void recognizeVATInvoiceAsync(const Model::RecognizeVATInvoiceRequest& request, const RecognizeVATInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVATInvoiceOutcomeCallable recognizeVATInvoiceCallable(const Model::RecognizeVATInvoiceRequest& request) const;
			RecognizeVINCodeOutcome recognizeVINCode(const Model::RecognizeVINCodeRequest &request)const;
			void recognizeVINCodeAsync(const Model::RecognizeVINCodeRequest& request, const RecognizeVINCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVINCodeOutcomeCallable recognizeVINCodeCallable(const Model::RecognizeVINCodeRequest& request) const;
			RecognizeVideoCharacterOutcome recognizeVideoCharacter(const Model::RecognizeVideoCharacterRequest &request)const;
			void recognizeVideoCharacterAsync(const Model::RecognizeVideoCharacterRequest& request, const RecognizeVideoCharacterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeVideoCharacterOutcomeCallable recognizeVideoCharacterCallable(const Model::RecognizeVideoCharacterRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OCR_OCRCLIENT_H_
