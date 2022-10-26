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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGDUMPSTATUSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGDUMPSTATUSRESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeSqlLogDumpStatusResult : public ServiceResult
			{
			public:
				struct SqlLogDumpStatus
				{
					int status;
					std::string jobStatus;
					long processRows;
					long totalRows;
					std::string createTime;
					std::string failMsg;
					std::string updateTime;
					std::string jobName;
					std::string errorCode;
					std::string dumpStartTime;
				};


				DescribeSqlLogDumpStatusResult();
				explicit DescribeSqlLogDumpStatusResult(const std::string &payload);
				~DescribeSqlLogDumpStatusResult();
				std::string getEndpoint()const;
				int getDBInstanceID()const;
				std::string getIsEnableSqlLogDump()const;
				std::string getBucket()const;
				std::vector<SqlLogDumpStatus> getItems()const;
				std::string getDBInstanceName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endpoint_;
				int dBInstanceID_;
				std::string isEnableSqlLogDump_;
				std::string bucket_;
				std::vector<SqlLogDumpStatus> items_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBESQLLOGDUMPSTATUSRESULT_H_