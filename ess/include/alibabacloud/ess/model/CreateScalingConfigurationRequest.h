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
#include <alibabacloud/ess/EssRequest.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT CreateScalingConfigurationRequest : public EssRequest
			{

			public:
				CreateScalingConfigurationRequest();
				~CreateScalingConfigurationRequest();

				int getDataDisk3Size()const;
				void setDataDisk3Size(int dataDisk3Size);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getDataDisk1SnapshotId()const;
				void setDataDisk1SnapshotId(const std::string& dataDisk1SnapshotId);
				std::string getDataDisk3Category()const;
				void setDataDisk3Category(const std::string& dataDisk3Category);
				std::string getDataDisk1Device()const;
				void setDataDisk1Device(const std::string& dataDisk1Device);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getDataDisk2Device()const;
				void setDataDisk2Device(const std::string& dataDisk2Device);
				std::vector<std::string> getInstanceTypes()const;
				void setInstanceTypes(const std::vector<std::string>& instanceTypes);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getDataDisk4Category()const;
				void setDataDisk4Category(const std::string& dataDisk4Category);
				std::string getDataDisk2SnapshotId()const;
				void setDataDisk2SnapshotId(const std::string& dataDisk2SnapshotId);
				int getDataDisk4Size()const;
				void setDataDisk4Size(int dataDisk4Size);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getDataDisk2Category()const;
				void setDataDisk2Category(const std::string& dataDisk2Category);
				int getDataDisk1Size()const;
				void setDataDisk1Size(int dataDisk1Size);
				std::string getDataDisk3SnapshotId()const;
				void setDataDisk3SnapshotId(const std::string& dataDisk3SnapshotId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getDataDisk2Size()const;
				void setDataDisk2Size(int dataDisk2Size);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScalingConfigurationName()const;
				void setScalingConfigurationName(const std::string& scalingConfigurationName);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getDataDisk2DeleteWithInstance()const;
				void setDataDisk2DeleteWithInstance(const std::string& dataDisk2DeleteWithInstance);
				std::string getDataDisk1Category()const;
				void setDataDisk1Category(const std::string& dataDisk1Category);
				std::string getDataDisk3DeleteWithInstance()const;
				void setDataDisk3DeleteWithInstance(const std::string& dataDisk3DeleteWithInstance);
				int getLoadBalancerWeight()const;
				void setLoadBalancerWeight(int loadBalancerWeight);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getDataDisk4SnapshotId()const;
				void setDataDisk4SnapshotId(const std::string& dataDisk4SnapshotId);
				std::string getDataDisk4Device()const;
				void setDataDisk4Device(const std::string& dataDisk4Device);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getDataDisk3Device()const;
				void setDataDisk3Device(const std::string& dataDisk3Device);
				std::string getDataDisk4DeleteWithInstance()const;
				void setDataDisk4DeleteWithInstance(const std::string& dataDisk4DeleteWithInstance);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				std::string getDataDisk1DeleteWithInstance()const;
				void setDataDisk1DeleteWithInstance(const std::string& dataDisk1DeleteWithInstance);

            private:
				int dataDisk3Size_;
				std::string imageId_;
				std::string dataDisk1SnapshotId_;
				std::string dataDisk3Category_;
				std::string dataDisk1Device_;
				std::string scalingGroupId_;
				std::string dataDisk2Device_;
				std::vector<std::string> instanceTypes_;
				std::string ioOptimized_;
				std::string securityGroupId_;
				int internetMaxBandwidthOut_;
				std::string securityEnhancementStrategy_;
				std::string keyPairName_;
				std::string systemDiskCategory_;
				std::string accessKeyId_;
				std::string userData_;
				std::string dataDisk4Category_;
				std::string dataDisk2SnapshotId_;
				int dataDisk4Size_;
				std::string instanceType_;
				std::string dataDisk2Category_;
				int dataDisk1Size_;
				std::string dataDisk3SnapshotId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int dataDisk2Size_;
				std::string ramRoleName_;
				long ownerId_;
				std::string scalingConfigurationName_;
				std::string tags_;
				std::string dataDisk2DeleteWithInstance_;
				std::string dataDisk1Category_;
				std::string dataDisk3DeleteWithInstance_;
				int loadBalancerWeight_;
				std::string instanceName_;
				int systemDiskSize_;
				std::string dataDisk4SnapshotId_;
				std::string dataDisk4Device_;
				std::string internetChargeType_;
				std::string dataDisk3Device_;
				std::string dataDisk4DeleteWithInstance_;
				int internetMaxBandwidthIn_;
				std::string dataDisk1DeleteWithInstance_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCALINGCONFIGURATIONREQUEST_H_