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

#include <alibabacloud/eiam/model/ListConditionalAccessPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListConditionalAccessPoliciesResult::ListConditionalAccessPoliciesResult() :
	ServiceResult()
{}

ListConditionalAccessPoliciesResult::ListConditionalAccessPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConditionalAccessPoliciesResult::~ListConditionalAccessPoliciesResult()
{}

void ListConditionalAccessPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConditionalAccessPoliciesNode = value["ConditionalAccessPolicies"]["ConditionalAccessPolicy"];
	for (auto valueConditionalAccessPoliciesConditionalAccessPolicy : allConditionalAccessPoliciesNode)
	{
		ConditionalAccessPolicy conditionalAccessPoliciesObject;
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["InstanceId"].isNull())
			conditionalAccessPoliciesObject.instanceId = valueConditionalAccessPoliciesConditionalAccessPolicy["InstanceId"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["ConditionalAccessPolicyId"].isNull())
			conditionalAccessPoliciesObject.conditionalAccessPolicyId = valueConditionalAccessPoliciesConditionalAccessPolicy["ConditionalAccessPolicyId"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["ConditionalAccessPolicyName"].isNull())
			conditionalAccessPoliciesObject.conditionalAccessPolicyName = valueConditionalAccessPoliciesConditionalAccessPolicy["ConditionalAccessPolicyName"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["Description"].isNull())
			conditionalAccessPoliciesObject.description = valueConditionalAccessPoliciesConditionalAccessPolicy["Description"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["ConditionalAccessPolicyType"].isNull())
			conditionalAccessPoliciesObject.conditionalAccessPolicyType = valueConditionalAccessPoliciesConditionalAccessPolicy["ConditionalAccessPolicyType"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["Status"].isNull())
			conditionalAccessPoliciesObject.status = valueConditionalAccessPoliciesConditionalAccessPolicy["Status"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["DecisionType"].isNull())
			conditionalAccessPoliciesObject.decisionType = valueConditionalAccessPoliciesConditionalAccessPolicy["DecisionType"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["EvaluateAt"].isNull())
			conditionalAccessPoliciesObject.evaluateAt = valueConditionalAccessPoliciesConditionalAccessPolicy["EvaluateAt"].asString();
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["Priority"].isNull())
			conditionalAccessPoliciesObject.priority = std::stoi(valueConditionalAccessPoliciesConditionalAccessPolicy["Priority"].asString());
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["CreateTime"].isNull())
			conditionalAccessPoliciesObject.createTime = std::stol(valueConditionalAccessPoliciesConditionalAccessPolicy["CreateTime"].asString());
		if(!valueConditionalAccessPoliciesConditionalAccessPolicy["LastUpdatedTime"].isNull())
			conditionalAccessPoliciesObject.lastUpdatedTime = std::stol(valueConditionalAccessPoliciesConditionalAccessPolicy["LastUpdatedTime"].asString());
		auto decisionConfigNode = value["DecisionConfig"];
		if(!decisionConfigNode["Effect"].isNull())
			conditionalAccessPoliciesObject.decisionConfig.effect = decisionConfigNode["Effect"].asString();
		if(!decisionConfigNode["MfaType"].isNull())
			conditionalAccessPoliciesObject.decisionConfig.mfaType = decisionConfigNode["MfaType"].asString();
		if(!decisionConfigNode["MfaAuthenticationIntervalSeconds"].isNull())
			conditionalAccessPoliciesObject.decisionConfig.mfaAuthenticationIntervalSeconds = std::stol(decisionConfigNode["MfaAuthenticationIntervalSeconds"].asString());
		if(!decisionConfigNode["ActiveSessionReuseStatus"].isNull())
			conditionalAccessPoliciesObject.decisionConfig.activeSessionReuseStatus = decisionConfigNode["ActiveSessionReuseStatus"].asString();
			auto allMfaAuthenticationMethods = decisionConfigNode["MfaAuthenticationMethods"]["MfaAuthenticationMethod"];
			for (auto value : allMfaAuthenticationMethods)
				conditionalAccessPoliciesObject.decisionConfig.mfaAuthenticationMethods.push_back(value.asString());
		auto conditionsConfigNode = value["ConditionsConfig"];
		auto applicationsNode = conditionsConfigNode["Applications"];
			auto allIncludeApplications = applicationsNode["IncludeApplications"]["IncludeApplication"];
			for (auto value : allIncludeApplications)
				conditionalAccessPoliciesObject.conditionsConfig.applications.includeApplications.push_back(value.asString());
			auto allExcludeApplications = applicationsNode["ExcludeApplications"]["ExcludeApplication"];
			for (auto value : allExcludeApplications)
				conditionalAccessPoliciesObject.conditionsConfig.applications.excludeApplications.push_back(value.asString());
		auto usersNode = conditionsConfigNode["Users"];
			auto allIncludeUsers = usersNode["IncludeUsers"]["IncludeUser"];
			for (auto value : allIncludeUsers)
				conditionalAccessPoliciesObject.conditionsConfig.users.includeUsers.push_back(value.asString());
			auto allExcludeUsers = usersNode["ExcludeUsers"]["ExcludeUser"];
			for (auto value : allExcludeUsers)
				conditionalAccessPoliciesObject.conditionsConfig.users.excludeUsers.push_back(value.asString());
			auto allIncludeGroups = usersNode["IncludeGroups"]["IncludeGroup"];
			for (auto value : allIncludeGroups)
				conditionalAccessPoliciesObject.conditionsConfig.users.includeGroups.push_back(value.asString());
			auto allExcludeGroups = usersNode["ExcludeGroups"]["ExcludeGroup"];
			for (auto value : allExcludeGroups)
				conditionalAccessPoliciesObject.conditionsConfig.users.excludeGroups.push_back(value.asString());
			auto allIncludeOrganizationalUnits = usersNode["IncludeOrganizationalUnits"]["IncludeOrganizationalUnit"];
			for (auto value : allIncludeOrganizationalUnits)
				conditionalAccessPoliciesObject.conditionsConfig.users.includeOrganizationalUnits.push_back(value.asString());
			auto allExcludeOrganizationalUnits = usersNode["ExcludeOrganizationalUnits"]["ExcludeOrganizationalUnit"];
			for (auto value : allExcludeOrganizationalUnits)
				conditionalAccessPoliciesObject.conditionsConfig.users.excludeOrganizationalUnits.push_back(value.asString());
		auto networkZonesNode = conditionsConfigNode["NetworkZones"];
			auto allIncludeNetworkZones = networkZonesNode["IncludeNetworkZones"]["IncludeNetworkZon"];
			for (auto value : allIncludeNetworkZones)
				conditionalAccessPoliciesObject.conditionsConfig.networkZones.includeNetworkZones.push_back(value.asString());
			auto allExcludeNetworkZones = networkZonesNode["ExcludeNetworkZones"]["ExcludeNetworkZon"];
			for (auto value : allExcludeNetworkZones)
				conditionalAccessPoliciesObject.conditionsConfig.networkZones.excludeNetworkZones.push_back(value.asString());
		conditionalAccessPolicies_.push_back(conditionalAccessPoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();

}

long ListConditionalAccessPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListConditionalAccessPoliciesResult::getPreviousToken()const
{
	return previousToken_;
}

std::vector<ListConditionalAccessPoliciesResult::ConditionalAccessPolicy> ListConditionalAccessPoliciesResult::getConditionalAccessPolicies()const
{
	return conditionalAccessPolicies_;
}

std::string ListConditionalAccessPoliciesResult::getNextToken()const
{
	return nextToken_;
}

