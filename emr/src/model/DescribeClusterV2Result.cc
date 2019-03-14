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

#include <alibabacloud/emr/model/DescribeClusterV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterV2Result::DescribeClusterV2Result() :
	ServiceResult()
{}

DescribeClusterV2Result::DescribeClusterV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterV2Result::~DescribeClusterV2Result()
{}

void DescribeClusterV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto clusterInfoNode = value["ClusterInfo"];
	if(!clusterInfoNode["Id"].isNull())
		clusterInfo_.id = clusterInfoNode["Id"].asString();
	if(!clusterInfoNode["RegionId"].isNull())
		clusterInfo_.regionId = clusterInfoNode["RegionId"].asString();
	if(!clusterInfoNode["DepositType"].isNull())
		clusterInfo_.depositType = clusterInfoNode["DepositType"].asString();
	if(!clusterInfoNode["ZoneId"].isNull())
		clusterInfo_.zoneId = clusterInfoNode["ZoneId"].asString();
	if(!clusterInfoNode["Name"].isNull())
		clusterInfo_.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["RelateClusterId"].isNull())
		clusterInfo_.relateClusterId = clusterInfoNode["RelateClusterId"].asString();
	if(!clusterInfoNode["GatewayClusterIds"].isNull())
		clusterInfo_.gatewayClusterIds = clusterInfoNode["GatewayClusterIds"].asString();
	if(!clusterInfoNode["CreateType"].isNull())
		clusterInfo_.createType = clusterInfoNode["CreateType"].asString();
	if(!clusterInfoNode["StartTime"].isNull())
		clusterInfo_.startTime = std::stol(clusterInfoNode["StartTime"].asString());
	if(!clusterInfoNode["ExpiredTime"].isNull())
		clusterInfo_.expiredTime = std::stol(clusterInfoNode["ExpiredTime"].asString());
	if(!clusterInfoNode["StopTime"].isNull())
		clusterInfo_.stopTime = std::stol(clusterInfoNode["StopTime"].asString());
	if(!clusterInfoNode["LogEnable"].isNull())
		clusterInfo_.logEnable = clusterInfoNode["LogEnable"].asString() == "true";
	if(!clusterInfoNode["LogPath"].isNull())
		clusterInfo_.logPath = clusterInfoNode["LogPath"].asString();
	if(!clusterInfoNode["UserId"].isNull())
		clusterInfo_.userId = clusterInfoNode["UserId"].asString();
	if(!clusterInfoNode["Status"].isNull())
		clusterInfo_.status = clusterInfoNode["Status"].asString();
	if(!clusterInfoNode["HighAvailabilityEnable"].isNull())
		clusterInfo_.highAvailabilityEnable = clusterInfoNode["HighAvailabilityEnable"].asString() == "true";
	if(!clusterInfoNode["LocalMetaDb"].isNull())
		clusterInfo_.localMetaDb = clusterInfoNode["LocalMetaDb"].asString() == "true";
	if(!clusterInfoNode["ChargeType"].isNull())
		clusterInfo_.chargeType = clusterInfoNode["ChargeType"].asString();
	if(!clusterInfoNode["Period"].isNull())
		clusterInfo_.period = std::stoi(clusterInfoNode["Period"].asString());
	if(!clusterInfoNode["RunningTime"].isNull())
		clusterInfo_.runningTime = std::stoi(clusterInfoNode["RunningTime"].asString());
	if(!clusterInfoNode["MasterNodeTotal"].isNull())
		clusterInfo_.masterNodeTotal = std::stoi(clusterInfoNode["MasterNodeTotal"].asString());
	if(!clusterInfoNode["MasterNodeInService"].isNull())
		clusterInfo_.masterNodeInService = std::stoi(clusterInfoNode["MasterNodeInService"].asString());
	if(!clusterInfoNode["CoreNodeTotal"].isNull())
		clusterInfo_.coreNodeTotal = std::stoi(clusterInfoNode["CoreNodeTotal"].asString());
	if(!clusterInfoNode["CoreNodeInService"].isNull())
		clusterInfo_.coreNodeInService = std::stoi(clusterInfoNode["CoreNodeInService"].asString());
	if(!clusterInfoNode["TaskNodeTotal"].isNull())
		clusterInfo_.taskNodeTotal = std::stoi(clusterInfoNode["TaskNodeTotal"].asString());
	if(!clusterInfoNode["TaskNodeInService"].isNull())
		clusterInfo_.taskNodeInService = std::stoi(clusterInfoNode["TaskNodeInService"].asString());
	if(!clusterInfoNode["ShowSoftwareInterface"].isNull())
		clusterInfo_.showSoftwareInterface = clusterInfoNode["ShowSoftwareInterface"].asString() == "true";
	if(!clusterInfoNode["CreateResource"].isNull())
		clusterInfo_.createResource = clusterInfoNode["CreateResource"].asString();
	if(!clusterInfoNode["VpcId"].isNull())
		clusterInfo_.vpcId = clusterInfoNode["VpcId"].asString();
	if(!clusterInfoNode["VSwitchId"].isNull())
		clusterInfo_.vSwitchId = clusterInfoNode["VSwitchId"].asString();
	if(!clusterInfoNode["NetType"].isNull())
		clusterInfo_.netType = clusterInfoNode["NetType"].asString();
	if(!clusterInfoNode["UserDefinedEmrEcsRole"].isNull())
		clusterInfo_.userDefinedEmrEcsRole = clusterInfoNode["UserDefinedEmrEcsRole"].asString();
	if(!clusterInfoNode["IoOptimized"].isNull())
		clusterInfo_.ioOptimized = clusterInfoNode["IoOptimized"].asString() == "true";
	if(!clusterInfoNode["InstanceGeneration"].isNull())
		clusterInfo_.instanceGeneration = clusterInfoNode["InstanceGeneration"].asString();
	if(!clusterInfoNode["ImageId"].isNull())
		clusterInfo_.imageId = clusterInfoNode["ImageId"].asString();
	if(!clusterInfoNode["SecurityGroupId"].isNull())
		clusterInfo_.securityGroupId = clusterInfoNode["SecurityGroupId"].asString();
	if(!clusterInfoNode["SecurityGroupName"].isNull())
		clusterInfo_.securityGroupName = clusterInfoNode["SecurityGroupName"].asString();
	if(!clusterInfoNode["BootstrapFailed"].isNull())
		clusterInfo_.bootstrapFailed = clusterInfoNode["BootstrapFailed"].asString() == "true";
	if(!clusterInfoNode["Configurations"].isNull())
		clusterInfo_.configurations = clusterInfoNode["Configurations"].asString();
	if(!clusterInfoNode["EasEnable"].isNull())
		clusterInfo_.easEnable = clusterInfoNode["EasEnable"].asString() == "true";
	if(!clusterInfoNode["AutoScalingEnable"].isNull())
		clusterInfo_.autoScalingEnable = clusterInfoNode["AutoScalingEnable"].asString() == "true";
	if(!clusterInfoNode["AutoScalingAllowed"].isNull())
		clusterInfo_.autoScalingAllowed = clusterInfoNode["AutoScalingAllowed"].asString() == "true";
	if(!clusterInfoNode["AutoScalingSpotWithLimitAllowed"].isNull())
		clusterInfo_.autoScalingSpotWithLimitAllowed = clusterInfoNode["AutoScalingSpotWithLimitAllowed"].asString() == "true";
	if(!clusterInfoNode["AutoScalingByLoadAllowed"].isNull())
		clusterInfo_.autoScalingByLoadAllowed = clusterInfoNode["AutoScalingByLoadAllowed"].asString() == "true";
	if(!clusterInfoNode["ResizeDiskEnable"].isNull())
		clusterInfo_.resizeDiskEnable = clusterInfoNode["ResizeDiskEnable"].asString() == "true";
	auto allGatewayClusterInfoList = value["GatewayClusterInfoList"]["GatewayClusterInfo"];
	for (auto value : allGatewayClusterInfoList)
	{
		ClusterInfo::GatewayClusterInfo gatewayClusterInfoObject;
		if(!value["ClusterId"].isNull())
			gatewayClusterInfoObject.clusterId = value["ClusterId"].asString();
		if(!value["ClusterName"].isNull())
			gatewayClusterInfoObject.clusterName = value["ClusterName"].asString();
		if(!value["Status"].isNull())
			gatewayClusterInfoObject.status = value["Status"].asString();
		clusterInfo_.gatewayClusterInfoList.push_back(gatewayClusterInfoObject);
	}
	auto allHostGroupList = value["HostGroupList"]["HostGroup"];
	for (auto value : allHostGroupList)
	{
		ClusterInfo::HostGroup hostGroupObject;
		if(!value["HostGroupId"].isNull())
			hostGroupObject.hostGroupId = value["HostGroupId"].asString();
		if(!value["HostGroupName"].isNull())
			hostGroupObject.hostGroupName = value["HostGroupName"].asString();
		if(!value["HostGroupType"].isNull())
			hostGroupObject.hostGroupType = value["HostGroupType"].asString();
		if(!value["HostGroupSubType"].isNull())
			hostGroupObject.hostGroupSubType = value["HostGroupSubType"].asString();
		if(!value["HostGroupChangeType"].isNull())
			hostGroupObject.hostGroupChangeType = value["HostGroupChangeType"].asString();
		if(!value["hostGroupChangeStatus"].isNull())
			hostGroupObject.hostGroupChangeStatus = value["hostGroupChangeStatus"].asString();
		if(!value["ChargeType"].isNull())
			hostGroupObject.chargeType = value["ChargeType"].asString();
		if(!value["Period"].isNull())
			hostGroupObject.period = value["Period"].asString();
		if(!value["NodeCount"].isNull())
			hostGroupObject.nodeCount = std::stoi(value["NodeCount"].asString());
		if(!value["InstanceType"].isNull())
			hostGroupObject.instanceType = value["InstanceType"].asString();
		if(!value["CpuCore"].isNull())
			hostGroupObject.cpuCore = std::stoi(value["CpuCore"].asString());
		if(!value["MemoryCapacity"].isNull())
			hostGroupObject.memoryCapacity = std::stoi(value["MemoryCapacity"].asString());
		if(!value["DiskType"].isNull())
			hostGroupObject.diskType = value["DiskType"].asString();
		if(!value["DiskCapacity"].isNull())
			hostGroupObject.diskCapacity = std::stoi(value["DiskCapacity"].asString());
		if(!value["DiskCount"].isNull())
			hostGroupObject.diskCount = std::stoi(value["DiskCount"].asString());
		if(!value["BandWidth"].isNull())
			hostGroupObject.bandWidth = value["BandWidth"].asString();
		if(!value["LockType"].isNull())
			hostGroupObject.lockType = value["LockType"].asString();
		if(!value["LockReason"].isNull())
			hostGroupObject.lockReason = value["LockReason"].asString();
		auto allNodes = value["Nodes"]["Node"];
		for (auto value : allNodes)
		{
			ClusterInfo::HostGroup::Node nodesObject;
			if(!value["ZoneId"].isNull())
				nodesObject.zoneId = value["ZoneId"].asString();
			if(!value["InstanceId"].isNull())
				nodesObject.instanceId = value["InstanceId"].asString();
			if(!value["Status"].isNull())
				nodesObject.status = value["Status"].asString();
			if(!value["PubIp"].isNull())
				nodesObject.pubIp = value["PubIp"].asString();
			if(!value["InnerIp"].isNull())
				nodesObject.innerIp = value["InnerIp"].asString();
			if(!value["ExpiredTime"].isNull())
				nodesObject.expiredTime = value["ExpiredTime"].asString();
			if(!value["CreateTime"].isNull())
				nodesObject.createTime = value["CreateTime"].asString();
			if(!value["EmrExpiredTime"].isNull())
				nodesObject.emrExpiredTime = value["EmrExpiredTime"].asString();
			if(!value["SupportIpV6"].isNull())
				nodesObject.supportIpV6 = value["SupportIpV6"].asString() == "true";
			auto allDaemonInfos = value["DaemonInfos"]["DaemonInfo"];
			for (auto value : allDaemonInfos)
			{
				ClusterInfo::HostGroup::Node::DaemonInfo daemonInfosObject;
				if(!value["Name"].isNull())
					daemonInfosObject.name = value["Name"].asString();
				nodesObject.daemonInfos.push_back(daemonInfosObject);
			}
			auto allDiskInfos = value["DiskInfos"]["DiskInfo"];
			for (auto value : allDiskInfos)
			{
				ClusterInfo::HostGroup::Node::DiskInfo diskInfosObject;
				if(!value["Device"].isNull())
					diskInfosObject.device = value["Device"].asString();
				if(!value["DiskName"].isNull())
					diskInfosObject.diskName = value["DiskName"].asString();
				if(!value["DiskId"].isNull())
					diskInfosObject.diskId = value["DiskId"].asString();
				if(!value["Type"].isNull())
					diskInfosObject.type = value["Type"].asString();
				if(!value["Size"].isNull())
					diskInfosObject.size = std::stoi(value["Size"].asString());
				nodesObject.diskInfos.push_back(diskInfosObject);
			}
			hostGroupObject.nodes.push_back(nodesObject);
		}
		clusterInfo_.hostGroupList.push_back(hostGroupObject);
	}
	auto allBootstrapActionList = value["BootstrapActionList"]["BootstrapAction"];
	for (auto value : allBootstrapActionList)
	{
		ClusterInfo::BootstrapAction bootstrapActionObject;
		if(!value["Name"].isNull())
			bootstrapActionObject.name = value["Name"].asString();
		if(!value["Path"].isNull())
			bootstrapActionObject.path = value["Path"].asString();
		if(!value["Arg"].isNull())
			bootstrapActionObject.arg = value["Arg"].asString();
		clusterInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto relateClusterInfoNode = clusterInfoNode["RelateClusterInfo"];
	if(!relateClusterInfoNode["ClusterId"].isNull())
		clusterInfo_.relateClusterInfo.clusterId = relateClusterInfoNode["ClusterId"].asString();
	if(!relateClusterInfoNode["ClusterName"].isNull())
		clusterInfo_.relateClusterInfo.clusterName = relateClusterInfoNode["ClusterName"].asString();
	if(!relateClusterInfoNode["Status"].isNull())
		clusterInfo_.relateClusterInfo.status = relateClusterInfoNode["Status"].asString();
	auto failReasonNode = clusterInfoNode["FailReason"];
	if(!failReasonNode["ErrorCode"].isNull())
		clusterInfo_.failReason.errorCode = failReasonNode["ErrorCode"].asString();
	if(!failReasonNode["ErrorMsg"].isNull())
		clusterInfo_.failReason.errorMsg = failReasonNode["ErrorMsg"].asString();
	if(!failReasonNode["RequestId"].isNull())
		clusterInfo_.failReason.requestId = failReasonNode["RequestId"].asString();
	auto softwareInfoNode = clusterInfoNode["SoftwareInfo"];
	if(!softwareInfoNode["EmrVer"].isNull())
		clusterInfo_.softwareInfo.emrVer = softwareInfoNode["EmrVer"].asString();
	if(!softwareInfoNode["ClusterType"].isNull())
		clusterInfo_.softwareInfo.clusterType = softwareInfoNode["ClusterType"].asString();
	auto allSoftwares = value["Softwares"]["Software"];
	for (auto value : allSoftwares)
	{
		ClusterInfo::SoftwareInfo::Software softwareObject;
		if(!value["DisplayName"].isNull())
			softwareObject.displayName = value["DisplayName"].asString();
		if(!value["Name"].isNull())
			softwareObject.name = value["Name"].asString();
		if(!value["OnlyDisplay"].isNull())
			softwareObject.onlyDisplay = value["OnlyDisplay"].asString() == "true";
		if(!value["StartTpe"].isNull())
			softwareObject.startTpe = std::stoi(value["StartTpe"].asString());
		if(!value["Version"].isNull())
			softwareObject.version = value["Version"].asString();
		clusterInfo_.softwareInfo.softwares.push_back(softwareObject);
	}
	auto accessInfoNode = clusterInfoNode["AccessInfo"];
	auto allZKLinks = value["ZKLinks"]["ZKLink"];
	for (auto value : allZKLinks)
	{
		ClusterInfo::AccessInfo::ZKLink zKLinkObject;
		if(!value["Link"].isNull())
			zKLinkObject.link = value["Link"].asString();
		if(!value["Port"].isNull())
			zKLinkObject.port = value["Port"].asString();
		clusterInfo_.accessInfo.zKLinks.push_back(zKLinkObject);
	}

}

DescribeClusterV2Result::ClusterInfo DescribeClusterV2Result::getClusterInfo()const
{
	return clusterInfo_;
}

