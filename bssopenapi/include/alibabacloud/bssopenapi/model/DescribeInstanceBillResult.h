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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEBILLRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEBILLRESULT_H_

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
			class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeInstanceBillResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Item
					{
						std::string instanceSpec;
						std::string productName;
						std::string instanceID;
						std::string billAccountID;
						float deductedByCashCoupons;
						std::string listPriceUnit;
						std::string billingDate;
						std::string listPrice;
						float paymentAmount;
						float deductedByPrepaidCard;
						float invoiceDiscount;
						std::string subscriptionType;
						std::string item;
						float pretaxGrossAmount;
						std::string instanceConfig;
						std::string currency;
						std::string commodityCode;
						std::string costUnit;
						std::string resourceGroup;
						std::string billingType;
						std::string usage;
						float deductedByCoupons;
						std::string productDetail;
						std::string productCode;
						std::string zone;
						std::string productType;
						float outstandingAmount;
						std::string bizType;
						std::string billingItem;
						std::string nickName;
						std::string intranetIP;
						std::string pipCode;
						std::string servicePeriodUnit;
						std::string servicePeriod;
						std::string deductedByResourcePackage;
						std::string usageUnit;
						std::string ownerID;
						float pretaxAmount;
						std::string internetIP;
						std::string region;
						std::string billAccountName;
						std::string tag;
					};
					std::string billingCycle;
					int totalCount;
					std::string accountID;
					std::string nextToken;
					int maxResults;
					std::vector<Item> items;
					std::string accountName;
				};


				DescribeInstanceBillResult();
				explicit DescribeInstanceBillResult(const std::string &payload);
				~DescribeInstanceBillResult();
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
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBEINSTANCEBILLRESULT_H_