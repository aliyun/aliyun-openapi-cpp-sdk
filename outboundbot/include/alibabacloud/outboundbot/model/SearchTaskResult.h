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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_SEARCHTASKRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_SEARCHTASKRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT SearchTaskResult : public ServiceResult
			{
			public:
				struct SearchTaskInfo
				{
					bool hasAnswered;
					bool hasHangUpByRejection;
					std::string calledNumber;
					std::string taskId;
					std::string taskStatusName;
					std::vector<std::string> dialExceptionCodes;
					bool hasReachedEndOfFlow;
					int jobStatus;
					std::string dialException;
					std::string jobStatusName;
					long taskCreateTime;
					std::string jobGroupId;
					bool hasLastPlaybackCompleted;
					int taskEndReason;
					std::string dialExceptionOld;
					std::string callDurationDisplay;
					std::string jobId;
					std::string userName;
					std::string instanceId;
					std::string jobGroupName;
					long actualTime;
					int taskStatus;
					std::string taskStatusString;
					int callDuration;
					std::string userId;
					std::string scriptName;
					std::string jobStatusString;
					int recordingDuration;
				};


				SearchTaskResult();
				explicit SearchTaskResult(const std::string &payload);
				~SearchTaskResult();
				std::string getMessage()const;
				int getPageSize()const;
				long getTotal()const;
				int getHttpStatusCode()const;
				int getPageIndex()const;
				std::string getCode()const;
				std::vector<SearchTaskInfo> getSearchTaskInfoList()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				long total_;
				int httpStatusCode_;
				int pageIndex_;
				std::string code_;
				std::vector<SearchTaskInfo> searchTaskInfoList_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_SEARCHTASKRESULT_H_