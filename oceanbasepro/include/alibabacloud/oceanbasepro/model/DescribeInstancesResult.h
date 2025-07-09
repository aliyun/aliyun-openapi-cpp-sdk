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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeInstancesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Resource
					{
						struct Cpu
						{
							double unitCpu;
							double totalCpu;
							double usedCpu;
							double originalTotalCpu;
						};
						struct Memory
						{
							long usedMemory;
							long unitMemory;
							double totalMemory;
							double originalTotalMemory;
						};
						struct DiskSize
						{
							double originalTotalDiskSize;
							long usedDiskSize;
							double unitDiskSize;
							double totalDiskSize;
						};
						struct CapacityUnit
						{
							int usedCapacityUnit;
							int maxCapacityUnit;
							int minCapacityUnit;
						};
						CapacityUnit capacityUnit;
						long unitCount;
						Memory memory;
						DiskSize diskSize;
						Cpu cpu;
					};
					struct DataDiskAutoScaleConfig
					{
						double upperbound;
						double scaleStepInNormal;
						double upperMergeThreshold;
						double scaleStepInMerge;
						std::string upperScaleStrategy;
						long maxDiskSize;
						double upperThreshold;
						bool autoScale;
					};
					struct MigrationInfo
					{
						struct CheckResult
						{
							std::string subModule;
							std::string codeName;
							std::string moduleName;
							std::string level;
							std::string module;
							std::string code;
							std::string subModuleName;
						};
						CheckResult checkResult;
						bool migratable;
					};
					std::string deployType;
					MigrationInfo migrationInfo;
					std::string resourceGroupId;
					std::string specType;
					bool enableUpgradeNodes;
					long usedDiskSize;
					int cpu;
					bool inTempCapacityStatus;
					std::vector<std::string> availableZones;
					std::string diskType;
					std::string deployMode;
					std::string cpuArchitecture;
					std::string version;
					std::string commodityCode;
					long diskSize;
					std::string instanceRole;
					std::string instanceType;
					std::string maintainTime;
					std::string obRpmVersion;
					std::string replicaMode;
					std::string instanceId;
					std::string createTime;
					Resource resource;
					std::string instanceClass;
					bool migratable;
					std::string payType;
					int iops;
					std::string instanceName;
					std::string series;
					DataDiskAutoScaleConfig dataDiskAutoScaleConfig;
					std::string vpcId;
					long mem;
					std::string state;
					bool enableReadOnlyReplicaManagement;
					int expireSeconds;
					std::string expireTime;
				};


				DescribeInstancesResult();
				explicit DescribeInstancesResult(const std::string &payload);
				~DescribeInstancesResult();
				std::vector<Data> getInstances()const;
				int getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> instances_;
				int totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEINSTANCESRESULT_H_