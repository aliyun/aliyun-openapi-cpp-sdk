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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASANOMALYSQLLISTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASANOMALYSQLLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeOasAnomalySQLListResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct SqlListItem
					{
						double avgCpuTime;
						double executions;
						double sumDbTime;
						std::string userName;
						std::string lastExecutedTime;
						double avgRetryCount;
						double avgGetPlanTime;
						double cpuTime;
						double sumRetryCount;
						std::string sqlId;
						double sumElapsedTime;
						std::string suggestion;
						std::string sqlTextShort;
						double avgElapsedTime;
						std::string dbName;
						double avgLogicalReads;
						std::string diagnosis;
						std::string riskLevel;
						double avgDbTime;
						std::vector<std::string> diagTypes1;
					};
					double avgCpuTime;
					double executions;
					bool dynamicSql;
					double sumDbTime;
					std::vector<DataItem::SqlListItem> sqlList;
					std::string userName;
					std::string lastExecutedTime;
					double avgRetryCount;
					double avgGetPlanTime;
					double cpuTime;
					double sumRetryCount;
					std::vector<std::string> diagTypes;
					std::string sqlId;
					double sumElapsedTime;
					std::string suggestion;
					std::string sqlTextShort;
					double avgElapsedTime;
					std::string dbName;
					double avgLogicalReads;
					std::string diagnosis;
					std::string riskLevel;
					double avgDbTime;
				};


				DescribeOasAnomalySQLListResult();
				explicit DescribeOasAnomalySQLListResult(const std::string &payload);
				~DescribeOasAnomalySQLListResult();
				long getTotalCount()const;
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEOASANOMALYSQLLISTRESULT_H_