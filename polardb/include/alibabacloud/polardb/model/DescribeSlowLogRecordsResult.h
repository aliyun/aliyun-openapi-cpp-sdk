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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSlowLogRecordsResult : public ServiceResult
			{
			public:
				struct SQLSlowRecord
				{
					long queryTimes;
					std::string sQLHash;
					std::string executionStartTime;
					long returnRowCounts;
					long lockTimes;
					std::string dBName;
					long parseRowCounts;
					std::string dBNodeId;
					std::string hostAddress;
					long queryTimeMS;
					std::string sQLText;
				};


				DescribeSlowLogRecordsResult();
				explicit DescribeSlowLogRecordsResult(const std::string &payload);
				~DescribeSlowLogRecordsResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::string getDBClusterId()const;
				std::vector<SQLSlowRecord> getItems()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::string dBClusterId_;
				std::vector<SQLSlowRecord> items_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESLOWLOGRECORDSRESULT_H_