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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBESQLPATTERNRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBESQLPATTERNRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeSqlPatternResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string avgPeakMemory;
					std::string accessIP;
					std::string avgCpuTime;
					std::string pattern;
					std::string user;
					std::string maxStageCount;
					std::string avgTaskCount;
					std::string avgScanSize;
					std::string reportDate;
					std::string avgStageCount;
					std::string instanceName;
					std::string maxScanSize;
					std::string maxPeakMemory;
					std::string maxTaskCount;
					std::string queryCount;
					std::string maxCpuTime;
				};


				DescribeSqlPatternResult();
				explicit DescribeSqlPatternResult(const std::string &payload);
				~DescribeSqlPatternResult();
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
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBESQLPATTERNRESULT_H_