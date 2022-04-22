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

#ifndef ALIBABACLOUD_IOT_MODEL_UPDATESOUNDCODESCHEDULEREQUEST_H_
#define ALIBABACLOUD_IOT_MODEL_UPDATESOUNDCODESCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT UpdateSoundCodeScheduleRequest : public RpcServiceRequest
			{

			public:
				UpdateSoundCodeScheduleRequest();
				~UpdateSoundCodeScheduleRequest();

				std::string getScheduleCode()const;
				void setScheduleCode(const std::string& scheduleCode);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getStartDate()const;
				void setStartDate(const std::string& startDate);
				std::string getIotInstanceId()const;
				void setIotInstanceId(const std::string& iotInstanceId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getEndDate()const;
				void setEndDate(const std::string& endDate);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string scheduleCode_;
				std::string description_;
				std::string startTime_;
				std::string startDate_;
				std::string iotInstanceId_;
				std::string endTime_;
				std::string endDate_;
				std::string apiProduct_;
				std::string name_;
				std::string apiRevision_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_UPDATESOUNDCODESCHEDULEREQUEST_H_