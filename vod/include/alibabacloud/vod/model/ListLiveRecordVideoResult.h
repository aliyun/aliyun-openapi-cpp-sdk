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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTLIVERECORDVIDEORESULT_H_
#define ALIBABACLOUD_VOD_MODEL_LISTLIVERECORDVIDEORESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT ListLiveRecordVideoResult : public ServiceResult
			{
			public:
				struct LiveRecordVideo
				{
					struct Video
					{
						std::string status;
						std::string modifyTime;
						std::string videoId;
						std::string description;
						long size;
						std::string createTime;
						std::string downloadSwitch;
						std::string title;
						float duration;
						int cateId;
						std::string cateName;
						long customerId;
						std::string creationTime;
						std::string coverURL;
						int privilege;
						std::vector<std::string> snapshots;
						std::string tags;
						std::string templateGroupId;
					};
					struct PlayInfo
					{
						std::string streamType;
						std::string rand;
						long size;
						std::string definition;
						std::string fps;
						std::string duration;
						std::string bitrate;
						long encrypt;
						std::string complexity;
						std::string format;
						std::string playURL;
						std::string plaintext;
						long height;
						long width;
						std::string jobId;
					};
					std::string playlistId;
					std::string streamName;
					std::string recordStartTime;
					std::string recordEndTime;
					std::string domainName;
					Video video;
					std::vector<LiveRecordVideo::PlayInfo> playInfoList;
					std::string appName;
				};


				ListLiveRecordVideoResult();
				explicit ListLiveRecordVideoResult(const std::string &payload);
				~ListLiveRecordVideoResult();
				int getTotal()const;
				std::vector<LiveRecordVideo> getLiveRecordVideoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int total_;
				std::vector<LiveRecordVideo> liveRecordVideoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTLIVERECORDVIDEORESULT_H_