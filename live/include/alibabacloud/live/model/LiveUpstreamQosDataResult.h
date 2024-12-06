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

#ifndef ALIBABACLOUD_LIVE_MODEL_LIVEUPSTREAMQOSDATARESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_LIVEUPSTREAMQOSDATARESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT LiveUpstreamQosDataResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct DetailDataItem
					{
						long statusCode2Xx;
						long connectDur;
						long firstFrameDur;
						long firstDataFailedCount;
						long statusCode5Xx;
						long statusCode3Xx;
						long firstFrameSuccessCount;
						long statusCode4Xx;
						long connectFailedCount;
						long count;
						std::string timestamp;
						long firstDataDur;
					};
					std::string cdnIsp;
					std::string upstreamDomain;
					std::string cdnDomain;
					std::string cdnOcid;
					std::string kwaiSidc;
					long kwaiTsc;
					std::string cdnProvince;
					std::vector<DataItem::DetailDataItem> detailData;
				};


				LiveUpstreamQosDataResult();
				explicit LiveUpstreamQosDataResult(const std::string &payload);
				~LiveUpstreamQosDataResult();
				std::string getEndTime()const;
				std::string getStartTime()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string startTime_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_LIVEUPSTREAMQOSDATARESULT_H_