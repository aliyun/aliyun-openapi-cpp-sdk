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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_SEARCHRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_SEARCHRESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT SearchResult : public ServiceResult
			{
			public:
				struct DatabaseResult
				{
					struct DatabasesItem
					{
						struct Database
						{
							struct Privileges
							{
								std::string groupPrivileges;
								std::string rolePrivileges;
								std::string userPrivileges;
							};
							std::string locationUri;
							std::string ownerName;
							std::string ownerType;
							std::string description;
							std::string parameters;
							std::string createdBy;
							Privileges privileges;
							int createTime;
							int updateTime;
							std::string name;
						};
						struct HighLightListItem
						{
							std::string value;
							std::string key;
						};
						Database database;
						std::vector<DatabasesItem::HighLightListItem> highLightList;
					};
					long totalCount;
					std::vector<DatabasesItem> databases;
				};
				struct TableResult
				{
					struct TablesItem
					{
						struct Table
						{
							struct Privileges3
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
							struct TableVersion
							{
								int versionId;
								ObjectOfAny table;
							};
							struct PartitionKeysItem
							{
								std::string comment;
								std::string type;
								std::string parameters;
								std::string name;
							};
							std::string tableId;
							std::string owner;
							std::string viewOriginalText;
							std::string createdBy;
							std::string parameters;
							std::string tableType;
							int createTime;
							std::string databaseName;
							int lastAccessTime;
							int retention;
							Privileges3 privileges3;
							Sd sd;
							std::string tableName;
							std::string ownerType;
							bool temporary;
							std::string viewExpandedText;
							int lastAnalyzedTime;
							TableVersion tableVersion;
							int updateTime;
							std::vector<PartitionKeysItem> partitionKeys;
							bool rewriteEnabled;
							bool cascade;
						};
						struct HighLightListItem2
						{
							std::string value;
							std::string key;
						};
						Table table;
						std::vector<TablesItem::HighLightListItem2> highLightList1;
					};
					long totalCount;
					std::vector<TablesItem> tables;
				};


				SearchResult();
				explicit SearchResult(const std::string &payload);
				~SearchResult();
				TableResult getTableResult()const;
				std::string getMessage()const;
				DatabaseResult getDatabaseResult()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				TableResult tableResult_;
				std::string message_;
				DatabaseResult databaseResult_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_SEARCHRESULT_H_