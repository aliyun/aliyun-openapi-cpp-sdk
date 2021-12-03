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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULELISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULELISTRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeMetricRuleListResult : public ServiceResult
			{
			public:
				struct Alarm
				{
					struct Escalations
					{
						struct Info
						{
							std::string comparisonOperator;
							int times;
							std::string preCondition;
							std::string statistics;
							std::string threshold;
						};
						struct Warn
						{
							std::string comparisonOperator;
							int times;
							std::string preCondition;
							std::string statistics;
							std::string threshold;
						};
						struct Critical
						{
							std::string comparisonOperator;
							int times;
							std::string preCondition;
							std::string statistics;
							std::string threshold;
						};
						Critical critical;
						Info info;
						Warn warn;
					};
					struct CompositeExpression
					{
						struct ExpressionListItem
						{
							std::string metricName;
							std::string comparisonOperator;
							int period;
							std::string id;
							std::string statistics;
							std::string threshold;
						};
						int times;
						std::string expressionRaw;
						std::string level;
						std::string expressionListJoin;
						std::vector<ExpressionListItem> expressionList;
					};
					struct Prometheus
					{
						struct AnnotationsItem
						{
							std::string value;
							std::string key;
						};
						std::vector<AnnotationsItem> annotations;
						std::string promQL;
						long times;
						std::string level;
					};
					struct LabelsItem
					{
						std::string value;
						std::string key;
					};
					std::string groupName;
					std::string noEffectiveInterval;
					std::string options;
					std::string mailSubject;
					std::string sourceType;
					std::string ruleId;
					Prometheus prometheus;
					std::string metricName;
					CompositeExpression compositeExpression;
					std::string ruleName;
					int silenceTime;
					std::string contactGroups;
					std::string groupBy;
					std::string period;
					std::string dimensions;
					std::vector<Alarm::LabelsItem> labels;
					std::string _namespace;
					std::string effectiveInterval;
					std::string noDataPolicy;
					std::string alertState;
					std::string groupId;
					Escalations escalations;
					bool enableState;
					std::string webhook;
					std::string resources;
				};


				DescribeMetricRuleListResult();
				explicit DescribeMetricRuleListResult(const std::string &payload);
				~DescribeMetricRuleListResult();
				std::string getMessage()const;
				std::string getTotal()const;
				std::vector<Alarm> getAlarms()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string total_;
				std::vector<Alarm> alarms_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULELISTRESULT_H_