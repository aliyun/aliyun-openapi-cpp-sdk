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

#include <alibabacloud/dcdn/model/DescribeDcdnWafSpecInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafSpecInfoResult::DescribeDcdnWafSpecInfoResult() :
	ServiceResult()
{}

DescribeDcdnWafSpecInfoResult::DescribeDcdnWafSpecInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafSpecInfoResult::~DescribeDcdnWafSpecInfoResult()
{}

void DescribeDcdnWafSpecInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpecInfosNode = value["SpecInfos"]["RuleInfoItem"];
	for (auto valueSpecInfosRuleInfoItem : allSpecInfosNode)
	{
		RuleInfoItem specInfosObject;
		if(!valueSpecInfosRuleInfoItem["DefenseScene"].isNull())
			specInfosObject.defenseScene = valueSpecInfosRuleInfoItem["DefenseScene"].asString();
		auto allConfigsNode = valueSpecInfosRuleInfoItem["Configs"]["ConfigItem"];
		for (auto valueSpecInfosRuleInfoItemConfigsConfigItem : allConfigsNode)
		{
			RuleInfoItem::ConfigItem configsObject;
			if(!valueSpecInfosRuleInfoItemConfigsConfigItem["Value"].isNull())
				configsObject.value = valueSpecInfosRuleInfoItemConfigsConfigItem["Value"].asString();
			if(!valueSpecInfosRuleInfoItemConfigsConfigItem["Config"].isNull())
				configsObject.config = valueSpecInfosRuleInfoItemConfigsConfigItem["Config"].asString();
			if(!valueSpecInfosRuleInfoItemConfigsConfigItem["Expr"].isNull())
				configsObject.expr = valueSpecInfosRuleInfoItemConfigsConfigItem["Expr"].asString();
			specInfosObject.configs.push_back(configsObject);
		}
		specInfos_.push_back(specInfosObject);
	}
	if(!value["Edition"].isNull())
		edition_ = value["Edition"].asString();

}

std::vector<DescribeDcdnWafSpecInfoResult::RuleInfoItem> DescribeDcdnWafSpecInfoResult::getSpecInfos()const
{
	return specInfos_;
}

std::string DescribeDcdnWafSpecInfoResult::getEdition()const
{
	return edition_;
}

