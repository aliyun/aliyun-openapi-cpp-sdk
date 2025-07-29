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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERSTREAMMETRICDATARESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERSTREAMMETRICDATARESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveUserStreamMetricDataResult : public ServiceResult
			{
			public:
				struct StreamData
				{
					double p2pTraffic;
					long newConns;
					float bps;
					float rtmpBps;
					double hlsTraffic;
					double rtsTraffic;
					double traffic;
					long rtsCount;
					long count;
					long flvCount;
					float flvBps;
					std::string timeStamp;
					std::string appName;
					float p2pBps;
					double rtsBps;
					float hlsBps;
					double rtmpTraffic;
					std::string streamName;
					double flvTraffic;
					long rtmpCount;
					long hlsCount;
					long p2pCount;
				};


				DescribeLiveUserStreamMetricDataResult();
				explicit DescribeLiveUserStreamMetricDataResult(const std::string &payload);
				~DescribeLiveUserStreamMetricDataResult();
				long getTotalCount()const;
				std::string getEndTime()const;
				long getPageSize()const;
				std::string getDomainName()const;
				long getPageNumber()const;
				std::string getStartTime()const;
				std::vector<StreamData> getStreamDetailData()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string endTime_;
				long pageSize_;
				std::string domainName_;
				long pageNumber_;
				std::string startTime_;
				std::vector<StreamData> streamDetailData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEUSERSTREAMMETRICDATARESULT_H_