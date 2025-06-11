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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCETOPOLOGYRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCETOPOLOGYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeInstanceTopologyResult : public ServiceResult
			{
			public:
				struct InstanceTopology
				{
					struct TenantsItem
					{
						struct TenantZonesItem
						{
							struct UnitsItem
							{
								float unitCpu;
								long unitDataSize;
								std::string unitId;
								float unitMemory;
								std::string replicaType;
								bool enableMigrateUnit;
								bool enableCancelMigrateUnit;
								std::string nodeId;
								std::string unitStatus;
								bool manualMigrate;
							};
							std::string readOnlyReplicaType;
							std::string tenantZoneRole;
							std::string replicaType;
							bool isPrimaryTenantZone;
							std::string tenantZoneId;
							std::string logicalZone;
							std::vector<TenantZonesItem::UnitsItem> units;
						};
						float tenantDiskSize;
						std::string tenantName;
						std::string primaryZoneDeployType;
						std::string tenantId;
						std::string tenantStatus;
						float tenantMemory;
						std::vector<TenantsItem::TenantZonesItem> tenantZones;
						int tenantUnitNum;
						float tenantUnitMemory;
						float tenantUnitCpu;
						float tenantCpu;
						std::string tenantDeployType;
						std::string tenantMode;
					};
					struct ZonesItem
					{
						struct ZoneResource
						{
							struct DiskSize1
							{
								std::vector<std::string> maxDiskUsedObServer;
								double maxDiskUsedPercent;
							};
							DiskSize1 diskSize1;
						};
						struct NodesItem
						{
							struct NodeResource
							{
								struct Cpu
								{
									int totalCpu;
									float usedCpu;
								};
								struct Memory
								{
									float usedMemory;
									long totalMemory;
								};
								struct DiskSize
								{
									double usedDiskSize;
									double totalDiskSize;
								};
								Memory memory;
								DiskSize diskSize;
								Cpu cpu;
							};
							NodeResource nodeResource;
							std::string readOnlyReplicaType;
							std::string replicaType;
							std::string nodeId;
							std::string logicalZone;
							long readOnlyCopyId;
							std::string nodeStatus;
							long fullCopyId;
							long nodeCopyId;
						};
						std::string zoneId;
						ZoneResource zoneResource;
						std::string region;
						std::string zoneDisk;
						std::vector<ZonesItem::NodesItem> nodes;
					};
					struct ReplicasItem
					{
						struct ReplicaResource
						{
							struct Memory2
							{
								long usedMemory;
								long totalMemory;
							};
							struct DiskSize3
							{
								float usedDiskSize;
								long totalDiskSize;
							};
							struct Cpu4
							{
								int totalCpu;
								int usedCpu;
							};
							DiskSize3 diskSize3;
							Memory2 memory2;
							Cpu4 cpu4;
						};
						int zoneLogicalId;
						std::string status;
						std::string readOnlyReplicaType;
						ReplicaResource replicaResource;
						int nodeNum;
						std::string replicaType;
						std::string logicalZone;
						std::string zoneRegionName;
						long onlineNodeNum;
						std::string zoneLogicalName;
					};
					std::vector<TenantsItem> tenants;
					std::vector<ReplicasItem> replicas;
					std::vector<ZonesItem> zones;
				};


				DescribeInstanceTopologyResult();
				explicit DescribeInstanceTopologyResult(const std::string &payload);
				~DescribeInstanceTopologyResult();
				InstanceTopology getInstanceTopology()const;

			protected:
				void parse(const std::string &payload);
			private:
				InstanceTopology instanceTopology_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCETOPOLOGYRESULT_H_