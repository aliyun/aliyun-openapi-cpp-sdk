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

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT RunInstancesRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string key;
					std::string value;
				};
				struct NetworkInterface
				{
					std::string primaryIpAddress;
					std::string vSwitchId;
					std::string securityGroupId;
					std::string networkInterfaceName;
					std::string description;
				};
				struct DataDisk
				{
					int size;
					std::string snapshotId;
					std::string category;
					std::string encrypted;
					std::string kMSKeyId;
					std::string diskName;
					std::string description;
					std::string device;
					bool deleteWithInstance;
					std::string performanceLevel;
				};

			public:
				RunInstancesRequest();
				~RunInstancesRequest();

				std::string getLaunchTemplateName()const;
				void setLaunchTemplateName(const std::string& launchTemplateName);
				bool getResourceOwnerId()const;
				void setResourceOwnerId(bool resourceOwnerId);
				bool getUniqueSuffix()const;
				void setUniqueSuffix(bool uniqueSuffix);
				std::string getHpcClusterId()const;
				void setHpcClusterId(const std::string& hpcClusterId);
				bool getCallerParentId()const;
				void setCallerParentId(bool callerParentId);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				float getSpotPriceLimit()const;
				void setSpotPriceLimit(float spotPriceLimit);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				bool getDeletionProtection()const;
				void setDeletionProtection(bool deletionProtection);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				int getStorageSetPartitionNumber()const;
				void setStorageSetPartitionNumber(int storageSetPartitionNumber);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				bool getCallerUid()const;
				void setCallerUid(bool callerUid);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getCpuOptionsCore()const;
				void setCpuOptionsCore(int cpuOptionsCore);
				int getPeriod()const;
				void setPeriod(int period);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				int getIpv6AddressCount()const;
				void setIpv6AddressCount(int ipv6AddressCount);
				std::string getCpuOptionsNuma()const;
				void setCpuOptionsNuma(const std::string& cpuOptionsNuma);
				bool getOwnerId()const;
				void setOwnerId(bool ownerId);
				std::string getCapacityReservationPreference()const;
				void setCapacityReservationPreference(const std::string& capacityReservationPreference);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getAkProxy()const;
				void setAkProxy(const std::string& akProxy);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::vector<std::string> getIpv6Address()const;
				void setIpv6Address(const std::vector<std::string>& ipv6Address);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				std::string getAffinity()const;
				void setAffinity(const std::string& affinity);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getSpotInterruptionBehavior()const;
				void setSpotInterruptionBehavior(const std::string& spotInterruptionBehavior);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getCpuOptionsThreadsPerCore()const;
				void setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getCapacityReservationId()const;
				void setCapacityReservationId(const std::string& capacityReservationId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSystemDiskPerformanceLevel()const;
				void setSystemDiskPerformanceLevel(const std::string& systemDiskPerformanceLevel);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				bool getPasswordInherit()const;
				void setPasswordInherit(bool passwordInherit);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				bool getHibernationConfigured()const;
				void setHibernationConfigured(bool hibernationConfigured);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				std::vector<NetworkInterface> getNetworkInterface()const;
				void setNetworkInterface(const std::vector<NetworkInterface>& networkInterface);
				std::string getDeploymentSetId()const;
				void setDeploymentSetId(const std::string& deploymentSetId);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				int getAmount()const;
				void setAmount(int amount);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getTenancy()const;
				void setTenancy(const std::string& tenancy);
				std::string getSystemDiskDiskName()const;
				void setSystemDiskDiskName(const std::string& systemDiskDiskName);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				std::string getAutoReleaseTime()const;
				void setAutoReleaseTime(const std::string& autoReleaseTime);
				std::string getDedicatedHostId()const;
				void setDedicatedHostId(const std::string& dedicatedHostId);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				std::string getCreditSpecification()const;
				void setCreditSpecification(const std::string& creditSpecification);
				std::vector<std::string> getSecurityGroupIds()const;
				void setSecurityGroupIds(const std::vector<std::string>& securityGroupIds);
				int getSpotDuration()const;
				void setSpotDuration(int spotDuration);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				bool getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(bool launchTemplateVersion);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				std::string getStorageSetId()const;
				void setStorageSetId(const std::string& storageSetId);
				std::string getSystemDiskSize()const;
				void setSystemDiskSize(const std::string& systemDiskSize);
				std::string getSystemDiskDescription()const;
				void setSystemDiskDescription(const std::string& systemDiskDescription);

            private:
				std::string launchTemplateName_;
				bool resourceOwnerId_;
				bool uniqueSuffix_;
				std::string hpcClusterId_;
				bool callerParentId_;
				std::string securityEnhancementStrategy_;
				std::string keyPairName_;
				std::string proxy_original_source_ip_;
				float spotPriceLimit_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::string sourceRegionId_;
				bool deletionProtection_;
				std::string resourceGroupId_;
				std::string hostName_;
				std::string password_;
				std::string securityToken_;
				bool enable_;
				std::string callerBidEmail_;
				int storageSetPartitionNumber_;
				std::vector<Tag> tag_;
				bool callerUid_;
				int autoRenewPeriod_;
				int cpuOptionsCore_;
				int period_;
				bool dryRun_;
				std::string launchTemplateId_;
				int ipv6AddressCount_;
				std::string cpuOptionsNuma_;
				bool ownerId_;
				std::string capacityReservationPreference_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::string vSwitchId_;
				std::string spotStrategy_;
				std::string privateIpAddress_;
				std::string periodUnit_;
				std::string instanceName_;
				bool autoRenew_;
				std::string requestId_;
				std::string akProxy_;
				std::string internetChargeType_;
				std::string zoneId_;
				std::vector<std::string> ipv6Address_;
				int internetMaxBandwidthIn_;
				std::string affinity_;
				std::string imageId_;
				std::string spotInterruptionBehavior_;
				std::string clientToken_;
				std::string ioOptimized_;
				std::string securityGroupId_;
				int internetMaxBandwidthOut_;
				bool proxy_original_security_transport_;
				std::string description_;
				int cpuOptionsThreadsPerCore_;
				std::string systemDiskCategory_;
				std::string capacityReservationId_;
				std::string accessKeyId_;
				std::string systemDiskPerformanceLevel_;
				std::string userData_;
				bool passwordInherit_;
				std::string regionId_;
				std::string requestContent_;
				std::string instanceType_;
				bool hibernationConfigured_;
				std::string instanceChargeType_;
				std::string callerUidEmail_;
				std::vector<NetworkInterface> networkInterface_;
				std::string deploymentSetId_;
				std::string app_ip_;
				int amount_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string tenancy_;
				std::string systemDiskDiskName_;
				std::string ramRoleName_;
				std::string autoReleaseTime_;
				std::string dedicatedHostId_;
				std::string callerBid_;
				std::string creditSpecification_;
				std::vector<std::string> securityGroupIds_;
				int spotDuration_;
				std::vector<DataDisk> dataDisk_;
				bool launchTemplateVersion_;
				bool proxy_trust_transport_info_;
				std::string storageSetId_;
				std::string systemDiskSize_;
				std::string systemDiskDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_