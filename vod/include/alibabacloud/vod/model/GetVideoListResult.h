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

#ifndef ALIBABACLOUD_VOD_MODEL_GETVIDEOLISTRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETVIDEOLISTRESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetVideoListResult : public ServiceResult
			{
			public:
				struct Video
				{
					std::string status;
					std::string modifyTime;
					std::string videoId;
					std::string description;
					std::string userData;
					long size;
					std::string storageClass;
					std::string createTime;
					std::string title;
					std::string modificationTime;
					float duration;
					long cateId;
					std::string cateName;
					std::string restoreStatus;
					std::string restoreExpiration;
					std::string appId;
					std::string creationTime;
					std::string coverURL;
					std::string storageLocation;
					std::vector<std::string> snapshots;
					std::string tags;
				};


				GetVideoListResult();
				explicit GetVideoListResult(const std::string &payload);
				~GetVideoListResult();
				int getTotal()const;
				std::vector<Video> getVideoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int total_;
				std::vector<Video> videoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETVIDEOLISTRESULT_H_