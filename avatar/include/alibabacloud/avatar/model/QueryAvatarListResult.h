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

#ifndef ALIBABACLOUD_AVATAR_MODEL_QUERYAVATARLISTRESULT_H_
#define ALIBABACLOUD_AVATAR_MODEL_QUERYAVATARLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/avatar/AvatarExport.h>

namespace AlibabaCloud
{
	namespace Avatar
	{
		namespace Model
		{
			class ALIBABACLOUD_AVATAR_EXPORT QueryAvatarListResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ListItem
					{
						struct SupportedResolutions
						{
							struct OfflineItem
							{
								std::string desc;
								int height;
								int width;
							};
							struct OnlineItem
							{
								std::string desc;
								int height;
								int width;
							};
							std::vector<OfflineItem> offline;
							std::vector<OnlineItem> online;
						};
						std::string description;
						std::string makeStage;
						SupportedResolutions supportedResolutions;
						std::string portrait;
						std::string avatarType;
						std::string modelType;
						std::string makeStatus;
						std::string image;
						std::string code;
						std::string name;
						std::string makeFailReason;
					};
					int totalCount;
					int pageSize;
					int totalPage;
					std::vector<ListItem> list;
					int pageNo;
				};


				QueryAvatarListResult();
				explicit QueryAvatarListResult(const std::string &payload);
				~QueryAvatarListResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AVATAR_MODEL_QUERYAVATARLISTRESULT_H_