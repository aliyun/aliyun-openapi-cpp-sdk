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

#include <alibabacloud/eiam/model/GetIdentityProviderUdPullConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetIdentityProviderUdPullConfigurationResult::GetIdentityProviderUdPullConfigurationResult() :
	ServiceResult()
{}

GetIdentityProviderUdPullConfigurationResult::GetIdentityProviderUdPullConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIdentityProviderUdPullConfigurationResult::~GetIdentityProviderUdPullConfigurationResult()
{}

void GetIdentityProviderUdPullConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto udPullConfigurationNode = value["UdPullConfiguration"];
	if(!udPullConfigurationNode["InstanceId"].isNull())
		udPullConfiguration_.instanceId = udPullConfigurationNode["InstanceId"].asString();
	if(!udPullConfigurationNode["IdentityProviderId"].isNull())
		udPullConfiguration_.identityProviderId = udPullConfigurationNode["IdentityProviderId"].asString();
	if(!udPullConfigurationNode["IncrementalCallbackStatus"].isNull())
		udPullConfiguration_.incrementalCallbackStatus = udPullConfigurationNode["IncrementalCallbackStatus"].asString();
	if(!udPullConfigurationNode["PeriodicSyncStatus"].isNull())
		udPullConfiguration_.periodicSyncStatus = udPullConfigurationNode["PeriodicSyncStatus"].asString();
	if(!udPullConfigurationNode["GroupSyncStatus"].isNull())
		udPullConfiguration_.groupSyncStatus = udPullConfigurationNode["GroupSyncStatus"].asString();
	auto udSyncScopeConfigNode = udPullConfigurationNode["UdSyncScopeConfig"];
	if(!udSyncScopeConfigNode["TargetScope"].isNull())
		udPullConfiguration_.udSyncScopeConfig.targetScope = udSyncScopeConfigNode["TargetScope"].asString();
		auto allSourceScopes = udSyncScopeConfigNode["SourceScopes"]["SourceScop"];
		for (auto value : allSourceScopes)
			udPullConfiguration_.udSyncScopeConfig.sourceScopes.push_back(value.asString());
	auto pullProtectedRuleNode = udPullConfigurationNode["PullProtectedRule"];
	if(!pullProtectedRuleNode["UserDeletedThreshold"].isNull())
		udPullConfiguration_.pullProtectedRule.userDeletedThreshold = std::stoi(pullProtectedRuleNode["UserDeletedThreshold"].asString());
	if(!pullProtectedRuleNode["OrganizationalUnitDeletedThreshold"].isNull())
		udPullConfiguration_.pullProtectedRule.organizationalUnitDeletedThreshold = std::stoi(pullProtectedRuleNode["OrganizationalUnitDeletedThreshold"].asString());
	if(!pullProtectedRuleNode["GroupDeletedThreshold"].isNull())
		udPullConfiguration_.pullProtectedRule.groupDeletedThreshold = std::stoi(pullProtectedRuleNode["GroupDeletedThreshold"].asString());
	auto ldapUdPullConfigNode = udPullConfigurationNode["LdapUdPullConfig"];
	if(!ldapUdPullConfigNode["UserObjectClass"].isNull())
		udPullConfiguration_.ldapUdPullConfig.userObjectClass = ldapUdPullConfigNode["UserObjectClass"].asString();
	if(!ldapUdPullConfigNode["OrganizationUnitObjectClass"].isNull())
		udPullConfiguration_.ldapUdPullConfig.organizationUnitObjectClass = ldapUdPullConfigNode["OrganizationUnitObjectClass"].asString();
	if(!ldapUdPullConfigNode["UserObjectClassCustomFilter"].isNull())
		udPullConfiguration_.ldapUdPullConfig.userObjectClassCustomFilter = ldapUdPullConfigNode["UserObjectClassCustomFilter"].asString();
	if(!ldapUdPullConfigNode["GroupObjectClass"].isNull())
		udPullConfiguration_.ldapUdPullConfig.groupObjectClass = ldapUdPullConfigNode["GroupObjectClass"].asString();
	if(!ldapUdPullConfigNode["GroupMemberAttributeName"].isNull())
		udPullConfiguration_.ldapUdPullConfig.groupMemberAttributeName = ldapUdPullConfigNode["GroupMemberAttributeName"].asString();
	if(!ldapUdPullConfigNode["GroupObjectClassCustomFilter"].isNull())
		udPullConfiguration_.ldapUdPullConfig.groupObjectClassCustomFilter = ldapUdPullConfigNode["GroupObjectClassCustomFilter"].asString();
	auto periodicSyncConfigNode = udPullConfigurationNode["PeriodicSyncConfig"];
	if(!periodicSyncConfigNode["PeriodicSyncType"].isNull())
		udPullConfiguration_.periodicSyncConfig.periodicSyncType = periodicSyncConfigNode["PeriodicSyncType"].asString();
	if(!periodicSyncConfigNode["PeriodicSyncCron"].isNull())
		udPullConfiguration_.periodicSyncConfig.periodicSyncCron = periodicSyncConfigNode["PeriodicSyncCron"].asString();
	if(!periodicSyncConfigNode["PeriodicSyncTimes"].isNull())
		udPullConfiguration_.periodicSyncConfig.periodicSyncTimes = std::stoi(periodicSyncConfigNode["PeriodicSyncTimes"].asString());

}

GetIdentityProviderUdPullConfigurationResult::UdPullConfiguration GetIdentityProviderUdPullConfigurationResult::getUdPullConfiguration()const
{
	return udPullConfiguration_;
}

