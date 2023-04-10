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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_GETPARTITIONRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_GETPARTITIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/datalake/DataLakeExport.h>

namespace AlibabaCloud
{
	namespace DataLake
	{
		namespace Model
		{
			class ALIBABACLOUD_DATALAKE_EXPORT GetPartitionResult : public ServiceResult
			{
			public:
				struct Partition
				{
					struct Privileges
					{
						std::string groupPrivileges;
						std::string rolePrivileges;
						std::string userPrivileges;
					};
					struct Sd
					{
						struct SerDeInfo
						{
							std::string serializationLib;
							std::string parameters;
							std::string name;
						};
						struct SkewedInfo
						{
							std::vector<std::string> skewedColValues;
							std::string skewedColValueLocationMaps;
							std::vector<std::string> skewedColNames;
						};
						struct ColsItem
						{
							std::string comment;
							std::string type;
							std::string parameters;
							std::string name;
						};
						struct SortColsItem
						{
							int order;
							std::string col;
						};
						bool storedAsSubDirectories;
						std::vector<SortColsItem> sortCols;
						std::vector<ColsItem> cols;
						std::string parameters;
						SkewedInfo skewedInfo;
						std::string inputFormat;
						SerDeInfo serDeInfo;
						std::string outputFormat;
						std::vector<std::string> bucketCols;
						bool compressed;
						int numBuckets;
						std::string location;
					};
					Sd sd;
					std::string tableName;
					std::string parameters;
					int lastAnalyzedTime;
					Privileges privileges;
					int createTime;
					std::string databaseName;
					std::vector<std::string> values;
					int lastAccessTime;
				};


				GetPartitionResult();
				explicit GetPartitionResult(const std::string &payload);
				~GetPartitionResult();
				Partition getPartition()const;
				std::string getMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Partition partition_;
				std::string message_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_GETPARTITIONRESULT_H_