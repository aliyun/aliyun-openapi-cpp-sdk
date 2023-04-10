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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_LISTTABLEVERSIONSRESULT_H_
#define ALIBABACLOUD_DATALAKE_MODEL_LISTTABLEVERSIONSRESULT_H_

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
			class ALIBABACLOUD_DATALAKE_EXPORT ListTableVersionsResult : public ServiceResult
			{
			public:
				struct TableVersionsItem
				{
					struct Table
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
						Sd sd;
						std::string tableName;
						std::string ownerType;
						bool temporary;
						std::string viewExpandedText;
						int lastAnalyzedTime;
						Privileges privileges;
						int updateTime;
						ObjectOfAny tableVersion;
						std::vector<PartitionKeysItem> partitionKeys;
						bool rewriteEnabled;
						bool cascade;
					};
					int versionId;
					Table table;
				};


				ListTableVersionsResult();
				explicit ListTableVersionsResult(const std::string &payload);
				~ListTableVersionsResult();
				std::string getMessage()const;
				std::string getNextPageToken()const;
				std::vector<TableVersionsItem> getTableVersions()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string nextPageToken_;
				std::vector<TableVersionsItem> tableVersions_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATALAKE_MODEL_LISTTABLEVERSIONSRESULT_H_