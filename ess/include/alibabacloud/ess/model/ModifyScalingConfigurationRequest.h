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

#ifndef ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGCONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGCONFIGURATIONREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT ModifyScalingConfigurationRequest : public RpcServiceRequest {
public:
	struct SecurityOptions {
		std::string confidentialComputingMode;
	};
	struct SpotPriceLimit {
		std::string instanceType;
		float priceLimit;
	};
	struct CustomPriorities {
		std::string vswitchId;
		std::string instanceType;
	};
	struct CpuOptions {
		std::string string;
		std::vector<std::string> accelerators;
	};
	struct InstancePatternInfo {
		float memory;
		int maximumCpuCoreCount;
		float maxPrice;
		int minimumGpuAmount;
		int maximumGpuAmount;
		float maximumMemorySize;
		int minimumInitialCredit;
		int minimumEniIpv6AddressQuantity;
		int minimumEniPrivateIpAddressQuantity;
		std::string burstablePerformance;
		int minimumCpuCoreCount;
		int minimumEniQuantity;
		float minimumMemorySize;
		int cores;
		std::string instanceFamilyLevel;
		int minimumBaselineCredit;
	};
	struct NetworkInterfaces {
		int ipv6AddressCount;
		std::string instanceType;
		std::string networkInterfaceTrafficMode;
	};
	struct ResourcePoolOptions {
		std::string strategy;
		std::string string;
		std::vector<std::string> privatePoolIds;
	};
	struct DataDisk {
		std::string snapshotId;
		std::string performanceLevel;
		std::string autoSnapshotPolicyId;
		std::string description;
		bool burstingEnabled;
		std::string diskName;
		long provisionedIops;
		std::string encrypted;
		int size;
		std::string category;
		std::string kMSKeyId;
		std::string device;
		bool deleteWithInstance;
	};
	struct InstanceTypeOverride {
		int weightedCapacity;
		std::string instanceType;
	};
	ModifyScalingConfigurationRequest();
	~ModifyScalingConfigurationRequest();
	std::string getHpcClusterId() const;
	void setHpcClusterId(const std::string &hpcClusterId);
	SecurityOptions getSecurityOptions() const;
	void setSecurityOptions(const SecurityOptions &securityOptions);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::vector<SpotPriceLimit> getSpotPriceLimit() const;
	void setSpotPriceLimit(const std::vector<SpotPriceLimit> &spotPriceLimit);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPrivatePoolOptionsMatchCriteria() const;
	void setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getInstanceDescription() const;
	void setInstanceDescription(const std::string &instanceDescription);
	int getStorageSetPartitionNumber() const;
	void setStorageSetPartitionNumber(int storageSetPartitionNumber);
	std::vector<CustomPriorities> getCustomPriorities() const;
	void setCustomPriorities(const std::vector<CustomPriorities> &customPriorities);
	std::string getSystemDiskAutoSnapshotPolicyId() const;
	void setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId);
	std::string getPrivatePoolOptionsId() const;
	void setPrivatePoolOptionsId(const std::string &privatePoolOptionsId);
	bool getImageOptionsLoginAsNonRoot() const;
	void setImageOptionsLoginAsNonRoot(bool imageOptionsLoginAsNonRoot);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	int getCpu() const;
	void setCpu(int cpu);
	std::vector<std::string> getSystemDiskCategories() const;
	void setSystemDiskCategories(const std::vector<std::string> &systemDiskCategories);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getScalingConfigurationName() const;
	void setScalingConfigurationName(const std::string &scalingConfigurationName);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getScalingConfigurationId() const;
	void setScalingConfigurationId(const std::string &scalingConfigurationId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	CpuOptions getCpuOptions() const;
	void setCpuOptions(const CpuOptions &cpuOptions);
	bool getSystemDiskBurstingEnabled() const;
	void setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getInternetMaxBandwidthIn() const;
	void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
	std::vector<InstancePatternInfo> getInstancePatternInfo() const;
	void setInstancePatternInfo(const std::vector<InstancePatternInfo> &instancePatternInfo);
	std::string getAffinity() const;
	void setAffinity(const std::string &affinity);
	std::vector<NetworkInterfaces> getNetworkInterfaces() const;
	void setNetworkInterfaces(const std::vector<NetworkInterfaces> &networkInterfaces);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	int getMemory() const;
	void setMemory(int memory);
	std::string getSpotInterruptionBehavior() const;
	void setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::vector<std::string> getInstanceTypes() const;
	void setInstanceTypes(const std::vector<std::string> &instanceTypes);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getSystemDiskKMSKeyId() const;
	void setSystemDiskKMSKeyId(const std::string &systemDiskKMSKeyId);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSystemDiskPerformanceLevel() const;
	void setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	bool getPasswordInherit() const;
	void setPasswordInherit(bool passwordInherit);
	ResourcePoolOptions getResourcePoolOptions() const;
	void setResourcePoolOptions(const ResourcePoolOptions &resourcePoolOptions);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	std::string getHttpEndpoint() const;
	void setHttpEndpoint(const std::string &httpEndpoint);
	std::string getDedicatedHostClusterId() const;
	void setDedicatedHostClusterId(const std::string &dedicatedHostClusterId);
	bool getOverride() const;
	void setOverride(bool override);
	std::map<std::string, std::string> getSchedulerOptions() const;
	void setSchedulerOptions(std::map<std::string, std::string> schedulerOptions);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTenancy() const;
	void setTenancy(const std::string &tenancy);
	std::string getSystemDiskDiskName() const;
	void setSystemDiskDiskName(const std::string &systemDiskDiskName);
	std::string getRamRoleName() const;
	void setRamRoleName(const std::string &ramRoleName);
	std::string getSystemDiskEncryptAlgorithm() const;
	void setSystemDiskEncryptAlgorithm(const std::string &systemDiskEncryptAlgorithm);
	std::string getDedicatedHostId() const;
	void setDedicatedHostId(const std::string &dedicatedHostId);
	std::string getCreditSpecification() const;
	void setCreditSpecification(const std::string &creditSpecification);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	std::vector<InstanceTypeOverride> getInstanceTypeOverride() const;
	void setInstanceTypeOverride(const std::vector<InstanceTypeOverride> &instanceTypeOverride);
	long getSystemDiskProvisionedIops() const;
	void setSystemDiskProvisionedIops(long systemDiskProvisionedIops);
	int getLoadBalancerWeight() const;
	void setLoadBalancerWeight(int loadBalancerWeight);
	std::string getStorageSetId() const;
	void setStorageSetId(const std::string &storageSetId);
	int getSystemDiskSize() const;
	void setSystemDiskSize(int systemDiskSize);
	std::string getImageFamily() const;
	void setImageFamily(const std::string &imageFamily);
	std::string getHttpTokens() const;
	void setHttpTokens(const std::string &httpTokens);
	std::string getSystemDiskDescription() const;
	void setSystemDiskDescription(const std::string &systemDiskDescription);
	bool getSystemDiskEncrypted() const;
	void setSystemDiskEncrypted(bool systemDiskEncrypted);

private:
	std::string hpcClusterId_;
	SecurityOptions securityOptions_;
	std::string keyPairName_;
	std::vector<SpotPriceLimit> spotPriceLimit_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string privatePoolOptionsMatchCriteria_;
	std::string hostName_;
	std::string password_;
	std::string instanceDescription_;
	int storageSetPartitionNumber_;
	std::vector<CustomPriorities> customPriorities_;
	std::string systemDiskAutoSnapshotPolicyId_;
	std::string privatePoolOptionsId_;
	bool imageOptionsLoginAsNonRoot_;
	int ipv6AddressCount_;
	int cpu_;
	std::vector<std::string> systemDiskCategories_;
	long ownerId_;
	std::string scalingConfigurationName_;
	std::string tags_;
	std::string scalingConfigurationId_;
	std::string spotStrategy_;
	CpuOptions cpuOptions_;
	bool systemDiskBurstingEnabled_;
	std::string instanceName_;
	std::string internetChargeType_;
	std::string zoneId_;
	int internetMaxBandwidthIn_;
	std::vector<InstancePatternInfo> instancePatternInfo_;
	std::string affinity_;
	std::vector<NetworkInterfaces> networkInterfaces_;
	std::string imageId_;
	int memory_;
	std::string spotInterruptionBehavior_;
	std::string ioOptimized_;
	std::vector<std::string> instanceTypes_;
	int internetMaxBandwidthOut_;
	std::string securityGroupId_;
	std::string systemDiskKMSKeyId_;
	std::string systemDiskCategory_;
	std::string accessKeyId_;
	std::string systemDiskPerformanceLevel_;
	std::string userData_;
	bool passwordInherit_;
	ResourcePoolOptions resourcePoolOptions_;
	std::string imageName_;
	std::string httpEndpoint_;
	std::string dedicatedHostClusterId_;
	bool override_;
	std::map<std::string, std::string> schedulerOptions_;
	std::string deploymentSetId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string tenancy_;
	std::string systemDiskDiskName_;
	std::string ramRoleName_;
	std::string systemDiskEncryptAlgorithm_;
	std::string dedicatedHostId_;
	std::string creditSpecification_;
	int spotDuration_;
	std::vector<std::string> securityGroupIds_;
	std::vector<DataDisk> dataDisk_;
	std::vector<InstanceTypeOverride> instanceTypeOverride_;
	long systemDiskProvisionedIops_;
	int loadBalancerWeight_;
	std::string storageSetId_;
	int systemDiskSize_;
	std::string imageFamily_;
	std::string httpTokens_;
	std::string systemDiskDescription_;
	bool systemDiskEncrypted_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGCONFIGURATIONREQUEST_H_
