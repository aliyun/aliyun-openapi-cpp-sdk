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

#include <alibabacloud/eventbridge/model/GetRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

GetRuleResult::GetRuleResult() :
	ServiceResult()
{}

GetRuleResult::GetRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRuleResult::~GetRuleResult()
{}

void GetRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["EventBusName"].isNull())
		data_.eventBusName = dataNode["EventBusName"].asString();
	if(!dataNode["RuleARN"].isNull())
		data_.ruleARN = dataNode["RuleARN"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["FilterPattern"].isNull())
		data_.filterPattern = dataNode["FilterPattern"].asString();
	if(!dataNode["CreatedTimestamp"].isNull())
		data_.createdTimestamp = std::stol(dataNode["CreatedTimestamp"].asString());
	if(!dataNode["RuleName"].isNull())
		data_.ruleName = dataNode["RuleName"].asString();
	auto allTargetsNode = dataNode["Targets"]["TargetsItem"];
	for (auto dataNodeTargetsTargetsItem : allTargetsNode)
	{
		Data::TargetsItem targetsItemObject;
		if(!dataNodeTargetsTargetsItem["DetailMap"].isNull())
			targetsItemObject.detailMap = dataNodeTargetsTargetsItem["DetailMap"].asString();
		if(!dataNodeTargetsTargetsItem["Type"].isNull())
			targetsItemObject.type = dataNodeTargetsTargetsItem["Type"].asString();
		if(!dataNodeTargetsTargetsItem["Endpoint"].isNull())
			targetsItemObject.endpoint = dataNodeTargetsTargetsItem["Endpoint"].asString();
		if(!dataNodeTargetsTargetsItem["PushSelector"].isNull())
			targetsItemObject.pushSelector = dataNodeTargetsTargetsItem["PushSelector"].asString();
		if(!dataNodeTargetsTargetsItem["Id"].isNull())
			targetsItemObject.id = dataNodeTargetsTargetsItem["Id"].asString();
		if(!dataNodeTargetsTargetsItem["PushRetryStrategy"].isNull())
			targetsItemObject.pushRetryStrategy = dataNodeTargetsTargetsItem["PushRetryStrategy"].asString();
		if(!dataNodeTargetsTargetsItem["ErrorsTolerance"].isNull())
			targetsItemObject.errorsTolerance = dataNodeTargetsTargetsItem["ErrorsTolerance"].asString();
		auto allParamListNode = dataNodeTargetsTargetsItem["ParamList"]["ParamListItem"];
		for (auto dataNodeTargetsTargetsItemParamListParamListItem : allParamListNode)
		{
			Data::TargetsItem::ParamListItem paramListObject;
			if(!dataNodeTargetsTargetsItemParamListParamListItem["Value"].isNull())
				paramListObject.value = dataNodeTargetsTargetsItemParamListParamListItem["Value"].asString();
			if(!dataNodeTargetsTargetsItemParamListParamListItem["Template"].isNull())
				paramListObject._template = dataNodeTargetsTargetsItemParamListParamListItem["Template"].asString();
			if(!dataNodeTargetsTargetsItemParamListParamListItem["Form"].isNull())
				paramListObject.form = dataNodeTargetsTargetsItemParamListParamListItem["Form"].asString();
			if(!dataNodeTargetsTargetsItemParamListParamListItem["ResourceKey"].isNull())
				paramListObject.resourceKey = dataNodeTargetsTargetsItemParamListParamListItem["ResourceKey"].asString();
			targetsItemObject.paramList.push_back(paramListObject);
		}
		auto deadLetterQueueNode = value["DeadLetterQueue"];
		if(!deadLetterQueueNode["Arn"].isNull())
			targetsItemObject.deadLetterQueue.arn = deadLetterQueueNode["Arn"].asString();
		data_.targets.push_back(targetsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRuleResult::getMessage()const
{
	return message_;
}

GetRuleResult::Data GetRuleResult::getData()const
{
	return data_;
}

std::string GetRuleResult::getCode()const
{
	return code_;
}

bool GetRuleResult::getSuccess()const
{
	return success_;
}

