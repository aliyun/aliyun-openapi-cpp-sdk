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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSREQUEST_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT LookupEventsRequest : public RpcServiceRequest
			{

			public:
				LookupEventsRequest();
				~LookupEventsRequest();

				std::string getRequest()const;
				void setRequest(const std::string& request);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getEventName()const;
				void setEventName(const std::string& eventName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getServiceName()const;
				void setServiceName(const std::string& serviceName);
				std::string getEvent()const;
				void setEvent(const std::string& event);
				std::string getEventAccessKeyId()const;
				void setEventAccessKeyId(const std::string& eventAccessKeyId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getEventRW()const;
				void setEventRW(const std::string& eventRW);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getMaxResults()const;
				void setMaxResults(const std::string& maxResults);
				std::string getEventType()const;
				void setEventType(const std::string& eventType);
				std::string getResourceName()const;
				void setResourceName(const std::string& resourceName);
				std::string getUser()const;
				void setUser(const std::string& user);

            private:
				std::string request_;
				std::string startTime_;
				std::string eventName_;
				std::string accessKeyId_;
				std::string nextToken_;
				std::string serviceName_;
				std::string event_;
				std::string eventAccessKeyId_;
				std::string endTime_;
				std::string eventRW_;
				std::string resourceType_;
				std::string maxResults_;
				std::string eventType_;
				std::string resourceName_;
				std::string user_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSREQUEST_H_