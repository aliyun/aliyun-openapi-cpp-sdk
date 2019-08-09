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

#ifndef ALIBABACLOUD_VOD_MODEL_GETVIDEOINFOSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETVIDEOINFOSRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetVideoInfosResult : public ServiceResult
			{
			public:
				struct Video
				{
					struct Thumbnail
					{
						std::string uRL;
					};
					std::string status;
					std::string videoId;
					std::string description;
					long size;
					std::string downloadSwitch;
					std::string title;
					float duration;
					std::string modificationTime;
					long cateId;
					std::string cateName;
					std::vector<Video::Thumbnail> thumbnailList;
					std::string preprocessStatus;
					std::string customMediaInfo;
					std::string appId;
					std::string creationTime;
					std::string coverURL;
					std::string regionId;
					std::string storageLocation;
					std::vector<std::string> snapshots;
					std::string tags;
					std::string templateGroupId;
				};


				GetVideoInfosResult();
				explicit GetVideoInfosResult(const std::string &payload);
				~GetVideoInfosResult();
				std::vector<Video> getVideoList()const;
				std::vector<std::string> getNonExistVideoIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Video> videoList_;
				std::vector<std::string> nonExistVideoIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETVIDEOINFOSRESULT_H_