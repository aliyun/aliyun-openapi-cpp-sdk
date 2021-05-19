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

#ifndef ALIBABACLOUD_SCSP_MODEL_QUERYHOTLINESESSIONRESULT_H_
#define ALIBABACLOUD_SCSP_MODEL_QUERYHOTLINESESSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT QueryHotlineSessionResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct CallDetailRecordItem
					{
						int evaluationScore;
						std::string groupName;
						std::string callResult;
						std::string calledNumber;
						std::string acid;
						std::string createTime;
						int callType;
						int queueUpContinueTime;
						std::string hangUpTime;
						std::string callingNumber;
						long groupId;
						std::string inQueueTime;
						std::string memberId;
						std::string ringStartTime;
						std::string servicerName;
						std::string outQueueTime;
						int callContinueTime;
						std::string hangUpRole;
						std::string ringEndTime;
						std::string pickUpTime;
						std::string memberName;
						std::string servicerId;
						int evaluationLevel;
						int ringContinueTime;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<CallDetailRecordItem> callDetailRecord;
				};


				QueryHotlineSessionResult();
				explicit QueryHotlineSessionResult(const std::string &payload);
				~QueryHotlineSessionResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_QUERYHOTLINESESSIONRESULT_H_