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

#include <alibabacloud/sas/model/ListClientUserDefineRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListClientUserDefineRulesResult::ListClientUserDefineRulesResult() :
	ServiceResult()
{}

ListClientUserDefineRulesResult::ListClientUserDefineRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClientUserDefineRulesResult::~ListClientUserDefineRulesResult()
{}

void ListClientUserDefineRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserDefineRuleListNode = value["UserDefineRuleList"]["Rule"];
	for (auto valueUserDefineRuleListRule : allUserDefineRuleListNode)
	{
		Rule userDefineRuleListObject;
		if(!valueUserDefineRuleListRule["Type"].isNull())
			userDefineRuleListObject.type = std::stoi(valueUserDefineRuleListRule["Type"].asString());
		if(!valueUserDefineRuleListRule["Name"].isNull())
			userDefineRuleListObject.name = valueUserDefineRuleListRule["Name"].asString();
		if(!valueUserDefineRuleListRule["SwitchId"].isNull())
			userDefineRuleListObject.switchId = valueUserDefineRuleListRule["SwitchId"].asString();
		if(!valueUserDefineRuleListRule["Id"].isNull())
			userDefineRuleListObject.id = std::stol(valueUserDefineRuleListRule["Id"].asString());
		if(!valueUserDefineRuleListRule["ActionType"].isNull())
			userDefineRuleListObject.actionType = std::stoi(valueUserDefineRuleListRule["ActionType"].asString());
		if(!valueUserDefineRuleListRule["Platform"].isNull())
			userDefineRuleListObject.platform = valueUserDefineRuleListRule["Platform"].asString();
		userDefineRuleList_.push_back(userDefineRuleListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());

}

ListClientUserDefineRulesResult::PageInfo ListClientUserDefineRulesResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListClientUserDefineRulesResult::Rule> ListClientUserDefineRulesResult::getUserDefineRuleList()const
{
	return userDefineRuleList_;
}

