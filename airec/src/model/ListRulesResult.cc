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

#include <alibabacloud/airec/model/ListRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListRulesResult::ListRulesResult() :
	ServiceResult()
{}

ListRulesResult::ListRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRulesResult::~ListRulesResult()
{}

void ListRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["RuleId"].isNull())
			resultObject.ruleId = valueResultResultItem["RuleId"].asString();
		if(!valueResultResultItem["Status"].isNull())
			resultObject.status = valueResultResultItem["Status"].asString();
		if(!valueResultResultItem["GmtCreate"].isNull())
			resultObject.gmtCreate = std::stol(valueResultResultItem["GmtCreate"].asString());
		if(!valueResultResultItem["GmtModified"].isNull())
			resultObject.gmtModified = std::stol(valueResultResultItem["GmtModified"].asString());
		result_.push_back(resultObject);
	}

}

std::vector<ListRulesResult::ResultItem> ListRulesResult::getResult()const
{
	return result_;
}

