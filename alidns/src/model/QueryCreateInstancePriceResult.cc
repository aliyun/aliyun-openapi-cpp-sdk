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

#include <alibabacloud/alidns/model/QueryCreateInstancePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

QueryCreateInstancePriceResult::QueryCreateInstancePriceResult() :
	ServiceResult()
{}

QueryCreateInstancePriceResult::QueryCreateInstancePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCreateInstancePriceResult::~QueryCreateInstancePriceResult()
{}

void QueryCreateInstancePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRules = value["Rules"]["Rule"];
	for (auto value : allRules)
	{
		Rule rulesObject;
		if(!value["RuleId"].isNull())
			rulesObject.ruleId = std::stol(value["RuleId"].asString());
		if(!value["Name"].isNull())
			rulesObject.name = value["Name"].asString();
		if(!value["Title"].isNull())
			rulesObject.title = value["Title"].asString();
		rules_.push_back(rulesObject);
	}
	if(!value["Origin"].isNull())
		origin_ = value["Origin"].asString();
	if(!value["Discount"].isNull())
		discount_ = value["Discount"].asString();
	if(!value["Amount"].isNull())
		amount_ = value["Amount"].asString();
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();

}

std::string QueryCreateInstancePriceResult::getOrigin()const
{
	return origin_;
}

std::string QueryCreateInstancePriceResult::getDiscount()const
{
	return discount_;
}

std::string QueryCreateInstancePriceResult::getAmount()const
{
	return amount_;
}

std::string QueryCreateInstancePriceResult::getCurrency()const
{
	return currency_;
}

std::vector<QueryCreateInstancePriceResult::Rule> QueryCreateInstancePriceResult::getRules()const
{
	return rules_;
}

