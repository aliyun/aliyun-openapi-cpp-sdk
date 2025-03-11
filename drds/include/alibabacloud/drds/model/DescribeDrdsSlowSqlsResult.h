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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSSLOWSQLSRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSSLOWSQLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDrdsSlowSqlsResult : public ServiceResult
			{
			public:
				struct Item
				{
					long sendTime;
					std::string schema;
					std::string host;
					long responseTime;
					std::string sql;
				};


				DescribeDrdsSlowSqlsResult();
				explicit DescribeDrdsSlowSqlsResult(const std::string &payload);
				~DescribeDrdsSlowSqlsResult();
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<Item> getItems()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<Item> items_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDRDSSLOWSQLSRESULT_H_