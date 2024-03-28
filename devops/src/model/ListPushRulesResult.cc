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

#include <alibabacloud/devops/model/ListPushRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListPushRulesResult::ListPushRulesResult() :
	ServiceResult()
{}

ListPushRulesResult::ListPushRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPushRulesResult::~ListPushRulesResult()
{}

void ListPushRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultresultItem["gmtCreate"].asString();
		if(!valueresultresultItem["gmtModified"].isNull())
			resultObject.gmtModified = valueresultresultItem["gmtModified"].asString();
		auto allruleInfosNode = valueresultresultItem["ruleInfos"]["rule_infos"];
		for (auto valueresultresultItemruleInfosrule_infos : allruleInfosNode)
		{
			ResultItem::Rule_infos ruleInfosObject;
			if(!valueresultresultItemruleInfosrule_infos["checkerName"].isNull())
				ruleInfosObject.checkerName = valueresultresultItemruleInfosrule_infos["checkerName"].asString();
			if(!valueresultresultItemruleInfosrule_infos["checkerType"].isNull())
				ruleInfosObject.checkerType = valueresultresultItemruleInfosrule_infos["checkerType"].asString();
			if(!valueresultresultItemruleInfosrule_infos["extraMessage"].isNull())
				ruleInfosObject.extraMessage = valueresultresultItemruleInfosrule_infos["extraMessage"].asString();
			auto allFileRuleRegexes = value["fileRuleRegexes"]["file_rule_regexes"];
			for (auto value : allFileRuleRegexes)
				ruleInfosObject.fileRuleRegexes.push_back(value.asString());
			resultObject.ruleInfos.push_back(ruleInfosObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListPushRulesResult::ResultItem> ListPushRulesResult::getresult()const
{
	return result_;
}

std::string ListPushRulesResult::getRequestId()const
{
	return requestId_;
}

long ListPushRulesResult::getTotal()const
{
	return total_;
}

std::string ListPushRulesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPushRulesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListPushRulesResult::getSuccess()const
{
	return success_;
}

