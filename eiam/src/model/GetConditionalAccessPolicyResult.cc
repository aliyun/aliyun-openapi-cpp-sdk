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

#include <alibabacloud/eiam/model/GetConditionalAccessPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetConditionalAccessPolicyResult::GetConditionalAccessPolicyResult() :
	ServiceResult()
{}

GetConditionalAccessPolicyResult::GetConditionalAccessPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConditionalAccessPolicyResult::~GetConditionalAccessPolicyResult()
{}

void GetConditionalAccessPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto conditionalAccessPolicyNode = value["ConditionalAccessPolicy"];
	if(!conditionalAccessPolicyNode["InstanceId"].isNull())
		conditionalAccessPolicy_.instanceId = conditionalAccessPolicyNode["InstanceId"].asString();
	if(!conditionalAccessPolicyNode["ConditionalAccessPolicyId"].isNull())
		conditionalAccessPolicy_.conditionalAccessPolicyId = conditionalAccessPolicyNode["ConditionalAccessPolicyId"].asString();
	if(!conditionalAccessPolicyNode["ConditionalAccessPolicyName"].isNull())
		conditionalAccessPolicy_.conditionalAccessPolicyName = conditionalAccessPolicyNode["ConditionalAccessPolicyName"].asString();
	if(!conditionalAccessPolicyNode["Description"].isNull())
		conditionalAccessPolicy_.description = conditionalAccessPolicyNode["Description"].asString();
	if(!conditionalAccessPolicyNode["ConditionalAccessPolicyType"].isNull())
		conditionalAccessPolicy_.conditionalAccessPolicyType = conditionalAccessPolicyNode["ConditionalAccessPolicyType"].asString();
	if(!conditionalAccessPolicyNode["Status"].isNull())
		conditionalAccessPolicy_.status = conditionalAccessPolicyNode["Status"].asString();
	if(!conditionalAccessPolicyNode["DecisionType"].isNull())
		conditionalAccessPolicy_.decisionType = conditionalAccessPolicyNode["DecisionType"].asString();
	if(!conditionalAccessPolicyNode["EvaluateAt"].isNull())
		conditionalAccessPolicy_.evaluateAt = conditionalAccessPolicyNode["EvaluateAt"].asString();
	if(!conditionalAccessPolicyNode["Priority"].isNull())
		conditionalAccessPolicy_.priority = std::stoi(conditionalAccessPolicyNode["Priority"].asString());
	if(!conditionalAccessPolicyNode["CreateTime"].isNull())
		conditionalAccessPolicy_.createTime = std::stol(conditionalAccessPolicyNode["CreateTime"].asString());
	if(!conditionalAccessPolicyNode["LastUpdatedTime"].isNull())
		conditionalAccessPolicy_.lastUpdatedTime = std::stol(conditionalAccessPolicyNode["LastUpdatedTime"].asString());
	auto decisionConfigNode = conditionalAccessPolicyNode["DecisionConfig"];
	if(!decisionConfigNode["Effect"].isNull())
		conditionalAccessPolicy_.decisionConfig.effect = decisionConfigNode["Effect"].asString();
	if(!decisionConfigNode["MfaType"].isNull())
		conditionalAccessPolicy_.decisionConfig.mfaType = decisionConfigNode["MfaType"].asString();
	if(!decisionConfigNode["MfaAuthenticationIntervalSeconds"].isNull())
		conditionalAccessPolicy_.decisionConfig.mfaAuthenticationIntervalSeconds = std::stol(decisionConfigNode["MfaAuthenticationIntervalSeconds"].asString());
	if(!decisionConfigNode["ActiveSessionReuseStatus"].isNull())
		conditionalAccessPolicy_.decisionConfig.activeSessionReuseStatus = decisionConfigNode["ActiveSessionReuseStatus"].asString();
		auto allMfaAuthenticationMethods = decisionConfigNode["MfaAuthenticationMethods"]["MfaAuthenticationMethod"];
		for (auto value : allMfaAuthenticationMethods)
			conditionalAccessPolicy_.decisionConfig.mfaAuthenticationMethods.push_back(value.asString());
	auto conditionsConfigNode = conditionalAccessPolicyNode["ConditionsConfig"];
	auto applicationsNode = conditionsConfigNode["Applications"];
		auto allIncludeApplications = applicationsNode["IncludeApplications"]["IncludeApplication"];
		for (auto value : allIncludeApplications)
			conditionalAccessPolicy_.conditionsConfig.applications.includeApplications.push_back(value.asString());
		auto allExcludeApplications = applicationsNode["ExcludeApplications"]["ExcludeApplication"];
		for (auto value : allExcludeApplications)
			conditionalAccessPolicy_.conditionsConfig.applications.excludeApplications.push_back(value.asString());
	auto usersNode = conditionsConfigNode["Users"];
		auto allIncludeUsers = usersNode["IncludeUsers"]["IncludeUser"];
		for (auto value : allIncludeUsers)
			conditionalAccessPolicy_.conditionsConfig.users.includeUsers.push_back(value.asString());
		auto allExcludeUsers = usersNode["ExcludeUsers"]["ExcludeUser"];
		for (auto value : allExcludeUsers)
			conditionalAccessPolicy_.conditionsConfig.users.excludeUsers.push_back(value.asString());
		auto allIncludeGroups = usersNode["IncludeGroups"]["IncludeGroup"];
		for (auto value : allIncludeGroups)
			conditionalAccessPolicy_.conditionsConfig.users.includeGroups.push_back(value.asString());
		auto allExcludeGroups = usersNode["ExcludeGroups"]["ExcludeGroup"];
		for (auto value : allExcludeGroups)
			conditionalAccessPolicy_.conditionsConfig.users.excludeGroups.push_back(value.asString());
		auto allIncludeOrganizationalUnits = usersNode["IncludeOrganizationalUnits"]["IncludeOrganizationalUnit"];
		for (auto value : allIncludeOrganizationalUnits)
			conditionalAccessPolicy_.conditionsConfig.users.includeOrganizationalUnits.push_back(value.asString());
		auto allExcludeOrganizationalUnits = usersNode["ExcludeOrganizationalUnits"]["ExcludeOrganizationalUnit"];
		for (auto value : allExcludeOrganizationalUnits)
			conditionalAccessPolicy_.conditionsConfig.users.excludeOrganizationalUnits.push_back(value.asString());
	auto networkZonesNode = conditionsConfigNode["NetworkZones"];
		auto allIncludeNetworkZones = networkZonesNode["IncludeNetworkZones"]["IncludeNetworkZon"];
		for (auto value : allIncludeNetworkZones)
			conditionalAccessPolicy_.conditionsConfig.networkZones.includeNetworkZones.push_back(value.asString());
		auto allExcludeNetworkZones = networkZonesNode["ExcludeNetworkZones"]["ExcludeNetworkZon"];
		for (auto value : allExcludeNetworkZones)
			conditionalAccessPolicy_.conditionsConfig.networkZones.excludeNetworkZones.push_back(value.asString());

}

GetConditionalAccessPolicyResult::ConditionalAccessPolicy GetConditionalAccessPolicyResult::getConditionalAccessPolicy()const
{
	return conditionalAccessPolicy_;
}

