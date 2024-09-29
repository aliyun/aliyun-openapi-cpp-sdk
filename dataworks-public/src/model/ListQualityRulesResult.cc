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

#include <alibabacloud/dataworks-public/model/ListQualityRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListQualityRulesResult::ListQualityRulesResult() :
	ServiceResult()
{}

ListQualityRulesResult::ListQualityRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQualityRulesResult::~ListQualityRulesResult()
{}

void ListQualityRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allRulesNode = dataNode["Rules"]["RulesItem"];
	for (auto dataNodeRulesRulesItem : allRulesNode)
	{
		Data::RulesItem rulesItemObject;
		if(!dataNodeRulesRulesItem["BlockType"].isNull())
			rulesItemObject.blockType = std::stoi(dataNodeRulesRulesItem["BlockType"].asString());
		if(!dataNodeRulesRulesItem["OnDutyAccountName"].isNull())
			rulesItemObject.onDutyAccountName = dataNodeRulesRulesItem["OnDutyAccountName"].asString();
		if(!dataNodeRulesRulesItem["Property"].isNull())
			rulesItemObject.property = dataNodeRulesRulesItem["Property"].asString();
		if(!dataNodeRulesRulesItem["WarningThreshold"].isNull())
			rulesItemObject.warningThreshold = dataNodeRulesRulesItem["WarningThreshold"].asString();
		if(!dataNodeRulesRulesItem["TableName"].isNull())
			rulesItemObject.tableName = dataNodeRulesRulesItem["TableName"].asString();
		if(!dataNodeRulesRulesItem["OnDuty"].isNull())
			rulesItemObject.onDuty = dataNodeRulesRulesItem["OnDuty"].asString();
		if(!dataNodeRulesRulesItem["Comment"].isNull())
			rulesItemObject.comment = dataNodeRulesRulesItem["Comment"].asString();
		if(!dataNodeRulesRulesItem["RuleCheckerRelationId"].isNull())
			rulesItemObject.ruleCheckerRelationId = std::stol(dataNodeRulesRulesItem["RuleCheckerRelationId"].asString());
		if(!dataNodeRulesRulesItem["FixCheck"].isNull())
			rulesItemObject.fixCheck = dataNodeRulesRulesItem["FixCheck"].asString() == "true";
		if(!dataNodeRulesRulesItem["MethodId"].isNull())
			rulesItemObject.methodId = std::stoi(dataNodeRulesRulesItem["MethodId"].asString());
		if(!dataNodeRulesRulesItem["TemplateName"].isNull())
			rulesItemObject.templateName = dataNodeRulesRulesItem["TemplateName"].asString();
		if(!dataNodeRulesRulesItem["Trend"].isNull())
			rulesItemObject.trend = dataNodeRulesRulesItem["Trend"].asString();
		if(!dataNodeRulesRulesItem["HistoryWarningThreshold"].isNull())
			rulesItemObject.historyWarningThreshold = dataNodeRulesRulesItem["HistoryWarningThreshold"].asString();
		if(!dataNodeRulesRulesItem["RuleType"].isNull())
			rulesItemObject.ruleType = std::stoi(dataNodeRulesRulesItem["RuleType"].asString());
		if(!dataNodeRulesRulesItem["MatchExpression"].isNull())
			rulesItemObject.matchExpression = dataNodeRulesRulesItem["MatchExpression"].asString();
		if(!dataNodeRulesRulesItem["ProjectName"].isNull())
			rulesItemObject.projectName = dataNodeRulesRulesItem["ProjectName"].asString();
		if(!dataNodeRulesRulesItem["PropertyKey"].isNull())
			rulesItemObject.propertyKey = dataNodeRulesRulesItem["PropertyKey"].asString();
		if(!dataNodeRulesRulesItem["CriticalThreshold"].isNull())
			rulesItemObject.criticalThreshold = dataNodeRulesRulesItem["CriticalThreshold"].asString();
		if(!dataNodeRulesRulesItem["HistoryCriticalThreshold"].isNull())
			rulesItemObject.historyCriticalThreshold = dataNodeRulesRulesItem["HistoryCriticalThreshold"].asString();
		if(!dataNodeRulesRulesItem["MethodName"].isNull())
			rulesItemObject.methodName = dataNodeRulesRulesItem["MethodName"].asString();
		if(!dataNodeRulesRulesItem["CheckerId"].isNull())
			rulesItemObject.checkerId = std::stoi(dataNodeRulesRulesItem["CheckerId"].asString());
		if(!dataNodeRulesRulesItem["EntityId"].isNull())
			rulesItemObject.entityId = std::stol(dataNodeRulesRulesItem["EntityId"].asString());
		if(!dataNodeRulesRulesItem["ExpectValue"].isNull())
			rulesItemObject.expectValue = dataNodeRulesRulesItem["ExpectValue"].asString();
		if(!dataNodeRulesRulesItem["TemplateId"].isNull())
			rulesItemObject.templateId = std::stoi(dataNodeRulesRulesItem["TemplateId"].asString());
		if(!dataNodeRulesRulesItem["Id"].isNull())
			rulesItemObject.id = std::stol(dataNodeRulesRulesItem["Id"].asString());
		if(!dataNodeRulesRulesItem["RuleName"].isNull())
			rulesItemObject.ruleName = dataNodeRulesRulesItem["RuleName"].asString();
		data_.rules.push_back(rulesItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int ListQualityRulesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListQualityRulesResult::Data ListQualityRulesResult::getData()const
{
	return data_;
}

std::string ListQualityRulesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListQualityRulesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListQualityRulesResult::getSuccess()const
{
	return success_;
}

