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
					struct CdrAgentEventsItem
					{
						struct EventSequenceItem
						{
							long eventTime;
							std::string event;
						};
						std::vector<CdrAgentEventsItem::EventSequenceItem> eventSequence;
						std::string agentId;
						std::string agentName;
						std::string skillGroupId;
					};
					struct CdrIvrEventsItem
					{
						struct EventSequenceItem2
						{
							long eventTime;
							std::string event;
						};
						std::string flowId;
						std::vector<CdrIvrEventsItem::EventSequenceItem2> eventSequence1;
					};
					struct CdrQueueEventsItem
					{
						struct EventSequenceItem4
						{
							long eventTime;
							std::string event;
						};
						std::string flowId;
						std::vector<CdrQueueEventsItem::EventSequenceItem4> eventSequence3;
						std::string queueId;
						std::string queueName;
						int queueType;
					};
					std::string skillGroupIds;
					std::string calledNumber;
					std::string contactType;
					std::string contactDisposition;
					std::string instanceId;
					std::string releaseInitiator;
					std::vector<CdrIvrEventsItem> cdrIvrEvents;
					int satisfaction;
					long startTime;
					std::string contactId;
					long callDuration;
					std::string callingNumber;
					long releaseTime;
					bool recordingReady;
					std::string skillGroupNames;
					std::vector<CdrQueueEventsItem> cdrQueueEvents;
					std::string satisfactionSurveyChannel;
					std::string agentIds;
					bool satisfactionSurveyOffered;
					std::vector<CdrAgentEventsItem> cdrAgentEvents;
					long establishedTime;
					std::string agentNames;
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