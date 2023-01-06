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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeDiagnosticReportAttributesResult : public ServiceResult
			{
			public:
				struct MetricResult
				{
					struct Issue
					{
						std::string occurrenceTime;
						std::string additional;
						std::string severity;
						std::string issueId;
					};
					std::string status;
					std::string metricId;
					std::vector<MetricResult::Issue> issues;
					std::string severity;
					std::string metricCategory;
				};


				DescribeDiagnosticReportAttributesResult();
				explicit DescribeDiagnosticReportAttributesResult(const std::string &payload);
				~DescribeDiagnosticReportAttributesResult();
				std::string getStatus()const;
				std::string getEndTime()const;
				std::string getResourceId()const;
				std::string getMetricSetId()const;
				std::vector<MetricResult> getMetricResults()const;
				std::string getCreationTime()const;
				std::string getStartTime()const;
				std::string getAttributes()const;
				std::string getReportId()const;
				std::string getResourceType()const;
				std::string getSeverity()const;
				std::string getFinishedTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string endTime_;
				std::string resourceId_;
				std::string metricSetId_;
				std::vector<MetricResult> metricResults_;
				std::string creationTime_;
				std::string startTime_;
				std::string attributes_;
				std::string reportId_;
				std::string resourceType_;
				std::string severity_;
				std::string finishedTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESULT_H_