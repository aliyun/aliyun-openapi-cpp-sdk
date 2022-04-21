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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/outboundbot/OutboundBotExport.h>

namespace AlibabaCloud
{
	namespace OutboundBot
	{
		namespace Model
		{
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListJobGroupsResult : public ServiceResult
			{
			public:
				struct JobGroups
				{
					struct JobGroup
					{
						struct Progress
						{
							std::string status;
							int pausedNum;
							int failedNum;
							long startTime;
							int cancelledNum;
							int executingNum;
							int duration;
							int scheduling;
							int totalCompleted;
							int totalNotAnswered;
							int totalJobs;
						};
						struct ExportProgress
						{
							std::string status;
							std::string progress;
							std::string fileHttpUrl;
						};
						struct Strategy
						{
							long endTime;
							long startTime;
						};
						std::string status;
						std::string modifyTime;
						Progress progress;
						std::string jobDataParsingTaskId;
						std::string jobGroupName;
						std::string scriptVersion;
						std::string scriptId;
						std::string jobGroupDescription;
						std::string jobGroupId;
						int totalCallNum;
						std::string scriptName;
						long creationTime;
						Strategy strategy;
						ExportProgress exportProgress;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<JobGroup> list;
				};


				ListJobGroupsResult();
				explicit ListJobGroupsResult(const std::string &payload);
				~ListJobGroupsResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getAsyncTaskId()const;
				std::string getCode()const;
				JobGroups getJobGroups()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::string asyncTaskId_;
				std::string code_;
				JobGroups jobGroups_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSRESULT_H_