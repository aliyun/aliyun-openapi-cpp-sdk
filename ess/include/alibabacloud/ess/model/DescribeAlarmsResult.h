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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEALARMSRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEALARMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeAlarmsResult : public ServiceResult
			{
			public:
				struct Alarm
				{
					struct Dimension
					{
						std::string dimensionValue;
						std::string dimensionKey;
					};
					struct Expression
					{
						std::string metricName;
						std::string comparisonOperator;
						int period;
						std::string statistics;
						float threshold;
					};
					struct HybridMetric
					{
						struct Dimension2
						{
							std::string dimensionValue;
							std::string dimensionKey;
						};
						std::string metricName;
						std::string statistic;
						std::string expression;
						std::vector<HybridMetric::Dimension2> dimensions1;
						std::string id;
					};
					std::string comparisonOperator;
					std::string description;
					std::string promQL;
					std::string scalingGroupId;
					std::string metricType;
					std::vector<Alarm::Dimension> dimensions;
					int evaluationCount;
					int period;
					std::vector<Alarm::HybridMetric> hybridMetrics;
					std::string statistics;
					std::string effective;
					std::string name;
					std::vector<std::string> alarmActions;
					std::string metricName;
					std::string expressionsLogicOperator;
					std::string state;
					std::string hybridMonitorNamespace;
					bool enable;
					std::vector<Alarm::Expression> expressions;
					std::string alarmTaskId;
					float threshold;
				};


				DescribeAlarmsResult();
				explicit DescribeAlarmsResult(const std::string &payload);
				~DescribeAlarmsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Alarm> getAlarmList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Alarm> alarmList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEALARMSRESULT_H_