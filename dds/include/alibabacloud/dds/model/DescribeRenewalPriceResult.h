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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBERENEWALPRICERESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBERENEWALPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeRenewalPriceResult : public ServiceResult
			{
			public:
				struct Order
				{
					struct Coupon
					{
						std::string couponNo;
						std::string description;
						std::string isSelected;
						std::string name;
					};
					std::vector<std::string> ruleIds1;
					std::string currency;
					float tradeAmount;
					std::vector<Coupon> coupons;
					float originalAmount;
					float discountAmount;
				};
				struct SubOrder
				{
					std::string instanceId;
					std::vector<std::string> ruleIds;
					float tradeAmount;
					float originalAmount;
					float discountAmount;
				};
				struct Rule
				{
					long ruleDescId;
					std::string title;
					std::string name;
				};


				DescribeRenewalPriceResult();
				explicit DescribeRenewalPriceResult(const std::string &payload);
				~DescribeRenewalPriceResult();
				Order getOrder()const;
				std::vector<SubOrder> getSubOrders()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				Order order_;
				std::vector<SubOrder> subOrders_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBERENEWALPRICERESULT_H_