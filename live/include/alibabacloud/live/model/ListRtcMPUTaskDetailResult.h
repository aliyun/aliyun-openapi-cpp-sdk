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

#ifndef ALIBABACLOUD_LIVE_MODEL_LISTRTCMPUTASKDETAILRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_LISTRTCMPUTASKDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT ListRtcMPUTaskDetailResult : public ServiceResult
			{
			public:
				struct MpuTask
				{
					struct SingleSubParams
					{
						std::string streamType;
						std::string userId;
						std::string sourceType;
					};
					struct TranscodeParams
					{
						struct Background
						{
							std::string renderMode;
							std::string uRL;
						};
						struct EncodeParams
						{
							std::string audioSampleRate;
							std::string audioBitrate;
							std::string audioChannels;
							std::string videoHeight;
							std::string audioOnly;
							std::string videoFramerate;
							std::string videoWidth;
							std::string videoGop;
							std::string enhancedParam;
							std::string videoCodec;
							std::string videoBitrate;
						};
						struct Layout
						{
							struct MaxVideoUser
							{
								std::string streamType;
								std::string userId;
								std::string sourceType;
								std::string channelId;
							};
							struct UserPane
							{
								struct UserInfo1
								{
									std::string userId;
									std::string sourceType;
									std::string channelId;
								};
								std::string backgroundImageUrl;
								std::string renderMode;
								std::string zOrder;
								std::string x;
								std::string y;
								std::string height;
								std::string width;
								UserInfo1 userInfo1;
							};
							std::vector<UserPane> userPanes;
							std::string layoutMode;
							MaxVideoUser maxVideoUser;
						};
						struct UserInfo
						{
							std::string streamType;
							std::string userId;
							std::string sourceType;
							std::string channelId;
						};
						Background background;
						Layout layout;
						EncodeParams encodeParams;
						std::vector<UserInfo> userInfos;
					};
					struct SeiParams
					{
						struct LayoutVolume
						{
							std::string followIdr;
							std::string interval;
						};
						struct PassThrough
						{
							std::string payloadContentKey;
							std::string payloadContent;
							std::string followIdr;
							std::string interval;
						};
						LayoutVolume layoutVolume;
						PassThrough passThrough;
						std::string payloadType;
					};
					struct MultiStreamURLItem
					{
						bool isAliCdn;
						std::string uRL;
					};
					std::string taskId;
					std::string mixMode;
					std::string appId;
					SeiParams seiParams;
					std::string region;
					SingleSubParams singleSubParams;
					TranscodeParams transcodeParams;
					std::string channelId;
					std::string maxIdleTime;
					std::vector<MpuTask::MultiStreamURLItem> multiStreamURL;
					std::string streamURL;
				};


				ListRtcMPUTaskDetailResult();
				explicit ListRtcMPUTaskDetailResult(const std::string &payload);
				~ListRtcMPUTaskDetailResult();
				std::vector<MpuTask> getMPUTasks()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<MpuTask> mPUTasks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_LISTRTCMPUTASKDETAILRESULT_H_