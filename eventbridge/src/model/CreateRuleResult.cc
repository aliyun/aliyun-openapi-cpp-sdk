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

#include <alibabacloud/eventbridge/model/CreateRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

CreateRuleResult::CreateRuleResult() :
	ServiceResult()
{}

CreateRuleResult::CreateRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRuleResult::~CreateRuleResult()
{}

void CreateRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RuleARN"].isNull())
		data_.ruleARN = dataNode["RuleARN"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateRuleResult::getMessage()const
{
	return message_;
}

CreateRuleResult::Data CreateRuleResult::getData()const
{
	return data_;
}

std::string CreateRuleResult::getCode()const
{
	return code_;
}

bool CreateRuleResult::getSuccess()const
{
	return success_;
}

