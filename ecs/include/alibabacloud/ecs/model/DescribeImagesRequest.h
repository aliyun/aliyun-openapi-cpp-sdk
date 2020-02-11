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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeImagesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct Filter
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeImagesRequest();
				~DescribeImagesRequest();

				std::string getActionType()const;
				void setActionType(const std::string& actionType);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getUsage()const;
				void setUsage(const std::string& usage);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getImageOwnerAlias()const;
				void setImageOwnerAlias(const std::string& imageOwnerAlias);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				bool getIsSupportIoOptimized()const;
				void setIsSupportIoOptimized(bool isSupportIoOptimized);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				bool getIsSupportCloudinit()const;
				void setIsSupportCloudinit(bool isSupportCloudinit);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getArchitecture()const;
				void setArchitecture(const std::string& architecture);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				bool getShowExpired()const;
				void setShowExpired(bool showExpired);
				std::string getOSType()const;
				void setOSType(const std::string& oSType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<Filter> getFilter()const;
				void setFilter(const std::vector<Filter>& filter);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string actionType_;
				long resourceOwnerId_;
				std::string imageId_;
				std::string snapshotId_;
				std::string usage_;
				int pageNumber_;
				std::string imageOwnerAlias_;
				std::string resourceGroupId_;
				bool isSupportIoOptimized_;
				std::string regionId_;
				std::string imageName_;
				bool isSupportCloudinit_;
				int pageSize_;
				std::string instanceType_;
				std::vector<Tag> tag_;
				std::string architecture_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				bool showExpired_;
				std::string oSType_;
				long ownerId_;
				std::vector<Filter> filter_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESREQUEST_H_