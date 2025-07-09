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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeTenantResult : public ServiceResult
			{
			public:
				struct Tenant
				{
					struct TenantResource
					{
						struct Cpu
						{
							float unitCpu;
							float totalCpu;
							float usedCpu;
						};
						struct Memory
						{
							float usedMemory;
							float unitMemory;
							float totalMemory;
						};
						struct DiskSize
						{
							float usedDiskSize;
						};
						struct CapacityUnit
						{
							int usedCapacit;
							int maxCapacityUnit;
							int minCapacityUnit;
						};
						struct LogDiskSize
						{
							int totalLogDisk;
							int unitLogDisk;
						};
						CapacityUnit capacityUnit;
						Memory memory;
						int unitNum;
						DiskSize diskSize;
						Cpu cpu;
						LogDiskSize logDiskSize;
					};
					struct ReadOnlyResource
					{
						struct Cpu1
						{
							float unitCpu;
							float totalCpu;
							float usedCpu;
						};
						struct Memory2
						{
							float usedMemory;
							float unitMemory;
							float totalMemory;
						};
						struct DiskSize3
						{
							float usedDiskSize;
						};
						struct CapacityUnit4
						{
							int usedCapacit;
							int maxCapacityUnit;
							int minCapacityUnit;
						};
						struct LogDiskSize5
						{
							int totalLogDisk;
							int unitLogDisk;
						};
						LogDiskSize5 logDiskSize5;
						int unitNum;
						Cpu1 cpu1;
						DiskSize3 diskSize3;
						CapacityUnit4 capacityUnit4;
						Memory2 memory2;
					};
					struct TenantConnectionsItem
					{
						std::string intranetAddressStatus;
						std::vector<std::string> connectionZones;
						std::string internetAddress;
						std::string intranetAddressSlaveZoneId;
						long internetMaxConnectionNum;
						int internetPort;
						bool transactionSplit;
						bool enableTransactionSplit;
						std::string proxyClusterId;
						int intranetPort;
						long parallelQueryDegree;
						int internetSqlPort;
						int internetRpcPort;
						std::string connectionReplicaType;
						std::string internetAddressStatus;
						long maxConnectionNum;
						long maxConnectionLimit;
						std::string vSwitchId;
						std::string tenantEndpointId;
						std::string intranetAddressMasterZoneId;
						long internetMaxConnectionLimit;
						int intranetRpcPort;
						std::string odpVersion;
						std::string intranetAddress;
						std::string vpcId;
						std::vector<std::string> connectionLogicalZones;
						int intranetSqlPort;
						std::string addressType;
					};
					struct TenantZonesItem
					{
						struct TenantZoneReplicasItem
						{
							std::string readOnlyReplicaType;
							long zoneNodes;
							int zoneCopyId;
							std::string logicZoneName;
							std::string readOnlyCopyId;
							std::string zoneReplicaType;
							int fullCopyId;
						};
						std::string tenantZoneRole;
						std::vector<TenantZonesItem::TenantZoneReplicasItem> tenantZoneReplicas;
						std::string tenantZoneId;
						std::string region;
					};
					std::string deployType;
					std::string parameterTemplate;
					ReadOnlyResource readOnlyResource;
					std::string description;
					long maxParallelQueryDegree;
					std::string dataMergeTime;
					bool enableReadOnlyReplica;
					std::string masterIntranetAddressZone;
					std::vector<std::string> availableZones;
					std::string diskType;
					std::string primaryZoneDeployType;
					std::string deployMode;
					std::string version;
					std::vector<TenantZonesItem> tenantZones;
					std::string primaryZone;
					std::string instanceType;
					std::string tenantMode;
					int lowerCaseTableNames;
					std::string status;
					std::string recycleBinStatus;
					bool enableClogService;
					std::string tenantName;
					bool enableParallelQuery;
					std::string createTime;
					std::string clogServiceStatus;
					std::string charset;
					std::string payType;
					std::string odpVersion;
					int iops;
					std::string collation;
					bool enableInternetAddressService;
					bool enableReadWriteSplit;
					std::vector<TenantConnectionsItem> tenantConnections;
					std::string series;
					std::string tenantId;
					bool enableBinlogService;
					std::string timeZone;
					TenantResource tenantResource;
					std::string vpcId;
					std::string tenantMaxConnections;
				};


				DescribeTenantResult();
				explicit DescribeTenantResult(const std::string &payload);
				~DescribeTenantResult();
				Tenant getTenant()const;

			protected:
				void parse(const std::string &payload);
			private:
				Tenant tenant_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBETENANTRESULT_H_