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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeMetricRuleTemplateAttributeResult : public ServiceResult
			{
			public:
				struct Resource
				{
					struct AlertTemplate
					{
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
						struct Escalations
						{
							struct Info
							{
								std::string comparisonOperator;
								int times;
								std::string statistics;
								std::string threshold;
							};
							struct Warn
							{
								std::string comparisonOperator;
								int times;
								std::string statistics;
								std::string threshold;
							};
							struct Critical
							{
								std::string comparisonOperator;
								int times;
								std::string statistics;
								std::string threshold;
							};
							Critical critical;
							Info info;
							Warn warn;
						};
						std::string metricName;
						std::string category;
						Escalations escalations;
						CompositeExpression compositeExpression;
						std::string webhook;
						std::string _namespace;
						std::string noDataPolicy;
						std::string ruleName;
						std::string selector;
					};
					std::vector<AlertTemplate> alertTemplates;
					std::string hostAvailabilityTemplates;
					std::string description;
					std::string systemEventTemplates;
					std::string restVersion;
					std::string processMonitorTemplates;
					std::string templateId;
					std::string name;
				};


				DescribeMetricRuleTemplateAttributeResult();
				explicit DescribeMetricRuleTemplateAttributeResult(const std::string &payload);
				~DescribeMetricRuleTemplateAttributeResult();
				std::string getMessage()const;
				Resource getResource()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Resource resource_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESULT_H_