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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATERESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATERESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeInstanceAmortizedCostByAmortizationPeriodDateResult : public ServiceResult
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
						std::string instanceID;
						long billAccountID;
						std::string productDetailCode;
						double previouslyAmortizedRoundDownDiscount;
						std::string amortizationStatus;
						double deductedByPrepaidCard;
						std::string splitItemName;
						std::string subscriptionType;
						double currentAmortizationDeductedByCashCoupons;
						std::string costUnitCode;
						double remainingAmortizationDeductedByPrepaidCard;
						std::string costUnit;
						std::string amortizationPeriodDay;
						double deductedByCoupons;
						std::string consumePeriodDay;
						std::string productCode;
						long billOwnerID;
						std::string bizType;
						double previouslyAmortizedPretaxAmount;
						std::string intranetIP;
						double currentAmortizationPretaxGrossAmount;
						std::string internetIP;
						double remainingAmortizationExpenditureAmount;
						std::string region;
						double remainingAmortizationInvoiceDiscount;
						double previouslyAmortizedDeductedByCashCoupons;
						double currentAmortizationDeductedByCoupons;
						double currentAmortizationRoundDownDiscount;
						double currentAmortizationExpenditureAmount;
						double remainingAmortizationRoundDownDiscount;
						double previouslyAmortizedInvoiceDiscount;
						double deductedByCashCoupons;
						double previouslyAmortizedDeductedByCoupons;
						double remainingAmortizationDeductedByCashCoupons;
						double invoiceDiscount;
						std::string splitProductDetail;
						double currentAmortizationDeductedByPrepaidCard;
						std::string amortizationPeriod;
						double pretaxGrossAmount;
						double previouslyAmortizedPretaxGrossAmount;
						std::string resourceGroup;
						std::string splitAccountName;
						double roundDownDiscount;
						std::string productDetail;
						std::string consumePeriod;
						std::string zone;
						std::string billOwnerName;
						std::string splitItemID;
						double remainingAmortizationPretaxGrossAmount;
						double pretaxAmount;
						double currentAmortizationInvoiceDiscount;
						double expenditureAmount;
						double remainingAmortizationPretaxAmount;
						std::string billAccountName;
						std::string tag;
						double previouslyAmortizedDeductedByPrepaidCard;
					};
					int totalCount;
					std::string accountID;
					std::string nextToken;
					int maxResults;
					std::vector<Item> items;
					std::string hostId;
					std::string accountName;
				};


				DescribeInstanceAmortizedCostByAmortizationPeriodDateResult();
				explicit DescribeInstanceAmortizedCostByAmortizationPeriodDateResult(const std::string &payload);
				~DescribeInstanceAmortizedCostByAmortizationPeriodDateResult();
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
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEAMORTIZEDCOSTBYAMORTIZATIONPERIODDATERESULT_H_