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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamTranscodeMetricDataResult : public ServiceResult
			{
			public:
				struct StreamData
				{
					std::string streamName;
					std::string fps;
					std::string region;
					long duration;
					std::string timeStamp;
					std::string transcodeType;
					std::string appName;
					std::string resolution;
				};


				DescribeLiveStreamTranscodeMetricDataResult();
				explicit DescribeLiveStreamTranscodeMetricDataResult(const std::string &payload);
				~DescribeLiveStreamTranscodeMetricDataResult();
				std::string getEndTime()const;
				int getPageSize()const;
				std::string getDomainName()const;
				std::string getNextPageToken()const;
				std::string getStartTime()const;
				std::vector<StreamData> getStreamDetailData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				int pageSize_;
				std::string domainName_;
				std::string nextPageToken_;
				std::string startTime_;
				std::vector<StreamData> streamDetailData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMTRANSCODEMETRICDATARESULT_H_