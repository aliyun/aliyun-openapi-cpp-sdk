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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTORESUMMARYRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTORESUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeRestoreSummaryResult : public ServiceResult
			{
			public:
				struct Rescord
				{
					std::string status;
					std::string logProcess;
					std::string finishTime;
					std::string schemaProcess;
					std::string createTime;
					std::string recordId;
					std::string bulkLoadProcess;
					std::string hfileRestoreProcess;
				};


				DescribeRestoreSummaryResult();
				explicit DescribeRestoreSummaryResult(const std::string &payload);
				~DescribeRestoreSummaryResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				int getHasMoreRestoreRecord()const;
				std::vector<Rescord> getRescords()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				int hasMoreRestoreRecord_;
				std::vector<Rescord> rescords_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBERESTORESUMMARYRESULT_H_