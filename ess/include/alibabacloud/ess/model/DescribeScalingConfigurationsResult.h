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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingConfigurationsResult : public ServiceResult
			{
			public:
				struct ScalingConfiguration
				{
					struct SchedulerOptions
					{
						std::string managedPrivateSpaceId;
					};
					struct SecurityOptions
					{
						std::string confidentialComputingMode;
					};
					struct ResourcePoolOptions
					{
						std::string strategy;
						std::vector<std::string> privatePoolIds;
					};
					struct DataDisk
					{
						bool burstingEnabled;
						std::string description;
						std::string category;
						std::string kMSKeyId;
						std::vector<std::string> categories;
						std::string performanceLevel;
						std::string device;
						int size;
						std::string encrypted;
						bool deleteWithInstance;
						std::string autoSnapshotPolicyId;
						std::string diskName;
						long provisionedIops;
						std::string snapshotId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct SpotPriceModel
					{
						float priceLimit;
						std::string instanceType;
					};
					struct InstancePatternInfo
					{
						float memory;
						std::vector<std::string> physicalProcessorModels;
						int minimumEniQuantity;
						std::vector<std::string> excludedInstanceTypes;
						int minimumBaselineCredit;
						float maximumMemorySize;
						int cores;
						int minimumCpuCoreCount;
						std::vector<std::string> cpuArchitectures;
						int maximumCpuCoreCount;
						int minimumEniPrivateIpAddressQuantity;
						std::vector<std::string> gpuSpecs;
						std::vector<std::string> instanceCategories;
						std::string instanceFamilyLevel;
						int maximumGpuAmount;
						float minimumMemorySize;
						int minimumEniIpv6AddressQuantity;
						int minimumGpuAmount;
						float maxPrice;
						std::string burstablePerformance;
						std::vector<std::string> instanceTypeFamilies;
						int minimumInitialCredit;
						std::vector<std::string> architectures;
					};
					struct CustomPriority
					{
						std::string instanceType;
						std::string vswitchId;
					};
					struct NetworkInterface
					{
						std::string networkInterfaceTrafficMode;
						std::vector<std::string> securityGroupIds1;
						int ipv6AddressCount;
						std::string instanceType;
					};
					std::string scalingConfigurationName;
					std::string dedicatedHostId;
					std::vector<std::string> weightedCapacities;
					std::vector<ScalingConfiguration::DataDisk> dataDisks;
					std::string resourceGroupId;
					std::string systemDiskDescription;
					bool imageOptionsLoginAsNonRoot;
					int memory;
					long systemDiskProvisionedIops;
					int cpu;
					std::string systemDiskEncryptAlgorithm;
					std::string ramRoleName;
					std::string systemDiskPerformanceLevel;
					std::string imageId;
					std::string storageSetId;
					std::vector<ScalingConfiguration::Tag> tags;
					std::string hostName;
					int loadBalancerWeight;
					std::string scalingGroupId;
					std::string systemDiskKMSKeyId;
					std::string imageFamily;
					std::string privatePoolOptionsMatchCriteria;
					bool deletionProtection;
					std::string httpEndpoint;
					std::vector<std::string> securityGroupIds;
					std::string privatePoolOptionsId;
					std::string internetChargeType;
					std::string deploymentSetId;
					std::string instanceName;
					std::string spotInterruptionBehavior;
					int internetMaxBandwidthOut;
					std::vector<ScalingConfiguration::InstancePatternInfo> instancePatternInfos;
					SecurityOptions securityOptions;
					std::string creationTime;
					std::string affinity;
					std::string scalingConfigurationId;
					std::string securityEnhancementStrategy;
					std::string dedicatedHostClusterId;
					std::string tenancy;
					std::string imageOwnerAlias;
					int systemDiskSize;
					std::string userData;
					int spotDuration;
					std::string lifecycleState;
					int storageSetPartitionNumber;
					bool systemDiskEncrypted;
					std::vector<ScalingConfiguration::CustomPriority> customPriorities;
					std::string systemDiskAutoSnapshotPolicyId;
					std::string systemDiskName;
					int ipv6AddressCount;
					std::vector<ScalingConfiguration::NetworkInterface> networkInterfaces;
					std::vector<std::string> systemDiskCategories;
					SchedulerOptions schedulerOptions;
					std::vector<ScalingConfiguration::SpotPriceModel> spotPriceLimit;
					std::vector<std::string> instanceTypes;
					std::string instanceType;
					std::string spotStrategy;
					bool passwordInherit;
					std::string keyPairName;
					ResourcePoolOptions resourcePoolOptions;
					std::string ioOptimized;
					std::string zoneId;
					std::string hpcClusterId;
					bool passwordSetted;
					std::string securityGroupId;
					std::string systemDiskCategory;
					bool systemDiskBurstingEnabled;
					std::string imageName;
					std::string httpTokens;
					int internetMaxBandwidthIn;
					std::string instanceGeneration;
					std::string instanceDescription;
					std::string creditSpecification;
				};


				DescribeScalingConfigurationsResult();
				explicit DescribeScalingConfigurationsResult(const std::string &payload);
				~DescribeScalingConfigurationsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ScalingConfiguration> getScalingConfigurations()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ScalingConfiguration> scalingConfigurations_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGCONFIGURATIONSRESULT_H_