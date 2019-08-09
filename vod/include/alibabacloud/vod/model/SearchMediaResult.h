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

#ifndef ALIBABACLOUD_VOD_MODEL_SEARCHMEDIARESULT_H_
#define ALIBABACLOUD_VOD_MODEL_SEARCHMEDIARESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT SearchMediaResult : public ServiceResult
			{
			public:
				struct Media
				{
					struct Video
					{
						struct PlayInfo
						{
							std::string streamType;
							std::string rand;
							std::string size;
							std::string definition;
							std::string fps;
							std::string duration;
							std::string bitrate;
							long encrypt;
							std::string complexity;
							std::string format;
							std::string playURL;
							std::string plaintext;
							std::string height;
							std::string width;
							std::string jobId;
						};
						std::string description;
						std::vector<std::string> spriteSnapshots;
						long size;
						std::string auditAIStatus;
						std::string modificationTime;
						long cateId;
						std::string cateName;
						std::string preprocessStatus;
						std::string auditAIResult;
						std::string mediaType;
						std::string auditManualStatus;
						std::string auditTemplateId;
						std::string storageLocation;
						std::vector<std::string> snapshots;
						std::string tags;
						std::string status;
						std::string videoId;
						std::string downloadSwitch;
						std::string title;
						float duration;
						std::string auditStatus;
						std::string mediaSource;
						std::string customMediaInfo;
						std::string appId;
						std::string transcodeMode;
						std::string creationTime;
						std::string coverURL;
						std::string regionId;
						std::vector<PlayInfo> playInfoList;
					};
					struct Audio
					{
						struct PlayInfo4
						{
							std::string streamType;
							std::string rand;
							std::string size;
							std::string definition;
							std::string fps;
							std::string duration;
							std::string bitrate;
							long encrypt;
							std::string complexity;
							std::string format;
							std::string playURL;
							std::string plaintext;
							std::string height;
							std::string width;
							std::string jobId;
						};
						std::string description;
						long size;
						std::string auditAIStatus;
						std::string modificationTime;
						long cateId;
						std::string cateName;
						std::string preprocessStatus;
						std::string auditAIResult;
						std::string auditManualStatus;
						std::string auditTemplateId;
						std::vector<std::string> spriteSnapshots2;
						std::string storageLocation;
						std::string tags;
						std::vector<PlayInfo4> playInfoList3;
						std::string status;
						std::string downloadSwitch;
						std::string title;
						float duration;
						std::vector<std::string> snapshots1;
						std::string auditStatus;
						std::string mediaSource;
						std::string customMediaInfo;
						std::string appId;
						std::string transcodeMode;
						std::string creationTime;
						std::string coverURL;
						std::string regionId;
						std::string audioId;
					};
					struct Image
					{
						std::string ext;
						std::string status;
						std::string description;
						std::string title;
						std::string modificationTime;
						long cateId;
						std::string cateName;
						std::string uRL;
						std::string type;
						std::string appId;
						std::string imageId;
						std::string creationTime;
						std::string regionId;
						std::string storageLocation;
						std::string tags;
					};
					struct AttachedMedia
					{
						struct Category
						{
							long parentId;
							long level;
							long cateId;
							std::string cateName;
						};
						std::string ext;
						std::string status;
						std::string description;
						std::vector<Category> categories;
						std::string businessType;
						std::string onlineStatus;
						std::string title;
						std::string modificationTime;
						std::string uRL;
						std::string mediaId;
						std::string appId;
						std::string creationTime;
						std::string regionId;
						std::string icon;
						std::string storageLocation;
						std::string tags;
					};
					AttachedMedia attachedMedia;
					std::string mediaId;
					Video video;
					std::string creationTime;
					std::string mediaType;
					Audio audio;
					Image image;
				};


				SearchMediaResult();
				explicit SearchMediaResult(const std::string &payload);
				~SearchMediaResult();
				std::vector<Media> getMediaList()const;
				std::string getScrollToken()const;
				long getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Media> mediaList_;
				std::string scrollToken_;
				long total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_SEARCHMEDIARESULT_H_