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

#include <alibabacloud/polardb/model/DescribeMaskingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeMaskingRulesResult::DescribeMaskingRulesResult() :
	ServiceResult()
{}

DescribeMaskingRulesResult::DescribeMaskingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMaskingRulesResult::~DescribeMaskingRulesResult()
{}

void DescribeMaskingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RuleVersion"].isNull())
		data_.ruleVersion = dataNode["RuleVersion"].asString();
		auto allRuleList = dataNode["RuleList"]["RuleList"];
		for (auto value : allRuleList)
			data_.ruleList.push_back(value.asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeMaskingRulesResult::getMessage()const
{
	return message_;
}

std::string DescribeMaskingRulesResult::getDBClusterId()const
{
	return dBClusterId_;
}

DescribeMaskingRulesResult::Data DescribeMaskingRulesResult::getData()const
{
	return data_;
}

bool DescribeMaskingRulesResult::getSuccess()const
{
	return success_;
}

