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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_GETPROJECTTASKINFORESULT_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_GETPROJECTTASKINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teambition-aliyun/Teambition_aliyunExport.h>

namespace AlibabaCloud
{
	namespace Teambition_aliyun
	{
		namespace Model
		{
			class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT GetProjectTaskInfoResult : public ServiceResult
			{
			public:
				struct Object
				{
					bool isDeleted;
					std::string updated;
					std::string creatorId;
					std::string priority;
					std::vector<std::string> involveMembers;
					std::string projectId;
					std::string taskflowstatusId;
					bool isDone;
					std::string sprintId;
					std::string storyPoint;
					std::string organizationId;
					std::string tasklistId;
					std::string created;
					std::string startDate;
					std::string executorId;
					bool isTopInProject;
					std::string content;
					std::string taskType;
					std::string note;
					std::string visible;
					std::string id;
					std::string dueDate;
				};


				GetProjectTaskInfoResult();
				explicit GetProjectTaskInfoResult(const std::string &payload);
				~GetProjectTaskInfoResult();
				std::string getErrorMsg()const;
				Object getObject()const;
				std::string getErrorCode()const;
				bool getSuccessful()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				Object object_;
				std::string errorCode_;
				bool successful_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_MODEL_GETPROJECTTASKINFORESULT_H_