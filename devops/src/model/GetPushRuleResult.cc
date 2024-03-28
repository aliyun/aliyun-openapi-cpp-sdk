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

#include <alibabacloud/devops/model/GetPushRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetPushRuleResult::GetPushRuleResult() :
	ServiceResult()
{}

GetPushRuleResult::GetPushRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPushRuleResult::~GetPushRuleResult()
{}

void GetPushRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["gmtCreate"].isNull())
		result_.gmtCreate = resultNode["gmtCreate"].asString();
	if(!resultNode["gmtModified"].isNull())
		result_.gmtModified = resultNode["gmtModified"].asString();
	auto allruleInfosNode = resultNode["ruleInfos"]["rule_infos"];
	for (auto resultNoderuleInfosrule_infos : allruleInfosNode)
	{
		Result::Rule_infos rule_infosObject;
		if(!resultNoderuleInfosrule_infos["checkerName"].isNull())
			rule_infosObject.checkerName = resultNoderuleInfosrule_infos["checkerName"].asString();
		if(!resultNoderuleInfosrule_infos["checkerType"].isNull())
			rule_infosObject.checkerType = resultNoderuleInfosrule_infos["checkerType"].asString();
		if(!resultNoderuleInfosrule_infos["extraMessage"].isNull())
			rule_infosObject.extraMessage = resultNoderuleInfosrule_infos["extraMessage"].asString();
		auto allFileRuleRegexes = value["fileRuleRegexes"]["file_rule_regexes"];
		for (auto value : allFileRuleRegexes)
			rule_infosObject.fileRuleRegexes.push_back(value.asString());
		result_.ruleInfos.push_back(rule_infosObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetPushRuleResult::getRequestId()const
{
	return requestId_;
}

std::string GetPushRuleResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPushRuleResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPushRuleResult::getSuccess()const
{
	return success_;
}

GetPushRuleResult::Result GetPushRuleResult::getResult()const
{
	return result_;
}

