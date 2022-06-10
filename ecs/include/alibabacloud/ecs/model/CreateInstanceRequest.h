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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEINSTANCEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateInstanceRequest : public RpcServiceRequest {
public:
	struct SystemDisk {
		std::string storageClusterId;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	struct Arn {
		std::string rolearn;
		std::string roleType;
		long assumeRoleFor;
	};
	struct DataDisk {
		std::string diskName;
		std::string snapshotId;
		int size;
		bool encrypted;
		std::string performanceLevel;
		std::string encryptAlgorithm;
		std::string description;
		std::string storageClusterId;
		std::string category;
		std::string kMSKeyId;
		std::string device;
		bool deleteWithInstance;
	};
	CreateInstanceRequest();
	~CreateInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getHpcClusterId() const;
	void setHpcClusterId(const std::string &hpcClusterId);
	int getHttpPutResponseHopLimit() const;
	void setHttpPutResponseHopLimit(int httpPutResponseHopLimit);
	std::string getSecurityEnhancementStrategy() const;
	void setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	float getSpotPriceLimit() const;
	void setSpotPriceLimit(float spotPriceLimit);
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
	SystemDisk getSystemDisk() const;
	void setSystemDisk(const SystemDisk &systemDisk);
	int getDeploymentSetGroupNo() const;
	void setDeploymentSetGroupNo(int deploymentSetGroupNo);
	int getStorageSetPartitionNumber() const;
	void setStorageSetPartitionNumber(int storageSetPartitionNumber);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getPrivatePoolOptionsId() const;
	void setPrivatePoolOptionsId(const std::string &privatePoolOptionsId);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	std::string getNodeControllerId() const;
	void setNodeControllerId(const std::string &nodeControllerId);
	int getPeriod() const;
	void setPeriod(int period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getCapacityReservationPreference() const;
	void setCapacityReservationPreference(const std::string &capacityReservationPreference);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
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
	bool getUseAdditionalService() const;
	void setUseAdditionalService(bool useAdditionalService);
	std::string getAffinity() const;
	void setAffinity(const std::string &affinity);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getVlanId() const;
	void setVlanId(const std::string &vlanId);
	std::string getSpotInterruptionBehavior() const;
	void setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	bool getHibernationOptionsConfigured() const;
	void setHibernationOptionsConfigured(bool hibernationOptionsConfigured);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getCapacityReservationId() const;
	void setCapacityReservationId(const std::string &capacityReservationId);
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
	std::vector<Arn> getArn() const;
	void setArn(const std::vector<Arn> &arn);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::string getInnerIpAddress() const;
	void setInnerIpAddress(const std::string &innerIpAddress);
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
	std::string getDedicatedHostId() const;
	void setDedicatedHostId(const std::string &dedicatedHostId);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getCreditSpecification() const;
	void setCreditSpecification(const std::string &creditSpecification);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
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

private:
	long resourceOwnerId_;
	std::string hpcClusterId_;
	int httpPutResponseHopLimit_;
	std::string securityEnhancementStrategy_;
	std::string keyPairName_;
	float spotPriceLimit_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string privatePoolOptionsMatchCriteria_;
	std::string hostName_;
	std::string password_;
	SystemDisk systemDisk_;
	int deploymentSetGroupNo_;
	int storageSetPartitionNumber_;
	std::vector<Tag> tag_;
	std::string privatePoolOptionsId_;
	int autoRenewPeriod_;
	std::string nodeControllerId_;
	int period_;
	bool dryRun_;
	long ownerId_;
	std::string capacityReservationPreference_;
	std::string vSwitchId_;
	std::string privateIpAddress_;
	std::string spotStrategy_;
	std::string periodUnit_;
	std::string instanceName_;
	bool autoRenew_;
	std::string internetChargeType_;
	std::string zoneId_;
	int internetMaxBandwidthIn_;
	bool useAdditionalService_;
	std::string affinity_;
	std::string imageId_;
	std::string clientToken_;
	std::string vlanId_;
	std::string spotInterruptionBehavior_;
	std::string ioOptimized_;
	std::string securityGroupId_;
	int internetMaxBandwidthOut_;
	bool hibernationOptionsConfigured_;
	std::string description_;
	std::string systemDiskCategory_;
	std::string capacityReservationId_;
	std::string systemDiskPerformanceLevel_;
	std::string userData_;
	bool passwordInherit_;
	std::string regionId_;
	std::string httpEndpoint_;
	std::string instanceType_;
	std::vector<Arn> arn_;
	std::string instanceChargeType_;
	std::string deploymentSetId_;
	std::string innerIpAddress_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string tenancy_;
	std::string systemDiskDiskName_;
	std::string ramRoleName_;
	std::string dedicatedHostId_;
	std::string clusterId_;
	std::string creditSpecification_;
	int spotDuration_;
	std::vector<DataDisk> dataDisk_;
	std::string storageSetId_;
	int systemDiskSize_;
	std::string imageFamily_;
	std::string httpTokens_;
	std::string systemDiskDescription_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEINSTANCEREQUEST_H_
