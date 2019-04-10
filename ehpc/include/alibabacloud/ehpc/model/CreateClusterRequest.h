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
				struct AdditionalVolumes
				{
					std::string volumeType;
					std::string volumeProtocol;
					std::string localDirectory;
					std::string remoteDirectory;
					RepeatList roles;
					std::string volumeId;
					std::string volumeMountpoint;
					std::string location;
					std::string jobQueue;
				};
				struct PostInstallScript
				{
					std::string args;
					std::string url;
				};
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
				std::vector<AdditionalVolumes> getAdditionalVolumes()const;
				void setAdditionalVolumes(const std::vector<AdditionalVolumes>& additionalVolumes);
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
				std::string getJobQueue()const;
				void setJobQueue(const std::string& jobQueue);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getImageOwnerAlias()const;
				void setImageOwnerAlias(const std::string& imageOwnerAlias);
				std::string getVolumeType()const;
				void setVolumeType(const std::string& volumeType);
				std::string getDeployMode()const;
				void setDeployMode(const std::string& deployMode);
				int getEcsOrderManagerCount()const;
				void setEcsOrderManagerCount(int ecsOrderManagerCount);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				int getEcsOrderLoginCount()const;
				void setEcsOrderLoginCount(int ecsOrderLoginCount);
				std::string getRemoteVisEnable()const;
				void setRemoteVisEnable(const std::string& remoteVisEnable);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getComputeSpotPriceLimit()const;
				void setComputeSpotPriceLimit(const std::string& computeSpotPriceLimit);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getVolumeProtocol()const;
				void setVolumeProtocol(const std::string& volumeProtocol);
				std::string getClientVersion()const;
				void setClientVersion(const std::string& clientVersion);
				std::string getOsTag()const;
				void setOsTag(const std::string& osTag);
				std::string getRemoteDirectory()const;
				void setRemoteDirectory(const std::string& remoteDirectory);
				int getEcsOrderComputeCount()const;
				void setEcsOrderComputeCount(int ecsOrderComputeCount);
				std::string getComputeSpotStrategy()const;
				void setComputeSpotStrategy(const std::string& computeSpotStrategy);
				std::vector<PostInstallScript> getPostInstallScript()const;
				void setPostInstallScript(const std::vector<PostInstallScript>& postInstallScript);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::vector<Application> getApplication()const;
				void setApplication(const std::vector<Application>& application);
				std::string getAutoRenew()const;
				void setAutoRenew(const std::string& autoRenew);
				std::string getEcsChargeType()const;
				void setEcsChargeType(const std::string& ecsChargeType);
				std::string getInputFileUrl()const;
				void setInputFileUrl(const std::string& inputFileUrl);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
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
				std::vector<AdditionalVolumes> additionalVolumes_;
				std::string ecsOrderManagerInstanceType_;
				std::string ehpcVersion_;
				std::string accountType_;
				std::string securityGroupId_;
				std::string description_;
				std::string keyPairName_;
				std::string securityGroupName_;
				std::string ecsOrderComputeInstanceType_;
				std::string jobQueue_;
				std::string accessKeyId_;
				std::string imageOwnerAlias_;
				std::string volumeType_;
				std::string deployMode_;
				int ecsOrderManagerCount_;
				std::string resourceGroupId_;
				std::string password_;
				int ecsOrderLoginCount_;
				std::string remoteVisEnable_;
				int systemDiskSize_;
				std::string computeSpotPriceLimit_;
				int autoRenewPeriod_;
				int period_;
				std::string volumeProtocol_;
				std::string clientVersion_;
				std::string osTag_;
				std::string remoteDirectory_;
				int ecsOrderComputeCount_;
				std::string computeSpotStrategy_;
				std::vector<PostInstallScript> postInstallScript_;
				std::string vSwitchId_;
				std::string periodUnit_;
				std::vector<Application> application_;
				std::string autoRenew_;
				std::string ecsChargeType_;
				std::string inputFileUrl_;
				std::string vpcId_;
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