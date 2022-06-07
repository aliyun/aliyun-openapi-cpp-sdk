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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeSlowLogRecordsResult : public ServiceResult
			{
			public:
				struct SlowLogRecord
				{
					std::string outputSize;
					std::string userName;
					std::string peakMemoryUsage;
					std::string executionStartTime;
					long queryTime;
					long parseRowCounts;
					std::string hostAddress;
					long scanTime;
					std::string sQLText;
					long wallTime;
					long scanRows;
					std::string state;
					long returnRowCounts;
					long planningTime;
					std::string dBName;
					long queueTime;
					std::string scanSize;
					std::string processID;
				};


				DescribeSlowLogRecordsResult();
				explicit DescribeSlowLogRecordsResult(const std::string &payload);
				~DescribeSlowLogRecordsResult();
				std::string getTotalCount()const;
				std::string getPageSize()const;
				std::string getPageNumber()const;
				std::string getDBClusterId()const;
				std::vector<SlowLogRecord> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string pageSize_;
				std::string pageNumber_;
				std::string dBClusterId_;
				std::vector<SlowLogRecord> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_