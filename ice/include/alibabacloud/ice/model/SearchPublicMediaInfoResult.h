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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHPUBLICMEDIAINFORESULT_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHPUBLICMEDIAINFORESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT SearchPublicMediaInfoResult : public ServiceResult
			{
			public:
				struct PublicMediaInfo
				{
					struct MediaInfo
					{
						struct MediaBasicInfo
						{
							std::string status;
							std::string description;
							std::string category;
							std::string userData;
							std::string deletedTime;
							std::string createTime;
							std::string businessType;
							std::string title;
							std::string source;
							std::string transcodeStatus;
							std::string mediaId;
							std::string modifiedTime;
							std::string spriteImages;
							std::string mediaType;
							std::string coverURL;
							std::string mediaTags;
							std::string snapshots;
						};
						struct DynamicMetaData
						{
							std::string type;
							std::string data;
						};
						std::string mediaId;
						DynamicMetaData dynamicMetaData;
						MediaBasicInfo mediaBasicInfo;
					};
					bool favorite;
					std::string remainingAuthTime;
					MediaInfo mediaInfo;
					bool authorized;
				};


				SearchPublicMediaInfoResult();
				explicit SearchPublicMediaInfoResult(const std::string &payload);
				~SearchPublicMediaInfoResult();
				long getTotalCount()const;
				std::vector<PublicMediaInfo> getPublicMediaInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<PublicMediaInfo> publicMediaInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHPUBLICMEDIAINFORESULT_H_