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

#include <alibabacloud/airec/model/CreateRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

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
	auto resultNode = value["result"];
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = resultNode["gmtModified"].asString();
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = resultNode["gmtCreate"].asString();
	if(!resultNode["ruleId"].isNull())
		result_.ruleId = resultNode["ruleId"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::string CreateRuleResult::getRequestId()const
{
	return requestId_;
}

std::string CreateRuleResult::getMessage()const
{
	return message_;
}

std::string CreateRuleResult::getCode()const
{
	return code_;
}

CreateRuleResult::Result CreateRuleResult::getResult()const
{
	return result_;
}

