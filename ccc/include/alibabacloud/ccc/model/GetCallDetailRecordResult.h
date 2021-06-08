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

#ifndef ALIBABACLOUD_CCC_MODEL_GETCALLDETAILRECORDRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETCALLDETAILRECORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT GetCallDetailRecordResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AgentEventsItem
					{
						struct EventSequenceItem
						{
							long eventTime;
							std::string event;
						};
						std::vector<AgentEventsItem::EventSequenceItem> eventSequence;
						std::string agentId;
						std::string agentName;
						std::string skillGroupId;
					};
					struct IvrEventsItem
					{
						struct EventSequenceItem2
						{
							long eventTime;
							std::string event;
						};
						std::string flowId;
						std::vector<IvrEventsItem::EventSequenceItem2> eventSequence1;
					};
					struct QueueEventsItem
					{
						struct EventSequenceItem4
						{
							long eventTime;
							std::string event;
						};
						std::string flowId;
						std::vector<QueueEventsItem::EventSequenceItem4> eventSequence3;
						std::string queueId;
						std::string queueName;
						int queueType;
					};
					std::vector<AgentEventsItem> agentEvents;
					std::string skillGroupIds;
					std::string calledNumber;
					std::string contactType;
					std::string contactDisposition;
					std::string instanceId;
					std::string releaseInitiator;
					int satisfaction;
					long startTime;
					std::string contactId;
					long callDuration;
					std::string callingNumber;
					std::vector<QueueEventsItem> queueEvents;
					long releaseTime;
					bool recordingReady;
					std::string skillGroupNames;
					std::string satisfactionSurveyChannel;
					std::string agentIds;
					bool satisfactionSurveyOffered;
					long establishedTime;
					std::string agentNames;
					std::vector<IvrEventsItem> ivrEvents;
				};


				GetCallDetailRecordResult();
				explicit GetCallDetailRecordResult(const std::string &payload);
				~GetCallDetailRecordResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETCALLDETAILRECORDRESULT_H_