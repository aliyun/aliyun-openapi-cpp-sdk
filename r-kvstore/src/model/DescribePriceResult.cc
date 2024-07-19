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

#include <alibabacloud/r-kvstore/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribePriceResult::DescribePriceResult() :
	ServiceResult()
{}

DescribePriceResult::DescribePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePriceResult::~DescribePriceResult()
{}

void DescribePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["RuleDescId"].isNull())
			rulesObject.ruleDescId = std::stol(valueRulesRule["RuleDescId"].asString());
		if(!valueRulesRule["Title"].isNull())
			rulesObject.title = valueRulesRule["Title"].asString();
		if(!valueRulesRule["Name"].isNull())
			rulesObject.name = valueRulesRule["Name"].asString();
		rules_.push_back(rulesObject);
	}
	auto allSubOrdersNode = value["SubOrders"]["SubOrder"];
	for (auto valueSubOrdersSubOrder : allSubOrdersNode)
	{
		SubOrder subOrdersObject;
		if(!valueSubOrdersSubOrder["OriginalAmount"].isNull())
			subOrdersObject.originalAmount = valueSubOrdersSubOrder["OriginalAmount"].asString();
		if(!valueSubOrdersSubOrder["InstanceId"].isNull())
			subOrdersObject.instanceId = valueSubOrdersSubOrder["InstanceId"].asString();
		if(!valueSubOrdersSubOrder["DiscountAmount"].isNull())
			subOrdersObject.discountAmount = valueSubOrdersSubOrder["DiscountAmount"].asString();
		if(!valueSubOrdersSubOrder["TradeAmount"].isNull())
			subOrdersObject.tradeAmount = valueSubOrdersSubOrder["TradeAmount"].asString();
		if(!valueSubOrdersSubOrder["StandDiscountPrice"].isNull())
			subOrdersObject.standDiscountPrice = std::stol(valueSubOrdersSubOrder["StandDiscountPrice"].asString());
		if(!valueSubOrdersSubOrder["IsContractActivity"].isNull())
			subOrdersObject.isContractActivity = valueSubOrdersSubOrder["IsContractActivity"].asString() == "true";
		if(!valueSubOrdersSubOrder["StandPrice"].isNull())
			subOrdersObject.standPrice = std::stol(valueSubOrdersSubOrder["StandPrice"].asString());
		if(!valueSubOrdersSubOrder["ContractActivity"].isNull())
			subOrdersObject.contractActivity = valueSubOrdersSubOrder["ContractActivity"].asString() == "true";
		auto allOptionalPromotionsNode = valueSubOrdersSubOrder["OptionalPromotions"]["OptionalPromotion"];
		for (auto valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion : allOptionalPromotionsNode)
		{
			SubOrder::OptionalPromotion optionalPromotionsObject;
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Selected"].isNull())
				optionalPromotionsObject.selected = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Selected"].asString() == "true";
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["CouponNo"].isNull())
				optionalPromotionsObject.couponNo = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["CouponNo"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Name"].isNull())
				optionalPromotionsObject.name = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Name"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Description"].isNull())
				optionalPromotionsObject.description = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Description"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Show"].isNull())
				optionalPromotionsObject.show = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Show"].asString() == "true";
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["ActivityExtInfo"].isNull())
				optionalPromotionsObject.activityExtInfo = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["ActivityExtInfo"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["OptionCode"].isNull())
				optionalPromotionsObject.optionCode = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["OptionCode"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionName"].isNull())
				optionalPromotionsObject.promotionName = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionName"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionOptionNo"].isNull())
				optionalPromotionsObject.promotionOptionNo = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionOptionNo"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["CanPromFee"].isNull())
				optionalPromotionsObject.canPromFee = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["CanPromFee"].asString();
			subOrdersObject.optionalPromotions.push_back(optionalPromotionsObject);
		}
		auto allModuleInstanceNode = valueSubOrdersSubOrder["ModuleInstance"]["ModuleInstanceItem"];
		for (auto valueSubOrdersSubOrderModuleInstanceModuleInstanceItem : allModuleInstanceNode)
		{
			SubOrder::ModuleInstanceItem moduleInstanceObject;
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleCode"].isNull())
				moduleInstanceObject.moduleCode = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleCode"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleId"].isNull())
				moduleInstanceObject.moduleId = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleId"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["StandPrice"].isNull())
				moduleInstanceObject.standPrice = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["StandPrice"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PricingModule"].isNull())
				moduleInstanceObject.pricingModule = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PricingModule"].asString() == "true";
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleName"].isNull())
				moduleInstanceObject.moduleName = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleName"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["DiscountFee"].isNull())
				moduleInstanceObject.discountFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["DiscountFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["TotalProductFee"].isNull())
				moduleInstanceObject.totalProductFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["TotalProductFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["NeedOrderPay"].isNull())
				moduleInstanceObject.needOrderPay = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["NeedOrderPay"].asString() == "true";
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PayFee"].isNull())
				moduleInstanceObject.payFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PayFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ContractActivity"].isNull())
				moduleInstanceObject.contractActivity = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ContractActivity"].asString() == "true";
			auto allModuleAttrsNode = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleAttrs"]["moduleAttr"];
			for (auto valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr : allModuleAttrsNode)
			{
				SubOrder::ModuleInstanceItem::ModuleAttr moduleAttrsObject;
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Type"].isNull())
					moduleAttrsObject.type = std::stol(valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Type"].asString());
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Value"].isNull())
					moduleAttrsObject.value = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Value"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Code"].isNull())
					moduleAttrsObject.code = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Code"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Name"].isNull())
					moduleAttrsObject.name = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Name"].asString();
				moduleInstanceObject.moduleAttrs.push_back(moduleAttrsObject);
			}
			auto depreciateInfo1Node = value["DepreciateInfo"];
			if(!depreciateInfo1Node["ListPrice"].isNull())
				moduleInstanceObject.depreciateInfo1.listPrice = depreciateInfo1Node["ListPrice"].asString();
			if(!depreciateInfo1Node["OriginalStandAmount"].isNull())
				moduleInstanceObject.depreciateInfo1.originalStandAmount = depreciateInfo1Node["OriginalStandAmount"].asString();
			if(!depreciateInfo1Node["CheapStandAmount"].isNull())
				moduleInstanceObject.depreciateInfo1.cheapStandAmount = depreciateInfo1Node["CheapStandAmount"].asString();
			if(!depreciateInfo1Node["CheapRate"].isNull())
				moduleInstanceObject.depreciateInfo1.cheapRate = depreciateInfo1Node["CheapRate"].asString();
			if(!depreciateInfo1Node["Differential"].isNull())
				moduleInstanceObject.depreciateInfo1.differential = depreciateInfo1Node["Differential"].asString();
			if(!depreciateInfo1Node["DifferentialName"].isNull())
				moduleInstanceObject.depreciateInfo1.differentialName = depreciateInfo1Node["DifferentialName"].asString();
			if(!depreciateInfo1Node["MonthPrice"].isNull())
				moduleInstanceObject.depreciateInfo1.monthPrice = depreciateInfo1Node["MonthPrice"].asString();
			if(!depreciateInfo1Node["IsContractActivity"].isNull())
				moduleInstanceObject.depreciateInfo1.isContractActivity = depreciateInfo1Node["IsContractActivity"].asString() == "true";
			if(!depreciateInfo1Node["IsShow"].isNull())
				moduleInstanceObject.depreciateInfo1.isShow = depreciateInfo1Node["IsShow"].asString() == "true";
			if(!depreciateInfo1Node["StartTime"].isNull())
				moduleInstanceObject.depreciateInfo1.startTime = depreciateInfo1Node["StartTime"].asString();
			subOrdersObject.moduleInstance.push_back(moduleInstanceObject);
		}
		auto allPromDetailListNode = valueSubOrdersSubOrder["PromDetailList"]["PromDetail"];
		for (auto valueSubOrdersSubOrderPromDetailListPromDetail : allPromDetailListNode)
		{
			SubOrder::PromDetail promDetailListObject;
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromotionName"].isNull())
				promDetailListObject.promotionName = valueSubOrdersSubOrderPromDetailListPromDetail["PromotionName"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromotionId"].isNull())
				promDetailListObject.promotionId = std::stol(valueSubOrdersSubOrderPromDetailListPromDetail["PromotionId"].asString());
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["FinalPromFee"].isNull())
				promDetailListObject.finalPromFee = valueSubOrdersSubOrderPromDetailListPromDetail["FinalPromFee"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["OptionCode"].isNull())
				promDetailListObject.optionCode = valueSubOrdersSubOrderPromDetailListPromDetail["OptionCode"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromType"].isNull())
				promDetailListObject.promType = valueSubOrdersSubOrderPromDetailListPromDetail["PromType"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["ActivityExtInfo"].isNull())
				promDetailListObject.activityExtInfo = valueSubOrdersSubOrderPromDetailListPromDetail["ActivityExtInfo"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["DerivedPromType"].isNull())
				promDetailListObject.derivedPromType = valueSubOrdersSubOrderPromDetailListPromDetail["DerivedPromType"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromotionCode"].isNull())
				promDetailListObject.promotionCode = valueSubOrdersSubOrderPromDetailListPromDetail["PromotionCode"].asString();
			subOrdersObject.promDetailList.push_back(promDetailListObject);
		}
		auto depreciateInfoNode = value["DepreciateInfo"];
		if(!depreciateInfoNode["ListPrice"].isNull())
			subOrdersObject.depreciateInfo.listPrice = std::stol(depreciateInfoNode["ListPrice"].asString());
		if(!depreciateInfoNode["OriginalStandAmount"].isNull())
			subOrdersObject.depreciateInfo.originalStandAmount = std::stol(depreciateInfoNode["OriginalStandAmount"].asString());
		if(!depreciateInfoNode["CheapStandAmount"].isNull())
			subOrdersObject.depreciateInfo.cheapStandAmount = std::stol(depreciateInfoNode["CheapStandAmount"].asString());
		if(!depreciateInfoNode["CheapRate"].isNull())
			subOrdersObject.depreciateInfo.cheapRate = std::stol(depreciateInfoNode["CheapRate"].asString());
		if(!depreciateInfoNode["Differential"].isNull())
			subOrdersObject.depreciateInfo.differential = std::stol(depreciateInfoNode["Differential"].asString());
		if(!depreciateInfoNode["DifferentialName"].isNull())
			subOrdersObject.depreciateInfo.differentialName = depreciateInfoNode["DifferentialName"].asString();
		if(!depreciateInfoNode["MonthPrice"].isNull())
			subOrdersObject.depreciateInfo.monthPrice = std::stol(depreciateInfoNode["MonthPrice"].asString());
		if(!depreciateInfoNode["IsContractActivity"].isNull())
			subOrdersObject.depreciateInfo.isContractActivity = depreciateInfoNode["IsContractActivity"].asString() == "true";
		if(!depreciateInfoNode["StartTime"].isNull())
			subOrdersObject.depreciateInfo.startTime = depreciateInfoNode["StartTime"].asString();
		auto contractActivityNode = depreciateInfoNode["ContractActivity"];
		if(!contractActivityNode["FinalPromFee"].isNull())
			subOrdersObject.depreciateInfo.contractActivity.finalPromFee = contractActivityNode["FinalPromFee"].asString();
		if(!contractActivityNode["FinalFee"].isNull())
			subOrdersObject.depreciateInfo.contractActivity.finalFee = contractActivityNode["FinalFee"].asString();
		if(!contractActivityNode["ProdFee"].isNull())
			subOrdersObject.depreciateInfo.contractActivity.prodFee = contractActivityNode["ProdFee"].asString();
		if(!contractActivityNode["ActivityId"].isNull())
			subOrdersObject.depreciateInfo.contractActivity.activityId = std::stol(contractActivityNode["ActivityId"].asString());
		if(!contractActivityNode["OptionCode"].isNull())
			subOrdersObject.depreciateInfo.contractActivity.optionCode = contractActivityNode["OptionCode"].asString();
		if(!contractActivityNode["ActivityName"].isNull())
			subOrdersObject.depreciateInfo.contractActivity.activityName = contractActivityNode["ActivityName"].asString();
			auto allOptionIds = contractActivityNode["OptionIds"]["OptionId"];
			for (auto value : allOptionIds)
				subOrdersObject.depreciateInfo.contractActivity.optionIds.push_back(value.asString());
		auto allRuleIds = value["RuleIds"]["RuleId"];
		for (auto value : allRuleIds)
			subOrdersObject.ruleIds.push_back(value.asString());
		subOrders_.push_back(subOrdersObject);
	}
	auto orderNode = value["Order"];
	if(!orderNode["OriginalAmount"].isNull())
		order_.originalAmount = orderNode["OriginalAmount"].asString();
	if(!orderNode["HandlingFeeAmount"].isNull())
		order_.handlingFeeAmount = orderNode["HandlingFeeAmount"].asString();
	if(!orderNode["Currency"].isNull())
		order_.currency = orderNode["Currency"].asString();
	if(!orderNode["DiscountAmount"].isNull())
		order_.discountAmount = orderNode["DiscountAmount"].asString();
	if(!orderNode["TradeAmount"].isNull())
		order_.tradeAmount = orderNode["TradeAmount"].asString();
	if(!orderNode["ShowDiscountInfo"].isNull())
		order_.showDiscountInfo = orderNode["ShowDiscountInfo"].asString() == "true";
	if(!orderNode["StandDiscountPrice"].isNull())
		order_.standDiscountPrice = std::stol(orderNode["StandDiscountPrice"].asString());
	if(!orderNode["IsContractActivity"].isNull())
		order_.isContractActivity = orderNode["IsContractActivity"].asString() == "true";
	if(!orderNode["StandPrice"].isNull())
		order_.standPrice = std::stol(orderNode["StandPrice"].asString());
	if(!orderNode["Code"].isNull())
		order_.code = orderNode["Code"].asString();
	if(!orderNode["Message"].isNull())
		order_.message = orderNode["Message"].asString();
	auto allCouponsNode = orderNode["Coupons"]["Coupon"];
	for (auto orderNodeCouponsCoupon : allCouponsNode)
	{
		Order::Coupon couponObject;
		if(!orderNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = orderNodeCouponsCoupon["IsSelected"].asString();
		if(!orderNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = orderNodeCouponsCoupon["CouponNo"].asString();
		if(!orderNodeCouponsCoupon["Name"].isNull())
			couponObject.name = orderNodeCouponsCoupon["Name"].asString();
		if(!orderNodeCouponsCoupon["Description"].isNull())
			couponObject.description = orderNodeCouponsCoupon["Description"].asString();
		order_.coupons.push_back(couponObject);
	}
	auto depreciateInfo3Node = orderNode["DepreciateInfo"];
	if(!depreciateInfo3Node["ListPrice"].isNull())
		order_.depreciateInfo3.listPrice = std::stol(depreciateInfo3Node["ListPrice"].asString());
	if(!depreciateInfo3Node["OriginalStandAmount"].isNull())
		order_.depreciateInfo3.originalStandAmount = std::stol(depreciateInfo3Node["OriginalStandAmount"].asString());
	if(!depreciateInfo3Node["CheapStandAmount"].isNull())
		order_.depreciateInfo3.cheapStandAmount = std::stol(depreciateInfo3Node["CheapStandAmount"].asString());
	if(!depreciateInfo3Node["CheapRate"].isNull())
		order_.depreciateInfo3.cheapRate = std::stol(depreciateInfo3Node["CheapRate"].asString());
	if(!depreciateInfo3Node["Differential"].isNull())
		order_.depreciateInfo3.differential = std::stol(depreciateInfo3Node["Differential"].asString());
	if(!depreciateInfo3Node["DifferentialName"].isNull())
		order_.depreciateInfo3.differentialName = depreciateInfo3Node["DifferentialName"].asString();
	if(!depreciateInfo3Node["MonthPrice"].isNull())
		order_.depreciateInfo3.monthPrice = std::stol(depreciateInfo3Node["MonthPrice"].asString());
	if(!depreciateInfo3Node["IsContractActivity"].isNull())
		order_.depreciateInfo3.isContractActivity = depreciateInfo3Node["IsContractActivity"].asString() == "true";
	if(!depreciateInfo3Node["IsShow"].isNull())
		order_.depreciateInfo3.isShow = depreciateInfo3Node["IsShow"].asString() == "true";
	auto contractActivity4Node = depreciateInfo3Node["ContractActivity"];
	if(!contractActivity4Node["FinalPromFee"].isNull())
		order_.depreciateInfo3.contractActivity4.finalPromFee = contractActivity4Node["FinalPromFee"].asString();
	if(!contractActivity4Node["FinalFee"].isNull())
		order_.depreciateInfo3.contractActivity4.finalFee = contractActivity4Node["FinalFee"].asString();
	if(!contractActivity4Node["ProdFee"].isNull())
		order_.depreciateInfo3.contractActivity4.prodFee = contractActivity4Node["ProdFee"].asString();
	if(!contractActivity4Node["ActivityId"].isNull())
		order_.depreciateInfo3.contractActivity4.activityId = std::stol(contractActivity4Node["ActivityId"].asString());
	if(!contractActivity4Node["OptionCode"].isNull())
		order_.depreciateInfo3.contractActivity4.optionCode = contractActivity4Node["OptionCode"].asString();
	if(!contractActivity4Node["ActivityName"].isNull())
		order_.depreciateInfo3.contractActivity4.activityName = contractActivity4Node["ActivityName"].asString();
		auto allOptionIds5 = contractActivity4Node["OptionIds"]["OptionId"];
		for (auto value : allOptionIds5)
			order_.depreciateInfo3.contractActivity4.optionIds5.push_back(value.asString());
		auto allRuleIds2 = orderNode["RuleIds"]["RuleId"];
		for (auto value : allRuleIds2)
			order_.ruleIds2.push_back(value.asString());
	if(!value["OrderParams"].isNull())
		orderParams_ = value["OrderParams"].asString();

}

DescribePriceResult::Order DescribePriceResult::getOrder()const
{
	return order_;
}

std::vector<DescribePriceResult::SubOrder> DescribePriceResult::getSubOrders()const
{
	return subOrders_;
}

std::string DescribePriceResult::getOrderParams()const
{
	return orderParams_;
}

std::vector<DescribePriceResult::Rule> DescribePriceResult::getRules()const
{
	return rules_;
}

