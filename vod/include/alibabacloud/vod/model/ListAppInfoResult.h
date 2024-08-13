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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTAPPINFORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_LISTAPPINFORESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT ListAppInfoResult : public ServiceResult
			{
			public:
				struct AppInfo
				{
					struct TagsItem
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string type;
					std::string description;
					std::string appId;
					std::string resourceGroupId;
					std::string creationTime;
					std::string modificationTime;
					std::string regionId;
					std::vector<AppInfo::TagsItem> tags;
					std::string appName;
				};


				ListAppInfoResult();
				explicit ListAppInfoResult(const std::string &payload);
				~ListAppInfoResult();
				int getTotal()const;
				std::vector<AppInfo> getAppInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int total_;
				std::vector<AppInfo> appInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTAPPINFORESULT_H_