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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSETTLEMENTBILLRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSETTLEMENTBILLRESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QuerySettlementBillResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Item
					{
						float afterTaxAmount;
						std::string config;
						std::string originalOrderID;
						std::string clearedTime;
						float accountDiscount;
						float deductedByCashCoupons;
						std::string paymentTime;
						float tax;
						std::string paymentCurrency;
						std::string payerAccount;
						std::string promotion;
						std::string orderID;
						float paymentAmount;
						float deductedByPrepaidCard;
						std::string usageEndTime;
						std::string item;
						std::string subscriptionType;
						float pretaxGrossAmount;
						std::string orderType;
						std::string solutionID;
						std::string currency;
						std::string billID;
						std::string usageStartTime;
						float mybankPaymentAmount;
						std::string solutionName;
						std::string suborderID;
						std::string status;
						float deductedByCoupons;
						float previousBillingCycleBalance;
						std::string linkedCustomerOrderID;
						std::string productCode;
						std::string createTime;
						std::string productType;
						float chargeDiscount;
						float outstandingAmount;
						std::string quantity;
						std::string invoiceNo;
						float pretaxAmount;
						std::string ownerID;
						std::string region;
						std::string seller;
						std::string recordID;
						float pretaxAmountLocal;
					};
					std::string billingCycle;
					int totalCount;
					int pageNum;
					int pageSize;
					std::vector<Item> items;
				};


				QuerySettlementBillResult();
				explicit QuerySettlementBillResult(const std::string &payload);
				~QuerySettlementBillResult();
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
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSETTLEMENTBILLRESULT_H_