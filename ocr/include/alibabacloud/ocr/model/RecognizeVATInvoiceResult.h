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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZEVATINVOICERESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZEVATINVOICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ocr/OcrExport.h>

namespace AlibabaCloud
{
	namespace Ocr
	{
		namespace Model
		{
			class ALIBABACLOUD_OCR_EXPORT RecognizeVATInvoiceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Box
					{
						std::vector<std::string> payerRegisterNoes;
						std::vector<std::string> payerAddresses;
						std::vector<std::string> invoiceAmounts;
						std::vector<std::string> invoiceDates;
						std::vector<std::string> payeeAddresses;
						std::vector<std::string> clerks;
						std::vector<std::string> withoutTaxAmounts;
						std::vector<std::string> checkers;
						std::vector<std::string> taxAmounts;
						std::vector<std::string> invoiceCodes;
						std::vector<std::string> sumAmounts;
						std::vector<std::string> itemNames;
						std::vector<std::string> payerNames;
						std::vector<std::string> invoiceFakeCodes;
						std::vector<std::string> payeeBankNames;
						std::vector<std::string> payeeNames;
						std::vector<std::string> payees;
						std::vector<std::string> invoiceNoes;
						std::vector<std::string> payerBankNames;
						std::vector<std::string> payeeRegisterNoes;
					};
					struct Content
					{
						std::string checker;
						std::string payeeAddress;
						std::string payeeName;
						std::string payerAddress;
						std::string antiFakeCode;
						std::string payerBankName;
						std::string invoiceNo;
						std::string payerRegisterNo;
						std::string withoutTaxAmount;
						std::string invoiceAmount;
						std::string payerName;
						std::string taxAmount;
						std::string payeeBankName;
						std::string clerk;
						std::vector<std::string> itemName;
						std::string payeeRegisterNo;
						std::string invoiceCode;
						std::string invoiceDate;
						std::string sumAmount;
						std::string payee;
					};
					Content content;
					Box box;
				};


				RecognizeVATInvoiceResult();
				explicit RecognizeVATInvoiceResult(const std::string &payload);
				~RecognizeVATInvoiceResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZEVATINVOICERESULT_H_