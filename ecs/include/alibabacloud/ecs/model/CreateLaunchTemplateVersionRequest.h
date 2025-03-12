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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATELAUNCHTEMPLATEVERSIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATELAUNCHTEMPLATEVERSIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateLaunchTemplateVersionRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	struct NetworkInterface {
		std::string vSwitchId;
		std::string networkInterfaceName;
		std::string description;
		std::string securityGroupId;
		std::string primaryIpAddress;
		std::string instanceType;
		std::string networkInterfaceTrafficMode;
		bool deleteOnRelease;
	};
	struct DataDisk {
		std::string performanceLevel;
		std::string description;
		std::string snapshotId;
		int size;
		std::string device;
		std::string diskName;
		std::string category;
		bool deleteWithInstance;
		std::string encrypted;
		long provisionedIops;
		bool burstingEnabled;
		std::string autoSnapshotPolicyId;
	};
	CreateLaunchTemplateVersionRequest();
	~CreateLaunchTemplateVersionRequest();
	std::string getLaunchTemplateName() const;
	void setLaunchTemplateName(const std::string &launchTemplateName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getHttpPutResponseHopLimit() const;
	void setHttpPutResponseHopLimit(int httpPutResponseHopLimit);
	std::string getSecurityEnhancementStrategy() const;
	void setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	float getSpotPriceLimit() const;
	void setSpotPriceLimit(float spotPriceLimit);
	std::string getImageOwnerAlias() const;
	void setImageOwnerAlias(const std::string &imageOwnerAlias);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	int getSystemDiskIops() const;
	void setSystemDiskIops(int systemDiskIops);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getSystemDiskAutoSnapshotPolicyId() const;
	void setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	int getPeriod() const;
	void setPeriod(int period);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	bool getSystemDiskBurstingEnabled() const;
	void setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getInternetMaxBandwidthIn() const;
	void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
	std::string getVersionDescription() const;
	void setVersionDescription(const std::string &versionDescription);
	bool getSystemDiskDeleteWithInstance() const;
	void setSystemDiskDeleteWithInstance(bool systemDiskDeleteWithInstance);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getSystemDiskPerformanceLevel() const;
	void setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	bool getPasswordInherit() const;
	void setPasswordInherit(bool passwordInherit);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getHttpEndpoint() const;
	void setHttpEndpoint(const std::string &httpEndpoint);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	bool getEnableVmOsConfig() const;
	void setEnableVmOsConfig(bool enableVmOsConfig);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::vector<NetworkInterface> getNetworkInterface() const;
	void setNetworkInterface(const std::vector<NetworkInterface> &networkInterface);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getSystemDiskDiskName() const;
	void setSystemDiskDiskName(const std::string &systemDiskDiskName);
	std::string getRamRoleName() const;
	void setRamRoleName(const std::string &ramRoleName);
	std::string getAutoReleaseTime() const;
	void setAutoReleaseTime(const std::string &autoReleaseTime);
	std::string getCreditSpecification() const;
	void setCreditSpecification(const std::string &creditSpecification);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	long getSystemDiskProvisionedIops() const;
	void setSystemDiskProvisionedIops(long systemDiskProvisionedIops);
	int getSystemDiskSize() const;
	void setSystemDiskSize(int systemDiskSize);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getHttpTokens() const;
	void setHttpTokens(const std::string &httpTokens);
	std::string getSystemDiskDescription() const;
	void setSystemDiskDescription(const std::string &systemDiskDescription);
	std::string getSystemDiskEncrypted() const;
	void setSystemDiskEncrypted(const std::string &systemDiskEncrypted);

private:
	std::string launchTemplateName_;
	long resourceOwnerId_;
	int httpPutResponseHopLimit_;
	std::string securityEnhancementStrategy_;
	std::string networkType_;
	std::string keyPairName_;
	float spotPriceLimit_;
	std::string imageOwnerAlias_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string hostName_;
	int systemDiskIops_;
	std::vector<Tag> tag_;
	std::string systemDiskAutoSnapshotPolicyId_;
	int autoRenewPeriod_;
	int period_;
	std::string launchTemplateId_;
	int ipv6AddressCount_;
	long ownerId_;
	std::string vSwitchId_;
	std::string spotStrategy_;
	std::string privateIpAddress_;
	bool systemDiskBurstingEnabled_;
	std::string periodUnit_;
	std::string instanceName_;
	bool autoRenew_;
	std::string internetChargeType_;
	std::string zoneId_;
	int internetMaxBandwidthIn_;
	std::string versionDescription_;
	bool systemDiskDeleteWithInstance_;
	std::string imageId_;
	std::string ioOptimized_;
	std::string securityGroupId_;
	int internetMaxBandwidthOut_;
	std::string description_;
	std::string systemDiskCategory_;
	std::string systemDiskPerformanceLevel_;
	std::string userData_;
	bool passwordInherit_;
	std::string regionId_;
	std::string httpEndpoint_;
	std::string instanceType_;
	std::string instanceChargeType_;
	bool enableVmOsConfig_;
	std::string deploymentSetId_;
	std::vector<NetworkInterface> networkInterface_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string systemDiskDiskName_;
	std::string ramRoleName_;
	std::string autoReleaseTime_;
	std::string creditSpecification_;
	int spotDuration_;
	std::vector<std::string> securityGroupIds_;
	std::vector<DataDisk> dataDisk_;
	long systemDiskProvisionedIops_;
	int systemDiskSize_;
	std::string vpcId_;
	std::string httpTokens_;
	std::string systemDiskDescription_;
	std::string systemDiskEncrypted_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATELAUNCHTEMPLATEVERSIONREQUEST_H_
