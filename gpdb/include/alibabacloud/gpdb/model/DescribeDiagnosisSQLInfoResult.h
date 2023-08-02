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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDIAGNOSISSQLINFORESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDIAGNOSISSQLINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeDiagnosisSQLInfoResult : public ServiceResult
			{
			public:


				DescribeDiagnosisSQLInfoResult();
				explicit DescribeDiagnosisSQLInfoResult(const std::string &payload);
				~DescribeDiagnosisSQLInfoResult();
				std::string getStatus()const;
				std::string getTextPlan()const;
				std::string getSortedMetrics()const;
				std::string getMaxOutputRows()const;
				std::string getSQLStmt()const;
				std::string getUser()const;
				std::string getQueryID()const;
				long getStartTime()const;
				std::string getDatabase()const;
				int getDuration()const;
				std::string getQueryPlan()const;
				std::string getSessionID()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string textPlan_;
				std::string sortedMetrics_;
				std::string maxOutputRows_;
				std::string sQLStmt_;
				std::string user_;
				std::string queryID_;
				long startTime_;
				std::string database_;
				int duration_;
				std::string queryPlan_;
				std::string sessionID_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDIAGNOSISSQLINFORESULT_H_