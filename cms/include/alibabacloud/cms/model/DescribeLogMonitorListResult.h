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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBELOGMONITORLISTRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBELOGMONITORLISTRESULT_H_

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
			class ALIBABACLOUD_CMS_EXPORT DescribeLogMonitorListResult : public ServiceResult
			{
			public:
				struct LogMonitor
				{
					struct ValueFilterObject
					{
						std::string value;
						std::string _operator;
						std::string key;
					};
					std::string metricName;
					std::string slsProject;
					long gmtCreate;
					std::vector<LogMonitor::ValueFilterObject> valueFilter;
					std::string valueFilterRelation;
					std::string slsLogstore;
					long logId;
					std::string slsRegionId;
					long groupId;
				};


				DescribeLogMonitorListResult();
				explicit DescribeLogMonitorListResult(const std::string &payload);
				~DescribeLogMonitorListResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				long getTotal()const;
				std::vector<LogMonitor> getLogMonitorList()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				long total_;
				std::vector<LogMonitor> logMonitorList_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBELOGMONITORLISTRESULT_H_