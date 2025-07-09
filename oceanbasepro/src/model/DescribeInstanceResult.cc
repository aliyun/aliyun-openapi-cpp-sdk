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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["InstanceId"].isNull())
		instance_.instanceId = instanceNode["InstanceId"].asString();
	if(!instanceNode["InstanceName"].isNull())
		instance_.instanceName = instanceNode["InstanceName"].asString();
	if(!instanceNode["InstanceClass"].isNull())
		instance_.instanceClass = instanceNode["InstanceClass"].asString();
	if(!instanceNode["Series"].isNull())
		instance_.series = instanceNode["Series"].asString();
	if(!instanceNode["PayType"].isNull())
		instance_.payType = instanceNode["PayType"].asString();
	if(!instanceNode["CreateTime"].isNull())
		instance_.createTime = instanceNode["CreateTime"].asString();
	if(!instanceNode["ExpireTime"].isNull())
		instance_.expireTime = instanceNode["ExpireTime"].asString();
	if(!instanceNode["Version"].isNull())
		instance_.version = instanceNode["Version"].asString();
	if(!instanceNode["DeployType"].isNull())
		instance_.deployType = instanceNode["DeployType"].asString();
	if(!instanceNode["DeployMode"].isNull())
		instance_.deployMode = instanceNode["DeployMode"].asString();
	if(!instanceNode["DiskType"].isNull())
		instance_.diskType = instanceNode["DiskType"].asString();
	if(!instanceNode["MaintainTime"].isNull())
		instance_.maintainTime = instanceNode["MaintainTime"].asString();
	if(!instanceNode["DataMergeTime"].isNull())
		instance_.dataMergeTime = instanceNode["DataMergeTime"].asString();
	if(!instanceNode["AutoRenewal"].isNull())
		instance_.autoRenewal = instanceNode["AutoRenewal"].asString() == "true";
	if(!instanceNode["IsTrustEcs"].isNull())
		instance_.isTrustEcs = instanceNode["IsTrustEcs"].asString() == "true";
	if(!instanceNode["Status"].isNull())
		instance_.status = instanceNode["Status"].asString();
	if(!instanceNode["AutoUpgradeObVersion"].isNull())
		instance_.autoUpgradeObVersion = instanceNode["AutoUpgradeObVersion"].asString() == "true";
	if(!instanceNode["ObRpmVersion"].isNull())
		instance_.obRpmVersion = instanceNode["ObRpmVersion"].asString();
	if(!instanceNode["IsLatestObVersion"].isNull())
		instance_.isLatestObVersion = instanceNode["IsLatestObVersion"].asString() == "true";
	if(!instanceNode["EnableUpgradeLogDisk"].isNull())
		instance_.enableUpgradeLogDisk = instanceNode["EnableUpgradeLogDisk"].asString() == "true";
	if(!instanceNode["InstanceRole"].isNull())
		instance_.instanceRole = instanceNode["InstanceRole"].asString();
	if(!instanceNode["NodeNum"].isNull())
		instance_.nodeNum = instanceNode["NodeNum"].asString();
	if(!instanceNode["ReplicaMode"].isNull())
		instance_.replicaMode = instanceNode["ReplicaMode"].asString();
	if(!instanceNode["IsolationOptimization"].isNull())
		instance_.isolationOptimization = instanceNode["IsolationOptimization"].asString() == "true";
	if(!instanceNode["EnableIsolationOptimization"].isNull())
		instance_.enableIsolationOptimization = instanceNode["EnableIsolationOptimization"].asString() == "true";
	if(!instanceNode["InTempCapacityStatus"].isNull())
		instance_.inTempCapacityStatus = instanceNode["InTempCapacityStatus"].asString() == "true";
	if(!instanceNode["DataDiskAutoScale"].isNull())
		instance_.dataDiskAutoScale = instanceNode["DataDiskAutoScale"].asString() == "true";
	if(!instanceNode["EnableProxyService"].isNull())
		instance_.enableProxyService = instanceNode["EnableProxyService"].asString() == "true";
	if(!instanceNode["ProxyServiceStatus"].isNull())
		instance_.proxyServiceStatus = instanceNode["ProxyServiceStatus"].asString();
	if(!instanceNode["ProxyClusterId"].isNull())
		instance_.proxyClusterId = instanceNode["ProxyClusterId"].asString();
	if(!instanceNode["CpuArchitecture"].isNull())
		instance_.cpuArchitecture = instanceNode["CpuArchitecture"].asString();
	if(!instanceNode["UnitSpec"].isNull())
		instance_.unitSpec = instanceNode["UnitSpec"].asString();
	if(!instanceNode["SharedUnitNumLimit"].isNull())
		instance_.sharedUnitNumLimit = std::stoi(instanceNode["SharedUnitNumLimit"].asString());
	if(!instanceNode["ExclusiveUnitNumLimit"].isNull())
		instance_.exclusiveUnitNumLimit = std::stoi(instanceNode["ExclusiveUnitNumLimit"].asString());
	if(!instanceNode["EnableReadOnlyReplica"].isNull())
		instance_.enableReadOnlyReplica = instanceNode["EnableReadOnlyReplica"].asString() == "true";
	if(!instanceNode["EnableReadOnlyReplicaManagement"].isNull())
		instance_.enableReadOnlyReplicaManagement = instanceNode["EnableReadOnlyReplicaManagement"].asString() == "true";
	if(!instanceNode["PrimaryInstance"].isNull())
		instance_.primaryInstance = instanceNode["PrimaryInstance"].asString();
	if(!instanceNode["PrimaryRegion"].isNull())
		instance_.primaryRegion = instanceNode["PrimaryRegion"].asString();
	if(!instanceNode["SpecType"].isNull())
		instance_.specType = instanceNode["SpecType"].asString();
	if(!instanceNode["AllowModifyInternetAddressConnectionLimit"].isNull())
		instance_.allowModifyInternetAddressConnectionLimit = instanceNode["AllowModifyInternetAddressConnectionLimit"].asString() == "true";
	if(!instanceNode["AllowCreateProxySqlFirewallRule"].isNull())
		instance_.allowCreateProxySqlFirewallRule = instanceNode["AllowCreateProxySqlFirewallRule"].asString() == "true";
	if(!instanceNode["Iops"].isNull())
		instance_.iops = std::stoi(instanceNode["Iops"].asString());
	auto resourceNode = instanceNode["Resource"];
	if(!resourceNode["UnitCount"].isNull())
		instance_.resource.unitCount = std::stol(resourceNode["UnitCount"].asString());
	auto cpuNode = resourceNode["Cpu"];
	if(!cpuNode["TotalCpu"].isNull())
		instance_.resource.cpu.totalCpu = std::stol(cpuNode["TotalCpu"].asString());
	if(!cpuNode["UsedCpu"].isNull())
		instance_.resource.cpu.usedCpu = std::stol(cpuNode["UsedCpu"].asString());
	if(!cpuNode["UnitCpu"].isNull())
		instance_.resource.cpu.unitCpu = std::stol(cpuNode["UnitCpu"].asString());
	if(!cpuNode["OriginalTotalCpu"].isNull())
		instance_.resource.cpu.originalTotalCpu = std::stol(cpuNode["OriginalTotalCpu"].asString());
	auto memoryNode = resourceNode["Memory"];
	if(!memoryNode["TotalMemory"].isNull())
		instance_.resource.memory.totalMemory = std::stol(memoryNode["TotalMemory"].asString());
	if(!memoryNode["UsedMemory"].isNull())
		instance_.resource.memory.usedMemory = std::stol(memoryNode["UsedMemory"].asString());
	if(!memoryNode["UnitMemory"].isNull())
		instance_.resource.memory.unitMemory = std::stol(memoryNode["UnitMemory"].asString());
	if(!memoryNode["OriginalTotalMemory"].isNull())
		instance_.resource.memory.originalTotalMemory = std::stol(memoryNode["OriginalTotalMemory"].asString());
	auto diskSizeNode = resourceNode["DiskSize"];
	if(!diskSizeNode["TotalDiskSize"].isNull())
		instance_.resource.diskSize.totalDiskSize = std::stol(diskSizeNode["TotalDiskSize"].asString());
	if(!diskSizeNode["UsedDiskSize"].isNull())
		instance_.resource.diskSize.usedDiskSize = std::stol(diskSizeNode["UsedDiskSize"].asString());
	if(!diskSizeNode["UnitDiskSize"].isNull())
		instance_.resource.diskSize.unitDiskSize = std::stol(diskSizeNode["UnitDiskSize"].asString());
	if(!diskSizeNode["DataUsedSize"].isNull())
		instance_.resource.diskSize.dataUsedSize = diskSizeNode["DataUsedSize"].asString();
	if(!diskSizeNode["MaxDiskUsedPercent"].isNull())
		instance_.resource.diskSize.maxDiskUsedPercent = diskSizeNode["MaxDiskUsedPercent"].asString();
	if(!diskSizeNode["OriginalTotalDiskSize"].isNull())
		instance_.resource.diskSize.originalTotalDiskSize = std::stol(diskSizeNode["OriginalTotalDiskSize"].asString());
	if(!diskSizeNode["MaxDiskSize"].isNull())
		instance_.resource.diskSize.maxDiskSize = diskSizeNode["MaxDiskSize"].asString();
		auto allMaxDiskUsedObServer = diskSizeNode["MaxDiskUsedObServer"]["MaxDiskUsedObServer"];
		for (auto value : allMaxDiskUsedObServer)
			instance_.resource.diskSize.maxDiskUsedObServer.push_back(value.asString());
	auto logDiskSizeNode = resourceNode["LogDiskSize"];
	if(!logDiskSizeNode["TotalDiskSize"].isNull())
		instance_.resource.logDiskSize.totalDiskSize = std::stol(logDiskSizeNode["TotalDiskSize"].asString());
	if(!logDiskSizeNode["UnitDiskSize"].isNull())
		instance_.resource.logDiskSize.unitDiskSize = std::stol(logDiskSizeNode["UnitDiskSize"].asString());
	if(!logDiskSizeNode["LogAssignedSize"].isNull())
		instance_.resource.logDiskSize.logAssignedSize = logDiskSizeNode["LogAssignedSize"].asString();
	if(!logDiskSizeNode["MaxLogAssignedPercent"].isNull())
		instance_.resource.logDiskSize.maxLogAssignedPercent = logDiskSizeNode["MaxLogAssignedPercent"].asString();
	if(!logDiskSizeNode["OriginalTotalDiskSize"].isNull())
		instance_.resource.logDiskSize.originalTotalDiskSize = std::stoi(logDiskSizeNode["OriginalTotalDiskSize"].asString());
		auto allMaxLogAssignedObServer = logDiskSizeNode["MaxLogAssignedObServer"]["MaxLogAssignedObServer"];
		for (auto value : allMaxLogAssignedObServer)
			instance_.resource.logDiskSize.maxLogAssignedObServer.push_back(value.asString());
	auto capacityUnitNode = resourceNode["CapacityUnit"];
	if(!capacityUnitNode["MaxCapacityUnit"].isNull())
		instance_.resource.capacityUnit.maxCapacityUnit = std::stoi(capacityUnitNode["MaxCapacityUnit"].asString());
	if(!capacityUnitNode["MinCapacityUnit"].isNull())
		instance_.resource.capacityUnit.minCapacityUnit = std::stoi(capacityUnitNode["MinCapacityUnit"].asString());
	if(!capacityUnitNode["UsedCapacityUnit"].isNull())
		instance_.resource.capacityUnit.usedCapacityUnit = capacityUnitNode["UsedCapacityUnit"].asString();
	auto tenantCreatableNode = instanceNode["TenantCreatable"];
	if(!tenantCreatableNode["EnableCreateTenant"].isNull())
		instance_.tenantCreatable.enableCreateTenant = tenantCreatableNode["EnableCreateTenant"].asString() == "true";
	if(!tenantCreatableNode["DisableCreateTenantReason"].isNull())
		instance_.tenantCreatable.disableCreateTenantReason = tenantCreatableNode["DisableCreateTenantReason"].asString();
	auto dataDiskAutoScaleConfigNode = instanceNode["DataDiskAutoScaleConfig"];
	if(!dataDiskAutoScaleConfigNode["AutoScale"].isNull())
		instance_.dataDiskAutoScaleConfig.autoScale = dataDiskAutoScaleConfigNode["AutoScale"].asString() == "true";
	if(!dataDiskAutoScaleConfigNode["Upperbound"].isNull())
		instance_.dataDiskAutoScaleConfig.upperbound = std::stol(dataDiskAutoScaleConfigNode["Upperbound"].asString());
	if(!dataDiskAutoScaleConfigNode["UpperThreshold"].isNull())
		instance_.dataDiskAutoScaleConfig.upperThreshold = std::stol(dataDiskAutoScaleConfigNode["UpperThreshold"].asString());
	if(!dataDiskAutoScaleConfigNode["UpperMergeThreshold"].isNull())
		instance_.dataDiskAutoScaleConfig.upperMergeThreshold = std::stol(dataDiskAutoScaleConfigNode["UpperMergeThreshold"].asString());
	if(!dataDiskAutoScaleConfigNode["MaxDiskSize"].isNull())
		instance_.dataDiskAutoScaleConfig.maxDiskSize = std::stol(dataDiskAutoScaleConfigNode["MaxDiskSize"].asString());
	if(!dataDiskAutoScaleConfigNode["ScaleStepInNormal"].isNull())
		instance_.dataDiskAutoScaleConfig.scaleStepInNormal = std::stol(dataDiskAutoScaleConfigNode["ScaleStepInNormal"].asString());
	if(!dataDiskAutoScaleConfigNode["ScaleStepInMerge"].isNull())
		instance_.dataDiskAutoScaleConfig.scaleStepInMerge = std::stol(dataDiskAutoScaleConfigNode["ScaleStepInMerge"].asString());
	if(!dataDiskAutoScaleConfigNode["UpperScaleStrategy"].isNull())
		instance_.dataDiskAutoScaleConfig.upperScaleStrategy = dataDiskAutoScaleConfigNode["UpperScaleStrategy"].asString();
	if(!dataDiskAutoScaleConfigNode["UpperScaleStep"].isNull())
		instance_.dataDiskAutoScaleConfig.upperScaleStep = dataDiskAutoScaleConfigNode["UpperScaleStep"].asString();
	auto readOnlyResourceNode = instanceNode["ReadOnlyResource"];
	if(!readOnlyResourceNode["UnitCount"].isNull())
		instance_.readOnlyResource.unitCount = std::stol(readOnlyResourceNode["UnitCount"].asString());
	auto cpu1Node = readOnlyResourceNode["Cpu"];
	if(!cpu1Node["TotalCpu"].isNull())
		instance_.readOnlyResource.cpu1.totalCpu = std::stol(cpu1Node["TotalCpu"].asString());
	if(!cpu1Node["UsedCpu"].isNull())
		instance_.readOnlyResource.cpu1.usedCpu = std::stol(cpu1Node["UsedCpu"].asString());
	if(!cpu1Node["UnitCpu"].isNull())
		instance_.readOnlyResource.cpu1.unitCpu = std::stol(cpu1Node["UnitCpu"].asString());
	if(!cpu1Node["OriginalTotalCpu"].isNull())
		instance_.readOnlyResource.cpu1.originalTotalCpu = std::stol(cpu1Node["OriginalTotalCpu"].asString());
	auto memory2Node = readOnlyResourceNode["Memory"];
	if(!memory2Node["TotalMemory"].isNull())
		instance_.readOnlyResource.memory2.totalMemory = std::stol(memory2Node["TotalMemory"].asString());
	if(!memory2Node["UsedMemory"].isNull())
		instance_.readOnlyResource.memory2.usedMemory = std::stol(memory2Node["UsedMemory"].asString());
	if(!memory2Node["UnitMemory"].isNull())
		instance_.readOnlyResource.memory2.unitMemory = std::stol(memory2Node["UnitMemory"].asString());
	if(!memory2Node["OriginalTotalMemory"].isNull())
		instance_.readOnlyResource.memory2.originalTotalMemory = std::stol(memory2Node["OriginalTotalMemory"].asString());
	auto diskSize3Node = readOnlyResourceNode["DiskSize"];
	if(!diskSize3Node["TotalDiskSize"].isNull())
		instance_.readOnlyResource.diskSize3.totalDiskSize = std::stol(diskSize3Node["TotalDiskSize"].asString());
	if(!diskSize3Node["UsedDiskSize"].isNull())
		instance_.readOnlyResource.diskSize3.usedDiskSize = std::stol(diskSize3Node["UsedDiskSize"].asString());
	if(!diskSize3Node["UnitDiskSize"].isNull())
		instance_.readOnlyResource.diskSize3.unitDiskSize = std::stol(diskSize3Node["UnitDiskSize"].asString());
	if(!diskSize3Node["DataUsedSize"].isNull())
		instance_.readOnlyResource.diskSize3.dataUsedSize = diskSize3Node["DataUsedSize"].asString();
	if(!diskSize3Node["MaxDiskUsedPercent"].isNull())
		instance_.readOnlyResource.diskSize3.maxDiskUsedPercent = diskSize3Node["MaxDiskUsedPercent"].asString();
	if(!diskSize3Node["OriginalTotalDiskSize"].isNull())
		instance_.readOnlyResource.diskSize3.originalTotalDiskSize = std::stol(diskSize3Node["OriginalTotalDiskSize"].asString());
	if(!diskSize3Node["MaxDiskSize"].isNull())
		instance_.readOnlyResource.diskSize3.maxDiskSize = diskSize3Node["MaxDiskSize"].asString();
		auto allMaxDiskUsedObServer6 = diskSize3Node["MaxDiskUsedObServer"]["MaxDiskUsedObServer"];
		for (auto value : allMaxDiskUsedObServer6)
			instance_.readOnlyResource.diskSize3.maxDiskUsedObServer6.push_back(value.asString());
	auto logDiskSize4Node = readOnlyResourceNode["LogDiskSize"];
	if(!logDiskSize4Node["TotalDiskSize"].isNull())
		instance_.readOnlyResource.logDiskSize4.totalDiskSize = std::stol(logDiskSize4Node["TotalDiskSize"].asString());
	if(!logDiskSize4Node["UnitDiskSize"].isNull())
		instance_.readOnlyResource.logDiskSize4.unitDiskSize = std::stol(logDiskSize4Node["UnitDiskSize"].asString());
	if(!logDiskSize4Node["LogAssignedSize"].isNull())
		instance_.readOnlyResource.logDiskSize4.logAssignedSize = logDiskSize4Node["LogAssignedSize"].asString();
	if(!logDiskSize4Node["MaxLogAssignedPercent"].isNull())
		instance_.readOnlyResource.logDiskSize4.maxLogAssignedPercent = logDiskSize4Node["MaxLogAssignedPercent"].asString();
		auto allMaxLogAssignedObServer7 = logDiskSize4Node["MaxLogAssignedObServer"]["MaxLogAssignedObServer"];
		for (auto value : allMaxLogAssignedObServer7)
			instance_.readOnlyResource.logDiskSize4.maxLogAssignedObServer7.push_back(value.asString());
	auto capacityUnit5Node = readOnlyResourceNode["CapacityUnit"];
	if(!capacityUnit5Node["MaxCapacityUnit"].isNull())
		instance_.readOnlyResource.capacityUnit5.maxCapacityUnit = std::stoi(capacityUnit5Node["MaxCapacityUnit"].asString());
	if(!capacityUnit5Node["MinCapacityUnit"].isNull())
		instance_.readOnlyResource.capacityUnit5.minCapacityUnit = std::stoi(capacityUnit5Node["MinCapacityUnit"].asString());
	if(!capacityUnit5Node["UsedCapacityUnit"].isNull())
		instance_.readOnlyResource.capacityUnit5.usedCapacityUnit = capacityUnit5Node["UsedCapacityUnit"].asString();
		auto allAvailableZones = instanceNode["AvailableZones"]["AvailableZones"];
		for (auto value : allAvailableZones)
			instance_.availableZones.push_back(value.asString());
		auto allZones = instanceNode["Zones"]["Zones"];
		for (auto value : allZones)
			instance_.zones.push_back(value.asString());

}

DescribeInstanceResult::Instance DescribeInstanceResult::getInstance()const
{
	return instance_;
}

