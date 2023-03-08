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

#ifndef ALIBABACLOUD_ADB_MODEL_GETTABLERESULT_H_
#define ALIBABACLOUD_ADB_MODEL_GETTABLERESULT_H_

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
			class ALIBABACLOUD_ADB_EXPORT GetTableResult : public ServiceResult
			{
			public:
				struct Table
				{
					struct Sd
					{
						struct SerDeInfo
						{
							std::string serializationLib;
							std::string parameters;
							long serDeId;
							std::string name;
						};
						bool storedAsSubDirectories;
						std::string parameters;
						std::string inputFormat;
						SerDeInfo serDeInfo;
						std::string outputFormat;
						long sdId;
						bool compressed;
						long numBuckets;
						std::string location;
					};
					struct RouteEffectiveColumn
					{
						std::string physicalColumnName;
						std::string compression;
						std::string columnRawName;
						bool compressFloatUseShort;
						std::string encode;
						std::string name;
						std::string defaultValue;
						std::string dataType;
						bool isPartitionKey;
						std::string tokenizer;
						long pkPosition;
						std::string comment;
						std::string delimiter;
						std::string valueType;
						bool autoIncrement;
						std::string createTime;
						std::string onUpdate;
						std::string databaseName;
						bool primarykey;
						long scale;
						std::string tableName;
						std::string type;
						long ordinalPosition;
						long precision;
						std::string updateTime;
						std::string mappedName;
						bool nullable;
					};
					struct PartitionKeysItem
					{
						std::string physicalColumnName;
						std::string compression;
						std::string columnRawName;
						bool compressFloatUseShort;
						std::string encode;
						std::string name;
						std::string defaultValue;
						std::string dataType;
						bool isPartitionKey;
						std::string tokenizer;
						long pkPosition;
						std::string comment;
						std::string delimiter;
						std::string valueType;
						bool autoIncrement;
						std::string createTime;
						std::string onUpdate;
						std::string databaseName;
						bool primarykey;
						long scale;
						std::string tableName;
						std::string type;
						long ordinalPosition;
						long precision;
						std::string updateTime;
						std::string mappedName;
						bool nullable;
					};
					struct ColsItem
					{
						std::string physicalColumnName;
						std::string compression;
						std::string columnRawName;
						bool compressFloatUseShort;
						std::string encode;
						std::string name;
						std::string defaultValue;
						std::string dataType;
						bool isPartitionKey;
						std::string tokenizer;
						long pkPosition;
						std::string comment;
						std::string delimiter;
						std::string valueType;
						bool autoIncrement;
						std::string createTime;
						std::string onUpdate;
						std::string databaseName;
						bool primarykey;
						long scale;
						std::string tableName;
						std::string type;
						long ordinalPosition;
						long precision;
						std::string updateTime;
						std::string mappedName;
						bool nullable;
					};
					struct DistributeColumnsItem
					{
						std::string physicalColumnName;
						std::string compression;
						std::string columnRawName;
						bool compressFloatUseShort;
						std::string encode;
						std::string name;
						std::string defaultValue;
						std::string dataType;
						bool isPartitionKey;
						std::string tokenizer;
						long pkPosition;
						std::string comment;
						std::string delimiter;
						std::string valueType;
						bool autoIncrement;
						std::string createTime;
						std::string onUpdate;
						std::string databaseName;
						bool primarykey;
						long scale;
						std::string tableName;
						std::string type;
						long ordinalPosition;
						long precision;
						std::string updateTime;
						std::string mappedName;
						bool nullable;
					};
					struct RouteColumnsItem
					{
						std::string physicalColumnName;
						std::string compression;
						std::string columnRawName;
						bool compressFloatUseShort;
						std::string encode;
						std::string name;
						std::string defaultValue;
						std::string dataType;
						bool isPartitionKey;
						std::string tokenizer;
						long pkPosition;
						std::string comment;
						std::string delimiter;
						std::string valueType;
						bool autoIncrement;
						std::string createTime;
						std::string onUpdate;
						std::string databaseName;
						bool primarykey;
						long scale;
						std::string tableName;
						std::string type;
						long ordinalPosition;
						long precision;
						std::string updateTime;
						std::string mappedName;
						bool nullable;
					};
					struct IndexesItem
					{
						struct IndexColumnsItem
						{
							std::string physicalColumnName;
							std::string compression;
							std::string columnRawName;
							bool compressFloatUseShort;
							std::string encode;
							std::string name;
							std::string defaultValue;
							std::string dataType;
							bool isPartitionKey;
							std::string tokenizer;
							long pkPosition;
							std::string comment;
							std::string delimiter;
							std::string valueType;
							bool autoIncrement;
							std::string createTime;
							std::string onUpdate;
							std::string databaseName;
							bool primarykey;
							long scale;
							std::string tableName;
							std::string type;
							long ordinalPosition;
							long precision;
							std::string updateTime;
							std::string mappedName;
							bool nullable;
						};
						std::string indexName;
						std::string options;
						std::vector<IndexesItem::IndexColumnsItem> indexColumns;
						std::string createTime;
						std::string databaseName;
						std::string updateTime;
						std::vector<std::string> columnOrds;
						std::string physicalTableName;
						std::string indexType;
					};
					std::string compression;
					std::string physicalDatabaseName;
					std::string archiveType;
					bool enableDfs;
					long currentVersion;
					std::string subpartitionType;
					bool isFulltextDict;
					std::string rawTableName;
					std::string partitionColumn;
					std::string rtModeType;
					long tblId;
					std::string viewExpandedText;
					long maxColumnId;
					std::vector<PartitionKeysItem> partitionKeys;
					std::string dbName;
					bool isAllIndex;
					std::vector<DistributeColumnsItem> distributeColumns;
					long hotPartitionCount;
					std::string comment;
					std::string viewOriginalText;
					long bucketCount;
					std::string tableType;
					std::string parameters;
					bool rtIndexAll;
					std::string createTime;
					long previousVersion;
					std::string physicalTableName;
					std::string distributeType;
					std::string storagePolicy;
					std::vector<IndexesItem> indexes;
					std::string partitionType;
					std::string rtEngineType;
					Sd sd;
					std::string tableName;
					std::vector<ColsItem> cols;
					bool temporary;
					std::string routeType;
					std::string viewSecurityMode;
					long subpartitionCount;
					long bucket;
					RouteEffectiveColumn routeEffectiveColumn;
					std::string updateTime;
					bool dictEncode;
					std::vector<RouteColumnsItem> routeColumns;
					std::string tableEngineName;
					long blockSize;
					long partitionCount;
					std::string subpartitionColumn;
				};


				GetTableResult();
				explicit GetTableResult(const std::string &payload);
				~GetTableResult();
				Table getTable()const;
				std::string getMessage()const;
				long getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Table table_;
				std::string message_;
				long code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_GETTABLERESULT_H_