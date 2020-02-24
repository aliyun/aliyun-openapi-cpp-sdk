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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBSRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBSRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListJobsResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Contact
					{
						std::string role;
						std::string honorific;
						std::string referenceId;
						std::string state;
						std::string phoneNumber;
						std::string contactId;
						std::string contactName;
						std::string jobId;
					};
					struct KeyValuePair
					{
						std::string value;
						std::string key;
					};
					struct Task
					{
						struct Contact2
						{
							std::string role;
							std::string honorific;
							std::string referenceId;
							std::string state;
							std::string phoneNumber;
							std::string contactId;
							std::string contactName;
							std::string jobId;
						};
						struct ConversationDetail
						{
							struct SummaryItem
							{
								std::string category;
								std::string content;
								std::string summaryName;
							};
							std::string script;
							std::vector<ConversationDetail::SummaryItem> summary1;
							long timestamp;
							std::string speaker;
						};
						std::string status;
						std::string chatbotId;
						long planedTime;
						std::string calledNumber;
						std::string taskId;
						std::string scenarioId;
						long actualTime;
						std::string callId;
						std::vector<Task::ConversationDetail> conversation;
						int duration;
						std::string brief;
						std::string callingNumber;
						Contact2 contact2;
						std::string jobId;
					};
					struct SummaryItem3
					{
						std::string category;
						std::string content;
						std::string summaryName;
					};
					std::string status;
					std::vector<Job::Task> tasks;
					std::string scenarioId;
					int priority;
					std::string strategyId;
					std::vector<Job::KeyValuePair> extras;
					std::string jobGroupId;
					std::vector<Job::Contact> contacts;
					std::string referenceId;
					int systemPriority;
					std::string failureReason;
					std::vector<Job::SummaryItem3> summary;
					std::string jobId;
					std::vector<std::string> callingNumbers;
				};


				ListJobsResult();
				explicit ListJobsResult(const std::string &payload);
				~ListJobsResult();
				std::string getMessage()const;
				std::vector<Job> getJobs()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Job> jobs_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTJOBSRESULT_H_