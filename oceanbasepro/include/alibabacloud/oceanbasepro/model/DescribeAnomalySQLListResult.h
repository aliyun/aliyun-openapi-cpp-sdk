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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEANOMALYSQLLISTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEANOMALYSQLLISTRESULT_H_

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
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeAnomalySQLListResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string suggestion;
					long executions;
					std::string diagnosisRule;
					std::string userName;
					std::string requestTimeUTCString;
					std::string dbName;
					float requestTime;
					std::string diagnosis;
					float cpuTime;
					long key;
					std::string sQLId;
					std::string sQLText;
				};


				DescribeAnomalySQLListResult();
				explicit DescribeAnomalySQLListResult(const std::string &payload);
				~DescribeAnomalySQLListResult();
				long getTotalCount()const;
				std::vector<Data> getAnomalySQLList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<Data> anomalySQLList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBEANOMALYSQLLISTRESULT_H_