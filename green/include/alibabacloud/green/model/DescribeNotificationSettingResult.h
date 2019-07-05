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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBENOTIFICATIONSETTINGRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBENOTIFICATIONSETTINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeNotificationSettingResult : public ServiceResult
			{
			public:


				DescribeNotificationSettingResult();
				explicit DescribeNotificationSettingResult(const std::string &payload);
				~DescribeNotificationSettingResult();
				std::string getEmail()const;
				std::string getPhone()const;
				int getScheduleMessageTime()const;
				int getScheduleMessageTimeZone()const;
				std::vector<std::string> getReminderModeList()const;
				std::vector<std::string> getRealtimeMessageList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string email_;
				std::string phone_;
				int scheduleMessageTime_;
				int scheduleMessageTimeZone_;
				std::vector<std::string> reminderModeList_;
				std::vector<std::string> realtimeMessageList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBENOTIFICATIONSETTINGRESULT_H_