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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERENEWALPRICERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERENEWALPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeRenewalPriceResult : public ServiceResult
			{
			public:
				struct PriceInfo
				{
					struct ActivityInfo
					{
						std::string errorCode;
						std::string checkErrMsg;
						std::string success;
					};
					struct Coupon
					{
						std::string couponNo;
						std::string description;
						std::string isSelected;
						std::string name;
					};
					ActivityInfo activityInfo;
					float originalPrice;
					std::string currency;
					float discountPrice;
					std::vector<std::string> ruleIds;
					float tradePrice;
					std::vector<Coupon> coupons;
				};
				struct Rule
				{
					std::string description;
					long ruleId;
					std::string name;
				};


				DescribeRenewalPriceResult();
				explicit DescribeRenewalPriceResult(const std::string &payload);
				~DescribeRenewalPriceResult();
				std::vector<Rule> getRules()const;
				PriceInfo getPriceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Rule> rules_;
				PriceInfo priceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERENEWALPRICERESULT_H_