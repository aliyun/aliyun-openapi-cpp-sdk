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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBESUSPEVENTSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBESUSPEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribeSuspEventsResult : public ServiceResult
			{
			public:
				struct SuspEvent
				{
					struct Detail
					{
						std::string type;
						std::string value;
						std::string valueDisplay;
						std::string nameDisplay;
						std::string name;
					};
					std::string uniqueInfo;
					bool canCancelFault;
					std::string alarmEventTypeDisplay;
					std::string operateErrorCode;
					std::string alarmEventName;
					std::string desktopName;
					int eventStatus;
					std::string desktopId;
					std::string eventSubType;
					std::string dataSource;
					std::string name;
					std::string occurrenceTime;
					std::string desc;
					std::string operateMsg;
					std::string canBeDealOnLine;
					std::string desktopGroupId;
					std::vector<SuspEvent::Detail> details;
					std::string alarmEventType;
					std::string alarmUniqueInfo;
					std::string level;
					long id;
					std::string alarmEventNameDisplay;
					std::string lastTime;
				};


				DescribeSuspEventsResult();
				explicit DescribeSuspEventsResult(const std::string &payload);
				~DescribeSuspEventsResult();
				int getTotalCount()const;
				std::string getPageSize()const;
				int getCurrentPage()const;
				std::vector<SuspEvent> getSuspEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string pageSize_;
				int currentPage_;
				std::vector<SuspEvent> suspEvents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBESUSPEVENTSRESULT_H_