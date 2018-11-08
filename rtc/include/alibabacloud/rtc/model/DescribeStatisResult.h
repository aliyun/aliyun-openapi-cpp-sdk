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

#ifndef ALIBABACLOUD_RTC_MODEL_DESCRIBESTATISRESULT_H_
#define ALIBABACLOUD_RTC_MODEL_DESCRIBESTATISRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT DescribeStatisResult : public ServiceResult
			{
			public:
				struct StatisInfo
				{
					struct DurationItem
					{
						float hdDuration;
						float sdDuration;
						float fhdDuration;
						float totalDuration;
						float audioDuration;
					};
					struct UserStatisItem
					{
						long conSessionPeak;
						std::string conSessionPeakTime;
						long activeUserCnt;
					};
					struct ChannelStatisItem
					{
						long accChannelCnt;
						std::string conChannelPeakTime;
						long conChannelPeak;
					};
					std::vector<StatisInfo::UserStatisItem> userStatis;
					std::vector<StatisInfo::DurationItem> duration;
					std::string time;
					std::vector<StatisInfo::ChannelStatisItem> channelStatis;
				};


				DescribeStatisResult();
				explicit DescribeStatisResult(const std::string &payload);
				~DescribeStatisResult();
				std::vector<StatisInfo> getStatisInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StatisInfo> statisInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_DESCRIBESTATISRESULT_H_