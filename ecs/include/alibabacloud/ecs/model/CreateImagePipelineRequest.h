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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEIMAGEPIPELINEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEIMAGEPIPELINEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT CreateImagePipelineRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				CreateImagePipelineRequest();
				~CreateImagePipelineRequest();

				std::string getBaseImageType()const;
				void setBaseImageType(const std::string& baseImageType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::vector<std::string> getToRegionId()const;
				void setToRegionId(const std::vector<std::string>& toRegionId);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
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
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getBaseImage()const;
				void setBaseImage(const std::string& baseImage);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::vector<long> getAddAccount()const;
				void setAddAccount(const std::vector<long>& addAccount);
				bool getDeleteInstanceOnFailure()const;
				void setDeleteInstanceOnFailure(bool deleteInstanceOnFailure);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getBuildContent()const;
				void setBuildContent(const std::string& buildContent);

            private:
				std::string baseImageType_;
				long resourceOwnerId_;
				std::string clientToken_;
				std::vector<std::string> toRegionId_;
				int internetMaxBandwidthOut_;
				std::string description_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string imageName_;
				int systemDiskSize_;
				std::string instanceType_;
				std::vector<Tag> tag_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string baseImage_;
				std::string vSwitchId_;
				std::vector<long> addAccount_;
				bool deleteInstanceOnFailure_;
				std::string name_;
				std::string buildContent_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEIMAGEPIPELINEREQUEST_H_