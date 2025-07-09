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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCERESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCERESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeInstanceResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct Resource
					{
						struct Cpu
						{
							long unitCpu;
							long totalCpu;
							long usedCpu;
							long originalTotalCpu;
						};
						struct Memory
						{
							long usedMemory;
							long unitMemory;
							long totalMemory;
							long originalTotalMemory;
						};
						struct DiskSize
						{
							double dataUsedSize;
							long originalTotalDiskSize;
							long usedDiskSize;
							std::vector<std::string> maxDiskUsedObServer;
							double maxDiskUsedPercent;
							double maxDiskSize;
							long unitDiskSize;
							long totalDiskSize;
						};
						struct LogDiskSize
						{
							std::string maxLogAssignedPercent;
							std::string logAssignedSize;
							int originalTotalDiskSize;
							std::vector<std::string> maxLogAssignedObServer;
							long unitDiskSize;
							long totalDiskSize;
						};
						struct CapacityUnit
						{
							std::string usedCapacityUnit;
							int maxCapacityUnit;
							int minCapacityUnit;
						};
						CapacityUnit capacityUnit;
						long unitCount;
						Memory memory;
						DiskSize diskSize;
						Cpu cpu;
						LogDiskSize logDiskSize;
					};
					struct TenantCreatable
					{
						bool enableCreateTenant;
						std::string disableCreateTenantReason;
					};
					struct DataDiskAutoScaleConfig
					{
						long upperbound;
						std::string upperScaleStep;
						long scaleStepInNormal;
						long upperMergeThreshold;
						long scaleStepInMerge;
						std::string upperScaleStrategy;
						long maxDiskSize;
						long upperThreshold;
						bool autoScale;
					};
					struct ReadOnlyResource
					{
						struct Cpu1
						{
							long unitCpu;
							long totalCpu;
							long usedCpu;
							long originalTotalCpu;
						};
						struct Memory2
						{
							long usedMemory;
							long unitMemory;
							long totalMemory;
							long originalTotalMemory;
						};
						struct DiskSize3
						{
							double dataUsedSize;
							long originalTotalDiskSize;
							long usedDiskSize;
							double maxDiskUsedPercent;
							double maxDiskSize;
							long unitDiskSize;
							long totalDiskSize;
							std::vector<std::string> maxDiskUsedObServer6;
						};
						struct LogDiskSize4
						{
							std::string maxLogAssignedPercent;
							std::string logAssignedSize;
							long unitDiskSize;
							long totalDiskSize;
							std::vector<std::string> maxLogAssignedObServer7;
						};
						struct CapacityUnit5
						{
							std::string usedCapacityUnit;
							int maxCapacityUnit;
							int minCapacityUnit;
						};
						LogDiskSize4 logDiskSize4;
						long unitCount;
						Cpu1 cpu1;
						DiskSize3 diskSize3;
						CapacityUnit5 capacityUnit5;
						Memory2 memory2;
					};
					std::string deployType;
					std::string proxyServiceStatus;
					ReadOnlyResource readOnlyResource;
					std::string nodeNum;
					bool enableIsolationOptimization;
					std::string dataMergeTime;
					std::string specType;
					bool inTempCapacityStatus;
					bool enableReadOnlyReplica;
					std::string primaryInstance;
					bool allowModifyInternetAddressConnectionLimit;
					bool allowCreateProxySqlFirewallRule;
					bool isTrustEcs;
					std::string proxyClusterId;
					bool isLatestObVersion;
					std::vector<std::string> availableZones;
					std::vector<std::string> zones;
					std::string diskType;
					int sharedUnitNumLimit;
					std::string deployMode;
					std::string version;
					std::string cpuArchitecture;
					bool isolationOptimization;
					std::string unitSpec;
					std::string instanceRole;
					std::string maintainTime;
					std::string obRpmVersion;
					std::string replicaMode;
					std::string status;
					bool autoUpgradeObVersion;
					std::string instanceId;
					std::string primaryRegion;
					int exclusiveUnitNumLimit;
					std::string createTime;
					Resource resource;
					std::string instanceClass;
					std::string payType;
					int iops;
					bool dataDiskAutoScale;
					bool enableProxyService;
					std::string instanceName;
					std::string series;
					DataDiskAutoScaleConfig dataDiskAutoScaleConfig;
					bool enableUpgradeLogDisk;
					bool autoRenewal;
					bool enableReadOnlyReplicaManagement;
					TenantCreatable tenantCreatable;
					std::string expireTime;
				};


				DescribeInstanceResult();
				explicit DescribeInstanceResult(const std::string &payload);
				~DescribeInstanceResult();
				Instance getInstance()const;

			protected:
				void parse(const std::string &payload);
			private:
				Instance instance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCERESULT_H_