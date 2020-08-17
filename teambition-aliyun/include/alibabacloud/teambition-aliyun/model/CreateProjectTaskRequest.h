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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTTASKREQUEST_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teambition-aliyun/Teambition_aliyunExport.h>

namespace AlibabaCloud
{
	namespace Teambition_aliyun
	{
		namespace Model
		{
			class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT CreateProjectTaskRequest : public RpcServiceRequest
			{

			public:
				CreateProjectTaskRequest();
				~CreateProjectTaskRequest();

				std::string getNote()const;
				void setNote(const std::string& note);
				std::string getVisible()const;
				void setVisible(const std::string& visible);
				std::string getExecutorId()const;
				void setExecutorId(const std::string& executorId);
				std::string getTaskFlowStatusId()const;
				void setTaskFlowStatusId(const std::string& taskFlowStatusId);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				int getPriority()const;
				void setPriority(int priority);
				std::string getParentTaskId()const;
				void setParentTaskId(const std::string& parentTaskId);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);
				std::string getContent()const;
				void setContent(const std::string& content);
				std::string getSprintId()const;
				void setSprintId(const std::string& sprintId);
				std::string getDueDate()const;
				void setDueDate(const std::string& dueDate);
				std::string getScenarioFieldConfigId()const;
				void setScenarioFieldConfigId(const std::string& scenarioFieldConfigId);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getTaskListId()const;
				void setTaskListId(const std::string& taskListId);

            private:
				std::string note_;
				std::string visible_;
				std::string executorId_;
				std::string taskFlowStatusId_;
				std::string startDate_;
				int priority_;
				std::string parentTaskId_;
				std::string orgId_;
				std::string content_;
				std::string sprintId_;
				std::string dueDate_;
				std::string scenarioFieldConfigId_;
				std::string projectId_;
				std::string taskListId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_CREATEPROJECTTASKREQUEST_H_