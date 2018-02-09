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

#ifndef ALIBABACLOUD_EHPC_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT CreateClusterRequest : public RpcServiceRequest
			{
				struct Application
				{
					std::string tag;
				};

			public:
				CreateClusterRequest();
				~CreateClusterRequest();

				std::string getSccClusterId()const;
				void setSccClusterId(const std::string& sccClusterId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getEcsOrderManagerInstanceType()const;
				void setEcsOrderManagerInstanceType(const std::string& ecsOrderManagerInstanceType);
				std::string getEhpcVersion()const;
				void setEhpcVersion(const std::string& ehpcVersion);
				std::string getAccountType()const;
				void setAccountType(const std::string& accountType);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::string getSecurityGroupName()const;
				void setSecurityGroupName(const std::string& securityGroupName);
				std::string getEcsOrderComputeInstanceType()const;
				void setEcsOrderComputeInstanceType(const std::string& ecsOrderComputeInstanceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getImageOwnerAlias()const;
				void setImageOwnerAlias(const std::string& imageOwnerAlias);
				std::string getVolumeType()const;
				void setVolumeType(const std::string& volumeType);
				int getEcsOrderManagerCount()const;
				void setEcsOrderManagerCount(int ecsOrderManagerCount);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				int getEcsOrderLoginCount()const;
				void setEcsOrderLoginCount(int ecsOrderLoginCount);
				std::string getComputeSpotPriceLimit()const;
				void setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit);
				std::string getVolumeProtocol()const;
				void setVolumeProtocol(const std::string& volumeProtocol);
				std::string getOsTag()const;
				void setOsTag(const std::string& osTag);
				std::string getRemoteDirectory()const;
				void setRemoteDirectory(const std::string& remoteDirectory);
				int getEcsOrderComputeCount()const;
				void setEcsOrderComputeCount(int ecsOrderComputeCount);
				std::string getComputeSpotStrategy()const;
				void setComputeSpotStrategy(const std::string& computeSpotStrategy);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::vector<Application> getApplication()const;
				void setApplication(const std::vector<Application>& application);
				std::string getEcsChargeType()const;
				void setEcsChargeType(const std::string& ecsChargeType);
				bool getHaEnable()const;
				void setHaEnable(bool haEnable);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getSchedulerType()const;
				void setSchedulerType(const std::string& schedulerType);
				std::string getVolumeId()const;
				void setVolumeId(const std::string& volumeId);
				std::string getVolumeMountpoint()const;
				void setVolumeMountpoint(const std::string& volumeMountpoint);
				std::string getEcsOrderLoginInstanceType()const;
				void setEcsOrderLoginInstanceType(const std::string& ecsOrderLoginInstanceType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				std::string sccClusterId_;
				std::string imageId_;
				std::string ecsOrderManagerInstanceType_;
				std::string ehpcVersion_;
				std::string accountType_;
				std::string securityGroupId_;
				std::string description_;
				std::string keyPairName_;
				std::string securityGroupName_;
				std::string ecsOrderComputeInstanceType_;
				std::string accessKeyId_;
				std::string imageOwnerAlias_;
				std::string volumeType_;
				int ecsOrderManagerCount_;
				std::string password_;
				int ecsOrderLoginCount_;
				std::string computeSpotPriceLimit_;
				std::string volumeProtocol_;
				std::string osTag_;
				std::string remoteDirectory_;
				int ecsOrderComputeCount_;
				std::string computeSpotStrategy_;
				std::string vSwitchId_;
				std::vector<Application> application_;
				std::string ecsChargeType_;
				bool haEnable_;
				std::string name_;
				std::string schedulerType_;
				std::string volumeId_;
				std::string volumeMountpoint_;
				std::string ecsOrderLoginInstanceType_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_CREATECLUSTERREQUEST_H_