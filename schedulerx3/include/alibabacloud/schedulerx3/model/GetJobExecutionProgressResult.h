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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_GETJOBEXECUTIONPROGRESSRESULT_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_GETJOBEXECUTIONPROGRESSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/schedulerx3/SchedulerX3Export.h>

namespace AlibabaCloud
{
	namespace SchedulerX3
	{
		namespace Model
		{
			class ALIBABACLOUD_SCHEDULERX3_EXPORT GetJobExecutionProgressResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TotalProgress
					{
						long finished;
						long total;
					};
					struct RootProgress
					{
						long finished;
						long total;
					};
					struct TaskProgressItem
					{
						int pulled;
						int failed;
						int total;
						int running;
						int queue;
						int success;
						std::string name;
					};
					struct ShardingProgressItem
					{
						struct StatusType
						{
							std::string code;
							std::string name;
							std::string tips;
						};
						int status;
						StatusType statusType;
						long id;
						std::string workerAddr;
						std::string jobExecutionId;
						std::string result;
					};
					struct WorkerProgressItem
					{
						int pulled;
						int failed;
						int total;
						int running;
						std::string traceId;
						int queue;
						std::string workerAddr;
						int success;
					};
					std::string jobDescription;
					TotalProgress totalProgress;
					RootProgress rootProgress;
					std::string statisticDetail;
					std::vector<WorkerProgressItem> workerProgress;
					std::vector<ShardingProgressItem> shardingProgress;
					std::vector<TaskProgressItem> taskProgress;
				};


				GetJobExecutionProgressResult();
				explicit GetJobExecutionProgressResult(const std::string &payload);
				~GetJobExecutionProgressResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_GETJOBEXECUTIONPROGRESSRESULT_H_