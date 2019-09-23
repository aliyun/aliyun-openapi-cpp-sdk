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

#include <alibabacloud/ecs/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
	auto priceInfoNode = value["PriceInfo"];
	auto allRulesNode = priceInfoNode["Rules"]["Rule"];
	for (auto priceInfoNodeRulesRule : allRulesNode)
	{
		PriceInfo::Rule ruleObject;
		if(!priceInfoNodeRulesRule["RuleId"].isNull())
			ruleObject.ruleId = std::stol(priceInfoNodeRulesRule["RuleId"].asString());
		if(!priceInfoNodeRulesRule["Description"].isNull())
			ruleObject.description = priceInfoNodeRulesRule["Description"].asString();
		priceInfo_.rules.push_back(ruleObject);
	}
	auto priceNode = priceInfoNode["Price"];
	if(!priceNode["OriginalPrice"].isNull())
		priceInfo_.price.originalPrice = std::stof(priceNode["OriginalPrice"].asString());
	if(!priceNode["DiscountPrice"].isNull())
		priceInfo_.price.discountPrice = std::stof(priceNode["DiscountPrice"].asString());
	if(!priceNode["TradePrice"].isNull())
		priceInfo_.price.tradePrice = std::stof(priceNode["TradePrice"].asString());
	if(!priceNode["ReservedInstanceHourPrice"].isNull())
		priceInfo_.price.reservedInstanceHourPrice = std::stof(priceNode["ReservedInstanceHourPrice"].asString());
	if(!priceNode["Currency"].isNull())
		priceInfo_.price.currency = priceNode["Currency"].asString();
	auto allDetailInfosNode = priceNode["DetailInfos"]["ResourcePriceModel"];
	for (auto priceNodeDetailInfosResourcePriceModel : allDetailInfosNode)
	{
		PriceInfo::Price::ResourcePriceModel resourcePriceModelObject;
		if(!priceNodeDetailInfosResourcePriceModel["Resource"].isNull())
			resourcePriceModelObject.resource = priceNodeDetailInfosResourcePriceModel["Resource"].asString();
		if(!priceNodeDetailInfosResourcePriceModel["OriginalPrice"].isNull())
			resourcePriceModelObject.originalPrice = std::stof(priceNodeDetailInfosResourcePriceModel["OriginalPrice"].asString());
		if(!priceNodeDetailInfosResourcePriceModel["DiscountPrice"].isNull())
			resourcePriceModelObject.discountPrice = std::stof(priceNodeDetailInfosResourcePriceModel["DiscountPrice"].asString());
		if(!priceNodeDetailInfosResourcePriceModel["TradePrice"].isNull())
			resourcePriceModelObject.tradePrice = std::stof(priceNodeDetailInfosResourcePriceModel["TradePrice"].asString());
		auto allSubRulesNode = allDetailInfosNode["SubRules"]["Rule"];
		for (auto allDetailInfosNodeSubRulesRule : allSubRulesNode)
		{
			PriceInfo::Price::ResourcePriceModel::Rule1 subRulesObject;
			if(!allDetailInfosNodeSubRulesRule["RuleId"].isNull())
				subRulesObject.ruleId = std::stol(allDetailInfosNodeSubRulesRule["RuleId"].asString());
			if(!allDetailInfosNodeSubRulesRule["Description"].isNull())
				subRulesObject.description = allDetailInfosNodeSubRulesRule["Description"].asString();
			resourcePriceModelObject.subRules.push_back(subRulesObject);
		}
		priceInfo_.price.detailInfos.push_back(resourcePriceModelObject);
	}

}

DescribePriceResult::PriceInfo DescribePriceResult::getPriceInfo()const
{
	return priceInfo_;
}

