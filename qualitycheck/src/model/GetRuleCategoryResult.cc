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

#include <alibabacloud/qualitycheck/model/GetRuleCategoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetRuleCategoryResult::GetRuleCategoryResult() :
	ServiceResult()
{}

GetRuleCategoryResult::GetRuleCategoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRuleCategoryResult::~GetRuleCategoryResult()
{}

void GetRuleCategoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RuleCountInfo"];
	for (auto valueDataRuleCountInfo : allDataNode)
	{
		RuleCountInfo dataObject;
		if(!valueDataRuleCountInfo["Type"].isNull())
			dataObject.type = std::stoi(valueDataRuleCountInfo["Type"].asString());
		if(!valueDataRuleCountInfo["TypeName"].isNull())
			dataObject.typeName = valueDataRuleCountInfo["TypeName"].asString();
		if(!valueDataRuleCountInfo["Select"].isNull())
			dataObject.select = valueDataRuleCountInfo["Select"].asString() == "true";
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetRuleCategoryResult::getMessage()const
{
	return message_;
}

std::vector<GetRuleCategoryResult::RuleCountInfo> GetRuleCategoryResult::getData()const
{
	return data_;
}

std::string GetRuleCategoryResult::getCode()const
{
	return code_;
}

bool GetRuleCategoryResult::getSuccess()const
{
	return success_;
}

