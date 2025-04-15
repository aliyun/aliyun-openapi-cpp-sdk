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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateAutoProvisioningGroupRequest : public RpcServiceRequest {
public:
	struct LaunchConfigurationDataDisk {
		std::string performanceLevel;
		std::string kmsKeyId;
		std::string description;
		std::string snapshotId;
		int size;
		std::string device;
		std::string diskName;
		std::string category;
		bool deleteWithInstance;
		bool encrypted;
		std::string encryptAlgorithm;
		long provisionedIops;
		bool burstingEnabled;
		std::string autoSnapshotPolicyId;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct SystemDiskConfig {
		std::string diskCategory;
	};
	struct DataDiskConfig {
		std::string diskCategory;
	};
	struct PrePaidOptions {
		struct SpecifyCapacityDistributionItem {
			std::string string;
			std::vector<std::string> instanceTypes;
			int minTargetCapacity;
		};
		SpecifyCapacityDistributionItem specifyCapacityDistributionItem;
		std::vector<SpecifyCapacityDistributionItem> specifyCapacityDistribution;
	};
	struct LaunchConfiguration {
		int period;
		std::string periodUnit;
		bool autoRenew;
		int autoRenewPeriod;
		int spotDuration;
		std::string spotInterruptionBehavior;
		struct ImageOptions {
			bool loginAsNonRoot;
		};
		ImageOptions imageOptions;
	};
	struct LaunchConfigurationArn {
		std::string rolearn;
		std::string roleType;
		long assumeRoleFor;
	};
	struct LaunchConfigurationSystemDisk {
		std::string encrypted;
		std::string kMSKeyId;
		std::string encryptAlgorithm;
		long provisionedIops;
		bool burstingEnabled;
		std::string autoSnapshotPolicyId;
	};
	struct ResourcePoolOptions {
		std::string strategy;
		std::string string;
		std::vector<std::string> privatePoolIds;
	};
	struct LaunchTemplateConfig {
		std::string vSwitchId;
		double maxPrice;
		int priority;
		std::string instanceType;
		double weightedCapacity;
		int maxQuantity;
		std::string instanceFamilyLevel;
		std::string burstablePerformance;
		struct SecondaryNetworkInterface {
			std::string vSwitchId;
		};
		std::vector<SecondaryNetworkInterface> secondaryNetworkInterface;
		std::string imageId;
	};
	struct LaunchConfigurationTag {
		std::string key;
		std::string value;
	};
	struct LaunchConfigurationNetworkInterface {
		std::string securityGroupId;
		std::string instanceType;
	};
	struct LaunchConfigurationAdditionalInfo {
		std::string pvdConfig;
	};
	CreateAutoProvisioningGroupRequest();
	~CreateAutoProvisioningGroupRequest();
	std::vector<LaunchConfigurationDataDisk> getLaunchConfigurationDataDisk() const;
	void setLaunchConfigurationDataDisk(const std::vector<LaunchConfigurationDataDisk> &launchConfigurationDataDisk);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getLaunchConfigurationSystemDiskCategory() const;
	void setLaunchConfigurationSystemDiskCategory(const std::string &launchConfigurationSystemDiskCategory);
	std::string getAutoProvisioningGroupType() const;
	void setAutoProvisioningGroupType(const std::string &autoProvisioningGroupType);
	std::string getLaunchConfigurationSystemDiskPerformanceLevel() const;
	void setLaunchConfigurationSystemDiskPerformanceLevel(const std::string &launchConfigurationSystemDiskPerformanceLevel);
	std::vector<std::string> getLaunchConfigurationHostNames() const;
	void setLaunchConfigurationHostNames(const std::vector<std::string> &launchConfigurationHostNames);
	std::vector<std::string> getLaunchConfigurationSecurityGroupIds() const;
	void setLaunchConfigurationSecurityGroupIds(const std::vector<std::string> &launchConfigurationSecurityGroupIds);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLaunchConfigurationImageId() const;
	void setLaunchConfigurationImageId(const std::string &launchConfigurationImageId);
	std::string getLaunchConfigurationResourceGroupId() const;
	void setLaunchConfigurationResourceGroupId(const std::string &launchConfigurationResourceGroupId);
	bool getResourcePlanningOnly() const;
	void setResourcePlanningOnly(bool resourcePlanningOnly);
	std::string getLaunchConfigurationPassword() const;
	void setLaunchConfigurationPassword(const std::string &launchConfigurationPassword);
	std::string getLaunchConfigurationAutoReleaseTime() const;
	void setLaunchConfigurationAutoReleaseTime(const std::string &launchConfigurationAutoReleaseTime);
	std::string getPayAsYouGoAllocationStrategy() const;
	void setPayAsYouGoAllocationStrategy(const std::string &payAsYouGoAllocationStrategy);
	std::string getDefaultTargetCapacityType() const;
	void setDefaultTargetCapacityType(const std::string &defaultTargetCapacityType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getLaunchConfigurationKeyPairName() const;
	void setLaunchConfigurationKeyPairName(const std::string &launchConfigurationKeyPairName);
	std::vector<SystemDiskConfig> getSystemDiskConfig() const;
	void setSystemDiskConfig(const std::vector<SystemDiskConfig> &systemDiskConfig);
	std::vector<DataDiskConfig> getDataDiskConfig() const;
	void setDataDiskConfig(const std::vector<DataDiskConfig> &dataDiskConfig);
	std::string getValidUntil() const;
	void setValidUntil(const std::string &validUntil);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	PrePaidOptions getPrePaidOptions() const;
	void setPrePaidOptions(const PrePaidOptions &prePaidOptions);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getLaunchConfigurationImageFamily() const;
	void setLaunchConfigurationImageFamily(const std::string &launchConfigurationImageFamily);
	int getLaunchConfigurationSystemDiskSize() const;
	void setLaunchConfigurationSystemDiskSize(int launchConfigurationSystemDiskSize);
	int getLaunchConfigurationInternetMaxBandwidthOut() const;
	void setLaunchConfigurationInternetMaxBandwidthOut(int launchConfigurationInternetMaxBandwidthOut);
	std::string getLaunchConfigurationHostName() const;
	void setLaunchConfigurationHostName(const std::string &launchConfigurationHostName);
	std::string getMinTargetCapacity() const;
	void setMinTargetCapacity(const std::string &minTargetCapacity);
	float getMaxSpotPrice() const;
	void setMaxSpotPrice(float maxSpotPrice);
	LaunchConfiguration getLaunchConfiguration() const;
	void setLaunchConfiguration(const LaunchConfiguration &launchConfiguration);
	std::vector<LaunchConfigurationArn> getLaunchConfigurationArn() const;
	void setLaunchConfigurationArn(const std::vector<LaunchConfigurationArn> &launchConfigurationArn);
	bool getLaunchConfigurationPasswordInherit() const;
	void setLaunchConfigurationPasswordInherit(bool launchConfigurationPasswordInherit);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getLaunchConfigurationSecurityGroupId() const;
	void setLaunchConfigurationSecurityGroupId(const std::string &launchConfigurationSecurityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getTerminateInstancesWithExpiration() const;
	void setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration);
	std::string getLaunchConfigurationUserData() const;
	void setLaunchConfigurationUserData(const std::string &launchConfigurationUserData);
	std::string getLaunchConfigurationCreditSpecification() const;
	void setLaunchConfigurationCreditSpecification(const std::string &launchConfigurationCreditSpecification);
	LaunchConfigurationSystemDisk getLaunchConfigurationSystemDisk() const;
	void setLaunchConfigurationSystemDisk(const LaunchConfigurationSystemDisk &launchConfigurationSystemDisk);
	std::string getLaunchConfigurationInstanceName() const;
	void setLaunchConfigurationInstanceName(const std::string &launchConfigurationInstanceName);
	std::string getLaunchConfigurationInstanceDescription() const;
	void setLaunchConfigurationInstanceDescription(const std::string &launchConfigurationInstanceDescription);
	std::string getSpotAllocationStrategy() const;
	void setSpotAllocationStrategy(const std::string &spotAllocationStrategy);
	ResourcePoolOptions getResourcePoolOptions() const;
	void setResourcePoolOptions(const ResourcePoolOptions &resourcePoolOptions);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getTerminateInstances() const;
	void setTerminateInstances(bool terminateInstances);
	std::string getLaunchConfigurationSystemDiskName() const;
	void setLaunchConfigurationSystemDiskName(const std::string &launchConfigurationSystemDiskName);
	std::string getLaunchConfigurationSystemDiskDescription() const;
	void setLaunchConfigurationSystemDiskDescription(const std::string &launchConfigurationSystemDiskDescription);
	std::string getExcessCapacityTerminationPolicy() const;
	void setExcessCapacityTerminationPolicy(const std::string &excessCapacityTerminationPolicy);
	std::vector<LaunchTemplateConfig> getLaunchTemplateConfig() const;
	void setLaunchTemplateConfig(const std::vector<LaunchTemplateConfig> &launchTemplateConfig);
	std::string getLaunchConfigurationRamRoleName() const;
	void setLaunchConfigurationRamRoleName(const std::string &launchConfigurationRamRoleName);
	int getLaunchConfigurationInternetMaxBandwidthIn() const;
	void setLaunchConfigurationInternetMaxBandwidthIn(int launchConfigurationInternetMaxBandwidthIn);
	std::string getSpotInstanceInterruptionBehavior() const;
	void setSpotInstanceInterruptionBehavior(const std::string &spotInstanceInterruptionBehavior);
	std::string getLaunchConfigurationSecurityEnhancementStrategy() const;
	void setLaunchConfigurationSecurityEnhancementStrategy(const std::string &launchConfigurationSecurityEnhancementStrategy);
	std::vector<LaunchConfigurationTag> getLaunchConfigurationTag() const;
	void setLaunchConfigurationTag(const std::vector<LaunchConfigurationTag> &launchConfigurationTag);
	std::string getLaunchConfigurationDeploymentSetId() const;
	void setLaunchConfigurationDeploymentSetId(const std::string &launchConfigurationDeploymentSetId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getSpotInstancePoolsToUseCount() const;
	void setSpotInstancePoolsToUseCount(int spotInstancePoolsToUseCount);
	std::string getLaunchConfigurationInternetChargeType() const;
	void setLaunchConfigurationInternetChargeType(const std::string &launchConfigurationInternetChargeType);
	std::string getLaunchTemplateVersion() const;
	void setLaunchTemplateVersion(const std::string &launchTemplateVersion);
	std::string getLaunchConfigurationIoOptimized() const;
	void setLaunchConfigurationIoOptimized(const std::string &launchConfigurationIoOptimized);
	std::string getPayAsYouGoTargetCapacity() const;
	void setPayAsYouGoTargetCapacity(const std::string &payAsYouGoTargetCapacity);
	bool getHibernationOptionsConfigured() const;
	void setHibernationOptionsConfigured(bool hibernationOptionsConfigured);
	std::string getTotalTargetCapacity() const;
	void setTotalTargetCapacity(const std::string &totalTargetCapacity);
	std::string getSpotTargetCapacity() const;
	void setSpotTargetCapacity(const std::string &spotTargetCapacity);
	std::vector<LaunchConfigurationNetworkInterface> getLaunchConfigurationNetworkInterface() const;
	void setLaunchConfigurationNetworkInterface(const std::vector<LaunchConfigurationNetworkInterface> &launchConfigurationNetworkInterface);
	std::string getValidFrom() const;
	void setValidFrom(const std::string &validFrom);
	std::string getAutoProvisioningGroupName() const;
	void setAutoProvisioningGroupName(const std::string &autoProvisioningGroupName);
	LaunchConfigurationAdditionalInfo getLaunchConfigurationAdditionalInfo() const;
	void setLaunchConfigurationAdditionalInfo(const LaunchConfigurationAdditionalInfo &launchConfigurationAdditionalInfo);

private:
	std::vector<LaunchConfigurationDataDisk> launchConfigurationDataDisk_;
	long resourceOwnerId_;
	std::string launchConfigurationSystemDiskCategory_;
	std::string autoProvisioningGroupType_;
	std::string launchConfigurationSystemDiskPerformanceLevel_;
	std::vector<std::string> launchConfigurationHostNames_;
	std::vector<std::string> launchConfigurationSecurityGroupIds_;
	std::string resourceGroupId_;
	std::string launchConfigurationImageId_;
	std::string launchConfigurationResourceGroupId_;
	bool resourcePlanningOnly_;
	std::string launchConfigurationPassword_;
	std::string launchConfigurationAutoReleaseTime_;
	std::string payAsYouGoAllocationStrategy_;
	std::string defaultTargetCapacityType_;
	std::vector<Tag> tag_;
	std::string launchConfigurationKeyPairName_;
	std::vector<SystemDiskConfig> systemDiskConfig_;
	std::vector<DataDiskConfig> dataDiskConfig_;
	std::string validUntil_;
	std::string launchTemplateId_;
	PrePaidOptions prePaidOptions_;
	long ownerId_;
	std::string launchConfigurationImageFamily_;
	int launchConfigurationSystemDiskSize_;
	int launchConfigurationInternetMaxBandwidthOut_;
	std::string launchConfigurationHostName_;
	std::string minTargetCapacity_;
	float maxSpotPrice_;
	LaunchConfiguration launchConfiguration_;
	std::vector<LaunchConfigurationArn> launchConfigurationArn_;
	bool launchConfigurationPasswordInherit_;
	std::string clientToken_;
	std::string launchConfigurationSecurityGroupId_;
	std::string description_;
	bool terminateInstancesWithExpiration_;
	std::string launchConfigurationUserData_;
	std::string launchConfigurationCreditSpecification_;
	LaunchConfigurationSystemDisk launchConfigurationSystemDisk_;
	std::string launchConfigurationInstanceName_;
	std::string launchConfigurationInstanceDescription_;
	std::string spotAllocationStrategy_;
	ResourcePoolOptions resourcePoolOptions_;
	std::string regionId_;
	bool terminateInstances_;
	std::string launchConfigurationSystemDiskName_;
	std::string launchConfigurationSystemDiskDescription_;
	std::string excessCapacityTerminationPolicy_;
	std::vector<LaunchTemplateConfig> launchTemplateConfig_;
	std::string launchConfigurationRamRoleName_;
	int launchConfigurationInternetMaxBandwidthIn_;
	std::string spotInstanceInterruptionBehavior_;
	std::string launchConfigurationSecurityEnhancementStrategy_;
	std::vector<LaunchConfigurationTag> launchConfigurationTag_;
	std::string launchConfigurationDeploymentSetId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int spotInstancePoolsToUseCount_;
	std::string launchConfigurationInternetChargeType_;
	std::string launchTemplateVersion_;
	std::string launchConfigurationIoOptimized_;
	std::string payAsYouGoTargetCapacity_;
	bool hibernationOptionsConfigured_;
	std::string totalTargetCapacity_;
	std::string spotTargetCapacity_;
	std::vector<LaunchConfigurationNetworkInterface> launchConfigurationNetworkInterface_;
	std::string validFrom_;
	std::string autoProvisioningGroupName_;
	LaunchConfigurationAdditionalInfo launchConfigurationAdditionalInfo_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEAUTOPROVISIONINGGROUPREQUEST_H_
