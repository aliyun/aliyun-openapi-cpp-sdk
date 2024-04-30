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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeHistoryEventsResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					struct Data
					{
						std::string eventLevel;
						std::string eventCategory;
						std::string endTime;
						std::string eventType;
						std::string sourceType;
						std::string eventStatus;
						std::string gmtModified;
						std::string product;
						std::string eventDetail;
						std::string gmtCreated;
						int isClosed;
						std::string eventCode;
						std::string cmsProduct;
						std::string detailReason;
						std::string eventId;
						std::string eventReason;
						std::string instanceId;
						std::string startTime;
						std::string resourceType;
						std::string dbType;
						std::string instanceName;
						std::string uid;
						std::string detailImpact;
						std::string handleStatus;
						int hasLifeCycle;
						std::string eventImpact;
						std::string regionId;
					};
					std::string type;
					std::string region;
					Data data;
					std::string time;
					std::string id;
					std::string specversion;
					std::string source;
					std::string subject;
				};


				DescribeHistoryEventsResult();
				explicit DescribeHistoryEventsResult(const std::string &payload);
				~DescribeHistoryEventsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSRESULT_H_