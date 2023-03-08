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

#ifndef ALIBABACLOUD_ADB_MODEL_GETTABLEOBJECTSRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_GETTABLEOBJECTSRESULT_H_

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
			class ALIBABACLOUD_ADB_EXPORT GetTableObjectsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DataObject
					{
						std::string tableName;
						std::string owner;
						std::string tableType;
						std::string description;
						long tableSize;
						std::string createTime;
						std::string updateTime;
						std::string schemaName;
						std::string sQL;
					};
					long totalCount;
					long pageSize;
					long pageNumber;
					std::vector<DataObject> tableSummaryModels;
				};


				GetTableObjectsResult();
				explicit GetTableObjectsResult(const std::string &payload);
				~GetTableObjectsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_GETTABLEOBJECTSRESULT_H_