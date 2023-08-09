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

#include <alibabacloud/config/model/ListPreManagedRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListPreManagedRulesResult::ListPreManagedRulesResult() :
	ServiceResult()
{}

ListPreManagedRulesResult::ListPreManagedRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPreManagedRulesResult::~ListPreManagedRulesResult()
{}

void ListPreManagedRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allManagedRulesNode = value["ManagedRules"]["ManagedRule"];
	for (auto valueManagedRulesManagedRule : allManagedRulesNode)
	{
		ManagedRule managedRulesObject;
		if(!valueManagedRulesManagedRule["ResourceType"].isNull())
			managedRulesObject.resourceType = valueManagedRulesManagedRule["ResourceType"].asString();
		if(!valueManagedRulesManagedRule["Description"].isNull())
			managedRulesObject.description = valueManagedRulesManagedRule["Description"].asString();
		if(!valueManagedRulesManagedRule["InputParameters"].isNull())
			managedRulesObject.inputParameters = valueManagedRulesManagedRule["InputParameters"].asString();
		if(!valueManagedRulesManagedRule["OptionalInputParameterDetails"].isNull())
			managedRulesObject.optionalInputParameterDetails = valueManagedRulesManagedRule["OptionalInputParameterDetails"].asString();
		if(!valueManagedRulesManagedRule["Identifier"].isNull())
			managedRulesObject.identifier = valueManagedRulesManagedRule["Identifier"].asString();
		if(!valueManagedRulesManagedRule["ConfigRuleName"].isNull())
			managedRulesObject.configRuleName = valueManagedRulesManagedRule["ConfigRuleName"].asString();
		if(!valueManagedRulesManagedRule["HelpUrls"].isNull())
			managedRulesObject.helpUrls = valueManagedRulesManagedRule["HelpUrls"].asString();
		if(!valueManagedRulesManagedRule["DefaultEnable"].isNull())
			managedRulesObject.defaultEnable = valueManagedRulesManagedRule["DefaultEnable"].asString() == "true";
		if(!valueManagedRulesManagedRule["NonCompliantSample"].isNull())
			managedRulesObject.nonCompliantSample = valueManagedRulesManagedRule["NonCompliantSample"].asString();
		if(!valueManagedRulesManagedRule["CompliantSample"].isNull())
			managedRulesObject.compliantSample = valueManagedRulesManagedRule["CompliantSample"].asString();
		if(!valueManagedRulesManagedRule["CompulsoryInputParameterDetails"].isNull())
			managedRulesObject.compulsoryInputParameterDetails = valueManagedRulesManagedRule["CompulsoryInputParameterDetails"].asString();
		auto allSourceConditions = value["SourceConditions"]["SourceConditions"];
		for (auto value : allSourceConditions)
			managedRulesObject.sourceConditions.push_back(value.asString());
		managedRules_.push_back(managedRulesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListPreManagedRulesResult::getPageSize()const
{
	return pageSize_;
}

long ListPreManagedRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPreManagedRulesResult::ManagedRule> ListPreManagedRulesResult::getManagedRules()const
{
	return managedRules_;
}

