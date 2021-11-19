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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEACTIVEMETRICRULELISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEACTIVEMETRICRULELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeActiveMetricRuleListResult : public ServiceResult
			{
			public:
				struct Alarm
				{
					std::string silenceTime;
					std::string contactGroups;
					std::string comparisonOperator;
					std::string endTime;
					std::string ruleId;
					std::string startTime;
					std::string evaluationCount;
					std::string period;
					std::string _namespace;
					std::string statistics;
					std::string metricName;
					std::string state;
					std::string enable;
					std::string webhook;
					std::string ruleName;
					std::string threshold;
				};
				struct Alert
				{
					struct Escalations
					{
						struct Info
						{
							std::string comparisonOperator;
							std::string times;
							std::string statistics;
							std::string threshold;
						};
						struct Warn
						{
							std::string comparisonOperator;
							std::string times;
							std::string statistics;
							std::string threshold;
						};
						struct Critical
						{
							std::string comparisonOperator;
							std::string times;
							std::string statistics;
							std::string threshold;
						};
						Critical critical;
						Info info;
						Warn warn;
					};
					std::string silenceTime;
					std::string contactGroups;
					std::string noEffectiveInterval;
					std::string mailSubject;
					std::string ruleId;
					std::string period;
					std::string dimensions;
					std::string _namespace;
					std::string effectiveInterval;
					std::string alertState;
					std::string metricName;
					Escalations escalations;
					bool enableState;
					std::string webhook;
					std::string resources;
					std::string ruleName;
				};


				DescribeActiveMetricRuleListResult();
				explicit DescribeActiveMetricRuleListResult(const std::string &payload);
				~DescribeActiveMetricRuleListResult();
				std::string getMessage()const;
				std::vector<Alert> getAlertList()const;
				std::vector<Alarm> getDatapoints()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Alert> alertList_;
				std::vector<Alarm> datapoints_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEACTIVEMETRICRULELISTRESULT_H_