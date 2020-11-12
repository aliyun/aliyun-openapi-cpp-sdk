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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_LISTSPARKJOBRESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_LISTSPARKJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT ListSparkJobResult : public ServiceResult
			{
			public:
				struct DataResult
				{
					struct Data
					{
						std::string executorInstances;
						std::string status;
						std::string vcName;
						std::string sparkUI;
						std::string driverResourceSpec;
						std::string createTime;
						std::string jobName;
						std::string executorResourceSpec;
						std::string submitTime;
						std::string createTimeValue;
						std::string updateTimeValue;
						std::string submitTimeValue;
						std::string updateTime;
						std::string detail;
						std::string jobId;
					};
					std::string totalCount;
					std::string pageSize;
					std::string pageNumber;
					std::vector<Data> jobList;
				};


				ListSparkJobResult();
				explicit ListSparkJobResult(const std::string &payload);
				~ListSparkJobResult();
				DataResult getDataResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataResult dataResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_LISTSPARKJOBRESULT_H_