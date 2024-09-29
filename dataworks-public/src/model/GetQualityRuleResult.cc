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

#include <alibabacloud/dataworks-public/model/GetQualityRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetQualityRuleResult::GetQualityRuleResult() :
	ServiceResult()
{}

GetQualityRuleResult::GetQualityRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQualityRuleResult::~GetQualityRuleResult()
{}

void GetQualityRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["BlockType"].isNull())
		data_.blockType = std::stoi(dataNode["BlockType"].asString());
	if(!dataNode["OnDutyAccountName"].isNull())
		data_.onDutyAccountName = dataNode["OnDutyAccountName"].asString();
	if(!dataNode["WarningThreshold"].isNull())
		data_.warningThreshold = dataNode["WarningThreshold"].asString();
	if(!dataNode["Property"].isNull())
		data_.property = dataNode["Property"].asString();
	if(!dataNode["RuleType"].isNull())
		data_.ruleType = std::stoi(dataNode["RuleType"].asString());
	if(!dataNode["Comment"].isNull())
		data_.comment = dataNode["Comment"].asString();
	if(!dataNode["OnDuty"].isNull())
		data_.onDuty = dataNode["OnDuty"].asString();
	if(!dataNode["Checker"].isNull())
		data_.checker = std::stoi(dataNode["Checker"].asString());
	if(!dataNode["FixCheck"].isNull())
		data_.fixCheck = dataNode["FixCheck"].asString() == "true";
	if(!dataNode["MethodId"].isNull())
		data_.methodId = std::stoi(dataNode["MethodId"].asString());
	if(!dataNode["CriticalThreshold"].isNull())
		data_.criticalThreshold = dataNode["CriticalThreshold"].asString();
	if(!dataNode["PredictType"].isNull())
		data_.predictType = std::stoi(dataNode["PredictType"].asString());
	if(!dataNode["TemplateName"].isNull())
		data_.templateName = dataNode["TemplateName"].asString();
	if(!dataNode["CheckerName"].isNull())
		data_.checkerName = dataNode["CheckerName"].asString();
	if(!dataNode["RuleName"].isNull())
		data_.ruleName = dataNode["RuleName"].asString();
	if(!dataNode["MethodName"].isNull())
		data_.methodName = dataNode["MethodName"].asString();
	if(!dataNode["EntityId"].isNull())
		data_.entityId = std::stol(dataNode["EntityId"].asString());
	if(!dataNode["WhereCondition"].isNull())
		data_.whereCondition = dataNode["WhereCondition"].asString();
	if(!dataNode["Operator"].isNull())
		data_._operator = dataNode["Operator"].asString();
	if(!dataNode["ExpectValue"].isNull())
		data_.expectValue = dataNode["ExpectValue"].asString();
	if(!dataNode["Trend"].isNull())
		data_.trend = dataNode["Trend"].asString();
	if(!dataNode["TemplateId"].isNull())
		data_.templateId = std::stoi(dataNode["TemplateId"].asString());
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["OpenSwitch"].isNull())
		data_.openSwitch = dataNode["OpenSwitch"].asString() == "true";
	if(!dataNode["TaskSetting"].isNull())
		data_.taskSetting = dataNode["TaskSetting"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetQualityRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetQualityRuleResult::Data GetQualityRuleResult::getData()const
{
	return data_;
}

std::string GetQualityRuleResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetQualityRuleResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetQualityRuleResult::getSuccess()const
{
	return success_;
}

