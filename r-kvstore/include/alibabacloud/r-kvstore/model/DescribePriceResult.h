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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct Order
				{
					struct DepreciateInfo3
					{
						struct ContractActivity4
						{
							std::string activityName;
							double finalPromFee;
							long activityId;
							std::vector<std::string> optionIds5;
							double prodFee;
							std::string optionCode;
							double finalFee;
						};
						long cheapRate;
						ContractActivity4 contractActivity4;
						long differential;
						std::string differentialName;
						long monthPrice;
						long cheapStandAmount;
						long originalStandAmount;
						bool isShow;
						long listPrice;
						bool isContractActivity;
					};
					struct Coupon
					{
						std::string couponNo;
						std::string description;
						std::string isSelected;
						std::string name;
					};
					std::vector<std::string> ruleIds2;
					long standPrice;
					bool showDiscountInfo;
					std::string message;
					long standDiscountPrice;
					std::string tradeAmount;
					std::string originalAmount;
					std::string code;
					std::string discountAmount;
					std::string handlingFeeAmount;
					std::string currency;
					DepreciateInfo3 depreciateInfo3;
					std::vector<Coupon> coupons;
					bool isContractActivity;
				};
				struct Rule
				{
					long ruleDescId;
					std::string title;
					std::string name;
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
						long cheapRate;
						long differential;
						std::string differentialName;
						long monthPrice;
						long cheapStandAmount;
						std::string startTime;
						long originalStandAmount;
						long listPrice;
						bool isContractActivity;
						ContractActivity contractActivity;
					};
					struct OptionalPromotion
					{
						std::string couponNo;
						std::string promotionName;
						std::string description;
						std::string promotionOptionNo;
						std::string canPromFee;
						bool show;
						std::string activityExtInfo;
						bool selected;
						std::string optionCode;
						std::string name;
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
							std::string startTime;
							double originalStandAmount;
							bool isShow;
							double listPrice;
							bool isContractActivity;
						};
						struct ModuleAttr
						{
							long type;
							std::string value;
							std::string code;
							std::string name;
						};
						std::string moduleId;
						double standPrice;
						bool pricingModule;
						std::string moduleCode;
						std::string moduleName;
						DepreciateInfo1 depreciateInfo1;
						double discountFee;
						double totalProductFee;
						bool needOrderPay;
						double payFee;
						std::vector<ModuleInstanceItem::ModuleAttr> moduleAttrs;
						bool contractActivity;
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
					long standPrice;
					std::string instanceId;
					long standDiscountPrice;
					std::string tradeAmount;
					std::string originalAmount;
					std::string discountAmount;
					DepreciateInfo depreciateInfo;
					bool contractActivity;
					std::vector<SubOrder::OptionalPromotion> optionalPromotions;
					std::vector<SubOrder::PromDetail> promDetailList;
					std::vector<std::string> ruleIds;
					std::vector<SubOrder::ModuleInstanceItem> moduleInstance;
					bool isContractActivity;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				Order getOrder()const;
				std::vector<SubOrder> getSubOrders()const;
				std::string getOrderParams()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				Order order_;
				std::vector<SubOrder> subOrders_;
				std::string orderParams_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEPRICERESULT_H_