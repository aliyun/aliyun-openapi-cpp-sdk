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

#include <alibabacloud/adcp/model/DescribeHubClusterDetailsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adcp;
using namespace AlibabaCloud::Adcp::Model;

DescribeHubClusterDetailsResult::DescribeHubClusterDetailsResult() :
	ServiceResult()
{}

DescribeHubClusterDetailsResult::DescribeHubClusterDetailsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHubClusterDetailsResult::~DescribeHubClusterDetailsResult()
{}

void DescribeHubClusterDetailsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterNode = value["Cluster"];
	auto allConditionsNode = clusterNode["Conditions"]["Condition"];
	for (auto clusterNodeConditionsCondition : allConditionsNode)
	{
		Cluster::Condition conditionObject;
		if(!clusterNodeConditionsCondition["Type"].isNull())
			conditionObject.type = clusterNodeConditionsCondition["Type"].asString();
		if(!clusterNodeConditionsCondition["Status"].isNull())
			conditionObject.status = clusterNodeConditionsCondition["Status"].asString();
		if(!clusterNodeConditionsCondition["Reason"].isNull())
			conditionObject.reason = clusterNodeConditionsCondition["Reason"].asString();
		if(!clusterNodeConditionsCondition["Message"].isNull())
			conditionObject.message = clusterNodeConditionsCondition["Message"].asString();
		cluster_.conditions.push_back(conditionObject);
	}
	auto endpointsNode = clusterNode["Endpoints"];
	if(!endpointsNode["IntranetApiServerEndpoint"].isNull())
		cluster_.endpoints.intranetApiServerEndpoint = endpointsNode["IntranetApiServerEndpoint"].asString();
	if(!endpointsNode["PublicApiServerEndpoint"].isNull())
		cluster_.endpoints.publicApiServerEndpoint = endpointsNode["PublicApiServerEndpoint"].asString();
	auto clusterInfoNode = clusterNode["ClusterInfo"];
	if(!clusterInfoNode["Profile"].isNull())
		cluster_.clusterInfo.profile = clusterInfoNode["Profile"].asString();
	if(!clusterInfoNode["CreationTime"].isNull())
		cluster_.clusterInfo.creationTime = clusterInfoNode["CreationTime"].asString();
	if(!clusterInfoNode["UpdateTime"].isNull())
		cluster_.clusterInfo.updateTime = clusterInfoNode["UpdateTime"].asString();
	if(!clusterInfoNode["ErrorMessage"].isNull())
		cluster_.clusterInfo.errorMessage = clusterInfoNode["ErrorMessage"].asString();
	if(!clusterInfoNode["Version"].isNull())
		cluster_.clusterInfo.version = clusterInfoNode["Version"].asString();
	if(!clusterInfoNode["State"].isNull())
		cluster_.clusterInfo.state = clusterInfoNode["State"].asString();
	if(!clusterInfoNode["ClusterId"].isNull())
		cluster_.clusterInfo.clusterId = clusterInfoNode["ClusterId"].asString();
	if(!clusterInfoNode["Name"].isNull())
		cluster_.clusterInfo.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["RegionId"].isNull())
		cluster_.clusterInfo.regionId = clusterInfoNode["RegionId"].asString();
	if(!clusterInfoNode["ClusterSpec"].isNull())
		cluster_.clusterInfo.clusterSpec = clusterInfoNode["ClusterSpec"].asString();
	auto networkNode = clusterNode["Network"];
	if(!networkNode["VpcId"].isNull())
		cluster_.network.vpcId = networkNode["VpcId"].asString();
	if(!networkNode["IPStack"].isNull())
		cluster_.network.iPStack = networkNode["IPStack"].asString();
	if(!networkNode["ClusterDomain"].isNull())
		cluster_.network.clusterDomain = networkNode["ClusterDomain"].asString();
		auto allVSwitches = networkNode["VSwitches"]["VSwitches"];
		for (auto value : allVSwitches)
			cluster_.network.vSwitches.push_back(value.asString());
		auto allSecurityGroupIDs = networkNode["SecurityGroupIDs"]["SecurityGroupIDs"];
		for (auto value : allSecurityGroupIDs)
			cluster_.network.securityGroupIDs.push_back(value.asString());
	auto apiServerNode = clusterNode["ApiServer"];
	if(!apiServerNode["EnabledPublic"].isNull())
		cluster_.apiServer.enabledPublic = apiServerNode["EnabledPublic"].asString() == "true";
	if(!apiServerNode["LoadBalancerId"].isNull())
		cluster_.apiServer.loadBalancerId = apiServerNode["LoadBalancerId"].asString();
	if(!apiServerNode["ApiServerEipId"].isNull())
		cluster_.apiServer.apiServerEipId = apiServerNode["ApiServerEipId"].asString();
	auto meshConfigNode = clusterNode["MeshConfig"];
	if(!meshConfigNode["EnableMesh"].isNull())
		cluster_.meshConfig.enableMesh = meshConfigNode["EnableMesh"].asString() == "true";
	if(!meshConfigNode["MeshId"].isNull())
		cluster_.meshConfig.meshId = meshConfigNode["MeshId"].asString();
	auto logConfigNode = clusterNode["LogConfig"];
	if(!logConfigNode["EnableLog"].isNull())
		cluster_.logConfig.enableLog = logConfigNode["EnableLog"].asString() == "true";
	if(!logConfigNode["LogProject"].isNull())
		cluster_.logConfig.logProject = logConfigNode["LogProject"].asString();
	if(!logConfigNode["LogStoreTTL"].isNull())
		cluster_.logConfig.logStoreTTL = logConfigNode["LogStoreTTL"].asString();
	auto workflowConfigNode = clusterNode["WorkflowConfig"];
	if(!workflowConfigNode["ArgoServerEnabled"].isNull())
		cluster_.workflowConfig.argoServerEnabled = workflowConfigNode["ArgoServerEnabled"].asString() == "true";
	if(!workflowConfigNode["WorkflowScheduleMode"].isNull())
		cluster_.workflowConfig.workflowScheduleMode = workflowConfigNode["WorkflowScheduleMode"].asString();
	if(!workflowConfigNode["PriceLimit"].isNull())
		cluster_.workflowConfig.priceLimit = workflowConfigNode["PriceLimit"].asString();
	auto allWorkflowUnitsNode = workflowConfigNode["WorkflowUnits"]["WorkflowUnit"];
	for (auto workflowConfigNodeWorkflowUnitsWorkflowUnit : allWorkflowUnitsNode)
	{
		Cluster::WorkflowConfig::WorkflowUnit workflowUnitObject;
		if(!workflowConfigNodeWorkflowUnitsWorkflowUnit["RegionId"].isNull())
			workflowUnitObject.regionId = workflowConfigNodeWorkflowUnitsWorkflowUnit["RegionId"].asString();
		if(!workflowConfigNodeWorkflowUnitsWorkflowUnit["VpcId"].isNull())
			workflowUnitObject.vpcId = workflowConfigNodeWorkflowUnitsWorkflowUnit["VpcId"].asString();
		auto allVSwitches1Node = workflowConfigNodeWorkflowUnitsWorkflowUnit["VSwitches"]["VSwitch"];
		for (auto workflowConfigNodeWorkflowUnitsWorkflowUnitVSwitchesVSwitch : allVSwitches1Node)
		{
			Cluster::WorkflowConfig::WorkflowUnit::VSwitch vSwitches1Object;
			if(!workflowConfigNodeWorkflowUnitsWorkflowUnitVSwitchesVSwitch["VswitchId"].isNull())
				vSwitches1Object.vswitchId = workflowConfigNodeWorkflowUnitsWorkflowUnitVSwitchesVSwitch["VswitchId"].asString();
			if(!workflowConfigNodeWorkflowUnitsWorkflowUnitVSwitchesVSwitch["ZoneId"].isNull())
				vSwitches1Object.zoneId = workflowConfigNodeWorkflowUnitsWorkflowUnitVSwitchesVSwitch["ZoneId"].asString();
			workflowUnitObject.vSwitches1.push_back(vSwitches1Object);
		}
		cluster_.workflowConfig.workflowUnits.push_back(workflowUnitObject);
	}

}

DescribeHubClusterDetailsResult::Cluster DescribeHubClusterDetailsResult::getCluster()const
{
	return cluster_;
}

