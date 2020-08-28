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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTTASKSRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListTasksResult : public ServiceResult
			{
			public:
				struct TaskInfo
				{
					std::string status;
					std::string errors;
					std::string taskId;
					std::string clusterId;
					std::string taskType;
					std::string request;
					int currentStep;
					int totalSteps;
					std::string result;
				};


				ListTasksResult();
				explicit ListTasksResult(const std::string &payload);
				~ListTasksResult();
				int getTotalCount()const;
				std::vector<TaskInfo> getTasks()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<TaskInfo> tasks_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTTASKSRESULT_H_