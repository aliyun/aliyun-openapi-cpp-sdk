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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGCOUNTRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGCOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeSQLLogCountResult : public ServiceResult
			{
			public:
				struct Item
				{
					struct SeriesItem
					{
						struct ValueItem
						{
							std::vector<std::string> point;
						};
						std::vector<SeriesItem::ValueItem> values;
					};
					std::vector<Item::SeriesItem> series;
					std::string name;
				};


				DescribeSQLLogCountResult();
				explicit DescribeSQLLogCountResult(const std::string &payload);
				~DescribeSQLLogCountResult();
				std::string getEndTime()const;
				std::string getStartTime()const;
				std::string getDBClusterId()const;
				std::vector<Item> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string startTime_;
				std::string dBClusterId_;
				std::vector<Item> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGCOUNTRESULT_H_