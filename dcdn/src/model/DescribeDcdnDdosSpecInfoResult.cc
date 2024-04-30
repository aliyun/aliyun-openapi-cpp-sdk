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

#include <alibabacloud/dcdn/model/DescribeDcdnDdosSpecInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnDdosSpecInfoResult::DescribeDcdnDdosSpecInfoResult() :
	ServiceResult()
{}

DescribeDcdnDdosSpecInfoResult::DescribeDcdnDdosSpecInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnDdosSpecInfoResult::~DescribeDcdnDdosSpecInfoResult()
{}

void DescribeDcdnDdosSpecInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpecInfosNode = value["SpecInfos"]["RuleInfoItem"];
	for (auto valueSpecInfosRuleInfoItem : allSpecInfosNode)
	{
		RuleInfoItem specInfosObject;
		if(!valueSpecInfosRuleInfoItem["Rule"].isNull())
			specInfosObject.rule = valueSpecInfosRuleInfoItem["Rule"].asString();
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
	if(!value["Enable"].isNull())
		enable_ = value["Enable"].asString();
	if(!value["ProtectedArea"].isNull())
		protectedArea_ = value["ProtectedArea"].asString();
	if(!value["BandwidthLimit"].isNull())
		bandwidthLimit_ = value["BandwidthLimit"].asString();
	if(!value["QpsLimit"].isNull())
		qpsLimit_ = value["QpsLimit"].asString();
	if(!value["IsSpecialPort"].isNull())
		isSpecialPort_ = value["IsSpecialPort"].asString();

}

std::string DescribeDcdnDdosSpecInfoResult::getQpsLimit()const
{
	return qpsLimit_;
}

std::string DescribeDcdnDdosSpecInfoResult::getIsSpecialPort()const
{
	return isSpecialPort_;
}

std::string DescribeDcdnDdosSpecInfoResult::getProtectedArea()const
{
	return protectedArea_;
}

std::string DescribeDcdnDdosSpecInfoResult::getEnable()const
{
	return enable_;
}

std::vector<DescribeDcdnDdosSpecInfoResult::RuleInfoItem> DescribeDcdnDdosSpecInfoResult::getSpecInfos()const
{
	return specInfos_;
}

std::string DescribeDcdnDdosSpecInfoResult::getEdition()const
{
	return edition_;
}

std::string DescribeDcdnDdosSpecInfoResult::getBandwidthLimit()const
{
	return bandwidthLimit_;
}

