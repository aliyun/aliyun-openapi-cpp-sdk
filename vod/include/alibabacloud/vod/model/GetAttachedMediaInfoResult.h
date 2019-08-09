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

#ifndef ALIBABACLOUD_VOD_MODEL_GETATTACHEDMEDIAINFORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETATTACHEDMEDIAINFORESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT GetAttachedMediaInfoResult : public ServiceResult
			{
			public:
				struct AttachedMedia
				{
					struct Category
					{
						long parentId;
						long level;
						long cateId;
						std::string cateName;
					};
					std::string status;
					std::string description;
					std::vector<AttachedMedia::Category> categories;
					std::string onlineStatus;
					std::string title;
					std::string modificationTime;
					std::string uRL;
					std::string type;
					std::string mediaId;
					std::string appId;
					std::string creationTime;
					std::string icon;
					std::string regionId;
					long storageLocation;
					std::string tags;
					long fileSize;
				};


				GetAttachedMediaInfoResult();
				explicit GetAttachedMediaInfoResult(const std::string &payload);
				~GetAttachedMediaInfoResult();
				std::vector<std::string> getNonExistMediaIds()const;
				std::vector<AttachedMedia> getAttachedMediaList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> nonExistMediaIds_;
				std::vector<AttachedMedia> attachedMediaList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETATTACHEDMEDIAINFORESULT_H_