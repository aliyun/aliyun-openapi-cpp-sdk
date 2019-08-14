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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTRECORDINGOFDUALTRACKREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTRECORDINGOFDUALTRACKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListRecordingOfDualTrackRequest : public RpcServiceRequest
			{

			public:
				ListRecordingOfDualTrackRequest();
				~ListRecordingOfDualTrackRequest();

				std::string getCallingNumber()const;
				void setCallingNumber(const std::string& callingNumber);
				std::string getAgentId()const;
				void setAgentId(const std::string& agentId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getCalledNumber()const;
				void setCalledNumber(const std::string& calledNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getStartTime()const;
				void setStartTime(long startTime);
				long getStopTime()const;
				void setStopTime(long stopTime);
				std::string getConnectId()const;
				void setConnectId(const std::string& connectId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string callingNumber_;
				std::string agentId_;
				std::string instanceId_;
				std::string calledNumber_;
				int pageSize_;
				long startTime_;
				long stopTime_;
				std::string connectId_;
				int pageNumber_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTRECORDINGOFDUALTRACKREQUEST_H_