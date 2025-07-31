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

#include <alibabacloud/dds/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	auto allSubOrdersNode = value["SubOrders"]["SubOrder"];
	for (auto valueSubOrdersSubOrder : allSubOrdersNode)
	{
		SubOrder subOrdersObject;
		if(!valueSubOrdersSubOrder["OriginalAmount"].isNull())
			subOrdersObject.originalAmount = valueSubOrdersSubOrder["OriginalAmount"].asString();
		if(!valueSubOrdersSubOrder["DiscountAmount"].isNull())
			subOrdersObject.discountAmount = valueSubOrdersSubOrder["DiscountAmount"].asString();
		if(!valueSubOrdersSubOrder["TradeAmount"].isNull())
			subOrdersObject.tradeAmount = valueSubOrdersSubOrder["TradeAmount"].asString();
		if(!valueSubOrdersSubOrder["InstanceId"].isNull())
			subOrdersObject.instanceId = valueSubOrdersSubOrder["InstanceId"].asString();
		if(!valueSubOrdersSubOrder["IsNewOfficialActivity"].isNull())
			subOrdersObject.isNewOfficialActivity = valueSubOrdersSubOrder["IsNewOfficialActivity"].asString();
		if(!valueSubOrdersSubOrder["ContractActivity"].isNull())
			subOrdersObject.contractActivity = valueSubOrdersSubOrder["ContractActivity"].asString() == "true";
		if(!valueSubOrdersSubOrder["StandDiscountPrice"].isNull())
			subOrdersObject.standDiscountPrice = valueSubOrdersSubOrder["StandDiscountPrice"].asString();
		if(!valueSubOrdersSubOrder["StandPrice"].isNull())
			subOrdersObject.standPrice = valueSubOrdersSubOrder["StandPrice"].asString();
		if(!valueSubOrdersSubOrder["IsContractActivity"].isNull())
			subOrdersObject.isContractActivity = valueSubOrdersSubOrder["IsContractActivity"].asString() == "true";
		auto allModuleInstanceNode = valueSubOrdersSubOrder["ModuleInstance"]["ModuleInstanceItem"];
		for (auto valueSubOrdersSubOrderModuleInstanceModuleInstanceItem : allModuleInstanceNode)
		{
			SubOrder::ModuleInstanceItem moduleInstanceObject;
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["CycleFee"].isNull())
				moduleInstanceObject.cycleFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["CycleFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["DiscountFee"].isNull())
				moduleInstanceObject.discountFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["DiscountFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleCode"].isNull())
				moduleInstanceObject.moduleCode = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleCode"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleId"].isNull())
				moduleInstanceObject.moduleId = std::stol(valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleId"].asString());
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleName"].isNull())
				moduleInstanceObject.moduleName = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleName"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["NeedOrderPay"].isNull())
				moduleInstanceObject.needOrderPay = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["NeedOrderPay"].asString() == "true";
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PayFee"].isNull())
				moduleInstanceObject.payFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PayFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PricingModule"].isNull())
				moduleInstanceObject.pricingModule = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PricingModule"].asString() == "true";
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["StandPrice"].isNull())
				moduleInstanceObject.standPrice = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["StandPrice"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["TotalProductFee"].isNull())
				moduleInstanceObject.totalProductFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["TotalProductFee"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ContractActivity"].isNull())
				moduleInstanceObject.contractActivity = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ContractActivity"].asString() == "true";
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["StandDiscountPrice"].isNull())
				moduleInstanceObject.standDiscountPrice = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["StandDiscountPrice"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["priceUnit"].isNull())
				moduleInstanceObject.priceUnit = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["priceUnit"].asString();
			if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["priceType"].isNull())
				moduleInstanceObject.priceType = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["priceType"].asString();
			auto allPromDetailList2Node = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["PromDetailList"]["PromDetail"];
			for (auto valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail : allPromDetailList2Node)
			{
				SubOrder::ModuleInstanceItem::PromDetail promDetailList2Object;
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["FinalPromFee"].isNull())
					promDetailList2Object.finalPromFee = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["FinalPromFee"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["ActivityExtInfo"].isNull())
					promDetailList2Object.activityExtInfo = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["ActivityExtInfo"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["OptionCode"].isNull())
					promDetailList2Object.optionCode = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["OptionCode"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromType"].isNull())
					promDetailList2Object.promType = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromType"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromotionId"].isNull())
					promDetailList2Object.promotionId = std::stol(valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromotionId"].asString());
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromotionName"].isNull())
					promDetailList2Object.promotionName = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromotionName"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromotionCode"].isNull())
					promDetailList2Object.promotionCode = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["PromotionCode"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["DerivedPromType"].isNull())
					promDetailList2Object.derivedPromType = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemPromDetailListPromDetail["DerivedPromType"].asString();
				moduleInstanceObject.promDetailList2.push_back(promDetailList2Object);
			}
			auto allModuleAttrsNode = valueSubOrdersSubOrderModuleInstanceModuleInstanceItem["ModuleAttrs"]["moduleAttr"];
			for (auto valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr : allModuleAttrsNode)
			{
				SubOrder::ModuleInstanceItem::ModuleAttr moduleAttrsObject;
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Code"].isNull())
					moduleAttrsObject.code = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Code"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Name"].isNull())
					moduleAttrsObject.name = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Name"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Type"].isNull())
					moduleAttrsObject.type = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Type"].asString();
				if(!valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Value"].isNull())
					moduleAttrsObject.value = valueSubOrdersSubOrderModuleInstanceModuleInstanceItemModuleAttrsmoduleAttr["Value"].asString();
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
				moduleInstanceObject.depreciateInfo1.isShow = depreciateInfo1Node["IsShow"].asString();
			subOrdersObject.moduleInstance.push_back(moduleInstanceObject);
		}
		auto allOptionalPromotionsNode = valueSubOrdersSubOrder["OptionalPromotions"]["OptionalPromotion"];
		for (auto valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion : allOptionalPromotionsNode)
		{
			SubOrder::OptionalPromotion optionalPromotionsObject;
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["ActivityCategory"].isNull())
				optionalPromotionsObject.activityCategory = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["ActivityCategory"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["ActivityExtInfo"].isNull())
				optionalPromotionsObject.activityExtInfo = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["ActivityExtInfo"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["CanPromFee"].isNull())
				optionalPromotionsObject.canPromFee = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["CanPromFee"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["OptionCode"].isNull())
				optionalPromotionsObject.optionCode = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["OptionCode"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionName"].isNull())
				optionalPromotionsObject.promotionName = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionName"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionOptionNo"].isNull())
				optionalPromotionsObject.promotionOptionNo = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["PromotionOptionNo"].asString();
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Selected"].isNull())
				optionalPromotionsObject.selected = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Selected"].asString() == "true";
			if(!valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Show"].isNull())
				optionalPromotionsObject.show = valueSubOrdersSubOrderOptionalPromotionsOptionalPromotion["Show"].asString() == "true";
			auto allTargetArticleItemCodes = value["TargetArticleItemCodes"]["targetArticleItemCode"];
			for (auto value : allTargetArticleItemCodes)
				optionalPromotionsObject.targetArticleItemCodes.push_back(value.asString());
			auto allPromotionRuleIdList = value["PromotionRuleIdList"]["promotionRuleId"];
			for (auto value : allPromotionRuleIdList)
				optionalPromotionsObject.promotionRuleIdList.push_back(value.asString());
			subOrdersObject.optionalPromotions.push_back(optionalPromotionsObject);
		}
		auto allPromDetailListNode = valueSubOrdersSubOrder["PromDetailList"]["PromDetail"];
		for (auto valueSubOrdersSubOrderPromDetailListPromDetail : allPromDetailListNode)
		{
			SubOrder::PromDetail3 promDetailListObject;
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["FinalPromFee"].isNull())
				promDetailListObject.finalPromFee = valueSubOrdersSubOrderPromDetailListPromDetail["FinalPromFee"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["ActivityExtInfo"].isNull())
				promDetailListObject.activityExtInfo = valueSubOrdersSubOrderPromDetailListPromDetail["ActivityExtInfo"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["OptionCode"].isNull())
				promDetailListObject.optionCode = valueSubOrdersSubOrderPromDetailListPromDetail["OptionCode"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromType"].isNull())
				promDetailListObject.promType = valueSubOrdersSubOrderPromDetailListPromDetail["PromType"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromotionId"].isNull())
				promDetailListObject.promotionId = std::stol(valueSubOrdersSubOrderPromDetailListPromDetail["PromotionId"].asString());
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromotionName"].isNull())
				promDetailListObject.promotionName = valueSubOrdersSubOrderPromDetailListPromDetail["PromotionName"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["PromotionCode"].isNull())
				promDetailListObject.promotionCode = valueSubOrdersSubOrderPromDetailListPromDetail["PromotionCode"].asString();
			if(!valueSubOrdersSubOrderPromDetailListPromDetail["DerivedPromType"].isNull())
				promDetailListObject.derivedPromType = valueSubOrdersSubOrderPromDetailListPromDetail["DerivedPromType"].asString();
			subOrdersObject.promDetailList.push_back(promDetailListObject);
		}
		auto depreciateInfoNode = value["DepreciateInfo"];
		if(!depreciateInfoNode["ListPrice"].isNull())
			subOrdersObject.depreciateInfo.listPrice = depreciateInfoNode["ListPrice"].asString();
		if(!depreciateInfoNode["OriginalStandAmount"].isNull())
			subOrdersObject.depreciateInfo.originalStandAmount = depreciateInfoNode["OriginalStandAmount"].asString();
		if(!depreciateInfoNode["CheapStandAmount"].isNull())
			subOrdersObject.depreciateInfo.cheapStandAmount = depreciateInfoNode["CheapStandAmount"].asString();
		if(!depreciateInfoNode["CheapRate"].isNull())
			subOrdersObject.depreciateInfo.cheapRate = depreciateInfoNode["CheapRate"].asString();
		if(!depreciateInfoNode["Differential"].isNull())
			subOrdersObject.depreciateInfo.differential = depreciateInfoNode["Differential"].asString();
		if(!depreciateInfoNode["DifferentialName"].isNull())
			subOrdersObject.depreciateInfo.differentialName = depreciateInfoNode["DifferentialName"].asString();
		if(!depreciateInfoNode["MonthPrice"].isNull())
			subOrdersObject.depreciateInfo.monthPrice = depreciateInfoNode["MonthPrice"].asString();
		if(!depreciateInfoNode["IsContractActivity"].isNull())
			subOrdersObject.depreciateInfo.isContractActivity = depreciateInfoNode["IsContractActivity"].asString() == "true";
		if(!depreciateInfoNode["IsShow"].isNull())
			subOrdersObject.depreciateInfo.isShow = depreciateInfoNode["IsShow"].asString();
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
	auto orderNode = value["Order"];
	if(!orderNode["OriginalAmount"].isNull())
		order_.originalAmount = orderNode["OriginalAmount"].asString();
	if(!orderNode["DiscountAmount"].isNull())
		order_.discountAmount = orderNode["DiscountAmount"].asString();
	if(!orderNode["TradeAmount"].isNull())
		order_.tradeAmount = orderNode["TradeAmount"].asString();
	if(!orderNode["Currency"].isNull())
		order_.currency = orderNode["Currency"].asString();
	if(!orderNode["ShowDiscountInfo"].isNull())
		order_.showDiscountInfo = orderNode["ShowDiscountInfo"].asString() == "true";
	if(!orderNode["OptionalPromotions"].isNull())
		order_.optionalPromotions = orderNode["OptionalPromotions"].asString();
	if(!orderNode["PromDetailList"].isNull())
		order_.promDetailList = orderNode["PromDetailList"].asString();
	if(!orderNode["StandDiscountPrice"].isNull())
		order_.standDiscountPrice = orderNode["StandDiscountPrice"].asString();
	if(!orderNode["StandPrice"].isNull())
		order_.standPrice = orderNode["StandPrice"].asString();
	if(!orderNode["ContractActivity"].isNull())
		order_.contractActivity = orderNode["ContractActivity"].asString() == "true";
	if(!orderNode["Code"].isNull())
		order_.code = orderNode["Code"].asString();
	if(!orderNode["Message"].isNull())
		order_.message = orderNode["Message"].asString();
	if(!orderNode["IsContractActivity"].isNull())
		order_.isContractActivity = orderNode["IsContractActivity"].asString() == "true";
	if(!orderNode["TotalCostAmount"].isNull())
		order_.totalCostAmount = orderNode["TotalCostAmount"].asString();
	auto allCouponsNode = orderNode["Coupons"]["Coupon"];
	for (auto orderNodeCouponsCoupon : allCouponsNode)
	{
		Order::Coupon couponObject;
		if(!orderNodeCouponsCoupon["Description"].isNull())
			couponObject.description = orderNodeCouponsCoupon["Description"].asString();
		if(!orderNodeCouponsCoupon["IsSelected"].isNull())
			couponObject.isSelected = orderNodeCouponsCoupon["IsSelected"].asString();
		if(!orderNodeCouponsCoupon["CouponNo"].isNull())
			couponObject.couponNo = orderNodeCouponsCoupon["CouponNo"].asString();
		if(!orderNodeCouponsCoupon["Name"].isNull())
			couponObject.name = orderNodeCouponsCoupon["Name"].asString();
		if(!orderNodeCouponsCoupon["CanPromFee"].isNull())
			couponObject.canPromFee = orderNodeCouponsCoupon["CanPromFee"].asString();
		if(!orderNodeCouponsCoupon["PromotionOptionCode"].isNull())
			couponObject.promotionOptionCode = orderNodeCouponsCoupon["PromotionOptionCode"].asString();
		if(!orderNodeCouponsCoupon["LackForPriceBreak"].isNull())
			couponObject.lackForPriceBreak = orderNodeCouponsCoupon["LackForPriceBreak"].asString();
		if(!orderNodeCouponsCoupon["PriceBreakThreshold"].isNull())
			couponObject.priceBreakThreshold = orderNodeCouponsCoupon["PriceBreakThreshold"].asString();
		if(!orderNodeCouponsCoupon["PriceBreakReduceValue"].isNull())
			couponObject.priceBreakReduceValue = orderNodeCouponsCoupon["PriceBreakReduceValue"].asString();
		if(!orderNodeCouponsCoupon["OptionCode"].isNull())
			couponObject.optionCode = orderNodeCouponsCoupon["OptionCode"].asString();
		if(!orderNodeCouponsCoupon["ActivityCategory"].isNull())
			couponObject.activityCategory = orderNodeCouponsCoupon["ActivityCategory"].asString();
		auto allPromotionRuleIdList6 = value["PromotionRuleIdList"]["PromotionRuleId"];
		for (auto value : allPromotionRuleIdList6)
			couponObject.promotionRuleIdList6.push_back(value.asString());
		auto allTargetArticleItemCodes7 = value["TargetArticleItemCodes"]["TargetArticleItemCode"];
		for (auto value : allTargetArticleItemCodes7)
			couponObject.targetArticleItemCodes7.push_back(value.asString());
		order_.coupons.push_back(couponObject);
	}
	auto depreciateInfo5Node = orderNode["DepreciateInfo"];
	if(!depreciateInfo5Node["ListPrice"].isNull())
		order_.depreciateInfo5.listPrice = depreciateInfo5Node["ListPrice"].asString();
	if(!depreciateInfo5Node["OriginalStandAmount"].isNull())
		order_.depreciateInfo5.originalStandAmount = depreciateInfo5Node["OriginalStandAmount"].asString();
	if(!depreciateInfo5Node["CheapStandAmount"].isNull())
		order_.depreciateInfo5.cheapStandAmount = depreciateInfo5Node["CheapStandAmount"].asString();
	if(!depreciateInfo5Node["CheapRate"].isNull())
		order_.depreciateInfo5.cheapRate = depreciateInfo5Node["CheapRate"].asString();
	if(!depreciateInfo5Node["Differential"].isNull())
		order_.depreciateInfo5.differential = depreciateInfo5Node["Differential"].asString();
	if(!depreciateInfo5Node["DifferentialName"].isNull())
		order_.depreciateInfo5.differentialName = depreciateInfo5Node["DifferentialName"].asString();
	if(!depreciateInfo5Node["MonthPrice"].isNull())
		order_.depreciateInfo5.monthPrice = depreciateInfo5Node["MonthPrice"].asString();
	if(!depreciateInfo5Node["IsContractActivity"].isNull())
		order_.depreciateInfo5.isContractActivity = depreciateInfo5Node["IsContractActivity"].asString() == "true";
	if(!depreciateInfo5Node["IsShow"].isNull())
		order_.depreciateInfo5.isShow = depreciateInfo5Node["IsShow"].asString();
	auto contractActivity8Node = depreciateInfo5Node["ContractActivity"];
	if(!contractActivity8Node["FinalPromFee"].isNull())
		order_.depreciateInfo5.contractActivity8.finalPromFee = contractActivity8Node["FinalPromFee"].asString();
	if(!contractActivity8Node["FinalFee"].isNull())
		order_.depreciateInfo5.contractActivity8.finalFee = contractActivity8Node["FinalFee"].asString();
	if(!contractActivity8Node["ProdFee"].isNull())
		order_.depreciateInfo5.contractActivity8.prodFee = contractActivity8Node["ProdFee"].asString();
	if(!contractActivity8Node["ActivityId"].isNull())
		order_.depreciateInfo5.contractActivity8.activityId = std::stol(contractActivity8Node["ActivityId"].asString());
	if(!contractActivity8Node["OptionCode"].isNull())
		order_.depreciateInfo5.contractActivity8.optionCode = contractActivity8Node["OptionCode"].asString();
	if(!contractActivity8Node["ActivityName"].isNull())
		order_.depreciateInfo5.contractActivity8.activityName = contractActivity8Node["ActivityName"].asString();
		auto allOptionIds9 = contractActivity8Node["OptionIds"]["OptionId"];
		for (auto value : allOptionIds9)
			order_.depreciateInfo5.contractActivity8.optionIds9.push_back(value.asString());
		auto allRuleIds4 = orderNode["RuleIds"]["RuleId"];
		for (auto value : allRuleIds4)
			order_.ruleIds4.push_back(value.asString());
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
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

std::string DescribePriceResult::getTraceId()const
{
	return traceId_;
}

std::string DescribePriceResult::getOrderParams()const
{
	return orderParams_;
}

std::vector<DescribePriceResult::Rule> DescribePriceResult::getRules()const
{
	return rules_;
}

