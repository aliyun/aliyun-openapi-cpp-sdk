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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDIAGNOSISMONITORPERFORMANCERESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDIAGNOSISMONITORPERFORMANCERESULT_H_

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
			class ALIBABACLOUD_GPDB_EXPORT DescribeDiagnosisMonitorPerformanceResult : public ServiceResult
			{
			public:
				struct Item
				{
					std::string status;
					std::string user;
					std::string queryID;
					long startTime;
					std::string database;
					int cost;
				};


				DescribeDiagnosisMonitorPerformanceResult();
				explicit DescribeDiagnosisMonitorPerformanceResult(const std::string &payload);
				~DescribeDiagnosisMonitorPerformanceResult();
				bool getPerformancesTruncated()const;
				std::vector<Item> getPerformances()const;
				int getPerformancesThreshold()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool performancesTruncated_;
				std::vector<Item> performances_;
				int performancesThreshold_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDIAGNOSISMONITORPERFORMANCERESULT_H_