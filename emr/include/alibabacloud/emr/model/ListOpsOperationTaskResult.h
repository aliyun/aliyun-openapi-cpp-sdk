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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTOPSOPERATIONTASKRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTOPSOPERATIONTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListOpsOperationTaskResult : public ServiceResult
			{
			public:
				struct TaskListItem
				{
					std::string status;
					long taskId;
					std::string endTime;
					long clusterId;
					long opsOperationId;
					std::string startTime;
					long hostId;
					std::string userId;
					long id;
					std::string regionId;
					std::string commandName;
					std::string externalClusterId;
					std::string hostName;
				};


				ListOpsOperationTaskResult();
				explicit ListOpsOperationTaskResult(const std::string &payload);
				~ListOpsOperationTaskResult();
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<TaskListItem> getTaskList()const;
				int getTotal()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				std::vector<TaskListItem> taskList_;
				int total_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTOPSOPERATIONTASKRESULT_H_