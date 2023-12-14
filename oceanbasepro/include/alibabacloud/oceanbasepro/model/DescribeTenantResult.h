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
					struct TenantConnectionsItem
					{
						std::string intranetAddressStatus;
						std::vector<std::string> connectionZones;
						std::string internetAddress;
						std::string intranetAddressSlaveZoneId;
						std::string internetAddressStatus;
						long maxConnectionNum;
						std::string vSwitchId;
						std::string tenantEndpointId;
						std::string intranetAddressMasterZoneId;
						int internetPort;
						bool transactionSplit;
						bool enableTransactionSplit;
						int intranetPort;
						long parallelQueryDegree;
						std::string intranetAddress;
						std::string vpcId;
						std::string addressType;
					};
					struct TenantZonesItem
					{
						std::string tenantZoneRole;
						std::string tenantZoneId;
						std::string region;
					};
					std::string deployType;
					std::string description;
					long maxParallelQueryDegree;
					std::string masterIntranetAddressZone;
					std::vector<std::string> availableZones;
					std::string diskType;
					std::string primaryZoneDeployType;
					std::string deployMode;
					std::vector<TenantZonesItem> tenantZones;
					std::string primaryZone;
					std::string instanceType;
					std::string tenantMode;
					std::string status;
					bool enableClogService;
					std::string tenantName;
					bool enableParallelQuery;
					std::string createTime;
					std::string clogServiceStatus;
					std::string charset;
					std::string payType;
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