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

#include <alibabacloud/adcp/model/DescribePolicyInstancesStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribePolicyInstancesStatusResult::DescribePolicyInstancesStatusResult() :
	ServiceResult()
{}

DescribePolicyInstancesStatusResult::DescribePolicyInstancesStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolicyInstancesStatusResult::~DescribePolicyInstancesStatusResult()
{}

void DescribePolicyInstancesStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto policiesNode = value["Policies"];
	auto allPolicyInstancesNode = policiesNode["PolicyInstances"]["PolicyInstance"];
	for (auto policiesNodePolicyInstancesPolicyInstance : allPolicyInstancesNode)
	{
		Policies::PolicyInstance policyInstanceObject;
		if(!policiesNodePolicyInstancesPolicyInstance["PolicyName"].isNull())
			policyInstanceObject.policyName = policiesNodePolicyInstancesPolicyInstance["PolicyName"].asString();
		if(!policiesNodePolicyInstancesPolicyInstance["PolicyCategory"].isNull())
			policyInstanceObject.policyCategory = policiesNodePolicyInstancesPolicyInstance["PolicyCategory"].asString();
		if(!policiesNodePolicyInstancesPolicyInstance["PolicyDescription"].isNull())
			policyInstanceObject.policyDescription = policiesNodePolicyInstancesPolicyInstance["PolicyDescription"].asString();
		if(!policiesNodePolicyInstancesPolicyInstance["PolicySeverity"].isNull())
			policyInstanceObject.policySeverity = policiesNodePolicyInstancesPolicyInstance["PolicySeverity"].asString();
		if(!policiesNodePolicyInstancesPolicyInstance["PolicyInstancesCount"].isNull())
			policyInstanceObject.policyInstancesCount = std::stol(policiesNodePolicyInstancesPolicyInstance["PolicyInstancesCount"].asString());
		auto allPolicyClustersNode = policiesNodePolicyInstancesPolicyInstance["PolicyClusters"]["PolicyCluster"];
		for (auto policiesNodePolicyInstancesPolicyInstancePolicyClustersPolicyCluster : allPolicyClustersNode)
		{
			Policies::PolicyInstance::PolicyCluster policyClustersObject;
			if(!policiesNodePolicyInstancesPolicyInstancePolicyClustersPolicyCluster["ClusterId"].isNull())
				policyClustersObject.clusterId = policiesNodePolicyInstancesPolicyInstancePolicyClustersPolicyCluster["ClusterId"].asString();
			if(!policiesNodePolicyInstancesPolicyInstancePolicyClustersPolicyCluster["Status"].isNull())
				policyClustersObject.status = policiesNodePolicyInstancesPolicyInstancePolicyClustersPolicyCluster["Status"].asString();
			policyInstanceObject.policyClusters.push_back(policyClustersObject);
		}
		policies_.policyInstances.push_back(policyInstanceObject);
	}
	auto allSeverityInfoNode = policiesNode["SeverityInfo"]["SeverityInfoItem"];
	for (auto policiesNodeSeverityInfoSeverityInfoItem : allSeverityInfoNode)
	{
		Policies::SeverityInfoItem severityInfoItemObject;
		if(!policiesNodeSeverityInfoSeverityInfoItem["SeverityType"].isNull())
			severityInfoItemObject.severityType = policiesNodeSeverityInfoSeverityInfoItem["SeverityType"].asString();
		if(!policiesNodeSeverityInfoSeverityInfoItem["SeverityCount"].isNull())
			severityInfoItemObject.severityCount = policiesNodeSeverityInfoSeverityInfoItem["SeverityCount"].asString();
		policies_.severityInfo.push_back(severityInfoItemObject);
	}

}

DescribePolicyInstancesStatusResult::Policies DescribePolicyInstancesStatusResult::getPolicies()const
{
	return policies_;
}

