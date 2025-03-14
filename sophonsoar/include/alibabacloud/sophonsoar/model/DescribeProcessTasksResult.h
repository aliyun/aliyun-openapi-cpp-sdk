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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPROCESSTASKSRESULT_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPROCESSTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sophonsoar/SophonsoarExport.h>

namespace AlibabaCloud
{
	namespace Sophonsoar
	{
		namespace Model
		{
			class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeProcessTasksResult : public ServiceResult
			{
			public:
				struct Page
				{
					int totalCount;
					int pageSize;
					int pageNumber;
				};
				struct Data
				{
					std::string taskId;
					std::string entityName;
					std::string errMsg;
					std::string sceneCode;
					long processTime;
					std::string eventUuid;
					std::string creator;
					std::string source;
					std::string entityKey;
					std::string inputParams;
					long gmtCreateMillis;
					std::string sceneName;
					long removeTime;
					std::string triggerSource;
					std::string processStrategyUuid;
					std::string yunCode;
					std::string reqUuid;
					long gmtModifiedMillis;
					std::string entityValue;
					int taskStatus;
					std::string errCode;
					std::string errTip;
					std::string entityType;
					std::string tenantId;
					std::string entityUuid;
					std::string scope;
					std::string taskName;
					int removeFlag;
					int retryFlag;
				};


				DescribeProcessTasksResult();
				explicit DescribeProcessTasksResult(const std::string &payload);
				~DescribeProcessTasksResult();
				std::vector<Data> getProcessTasks()const;
				Page getPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> processTasks_;
				Page page_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPROCESSTASKSRESULT_H_