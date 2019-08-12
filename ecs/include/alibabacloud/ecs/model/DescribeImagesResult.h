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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeImagesResult : public ServiceResult
			{
			public:
				struct Image
				{
					struct DiskDeviceMapping
					{
						std::string snapshotId;
						std::string type;
						std::string progress;
						std::string format;
						std::string size;
						std::string device;
						std::string importOSSBucket;
						std::string importOSSObject;
						int remainTime;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string imageOwnerAlias;
					std::string status;
					std::string progress;
					std::string usage;
					std::string description;
					std::string isSelfShared;
					std::string architecture;
					std::string platform;
					std::string resourceGroupId;
					std::string productCode;
					int size;
					bool isSubscribed;
					bool isCopied;
					std::string oSName;
					bool isSupportIoOptimized;
					bool isSupportCloudinit;
					std::string imageName;
					std::vector<Image::DiskDeviceMapping> diskDeviceMappings;
					std::string imageVersion;
					std::string oSType;
					std::string imageId;
					std::string creationTime;
					std::vector<Image::Tag> tags;
					std::string oSNameEn;
				};


				DescribeImagesResult();
				explicit DescribeImagesResult(const std::string &payload);
				~DescribeImagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Image> getImages()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Image> images_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGESRESULT_H_