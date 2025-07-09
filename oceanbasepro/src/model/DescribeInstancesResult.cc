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

#include <alibabacloud/oceanbasepro/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Data"];
	for (auto valueInstancesData : allInstancesNode)
	{
		Data instancesObject;
		if(!valueInstancesData["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesData["VpcId"].asString();
		if(!valueInstancesData["CommodityCode"].isNull())
			instancesObject.commodityCode = valueInstancesData["CommodityCode"].asString();
		if(!valueInstancesData["ExpireTime"].isNull())
			instancesObject.expireTime = valueInstancesData["ExpireTime"].asString();
		if(!valueInstancesData["State"].isNull())
			instancesObject.state = valueInstancesData["State"].asString();
		if(!valueInstancesData["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesData["InstanceClass"].asString();
		if(!valueInstancesData["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesData["CreateTime"].asString();
		if(!valueInstancesData["DeployMode"].isNull())
			instancesObject.deployMode = valueInstancesData["DeployMode"].asString();
		if(!valueInstancesData["CpuArchitecture"].isNull())
			instancesObject.cpuArchitecture = valueInstancesData["CpuArchitecture"].asString();
		if(!valueInstancesData["MaintainTime"].isNull())
			instancesObject.maintainTime = valueInstancesData["MaintainTime"].asString();
		if(!valueInstancesData["DeployType"].isNull())
			instancesObject.deployType = valueInstancesData["DeployType"].asString();
		if(!valueInstancesData["PayType"].isNull())
			instancesObject.payType = valueInstancesData["PayType"].asString();
		if(!valueInstancesData["DiskSize"].isNull())
			instancesObject.diskSize = std::stol(valueInstancesData["DiskSize"].asString());
		if(!valueInstancesData["DiskType"].isNull())
			instancesObject.diskType = valueInstancesData["DiskType"].asString();
		if(!valueInstancesData["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesData["InstanceId"].asString();
		if(!valueInstancesData["ExpireSeconds"].isNull())
			instancesObject.expireSeconds = std::stoi(valueInstancesData["ExpireSeconds"].asString());
		if(!valueInstancesData["Mem"].isNull())
			instancesObject.mem = std::stol(valueInstancesData["Mem"].asString());
		if(!valueInstancesData["EnableUpgradeNodes"].isNull())
			instancesObject.enableUpgradeNodes = valueInstancesData["EnableUpgradeNodes"].asString() == "true";
		if(!valueInstancesData["Cpu"].isNull())
			instancesObject.cpu = std::stoi(valueInstancesData["Cpu"].asString());
		if(!valueInstancesData["Version"].isNull())
			instancesObject.version = valueInstancesData["Version"].asString();
		if(!valueInstancesData["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesData["InstanceName"].asString();
		if(!valueInstancesData["Series"].isNull())
			instancesObject.series = valueInstancesData["Series"].asString();
		if(!valueInstancesData["UsedDiskSize"].isNull())
			instancesObject.usedDiskSize = std::stol(valueInstancesData["UsedDiskSize"].asString());
		if(!valueInstancesData["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesData["ResourceGroupId"].asString();
		if(!valueInstancesData["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesData["InstanceType"].asString();
		if(!valueInstancesData["InstanceRole"].isNull())
			instancesObject.instanceRole = valueInstancesData["InstanceRole"].asString();
		if(!valueInstancesData["InTempCapacityStatus"].isNull())
			instancesObject.inTempCapacityStatus = valueInstancesData["InTempCapacityStatus"].asString() == "true";
		if(!valueInstancesData["EnableReadOnlyReplicaManagement"].isNull())
			instancesObject.enableReadOnlyReplicaManagement = valueInstancesData["EnableReadOnlyReplicaManagement"].asString() == "true";
		if(!valueInstancesData["SpecType"].isNull())
			instancesObject.specType = valueInstancesData["SpecType"].asString();
		if(!valueInstancesData["ObRpmVersion"].isNull())
			instancesObject.obRpmVersion = valueInstancesData["ObRpmVersion"].asString();
		if(!valueInstancesData["ReplicaMode"].isNull())
			instancesObject.replicaMode = valueInstancesData["ReplicaMode"].asString();
		if(!valueInstancesData["Migratable"].isNull())
			instancesObject.migratable = valueInstancesData["Migratable"].asString() == "true";
		if(!valueInstancesData["Iops"].isNull())
			instancesObject.iops = std::stoi(valueInstancesData["Iops"].asString());
		auto resourceNode = value["Resource"];
		if(!resourceNode["UnitCount"].isNull())
			instancesObject.resource.unitCount = std::stol(resourceNode["UnitCount"].asString());
		auto cpuNode = resourceNode["Cpu"];
		if(!cpuNode["TotalCpu"].isNull())
			instancesObject.resource.cpu.totalCpu = cpuNode["TotalCpu"].asString();
		if(!cpuNode["UsedCpu"].isNull())
			instancesObject.resource.cpu.usedCpu = cpuNode["UsedCpu"].asString();
		if(!cpuNode["UnitCpu"].isNull())
			instancesObject.resource.cpu.unitCpu = cpuNode["UnitCpu"].asString();
		if(!cpuNode["OriginalTotalCpu"].isNull())
			instancesObject.resource.cpu.originalTotalCpu = cpuNode["OriginalTotalCpu"].asString();
		auto memoryNode = resourceNode["Memory"];
		if(!memoryNode["TotalMemory"].isNull())
			instancesObject.resource.memory.totalMemory = memoryNode["TotalMemory"].asString();
		if(!memoryNode["UsedMemory"].isNull())
			instancesObject.resource.memory.usedMemory = std::stol(memoryNode["UsedMemory"].asString());
		if(!memoryNode["UnitMemory"].isNull())
			instancesObject.resource.memory.unitMemory = std::stol(memoryNode["UnitMemory"].asString());
		if(!memoryNode["OriginalTotalMemory"].isNull())
			instancesObject.resource.memory.originalTotalMemory = memoryNode["OriginalTotalMemory"].asString();
		auto diskSizeNode = resourceNode["DiskSize"];
		if(!diskSizeNode["TotalDiskSize"].isNull())
			instancesObject.resource.diskSize.totalDiskSize = diskSizeNode["TotalDiskSize"].asString();
		if(!diskSizeNode["UsedDiskSize"].isNull())
			instancesObject.resource.diskSize.usedDiskSize = std::stol(diskSizeNode["UsedDiskSize"].asString());
		if(!diskSizeNode["UnitDiskSize"].isNull())
			instancesObject.resource.diskSize.unitDiskSize = diskSizeNode["UnitDiskSize"].asString();
		if(!diskSizeNode["OriginalTotalDiskSize"].isNull())
			instancesObject.resource.diskSize.originalTotalDiskSize = diskSizeNode["OriginalTotalDiskSize"].asString();
		auto capacityUnitNode = resourceNode["CapacityUnit"];
		if(!capacityUnitNode["MaxCapacityUnit"].isNull())
			instancesObject.resource.capacityUnit.maxCapacityUnit = std::stoi(capacityUnitNode["MaxCapacityUnit"].asString());
		if(!capacityUnitNode["MinCapacityUnit"].isNull())
			instancesObject.resource.capacityUnit.minCapacityUnit = std::stoi(capacityUnitNode["MinCapacityUnit"].asString());
		if(!capacityUnitNode["UsedCapacityUnit"].isNull())
			instancesObject.resource.capacityUnit.usedCapacityUnit = std::stoi(capacityUnitNode["UsedCapacityUnit"].asString());
		auto dataDiskAutoScaleConfigNode = value["DataDiskAutoScaleConfig"];
		if(!dataDiskAutoScaleConfigNode["AutoScale"].isNull())
			instancesObject.dataDiskAutoScaleConfig.autoScale = dataDiskAutoScaleConfigNode["AutoScale"].asString() == "true";
		if(!dataDiskAutoScaleConfigNode["Upperbound"].isNull())
			instancesObject.dataDiskAutoScaleConfig.upperbound = dataDiskAutoScaleConfigNode["Upperbound"].asString();
		if(!dataDiskAutoScaleConfigNode["UpperThreshold"].isNull())
			instancesObject.dataDiskAutoScaleConfig.upperThreshold = dataDiskAutoScaleConfigNode["UpperThreshold"].asString();
		if(!dataDiskAutoScaleConfigNode["UpperMergeThreshold"].isNull())
			instancesObject.dataDiskAutoScaleConfig.upperMergeThreshold = dataDiskAutoScaleConfigNode["UpperMergeThreshold"].asString();
		if(!dataDiskAutoScaleConfigNode["MaxDiskSize"].isNull())
			instancesObject.dataDiskAutoScaleConfig.maxDiskSize = std::stol(dataDiskAutoScaleConfigNode["MaxDiskSize"].asString());
		if(!dataDiskAutoScaleConfigNode["ScaleStepInNormal"].isNull())
			instancesObject.dataDiskAutoScaleConfig.scaleStepInNormal = dataDiskAutoScaleConfigNode["ScaleStepInNormal"].asString();
		if(!dataDiskAutoScaleConfigNode["ScaleStepInMerge"].isNull())
			instancesObject.dataDiskAutoScaleConfig.scaleStepInMerge = dataDiskAutoScaleConfigNode["ScaleStepInMerge"].asString();
		if(!dataDiskAutoScaleConfigNode["UpperScaleStrategy"].isNull())
			instancesObject.dataDiskAutoScaleConfig.upperScaleStrategy = dataDiskAutoScaleConfigNode["UpperScaleStrategy"].asString();
		auto migrationInfoNode = value["MigrationInfo"];
		if(!migrationInfoNode["Migratable"].isNull())
			instancesObject.migrationInfo.migratable = migrationInfoNode["Migratable"].asString() == "true";
		auto checkResultNode = migrationInfoNode["CheckResult"];
		if(!checkResultNode["Level"].isNull())
			instancesObject.migrationInfo.checkResult.level = checkResultNode["Level"].asString();
		if(!checkResultNode["Code"].isNull())
			instancesObject.migrationInfo.checkResult.code = checkResultNode["Code"].asString();
		if(!checkResultNode["CodeName"].isNull())
			instancesObject.migrationInfo.checkResult.codeName = checkResultNode["CodeName"].asString();
		if(!checkResultNode["Module"].isNull())
			instancesObject.migrationInfo.checkResult.module = checkResultNode["Module"].asString();
		if(!checkResultNode["ModuleName"].isNull())
			instancesObject.migrationInfo.checkResult.moduleName = checkResultNode["ModuleName"].asString();
		if(!checkResultNode["SubModule"].isNull())
			instancesObject.migrationInfo.checkResult.subModule = checkResultNode["SubModule"].asString();
		if(!checkResultNode["SubModuleName"].isNull())
			instancesObject.migrationInfo.checkResult.subModuleName = checkResultNode["SubModuleName"].asString();
		auto allAvailableZones = value["AvailableZones"]["AvailableZones"];
		for (auto value : allAvailableZones)
			instancesObject.availableZones.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstancesResult::Data> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

