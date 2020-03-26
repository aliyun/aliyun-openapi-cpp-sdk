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

#ifndef ALIBABACLOUD_SMC_MODEL_CREATEREPLICATIONJOBREQUEST_H_
#define ALIBABACLOUD_SMC_MODEL_CREATEREPLICATIONJOBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smc/SmcExport.h>

namespace AlibabaCloud
{
	namespace Smc
	{
		namespace Model
		{
			class ALIBABACLOUD_SMC_EXPORT CreateReplicationJobRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct DataDisk
				{
					int size;
					int index;
				};

			public:
				CreateReplicationJobRequest();
				~CreateReplicationJobRequest();

				std::string getTargetType()const;
				void setTargetType(const std::string& targetType);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getFrequency()const;
				void setFrequency(int frequency);
				std::string getReplicationParameters()const;
				void setReplicationParameters(const std::string& replicationParameters);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				int getNetMode()const;
				void setNetMode(int netMode);
				std::string getSourceId()const;
				void setSourceId(const std::string& sourceId);
				bool getRunOnce()const;
				void setRunOnce(bool runOnce);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getValidTime()const;
				void setValidTime(const std::string& validTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getScheduledStartTime()const;
				void setScheduledStartTime(const std::string& scheduledStartTime);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getName()const;
				void setName(const std::string& name);
				int getMaxNumberOfImageToKeep()const;
				void setMaxNumberOfImageToKeep(int maxNumberOfImageToKeep);

            private:
				std::string targetType_;
				std::string clientToken_;
				std::string description_;
				std::string accessKeyId_;
				int frequency_;
				std::string replicationParameters_;
				std::string regionId_;
				std::string imageName_;
				int systemDiskSize_;
				std::string instanceType_;
				std::vector<Tag> tag_;
				int netMode_;
				std::string sourceId_;
				bool runOnce_;
				std::string launchTemplateId_;
				std::string resourceOwnerAccount_;
				std::string validTime_;
				long ownerId_;
				std::vector<DataDisk> dataDisk_;
				std::string launchTemplateVersion_;
				std::string vSwitchId_;
				std::string scheduledStartTime_;
				std::string instanceId_;
				std::string vpcId_;
				std::string name_;
				int maxNumberOfImageToKeep_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_CREATEREPLICATIONJOBREQUEST_H_