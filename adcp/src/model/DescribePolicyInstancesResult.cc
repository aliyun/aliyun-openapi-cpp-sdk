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

#include <alibabacloud/adcp/model/DescribePolicyInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribePolicyInstancesResult::DescribePolicyInstancesResult() :
	ServiceResult()
{}

DescribePolicyInstancesResult::DescribePolicyInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolicyInstancesResult::~DescribePolicyInstancesResult()
{}

void DescribePolicyInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoliciesNode = value["Policies"]["Policy"];
	for (auto valuePoliciesPolicy : allPoliciesNode)
	{
		Policy policiesObject;
		if(!valuePoliciesPolicy["PolicyName"].isNull())
			policiesObject.policyName = valuePoliciesPolicy["PolicyName"].asString();
		if(!valuePoliciesPolicy["InstanceName"].isNull())
			policiesObject.instanceName = valuePoliciesPolicy["InstanceName"].asString();
		if(!valuePoliciesPolicy["PolicyCategory"].isNull())
			policiesObject.policyCategory = valuePoliciesPolicy["PolicyCategory"].asString();
		if(!valuePoliciesPolicy["PolicyDescription"].isNull())
			policiesObject.policyDescription = valuePoliciesPolicy["PolicyDescription"].asString();
		if(!valuePoliciesPolicy["PolicySeverity"].isNull())
			policiesObject.policySeverity = valuePoliciesPolicy["PolicySeverity"].asString();
		if(!valuePoliciesPolicy["PolicyScope"].isNull())
			policiesObject.policyScope = valuePoliciesPolicy["PolicyScope"].asString();
		if(!valuePoliciesPolicy["PolicyAction"].isNull())
			policiesObject.policyAction = valuePoliciesPolicy["PolicyAction"].asString();
		if(!valuePoliciesPolicy["TotalViolations"].isNull())
			policiesObject.totalViolations = std::stol(valuePoliciesPolicy["TotalViolations"].asString());
		if(!valuePoliciesPolicy["ClusterId"].isNull())
			policiesObject.clusterId = valuePoliciesPolicy["ClusterId"].asString();
		if(!valuePoliciesPolicy["PolicyParameters"].isNull())
			policiesObject.policyParameters = valuePoliciesPolicy["PolicyParameters"].asString();
		policies_.push_back(policiesObject);
	}

}

std::vector<DescribePolicyInstancesResult::Policy> DescribePolicyInstancesResult::getPolicies()const
{
	return policies_;
}

