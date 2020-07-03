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

#include <alibabacloud/airec/model/DescribeRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeRuleResult::DescribeRuleResult() :
	ServiceResult()
{}

DescribeRuleResult::DescribeRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleResult::~DescribeRuleResult()
{}

void DescribeRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["RuleId"].isNull())
		result_.ruleId = resultNode["RuleId"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = resultNode["GmtCreate"].asString();
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = resultNode["GmtModified"].asString();
	if(!resultNode["Status"].isNull())
		result_.status = resultNode["Status"].asString();

}

DescribeRuleResult::Result DescribeRuleResult::getResult()const
{
	return result_;
}

