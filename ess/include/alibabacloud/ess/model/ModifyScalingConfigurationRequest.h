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
			class ALIBABACLOUD_ESS_EXPORT ModifyScalingConfigurationRequest : public RpcServiceRequest
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
				ModifyScalingConfigurationRequest();
				~ModifyScalingConfigurationRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				int getMemory()const;
				void setMemory(int memory);
				std::string getHpcClusterId()const;
				void setHpcClusterId(const std::string& hpcClusterId);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::vector<std::string> getInstanceTypes()const;
				void setInstanceTypes(const std::vector<std::string>& instanceTypes);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::vector<SpotPriceLimit> getSpotPriceLimit()const;
				void setSpotPriceLimit(const std::vector<SpotPriceLimit>& spotPriceLimit);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				bool getPasswordInherit()const;
				void setPasswordInherit(bool passwordInherit);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				std::string getInstanceDescription()const;
				void setInstanceDescription(const std::string& instanceDescription);
				bool getOverride()const;
				void setOverride(bool override);
				std::string getDeploymentSetId()const;
				void setDeploymentSetId(const std::string& deploymentSetId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getCpu()const;
				void setCpu(int cpu);
				std::string getSystemDiskDiskName()const;
				void setSystemDiskDiskName(const std::string& systemDiskDiskName);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getSecurityGroupIds()const;
				void setSecurityGroupIds(const std::vector<std::string>& securityGroupIds);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				std::string getScalingConfigurationName()const;
				void setScalingConfigurationName(const std::string& scalingConfigurationName);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getScalingConfigurationId()const;
				void setScalingConfigurationId(const std::string& scalingConfigurationId);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				int getLoadBalancerWeight()const;
				void setLoadBalancerWeight(int loadBalancerWeight);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getSystemDiskDescription()const;
				void setSystemDiskDescription(const std::string& systemDiskDescription);

            private:
				std::string imageId_;
				int memory_;
				std::string hpcClusterId_;
				std::string ioOptimized_;
				std::vector<std::string> instanceTypes_;
				int internetMaxBandwidthOut_;
				std::string securityGroupId_;
				std::string keyPairName_;
				std::vector<SpotPriceLimit> spotPriceLimit_;
				std::string systemDiskCategory_;
				std::string accessKeyId_;
				std::string userData_;
				std::string resourceGroupId_;
				std::string hostName_;
				bool passwordInherit_;
				std::string imageName_;
				std::string instanceDescription_;
				bool override_;
				std::string deploymentSetId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int cpu_;
				std::string systemDiskDiskName_;
				std::string ramRoleName_;
				long ownerId_;
				std::vector<std::string> securityGroupIds_;
				std::vector<DataDisk> dataDisk_;
				std::string scalingConfigurationName_;
				std::string tags_;
				std::string scalingConfigurationId_;
				std::string spotStrategy_;
				std::string instanceName_;
				int loadBalancerWeight_;
				int systemDiskSize_;
				std::string internetChargeType_;
				std::string systemDiskDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGCONFIGURATIONREQUEST_H_