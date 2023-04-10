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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_LISTPARTITIONSBYFILTERRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_LISTPARTITIONSBYFILTERRESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT ListPartitionsByFilterResult : public ServiceResult
			{
			public:
				struct PartitionsItem
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
				struct PartitionSpecsItem
				{
					struct SharedStorageDescriptor
					{
						struct ColsItem14
						{
							std::string comment;
							std::string type;
							std::string parameters;
							std::string name;
						};
						std::vector<ColsItem14> cols13;
						std::string location;
					};
					struct SharedSDPartitionsItem
					{
						struct Privileges2
						{
							std::string groupPrivileges;
							std::string rolePrivileges;
							std::string userPrivileges;
						};
						struct Sd3
						{
							struct SerDeInfo5
							{
								std::string serializationLib;
								std::string parameters;
								std::string name;
							};
							struct SkewedInfo6
							{
								std::vector<std::string> skewedColValues12;
								std::vector<std::string> skewedColNames11;
								std::string skewedColValueLocationMaps;
							};
							struct ColsItem9
							{
								std::string comment;
								std::string type;
								std::string parameters;
								std::string name;
							};
							struct SortColsItem10
							{
								int order;
								std::string col;
							};
							std::vector<ColsItem9> cols7;
							bool storedAsSubDirectories;
							std::vector<std::string> bucketCols4;
							std::string parameters;
							std::string inputFormat;
							SerDeInfo5 serDeInfo5;
							std::vector<SortColsItem10> sortCols8;
							std::string outputFormat;
							SkewedInfo6 skewedInfo6;
							bool compressed;
							int numBuckets;
							std::string location;
						};
						Privileges2 privileges2;
						std::string tableName;
						Sd3 sd3;
						std::string parameters;
						int lastAnalyzedTime;
						int createTime;
						std::string databaseName;
						std::vector<std::string> values1;
						int lastAccessTime;
					};
					SharedStorageDescriptor sharedStorageDescriptor;
					std::vector<PartitionSpecsItem::SharedSDPartitionsItem> sharedSDPartitions;
				};


				ListPartitionsByFilterResult();
				explicit ListPartitionsByFilterResult(const std::string &payload);
				~ListPartitionsByFilterResult();
				std::vector<PartitionsItem> getPartitions()const;
				std::vector<PartitionSpecsItem> getPartitionSpecs()const;
				std::string getMessage()const;
				std::string getNextPageToken()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PartitionsItem> partitions_;
				std::vector<PartitionSpecsItem> partitionSpecs_;
				std::string message_;
				std::string nextPageToken_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_LISTPARTITIONSBYFILTERRESULT_H_