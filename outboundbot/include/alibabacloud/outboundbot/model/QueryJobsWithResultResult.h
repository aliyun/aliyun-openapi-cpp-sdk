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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_QUERYJOBSWITHRESULTRESULT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_QUERYJOBSWITHRESULTRESULT_H_

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
			class ALIBABACLOUD_OUTBOUNDBOT_EXPORT QueryJobsWithResultResult : public ServiceResult
			{
			public:
				struct Jobs
				{
					struct Job
					{
						struct LatestTask
						{
							struct Contact
							{
								std::string role;
								std::string honorific;
								std::string referenceId;
								std::string state;
								int round;
								std::string phoneNumber;
								std::string id;
								std::string jobUuid;
								std::string preferredPhoneNumber;
								std::string name;
							};
							struct Extra
							{
								std::string value;
								std::string key;
							};
							struct TagHit
							{
								std::string tagName;
								std::string tagGroup;
							};
							struct ExceptionCode
							{
								std::string hint;
								std::string code;
							};
							std::string status;
							bool hasAnswered;
							bool hasHangUpByRejection;
							std::vector<TagHit> tagHits;
							std::vector<ExceptionCode> dialExceptionCodes;
							std::string statusName;
							std::vector<Extra> extras;
							int callDuration;
							bool hasReachedEndOfFlow;
							Contact contact;
							bool hasLastPlaybackCompleted;
							std::string taskEndReason;
							std::string callDurationDisplay;
							long callTime;
						};
						std::string status;
						std::string statusName;
						std::string id;
						LatestTask latestTask;
						std::string jobFailureReason;
					};
					int pageSize;
					int pageCount;
					int pageNumber;
					std::vector<Job> list;
					int rowCount;
				};


				QueryJobsWithResultResult();
				explicit QueryJobsWithResultResult(const std::string &payload);
				~QueryJobsWithResultResult();
				std::vector<std::string> getVariableNames()const;
				std::string getMessage()const;
				Jobs getJobs()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> variableNames_;
				std::string message_;
				Jobs jobs_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_QUERYJOBSWITHRESULTRESULT_H_