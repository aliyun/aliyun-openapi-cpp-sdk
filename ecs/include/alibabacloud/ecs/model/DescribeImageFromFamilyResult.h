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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGEFROMFAMILYRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGEFROMFAMILYRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeImageFromFamilyResult : public ServiceResult
			{
			public:
				struct Image
				{
					struct DiskDeviceMapping
					{
						std::string snapshotId;
						std::string type;
						std::string format;
						std::string size;
						std::string device;
						std::string importOSSBucket;
						std::string importOSSObject;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string imageOwnerAlias;
					std::string progress;
					std::string usage;
					std::string isSelfShared;
					std::string description;
					std::string platform;
					std::string architecture;
					std::string productCode;
					int size;
					bool isSubscribed;
					bool isCopied;
					std::string imageFamily;
					std::string oSName;
					bool isSupportIoOptimized;
					bool isSupportCloudinit;
					std::string imageName;
					std::vector<DiskDeviceMapping> diskDeviceMappings;
					std::string imageVersion;
					std::string oSType;
					std::string creationTime;
					std::string imageId;
					std::vector<Tag> tags;
				};


				DescribeImageFromFamilyResult();
				explicit DescribeImageFromFamilyResult(const std::string &payload);
				~DescribeImageFromFamilyResult();
				Image getImage()const;

			protected:
				void parse(const std::string &payload);
			private:
				Image image_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEIMAGEFROMFAMILYRESULT_H_