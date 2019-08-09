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

#include <alibabacloud/ecs/model/DescribeRenewalPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeRenewalPriceResult::DescribeRenewalPriceResult() :
	ServiceResult()
{}

DescribeRenewalPriceResult::DescribeRenewalPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRenewalPriceResult::~DescribeRenewalPriceResult()
{}

void DescribeRenewalPriceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto priceInfoNode = value["PriceInfo"];
	auto allRules = value["Rules"]["Rule"];
	for (auto value : allRules)
	{
		PriceInfo::Rule ruleObject;
		if(!value["RuleId"].isNull())
			ruleObject.ruleId = std::stol(value["RuleId"].asString());
		if(!value["Description"].isNull())
			ruleObject.description = value["Description"].asString();
		priceInfo_.rules.push_back(ruleObject);
	}
	auto priceNode = priceInfoNode["Price"];
	if(!priceNode["OriginalPrice"].isNull())
		priceInfo_.price.originalPrice = std::stof(priceNode["OriginalPrice"].asString());
	if(!priceNode["DiscountPrice"].isNull())
		priceInfo_.price.discountPrice = std::stof(priceNode["DiscountPrice"].asString());
	if(!priceNode["TradePrice"].isNull())
		priceInfo_.price.tradePrice = std::stof(priceNode["TradePrice"].asString());
	if(!priceNode["Currency"].isNull())
		priceInfo_.price.currency = priceNode["Currency"].asString();
	auto allDetailInfos = value["DetailInfos"]["ResourcePriceModel"];
	for (auto value : allDetailInfos)
	{
		PriceInfo::Price::ResourcePriceModel resourcePriceModelObject;
		if(!value["Resource"].isNull())
			resourcePriceModelObject.resource = value["Resource"].asString();
		if(!value["OriginalPrice"].isNull())
			resourcePriceModelObject.originalPrice = std::stof(value["OriginalPrice"].asString());
		if(!value["DiscountPrice"].isNull())
			resourcePriceModelObject.discountPrice = std::stof(value["DiscountPrice"].asString());
		if(!value["TradePrice"].isNull())
			resourcePriceModelObject.tradePrice = std::stof(value["TradePrice"].asString());
		auto allSubRules = value["SubRules"]["Rule"];
		for (auto value : allSubRules)
		{
			PriceInfo::Price::ResourcePriceModel::Rule1 subRulesObject;
			if(!value["RuleId"].isNull())
				subRulesObject.ruleId = std::stol(value["RuleId"].asString());
			if(!value["Description"].isNull())
				subRulesObject.description = value["Description"].asString();
			resourcePriceModelObject.subRules.push_back(subRulesObject);
		}
		priceInfo_.price.detailInfos.push_back(resourcePriceModelObject);
	}

}

DescribeRenewalPriceResult::PriceInfo DescribeRenewalPriceResult::getPriceInfo()const
{
	return priceInfo_;
}

