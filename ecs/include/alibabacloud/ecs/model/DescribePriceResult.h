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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct PriceInfo
				{
					struct Price
					{
						struct DepreciateInfo
						{
							float cheapStandardPrice;
							float cheapRate;
							std::string differentialName;
							float monthPrice;
							float originalStandardPrice;
							float differentialPrice;
							std::string startTime;
							bool isShow;
							float listPrice;
						};
						struct Coupon
						{
							std::string couponNo;
							float discountOff;
							std::string description;
							bool isSelected;
							std::vector<std::string> ruleIds;
							std::string optionCode;
							std::string name;
						};
						struct DetailInfo
						{
							struct DepreciateInfo1
							{
								float cheapStandardPrice;
								float cheapRate;
								std::string differentialName;
								float monthPrice;
								float originalStandardPrice;
								float differentialPrice;
								std::string startTime;
								bool isShow;
								float listPrice;
							};
							struct Rule2
							{
								std::string description;
								long ruleId;
							};
							struct Attribute
							{
								std::string value;
								std::string code;
							};
							float originalPrice;
							float discountPrice;
							std::vector<DetailInfo::Rule2> subRules;
							std::vector<DetailInfo::Attribute> attributes;
							std::string resource;
							DepreciateInfo1 depreciateInfo1;
							float standardPrice;
							float standardDiscountPrice;
							float tradePrice;
							bool isContractPromotion;
						};
						struct Promotion
						{
							float discountOff;
							std::vector<std::string> ruleIds3;
							std::string type;
							float remainQuota;
							std::string name;
						};
						float spotInstanceTypeOriginalPrice;
						float originalPrice;
						std::vector<Promotion> promotions;
						float reservedInstanceHourTradePrice;
						float standardPrice;
						float standardDiscountPrice;
						std::vector<std::string> ruleIdSet;
						std::vector<DetailInfo> detailInfos;
						float tradePrice;
						bool isContractPromotion;
						DepreciateInfo depreciateInfo;
						float reservedInstanceHourDiscountPrice;
						float reservedInstanceHourPrice;
						float discountPrice;
						std::string currency;
						std::vector<Coupon> coupons;
						float spotInstanceTypePrice;
					};
					struct PriceWarning
					{
						std::string msg;
						std::string code;
					};
					struct RelatedPrice
					{
						struct MarketplaceImagePrice
						{
							float originalPrice;
							std::string currency;
							float discountPrice;
							float tradePrice;
						};
						MarketplaceImagePrice marketplaceImagePrice;
					};
					struct Rule
					{
						std::string description;
						long ruleId;
					};
					RelatedPrice relatedPrice;
					Price price;
					PriceWarning priceWarning;
					std::vector<Rule> rules;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				PriceInfo getPriceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				PriceInfo priceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICERESULT_H_