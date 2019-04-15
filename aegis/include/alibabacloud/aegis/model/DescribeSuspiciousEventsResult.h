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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUSPICIOUSEVENTSRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUSPICIOUSEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeSuspiciousEventsResult : public ServiceResult
			{
			public:
				struct LogListItem
				{
					struct DetailListItem
					{
						std::string type;
						std::string value;
						std::string infoType;
						std::string name;
					};
					long firstTime;
					std::string eventType;
					std::string instanceId;
					std::vector<LogListItem::DetailListItem> detailList;
					std::string ip;
					std::string osVersion;
					std::string eventName;
					std::string clientIp;
					std::string aliasEventType;
					long groupId;
					std::string instanceName;
					std::string aliasEventName;
					std::string uuid;
					std::string level;
					std::string tag;
					long lastTime;
				};


				DescribeSuspiciousEventsResult();
				explicit DescribeSuspiciousEventsResult(const std::string &payload);
				~DescribeSuspiciousEventsResult();
				std::vector<LogListItem> getLogList()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<LogListItem> logList_;
				int totalCount_;
				int pageSize_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESUSPICIOUSEVENTSRESULT_H_