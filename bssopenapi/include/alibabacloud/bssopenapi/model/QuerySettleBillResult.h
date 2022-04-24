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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSETTLEBILLRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSETTLEBILLRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QuerySettleBillResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Item
					{
						float afterTaxAmount;
						std::string productName;
						std::string subOrderId;
						std::string billAccountID;
						float deductedByCashCoupons;
						std::string paymentTime;
						float tax;
						std::string paymentCurrency;
						float paymentAmount;
						float deductedByPrepaidCard;
						float invoiceDiscount;
						std::string usageEndTime;
						std::string item;
						std::string subscriptionType;
						float pretaxGrossAmount;
						std::string currency;
						std::string commodityCode;
						std::string usageStartTime;
						float adjustAmount;
						std::string status;
						std::string paymentTransactionID;
						float deductedByCoupons;
						std::string roundDownDiscount;
						std::string productDetail;
						std::string productCode;
						std::string productType;
						float outstandingAmount;
						std::string bizType;
						std::string pipCode;
						float pretaxAmount;
						std::string ownerID;
						std::string billAccountName;
						std::string recordID;
						float cashAmount;
						float pretaxAmountLocal;
					};
					std::string billingCycle;
					int totalCount;
					std::string accountID;
					std::string nextToken;
					int maxResults;
					std::vector<Item> items;
					std::string accountName;
				};


				QuerySettleBillResult();
				explicit QuerySettleBillResult(const std::string &payload);
				~QuerySettleBillResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSETTLEBILLRESULT_H_