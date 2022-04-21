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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSASYNCRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSASYNCRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListJobGroupsAsyncResult : public ServiceResult
			{
			public:
				struct JobGroup
				{
					struct Strategy
					{
						long endTime;
						long startTime;
					};
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


				ListJobGroupsAsyncResult();
				explicit ListJobGroupsAsyncResult(const std::string &payload);
				~ListJobGroupsAsyncResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				bool getTimeout()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				std::vector<JobGroup> getJobGroups()const;
				bool getSuccess()const;
				bool getVaild()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				bool timeout_;
				int httpStatusCode_;
				std::string code_;
				std::vector<JobGroup> jobGroups_;
				bool success_;
				bool vaild_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBGROUPSASYNCRESULT_H_