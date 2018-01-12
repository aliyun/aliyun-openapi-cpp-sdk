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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATESCHEDULEDTASKREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATESCHEDULEDTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ess/EssRequest.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT CreateScheduledTaskRequest : public EssRequest
			{

			public:
				CreateScheduledTaskRequest();
				~CreateScheduledTaskRequest();

				std::string getLaunchTime()const;
				void setLaunchTime(const std::string& launchTime);
				std::string getScheduledAction()const;
				void setScheduledAction(const std::string& scheduledAction);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getRecurrenceValue()const;
				void setRecurrenceValue(const std::string& recurrenceValue);
				int getLaunchExpirationTime()const;
				void setLaunchExpirationTime(int launchExpirationTime);
				std::string getRecurrenceEndTime()const;
				void setRecurrenceEndTime(const std::string& recurrenceEndTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getScheduledTaskName()const;
				void setScheduledTaskName(const std::string& scheduledTaskName);
				bool getTaskEnabled()const;
				void setTaskEnabled(bool taskEnabled);
				std::string getRecurrenceType()const;
				void setRecurrenceType(const std::string& recurrenceType);

            private:
				std::string launchTime_;
				std::string scheduledAction_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				std::string recurrenceValue_;
				int launchExpirationTime_;
				std::string recurrenceEndTime_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string scheduledTaskName_;
				bool taskEnabled_;
				std::string recurrenceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCHEDULEDTASKREQUEST_H_