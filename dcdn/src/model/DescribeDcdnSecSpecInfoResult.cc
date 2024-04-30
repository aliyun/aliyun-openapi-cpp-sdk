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

#include <alibabacloud/dcdn/model/DescribeDcdnSecSpecInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnSecSpecInfoResult::DescribeDcdnSecSpecInfoResult() :
	ServiceResult()
{}

DescribeDcdnSecSpecInfoResult::DescribeDcdnSecSpecInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnSecSpecInfoResult::~DescribeDcdnSecSpecInfoResult()
{}

void DescribeDcdnSecSpecInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpecInfosNode = value["SpecInfos"]["RuleInfoItem"];
	for (auto valueSpecInfosRuleInfoItem : allSpecInfosNode)
	{
		RuleInfoItem specInfosObject;
		if(!valueSpecInfosRuleInfoItem["RuleCode"].isNull())
			specInfosObject.ruleCode = valueSpecInfosRuleInfoItem["RuleCode"].asString();
		auto allRuleConfigsNode = valueSpecInfosRuleInfoItem["RuleConfigs"]["ConfigItem"];
		for (auto valueSpecInfosRuleInfoItemRuleConfigsConfigItem : allRuleConfigsNode)
		{
			RuleInfoItem::ConfigItem ruleConfigsObject;
			if(!valueSpecInfosRuleInfoItemRuleConfigsConfigItem["Code"].isNull())
				ruleConfigsObject.code = valueSpecInfosRuleInfoItemRuleConfigsConfigItem["Code"].asString();
			if(!valueSpecInfosRuleInfoItemRuleConfigsConfigItem["Value"].isNull())
				ruleConfigsObject.value = valueSpecInfosRuleInfoItemRuleConfigsConfigItem["Value"].asString();
			if(!valueSpecInfosRuleInfoItemRuleConfigsConfigItem["Expr"].isNull())
				ruleConfigsObject.expr = valueSpecInfosRuleInfoItemRuleConfigsConfigItem["Expr"].asString();
			specInfosObject.ruleConfigs.push_back(ruleConfigsObject);
		}
		specInfos_.push_back(specInfosObject);
	}
	if(!value["Version"].isNull())
		version_ = value["Version"].asString();

}

std::string DescribeDcdnSecSpecInfoResult::getVersion()const
{
	return version_;
}

std::vector<DescribeDcdnSecSpecInfoResult::RuleInfoItem> DescribeDcdnSecSpecInfoResult::getSpecInfos()const
{
	return specInfos_;
}

