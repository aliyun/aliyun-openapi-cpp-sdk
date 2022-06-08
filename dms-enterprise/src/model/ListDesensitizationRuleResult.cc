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

#include <alibabacloud/dms-enterprise/model/ListDesensitizationRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDesensitizationRuleResult::ListDesensitizationRuleResult() :
	ServiceResult()
{}

ListDesensitizationRuleResult::ListDesensitizationRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDesensitizationRuleResult::~ListDesensitizationRuleResult()
{}

void ListDesensitizationRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDesensitizationRuleListNode = value["DesensitizationRuleList"]["DesensitizationRule"];
	for (auto valueDesensitizationRuleListDesensitizationRule : allDesensitizationRuleListNode)
	{
		DesensitizationRule desensitizationRuleListObject;
		if(!valueDesensitizationRuleListDesensitizationRule["RuleName"].isNull())
			desensitizationRuleListObject.ruleName = valueDesensitizationRuleListDesensitizationRule["RuleName"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["RuleType"].isNull())
			desensitizationRuleListObject.ruleType = valueDesensitizationRuleListDesensitizationRule["RuleType"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["RuleDesc"].isNull())
			desensitizationRuleListObject.ruleDesc = valueDesensitizationRuleListDesensitizationRule["RuleDesc"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["FunctionType"].isNull())
			desensitizationRuleListObject.functionType = valueDesensitizationRuleListDesensitizationRule["FunctionType"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["FuncParams"].isNull())
			desensitizationRuleListObject.funcParams = valueDesensitizationRuleListDesensitizationRule["FuncParams"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["FuncSample"].isNull())
			desensitizationRuleListObject.funcSample = valueDesensitizationRuleListDesensitizationRule["FuncSample"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["LastModifierId"].isNull())
			desensitizationRuleListObject.lastModifierId = valueDesensitizationRuleListDesensitizationRule["LastModifierId"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["LastModifierName"].isNull())
			desensitizationRuleListObject.lastModifierName = valueDesensitizationRuleListDesensitizationRule["LastModifierName"].asString();
		if(!valueDesensitizationRuleListDesensitizationRule["ReferenceCount"].isNull())
			desensitizationRuleListObject.referenceCount = std::stoi(valueDesensitizationRuleListDesensitizationRule["ReferenceCount"].asString());
		if(!valueDesensitizationRuleListDesensitizationRule["RuleId"].isNull())
			desensitizationRuleListObject.ruleId = std::stoi(valueDesensitizationRuleListDesensitizationRule["RuleId"].asString());
		desensitizationRuleList_.push_back(desensitizationRuleListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int ListDesensitizationRuleResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDesensitizationRuleResult::DesensitizationRule> ListDesensitizationRuleResult::getDesensitizationRuleList()const
{
	return desensitizationRuleList_;
}

std::string ListDesensitizationRuleResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDesensitizationRuleResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDesensitizationRuleResult::getSuccess()const
{
	return success_;
}

