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

#include <alibabacloud/sas/model/ListRuleTargetAllResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListRuleTargetAllResult::ListRuleTargetAllResult() :
	ServiceResult()
{}

ListRuleTargetAllResult::ListRuleTargetAllResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRuleTargetAllResult::~ListRuleTargetAllResult()
{}

void ListRuleTargetAllResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleTargetListNode = value["RuleTargetList"]["RuleTarget"];
	for (auto valueRuleTargetListRuleTarget : allRuleTargetListNode)
	{
		RuleTarget ruleTargetListObject;
		if(!valueRuleTargetListRuleTarget["TargetId"].isNull())
			ruleTargetListObject.targetId = std::stol(valueRuleTargetListRuleTarget["TargetId"].asString());
		if(!valueRuleTargetListRuleTarget["TargetName"].isNull())
			ruleTargetListObject.targetName = valueRuleTargetListRuleTarget["TargetName"].asString();
		if(!valueRuleTargetListRuleTarget["TargetType"].isNull())
			ruleTargetListObject.targetType = valueRuleTargetListRuleTarget["TargetType"].asString();
		ruleTargetList_.push_back(ruleTargetListObject);
	}

}

std::vector<ListRuleTargetAllResult::RuleTarget> ListRuleTargetAllResult::getRuleTargetList()const
{
	return ruleTargetList_;
}

