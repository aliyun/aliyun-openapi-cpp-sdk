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
		auto allTenantZonesNode = instanceTopologyNodeTenantsTenantsItem["TenantZones"]["TenantZonesItem"];
		for (auto instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem : allTenantZonesNode)
		{
			InstanceTopology::TenantsItem::TenantZonesItem tenantZonesObject;
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneRole"].isNull())
				tenantZonesObject.tenantZoneRole = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneRole"].asString();
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["IsPrimaryTenantZone"].isNull())
				tenantZonesObject.isPrimaryTenantZone = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["IsPrimaryTenantZone"].asString();
			if(!instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneId"].isNull())
				tenantZonesObject.tenantZoneId = instanceTopologyNodeTenantsTenantsItemTenantZonesTenantZonesItem["TenantZoneId"].asString();
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
			auto allNodeResourceNode = instanceTopologyNodeZonesZonesItemNodesNodesItem["NodeResource"]["NodeResourceItem"];
			for (auto instanceTopologyNodeZonesZonesItemNodesNodesItemNodeResourceNodeResourceItem : allNodeResourceNode)
			{
				InstanceTopology::ZonesItem::NodesItem::NodeResourceItem nodeResourceObject;
				auto cpuNode = value["Cpu"];
				if(!cpuNode["UsedCpu"].isNull())
					nodeResourceObject.cpu.usedCpu = std::stof(cpuNode["UsedCpu"].asString());
				if(!cpuNode["TotalCpu"].isNull())
					nodeResourceObject.cpu.totalCpu = std::stoi(cpuNode["TotalCpu"].asString());
				auto memoryNode = value["Memory"];
				if(!memoryNode["UsedMemory"].isNull())
					nodeResourceObject.memory.usedMemory = std::stof(memoryNode["UsedMemory"].asString());
				if(!memoryNode["TotalMemory"].isNull())
					nodeResourceObject.memory.totalMemory = std::stol(memoryNode["TotalMemory"].asString());
				auto diskSizeNode = value["DiskSize"];
				if(!diskSizeNode["TotalDiskSize"].isNull())
					nodeResourceObject.diskSize.totalDiskSize = diskSizeNode["TotalDiskSize"].asString();
				if(!diskSizeNode["UsedDiskSize"].isNull())
					nodeResourceObject.diskSize.usedDiskSize = diskSizeNode["UsedDiskSize"].asString();
				nodesObject.nodeResource.push_back(nodeResourceObject);
			}
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

}

DescribeInstanceTopologyResult::InstanceTopology DescribeInstanceTopologyResult::getInstanceTopology()const
{
	return instanceTopology_;
}

