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

#ifndef ALIBABACLOUD_OOS_MODEL_STARTEXECUTIONRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_STARTEXECUTIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT StartExecutionResult : public ServiceResult
			{
			public:
				struct Execution
				{
					struct CurrentTask
					{
						std::string taskName;
						std::string taskAction;
						std::string taskExecutionId;
					};
					std::vector<CurrentTask> currentTasks;
					std::string status;
					std::string parentExecutionId;
					std::string loopMode;
					std::string parameters;
					std::string description;
					std::string resourceGroupId;
					bool isParent;
					std::string mode;
					std::string templateVersion;
					std::string endDate;
					std::string createDate;
					std::string statusMessage;
					std::string startDate;
					std::string updateDate;
					std::string safetyCheck;
					std::string outputs;
					std::string ramRole;
					std::string templateName;
					std::string counters;
					std::string executedBy;
					std::string tags;
					std::string templateId;
					std::string executionId;
				};


				StartExecutionResult();
				explicit StartExecutionResult(const std::string &payload);
				~StartExecutionResult();
				Execution getExecution()const;

			protected:
				void parse(const std::string &payload);
			private:
				Execution execution_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_STARTEXECUTIONRESULT_H_