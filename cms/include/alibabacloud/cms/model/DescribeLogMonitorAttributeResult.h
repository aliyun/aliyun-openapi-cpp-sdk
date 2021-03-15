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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBELOGMONITORATTRIBUTERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBELOGMONITORATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeLogMonitorAttributeResult : public ServiceResult
			{
			public:
				struct LogMonitor
				{
					struct Aggregate
					{
						std::string function;
						std::string min;
						std::string max;
						std::string alias;
						std::string fieldName;
					};
					struct ValueFilterObject
					{
						std::string value;
						std::string _operator;
						std::string key;
					};
					std::string slsProject;
					std::vector<std::string> tumblingwindows;
					std::string slsLogstore;
					std::string metricExpress;
					long groupId;
					std::string metricName;
					long gmtCreate;
					std::vector<Aggregate> aggregates;
					std::vector<std::string> groupbys;
					std::vector<ValueFilterObject> valueFilter;
					std::string valueFilterRelation;
					long logId;
					std::string slsRegionId;
				};


				DescribeLogMonitorAttributeResult();
				explicit DescribeLogMonitorAttributeResult(const std::string &payload);
				~DescribeLogMonitorAttributeResult();
				std::string getMessage()const;
				LogMonitor getLogMonitor()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				LogMonitor logMonitor_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBELOGMONITORATTRIBUTERESULT_H_