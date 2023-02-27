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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTMEDIABASICINFOSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTMEDIABASICINFOSRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT ListMediaBasicInfosResult : public ServiceResult
			{
			public:
				struct MediaInfo
				{
					struct MediaBasicInfo
					{
						std::string description;
						std::string category;
						std::string userData;
						std::string businessType;
						long cateId;
						std::string inputURL;
						std::string source;
						std::string transcodeStatus;
						std::string modifiedTime;
						std::string referenceId;
						std::string mediaType;
						std::string snapshots;
						std::string status;
						std::string deletedTime;
						std::string createTime;
						std::string title;
						std::string acl;
						std::string publishState;
						std::string entityId;
						std::string biz;
						std::string mediaId;
						std::string spriteImages;
						std::string appId;
						std::string uploadSource;
						std::string coverURL;
						std::string mediaTags;
					};
					struct MediaDynamicInfo
					{
						struct DynamicMetaData
						{
							std::string entityId;
							std::string type;
							std::string data;
						};
						DynamicMetaData dynamicMetaData;
					};
					struct FileInfo
					{
						struct FileBasicInfo
						{
							std::string fileBusinessType;
							std::string fileStatus;
							std::string fileName;
							std::string createTime;
							std::string duration;
							std::string bitrate;
							std::string fileMediaType;
							std::string fileUrl;
							std::string modifiedTime;
							std::string fileType;
							std::string region;
							std::string formatName;
							std::string height;
							std::string width;
							std::string fileSize;
						};
						FileBasicInfo fileBasicInfo;
					};
					MediaDynamicInfo mediaDynamicInfo;
					std::string mediaId;
					std::vector<MediaInfo::FileInfo> fileInfoList;
					MediaBasicInfo mediaBasicInfo;
				};


				ListMediaBasicInfosResult();
				explicit ListMediaBasicInfosResult(const std::string &payload);
				~ListMediaBasicInfosResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<MediaInfo> getMediaInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<MediaInfo> mediaInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTMEDIABASICINFOSRESULT_H_