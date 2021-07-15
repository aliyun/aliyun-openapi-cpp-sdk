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

#include <alibabacloud/alb/model/CreateRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alb;
using namespace AlibabaCloud::Alb::Model;

CreateRulesResult::CreateRulesResult() :
	ServiceResult()
{}

CreateRulesResult::CreateRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRulesResult::~CreateRulesResult()
{}

void CreateRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleIdsNode = value["RuleIds"]["RuleId"];
	for (auto valueRuleIdsRuleId : allRuleIdsNode)
	{
		RuleId ruleIdsObject;
		if(!valueRuleIdsRuleId["RuleId"].isNull())
			ruleIdsObject.ruleId = valueRuleIdsRuleId["RuleId"].asString();
		if(!valueRuleIdsRuleId["Priority"].isNull())
			ruleIdsObject.priority = std::stoi(valueRuleIdsRuleId["Priority"].asString());
		ruleIds_.push_back(ruleIdsObject);
	}
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();

}

std::vector<CreateRulesResult::RuleId> CreateRulesResult::getRuleIds()const
{
	return ruleIds_;
}

std::string CreateRulesResult::getJobId()const
{
	return jobId_;
}

