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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUPVIDEOAUDIOINFORESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUPVIDEOAUDIOINFORESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveUpVideoAudioInfoResult : public ServiceResult
			{
			public:
				struct PublishItem
				{
					struct AacHeadersItem
					{
						int value;
						long time;
					};
					struct AudioBitRateItem
					{
						int value;
						long time;
					};
					struct AudioFramesItem
					{
						int value;
						long time;
					};
					struct AudioIntervalItem
					{
						int value;
						long time;
					};
					struct AudioStampsItem
					{
						int value;
						long time;
					};
					struct AvcHeadersItem
					{
						int value;
						long time;
					};
					struct ErrorFlagsItem
					{
						int value;
						long time;
					};
					struct V_AStamp
					{
						int value;
						long time;
					};
					struct VideoBitRateItem
					{
						int value;
						long time;
					};
					struct VideoFramesItem
					{
						int value;
						long time;
					};
					struct VideoIntervalItem
					{
						int value;
						long time;
					};
					struct VideoStampsItem
					{
						int value;
						long time;
					};
					std::vector<PublishItem::VideoStampsItem> videoStamps;
					std::vector<PublishItem::AudioBitRateItem> audioBitRate;
					std::vector<PublishItem::VideoFramesItem> videoFrames;
					std::string publishIp;
					std::string uniqueId;
					std::string domainName;
					std::vector<PublishItem::AacHeadersItem> aacHeaders;
					std::vector<PublishItem::AudioIntervalItem> audioInterval;
					std::vector<PublishItem::ErrorFlagsItem> errorFlags;
					std::vector<PublishItem::VideoBitRateItem> videoBitRate;
					std::string codecInfo;
					std::vector<PublishItem::AudioFramesItem> audioFrames;
					std::string appName;
					std::string publishInterval;
					std::string streamName;
					std::vector<PublishItem::VideoIntervalItem> videoInterval;
					std::vector<PublishItem::AudioStampsItem> audioStamps;
					std::string publishTime;
					std::vector<PublishItem::V_AStamp> videoAndAudioStamp;
					std::vector<PublishItem::AvcHeadersItem> avcHeaders;
					std::string publishStatus;
					std::string stopTime;
				};


				DescribeLiveUpVideoAudioInfoResult();
				explicit DescribeLiveUpVideoAudioInfoResult(const std::string &payload);
				~DescribeLiveUpVideoAudioInfoResult();
				std::vector<PublishItem> getUpItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PublishItem> upItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUPVIDEOAUDIOINFORESULT_H_