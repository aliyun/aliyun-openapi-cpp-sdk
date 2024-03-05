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

#include <alibabacloud/ehpc/model/DescribeClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeClusterResult::DescribeClusterResult() :
	ServiceResult()
{}

DescribeClusterResult::DescribeClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterResult::~DescribeClusterResult()
{}

void DescribeClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto clusterInfoNode = value["ClusterInfo"];
	if(!clusterInfoNode["Status"].isNull())
		clusterInfo_.status = clusterInfoNode["Status"].asString();
	if(!clusterInfoNode["VpcId"].isNull())
		clusterInfo_.vpcId = clusterInfoNode["VpcId"].asString();
	if(!clusterInfoNode["KeyPairName"].isNull())
		clusterInfo_.keyPairName = clusterInfoNode["KeyPairName"].asString();
	if(!clusterInfoNode["EcsChargeType"].isNull())
		clusterInfo_.ecsChargeType = clusterInfoNode["EcsChargeType"].asString();
	if(!clusterInfoNode["SecurityGroupId"].isNull())
		clusterInfo_.securityGroupId = clusterInfoNode["SecurityGroupId"].asString();
	if(!clusterInfoNode["SccClusterId"].isNull())
		clusterInfo_.sccClusterId = clusterInfoNode["SccClusterId"].asString();
	if(!clusterInfoNode["CreateTime"].isNull())
		clusterInfo_.createTime = clusterInfoNode["CreateTime"].asString();
	if(!clusterInfoNode["AccountType"].isNull())
		clusterInfo_.accountType = clusterInfoNode["AccountType"].asString();
	if(!clusterInfoNode["VolumeProtocol"].isNull())
		clusterInfo_.volumeProtocol = clusterInfoNode["VolumeProtocol"].asString();
	if(!clusterInfoNode["Description"].isNull())
		clusterInfo_.description = clusterInfoNode["Description"].asString();
	if(!clusterInfoNode["VolumeId"].isNull())
		clusterInfo_.volumeId = clusterInfoNode["VolumeId"].asString();
	if(!clusterInfoNode["HaEnable"].isNull())
		clusterInfo_.haEnable = clusterInfoNode["HaEnable"].asString() == "true";
	if(!clusterInfoNode["BaseOsTag"].isNull())
		clusterInfo_.baseOsTag = clusterInfoNode["BaseOsTag"].asString();
	if(!clusterInfoNode["Name"].isNull())
		clusterInfo_.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["ImageId"].isNull())
		clusterInfo_.imageId = clusterInfoNode["ImageId"].asString();
	if(!clusterInfoNode["SchedulerType"].isNull())
		clusterInfo_.schedulerType = clusterInfoNode["SchedulerType"].asString();
	if(!clusterInfoNode["SchedulerVersion"].isNull())
		clusterInfo_.schedulerVersion = clusterInfoNode["SchedulerVersion"].asString();
	if(!clusterInfoNode["DeployMode"].isNull())
		clusterInfo_.deployMode = clusterInfoNode["DeployMode"].asString();
	if(!clusterInfoNode["ImageOwnerAlias"].isNull())
		clusterInfo_.imageOwnerAlias = clusterInfoNode["ImageOwnerAlias"].asString();
	if(!clusterInfoNode["OsTag"].isNull())
		clusterInfo_.osTag = clusterInfoNode["OsTag"].asString();
	if(!clusterInfoNode["VolumeMountpoint"].isNull())
		clusterInfo_.volumeMountpoint = clusterInfoNode["VolumeMountpoint"].asString();
	if(!clusterInfoNode["RemoteDirectory"].isNull())
		clusterInfo_.remoteDirectory = clusterInfoNode["RemoteDirectory"].asString();
	if(!clusterInfoNode["RegionId"].isNull())
		clusterInfo_.regionId = clusterInfoNode["RegionId"].asString();
	if(!clusterInfoNode["VSwitchId"].isNull())
		clusterInfo_.vSwitchId = clusterInfoNode["VSwitchId"].asString();
	if(!clusterInfoNode["ImageName"].isNull())
		clusterInfo_.imageName = clusterInfoNode["ImageName"].asString();
	if(!clusterInfoNode["VolumeType"].isNull())
		clusterInfo_.volumeType = clusterInfoNode["VolumeType"].asString();
	if(!clusterInfoNode["Location"].isNull())
		clusterInfo_.location = clusterInfoNode["Location"].asString();
	if(!clusterInfoNode["Id"].isNull())
		clusterInfo_.id = clusterInfoNode["Id"].asString();
	if(!clusterInfoNode["ClientVersion"].isNull())
		clusterInfo_.clientVersion = clusterInfoNode["ClientVersion"].asString();
	if(!clusterInfoNode["ZoneId"].isNull())
		clusterInfo_.zoneId = clusterInfoNode["ZoneId"].asString();
	if(!clusterInfoNode["ResourceGroupId"].isNull())
		clusterInfo_.resourceGroupId = clusterInfoNode["ResourceGroupId"].asString();
	if(!clusterInfoNode["RamRoleName"].isNull())
		clusterInfo_.ramRoleName = clusterInfoNode["RamRoleName"].asString();
	if(!clusterInfoNode["RamNodeTypes"].isNull())
		clusterInfo_.ramNodeTypes = clusterInfoNode["RamNodeTypes"].asString();
	if(!clusterInfoNode["ClusterVersion"].isNull())
		clusterInfo_.clusterVersion = clusterInfoNode["ClusterVersion"].asString();
	if(!clusterInfoNode["WithoutAgent"].isNull())
		clusterInfo_.withoutAgent = std::stoi(clusterInfoNode["WithoutAgent"].asString());
	if(!clusterInfoNode["Plugin"].isNull())
		clusterInfo_.plugin = clusterInfoNode["Plugin"].asString();
	if(!clusterInfoNode["SchedulerPreInstall"].isNull())
		clusterInfo_.schedulerPreInstall = std::stoi(clusterInfoNode["SchedulerPreInstall"].asString());
	if(!clusterInfoNode["Domain"].isNull())
		clusterInfo_.domain = clusterInfoNode["Domain"].asString();
	if(!clusterInfoNode["OpenldapPar"].isNull())
		clusterInfo_.openldapPar = clusterInfoNode["OpenldapPar"].asString();
	if(!clusterInfoNode["WinAdPar"].isNull())
		clusterInfo_.winAdPar = clusterInfoNode["WinAdPar"].asString();
	if(!clusterInfoNode["Period"].isNull())
		clusterInfo_.period = clusterInfoNode["Period"].asString();
	if(!clusterInfoNode["PeriodUnit"].isNull())
		clusterInfo_.periodUnit = clusterInfoNode["PeriodUnit"].asString();
	if(!clusterInfoNode["AutoRenewPeriod"].isNull())
		clusterInfo_.autoRenewPeriod = clusterInfoNode["AutoRenewPeriod"].asString();
	if(!clusterInfoNode["AutoRenew"].isNull())
		clusterInfo_.autoRenew = clusterInfoNode["AutoRenew"].asString();
	if(!clusterInfoNode["ComputeSpotStrategy"].isNull())
		clusterInfo_.computeSpotStrategy = clusterInfoNode["ComputeSpotStrategy"].asString();
	if(!clusterInfoNode["ComputeSpotPriceLimit"].isNull())
		clusterInfo_.computeSpotPriceLimit = clusterInfoNode["ComputeSpotPriceLimit"].asString();
	auto allApplicationsNode = clusterInfoNode["Applications"]["ApplicationInfo"];
	for (auto clusterInfoNodeApplicationsApplicationInfo : allApplicationsNode)
	{
		ClusterInfo::ApplicationInfo applicationInfoObject;
		if(!clusterInfoNodeApplicationsApplicationInfo["Tag"].isNull())
			applicationInfoObject.tag = clusterInfoNodeApplicationsApplicationInfo["Tag"].asString();
		if(!clusterInfoNodeApplicationsApplicationInfo["Name"].isNull())
			applicationInfoObject.name = clusterInfoNodeApplicationsApplicationInfo["Name"].asString();
		if(!clusterInfoNodeApplicationsApplicationInfo["Version"].isNull())
			applicationInfoObject.version = clusterInfoNodeApplicationsApplicationInfo["Version"].asString();
		clusterInfo_.applications.push_back(applicationInfoObject);
	}
	auto allPostInstallScriptsNode = clusterInfoNode["PostInstallScripts"]["PostInstallScriptInfo"];
	for (auto clusterInfoNodePostInstallScriptsPostInstallScriptInfo : allPostInstallScriptsNode)
	{
		ClusterInfo::PostInstallScriptInfo postInstallScriptInfoObject;
		if(!clusterInfoNodePostInstallScriptsPostInstallScriptInfo["Url"].isNull())
			postInstallScriptInfoObject.url = clusterInfoNodePostInstallScriptsPostInstallScriptInfo["Url"].asString();
		if(!clusterInfoNodePostInstallScriptsPostInstallScriptInfo["Args"].isNull())
			postInstallScriptInfoObject.args = clusterInfoNodePostInstallScriptsPostInstallScriptInfo["Args"].asString();
		clusterInfo_.postInstallScripts.push_back(postInstallScriptInfoObject);
	}
	auto allOnPremiseInfoNode = clusterInfoNode["OnPremiseInfo"]["OnPremiseInfoItem"];
	for (auto clusterInfoNodeOnPremiseInfoOnPremiseInfoItem : allOnPremiseInfoNode)
	{
		ClusterInfo::OnPremiseInfoItem onPremiseInfoItemObject;
		if(!clusterInfoNodeOnPremiseInfoOnPremiseInfoItem["Type"].isNull())
			onPremiseInfoItemObject.type = clusterInfoNodeOnPremiseInfoOnPremiseInfoItem["Type"].asString();
		if(!clusterInfoNodeOnPremiseInfoOnPremiseInfoItem["HostName"].isNull())
			onPremiseInfoItemObject.hostName = clusterInfoNodeOnPremiseInfoOnPremiseInfoItem["HostName"].asString();
		if(!clusterInfoNodeOnPremiseInfoOnPremiseInfoItem["IP"].isNull())
			onPremiseInfoItemObject.iP = clusterInfoNodeOnPremiseInfoOnPremiseInfoItem["IP"].asString();
		clusterInfo_.onPremiseInfo.push_back(onPremiseInfoItemObject);
	}
	auto allAddOnsInfoNode = clusterInfoNode["AddOnsInfo"]["AddOnsInfoItem"];
	for (auto clusterInfoNodeAddOnsInfoAddOnsInfoItem : allAddOnsInfoNode)
	{
		ClusterInfo::AddOnsInfoItem addOnsInfoItemObject;
		if(!clusterInfoNodeAddOnsInfoAddOnsInfoItem["SoftwareId"].isNull())
			addOnsInfoItemObject.softwareId = clusterInfoNodeAddOnsInfoAddOnsInfoItem["SoftwareId"].asString();
		if(!clusterInfoNodeAddOnsInfoAddOnsInfoItem["DeployMode"].isNull())
			addOnsInfoItemObject.deployMode = clusterInfoNodeAddOnsInfoAddOnsInfoItem["DeployMode"].asString();
		if(!clusterInfoNodeAddOnsInfoAddOnsInfoItem["Port"].isNull())
			addOnsInfoItemObject.port = std::stoi(clusterInfoNodeAddOnsInfoAddOnsInfoItem["Port"].asString());
		if(!clusterInfoNodeAddOnsInfoAddOnsInfoItem["Status"].isNull())
			addOnsInfoItemObject.status = clusterInfoNodeAddOnsInfoAddOnsInfoItem["Status"].asString();
		if(!clusterInfoNodeAddOnsInfoAddOnsInfoItem["URL"].isNull())
			addOnsInfoItemObject.uRL = clusterInfoNodeAddOnsInfoAddOnsInfoItem["URL"].asString();
		clusterInfo_.addOnsInfo.push_back(addOnsInfoItemObject);
	}
	auto allNodesNode = clusterInfoNode["Nodes"]["NodesInfo"];
	for (auto clusterInfoNodeNodesNodesInfo : allNodesNode)
	{
		ClusterInfo::NodesInfo nodesInfoObject;
		if(!clusterInfoNodeNodesNodesInfo["Role"].isNull())
			nodesInfoObject.role = clusterInfoNodeNodesNodesInfo["Role"].asString();
		if(!clusterInfoNodeNodesNodesInfo["HostName"].isNull())
			nodesInfoObject.hostName = clusterInfoNodeNodesNodesInfo["HostName"].asString();
		if(!clusterInfoNodeNodesNodesInfo["IpAddress"].isNull())
			nodesInfoObject.ipAddress = clusterInfoNodeNodesNodesInfo["IpAddress"].asString();
		if(!clusterInfoNodeNodesNodesInfo["AccountType"].isNull())
			nodesInfoObject.accountType = clusterInfoNodeNodesNodesInfo["AccountType"].asString();
		if(!clusterInfoNodeNodesNodesInfo["Dir"].isNull())
			nodesInfoObject.dir = clusterInfoNodeNodesNodesInfo["Dir"].asString();
		if(!clusterInfoNodeNodesNodesInfo["SchedulerType"].isNull())
			nodesInfoObject.schedulerType = clusterInfoNodeNodesNodesInfo["SchedulerType"].asString();
		clusterInfo_.nodes.push_back(nodesInfoObject);
	}
	auto ecsInfoNode = clusterInfoNode["EcsInfo"];
	auto managerNode = ecsInfoNode["Manager"];
	if(!managerNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.manager.instanceType = managerNode["InstanceType"].asString();
	if(!managerNode["Count"].isNull())
		clusterInfo_.ecsInfo.manager.count = std::stoi(managerNode["Count"].asString());
	auto computeNode = ecsInfoNode["Compute"];
	if(!computeNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.compute.instanceType = computeNode["InstanceType"].asString();
	if(!computeNode["Count"].isNull())
		clusterInfo_.ecsInfo.compute.count = std::stoi(computeNode["Count"].asString());
	auto loginNode = ecsInfoNode["Login"];
	if(!loginNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.login.instanceType = loginNode["InstanceType"].asString();
	if(!loginNode["Count"].isNull())
		clusterInfo_.ecsInfo.login.count = std::stoi(loginNode["Count"].asString());
	auto proxyMgrNode = ecsInfoNode["ProxyMgr"];
	if(!proxyMgrNode["InstanceType"].isNull())
		clusterInfo_.ecsInfo.proxyMgr.instanceType = proxyMgrNode["InstanceType"].asString();
	if(!proxyMgrNode["Count"].isNull())
		clusterInfo_.ecsInfo.proxyMgr.count = std::stoi(proxyMgrNode["Count"].asString());
	auto initialImageNode = clusterInfoNode["InitialImage"];
	if(!initialImageNode["OsTag"].isNull())
		clusterInfo_.initialImage.osTag = initialImageNode["OsTag"].asString();
	if(!initialImageNode["ImageOwnerAlias"].isNull())
		clusterInfo_.initialImage.imageOwnerAlias = initialImageNode["ImageOwnerAlias"].asString();
	if(!initialImageNode["ImageId"].isNull())
		clusterInfo_.initialImage.imageId = initialImageNode["ImageId"].asString();

}

DescribeClusterResult::ClusterInfo DescribeClusterResult::getClusterInfo()const
{
	return clusterInfo_;
}

