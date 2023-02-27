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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTALLPUBLICMEDIATAGSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTALLPUBLICMEDIATAGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT ListAllPublicMediaTagsResult : public ServiceResult
			{
			public:
				struct MediaTag
				{
					struct Option
					{
						std::string optionId;
						std::string optionChineseName;
						std::string optionEnglishName;
					};
					std::vector<MediaTag::Option> options;
					std::string mediaTagNameChinese;
					std::string mediaTagNameEnglish;
					std::string mediaTagId;
				};


				ListAllPublicMediaTagsResult();
				explicit ListAllPublicMediaTagsResult(const std::string &payload);
				~ListAllPublicMediaTagsResult();
				std::vector<MediaTag> getMediaTagList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<MediaTag> mediaTagList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTALLPUBLICMEDIATAGSRESULT_H_