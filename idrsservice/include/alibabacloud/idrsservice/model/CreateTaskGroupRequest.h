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

#ifndef ALIBABACLOUD_IDRSSERVICE_MODEL_CREATETASKGROUPREQUEST_H_
#define ALIBABACLOUD_IDRSSERVICE_MODEL_CREATETASKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/idrsservice/IdrsserviceExport.h>

namespace AlibabaCloud
{
	namespace Idrsservice
	{
		namespace Model
		{
			class ALIBABACLOUD_IDRSSERVICE_EXPORT CreateTaskGroupRequest : public RpcServiceRequest
			{

			public:
				CreateTaskGroupRequest();
				~CreateTaskGroupRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getExpireAt()const;
				void setExpireAt(const std::string& expireAt);
				std::vector<int> getDay()const;
				void setDay(const std::vector<int>& day);
				std::string getRunnableTimeTo()const;
				void setRunnableTimeTo(const std::string& runnableTimeTo);
				std::string getTriggerPeriod()const;
				void setTriggerPeriod(const std::string& triggerPeriod);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::vector<std::string> getVideoUrl()const;
				void setVideoUrl(const std::vector<std::string>& videoUrl);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getRunnableTimeFrom()const;
				void setRunnableTimeFrom(const std::string& runnableTimeFrom);
				std::string getRuleId()const;
				void setRuleId(const std::string& ruleId);

            private:
				std::string clientToken_;
				std::string expireAt_;
				std::vector<int> day_;
				std::string runnableTimeTo_;
				std::string triggerPeriod_;
				std::string groupName_;
				std::vector<std::string> videoUrl_;
				std::string appId_;
				std::string runnableTimeFrom_;
				std::string ruleId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDRSSERVICE_MODEL_CREATETASKGROUPREQUEST_H_