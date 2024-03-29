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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTINGMETRICRULERESOURCESRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTINGMETRICRULERESOURCESRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeAlertingMetricRuleResourcesResult : public ServiceResult
			{
			public:
				struct Resource
				{
					struct Resource1
					{
						std::string comparisonOperator;
						std::string expression;
						int times;
						std::string preCondition;
						int level;
						std::string tag;
						std::string threshold;
					};
					std::vector<Resource::Resource1> escalation;
					std::string ruleId;
					std::string startTime;
					std::string resource;
					std::string dimensions;
					std::string metricValues;
					std::string _namespace;
					std::string lastModifyTime;
					std::string statistics;
					std::string groupId;
					std::string metricName;
					std::string lastAlertTime;
					std::string productCategory;
					std::string enable;
					int level;
					std::string retryTimes;
					std::string ruleName;
					std::string threshold;
				};


				DescribeAlertingMetricRuleResourcesResult();
				explicit DescribeAlertingMetricRuleResourcesResult(const std::string &payload);
				~DescribeAlertingMetricRuleResourcesResult();
				std::string getMessage()const;
				int getTotal()const;
				std::vector<Resource> getResources()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int total_;
				std::vector<Resource> resources_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALERTINGMETRICRULERESOURCESRESULT_H_