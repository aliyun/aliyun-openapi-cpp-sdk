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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEEVENTSRESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT DescribeEventsResult : public ServiceResult
			{
			public:
				struct EventItemsItem
				{
					std::string eventReason;
					std::string eventType;
					std::string eventTime;
					std::string resourceName;
					long eventId;
					std::string eventUserType;
					std::string resourceType;
					std::string eventName;
					std::string regionId;
					std::string eventRecordTime;
					std::string eventPayload;
				};


				DescribeEventsResult();
				explicit DescribeEventsResult(const std::string &payload);
				~DescribeEventsResult();
				long getTotalRecordCount()const;
				std::vector<EventItemsItem> getEventItems()const;
				long getPageSize()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				std::vector<EventItemsItem> eventItems_;
				long pageSize_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEEVENTSRESULT_H_