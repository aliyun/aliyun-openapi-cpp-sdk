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

#ifndef ALIBABACLOUD_CCC_MODEL_SAVESTATSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_SAVESTATSREQUEST_H_

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
			class ALIBABACLOUD_CCC_EXPORT SaveStatsRequest : public RpcServiceRequest
			{

			public:
				SaveStatsRequest();
				~SaveStatsRequest();

				std::string getCallId()const;
				void setCallId(const std::string& callId);
				long getRecordTime()const;
				void setRecordTime(long recordTime);
				long getCallStartTime()const;
				void setCallStartTime(long callStartTime);
				std::string getUid()const;
				void setUid(const std::string& uid);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getStats()const;
				void setStats(const std::string& stats);
				std::string getTenantId()const;
				void setTenantId(const std::string& tenantId);
				std::string getCalleeNumber()const;
				void setCalleeNumber(const std::string& calleeNumber);
				std::string getCallerNumber()const;
				void setCallerNumber(const std::string& callerNumber);

            private:
				std::string callId_;
				long recordTime_;
				long callStartTime_;
				std::string uid_;
				std::string instanceId_;
				std::string stats_;
				std::string tenantId_;
				std::string calleeNumber_;
				std::string callerNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_SAVESTATSREQUEST_H_