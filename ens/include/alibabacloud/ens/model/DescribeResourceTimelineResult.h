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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBERESOURCETIMELINERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBERESOURCETIMELINERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeResourceTimelineResult : public ServiceResult
			{
			public:
				struct AvailableEventsItem
				{
					std::string occurrenceTime;
					std::string type;
					std::string reason;
					std::string name;
				};
				struct BizEventsItem
				{
					std::string occurrenceTime;
					std::string type;
					std::string reason;
					std::string name;
				};
				struct InventoryEventsItem
				{
					std::string occurrenceTime;
					std::string type;
					std::string reason;
					std::string name;
				};
				struct ReserveEventsItem
				{
					std::string occurrenceTime;
					std::string type;
					std::string reason;
					std::string name;
				};


				DescribeResourceTimelineResult();
				explicit DescribeResourceTimelineResult(const std::string &payload);
				~DescribeResourceTimelineResult();
				std::string getMsg()const;
				std::string getDesc()const;
				std::vector<InventoryEventsItem> getInventoryEvents()const;
				std::vector<AvailableEventsItem> getAvailableEvents()const;
				std::vector<BizEventsItem> getBizEvents()const;
				std::vector<ReserveEventsItem> getReserveEvents()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				std::string desc_;
				std::vector<InventoryEventsItem> inventoryEvents_;
				std::vector<AvailableEventsItem> availableEvents_;
				std::vector<BizEventsItem> bizEvents_;
				std::vector<ReserveEventsItem> reserveEvents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBERESOURCETIMELINERESULT_H_