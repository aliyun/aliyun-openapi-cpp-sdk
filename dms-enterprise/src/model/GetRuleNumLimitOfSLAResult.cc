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

#include <alibabacloud/dms-enterprise/model/GetRuleNumLimitOfSLAResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetRuleNumLimitOfSLAResult::GetRuleNumLimitOfSLAResult() :
	ServiceResult()
{}

GetRuleNumLimitOfSLAResult::GetRuleNumLimitOfSLAResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRuleNumLimitOfSLAResult::~GetRuleNumLimitOfSLAResult()
{}

void GetRuleNumLimitOfSLAResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["RuleNumLimit"].isNull())
		ruleNumLimit_ = std::stoi(value["RuleNumLimit"].asString());

}

std::string GetRuleNumLimitOfSLAResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetRuleNumLimitOfSLAResult::getErrorMessage()const
{
	return errorMessage_;
}

int GetRuleNumLimitOfSLAResult::getRuleNumLimit()const
{
	return ruleNumLimit_;
}

bool GetRuleNumLimitOfSLAResult::getSuccess()const
{
	return success_;
}

