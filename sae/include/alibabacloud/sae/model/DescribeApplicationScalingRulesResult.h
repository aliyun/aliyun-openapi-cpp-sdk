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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeApplicationScalingRulesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ApplicationScalingRule
					{
						struct Timer
						{
							struct Schedule
							{
								int targetReplicas;
								std::string atTime;
								long minReplicas;
								long maxReplicas;
							};
							std::vector<Schedule> schedules;
							std::string period;
							std::string endDate;
							std::string beginDate;
						};
						struct Metric
						{
							struct MetricsStatus
							{
								struct CurrentMetric
								{
									std::string type;
									long currentValue;
									std::string name;
								};
								struct NextScaleMetric
								{
									int nextScaleInAverageUtilization;
									int nextScaleOutAverageUtilization;
									std::string name;
								};
								std::vector<NextScaleMetric> nextScaleMetrics;
								long desiredReplicas;
								std::vector<CurrentMetric> currentMetrics;
								long currentReplicas;
								long minReplicas;
								int nextScaleTimePeriod;
								long maxReplicas;
								std::string lastScaleTime;
							};
							struct ScaleUpRules
							{
								long step;
								long stabilizationWindowSeconds;
								bool disabled;
							};
							struct ScaleDownRules
							{
								long step;
								long stabilizationWindowSeconds;
								bool disabled;
							};
							struct Metric1
							{
								std::string slbId;
								std::string metricType;
								std::string vport;
								std::string slbLogstore;
								std::string slbProject;
								int metricTargetAverageUtilization;
							};
							std::vector<Metric1> metrics;
							int minReplicas;
							ScaleDownRules scaleDownRules;
							int maxReplicas;
							MetricsStatus metricsStatus;
							ScaleUpRules scaleUpRules;
						};
						bool scaleRuleEnabled;
						Timer timer;
						std::string appId;
						long lastDisableTime;
						int minReadyInstances;
						long createTime;
						long updateTime;
						Metric metric;
						int minReadyInstanceRatio;
						std::string scaleRuleName;
						std::string scaleRuleType;
					};
					int pageSize;
					int currentPage;
					std::vector<ApplicationScalingRule> applicationScalingRules;
					int totalSize;
				};


				DescribeApplicationScalingRulesResult();
				explicit DescribeApplicationScalingRulesResult(const std::string &payload);
				~DescribeApplicationScalingRulesResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_