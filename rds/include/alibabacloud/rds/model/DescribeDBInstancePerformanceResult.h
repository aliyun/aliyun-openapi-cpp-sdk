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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEPERFORMANCERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEPERFORMANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstancePerformanceResult : public ServiceResult
			{
			public:
				struct PerformanceKey
				{
					struct PerformanceValue
					{
						std::string value;
						std::string date;
					};
					std::string valueFormat;
					std::vector<PerformanceKey::PerformanceValue> values;
					std::string unit;
					std::string key;
				};


				DescribeDBInstancePerformanceResult();
				explicit DescribeDBInstancePerformanceResult(const std::string &payload);
				~DescribeDBInstancePerformanceResult();
				std::vector<PerformanceKey> getPerformanceKeys()const;
				std::string getEndTime()const;
				std::string getDBInstanceId()const;
				std::string getStartTime()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PerformanceKey> performanceKeys_;
				std::string endTime_;
				std::string dBInstanceId_;
				std::string startTime_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEPERFORMANCERESULT_H_