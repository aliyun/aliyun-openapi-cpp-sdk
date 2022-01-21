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

#include <alibabacloud/cms/model/DescribeEventRuleAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeEventRuleAttributeResult::DescribeEventRuleAttributeResult() :
	ServiceResult()
{}

DescribeEventRuleAttributeResult::DescribeEventRuleAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventRuleAttributeResult::~DescribeEventRuleAttributeResult()
{}

void DescribeEventRuleAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["EventType"].isNull())
		result_.eventType = resultNode["EventType"].asString();
	if(!resultNode["GroupId"].isNull())
		result_.groupId = resultNode["GroupId"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["State"].isNull())
		result_.state = resultNode["State"].asString();
	auto eventPatternNode = resultNode["EventPattern"];
	if(!eventPatternNode["Product"].isNull())
		result_.eventPattern.product = eventPatternNode["Product"].asString();
		auto allLevelList = eventPatternNode["LevelList"]["LevelList"];
		for (auto value : allLevelList)
			result_.eventPattern.levelList.push_back(value.asString());
		auto allStatusList = eventPatternNode["StatusList"]["StatusList"];
		for (auto value : allStatusList)
			result_.eventPattern.statusList.push_back(value.asString());
		auto allNameList = eventPatternNode["NameList"]["NameList"];
		for (auto value : allNameList)
			result_.eventPattern.nameList.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeEventRuleAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeEventRuleAttributeResult::getCode()const
{
	return code_;
}

bool DescribeEventRuleAttributeResult::getSuccess()const
{
	return success_;
}

DescribeEventRuleAttributeResult::Result DescribeEventRuleAttributeResult::getResult()const
{
	return result_;
}

