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

#include <alibabacloud/waf-openapi/model/DescribeRuleSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeRuleSummaryResult::DescribeRuleSummaryResult() :
	ServiceResult()
{}

DescribeRuleSummaryResult::DescribeRuleSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleSummaryResult::~DescribeRuleSummaryResult()
{}

void DescribeRuleSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleSummarysNode = value["RuleSummarys"]["Item"];
	for (auto valueRuleSummarysItem : allRuleSummarysNode)
	{
		Item ruleSummarysObject;
		if(!valueRuleSummarysItem["TimeStamp"].isNull())
			ruleSummarysObject.timeStamp = std::stol(valueRuleSummarysItem["TimeStamp"].asString());
		if(!valueRuleSummarysItem["Pv"].isNull())
			ruleSummarysObject.pv = std::stol(valueRuleSummarysItem["Pv"].asString());
		ruleSummarys_.push_back(ruleSummarysObject);
	}

}

std::vector<DescribeRuleSummaryResult::Item> DescribeRuleSummaryResult::getRuleSummarys()const
{
	return ruleSummarys_;
}

