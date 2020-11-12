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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_GETTABLERESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_GETTABLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT GetTableResult : public ServiceResult
			{
			public:
				struct Table
				{
					struct StorageDescriptor
					{
						struct SerDeInfo
						{
							std::string serializationLib;
							std::string parameters;
							std::string name;
						};
						struct ColsItem
						{
							std::string comment;
							std::string type;
							std::string name;
						};
						std::vector<ColsItem> cols;
						std::string parameters;
						std::string inputFormat;
						SerDeInfo serDeInfo;
						std::string outputFormat;
						std::string location;
					};
					struct PartitionKeysItem
					{
						std::string comment;
						std::string type;
						std::string name;
					};
					std::string tableName;
					std::string viewOriginalText;
					std::string owner;
					std::string tableType;
					std::string parameters;
					std::string viewExpandedText;
					long createTime;
					StorageDescriptor storageDescriptor;
					std::vector<PartitionKeysItem> partitionKeys;
					std::string dbName;
					long lastAccessTime;
				};


				GetTableResult();
				explicit GetTableResult(const std::string &payload);
				~GetTableResult();
				Table getTable()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Table table_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_GETTABLERESULT_H_