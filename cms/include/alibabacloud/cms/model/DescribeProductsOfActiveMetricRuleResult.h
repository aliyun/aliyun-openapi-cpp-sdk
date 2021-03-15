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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeProductsOfActiveMetricRuleResult : public ServiceResult
			{
			public:
				struct AllProductInitMetricRule
				{
					struct AlertInitConfig
					{
						std::string metricName;
						std::string evaluationCount;
						std::string period;
						std::string _namespace;
						std::string statistics;
						std::string threshold;
					};
					std::vector<AllProductInitMetricRule::AlertInitConfig> alertInitConfigList;
					std::string product;
				};


				DescribeProductsOfActiveMetricRuleResult();
				explicit DescribeProductsOfActiveMetricRuleResult(const std::string &payload);
				~DescribeProductsOfActiveMetricRuleResult();
				std::string getMessage()const;
				std::vector<AllProductInitMetricRule> getAllProductInitMetricRuleList()const;
				std::string getDatapoints()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<AllProductInitMetricRule> allProductInitMetricRuleList_;
				std::string datapoints_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESULT_H_