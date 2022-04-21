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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeJobResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct Script
					{
						std::string status;
						std::string chatbotId;
						bool miniPlaybackConfigEnabled;
						std::string scriptDescription;
						std::string scriptId;
						std::string debugStatus;
						std::string scene;
						bool isDebugDrafted;
						std::string name;
						std::string industry;
						std::string asrConfig;
						bool isDrafted;
						long updateTime;
						std::string ttsConfig;
					};
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
					struct SummaryItem
					{
						std::string category;
						std::string content;
						std::string summaryName;
					};
					struct Task
					{
						struct Contact3
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
							struct SummaryItem2
							{
								std::string category;
								std::string content;
								std::string summaryName;
							};
							std::string script;
							std::string action;
							std::vector<ConversationDetail::SummaryItem2> summary1;
							std::string actionParams;
							long timestamp;
							std::string speaker;
							std::string sequenceId;
						};
						std::string status;
						long planedTime;
						std::string chatbotId;
						std::string calledNumber;
						std::string scenarioId;
						std::string taskId;
						long endTime;
						long actualTime;
						std::string callId;
						std::vector<Task::ConversationDetail> conversation;
						int duration;
						std::string brief;
						std::string callingNumber;
						long ringingDuration;
						std::string endReason;
						Contact3 contact3;
						std::string hangUpDirection;
						std::string jobId;
					};
					std::string status;
					Script script;
					std::string calledNumber;
					std::vector<Task> tasks;
					std::string scenarioId;
					std::string instanceId;
					long actualTime;
					int priority;
					std::string strategyId;
					std::vector<KeyValuePair> extras;
					std::string dsReport;
					long nextExecutionTime;
					std::string jobGroupId;
					int endReason;
					std::vector<Contact> contacts;
					std::string referenceId;
					std::string failureReason;
					int systemPriority;
					std::vector<SummaryItem> summary;
					std::string jobId;
					std::vector<std::string> callingNumbers;
				};


				DescribeJobResult();
				explicit DescribeJobResult(const std::string &payload);
				~DescribeJobResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Job getJob()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Job job_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBRESULT_H_