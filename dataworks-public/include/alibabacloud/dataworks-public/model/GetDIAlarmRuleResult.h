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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDIALARMRULERESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDIALARMRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDIAlarmRuleResult : public ServiceResult
			{
			public:
				struct DIAlarmRule
				{
					struct NotificationSettings
					{
						struct NotificationChannel
						{
							std::string severity;
							std::vector<std::string> channels;
						};
						struct NotificationReceiver
						{
							std::string receiverType;
							std::vector<std::string> receiverValues;
						};
						std::vector<NotificationChannel> notificationChannels;
						int inhibitionInterval;
						std::vector<NotificationReceiver> notificationReceivers;
					};
					struct TriggerCondition
					{
						std::string severity;
						long duration;
						long threshold;
					};
					std::string updatedUid;
					long dIJobId;
					std::string description;
					long createdTime;
					std::vector<TriggerCondition> triggerConditions;
					std::string metricType;
					NotificationSettings notificationSettings;
					bool enabled;
					long updatedTime;
					long dIAlarmRuleId;
					std::string createdUid;
				};


				GetDIAlarmRuleResult();
				explicit GetDIAlarmRuleResult(const std::string &payload);
				~GetDIAlarmRuleResult();
				DIAlarmRule getDIAlarmRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				DIAlarmRule dIAlarmRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDIALARMRULERESULT_H_