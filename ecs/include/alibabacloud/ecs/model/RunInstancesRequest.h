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

#ifndef ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT RunInstancesRequest : public RpcServiceRequest {
public:
	struct SystemDisk {
		std::string storageClusterId;
		long provisionedIops;
		bool burstingEnabled;
		std::string encrypted;
		std::string kMSKeyId;
		std::string encryptAlgorithm;
	};
	struct ImageOptions {
		bool loginAsNonRoot;
	};
	struct CpuOptions {
		std::string turboMode;
		bool enableVISST;
		bool enableVRDT;
	};
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct PrivateDnsNameOptions {
		bool enableInstanceIdDnsARecord;
		bool enableInstanceIdDnsAAAARecord;
		bool enableIpDnsARecord;
		bool enableIpDnsPtrRecord;
		std::string hostnameType;
	};
	struct Arn {
		std::string roleType;
		std::string rolearn;
		long assumeRoleFor;
	};
	struct NetworkOptions {
		bool enableJumboFrame;
		bool enableNetworkEncryption;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	struct AdditionalInfo {
		std::string pvdConfig;
		bool enableHighDensityMode;
	};
	struct NetworkInterface {
		std::string vSwitchId;
		std::string networkInterfaceName;
		std::string description;
		std::string securityGroupId;
		std::string primaryIpAddress;
		int queueNumber;
		std::string networkInterfaceTrafficMode;
		long queuePairNumber;
		std::string instanceType;
		long ipv6AddressCount;
		int networkCardIndex;
		bool deleteOnRelease;
		std::string networkInterfaceId;
		int rxQueueSize;
		int txQueueSize;
		bool sourceDestCheck;
	};
	struct DataDisk {
		std::string performanceLevel;
		std::string autoSnapshotPolicyId;
		std::string encrypted;
		std::string description;
		std::string snapshotId;
		std::string device;
		int size;
		std::string diskName;
		std::string category;
		std::string encryptAlgorithm;
		bool deleteWithInstance;
		std::string kMSKeyId;
		std::string storageClusterId;
		long provisionedIops;
		bool burstingEnabled;
	};
	RunInstancesRequest();
	~RunInstancesRequest();
	bool getUniqueSuffix() const;
	void setUniqueSuffix(bool uniqueSuffix);
	std::string getSecurityEnhancementStrategy() const;
	void setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy);
	int getMinAmount() const;
	void setMinAmount(int minAmount);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPrivatePoolOptionsMatchCriteria() const;
	void setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria);
	bool getEnableNVS() const;
	void setEnableNVS(bool enableNVS);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	SystemDisk getSystemDisk() const;
	void setSystemDisk(const SystemDisk &systemDisk);
	ImageOptions getImageOptions() const;
	void setImageOptions(const ImageOptions &imageOptions);
	int getDeploymentSetGroupNo() const;
	void setDeploymentSetGroupNo(int deploymentSetGroupNo);
	std::string getSystemDiskAutoSnapshotPolicyId() const;
	void setSystemDiskAutoSnapshotPolicyId(const std::string &systemDiskAutoSnapshotPolicyId);
	int getCpuOptionsCore() const;
	void setCpuOptionsCore(int cpuOptionsCore);
	int getPeriod() const;
	void setPeriod(int period);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getCpuOptionsNuma() const;
	void setCpuOptionsNuma(const std::string &cpuOptionsNuma);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSpotStrategy() const;
	void setSpotStrategy(const std::string &spotStrategy);
	std::string getPrivateIpAddress() const;
	void setPrivateIpAddress(const std::string &privateIpAddress);
	CpuOptions getCpuOptions() const;
	void setCpuOptions(const CpuOptions &cpuOptions);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	bool getAutoRenew() const;
	void setAutoRenew(bool autoRenew);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	int getInternetMaxBandwidthIn() const;
	void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
	std::string getAffinity() const;
	void setAffinity(const std::string &affinity);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getSpotInterruptionBehavior() const;
	void setSpotInterruptionBehavior(const std::string &spotInterruptionBehavior);
	int getNetworkInterfaceQueueNumber() const;
	void setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::string getIoOptimized() const;
	void setIoOptimized(const std::string &ioOptimized);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	bool getHibernationOptionsConfigured() const;
	void setHibernationOptionsConfigured(bool hibernationOptionsConfigured);
	std::string getSystemDiskPerformanceLevel() const;
	void setSystemDiskPerformanceLevel(const std::string &systemDiskPerformanceLevel);
	bool getPasswordInherit() const;
	void setPasswordInherit(bool passwordInherit);
	PrivateDnsNameOptions getPrivateDnsNameOptions() const;
	void setPrivateDnsNameOptions(const PrivateDnsNameOptions &privateDnsNameOptions);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::vector<Arn> getArn() const;
	void setArn(const std::vector<Arn> &arn);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getSchedulerOptionsDedicatedHostClusterId() const;
	void setSchedulerOptionsDedicatedHostClusterId(const std::string &schedulerOptionsDedicatedHostClusterId);
	std::string getSystemDiskDiskName() const;
	void setSystemDiskDiskName(const std::string &systemDiskDiskName);
	std::string getDedicatedHostId() const;
	void setDedicatedHostId(const std::string &dedicatedHostId);
	int getSpotDuration() const;
	void setSpotDuration(int spotDuration);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	NetworkOptions getNetworkOptions() const;
	void setNetworkOptions(const NetworkOptions &networkOptions);
	std::string getSystemDiskSize() const;
	void setSystemDiskSize(const std::string &systemDiskSize);
	std::string getImageFamily() const;
	void setImageFamily(const std::string &imageFamily);
	std::string getLaunchTemplateName() const;
	void setLaunchTemplateName(const std::string &launchTemplateName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getHpcClusterId() const;
	void setHpcClusterId(const std::string &hpcClusterId);
	int getHttpPutResponseHopLimit() const;
	void setHttpPutResponseHopLimit(int httpPutResponseHopLimit);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	float getSpotPriceLimit() const;
	void setSpotPriceLimit(float spotPriceLimit);
	std::string getCpuOptionsTopologyType() const;
	void setCpuOptionsTopologyType(const std::string &cpuOptionsTopologyType);
	int getStorageSetPartitionNumber() const;
	void setStorageSetPartitionNumber(int storageSetPartitionNumber);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getPrivatePoolOptionsId() const;
	void setPrivatePoolOptionsId(const std::string &privatePoolOptionsId);
	int getAutoRenewPeriod() const;
	void setAutoRenewPeriod(int autoRenewPeriod);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	int getIpv6AddressCount() const;
	void setIpv6AddressCount(int ipv6AddressCount);
	std::vector<std::string> getHostNames() const;
	void setHostNames(const std::vector<std::string> &hostNames);
	std::string getCapacityReservationPreference() const;
	void setCapacityReservationPreference(const std::string &capacityReservationPreference);
	AdditionalInfo getAdditionalInfo() const;
	void setAdditionalInfo(const AdditionalInfo &additionalInfo);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::vector<std::string> getCpuOptionsAccelerators() const;
	void setCpuOptionsAccelerators(const std::vector<std::string> &cpuOptionsAccelerators);
	std::vector<std::string> getIpv6Address() const;
	void setIpv6Address(const std::vector<std::string> &ipv6Address);
	std::string getSecurityOptionsConfidentialComputingMode() const;
	void setSecurityOptionsConfidentialComputingMode(const std::string &securityOptionsConfidentialComputingMode);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getCpuOptionsThreadsPerCore() const;
	void setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getSecurityOptionsTrustedSystemMode() const;
	void setSecurityOptionsTrustedSystemMode(const std::string &securityOptionsTrustedSystemMode);
	std::string getCapacityReservationId() const;
	void setCapacityReservationId(const std::string &capacityReservationId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getHttpEndpoint() const;
	void setHttpEndpoint(const std::string &httpEndpoint);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getDeploymentSetId() const;
	void setDeploymentSetId(const std::string &deploymentSetId);
	std::vector<NetworkInterface> getNetworkInterface() const;
	void setNetworkInterface(const std::vector<NetworkInterface> &networkInterface);
	int getAmount() const;
	void setAmount(int amount);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getTenancy() const;
	void setTenancy(const std::string &tenancy);
	std::string getRamRoleName() const;
	void setRamRoleName(const std::string &ramRoleName);
	std::string getAutoReleaseTime() const;
	void setAutoReleaseTime(const std::string &autoReleaseTime);
	std::string getCreditSpecification() const;
	void setCreditSpecification(const std::string &creditSpecification);
	long getLaunchTemplateVersion() const;
	void setLaunchTemplateVersion(long launchTemplateVersion);
	std::string getSchedulerOptionsManagedPrivateSpaceId() const;
	void setSchedulerOptionsManagedPrivateSpaceId(const std::string &schedulerOptionsManagedPrivateSpaceId);
	std::vector<DataDisk> getDataDisk() const;
	void setDataDisk(const std::vector<DataDisk> &dataDisk);
	std::string getStorageSetId() const;
	void setStorageSetId(const std::string &storageSetId);
	std::string getHttpTokens() const;
	void setHttpTokens(const std::string &httpTokens);
	std::string getSystemDiskDescription() const;
	void setSystemDiskDescription(const std::string &systemDiskDescription);

private:
	bool uniqueSuffix_;
	std::string securityEnhancementStrategy_;
	int minAmount_;
	bool deletionProtection_;
	std::string resourceGroupId_;
	std::string privatePoolOptionsMatchCriteria_;
	bool enableNVS_;
	std::string hostName_;
	std::string password_;
	SystemDisk systemDisk_;
	ImageOptions imageOptions_;
	int deploymentSetGroupNo_;
	std::string systemDiskAutoSnapshotPolicyId_;
	int cpuOptionsCore_;
	int period_;
	bool dryRun_;
	std::string cpuOptionsNuma_;
	long ownerId_;
	std::string spotStrategy_;
	std::string privateIpAddress_;
	CpuOptions cpuOptions_;
	std::string periodUnit_;
	bool autoRenew_;
	std::string internetChargeType_;
	int internetMaxBandwidthIn_;
	std::string affinity_;
	std::string imageId_;
	std::string spotInterruptionBehavior_;
	int networkInterfaceQueueNumber_;
	std::vector<SystemTag> systemTag_;
	std::string ioOptimized_;
	std::string securityGroupId_;
	bool hibernationOptionsConfigured_;
	std::string systemDiskPerformanceLevel_;
	bool passwordInherit_;
	PrivateDnsNameOptions privateDnsNameOptions_;
	std::string instanceType_;
	std::vector<Arn> arn_;
	std::string resourceOwnerAccount_;
	std::string schedulerOptionsDedicatedHostClusterId_;
	std::string systemDiskDiskName_;
	std::string dedicatedHostId_;
	int spotDuration_;
	std::vector<std::string> securityGroupIds_;
	NetworkOptions networkOptions_;
	std::string systemDiskSize_;
	std::string imageFamily_;
	std::string launchTemplateName_;
	long resourceOwnerId_;
	std::string hpcClusterId_;
	int httpPutResponseHopLimit_;
	std::string isp_;
	std::string keyPairName_;
	float spotPriceLimit_;
	std::string cpuOptionsTopologyType_;
	int storageSetPartitionNumber_;
	std::vector<Tag> tag_;
	std::string privatePoolOptionsId_;
	int autoRenewPeriod_;
	std::string launchTemplateId_;
	int ipv6AddressCount_;
	std::vector<std::string> hostNames_;
	std::string capacityReservationPreference_;
	AdditionalInfo additionalInfo_;
	std::string vSwitchId_;
	std::string instanceName_;
	std::string zoneId_;
	std::vector<std::string> cpuOptionsAccelerators_;
	std::vector<std::string> ipv6Address_;
	std::string securityOptionsConfidentialComputingMode_;
	std::string clientToken_;
	int internetMaxBandwidthOut_;
	std::string description_;
	int cpuOptionsThreadsPerCore_;
	std::string systemDiskCategory_;
	std::string securityOptionsTrustedSystemMode_;
	std::string capacityReservationId_;
	std::string userData_;
	std::string regionId_;
	std::string httpEndpoint_;
	std::string instanceChargeType_;
	std::string deploymentSetId_;
	std::vector<NetworkInterface> networkInterface_;
	int amount_;
	bool autoPay_;
	std::string ownerAccount_;
	std::string tenancy_;
	std::string ramRoleName_;
	std::string autoReleaseTime_;
	std::string creditSpecification_;
	long launchTemplateVersion_;
	std::string schedulerOptionsManagedPrivateSpaceId_;
	std::vector<DataDisk> dataDisk_;
	std::string storageSetId_;
	std::string httpTokens_;
	std::string systemDiskDescription_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_
