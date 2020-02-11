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

#ifndef ALIBABACLOUD_ECS_MODEL_IMPORTIMAGEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_IMPORTIMAGEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ImportImageRequest : public RpcServiceRequest
			{
			public:
				struct DiskDeviceMapping
				{
					std::string oSSBucket;
					int diskImSize;
					std::string format;
					std::string device;
					std::string oSSObject;
					int diskImageSize;
				};

			public:
				ImportImageRequest();
				~ImportImageRequest();

				std::vector<DiskDeviceMapping> getDiskDeviceMapping()const;
				void setDiskDeviceMapping(const std::vector<DiskDeviceMapping>& diskDeviceMapping);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				std::string getArchitecture()const;
				void setArchitecture(const std::string& architecture);
				std::string getLicenseType()const;
				void setLicenseType(const std::string& licenseType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRoleName()const;
				void setRoleName(const std::string& roleName);
				std::string getOSType()const;
				void setOSType(const std::string& oSType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::vector<DiskDeviceMapping> diskDeviceMapping_;
				long resourceOwnerId_;
				std::string description_;
				std::string platform_;
				std::string regionId_;
				std::string imageName_;
				std::string architecture_;
				std::string licenseType_;
				std::string resourceOwnerAccount_;
				std::string roleName_;
				std::string oSType_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_IMPORTIMAGEREQUEST_H_