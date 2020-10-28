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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEMYCATREPORTINFORESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEMYCATREPORTINFORESULT_H_

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
			class ALIBABACLOUD_DRDS_EXPORT DescribeMyCatReportInfoResult : public ServiceResult
			{
			public:
				struct EvaluateReportInfo
				{
					struct DbInfo
					{
						struct TableInfo
						{
							std::string tableName;
							std::string tbShardColumn;
							std::string dbShardAlgorithm;
							bool broadcast;
							int tbShardNum;
							std::string dbShardColumn;
							std::string tbShardAlgorithm;
							std::string createTableSql;
							std::string mycatShardAlgorithm;
							bool shard;
						};
						std::string dbName;
						std::vector<TableInfo> tableInfoList;
					};
					std::string rdsDiskCapacity;
					std::string rdsSpecs;
					int drdsNodeCount;
					DbInfo dbInfo;
					std::string drdsSpecs;
					int errorSqlCount;
					int rdsCount;
				};


				DescribeMyCatReportInfoResult();
				explicit DescribeMyCatReportInfoResult(const std::string &payload);
				~DescribeMyCatReportInfoResult();
				EvaluateReportInfo getEvaluateReportInfo()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				EvaluateReportInfo evaluateReportInfo_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEMYCATREPORTINFORESULT_H_