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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERENEWALPRICERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERENEWALPRICERESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeRenewalPriceResult : public ServiceResult
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
						struct SubPrice
						{
							struct DepreciateInfo4
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
							struct Promotion
							{
								float discountOff;
								std::string type;
								float remainQuota;
								std::vector<std::string> ruleIds6;
								std::string name;
							};
							float originalPrice;
							std::vector<std::string> ruleIdSet3;
							std::string instanceId;
							float discountPrice;
							float standardPrice;
							float standardDiscountPrice;
							DepreciateInfo4 depreciateInfo4;
							float tradePrice;
							bool isContractPromotion;
							std::vector<SubPrice::Promotion> promotions5;
						};
						struct Promotion7
						{
							float discountOff;
							std::string type;
							float remainQuota;
							std::vector<std::string> ruleIds8;
							std::string name;
						};
						float originalPrice;
						std::vector<Promotion7> promotions;
						float standardPrice;
						float standardDiscountPrice;
						std::vector<std::string> ruleIdSet;
						std::vector<DetailInfo> detailInfos;
						float tradePrice;
						bool isContractPromotion;
						DepreciateInfo depreciateInfo;
						float discountPrice;
						std::string currency;
						std::vector<Coupon> coupons;
						std::vector<SubPrice> subPrices;
					};
					struct PriceWarning
					{
						std::string msg;
						std::string code;
					};
					struct Rule
					{
						std::string description;
						long ruleId;
					};
					Price price;
					PriceWarning priceWarning;
					std::vector<Rule> rules;
				};


				DescribeRenewalPriceResult();
				explicit DescribeRenewalPriceResult(const std::string &payload);
				~DescribeRenewalPriceResult();
				PriceInfo getPriceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				PriceInfo priceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERENEWALPRICERESULT_H_