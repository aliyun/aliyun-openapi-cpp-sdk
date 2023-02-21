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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBETASKRESULT_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBETASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eflo-controller/Eflo_controllerExport.h>

namespace AlibabaCloud
{
	namespace Eflo_controller
	{
		namespace Model
		{
			class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT DescribeTaskResult : public ServiceResult
			{
			public:
				struct StepsItem
				{
					struct SubTasksItem
					{
						std::string taskId;
						std::string message;
						std::string taskType;
						std::string createTime;
						std::string updateTime;
						std::string taskState;
					};
					std::string stepState;
					std::string message;
					std::string stepType;
					std::string startTime;
					std::string updateTime;
					std::string stageTag;
					std::string stepName;
					std::vector<StepsItem::SubTasksItem> subTasks;
				};


				DescribeTaskResult();
				explicit DescribeTaskResult(const std::string &payload);
				~DescribeTaskResult();
				std::vector<StepsItem> getSteps()const;
				std::string getMessage()const;
				std::string getClusterId()const;
				std::string getTaskType()const;
				std::string getCreateTime()const;
				std::string getUpdateTime()const;
				std::string getClusterName()const;
				std::string getTaskState()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StepsItem> steps_;
				std::string message_;
				std::string clusterId_;
				std::string taskType_;
				std::string createTime_;
				std::string updateTime_;
				std::string clusterName_;
				std::string taskState_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_DESCRIBETASKRESULT_H_