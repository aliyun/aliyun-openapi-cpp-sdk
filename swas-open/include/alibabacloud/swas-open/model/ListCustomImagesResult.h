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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_LISTCUSTOMIMAGESRESULT_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_LISTCUSTOMIMAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/swas-open/SWAS_OPENExport.h>

namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		namespace Model
		{
			class ALIBABACLOUD_SWAS_OPEN_EXPORT ListCustomImagesResult : public ServiceResult
			{
			public:
				struct CustomImage
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string description;
					bool inShare;
					std::string resourceGroupId;
					std::string instanceId;
					int requiredDataDiskSize;
					std::string sourceImageName;
					bool inShareUser;
					std::string systemSnapshotId;
					std::string systemSnapshotName;
					std::string sourceImageVersion;
					std::string dataSnapshotId;
					int requiredSystemDiskSize;
					std::string name;
					std::string dataSnapshotName;
					std::string instanceName;
					std::string osType;
					long userId;
					std::string creationTime;
					std::string imageId;
					std::vector<std::string> createInstances;
					std::string regionId;
					std::vector<CustomImage::Tag> tags;
				};


				ListCustomImagesResult();
				explicit ListCustomImagesResult(const std::string &payload);
				~ListCustomImagesResult();
				std::string getTotalCount()const;
				std::vector<CustomImage> getCustomImages()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::vector<CustomImage> customImages_;
				std::string pageSize_;
				std::string pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_LISTCUSTOMIMAGESRESULT_H_