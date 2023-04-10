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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_GETQUERYRESULTRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_GETQUERYRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/datalake/DataLakeExport.h>

namespace AlibabaCloud
{
	namespace DataLake
	{
		namespace Model
		{
			class ALIBABACLOUD_DATALAKE_EXPORT GetQueryResultResult : public ServiceResult
			{
			public:


				GetQueryResultResult();
				explicit GetQueryResultResult(const std::string &payload);
				~GetQueryResultResult();
				std::string getStatus()const;
				long getOwner()const;
				int getProgress()const;
				std::string getEndTime()const;
				std::string getSchema()const;
				std::string getGmtModified()const;
				std::string getStartTime()const;
				long getDuration()const;
				std::string getLogs()const;
				bool getSuccess()const;
				std::string getSql()const;
				std::string getResultTmpDb()const;
				std::string getGmtCreate()const;
				bool getRowCountOverLimit()const;
				std::string getResultTmpTable()const;
				std::string getRegionId()const;
				std::string getId()const;
				long getTotalBytesProcessed()const;
				std::string getErrorMessage()const;
				int getRowCount()const;
				bool getJobCompleted()const;
				std::string getRows()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				long owner_;
				int progress_;
				std::string endTime_;
				std::string schema_;
				std::string gmtModified_;
				std::string startTime_;
				long duration_;
				std::string logs_;
				bool success_;
				std::string sql_;
				std::string resultTmpDb_;
				std::string gmtCreate_;
				bool rowCountOverLimit_;
				std::string resultTmpTable_;
				std::string regionId_;
				std::string id_;
				long totalBytesProcessed_;
				std::string errorMessage_;
				int rowCount_;
				bool jobCompleted_;
				std::string rows_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_GETQUERYRESULTRESULT_H_