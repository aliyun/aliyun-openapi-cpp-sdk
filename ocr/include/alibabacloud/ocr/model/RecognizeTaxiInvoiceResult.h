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

#ifndef ALIBABACLOUD_OCR_MODEL_RECOGNIZETAXIINVOICERESULT_H_
#define ALIBABACLOUD_OCR_MODEL_RECOGNIZETAXIINVOICERESULT_H_

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
			class ALIBABACLOUD_OCR_EXPORT RecognizeTaxiInvoiceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Invoice
					{
						struct InvoiceRoi
						{
							float w;
							float h;
							float x;
							float y;
						};
						struct Item
						{
							struct ItemRoi
							{
								struct Size
								{
									float w;
									float h;
								};
								struct Center
								{
									float x;
									float y;
								};
								Center center;
								float angle;
								Size size;
							};
							ItemRoi itemRoi;
							std::string text;
						};
						int rotateType;
						InvoiceRoi invoiceRoi;
						std::vector<Invoice::Item> items;
					};
					std::vector<Invoice> invoices;
				};


				RecognizeTaxiInvoiceResult();
				explicit RecognizeTaxiInvoiceResult(const std::string &payload);
				~RecognizeTaxiInvoiceResult();
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCR_MODEL_RECOGNIZETAXIINVOICERESULT_H_