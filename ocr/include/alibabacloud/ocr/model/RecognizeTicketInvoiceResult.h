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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZETICKETINVOICERESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZETICKETINVOICERESULT_H_

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
			class ALIBABACLOUD_OCR_EXPORT RecognizeTicketInvoiceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ResultsItem
					{
						struct Content
						{
							std::string payeeName;
							std::string antiFakeCode;
							std::string invoiceCode;
							std::string payeeRegisterNo;
							std::string payerRegisterNo;
							std::string invoiceNumber;
							std::string invoiceDate;
							std::string payerName;
							std::string sumAmount;
						};
						struct KeyValueInfosItem
						{
							struct ValuePositionsItem
							{
								long x;
								long y;
							};
							std::vector<KeyValueInfosItem::ValuePositionsItem> valuePositions;
							std::string value;
							float valueScore;
							std::string key;
						};
						struct SliceRectangleItem
						{
							long x;
							long y;
						};
						std::string type;
						std::vector<ResultsItem::SliceRectangleItem> sliceRectangle;
						Content content;
						std::vector<ResultsItem::KeyValueInfosItem> keyValueInfos;
						long index;
					};
					long orgWidth;
					std::vector<ResultsItem> results;
					long orgHeight;
					long height;
					long count;
					long width;
				};


				RecognizeTicketInvoiceResult();
				explicit RecognizeTicketInvoiceResult(const std::string &payload);
				~RecognizeTicketInvoiceResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZETICKETINVOICERESULT_H_