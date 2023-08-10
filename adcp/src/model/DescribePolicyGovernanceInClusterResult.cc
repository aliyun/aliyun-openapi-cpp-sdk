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

#include <alibabacloud/adcp/model/DescribePolicyGovernanceInClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribePolicyGovernanceInClusterResult::DescribePolicyGovernanceInClusterResult() :
	ServiceResult()
{}

DescribePolicyGovernanceInClusterResult::DescribePolicyGovernanceInClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePolicyGovernanceInClusterResult::~DescribePolicyGovernanceInClusterResult()
{}

void DescribePolicyGovernanceInClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPolicyGovernancesNode = value["PolicyGovernances"]["PolicyGovernance"];
	for (auto valuePolicyGovernancesPolicyGovernance : allPolicyGovernancesNode)
	{
		PolicyGovernance policyGovernancesObject;
		auto clusterNode = value["Cluster"];
		if(!clusterNode["ClusterId"].isNull())
			policyGovernancesObject.cluster.clusterId = clusterNode["ClusterId"].asString();
		if(!clusterNode["Name"].isNull())
			policyGovernancesObject.cluster.name = clusterNode["Name"].asString();
		if(!clusterNode["RegionId"].isNull())
			policyGovernancesObject.cluster.regionId = clusterNode["RegionId"].asString();
		if(!clusterNode["State"].isNull())
			policyGovernancesObject.cluster.state = clusterNode["State"].asString();
		if(!clusterNode["ClusterType"].isNull())
			policyGovernancesObject.cluster.clusterType = clusterNode["ClusterType"].asString();
		if(!clusterNode["ClusterSpec"].isNull())
			policyGovernancesObject.cluster.clusterSpec = clusterNode["ClusterSpec"].asString();
		if(!clusterNode["Profile"].isNull())
			policyGovernancesObject.cluster.profile = clusterNode["Profile"].asString();
		auto policyGovernance1Node = value["PolicyGovernance"];
		auto allOnStateNode = policyGovernance1Node["OnState"]["State"];
		for (auto policyGovernance1NodeOnStateState : allOnStateNode)
		{
			PolicyGovernance::PolicyGovernance1::State stateObject;
			if(!policyGovernance1NodeOnStateState["EnabledCount"].isNull())
				stateObject.enabledCount = std::stol(policyGovernance1NodeOnStateState["EnabledCount"].asString());
			if(!policyGovernance1NodeOnStateState["TotalCount"].isNull())
				stateObject.totalCount = std::stol(policyGovernance1NodeOnStateState["TotalCount"].asString());
			if(!policyGovernance1NodeOnStateState["Severity"].isNull())
				stateObject.severity = policyGovernance1NodeOnStateState["Severity"].asString();
			policyGovernancesObject.policyGovernance1.onState.push_back(stateObject);
		}
		auto admitLogNode = policyGovernance1Node["AdmitLog"];
		if(!admitLogNode["Progress"].isNull())
			policyGovernancesObject.policyGovernance1.admitLog.progress = admitLogNode["Progress"].asString();
		if(!admitLogNode["Count"].isNull())
			policyGovernancesObject.policyGovernance1.admitLog.count = admitLogNode["Count"].asString();
		if(!admitLogNode["LogProject"].isNull())
			policyGovernancesObject.policyGovernance1.admitLog.logProject = admitLogNode["LogProject"].asString();
		if(!admitLogNode["LogStore"].isNull())
			policyGovernancesObject.policyGovernance1.admitLog.logStore = admitLogNode["LogStore"].asString();
			auto allLogs = admitLogNode["Logs"]["Log"];
			for (auto value : allLogs)
				policyGovernancesObject.policyGovernance1.admitLog.logs.push_back(value.asString());
		auto violationNode = policyGovernance1Node["Violation"];
		auto totalViolationsNode = violationNode["TotalViolations"];
		auto allDenyNode = totalViolationsNode["Deny"]["DenySeverity"];
		for (auto totalViolationsNodeDenyDenySeverity : allDenyNode)
		{
			PolicyGovernance::PolicyGovernance1::Violation::TotalViolations::DenySeverity denySeverityObject;
			if(!totalViolationsNodeDenyDenySeverity["Severity"].isNull())
				denySeverityObject.severity = totalViolationsNodeDenyDenySeverity["Severity"].asString();
			if(!totalViolationsNodeDenyDenySeverity["Violations"].isNull())
				denySeverityObject.violations = std::stol(totalViolationsNodeDenyDenySeverity["Violations"].asString());
			policyGovernancesObject.policyGovernance1.violation.totalViolations.deny.push_back(denySeverityObject);
		}
		auto allWarnNode = totalViolationsNode["Warn"]["WarnSeverity"];
		for (auto totalViolationsNodeWarnWarnSeverity : allWarnNode)
		{
			PolicyGovernance::PolicyGovernance1::Violation::TotalViolations::WarnSeverity warnSeverityObject;
			if(!totalViolationsNodeWarnWarnSeverity["Severity"].isNull())
				warnSeverityObject.severity = totalViolationsNodeWarnWarnSeverity["Severity"].asString();
			if(!totalViolationsNodeWarnWarnSeverity["Violations"].isNull())
				warnSeverityObject.violations = totalViolationsNodeWarnWarnSeverity["Violations"].asString();
			policyGovernancesObject.policyGovernance1.violation.totalViolations.warn.push_back(warnSeverityObject);
		}
		auto violationsNode = violationNode["Violations"];
		auto allDeny2Node = violationsNode["Deny"]["DenyViolations"];
		for (auto violationsNodeDenyDenyViolations : allDeny2Node)
		{
			PolicyGovernance::PolicyGovernance1::Violation::Violations::DenyViolations denyViolationsObject;
			if(!violationsNodeDenyDenyViolations["PolicyName"].isNull())
				denyViolationsObject.policyName = violationsNodeDenyDenyViolations["PolicyName"].asString();
			if(!violationsNodeDenyDenyViolations["PolicyDescription"].isNull())
				denyViolationsObject.policyDescription = violationsNodeDenyDenyViolations["PolicyDescription"].asString();
			if(!violationsNodeDenyDenyViolations["Severity"].isNull())
				denyViolationsObject.severity = violationsNodeDenyDenyViolations["Severity"].asString();
			if(!violationsNodeDenyDenyViolations["Violations"].isNull())
				denyViolationsObject.violations = std::stol(violationsNodeDenyDenyViolations["Violations"].asString());
			policyGovernancesObject.policyGovernance1.violation.violations.deny2.push_back(denyViolationsObject);
		}
		auto allWarn3Node = violationsNode["Warn"]["WarnViolations"];
		for (auto violationsNodeWarnWarnViolations : allWarn3Node)
		{
			PolicyGovernance::PolicyGovernance1::Violation::Violations::WarnViolations warnViolationsObject;
			if(!violationsNodeWarnWarnViolations["PolicyName"].isNull())
				warnViolationsObject.policyName = violationsNodeWarnWarnViolations["PolicyName"].asString();
			if(!violationsNodeWarnWarnViolations["PolicyDescription"].isNull())
				warnViolationsObject.policyDescription = violationsNodeWarnWarnViolations["PolicyDescription"].asString();
			if(!violationsNodeWarnWarnViolations["Severity"].isNull())
				warnViolationsObject.severity = violationsNodeWarnWarnViolations["Severity"].asString();
			if(!violationsNodeWarnWarnViolations["Violations"].isNull())
				warnViolationsObject.violations = std::stol(violationsNodeWarnWarnViolations["Violations"].asString());
			policyGovernancesObject.policyGovernance1.violation.violations.warn3.push_back(warnViolationsObject);
		}
		policyGovernances_.push_back(policyGovernancesObject);
	}

}

std::vector<DescribePolicyGovernanceInClusterResult::PolicyGovernance> DescribePolicyGovernanceInClusterResult::getPolicyGovernances()const
{
	return policyGovernances_;
}

