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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATESCALINGCONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATESCALINGCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT CreateScalingConfigurationRequest : public RpcServiceRequest
			{
				struct SpotPriceLimit
				{
					std::string instanceType;
					float priceLimit;
				};
				struct DataDisk
				{
					std::string diskName;
					std::string snapshotId;
					int size;
					std::string encrypted;
					std::string description;
					std::string category;
					std::string kMSKeyId;
					std::string device;
					bool deleteWithInstance;
				};

			public:
				CreateScalingConfigurationRequest();
				~CreateScalingConfigurationRequest();

				std::string getHpcClusterId()const;
				void setHpcClusterId(const std::string& hpcClusterId);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::vector<SpotPriceLimit> getSpotPriceLimit()const;
				void setSpotPriceLimit(const std::vector<SpotPriceLimit>& spotPriceLimit);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getInstanceDescription()const;
				void setInstanceDescription(const std::string& instanceDescription);
				int getCpu()const;
				void setCpu(int cpu);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScalingConfigurationName()const;
				void setScalingConfigurationName(const std::string& scalingConfigurationName);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				int getMemory()const;
				void setMemory(int memory);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::vector<std::string> getInstanceTypes()const;
				void setInstanceTypes(const std::vector<std::string>& instanceTypes);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				bool getPasswordInherit()const;
				void setPasswordInherit(bool passwordInherit);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getDeploymentSetId()const;
				void setDeploymentSetId(const std::string& deploymentSetId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getSystemDiskDiskName()const;
				void setSystemDiskDiskName(const std::string& systemDiskDiskName);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				std::vector<std::string> getSecurityGroupIds()const;
				void setSecurityGroupIds(const std::vector<std::string>& securityGroupIds);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				int getLoadBalancerWeight()const;
				void setLoadBalancerWeight(int loadBalancerWeight);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getSystemDiskDescription()const;
				void setSystemDiskDescription(const std::string& systemDiskDescription);

            private:
				std::string hpcClusterId_;
				std::string securityEnhancementStrategy_;
				std::string keyPairName_;
				std::vector<SpotPriceLimit> spotPriceLimit_;
				std::string resourceGroupId_;
				std::string hostName_;
				std::string password_;
				std::string instanceDescription_;
				int cpu_;
				long ownerId_;
				std::string scalingConfigurationName_;
				std::string tags_;
				std::string spotStrategy_;
				std::string instanceName_;
				std::string internetChargeType_;
				int internetMaxBandwidthIn_;
				std::string imageId_;
				int memory_;
				std::string clientToken_;
				std::string scalingGroupId_;
				std::vector<std::string> instanceTypes_;
				std::string ioOptimized_;
				std::string securityGroupId_;
				int internetMaxBandwidthOut_;
				std::string systemDiskCategory_;
				std::string accessKeyId_;
				std::string userData_;
				bool passwordInherit_;
				std::string imageName_;
				std::string instanceType_;
				std::string deploymentSetId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string systemDiskDiskName_;
				std::string ramRoleName_;
				std::vector<std::string> securityGroupIds_;
				std::vector<DataDisk> dataDisk_;
				int loadBalancerWeight_;
				int systemDiskSize_;
				std::string systemDiskDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCALINGCONFIGURATIONREQUEST_H_