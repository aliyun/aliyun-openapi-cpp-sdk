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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeInstanceTopologyResult::DescribeInstanceTopologyResult() :
	ServiceResult()
{}

DescribeInstanceTopologyResult::DescribeInstanceTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceTopologyResult::~DescribeInstanceTopologyResult()
{}

void DescribeInstanceTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceTopologyNode = value["InstanceTopology"];
	auto allTenantsNode = instanceTopologyNode["Tenants"]["TenantsItem"];
	for (auto instanceTopologyNodeTenantsTenantsItem : allTenantsNode)
	{
		InstanceTopology::TenantsItem tenantsItemObject;
		if(!instanceTopologyNodeTenantsTenantsItem["TenantId"].isNull())
			tenantsItemObject.tenantId = instanceTopologyNodeTenantsTenantsItem["TenantId"].asString();
		if(!instanceTopologyNodeTenantsTenantsItem["TenantName"].isNull())
			tenantsItemObject.tenantName = instanceTopologyNodeTenantsTenantsItem["TenantName"].asString();
		if(!instanceTopologyNodeTenantsTenantsItem["TenantCpu"].isNull())
			tenantsItemObject.tenantCpu = std::stof(instanceTopologyNodeTenantsTenantsItem["TenantCpu"].asString());
		if(!instanceTopologyNodeTenantsTenantsItem["TenantMemory"].isNull())
			tenantsItemObject.tenantMemory = std::stof(instanceTopologyNodeTenantsTenantsItem["TenantMemory"].asString());
		if(!instanceTopologyNodeTenantsTenantsItem["TenantMode"].isNull())
			tenantsItemObject.tenantMode = instanceTopologyNodeTenantsTenantsItem["TenantMode"].asString();
		if(!instanceTopologyNodeTenantsTenantsItem["TenantStatus"].isNull())
			tenantsItemObject.tenantStatus = instanceTopologyNodeTenantsTenantsItem["TenantStatus"].asString();
		if(!instanceTopologyNodeTenantsTenantsItem["TenantDeployType"].isNull())
			tenantsItemObject.tenantDeployType = instanceTopologyNodeTenantsTenantsItem["TenantDeployType"].asString();
		if(!instanceTopologyNodeTenantsTenantsItem["TenantUnitNum"].isNull())
			tenantsItemObject.tenantUnitNum = std::stoi(instanceTopologyNodeTenantsTenantsItem["TenantUnitNum"].asString());
		if(!instanceTopologyNodeTenantsTenantsItem["PrimaryZoneDeployType"].isNull())
			tenantsItemObject.primaryZoneDeployType = instanceTopologyNodeTenantsTenantsItem["PrimaryZoneDeployType"].asString();
		if(!instanceTopologyNodeTenantsTenantsItem["TenantDiskSize"].isNull())
			tenantsItemObject.tenantDiskSize = std::stof(instanceTopologyNodeTenantsTenantsItem["TenantDiskSize"].asString());
		if(!instanceTopologyNodeTenantsTenantsItem["TenantUnitCpu"].isNull())
			tenantsItemObject.tenantUnitCpu = std::stof(instanceTopologyNodeTenantsTenantsItem["TenantUnitCpu"].asString());
		if(!instanceTopologyNodeTenantsTenantsItem["TenantUnitMemory"].isNull())
			tenantsItemObject.tenantUnitMemory = std::stof(instanceTopologyNodeTenantsTenantsItem["TenantUnitMemory"].asString());
		auto allTenantZonesNode = instanceTopologyNodeTenantsTenantsItem["TenantZones"]["TenantZonesItem"];
		for (auto instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem : allTenantZonesNode)
		{
			InstanceTopology::TenantsItem::TenantZonesItem tenantZonesObject;
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneRole"].isNull())
				tenantZonesObject.tenantZoneRole = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneRole"].asString();
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["IsPrimaryTenantZone"].isNull())
				tenantZonesObject.isPrimaryTenantZone = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["IsPrimaryTenantZone"].asString() == "true";
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneId"].isNull())
				tenantZonesObject.tenantZoneId = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneId"].asString();
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["LogicalZone"].isNull())
				tenantZonesObject.logicalZone = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["LogicalZone"].asString();
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["ReplicaType"].isNull())
				tenantZonesObject.replicaType = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["ReplicaType"].asString();
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["ReadOnlyReplicaType"].isNull())
				tenantZonesObject.readOnlyReplicaType = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["ReadOnlyReplicaType"].asString();
			auto allUnitsNode = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["Units"]["UnitsItem"];
			for (auto instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem : allUnitsNode)
			{
				InstanceTopology::TenantsItem::TenantZonesItem::UnitsItem unitsObject;
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitId"].isNull())
					unitsObject.unitId = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitId"].asString();
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitStatus"].isNull())
					unitsObject.unitStatus = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitStatus"].asString();
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["NodeId"].isNull())
					unitsObject.nodeId = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["NodeId"].asString();
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitCpu"].isNull())
					unitsObject.unitCpu = std::stof(instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitCpu"].asString());
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitMemory"].isNull())
					unitsObject.unitMemory = std::stof(instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitMemory"].asString());
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["EnableMigrateUnit"].isNull())
					unitsObject.enableMigrateUnit = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["EnableMigrateUnit"].asString() == "true";
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["ManualMigrate"].isNull())
					unitsObject.manualMigrate = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["ManualMigrate"].asString() == "true";
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["EnableCancelMigrateUnit"].isNull())
					unitsObject.enableCancelMigrateUnit = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["EnableCancelMigrateUnit"].asString() == "true";
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitDataSize"].isNull())
					unitsObject.unitDataSize = std::stol(instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["UnitDataSize"].asString());
				if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["ReplicaType"].isNull())
					unitsObject.replicaType = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItemUnitsUnitsItem["ReplicaType"].asString();
				tenantZonesObject.units.push_back(unitsObject);
			}
			tenantsItemObject.tenantZones.push_back(tenantZonesObject);
		}
		instanceTopology_.tenants.push_back(tenantsItemObject);
	}
	auto allZonesNode = instanceTopologyNode["Zones"]["ZonesItem"];
	for (auto instanceTopologyNodeZonesZonesItem : allZonesNode)
	{
		InstanceTopology::ZonesItem zonesItemObject;
		if(!instanceTopologyNodeZonesZonesItem["ZoneId"].isNull())
			zonesItemObject.zoneId = instanceTopologyNodeZonesZonesItem["ZoneId"].asString();
		if(!instanceTopologyNodeZonesZonesItem["Region"].isNull())
			zonesItemObject.region = instanceTopologyNodeZonesZonesItem["Region"].asString();
		if(!instanceTopologyNodeZonesZonesItem["ZoneDisk"].isNull())
			zonesItemObject.zoneDisk = instanceTopologyNodeZonesZonesItem["ZoneDisk"].asString();
		auto allNodesNode = instanceTopologyNodeZonesZonesItem["Nodes"]["NodesItem"];
		for (auto instanceTopologyNodeZonesZonesItemNodesNodesItem : allNodesNode)
		{
			InstanceTopology::ZonesItem::NodesItem nodesObject;
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeId"].isNull())
				nodesObject.nodeId = instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeId"].asString();
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeCopyId"].isNull())
				nodesObject.nodeCopyId = std::stol(instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeCopyId"].asString());
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeStatus"].isNull())
				nodesObject.nodeStatus = instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeStatus"].asString();
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["ReplicaType"].isNull())
				nodesObject.replicaType = instanceTopologyNodeZonesZonesItemNodesNodesItem["ReplicaType"].asString();
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["FullCopyId"].isNull())
				nodesObject.fullCopyId = std::stol(instanceTopologyNodeZonesZonesItemNodesNodesItem["FullCopyId"].asString());
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["ReadOnlyCopyId"].isNull())
				nodesObject.readOnlyCopyId = std::stol(instanceTopologyNodeZonesZonesItemNodesNodesItem["ReadOnlyCopyId"].asString());
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["LogicalZone"].isNull())
				nodesObject.logicalZone = instanceTopologyNodeZonesZonesItemNodesNodesItem["LogicalZone"].asString();
			if(!instanceTopologyNodeZonesZonesItemNodesNodesItem["ReadOnlyReplicaType"].isNull())
				nodesObject.readOnlyReplicaType = instanceTopologyNodeZonesZonesItemNodesNodesItem["ReadOnlyReplicaType"].asString();
			auto nodeResourceNode = value["NodeResource"];
			auto cpuNode = nodeResourceNode["Cpu"];
			if(!cpuNode["UsedCpu"].isNull())
				nodesObject.nodeResource.cpu.usedCpu = std::stof(cpuNode["UsedCpu"].asString());
			if(!cpuNode["TotalCpu"].isNull())
				nodesObject.nodeResource.cpu.totalCpu = std::stoi(cpuNode["TotalCpu"].asString());
			auto memoryNode = nodeResourceNode["Memory"];
			if(!memoryNode["UsedMemory"].isNull())
				nodesObject.nodeResource.memory.usedMemory = std::stof(memoryNode["UsedMemory"].asString());
			if(!memoryNode["TotalMemory"].isNull())
				nodesObject.nodeResource.memory.totalMemory = std::stol(memoryNode["TotalMemory"].asString());
			auto diskSizeNode = nodeResourceNode["DiskSize"];
			if(!diskSizeNode["TotalDiskSize"].isNull())
				nodesObject.nodeResource.diskSize.totalDiskSize = diskSizeNode["TotalDiskSize"].asString();
			if(!diskSizeNode["UsedDiskSize"].isNull())
				nodesObject.nodeResource.diskSize.usedDiskSize = diskSizeNode["UsedDiskSize"].asString();
			zonesItemObject.nodes.push_back(nodesObject);
		}
		auto zoneResourceNode = value["ZoneResource"];
		auto diskSize1Node = zoneResourceNode["DiskSize"];
		if(!diskSize1Node["MaxDiskUsedPercent"].isNull())
			zonesItemObject.zoneResource.diskSize1.maxDiskUsedPercent = diskSize1Node["MaxDiskUsedPercent"].asString();
			auto allMaxDiskUsedObServer = diskSize1Node["MaxDiskUsedObServer"]["MaxDiskUsedObServer"];
			for (auto value : allMaxDiskUsedObServer)
				zonesItemObject.zoneResource.diskSize1.maxDiskUsedObServer.push_back(value.asString());
		instanceTopology_.zones.push_back(zonesItemObject);
	}
	auto allReplicasNode = instanceTopologyNode["Replicas"]["ReplicasItem"];
	for (auto instanceTopologyNodeReplicasReplicasItem : allReplicasNode)
	{
		InstanceTopology::ReplicasItem replicasItemObject;
		if(!instanceTopologyNodeReplicasReplicasItem["LogicalZone"].isNull())
			replicasItemObject.logicalZone = instanceTopologyNodeReplicasReplicasItem["LogicalZone"].asString();
		if(!instanceTopologyNodeReplicasReplicasItem["NodeNum"].isNull())
			replicasItemObject.nodeNum = std::stoi(instanceTopologyNodeReplicasReplicasItem["NodeNum"].asString());
		if(!instanceTopologyNodeReplicasReplicasItem["ZoneLogicalName"].isNull())
			replicasItemObject.zoneLogicalName = instanceTopologyNodeReplicasReplicasItem["ZoneLogicalName"].asString();
		if(!instanceTopologyNodeReplicasReplicasItem["ZoneRegionName"].isNull())
			replicasItemObject.zoneRegionName = instanceTopologyNodeReplicasReplicasItem["ZoneRegionName"].asString();
		if(!instanceTopologyNodeReplicasReplicasItem["ZoneLogicalId"].isNull())
			replicasItemObject.zoneLogicalId = std::stoi(instanceTopologyNodeReplicasReplicasItem["ZoneLogicalId"].asString());
		if(!instanceTopologyNodeReplicasReplicasItem["ReplicaType"].isNull())
			replicasItemObject.replicaType = instanceTopologyNodeReplicasReplicasItem["ReplicaType"].asString();
		if(!instanceTopologyNodeReplicasReplicasItem["Status"].isNull())
			replicasItemObject.status = instanceTopologyNodeReplicasReplicasItem["Status"].asString();
		if(!instanceTopologyNodeReplicasReplicasItem["ReadOnlyReplicaType"].isNull())
			replicasItemObject.readOnlyReplicaType = instanceTopologyNodeReplicasReplicasItem["ReadOnlyReplicaType"].asString();
		if(!instanceTopologyNodeReplicasReplicasItem["OnlineNodeNum"].isNull())
			replicasItemObject.onlineNodeNum = std::stol(instanceTopologyNodeReplicasReplicasItem["OnlineNodeNum"].asString());
		auto replicaResourceNode = value["ReplicaResource"];
		auto memory2Node = replicaResourceNode["Memory"];
		if(!memory2Node["UsedMemory"].isNull())
			replicasItemObject.replicaResource.memory2.usedMemory = std::stol(memory2Node["UsedMemory"].asString());
		if(!memory2Node["TotalMemory"].isNull())
			replicasItemObject.replicaResource.memory2.totalMemory = std::stol(memory2Node["TotalMemory"].asString());
		auto diskSize3Node = replicaResourceNode["DiskSize"];
		if(!diskSize3Node["UsedDiskSize"].isNull())
			replicasItemObject.replicaResource.diskSize3.usedDiskSize = std::stof(diskSize3Node["UsedDiskSize"].asString());
		if(!diskSize3Node["TotalDiskSize"].isNull())
			replicasItemObject.replicaResource.diskSize3.totalDiskSize = std::stol(diskSize3Node["TotalDiskSize"].asString());
		auto cpu4Node = replicaResourceNode["Cpu"];
		if(!cpu4Node["TotalCpu"].isNull())
			replicasItemObject.replicaResource.cpu4.totalCpu = std::stoi(cpu4Node["TotalCpu"].asString());
		if(!cpu4Node["UsedCpu"].isNull())
			replicasItemObject.replicaResource.cpu4.usedCpu = std::stoi(cpu4Node["UsedCpu"].asString());
		instanceTopology_.replicas.push_back(replicasItemObject);
	}

}

DescribeInstanceTopologyResult::InstanceTopology DescribeInstanceTopologyResult::getInstanceTopology()const
{
	return instanceTopology_;
}

