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

#include <alibabacloud/sas/model/DescribeUniBackupPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeUniBackupPoliciesResult::DescribeUniBackupPoliciesResult() :
	ServiceResult()
{}

DescribeUniBackupPoliciesResult::DescribeUniBackupPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUniBackupPoliciesResult::~DescribeUniBackupPoliciesResult()
{}

void DescribeUniBackupPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUniBackupPoliciesNode = value["UniBackupPolicies"]["UniBackupPolicyDTO"];
	for (auto valueUniBackupPoliciesUniBackupPolicyDTO : allUniBackupPoliciesNode)
	{
		UniBackupPolicyDTO uniBackupPoliciesObject;
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["PolicyStatus"].isNull())
			uniBackupPoliciesObject.policyStatus = valueUniBackupPoliciesUniBackupPolicyDTO["PolicyStatus"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["ErrorMessage"].isNull())
			uniBackupPoliciesObject.errorMessage = valueUniBackupPoliciesUniBackupPolicyDTO["ErrorMessage"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["LatestBackResult"].isNull())
			uniBackupPoliciesObject.latestBackResult = valueUniBackupPoliciesUniBackupPolicyDTO["LatestBackResult"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["UniRegionId"].isNull())
			uniBackupPoliciesObject.uniRegionId = valueUniBackupPoliciesUniBackupPolicyDTO["UniRegionId"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["PlanStatus"].isNull())
			uniBackupPoliciesObject.planStatus = valueUniBackupPoliciesUniBackupPolicyDTO["PlanStatus"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["InstanceUuid"].isNull())
			uniBackupPoliciesObject.instanceUuid = valueUniBackupPoliciesUniBackupPolicyDTO["InstanceUuid"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["PolicyName"].isNull())
			uniBackupPoliciesObject.policyName = valueUniBackupPoliciesUniBackupPolicyDTO["PolicyName"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["AgentErrorMessage"].isNull())
			uniBackupPoliciesObject.agentErrorMessage = valueUniBackupPoliciesUniBackupPolicyDTO["AgentErrorMessage"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["InstanceId"].isNull())
			uniBackupPoliciesObject.instanceId = valueUniBackupPoliciesUniBackupPolicyDTO["InstanceId"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["AgentStatus"].isNull())
			uniBackupPoliciesObject.agentStatus = valueUniBackupPoliciesUniBackupPolicyDTO["AgentStatus"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["DatabaseType"].isNull())
			uniBackupPoliciesObject.databaseType = valueUniBackupPoliciesUniBackupPolicyDTO["DatabaseType"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["UniBackUpCount"].isNull())
			uniBackupPoliciesObject.uniBackUpCount = std::stoi(valueUniBackupPoliciesUniBackupPolicyDTO["UniBackUpCount"].asString());
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["ErrorCode"].isNull())
			uniBackupPoliciesObject.errorCode = valueUniBackupPoliciesUniBackupPolicyDTO["ErrorCode"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["DatabaseName"].isNull())
			uniBackupPoliciesObject.databaseName = valueUniBackupPoliciesUniBackupPolicyDTO["DatabaseName"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["InstanceName"].isNull())
			uniBackupPoliciesObject.instanceName = valueUniBackupPoliciesUniBackupPolicyDTO["InstanceName"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["LatestBackupTime"].isNull())
			uniBackupPoliciesObject.latestBackupTime = valueUniBackupPoliciesUniBackupPolicyDTO["LatestBackupTime"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["InstanceStatus"].isNull())
			uniBackupPoliciesObject.instanceStatus = valueUniBackupPoliciesUniBackupPolicyDTO["InstanceStatus"].asString();
		if(!valueUniBackupPoliciesUniBackupPolicyDTO["PolicyId"].isNull())
			uniBackupPoliciesObject.policyId = std::stol(valueUniBackupPoliciesUniBackupPolicyDTO["PolicyId"].asString());
		uniBackupPolicies_.push_back(uniBackupPoliciesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeUniBackupPoliciesResult::PageInfo DescribeUniBackupPoliciesResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeUniBackupPoliciesResult::UniBackupPolicyDTO> DescribeUniBackupPoliciesResult::getUniBackupPolicies()const
{
	return uniBackupPolicies_;
}

