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

#ifndef ALIBABACLOUD_VOD_MODEL_GETIMAGEINFOSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETIMAGEINFOSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetImageInfosResult : public ServiceResult
			{
			public:
				struct Image
				{
					struct Mezzanine
					{
						std::string fileURL;
						std::string originalFileName;
						int height;
						int width;
						std::string fileSize;
					};
					std::string status;
					std::string description;
					Mezzanine mezzanine;
					std::string title;
					long cateId;
					std::string cateName;
					std::string uRL;
					std::string imageType;
					std::string auditStatus;
					std::string appId;
					std::string creationTime;
					std::string imageId;
					std::string regionId;
					std::string storageLocation;
					std::string tags;
				};


				GetImageInfosResult();
				explicit GetImageInfosResult(const std::string &payload);
				~GetImageInfosResult();
				std::vector<std::string> getNonExistImageIds()const;
				std::vector<Image> getImageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistImageIds_;
				std::vector<Image> imageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETIMAGEINFOSRESULT_H_