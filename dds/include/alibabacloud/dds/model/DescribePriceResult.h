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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICERESULT_H_

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
			class ALIBABACLOUD_DDS_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct Order
				{
					struct DepreciateInfo5
					{
						struct ContractActivity8
						{
							std::string activityName;
							double finalPromFee;
							long activityId;
							double prodFee;
							std::string optionCode;
							std::vector<std::string> optionIds9;
							double finalFee;
						};
						double cheapRate;
						double differential;
						std::string differentialName;
						double monthPrice;
						double cheapStandAmount;
						ContractActivity8 contractActivity8;
						double originalStandAmount;
						std::string isShow;
						double listPrice;
						bool isContractActivity;
					};
					struct Coupon
					{
						std::string couponNo;
						std::string activityCategory;
						std::string description;
						double priceBreakReduceValue;
						double canPromFee;
						std::string promotionOptionCode;
						std::string isSelected;
						std::string optionCode;
						std::vector<std::string> targetArticleItemCodes7;
						std::string name;
						double priceBreakThreshold;
						double lackForPriceBreak;
						std::vector<std::string> promotionRuleIdList6;
					};
					double standPrice;
					bool showDiscountInfo;
					std::string message;
					double standDiscountPrice;
					std::string tradeAmount;
					std::string originalAmount;
					std::string code;
					std::string discountAmount;
					std::vector<std::string> ruleIds4;
					bool contractActivity;
					std::string optionalPromotions;
					std::string currency;
					std::string promDetailList;
					double totalCostAmount;
					DepreciateInfo5 depreciateInfo5;
					std::vector<Coupon> coupons;
					bool isContractActivity;
				};
				struct SubOrder
				{
					struct DepreciateInfo
					{
						struct ContractActivity
						{
							std::vector<std::string> optionIds;
							std::string activityName;
							double finalPromFee;
							long activityId;
							double prodFee;
							std::string optionCode;
							double finalFee;
						};
						double cheapRate;
						double differential;
						std::string differentialName;
						double monthPrice;
						double cheapStandAmount;
						std::string startTime;
						double originalStandAmount;
						std::string isShow;
						double listPrice;
						bool isContractActivity;
						ContractActivity contractActivity;
					};
					struct ModuleInstanceItem
					{
						struct DepreciateInfo1
						{
							double cheapRate;
							double differential;
							std::string differentialName;
							double monthPrice;
							double cheapStandAmount;
							double originalStandAmount;
							std::string isShow;
							double listPrice;
							bool isContractActivity;
						};
						struct PromDetail
						{
							std::string promotionName;
							std::string derivedPromType;
							long promotionId;
							double finalPromFee;
							std::string promotionCode;
							std::string activityExtInfo;
							std::string optionCode;
							std::string promType;
						};
						struct ModuleAttr
						{
							std::string type;
							std::string value;
							std::string code;
							std::string name;
						};
						double standPrice;
						std::string moduleName;
						double standDiscountPrice;
						std::string discountFee;
						std::vector<ModuleInstanceItem::PromDetail> promDetailList2;
						bool needOrderPay;
						double payFee;
						bool contractActivity;
						std::string cycleFee;
						long moduleId;
						std::string priceUnit;
						bool pricingModule;
						std::string moduleCode;
						DepreciateInfo1 depreciateInfo1;
						double totalProductFee;
						std::vector<ModuleInstanceItem::ModuleAttr> moduleAttrs;
						std::string priceType;
					};
					struct OptionalPromotion
					{
						std::string activityCategory;
						std::string promotionName;
						std::vector<std::string> promotionRuleIdList;
						std::string promotionOptionNo;
						double canPromFee;
						std::string activityExtInfo;
						bool show;
						std::string optionCode;
						bool selected;
						std::vector<std::string> targetArticleItemCodes;
					};
					struct PromDetail3
					{
						std::string promotionName;
						std::string derivedPromType;
						long promotionId;
						double finalPromFee;
						std::string promotionCode;
						std::string activityExtInfo;
						std::string optionCode;
						std::string promType;
					};
					double standPrice;
					std::string instanceId;
					double standDiscountPrice;
					std::string tradeAmount;
					std::string originalAmount;
					std::string discountAmount;
					DepreciateInfo depreciateInfo;
					bool contractActivity;
					std::vector<SubOrder::OptionalPromotion> optionalPromotions;
					std::string isNewOfficialActivity;
					std::vector<SubOrder::PromDetail3> promDetailList;
					std::vector<std::string> ruleIds;
					std::vector<SubOrder::ModuleInstanceItem> moduleInstance;
					bool isContractActivity;
				};
				struct Rule
				{
					long ruleDescId;
					std::string title;
					std::string name;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				Order getOrder()const;
				std::vector<SubOrder> getSubOrders()const;
				std::string getTraceId()const;
				std::string getOrderParams()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				Order order_;
				std::vector<SubOrder> subOrders_;
				std::string traceId_;
				std::string orderParams_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICERESULT_H_