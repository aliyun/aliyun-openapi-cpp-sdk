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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSRESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT ListCallDetailRecordsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct CallDetailRecord
					{
						std::string calledNumber;
						long ivrTime;
						std::string contactType;
						std::string contactDisposition;
						int satisfactionIndex;
						std::string contactId;
						std::string callingNumber;
						long talkTime;
						std::string releaseReason;
						bool recordingReady;
						std::string skillGroupNames;
						bool satisfactionSurveyOffered;
						long establishedTime;
						long queueTime;
						std::string skillGroupIds;
						std::string broker;
						std::string releaseInitiator;
						std::string instanceId;
						long startTime;
						std::string earlyMediaState;
						long ringTime;
						std::string callDuration;
						std::string calleeLocation;
						long releaseTime;
						std::string satisfactionSurveyChannel;
						std::string additionalBroker;
						std::string satisfactionDescription;
						std::string agentIds;
						long waitTime;
						std::string callerLocation;
						long dialingTime;
						std::string agentNames;
						long recordingDuration;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<CallDetailRecord> list;
				};


				ListCallDetailRecordsResult();
				explicit ListCallDetailRecordsResult(const std::string &payload);
				~ListCallDetailRecordsResult();
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
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSRESULT_H_