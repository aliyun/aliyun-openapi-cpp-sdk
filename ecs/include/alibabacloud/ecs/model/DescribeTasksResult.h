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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBETASKSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBETASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeTasksResult : public ServiceResult
			{
			public:
				struct Task
				{
					std::string taskId;
					std::vector<std::string> resourceIds;
					std::string resourceId;
					std::string taskGroupId;
					std::string supportCancel;
					std::string taskAction;
					std::string creationTime;
					std::string failedReason;
					std::string taskStatus;
					std::string finishedTime;
					std::string source;
				};


				DescribeTasksResult();
				explicit DescribeTasksResult(const std::string &payload);
				~DescribeTasksResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Task> getTaskSet()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Task> taskSet_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBETASKSRESULT_H_