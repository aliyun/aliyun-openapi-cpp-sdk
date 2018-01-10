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
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeImagesRequest : public EcsRequest
			{

			public:
				DescribeImagesRequest();
				~DescribeImagesRequest();

				std::string getTag4Value()const;
				void setTag4Value(const std::string& tag4Value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getTag2Key()const;
				void setTag2Key(const std::string& tag2Key);
				std::string getFilter2Value()const;
				void setFilter2Value(const std::string& filter2Value);
				std::string getUsage()const;
				void setUsage(const std::string& usage);
				std::string getTag3Key()const;
				void setTag3Key(const std::string& tag3Key);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getImageOwnerAlias()const;
				void setImageOwnerAlias(const std::string& imageOwnerAlias);
				std::string getTag1Value()const;
				void setTag1Value(const std::string& tag1Value);
				bool getIsSupportIoOptimized()const;
				void setIsSupportIoOptimized(bool isSupportIoOptimized);
				std::string getFilter1Key()const;
				void setFilter1Key(const std::string& filter1Key);
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
				std::string getTag3Value()const;
				void setTag3Value(const std::string& tag3Value);
				std::string getArchitecture()const;
				void setArchitecture(const std::string& architecture);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getTag5Key()const;
				void setTag5Key(const std::string& tag5Key);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				bool getShowExpired()const;
				void setShowExpired(bool showExpired);
				std::string getFilter1Value()const;
				void setFilter1Value(const std::string& filter1Value);
				std::string getOSType()const;
				void setOSType(const std::string& oSType);
				std::string getFilter2Key()const;
				void setFilter2Key(const std::string& filter2Key);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTag5Value()const;
				void setTag5Value(const std::string& tag5Value);
				std::string getTag1Key()const;
				void setTag1Key(const std::string& tag1Key);
				std::string getTag2Value()const;
				void setTag2Value(const std::string& tag2Value);
				std::string getTag4Key()const;
				void setTag4Key(const std::string& tag4Key);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string tag4Value_;
				long resourceOwnerId_;
				std::string imageId_;
				std::string snapshotId_;
				std::string tag2Key_;
				std::string filter2Value_;
				std::string usage_;
				std::string tag3Key_;
				int pageNumber_;
				std::string imageOwnerAlias_;
				std::string tag1Value_;
				bool isSupportIoOptimized_;
				std::string filter1Key_;
				std::string regionId_;
				std::string imageName_;
				bool isSupportCloudinit_;
				int pageSize_;
				std::string instanceType_;
				std::string tag3Value_;
				std::string architecture_;
				bool dryRun_;
				std::string tag5Key_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				bool showExpired_;
				std::string filter1Value_;
				std::string oSType_;
				std::string filter2Key_;
				long ownerId_;
				std::string tag5Value_;
				std::string tag1Key_;
				std::string tag2Value_;
				std::string tag4Key_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESREQUEST_H_