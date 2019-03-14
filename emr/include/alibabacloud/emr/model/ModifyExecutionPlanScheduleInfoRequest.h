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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANSCHEDULEINFOREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANSCHEDULEINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ModifyExecutionPlanScheduleInfoRequest : public RpcServiceRequest
			{

			public:
				ModifyExecutionPlanScheduleInfoRequest();
				~ModifyExecutionPlanScheduleInfoRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getTimeInterval()const;
				void setTimeInterval(int timeInterval);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDayOfWeek()const;
				void setDayOfWeek(const std::string& dayOfWeek);
				std::string getId()const;
				void setId(const std::string& id);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getStrategy()const;
				void setStrategy(const std::string& strategy);
				std::string getTimeUnit()const;
				void setTimeUnit(const std::string& timeUnit);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getDayOfMonth()const;
				void setDayOfMonth(const std::string& dayOfMonth);

            private:
				long resourceOwnerId_;
				int timeInterval_;
				std::string regionId_;
				std::string dayOfWeek_;
				std::string id_;
				long startTime_;
				std::string strategy_;
				std::string timeUnit_;
				std::string accessKeyId_;
				std::string dayOfMonth_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYEXECUTIONPLANSCHEDULEINFOREQUEST_H_