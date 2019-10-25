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

#ifndef ALIBABACLOUD_PUSH_MODEL_QUERYPUSHRECORDSREQUEST_H_
#define ALIBABACLOUD_PUSH_MODEL_QUERYPUSHRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/push/PushExport.h>

namespace AlibabaCloud
{
	namespace Push
	{
		namespace Model
		{
			class ALIBABACLOUD_PUSH_EXPORT QueryPushRecordsRequest : public RpcServiceRequest
			{

			public:
				QueryPushRecordsRequest();
				~QueryPushRecordsRequest();

				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getSource()const;
				void setSource(const std::string& source);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getTarget()const;
				void setTarget(const std::string& target);
				long getAppKey()const;
				void setAppKey(long appKey);
				std::string getPushType()const;
				void setPushType(const std::string& pushType);

            private:
				std::string startTime_;
				std::string source_;
				std::string accessKeyId_;
				std::string nextToken_;
				int pageSize_;
				std::string keyword_;
				std::string endTime_;
				std::string target_;
				long appKey_;
				std::string pushType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PUSH_MODEL_QUERYPUSHRECORDSREQUEST_H_