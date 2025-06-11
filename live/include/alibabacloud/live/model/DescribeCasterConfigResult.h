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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERCONFIGRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERCONFIGRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeCasterConfigResult : public ServiceResult
			{
			public:
				struct RecordConfig
				{
					struct RecordFormatItem
					{
						std::string format;
						std::string sliceOssObjectPrefix;
						int cycleDuration;
						std::string ossObjectPrefix;
					};
					std::string ossEndpoint;
					std::vector<RecordFormatItem> recordFormat;
					std::string ossBucket;
					int onDemand;
				};
				struct TranscodeConfig
				{
					struct CustomParams
					{
						struct Video
						{
							int fps;
							int height;
							int bitrate;
							int width;
						};
						Video video;
					};
					std::string casterTemplate;
					std::vector<std::string> liveTemplateIds;
					CustomParams customParams;
				};
				struct SyncGroup
				{
					std::vector<std::string> resourceIds;
					int mode;
					std::string hostResourceId;
				};


				DescribeCasterConfigResult();
				explicit DescribeCasterConfigResult(const std::string &payload);
				~DescribeCasterConfigResult();
				int getChannelEnable()const;
				std::string getDomainName()const;
				std::string getAutoSwitchUrgentConfig()const;
				std::string getUrgentImageUrl()const;
				std::string getSideOutputUrlList()const;
				std::string getUrgentMaterialId()const;
				TranscodeConfig getTranscodeConfig()const;
				std::string getProgramName()const;
				std::string getUrgentImageId()const;
				float getDelay()const;
				std::string getCallbackUrl()const;
				std::string getSideOutputUrl()const;
				std::string getCasterName()const;
				int getProgramEffect()const;
				std::string getAutoSwitchUrgentOn()const;
				std::vector<SyncGroup> getSyncGroupsConfig()const;
				std::string getCasterId()const;
				RecordConfig getRecordConfig()const;
				std::string getUrgentLiveStreamUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				int channelEnable_;
				std::string domainName_;
				std::string autoSwitchUrgentConfig_;
				std::string urgentImageUrl_;
				std::string sideOutputUrlList_;
				std::string urgentMaterialId_;
				TranscodeConfig transcodeConfig_;
				std::string programName_;
				std::string urgentImageId_;
				float delay_;
				std::string callbackUrl_;
				std::string sideOutputUrl_;
				std::string casterName_;
				int programEffect_;
				std::string autoSwitchUrgentOn_;
				std::vector<SyncGroup> syncGroupsConfig_;
				std::string casterId_;
				RecordConfig recordConfig_;
				std::string urgentLiveStreamUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBECASTERCONFIGRESULT_H_