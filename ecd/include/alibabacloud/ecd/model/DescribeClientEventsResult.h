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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBECLIENTEVENTSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBECLIENTEVENTSRESULT_H_

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
			class ALIBABACLOUD_ECD_EXPORT DescribeClientEventsResult : public ServiceResult
			{
			public:
				struct Event
				{
					std::string status;
					std::string eventType;
					std::string officeSiteType;
					std::string desktopName;
					std::string desktopGroupName;
					std::string bytesSend;
					std::string desktopId;
					std::string clientVersion;
					std::string clientIp;
					std::string directoryType;
					std::string clientOS;
					std::string bytesReceived;
					std::string officeSiteId;
					std::string desktopGroupId;
					std::string endUserId;
					std::string directoryId;
					std::string eventTime;
					std::string eventId;
					std::string officeSiteName;
					std::string regionId;
					std::string desktopIp;
					std::string aliUid;
				};


				DescribeClientEventsResult();
				explicit DescribeClientEventsResult(const std::string &payload);
				~DescribeClientEventsResult();
				std::string getNextToken()const;
				std::vector<Event> getEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Event> events_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBECLIENTEVENTSRESULT_H_