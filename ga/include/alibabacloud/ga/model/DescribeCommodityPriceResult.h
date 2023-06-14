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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBECOMMODITYPRICERESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBECOMMODITYPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeCommodityPriceResult : public ServiceResult
			{
			public:
				struct OrderDetailsItem
				{
					struct ModuleDetailsItem
					{
						double originalPrice;
						std::string moduleCode;
						std::string moduleName;
						double discountPrice;
						double tradePrice;
					};
					struct PromDetailsItem
					{
						std::string promotionName;
						std::string promotionId;
						double finalPromFee;
						std::string optionCode;
						std::string promType;
					};
					double originalPrice;
					double discountPrice;
					std::vector<OrderDetailsItem::PromDetailsItem> promDetails;
					std::string commodityCode;
					long quantity;
					std::vector<std::string> ruleIds;
					std::vector<OrderDetailsItem::ModuleDetailsItem> moduleDetails;
					double tradePrice;
					std::string commodityName;
				};
				struct RuleDetailsItem
				{
					std::string ruleId;
					std::string ruleName;
				};
				struct PromotionDetails
				{
					std::string promotionName;
					std::string promotionOptionNo;
					double canPromFee;
					bool selected;
					std::string optionCode;
				};


				DescribeCommodityPriceResult();
				explicit DescribeCommodityPriceResult(const std::string &payload);
				~DescribeCommodityPriceResult();
				double getOriginalPrice()const;
				std::vector<PromotionDetails> getPromotions()const;
				std::vector<OrderDetailsItem> getOrderDetails()const;
				std::string getCurrency()const;
				double getDiscountPrice()const;
				double getTradePrice()const;
				std::vector<RuleDetailsItem> getRuleDetails()const;

			protected:
				void parse(const std::string &payload);
			private:
				double originalPrice_;
				std::vector<PromotionDetails> promotions_;
				std::vector<OrderDetailsItem> orderDetails_;
				std::string currency_;
				double discountPrice_;
				double tradePrice_;
				std::vector<RuleDetailsItem> ruleDetails_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBECOMMODITYPRICERESULT_H_