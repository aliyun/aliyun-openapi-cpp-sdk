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

#include <alibabacloud/polardb/model/DescribeSQLRateLimitingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSQLRateLimitingRulesResult::DescribeSQLRateLimitingRulesResult() :
	ServiceResult()
{}

DescribeSQLRateLimitingRulesResult::DescribeSQLRateLimitingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLRateLimitingRulesResult::~DescribeSQLRateLimitingRulesResult()
{}

void DescribeSQLRateLimitingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
		auto allRuleList = dataNode["RuleList"]["RuleList"];
		for (auto value : allRuleList)
			data_.ruleList.push_back(value.asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeSQLRateLimitingRulesResult::getMessage()const
{
	return message_;
}

std::string DescribeSQLRateLimitingRulesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeSQLRateLimitingRulesResult::getMaxResults()const
{
	return maxResults_;
}

DescribeSQLRateLimitingRulesResult::Data DescribeSQLRateLimitingRulesResult::getData()const
{
	return data_;
}

