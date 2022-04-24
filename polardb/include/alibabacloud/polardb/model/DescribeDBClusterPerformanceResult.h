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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERPERFORMANCERESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERPERFORMANCERESULT_H_

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
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterPerformanceResult : public ServiceResult
			{
			public:
				struct PerformanceItem
				{
					struct PerformanceItemValue
					{
						std::string value;
						long timestamp;
					};
					std::string measurement;
					std::string metricName;
					std::vector<PerformanceItem::PerformanceItemValue> points;
					std::string dBNodeId;
				};


				DescribeDBClusterPerformanceResult();
				explicit DescribeDBClusterPerformanceResult(const std::string &payload);
				~DescribeDBClusterPerformanceResult();
				std::vector<PerformanceItem> getPerformanceKeys()const;
				std::string getDBVersion()const;
				std::string getEndTime()const;
				std::string getStartTime()const;
				std::string getDBClusterId()const;
				std::string getDBType()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PerformanceItem> performanceKeys_;
				std::string dBVersion_;
				std::string endTime_;
				std::string startTime_;
				std::string dBClusterId_;
				std::string dBType_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERPERFORMANCERESULT_H_