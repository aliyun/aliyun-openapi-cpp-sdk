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

#include <alibabacloud/config/model/ListManagedRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListManagedRulesResult::ListManagedRulesResult() :
	ServiceResult()
{}

ListManagedRulesResult::ListManagedRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListManagedRulesResult::~ListManagedRulesResult()
{}

void ListManagedRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allManagedRulesNode = value["ManagedRules"]["Data"];
	for (auto valueManagedRulesData : allManagedRulesNode)
	{
		Data managedRulesObject;
		if(!valueManagedRulesData["PageSize"].isNull())
			managedRulesObject.pageSize = std::stoi(valueManagedRulesData["PageSize"].asString());
		if(!valueManagedRulesData["PageNumber"].isNull())
			managedRulesObject.pageNumber = std::stoi(valueManagedRulesData["PageNumber"].asString());
		if(!valueManagedRulesData["TotalCount"].isNull())
			managedRulesObject.totalCount = std::stol(valueManagedRulesData["TotalCount"].asString());
		auto allManagedRuleListNode = valueManagedRulesData["ManagedRuleList"]["ManagedRule"];
		for (auto valueManagedRulesDataManagedRuleListManagedRule : allManagedRuleListNode)
		{
			Data::ManagedRule managedRuleListObject;
			if(!valueManagedRulesDataManagedRuleListManagedRule["RiskLevel"].isNull())
				managedRuleListObject.riskLevel = std::stoi(valueManagedRulesDataManagedRuleListManagedRule["RiskLevel"].asString());
			if(!valueManagedRulesDataManagedRuleListManagedRule["Description"].isNull())
				managedRuleListObject.description = valueManagedRulesDataManagedRuleListManagedRule["Description"].asString();
			if(!valueManagedRulesDataManagedRuleListManagedRule["UseCases"].isNull())
				managedRuleListObject.useCases = valueManagedRulesDataManagedRuleListManagedRule["UseCases"].asString();
			if(!valueManagedRulesDataManagedRuleListManagedRule["Identifier"].isNull())
				managedRuleListObject.identifier = valueManagedRulesDataManagedRuleListManagedRule["Identifier"].asString();
			if(!valueManagedRulesDataManagedRuleListManagedRule["ConfigRuleName"].isNull())
				managedRuleListObject.configRuleName = valueManagedRulesDataManagedRuleListManagedRule["ConfigRuleName"].asString();
			if(!valueManagedRulesDataManagedRuleListManagedRule["ReferenceCount"].isNull())
				managedRuleListObject.referenceCount = std::stoi(valueManagedRulesDataManagedRuleListManagedRule["ReferenceCount"].asString());
			if(!valueManagedRulesDataManagedRuleListManagedRule["HelpUrls"].isNull())
				managedRuleListObject.helpUrls = valueManagedRulesDataManagedRuleListManagedRule["HelpUrls"].asString();
			auto allLabels = value["Labels"]["Labels"];
			for (auto value : allLabels)
				managedRuleListObject.labels.push_back(value.asString());
			managedRulesObject.managedRuleList.push_back(managedRuleListObject);
		}
		managedRules_.push_back(managedRulesObject);
	}

}

std::vector<ListManagedRulesResult::Data> ListManagedRulesResult::getManagedRules()const
{
	return managedRules_;
}

