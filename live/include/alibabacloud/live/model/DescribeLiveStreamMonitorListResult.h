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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMMONITORLISTRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMMONITORLISTRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamMonitorListResult : public ServiceResult
			{
			public:
				struct LiveStreamMonitorInfo
				{
					struct OutputUrls
					{
						std::string flvUrl;
						std::string rtmpUrl;
					};
					struct InputConfig
					{
						struct LayoutConfig
						{
							std::string fillMode;
							std::vector<std::string> sizeNormalized;
							std::string positionRefer;
							std::vector<std::string> positionNormalized;
						};
						struct PlayConfig
						{
							float volumeRate;
						};
						std::string streamName;
						LayoutConfig layoutConfig;
						int layoutId;
						int index;
						PlayConfig playConfig;
						std::string inputUrl;
					};
					int status;
					OutputUrls outputUrls;
					int audioFrom;
					std::vector<LiveStreamMonitorInfo::InputConfig> inputList;
					std::string monitorName;
					std::string startTime;
					std::string callbackUrl;
					std::string outputTemplate;
					std::string dingTalkWebHookUrl;
					std::string region;
					std::string domain;
					std::string monitorId;
					std::string monitorConfig;
					std::string stopTime;
				};


				DescribeLiveStreamMonitorListResult();
				explicit DescribeLiveStreamMonitorListResult(const std::string &payload);
				~DescribeLiveStreamMonitorListResult();
				int getTotal()const;
				std::vector<LiveStreamMonitorInfo> getLiveStreamMonitorList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int total_;
				std::vector<LiveStreamMonitorInfo> liveStreamMonitorList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMMONITORLISTRESULT_H_