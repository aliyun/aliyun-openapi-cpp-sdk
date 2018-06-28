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

			public:
				ModifyScalingConfigurationRequest();
				~ModifyScalingConfigurationRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::vector<std::string> getInstanceTypes()const;
				void setInstanceTypes(const std::vector<std::string>& instanceTypes);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScalingConfigurationName()const;
				void setScalingConfigurationName(const std::string& scalingConfigurationName);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getScalingConfigurationId()const;
				void setScalingConfigurationId(const std::string& scalingConfigurationId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				int getLoadBalancerWeight()const;
				void setLoadBalancerWeight(int loadBalancerWeight);
				bool getPasswordInherit()const;
				void setPasswordInherit(bool passwordInherit);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);

            private:
				std::string imageId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::vector<std::string> instanceTypes_;
				int internetMaxBandwidthOut_;
				std::string ramRoleName_;
				std::string keyPairName_;
				long ownerId_;
				std::string systemDiskCategory_;
				std::string accessKeyId_;
				std::string scalingConfigurationName_;
				std::string tags_;
				std::string scalingConfigurationId_;
				std::string userData_;
				std::string hostName_;
				std::string instanceName_;
				int loadBalancerWeight_;
				bool passwordInherit_;
				int systemDiskSize_;
				std::string internetChargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_MODIFYSCALINGCONFIGURATIONREQUEST_H_