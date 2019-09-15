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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTLISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAlarmEventListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct SuspEventsItem
				{
					bool canCancelFault;
					std::string description;
					std::string alarmEventNameOriginal;
					long endTime;
					std::string operateErrorCode;
					std::string instanceId;
					std::string alarmEventName;
					std::string securityEventIds;
					long startTime;
					long gmtModified;
					std::string saleVersion;
					std::string intranetIp;
					bool dealed;
					bool hasTraceInfo;
					std::string dataSource;
					std::string instanceName;
					bool canBeDealOnLine;
					std::string uuid;
					std::string internetIp;
					std::string alarmEventType;
					int suspiciousEventCount;
					std::string alarmUniqueInfo;
					std::string level;
					std::string solution;
				};


				DescribeAlarmEventListResult();
				explicit DescribeAlarmEventListResult(const std::string &payload);
				~DescribeAlarmEventListResult();
				PageInfo getPageInfo()const;
				std::vector<SuspEventsItem> getSuspEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<SuspEventsItem> suspEvents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEALARMEVENTLISTRESULT_H_