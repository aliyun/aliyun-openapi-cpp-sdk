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

#include <alibabacloud/airec/model/ListRuleConditionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListRuleConditionsResult::ListRuleConditionsResult() :
	ServiceResult()
{}

ListRuleConditionsResult::ListRuleConditionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRuleConditionsResult::~ListRuleConditionsResult()
{}

void ListRuleConditionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["selectType"].isNull())
			resultObject.selectType = valueresultresultItem["selectType"].asString();
		if(!valueresultresultItem["selectValue"].isNull())
			resultObject.selectValue = valueresultresultItem["selectValue"].asString();
		if(!valueresultresultItem["selectionOperation"].isNull())
			resultObject.selectionOperation = valueresultresultItem["selectionOperation"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::vector<ListRuleConditionsResult::ResultItem> ListRuleConditionsResult::getresult()const
{
	return result_;
}

std::string ListRuleConditionsResult::getRequestId()const
{
	return requestId_;
}

std::string ListRuleConditionsResult::getMessage()const
{
	return message_;
}

std::string ListRuleConditionsResult::getCode()const
{
	return code_;
}

