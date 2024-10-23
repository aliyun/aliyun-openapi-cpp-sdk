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

#include <alibabacloud/ims/model/GetAccountSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetAccountSummaryResult::GetAccountSummaryResult() :
	ServiceResult()
{}

GetAccountSummaryResult::GetAccountSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountSummaryResult::~GetAccountSummaryResult()
{}

void GetAccountSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto summaryMapNode = value["SummaryMap"];
	if(!summaryMapNode["MFADevices"].isNull())
		summaryMap_.mFADevices = std::stoi(summaryMapNode["MFADevices"].asString());
	if(!summaryMapNode["AccessKeysPerUserQuota"].isNull())
		summaryMap_.accessKeysPerUserQuota = std::stoi(summaryMapNode["AccessKeysPerUserQuota"].asString());
	if(!summaryMapNode["AttachedPoliciesPerGroupQuota"].isNull())
		summaryMap_.attachedPoliciesPerGroupQuota = std::stoi(summaryMapNode["AttachedPoliciesPerGroupQuota"].asString());
	if(!summaryMapNode["AttachedSystemPoliciesPerRoleQuota"].isNull())
		summaryMap_.attachedSystemPoliciesPerRoleQuota = std::stoi(summaryMapNode["AttachedSystemPoliciesPerRoleQuota"].asString());
	if(!summaryMapNode["AttachedPoliciesPerRoleQuota"].isNull())
		summaryMap_.attachedPoliciesPerRoleQuota = std::stoi(summaryMapNode["AttachedPoliciesPerRoleQuota"].asString());
	if(!summaryMapNode["GroupsPerUserQuota"].isNull())
		summaryMap_.groupsPerUserQuota = std::stoi(summaryMapNode["GroupsPerUserQuota"].asString());
	if(!summaryMapNode["Roles"].isNull())
		summaryMap_.roles = std::stoi(summaryMapNode["Roles"].asString());
	if(!summaryMapNode["PolicySizeQuota"].isNull())
		summaryMap_.policySizeQuota = std::stoi(summaryMapNode["PolicySizeQuota"].asString());
	if(!summaryMapNode["AttachedSystemPoliciesPerGroupQuota"].isNull())
		summaryMap_.attachedSystemPoliciesPerGroupQuota = std::stoi(summaryMapNode["AttachedSystemPoliciesPerGroupQuota"].asString());
	if(!summaryMapNode["AttachedSystemPoliciesPerUserQuota"].isNull())
		summaryMap_.attachedSystemPoliciesPerUserQuota = std::stoi(summaryMapNode["AttachedSystemPoliciesPerUserQuota"].asString());
	if(!summaryMapNode["AttachedPoliciesPerUserQuota"].isNull())
		summaryMap_.attachedPoliciesPerUserQuota = std::stoi(summaryMapNode["AttachedPoliciesPerUserQuota"].asString());
	if(!summaryMapNode["GroupsQuota"].isNull())
		summaryMap_.groupsQuota = std::stoi(summaryMapNode["GroupsQuota"].asString());
	if(!summaryMapNode["Groups"].isNull())
		summaryMap_.groups = std::stoi(summaryMapNode["Groups"].asString());
	if(!summaryMapNode["PoliciesQuota"].isNull())
		summaryMap_.policiesQuota = std::stoi(summaryMapNode["PoliciesQuota"].asString());
	if(!summaryMapNode["VirtualMFADevicesQuota"].isNull())
		summaryMap_.virtualMFADevicesQuota = std::stoi(summaryMapNode["VirtualMFADevicesQuota"].asString());
	if(!summaryMapNode["VersionsPerPolicyQuota"].isNull())
		summaryMap_.versionsPerPolicyQuota = std::stoi(summaryMapNode["VersionsPerPolicyQuota"].asString());
	if(!summaryMapNode["RolesQuota"].isNull())
		summaryMap_.rolesQuota = std::stoi(summaryMapNode["RolesQuota"].asString());
	if(!summaryMapNode["UsersQuota"].isNull())
		summaryMap_.usersQuota = std::stoi(summaryMapNode["UsersQuota"].asString());
	if(!summaryMapNode["Policies"].isNull())
		summaryMap_.policies = std::stoi(summaryMapNode["Policies"].asString());
	if(!summaryMapNode["Users"].isNull())
		summaryMap_.users = std::stoi(summaryMapNode["Users"].asString());
	if(!summaryMapNode["MFADevicesInUse"].isNull())
		summaryMap_.mFADevicesInUse = std::stoi(summaryMapNode["MFADevicesInUse"].asString());

}

GetAccountSummaryResult::SummaryMap GetAccountSummaryResult::getSummaryMap()const
{
	return summaryMap_;
}

