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
	if(!clusterInfoNode["MachineType"].isNull())
		clusterInfo_.machineType = clusterInfoNode["MachineType"].asString();
	if(!clusterInfoNode["ZoneId"].isNull())
		clusterInfo_.zoneId = clusterInfoNode["ZoneId"].asString();
	if(!clusterInfoNode["Name"].isNull())
		clusterInfo_.name = clusterInfoNode["Name"].asString();
	if(!clusterInfoNode["ExtraInfo"].isNull())
		clusterInfo_.extraInfo = clusterInfoNode["ExtraInfo"].asString();
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
	if(!clusterInfoNode["AutoScalingVersion"].isNull())
		clusterInfo_.autoScalingVersion = clusterInfoNode["AutoScalingVersion"].asString();
	if(!clusterInfoNode["AutoScalingEnable"].isNull())
		clusterInfo_.autoScalingEnable = clusterInfoNode["AutoScalingEnable"].asString() == "true";
	if(!clusterInfoNode["AutoScalingAllowed"].isNull())
		clusterInfo_.autoScalingAllowed = clusterInfoNode["AutoScalingAllowed"].asString() == "true";
	if(!clusterInfoNode["AutoScalingSpotWithLimitAllowed"].isNull())
		clusterInfo_.autoScalingSpotWithLimitAllowed = clusterInfoNode["AutoScalingSpotWithLimitAllowed"].asString() == "true";
	if(!clusterInfoNode["AutoScalingByLoadAllowed"].isNull())
		clusterInfo_.autoScalingByLoadAllowed = clusterInfoNode["AutoScalingByLoadAllowed"].asString() == "true";
	if(!clusterInfoNode["AutoScalingWithGraceAllowed"].isNull())
		clusterInfo_.autoScalingWithGraceAllowed = clusterInfoNode["AutoScalingWithGraceAllowed"].asString() == "true";
	if(!clusterInfoNode["ResizeDiskEnable"].isNull())
		clusterInfo_.resizeDiskEnable = clusterInfoNode["ResizeDiskEnable"].asString() == "true";
	if(!clusterInfoNode["MetaStoreType"].isNull())
		clusterInfo_.metaStoreType = clusterInfoNode["MetaStoreType"].asString();
	if(!clusterInfoNode["K8sClusterId"].isNull())
		clusterInfo_.k8sClusterId = clusterInfoNode["K8sClusterId"].asString();
	if(!clusterInfoNode["DataDiskEncrypted"].isNull())
		clusterInfo_.dataDiskEncrypted = clusterInfoNode["DataDiskEncrypted"].asString() == "true";
	if(!clusterInfoNode["DataDiskKMSKeyId"].isNull())
		clusterInfo_.dataDiskKMSKeyId = clusterInfoNode["DataDiskKMSKeyId"].asString();
	auto allGatewayClusterInfoListNode = clusterInfoNode["GatewayClusterInfoList"]["GatewayClusterInfo"];
	for (auto clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo : allGatewayClusterInfoListNode)
	{
		ClusterInfo::GatewayClusterInfo gatewayClusterInfoObject;
		if(!clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo["ClusterId"].isNull())
			gatewayClusterInfoObject.clusterId = clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo["ClusterId"].asString();
		if(!clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo["ClusterName"].isNull())
			gatewayClusterInfoObject.clusterName = clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo["ClusterName"].asString();
		if(!clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo["Status"].isNull())
			gatewayClusterInfoObject.status = clusterInfoNodeGatewayClusterInfoListGatewayClusterInfo["Status"].asString();
		clusterInfo_.gatewayClusterInfoList.push_back(gatewayClusterInfoObject);
	}
	auto allHostGroupListNode = clusterInfoNode["HostGroupList"]["HostGroup"];
	for (auto clusterInfoNodeHostGroupListHostGroup : allHostGroupListNode)
	{
		ClusterInfo::HostGroup hostGroupObject;
		if(!clusterInfoNodeHostGroupListHostGroup["HostGroupId"].isNull())
			hostGroupObject.hostGroupId = clusterInfoNodeHostGroupListHostGroup["HostGroupId"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["HostGroupName"].isNull())
			hostGroupObject.hostGroupName = clusterInfoNodeHostGroupListHostGroup["HostGroupName"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["HostGroupType"].isNull())
			hostGroupObject.hostGroupType = clusterInfoNodeHostGroupListHostGroup["HostGroupType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["HostGroupSubType"].isNull())
			hostGroupObject.hostGroupSubType = clusterInfoNodeHostGroupListHostGroup["HostGroupSubType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["HostGroupChangeType"].isNull())
			hostGroupObject.hostGroupChangeType = clusterInfoNodeHostGroupListHostGroup["HostGroupChangeType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["HostGroupChangeStatus"].isNull())
			hostGroupObject.hostGroupChangeStatus = clusterInfoNodeHostGroupListHostGroup["HostGroupChangeStatus"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["ChargeType"].isNull())
			hostGroupObject.chargeType = clusterInfoNodeHostGroupListHostGroup["ChargeType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["Period"].isNull())
			hostGroupObject.period = clusterInfoNodeHostGroupListHostGroup["Period"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["NodeCount"].isNull())
			hostGroupObject.nodeCount = std::stoi(clusterInfoNodeHostGroupListHostGroup["NodeCount"].asString());
		if(!clusterInfoNodeHostGroupListHostGroup["InstanceType"].isNull())
			hostGroupObject.instanceType = clusterInfoNodeHostGroupListHostGroup["InstanceType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["CpuCore"].isNull())
			hostGroupObject.cpuCore = std::stoi(clusterInfoNodeHostGroupListHostGroup["CpuCore"].asString());
		if(!clusterInfoNodeHostGroupListHostGroup["MemoryCapacity"].isNull())
			hostGroupObject.memoryCapacity = std::stoi(clusterInfoNodeHostGroupListHostGroup["MemoryCapacity"].asString());
		if(!clusterInfoNodeHostGroupListHostGroup["DiskType"].isNull())
			hostGroupObject.diskType = clusterInfoNodeHostGroupListHostGroup["DiskType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["DiskCapacity"].isNull())
			hostGroupObject.diskCapacity = std::stoi(clusterInfoNodeHostGroupListHostGroup["DiskCapacity"].asString());
		if(!clusterInfoNodeHostGroupListHostGroup["DiskCount"].isNull())
			hostGroupObject.diskCount = std::stoi(clusterInfoNodeHostGroupListHostGroup["DiskCount"].asString());
		if(!clusterInfoNodeHostGroupListHostGroup["BandWidth"].isNull())
			hostGroupObject.bandWidth = clusterInfoNodeHostGroupListHostGroup["BandWidth"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["LockType"].isNull())
			hostGroupObject.lockType = clusterInfoNodeHostGroupListHostGroup["LockType"].asString();
		if(!clusterInfoNodeHostGroupListHostGroup["LockReason"].isNull())
			hostGroupObject.lockReason = clusterInfoNodeHostGroupListHostGroup["LockReason"].asString();
		auto allNodesNode = clusterInfoNodeHostGroupListHostGroup["Nodes"]["Node"];
		for (auto clusterInfoNodeHostGroupListHostGroupNodesNode : allNodesNode)
		{
			ClusterInfo::HostGroup::Node nodesObject;
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["ZoneId"].isNull())
				nodesObject.zoneId = clusterInfoNodeHostGroupListHostGroupNodesNode["ZoneId"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["InstanceId"].isNull())
				nodesObject.instanceId = clusterInfoNodeHostGroupListHostGroupNodesNode["InstanceId"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["Status"].isNull())
				nodesObject.status = clusterInfoNodeHostGroupListHostGroupNodesNode["Status"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["PubIp"].isNull())
				nodesObject.pubIp = clusterInfoNodeHostGroupListHostGroupNodesNode["PubIp"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["InnerIp"].isNull())
				nodesObject.innerIp = clusterInfoNodeHostGroupListHostGroupNodesNode["InnerIp"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["ExpiredTime"].isNull())
				nodesObject.expiredTime = clusterInfoNodeHostGroupListHostGroupNodesNode["ExpiredTime"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["CreateTime"].isNull())
				nodesObject.createTime = clusterInfoNodeHostGroupListHostGroupNodesNode["CreateTime"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["EmrExpiredTime"].isNull())
				nodesObject.emrExpiredTime = clusterInfoNodeHostGroupListHostGroupNodesNode["EmrExpiredTime"].asString();
			if(!clusterInfoNodeHostGroupListHostGroupNodesNode["SupportIpV6"].isNull())
				nodesObject.supportIpV6 = clusterInfoNodeHostGroupListHostGroupNodesNode["SupportIpV6"].asString() == "true";
			auto allDaemonInfosNode = clusterInfoNodeHostGroupListHostGroupNodesNode["DaemonInfos"]["DaemonInfo"];
			for (auto clusterInfoNodeHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo : allDaemonInfosNode)
			{
				ClusterInfo::HostGroup::Node::DaemonInfo daemonInfosObject;
				if(!clusterInfoNodeHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo["Name"].isNull())
					daemonInfosObject.name = clusterInfoNodeHostGroupListHostGroupNodesNodeDaemonInfosDaemonInfo["Name"].asString();
				nodesObject.daemonInfos.push_back(daemonInfosObject);
			}
			auto allDiskInfosNode = clusterInfoNodeHostGroupListHostGroupNodesNode["DiskInfos"]["DiskInfo"];
			for (auto clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo : allDiskInfosNode)
			{
				ClusterInfo::HostGroup::Node::DiskInfo diskInfosObject;
				if(!clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["Device"].isNull())
					diskInfosObject.device = clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["Device"].asString();
				if(!clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["DiskName"].isNull())
					diskInfosObject.diskName = clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["DiskName"].asString();
				if(!clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["DiskId"].isNull())
					diskInfosObject.diskId = clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["DiskId"].asString();
				if(!clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["Type"].isNull())
					diskInfosObject.type = clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["Type"].asString();
				if(!clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["Size"].isNull())
					diskInfosObject.size = std::stoi(clusterInfoNodeHostGroupListHostGroupNodesNodeDiskInfosDiskInfo["Size"].asString());
				nodesObject.diskInfos.push_back(diskInfosObject);
			}
			hostGroupObject.nodes.push_back(nodesObject);
		}
		clusterInfo_.hostGroupList.push_back(hostGroupObject);
	}
	auto allBootstrapActionListNode = clusterInfoNode["BootstrapActionList"]["BootstrapAction"];
	for (auto clusterInfoNodeBootstrapActionListBootstrapAction : allBootstrapActionListNode)
	{
		ClusterInfo::BootstrapAction bootstrapActionObject;
		if(!clusterInfoNodeBootstrapActionListBootstrapAction["Name"].isNull())
			bootstrapActionObject.name = clusterInfoNodeBootstrapActionListBootstrapAction["Name"].asString();
		if(!clusterInfoNodeBootstrapActionListBootstrapAction["Path"].isNull())
			bootstrapActionObject.path = clusterInfoNodeBootstrapActionListBootstrapAction["Path"].asString();
		if(!clusterInfoNodeBootstrapActionListBootstrapAction["Arg"].isNull())
			bootstrapActionObject.arg = clusterInfoNodeBootstrapActionListBootstrapAction["Arg"].asString();
		clusterInfo_.bootstrapActionList.push_back(bootstrapActionObject);
	}
	auto relateClusterInfoNode = clusterInfoNode["RelateClusterInfo"];
	if(!relateClusterInfoNode["ClusterId"].isNull())
		clusterInfo_.relateClusterInfo.clusterId = relateClusterInfoNode["ClusterId"].asString();
	if(!relateClusterInfoNode["ClusterName"].isNull())
		clusterInfo_.relateClusterInfo.clusterName = relateClusterInfoNode["ClusterName"].asString();
	if(!relateClusterInfoNode["Status"].isNull())
		clusterInfo_.relateClusterInfo.status = relateClusterInfoNode["Status"].asString();
	if(!relateClusterInfoNode["ClusterType"].isNull())
		clusterInfo_.relateClusterInfo.clusterType = relateClusterInfoNode["ClusterType"].asString();
	auto hostPoolInfoNode = clusterInfoNode["HostPoolInfo"];
	if(!hostPoolInfoNode["HpBizId"].isNull())
		clusterInfo_.hostPoolInfo.hpBizId = hostPoolInfoNode["HpBizId"].asString();
	if(!hostPoolInfoNode["HpName"].isNull())
		clusterInfo_.hostPoolInfo.hpName = hostPoolInfoNode["HpName"].asString();
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
	auto allSoftwaresNode = softwareInfoNode["Softwares"]["Software"];
	for (auto softwareInfoNodeSoftwaresSoftware : allSoftwaresNode)
	{
		ClusterInfo::SoftwareInfo::Software softwareObject;
		if(!softwareInfoNodeSoftwaresSoftware["DisplayName"].isNull())
			softwareObject.displayName = softwareInfoNodeSoftwaresSoftware["DisplayName"].asString();
		if(!softwareInfoNodeSoftwaresSoftware["Name"].isNull())
			softwareObject.name = softwareInfoNodeSoftwaresSoftware["Name"].asString();
		if(!softwareInfoNodeSoftwaresSoftware["OnlyDisplay"].isNull())
			softwareObject.onlyDisplay = softwareInfoNodeSoftwaresSoftware["OnlyDisplay"].asString() == "true";
		if(!softwareInfoNodeSoftwaresSoftware["StartTpe"].isNull())
			softwareObject.startTpe = std::stoi(softwareInfoNodeSoftwaresSoftware["StartTpe"].asString());
		if(!softwareInfoNodeSoftwaresSoftware["Version"].isNull())
			softwareObject.version = softwareInfoNodeSoftwaresSoftware["Version"].asString();
		clusterInfo_.softwareInfo.softwares.push_back(softwareObject);
	}
	auto accessInfoNode = clusterInfoNode["AccessInfo"];
	auto allZKLinksNode = accessInfoNode["ZKLinks"]["ZKLink"];
	for (auto accessInfoNodeZKLinksZKLink : allZKLinksNode)
	{
		ClusterInfo::AccessInfo::ZKLink zKLinkObject;
		if(!accessInfoNodeZKLinksZKLink["Link"].isNull())
			zKLinkObject.link = accessInfoNodeZKLinksZKLink["Link"].asString();
		if(!accessInfoNodeZKLinksZKLink["Port"].isNull())
			zKLinkObject.port = accessInfoNodeZKLinksZKLink["Port"].asString();
		clusterInfo_.accessInfo.zKLinks.push_back(zKLinkObject);
	}

}

DescribeClusterV2Result::ClusterInfo DescribeClusterV2Result::getClusterInfo()const
{
	return clusterInfo_;
}

