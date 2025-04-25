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

#include <alibabacloud/ess/model/DescribeScalingConfigurationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingConfigurationsResult::DescribeScalingConfigurationsResult() :
	ServiceResult()
{}

DescribeScalingConfigurationsResult::DescribeScalingConfigurationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingConfigurationsResult::~DescribeScalingConfigurationsResult()
{}

void DescribeScalingConfigurationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScalingConfigurationsNode = value["ScalingConfigurations"]["ScalingConfiguration"];
	for (auto valueScalingConfigurationsScalingConfiguration : allScalingConfigurationsNode)
	{
		ScalingConfiguration scalingConfigurationsObject;
		if(!valueScalingConfigurationsScalingConfiguration["DeploymentSetId"].isNull())
			scalingConfigurationsObject.deploymentSetId = valueScalingConfigurationsScalingConfiguration["DeploymentSetId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["CreationTime"].isNull())
			scalingConfigurationsObject.creationTime = valueScalingConfigurationsScalingConfiguration["CreationTime"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingConfigurationName"].isNull())
			scalingConfigurationsObject.scalingConfigurationName = valueScalingConfigurationsScalingConfiguration["ScalingConfigurationName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskDescription"].isNull())
			scalingConfigurationsObject.systemDiskDescription = valueScalingConfigurationsScalingConfiguration["SystemDiskDescription"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["KeyPairName"].isNull())
			scalingConfigurationsObject.keyPairName = valueScalingConfigurationsScalingConfiguration["KeyPairName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SecurityGroupId"].isNull())
			scalingConfigurationsObject.securityGroupId = valueScalingConfigurationsScalingConfiguration["SecurityGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["PrivatePoolOptions.Id"].isNull())
			scalingConfigurationsObject.privatePoolOptionsId = valueScalingConfigurationsScalingConfiguration["PrivatePoolOptions.Id"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskAutoSnapshotPolicyId"].isNull())
			scalingConfigurationsObject.systemDiskAutoSnapshotPolicyId = valueScalingConfigurationsScalingConfiguration["SystemDiskAutoSnapshotPolicyId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SpotStrategy"].isNull())
			scalingConfigurationsObject.spotStrategy = valueScalingConfigurationsScalingConfiguration["SpotStrategy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingGroupId"].isNull())
			scalingConfigurationsObject.scalingGroupId = valueScalingConfigurationsScalingConfiguration["ScalingGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["Affinity"].isNull())
			scalingConfigurationsObject.affinity = valueScalingConfigurationsScalingConfiguration["Affinity"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["Tenancy"].isNull())
			scalingConfigurationsObject.tenancy = valueScalingConfigurationsScalingConfiguration["Tenancy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskSize"].isNull())
			scalingConfigurationsObject.systemDiskSize = std::stoi(valueScalingConfigurationsScalingConfiguration["SystemDiskSize"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["Ipv6AddressCount"].isNull())
			scalingConfigurationsObject.ipv6AddressCount = std::stoi(valueScalingConfigurationsScalingConfiguration["Ipv6AddressCount"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SpotDuration"].isNull())
			scalingConfigurationsObject.spotDuration = std::stoi(valueScalingConfigurationsScalingConfiguration["SpotDuration"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["LifecycleState"].isNull())
			scalingConfigurationsObject.lifecycleState = valueScalingConfigurationsScalingConfiguration["LifecycleState"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InstanceName"].isNull())
			scalingConfigurationsObject.instanceName = valueScalingConfigurationsScalingConfiguration["InstanceName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SecurityEnhancementStrategy"].isNull())
			scalingConfigurationsObject.securityEnhancementStrategy = valueScalingConfigurationsScalingConfiguration["SecurityEnhancementStrategy"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["UserData"].isNull())
			scalingConfigurationsObject.userData = valueScalingConfigurationsScalingConfiguration["UserData"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["PrivatePoolOptions.MatchCriteria"].isNull())
			scalingConfigurationsObject.privatePoolOptionsMatchCriteria = valueScalingConfigurationsScalingConfiguration["PrivatePoolOptions.MatchCriteria"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["DedicatedHostId"].isNull())
			scalingConfigurationsObject.dedicatedHostId = valueScalingConfigurationsScalingConfiguration["DedicatedHostId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InstanceGeneration"].isNull())
			scalingConfigurationsObject.instanceGeneration = valueScalingConfigurationsScalingConfiguration["InstanceGeneration"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["HpcClusterId"].isNull())
			scalingConfigurationsObject.hpcClusterId = valueScalingConfigurationsScalingConfiguration["HpcClusterId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["PasswordInherit"].isNull())
			scalingConfigurationsObject.passwordInherit = valueScalingConfigurationsScalingConfiguration["PasswordInherit"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["Memory"].isNull())
			scalingConfigurationsObject.memory = std::stoi(valueScalingConfigurationsScalingConfiguration["Memory"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["ImageId"].isNull())
			scalingConfigurationsObject.imageId = valueScalingConfigurationsScalingConfiguration["ImageId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ImageFamily"].isNull())
			scalingConfigurationsObject.imageFamily = valueScalingConfigurationsScalingConfiguration["ImageFamily"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ImageOwnerAlias"].isNull())
			scalingConfigurationsObject.imageOwnerAlias = valueScalingConfigurationsScalingConfiguration["ImageOwnerAlias"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["LoadBalancerWeight"].isNull())
			scalingConfigurationsObject.loadBalancerWeight = std::stoi(valueScalingConfigurationsScalingConfiguration["LoadBalancerWeight"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskCategory"].isNull())
			scalingConfigurationsObject.systemDiskCategory = valueScalingConfigurationsScalingConfiguration["SystemDiskCategory"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["HostName"].isNull())
			scalingConfigurationsObject.hostName = valueScalingConfigurationsScalingConfiguration["HostName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskName"].isNull())
			scalingConfigurationsObject.systemDiskName = valueScalingConfigurationsScalingConfiguration["SystemDiskName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthOut"].isNull())
			scalingConfigurationsObject.internetMaxBandwidthOut = std::stoi(valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthOut"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthIn"].isNull())
			scalingConfigurationsObject.internetMaxBandwidthIn = std::stoi(valueScalingConfigurationsScalingConfiguration["InternetMaxBandwidthIn"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["InstanceType"].isNull())
			scalingConfigurationsObject.instanceType = valueScalingConfigurationsScalingConfiguration["InstanceType"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InstanceDescription"].isNull())
			scalingConfigurationsObject.instanceDescription = valueScalingConfigurationsScalingConfiguration["InstanceDescription"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["IoOptimized"].isNull())
			scalingConfigurationsObject.ioOptimized = valueScalingConfigurationsScalingConfiguration["IoOptimized"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["RamRoleName"].isNull())
			scalingConfigurationsObject.ramRoleName = valueScalingConfigurationsScalingConfiguration["RamRoleName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDiskPerformanceLevel"].isNull())
			scalingConfigurationsObject.systemDiskPerformanceLevel = valueScalingConfigurationsScalingConfiguration["SystemDiskPerformanceLevel"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["Cpu"].isNull())
			scalingConfigurationsObject.cpu = std::stoi(valueScalingConfigurationsScalingConfiguration["Cpu"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["ResourceGroupId"].isNull())
			scalingConfigurationsObject.resourceGroupId = valueScalingConfigurationsScalingConfiguration["ResourceGroupId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ZoneId"].isNull())
			scalingConfigurationsObject.zoneId = valueScalingConfigurationsScalingConfiguration["ZoneId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["InternetChargeType"].isNull())
			scalingConfigurationsObject.internetChargeType = valueScalingConfigurationsScalingConfiguration["InternetChargeType"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ImageName"].isNull())
			scalingConfigurationsObject.imageName = valueScalingConfigurationsScalingConfiguration["ImageName"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["ScalingConfigurationId"].isNull())
			scalingConfigurationsObject.scalingConfigurationId = valueScalingConfigurationsScalingConfiguration["ScalingConfigurationId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["CreditSpecification"].isNull())
			scalingConfigurationsObject.creditSpecification = valueScalingConfigurationsScalingConfiguration["CreditSpecification"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SpotInterruptionBehavior"].isNull())
			scalingConfigurationsObject.spotInterruptionBehavior = valueScalingConfigurationsScalingConfiguration["SpotInterruptionBehavior"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDisk.Encrypted"].isNull())
			scalingConfigurationsObject.systemDiskEncrypted = valueScalingConfigurationsScalingConfiguration["SystemDisk.Encrypted"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["SystemDisk.KMSKeyId"].isNull())
			scalingConfigurationsObject.systemDiskKMSKeyId = valueScalingConfigurationsScalingConfiguration["SystemDisk.KMSKeyId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDisk.EncryptAlgorithm"].isNull())
			scalingConfigurationsObject.systemDiskEncryptAlgorithm = valueScalingConfigurationsScalingConfiguration["SystemDisk.EncryptAlgorithm"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["SystemDisk.ProvisionedIops"].isNull())
			scalingConfigurationsObject.systemDiskProvisionedIops = std::stol(valueScalingConfigurationsScalingConfiguration["SystemDisk.ProvisionedIops"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["SystemDisk.BurstingEnabled"].isNull())
			scalingConfigurationsObject.systemDiskBurstingEnabled = valueScalingConfigurationsScalingConfiguration["SystemDisk.BurstingEnabled"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["ImageOptions.LoginAsNonRoot"].isNull())
			scalingConfigurationsObject.imageOptionsLoginAsNonRoot = valueScalingConfigurationsScalingConfiguration["ImageOptions.LoginAsNonRoot"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["DeletionProtection"].isNull())
			scalingConfigurationsObject.deletionProtection = valueScalingConfigurationsScalingConfiguration["DeletionProtection"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["StorageSetId"].isNull())
			scalingConfigurationsObject.storageSetId = valueScalingConfigurationsScalingConfiguration["StorageSetId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["StorageSetPartitionNumber"].isNull())
			scalingConfigurationsObject.storageSetPartitionNumber = std::stoi(valueScalingConfigurationsScalingConfiguration["StorageSetPartitionNumber"].asString());
		if(!valueScalingConfigurationsScalingConfiguration["DedicatedHostClusterId"].isNull())
			scalingConfigurationsObject.dedicatedHostClusterId = valueScalingConfigurationsScalingConfiguration["DedicatedHostClusterId"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["PasswordSetted"].isNull())
			scalingConfigurationsObject.passwordSetted = valueScalingConfigurationsScalingConfiguration["PasswordSetted"].asString() == "true";
		if(!valueScalingConfigurationsScalingConfiguration["HttpEndpoint"].isNull())
			scalingConfigurationsObject.httpEndpoint = valueScalingConfigurationsScalingConfiguration["HttpEndpoint"].asString();
		if(!valueScalingConfigurationsScalingConfiguration["HttpTokens"].isNull())
			scalingConfigurationsObject.httpTokens = valueScalingConfigurationsScalingConfiguration["HttpTokens"].asString();
		auto allDataDisksNode = valueScalingConfigurationsScalingConfiguration["DataDisks"]["DataDisk"];
		for (auto valueScalingConfigurationsScalingConfigurationDataDisksDataDisk : allDataDisksNode)
		{
			ScalingConfiguration::DataDisk dataDisksObject;
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["PerformanceLevel"].isNull())
				dataDisksObject.performanceLevel = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["PerformanceLevel"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Description"].isNull())
				dataDisksObject.description = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Description"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["SnapshotId"].isNull())
				dataDisksObject.snapshotId = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["SnapshotId"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Device"].isNull())
				dataDisksObject.device = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Device"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Size"].isNull())
				dataDisksObject.size = std::stoi(valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Size"].asString());
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["DiskName"].isNull())
				dataDisksObject.diskName = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["DiskName"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["AutoSnapshotPolicyId"].isNull())
				dataDisksObject.autoSnapshotPolicyId = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["AutoSnapshotPolicyId"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Category"].isNull())
				dataDisksObject.category = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Category"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["KMSKeyId"].isNull())
				dataDisksObject.kMSKeyId = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["KMSKeyId"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["DeleteWithInstance"].isNull())
				dataDisksObject.deleteWithInstance = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["DeleteWithInstance"].asString() == "true";
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Encrypted"].isNull())
				dataDisksObject.encrypted = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["Encrypted"].asString();
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["ProvisionedIops"].isNull())
				dataDisksObject.provisionedIops = std::stol(valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["ProvisionedIops"].asString());
			if(!valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["BurstingEnabled"].isNull())
				dataDisksObject.burstingEnabled = valueScalingConfigurationsScalingConfigurationDataDisksDataDisk["BurstingEnabled"].asString() == "true";
			auto allCategories = value["Categories"]["Category"];
			for (auto value : allCategories)
				dataDisksObject.categories.push_back(value.asString());
			scalingConfigurationsObject.dataDisks.push_back(dataDisksObject);
		}
		auto allTagsNode = valueScalingConfigurationsScalingConfiguration["Tags"]["Tag"];
		for (auto valueScalingConfigurationsScalingConfigurationTagsTag : allTagsNode)
		{
			ScalingConfiguration::Tag tagsObject;
			if(!valueScalingConfigurationsScalingConfigurationTagsTag["Key"].isNull())
				tagsObject.key = valueScalingConfigurationsScalingConfigurationTagsTag["Key"].asString();
			if(!valueScalingConfigurationsScalingConfigurationTagsTag["Value"].isNull())
				tagsObject.value = valueScalingConfigurationsScalingConfigurationTagsTag["Value"].asString();
			scalingConfigurationsObject.tags.push_back(tagsObject);
		}
		auto allSpotPriceLimitNode = valueScalingConfigurationsScalingConfiguration["SpotPriceLimit"]["SpotPriceModel"];
		for (auto valueScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel : allSpotPriceLimitNode)
		{
			ScalingConfiguration::SpotPriceModel spotPriceLimitObject;
			if(!valueScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel["InstanceType"].isNull())
				spotPriceLimitObject.instanceType = valueScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel["InstanceType"].asString();
			if(!valueScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel["PriceLimit"].isNull())
				spotPriceLimitObject.priceLimit = std::stof(valueScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel["PriceLimit"].asString());
			scalingConfigurationsObject.spotPriceLimit.push_back(spotPriceLimitObject);
		}
		auto allInstancePatternInfosNode = valueScalingConfigurationsScalingConfiguration["InstancePatternInfos"]["InstancePatternInfo"];
		for (auto valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo : allInstancePatternInfosNode)
		{
			ScalingConfiguration::InstancePatternInfo instancePatternInfosObject;
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaxPrice"].isNull())
				instancePatternInfosObject.maxPrice = std::stof(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaxPrice"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["Cores"].isNull())
				instancePatternInfosObject.cores = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["Cores"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["Memory"].isNull())
				instancePatternInfosObject.memory = std::stof(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["Memory"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["InstanceFamilyLevel"].isNull())
				instancePatternInfosObject.instanceFamilyLevel = valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["InstanceFamilyLevel"].asString();
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["BurstablePerformance"].isNull())
				instancePatternInfosObject.burstablePerformance = valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["BurstablePerformance"].asString();
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumCpuCoreCount"].isNull())
				instancePatternInfosObject.minimumCpuCoreCount = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumCpuCoreCount"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaximumCpuCoreCount"].isNull())
				instancePatternInfosObject.maximumCpuCoreCount = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaximumCpuCoreCount"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumEniQuantity"].isNull())
				instancePatternInfosObject.minimumEniQuantity = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumEniQuantity"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumEniPrivateIpAddressQuantity"].isNull())
				instancePatternInfosObject.minimumEniPrivateIpAddressQuantity = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumEniPrivateIpAddressQuantity"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumEniIpv6AddressQuantity"].isNull())
				instancePatternInfosObject.minimumEniIpv6AddressQuantity = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumEniIpv6AddressQuantity"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumInitialCredit"].isNull())
				instancePatternInfosObject.minimumInitialCredit = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumInitialCredit"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumBaselineCredit"].isNull())
				instancePatternInfosObject.minimumBaselineCredit = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumBaselineCredit"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumMemorySize"].isNull())
				instancePatternInfosObject.minimumMemorySize = std::stof(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumMemorySize"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaximumMemorySize"].isNull())
				instancePatternInfosObject.maximumMemorySize = std::stof(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaximumMemorySize"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumGpuAmount"].isNull())
				instancePatternInfosObject.minimumGpuAmount = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MinimumGpuAmount"].asString());
			if(!valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaximumGpuAmount"].isNull())
				instancePatternInfosObject.maximumGpuAmount = std::stoi(valueScalingConfigurationsScalingConfigurationInstancePatternInfosInstancePatternInfo["MaximumGpuAmount"].asString());
			auto allArchitectures = value["Architectures"]["Architecture"];
			for (auto value : allArchitectures)
				instancePatternInfosObject.architectures.push_back(value.asString());
			auto allExcludedInstanceTypes = value["ExcludedInstanceTypes"]["ExcludedInstanceType"];
			for (auto value : allExcludedInstanceTypes)
				instancePatternInfosObject.excludedInstanceTypes.push_back(value.asString());
			auto allInstanceTypeFamilies = value["InstanceTypeFamilies"]["InstanceTypeFamily"];
			for (auto value : allInstanceTypeFamilies)
				instancePatternInfosObject.instanceTypeFamilies.push_back(value.asString());
			auto allGpuSpecs = value["GpuSpecs"]["GpuSpec"];
			for (auto value : allGpuSpecs)
				instancePatternInfosObject.gpuSpecs.push_back(value.asString());
			auto allInstanceCategories = value["InstanceCategories"]["InstanceCategory"];
			for (auto value : allInstanceCategories)
				instancePatternInfosObject.instanceCategories.push_back(value.asString());
			auto allCpuArchitectures = value["CpuArchitectures"]["CpuArchitecture"];
			for (auto value : allCpuArchitectures)
				instancePatternInfosObject.cpuArchitectures.push_back(value.asString());
			auto allPhysicalProcessorModels = value["PhysicalProcessorModels"]["PhysicalProcessorModel"];
			for (auto value : allPhysicalProcessorModels)
				instancePatternInfosObject.physicalProcessorModels.push_back(value.asString());
			scalingConfigurationsObject.instancePatternInfos.push_back(instancePatternInfosObject);
		}
		auto allCustomPrioritiesNode = valueScalingConfigurationsScalingConfiguration["CustomPriorities"]["CustomPriority"];
		for (auto valueScalingConfigurationsScalingConfigurationCustomPrioritiesCustomPriority : allCustomPrioritiesNode)
		{
			ScalingConfiguration::CustomPriority customPrioritiesObject;
			if(!valueScalingConfigurationsScalingConfigurationCustomPrioritiesCustomPriority["InstanceType"].isNull())
				customPrioritiesObject.instanceType = valueScalingConfigurationsScalingConfigurationCustomPrioritiesCustomPriority["InstanceType"].asString();
			if(!valueScalingConfigurationsScalingConfigurationCustomPrioritiesCustomPriority["VswitchId"].isNull())
				customPrioritiesObject.vswitchId = valueScalingConfigurationsScalingConfigurationCustomPrioritiesCustomPriority["VswitchId"].asString();
			scalingConfigurationsObject.customPriorities.push_back(customPrioritiesObject);
		}
		auto allNetworkInterfacesNode = valueScalingConfigurationsScalingConfiguration["NetworkInterfaces"]["NetworkInterface"];
		for (auto valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface : allNetworkInterfacesNode)
		{
			ScalingConfiguration::NetworkInterface networkInterfacesObject;
			if(!valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface["InstanceType"].isNull())
				networkInterfacesObject.instanceType = valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface["InstanceType"].asString();
			if(!valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface["NetworkInterfaceTrafficMode"].isNull())
				networkInterfacesObject.networkInterfaceTrafficMode = valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface["NetworkInterfaceTrafficMode"].asString();
			if(!valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface["Ipv6AddressCount"].isNull())
				networkInterfacesObject.ipv6AddressCount = std::stoi(valueScalingConfigurationsScalingConfigurationNetworkInterfacesNetworkInterface["Ipv6AddressCount"].asString());
			auto allSecurityGroupIds1 = value["SecurityGroupIds"]["SecurityGroupId"];
			for (auto value : allSecurityGroupIds1)
				networkInterfacesObject.securityGroupIds1.push_back(value.asString());
			scalingConfigurationsObject.networkInterfaces.push_back(networkInterfacesObject);
		}
		auto schedulerOptionsNode = value["SchedulerOptions"];
		if(!schedulerOptionsNode["ManagedPrivateSpaceId"].isNull())
			scalingConfigurationsObject.schedulerOptions.managedPrivateSpaceId = schedulerOptionsNode["ManagedPrivateSpaceId"].asString();
		auto securityOptionsNode = value["SecurityOptions"];
		if(!securityOptionsNode["ConfidentialComputingMode"].isNull())
			scalingConfigurationsObject.securityOptions.confidentialComputingMode = securityOptionsNode["ConfidentialComputingMode"].asString();
		auto resourcePoolOptionsNode = value["ResourcePoolOptions"];
		if(!resourcePoolOptionsNode["Strategy"].isNull())
			scalingConfigurationsObject.resourcePoolOptions.strategy = resourcePoolOptionsNode["Strategy"].asString();
			auto allPrivatePoolIds = resourcePoolOptionsNode["PrivatePoolIds"]["PrivatePoolId"];
			for (auto value : allPrivatePoolIds)
				scalingConfigurationsObject.resourcePoolOptions.privatePoolIds.push_back(value.asString());
		auto allSystemDiskCategories = value["SystemDiskCategories"]["SystemDiskCategory"];
		for (auto value : allSystemDiskCategories)
			scalingConfigurationsObject.systemDiskCategories.push_back(value.asString());
		auto allWeightedCapacities = value["WeightedCapacities"]["WeightedCapacity"];
		for (auto value : allWeightedCapacities)
			scalingConfigurationsObject.weightedCapacities.push_back(value.asString());
		auto allInstanceTypes = value["InstanceTypes"]["InstanceType"];
		for (auto value : allInstanceTypes)
			scalingConfigurationsObject.instanceTypes.push_back(value.asString());
		auto allSecurityGroupIds = value["SecurityGroupIds"]["SecurityGroupId"];
		for (auto value : allSecurityGroupIds)
			scalingConfigurationsObject.securityGroupIds.push_back(value.asString());
		scalingConfigurations_.push_back(scalingConfigurationsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeScalingConfigurationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScalingConfigurationsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingConfigurationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeScalingConfigurationsResult::ScalingConfiguration> DescribeScalingConfigurationsResult::getScalingConfigurations()const
{
	return scalingConfigurations_;
}

