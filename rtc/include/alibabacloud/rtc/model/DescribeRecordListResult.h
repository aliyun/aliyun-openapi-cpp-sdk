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

#ifndef ALIBABACLOUD_RTC_MODEL_DESCRIBERECORDLISTRESULT_H_
#define ALIBABACLOUD_RTC_MODEL_DESCRIBERECORDLISTRESULT_H_

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
			class ALIBABACLOUD_RTC_EXPORT DescribeRecordListResult : public ServiceResult
			{
			public:
				struct CommunicationRecordInfo
				{
					bool status;
					long totalUserCnt;
					std::string endTime;
					std::string startTime;
					std::vector<std::string> callAreas;
					std::string recordId;
					std::string channelId;
				};


				DescribeRecordListResult();
				explicit DescribeRecordListResult(const std::string &payload);
				~DescribeRecordListResult();
				long getPageSize()const;
				long getTotalCnt()const;
				long getPageNo()const;
				std::vector<CommunicationRecordInfo> getCommunicationRecordInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				long totalCnt_;
				long pageNo_;
				std::vector<CommunicationRecordInfo> communicationRecordInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_DESCRIBERECORDLISTRESULT_H_