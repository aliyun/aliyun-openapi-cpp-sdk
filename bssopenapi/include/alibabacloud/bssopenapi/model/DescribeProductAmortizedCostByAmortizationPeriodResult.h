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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeProductAmortizedCostByAmortizationPeriodResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Item
					{
						double currentAmortizationPretaxAmount;
						double remainingAmortizationDeductedByCoupons;
						std::string productName;
						double previouslyAmortizedExpenditureAmount;
						double currentAmortizationRoundDownDiscount;
						double currentAmortizationExpenditureAmount;
						double remainingAmortizationRoundDownDiscount;
						long billAccountID;
						std::string productDetailCode;
						double previouslyAmortizedRoundDownDiscount;
						double previouslyAmortizedInvoiceDiscount;
						double deductedByCashCoupons;
						double previouslyAmortizedDeductedByCoupons;
						std::string amortizationStatus;
						double remainingAmortizationDeductedByCashCoupons;
						double deductedByPrepaidCard;
						double invoiceDiscount;
						double currentAmortizationDeductedByPrepaidCard;
						std::string amortizationPeriod;
						std::string subscriptionType;
						double pretaxGrossAmount;
						double currentAmortizationDeductedByCashCoupons;
						double remainingAmortizationDeductedByPrepaidCard;
						double previouslyAmortizedPretaxGrossAmount;
						double deductedByCoupons;
						double roundDownDiscount;
						std::string productDetail;
						std::string consumePeriod;
						std::string productCode;
						long billOwnerID;
						std::string bizType;
						double previouslyAmortizedPretaxAmount;
						double currentAmortizationPretaxGrossAmount;
						std::string billOwnerName;
						double remainingAmortizationPretaxGrossAmount;
						double pretaxAmount;
						double remainingAmortizationExpenditureAmount;
						double currentAmortizationInvoiceDiscount;
						double expenditureAmount;
						double remainingAmortizationPretaxAmount;
						std::string billAccountName;
						double remainingAmortizationInvoiceDiscount;
						double previouslyAmortizedDeductedByCashCoupons;
						double previouslyAmortizedDeductedByPrepaidCard;
						double currentAmortizationDeductedByCoupons;
					};
					int totalCount;
					std::string accountID;
					std::string nextToken;
					int maxResults;
					std::vector<Item> items;
					std::string accountName;
				};


				DescribeProductAmortizedCostByAmortizationPeriodResult();
				explicit DescribeProductAmortizedCostByAmortizationPeriodResult(const std::string &payload);
				~DescribeProductAmortizedCostByAmortizationPeriodResult();
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
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEPRODUCTAMORTIZEDCOSTBYAMORTIZATIONPERIODRESULT_H_