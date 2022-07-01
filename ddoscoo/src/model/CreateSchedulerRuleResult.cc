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

#include <alibabacloud/ddoscoo/model/CreateSchedulerRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

CreateSchedulerRuleResult::CreateSchedulerRuleResult() :
	ServiceResult()
{}

CreateSchedulerRuleResult::CreateSchedulerRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateSchedulerRuleResult::~CreateSchedulerRuleResult()
{}

void CreateSchedulerRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Cname"].isNull())
		cname_ = value["Cname"].asString();
	if(!value["RuleName"].isNull())
		ruleName_ = value["RuleName"].asString();

}

std::string CreateSchedulerRuleResult::getCname()const
{
	return cname_;
}

std::string CreateSchedulerRuleResult::getRuleName()const
{
	return ruleName_;
}

