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

#ifndef ALIBABACLOUD_SMC_MODEL_MODIFYREPLICATIONJOBATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_SMC_MODEL_MODIFYREPLICATIONJOBATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_SMC_EXPORT ModifyReplicationJobAttributeRequest : public RpcServiceRequest
			{
			public:
				struct DataDisk
				{
					int size;
					int index;
				};

			public:
				ModifyReplicationJobAttributeRequest();
				~ModifyReplicationJobAttributeRequest();

				std::string getTargetType()const;
				void setTargetType(const std::string& targetType);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getFrequency()const;
				void setFrequency(int frequency);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				std::string getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(const std::string& launchTemplateVersion);
				std::string getScheduledStartTime()const;
				void setScheduledStartTime(const std::string& scheduledStartTime);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getName()const;
				void setName(const std::string& name);
				int getMaxNumberOfImageToKeep()const;
				void setMaxNumberOfImageToKeep(int maxNumberOfImageToKeep);

            private:
				std::string targetType_;
				std::string description_;
				std::string accessKeyId_;
				int frequency_;
				std::string jobId_;
				std::string imageName_;
				int systemDiskSize_;
				std::string instanceType_;
				std::string launchTemplateId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::vector<DataDisk> dataDisk_;
				std::string launchTemplateVersion_;
				std::string scheduledStartTime_;
				std::string instanceId_;
				std::string name_;
				int maxNumberOfImageToKeep_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_MODIFYREPLICATIONJOBATTRIBUTEREQUEST_H_