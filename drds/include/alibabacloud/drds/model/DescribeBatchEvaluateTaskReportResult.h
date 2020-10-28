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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEBATCHEVALUATETASKREPORTRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEBATCHEVALUATETASKREPORTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeBatchEvaluateTaskReportResult : public ServiceResult
			{
			public:
				struct EvaluateResults
				{
					struct TableShardResultsItem
					{
						std::string shardType;
						int dbpartitions;
						std::string table;
						std::string dbShardKey;
						int tbpartitions;
						int sqlCount;
						std::string originDbShardMethod;
						std::string originTbShardMethod;
						std::string createTableSql;
						std::string tbShardMethod;
						std::string shardKeyType;
						std::string dbShardMethod;
						int rowCount;
						std::string tbShardKey;
					};
					struct RdsInstInfosItem
					{
						int rdsUsedSpace;
						std::string instId;
						int avgQpsGrowthScale;
						int rdsPeakIopsWeekly;
						int rdsPeakSessionsWeekly;
						int rdsPeakQpsWeekly;
						int dataGrowthScale;
					};
					std::string drdsType;
					int taskId;
					std::vector<EvaluateResults::RdsInstInfosItem> rdsInstInfos;
					std::string gmtModified;
					std::string taskStatus;
					std::vector<EvaluateResults::TableShardResultsItem> tableShardResults;
					int slowSqlCount;
					std::string gmtCreate;
					int instId;
					std::string taskName;
					int drdsCount;
					std::string rdsTotalSpace;
					std::string dbName;
					std::string rdsType;
					int rdsCount;
					int allSqlCount;
				};


				DescribeBatchEvaluateTaskReportResult();
				explicit DescribeBatchEvaluateTaskReportResult(const std::string &payload);
				~DescribeBatchEvaluateTaskReportResult();
				std::vector<EvaluateResults> getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EvaluateResults> data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEBATCHEVALUATETASKREPORTRESULT_H_