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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTALERTEVENTSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTALERTEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListAlertEventsResult : public ServiceResult
			{
			public:
				struct PageBean
				{
					struct EventsItem
					{
						struct AlarmsItem
						{
							long alarmId;
							std::string alarmName;
							int state;
							std::string createTime;
						};
						struct NotificationPolicy
						{
							long id;
							std::string name;
						};
						std::string status;
						std::string alertName;
						std::string description;
						std::string endTime;
						std::vector<EventsItem::NotificationPolicy> notificationPolicies;
						std::vector<EventsItem::AlarmsItem> alarms;
						std::string startTime;
						std::string severity;
						std::string labels;
						std::string generatorURL;
						std::string integrationName;
						long triggerCount;
						std::string annotations;
						std::string receiveTime;
						std::string handlerName;
						std::string integrationType;
					};
					std::vector<EventsItem> events;
					long size;
					long total;
					long page;
				};


				ListAlertEventsResult();
				explicit ListAlertEventsResult(const std::string &payload);
				~ListAlertEventsResult();
				PageBean getPageBean()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageBean pageBean_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTALERTEVENTSRESULT_H_