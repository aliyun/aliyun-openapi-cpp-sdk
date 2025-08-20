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

#ifndef ALIBABACLOUD_INTLMARKET_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_INTLMARKET_MODEL_DESCRIBEPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/intlmarket/IntlMarketExport.h>

namespace AlibabaCloud
{
	namespace IntlMarket
	{
		namespace Model
		{
			class ALIBABACLOUD_INTLMARKET_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct PromotionRule
				{
					std::string ruleId;
					std::string title;
					std::string name;
				};
				struct Coupon
				{
					std::string couponOptionNo;
					std::string promotionDesc;
					std::string couponName;
					long canPromFee;
					std::string couponDesc;
					bool isSelected;
					std::string couponOptionCode;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				std::string getExpressionCode()const;
				float getOriginalPrice()const;
				std::string getMessage()const;
				std::string getProductCode()const;
				int getDuration()const;
				bool getCuxiao()const;
				float getTradePrice()const;
				std::string getCode()const;
				std::string getCycle()const;
				std::string getInfoTitle()const;
				std::vector<PromotionRule> getPromotionRules()const;
				float getDiscountPrice()const;
				std::string getCurrency()const;
				std::string getExpressionMessage()const;
				std::vector<Coupon> getCoupons()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string expressionCode_;
				float originalPrice_;
				std::string message_;
				std::string productCode_;
				int duration_;
				bool cuxiao_;
				float tradePrice_;
				std::string code_;
				std::string cycle_;
				std::string infoTitle_;
				std::vector<PromotionRule> promotionRules_;
				float discountPrice_;
				std::string currency_;
				std::string expressionMessage_;
				std::vector<Coupon> coupons_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_INTLMARKET_MODEL_DESCRIBEPRICERESULT_H_