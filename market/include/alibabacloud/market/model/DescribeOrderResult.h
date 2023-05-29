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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEORDERRESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeOrderResult : public ServiceResult
			{
			public:


				DescribeOrderResult();
				explicit DescribeOrderResult(const std::string &payload);
				~DescribeOrderResult();
				long getPaidOn()const;
				float getCouponPrice()const;
				std::string getPeriodType()const;
				float getOriginalPrice()const;
				std::string getPayStatus()const;
				std::string getProductName()const;
				std::string getProductCode()const;
				std::string getSupplierCompanyName()const;
				int getQuantity()const;
				long getOrderId()const;
				std::vector<std::string> getSupplierTelephones()const;
				std::string getComponents()const;
				std::string getOrderStatus()const;
				std::string getOrderType()const;
				float getTotalPrice()const;
				std::string getProductSkuCode()const;
				float getPaymentPrice()const;
				long getCreatedOn()const;
				std::vector<std::string> getInstanceIds()const;
				long getAccountQuantity()const;
				long getAliUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				long paidOn_;
				float couponPrice_;
				std::string periodType_;
				float originalPrice_;
				std::string payStatus_;
				std::string productName_;
				std::string productCode_;
				std::string supplierCompanyName_;
				int quantity_;
				long orderId_;
				std::vector<std::string> supplierTelephones_;
				std::string components_;
				std::string orderStatus_;
				std::string orderType_;
				float totalPrice_;
				std::string productSkuCode_;
				float paymentPrice_;
				long createdOn_;
				std::vector<std::string> instanceIds_;
				long accountQuantity_;
				long aliUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEORDERRESULT_H_