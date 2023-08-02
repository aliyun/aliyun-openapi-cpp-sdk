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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGSV2RESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGSV2RESULT_H_

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
			class ALIBABACLOUD_GPDB_EXPORT DescribeSQLLogsV2Result : public ServiceResult
			{
			public:
				struct Item
				{
					float executeCost;
					std::string dBRole;
					int sourcePort;
					std::string sQLText;
					std::string sourceIP;
					long returnRowCounts;
					std::string dBName;
					std::string operationType;
					long scanRowCounts;
					std::string operationClass;
					std::string executeState;
					std::string operationExecuteTime;
					std::string accountName;
				};


				DescribeSQLLogsV2Result();
				explicit DescribeSQLLogsV2Result(const std::string &payload);
				~DescribeSQLLogsV2Result();
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<Item> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int pageRecordCount_;
				int pageNumber_;
				std::vector<Item> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGSV2RESULT_H_