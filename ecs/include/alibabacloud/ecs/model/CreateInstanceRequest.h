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

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateInstanceRequest : public EcsRequest
			{
				struct DataDisk
				{
					int size;
					std::string snapshotId;
					std::string category;
					std::string diskName;
					std::string description;
					std::string device;
					bool deleteWithInstance;
					bool encrypted;
				};

			public:
				CreateInstanceRequest();
				~CreateInstanceRequest();

				std::string getTag4Value()const;
				void setTag4Value(const std::string& tag4Value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTag2Key()const;
				void setTag2Key(const std::string& tag2Key);
				std::string getHpcClusterId()const;
				void setHpcClusterId(const std::string& hpcClusterId);
				std::string getTag3Key()const;
				void setTag3Key(const std::string& tag3Key);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				float getSpotPriceLimit()const;
				void setSpotPriceLimit(float spotPriceLimit);
				std::string getTag1Value()const;
				void setTag1Value(const std::string& tag1Value);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				std::string getNodeControllerId()const;
				void setNodeControllerId(const std::string& nodeControllerId);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getTag5Key()const;
				void setTag5Key(const std::string& tag5Key);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getTag4Key()const;
				void setTag4Key(const std::string& tag4Key);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				bool getUseAdditionalService()const;
				void setUseAdditionalService(bool useAdditionalService);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getVlanId()const;
				void setVlanId(const std::string& vlanId);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getTag3Value()const;
				void setTag3Value(const std::string& tag3Value);
				std::string getDeploymentSetId()const;
				void setDeploymentSetId(const std::string& deploymentSetId);
				std::string getInnerIpAddress()const;
				void setInnerIpAddress(const std::string& innerIpAddress);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSystemDiskDiskName()const;
				void setSystemDiskDiskName(const std::string& systemDiskDiskName);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				std::string getTag5Value()const;
				void setTag5Value(const std::string& tag5Value);
				std::string getTag1Key()const;
				void setTag1Key(const std::string& tag1Key);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getTag2Value()const;
				void setTag2Value(const std::string& tag2Value);
				std::string getSystemDiskDescription()const;
				void setSystemDiskDescription(const std::string& systemDiskDescription);

            private:
				std::string tag4Value_;
				long resourceOwnerId_;
				std::string tag2Key_;
				std::string hpcClusterId_;
				std::string tag3Key_;
				std::string securityEnhancementStrategy_;
				std::string keyPairName_;
				float spotPriceLimit_;
				std::string tag1Value_;
				std::string resourceGroupId_;
				std::string hostName_;
				std::string password_;
				int autoRenewPeriod_;
				std::string nodeControllerId_;
				int period_;
				std::string tag5Key_;
				long ownerId_;
				std::string vSwitchId_;
				std::string privateIpAddress_;
				std::string spotStrategy_;
				std::string periodUnit_;
				std::string instanceName_;
				bool autoRenew_;
				std::string internetChargeType_;
				std::string zoneId_;
				std::string tag4Key_;
				int internetMaxBandwidthIn_;
				bool useAdditionalService_;
				std::string imageId_;
				std::string clientToken_;
				std::string vlanId_;
				std::string ioOptimized_;
				std::string securityGroupId_;
				int internetMaxBandwidthOut_;
				std::string description_;
				std::string systemDiskCategory_;
				std::string userData_;
				std::string regionId_;
				std::string instanceType_;
				std::string instanceChargeType_;
				std::string tag3Value_;
				std::string deploymentSetId_;
				std::string innerIpAddress_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string systemDiskDiskName_;
				std::string ramRoleName_;
				std::string clusterId_;
				std::vector<DataDisk> dataDisk_;
				std::string tag5Value_;
				std::string tag1Key_;
				int systemDiskSize_;
				std::string tag2Value_;
				std::string systemDiskDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEINSTANCEREQUEST_H_