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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRICERESULT_H_

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
			class ALIBABACLOUD_MARKET_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct PromotionRule
				{
					std::string ruleId;
					std::string title;
					std::string name;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				std::vector<PromotionRule> getPromotionRules()const;
				float getOriginalPrice()const;
				std::string getProductCode()const;
				float getDiscountPrice()const;
				float getTradePrice()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PromotionRule> promotionRules_;
				float originalPrice_;
				std::string productCode_;
				float discountPrice_;
				float tradePrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRICERESULT_H_