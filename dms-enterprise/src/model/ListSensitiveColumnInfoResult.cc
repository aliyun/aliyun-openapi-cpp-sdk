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

#include <alibabacloud/dms-enterprise/model/ListSensitiveColumnInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSensitiveColumnInfoResult::ListSensitiveColumnInfoResult() :
	ServiceResult()
{}

ListSensitiveColumnInfoResult::ListSensitiveColumnInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSensitiveColumnInfoResult::~ListSensitiveColumnInfoResult()
{}

void ListSensitiveColumnInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveColumnListNode = value["SensitiveColumnList"]["SensitiveColumn"];
	for (auto valueSensitiveColumnListSensitiveColumn : allSensitiveColumnListNode)
	{
		SensitiveColumn sensitiveColumnListObject;
		if(!valueSensitiveColumnListSensitiveColumn["InstanceId"].isNull())
			sensitiveColumnListObject.instanceId = std::stoi(valueSensitiveColumnListSensitiveColumn["InstanceId"].asString());
		if(!valueSensitiveColumnListSensitiveColumn["SchemaName"].isNull())
			sensitiveColumnListObject.schemaName = valueSensitiveColumnListSensitiveColumn["SchemaName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["TableName"].isNull())
			sensitiveColumnListObject.tableName = valueSensitiveColumnListSensitiveColumn["TableName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["ColumnName"].isNull())
			sensitiveColumnListObject.columnName = valueSensitiveColumnListSensitiveColumn["ColumnName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["CategoryName"].isNull())
			sensitiveColumnListObject.categoryName = valueSensitiveColumnListSensitiveColumn["CategoryName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["IsPlain"].isNull())
			sensitiveColumnListObject.isPlain = valueSensitiveColumnListSensitiveColumn["IsPlain"].asString() == "true";
		if(!valueSensitiveColumnListSensitiveColumn["SecurityLevel"].isNull())
			sensitiveColumnListObject.securityLevel = valueSensitiveColumnListSensitiveColumn["SecurityLevel"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["UserSensitivityLevel"].isNull())
			sensitiveColumnListObject.userSensitivityLevel = valueSensitiveColumnListSensitiveColumn["UserSensitivityLevel"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["SampleData"].isNull())
			sensitiveColumnListObject.sampleData = valueSensitiveColumnListSensitiveColumn["SampleData"].asString();
		auto allSemiDesensitizationRuleListNode = valueSensitiveColumnListSensitiveColumn["SemiDesensitizationRuleList"]["SemiDesensitizationRule"];
		for (auto valueSensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule : allSemiDesensitizationRuleListNode)
		{
			SensitiveColumn::SemiDesensitizationRule semiDesensitizationRuleListObject;
			if(!valueSensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule["RuleId"].isNull())
				semiDesensitizationRuleListObject.ruleId = std::stol(valueSensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule["RuleId"].asString());
			if(!valueSensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule["RuleName"].isNull())
				semiDesensitizationRuleListObject.ruleName = valueSensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule["RuleName"].asString();
			sensitiveColumnListObject.semiDesensitizationRuleList.push_back(semiDesensitizationRuleListObject);
		}
		auto defaultDesensitizationRuleNode = value["DefaultDesensitizationRule"];
		if(!defaultDesensitizationRuleNode["RuleId"].isNull())
			sensitiveColumnListObject.defaultDesensitizationRule.ruleId = std::stol(defaultDesensitizationRuleNode["RuleId"].asString());
		if(!defaultDesensitizationRuleNode["RuleName"].isNull())
			sensitiveColumnListObject.defaultDesensitizationRule.ruleName = defaultDesensitizationRuleNode["RuleName"].asString();
		sensitiveColumnList_.push_back(sensitiveColumnListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListSensitiveColumnInfoResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSensitiveColumnInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSensitiveColumnInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListSensitiveColumnInfoResult::SensitiveColumn> ListSensitiveColumnInfoResult::getSensitiveColumnList()const
{
	return sensitiveColumnList_;
}

bool ListSensitiveColumnInfoResult::getSuccess()const
{
	return success_;
}

