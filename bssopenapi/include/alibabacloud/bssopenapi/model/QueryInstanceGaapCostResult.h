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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYINSTANCEGAAPCOSTRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYINSTANCEGAAPCOSTRESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryInstanceGaapCostResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Module
					{
						std::string monthGaapPretaxGrossAmount;
						std::string instanceID;
						std::string accountingUnit;
						std::string gaapPaymentAmount;
						std::string paymentCurrency;
						std::string payerAccount;
						std::string paymentAmount;
						std::string deductedByPrepaidCard;
						std::string subscriptionType;
						std::string orderType;
						std::string unallocatedPretaxAmountLocal;
						std::string currency;
						std::string monthGaapPaymentAmount;
						std::string deductedByCoupons;
						std::string billingCycle;
						std::string monthGaapDeductedByCashCoupons;
						std::string productCode;
						std::string productType;
						std::string gaapDeductedByCashCoupons;
						std::string unallocatedDeductedByCoupons;
						std::string orderId;
						std::string unallocatedPricingDiscount;
						std::string unallocatedDeductedByPrepaidCard;
						std::string ownerID;
						std::string monthGaapDeductedByCoupons;
						std::string usageEndDate;
						std::string region;
						std::string unallocatedPretaxGrossAmount;
						std::string payTime;
						std::string gaapPricingDiscount;
						std::string monthGaapPretaxAmountLocal;
						std::string pretaxAmountLocal;
						std::string gaapPretaxAmount;
						std::string subOrderId;
						std::string deductedByCashCoupons;
						std::string pricingDiscount;
						std::string pretaxGrossAmount;
						std::string gaapPretaxAmountLocal;
						std::string gaapDeductedByCoupons;
						std::string monthGaapPricingDiscount;
						std::string resourceGroup;
						std::string billType;
						std::string monthGaapPretaxAmount;
						std::string usageStartDate;
						std::string monthGaapDeductedByPrepaidCard;
						std::string unallocatedPaymentAmount;
						std::string gaapDeductedByPrepaidCard;
						std::string gaapPretaxGrossAmount;
						std::string pretaxAmount;
						std::string unallocatedDeductedByCashCoupons;
						std::string tag;
						std::string unallocatedPretaxAmount;
					};
					int totalCount;
					int pageNum;
					int pageSize;
					std::vector<Module> modules;
					std::string hostId;
				};


				QueryInstanceGaapCostResult();
				explicit QueryInstanceGaapCostResult(const std::string &payload);
				~QueryInstanceGaapCostResult();
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
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYINSTANCEGAAPCOSTRESULT_H_