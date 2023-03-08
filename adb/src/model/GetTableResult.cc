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

#include <alibabacloud/adb/model/GetTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

GetTableResult::GetTableResult() :
	ServiceResult()
{}

GetTableResult::GetTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableResult::~GetTableResult()
{}

void GetTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tableNode = value["Table"];
	if(!tableNode["TblId"].isNull())
		table_.tblId = std::stol(tableNode["TblId"].asString());
	if(!tableNode["DbName"].isNull())
		table_.dbName = tableNode["DbName"].asString();
	if(!tableNode["TableName"].isNull())
		table_.tableName = tableNode["TableName"].asString();
	if(!tableNode["TableType"].isNull())
		table_.tableType = tableNode["TableType"].asString();
	if(!tableNode["Parameters"].isNull())
		table_.parameters = tableNode["Parameters"].asString();
	if(!tableNode["CreateTime"].isNull())
		table_.createTime = tableNode["CreateTime"].asString();
	if(!tableNode["ViewOriginalText"].isNull())
		table_.viewOriginalText = tableNode["ViewOriginalText"].asString();
	if(!tableNode["ViewExpandedText"].isNull())
		table_.viewExpandedText = tableNode["ViewExpandedText"].asString();
	if(!tableNode["Temporary"].isNull())
		table_.temporary = tableNode["Temporary"].asString() == "true";
	if(!tableNode["Comment"].isNull())
		table_.comment = tableNode["Comment"].asString();
	if(!tableNode["PhysicalTableName"].isNull())
		table_.physicalTableName = tableNode["PhysicalTableName"].asString();
	if(!tableNode["PhysicalDatabaseName"].isNull())
		table_.physicalDatabaseName = tableNode["PhysicalDatabaseName"].asString();
	if(!tableNode["DistributeType"].isNull())
		table_.distributeType = tableNode["DistributeType"].asString();
	if(!tableNode["PartitionType"].isNull())
		table_.partitionType = tableNode["PartitionType"].asString();
	if(!tableNode["PartitionColumn"].isNull())
		table_.partitionColumn = tableNode["PartitionColumn"].asString();
	if(!tableNode["PartitionCount"].isNull())
		table_.partitionCount = std::stol(tableNode["PartitionCount"].asString());
	if(!tableNode["PreviousVersion"].isNull())
		table_.previousVersion = std::stol(tableNode["PreviousVersion"].asString());
	if(!tableNode["CurrentVersion"].isNull())
		table_.currentVersion = std::stol(tableNode["CurrentVersion"].asString());
	if(!tableNode["UpdateTime"].isNull())
		table_.updateTime = tableNode["UpdateTime"].asString();
	if(!tableNode["TableEngineName"].isNull())
		table_.tableEngineName = tableNode["TableEngineName"].asString();
	if(!tableNode["IsAllIndex"].isNull())
		table_.isAllIndex = tableNode["IsAllIndex"].asString() == "true";
	if(!tableNode["BlockSize"].isNull())
		table_.blockSize = std::stol(tableNode["BlockSize"].asString());
	if(!tableNode["Compression"].isNull())
		table_.compression = tableNode["Compression"].asString();
	if(!tableNode["RawTableName"].isNull())
		table_.rawTableName = tableNode["RawTableName"].asString();
	if(!tableNode["SubpartitionType"].isNull())
		table_.subpartitionType = tableNode["SubpartitionType"].asString();
	if(!tableNode["SubpartitionColumn"].isNull())
		table_.subpartitionColumn = tableNode["SubpartitionColumn"].asString();
	if(!tableNode["SubpartitionCount"].isNull())
		table_.subpartitionCount = std::stol(tableNode["SubpartitionCount"].asString());
	if(!tableNode["ArchiveType"].isNull())
		table_.archiveType = tableNode["ArchiveType"].asString();
	if(!tableNode["MaxColumnId"].isNull())
		table_.maxColumnId = std::stol(tableNode["MaxColumnId"].asString());
	if(!tableNode["EnableDfs"].isNull())
		table_.enableDfs = tableNode["EnableDfs"].asString() == "true";
	if(!tableNode["StoragePolicy"].isNull())
		table_.storagePolicy = tableNode["StoragePolicy"].asString();
	if(!tableNode["HotPartitionCount"].isNull())
		table_.hotPartitionCount = std::stol(tableNode["HotPartitionCount"].asString());
	if(!tableNode["IsFulltextDict"].isNull())
		table_.isFulltextDict = tableNode["IsFulltextDict"].asString() == "true";
	if(!tableNode["RtIndexAll"].isNull())
		table_.rtIndexAll = tableNode["RtIndexAll"].asString() == "true";
	if(!tableNode["RtEngineType"].isNull())
		table_.rtEngineType = tableNode["RtEngineType"].asString();
	if(!tableNode["RtModeType"].isNull())
		table_.rtModeType = tableNode["RtModeType"].asString();
	if(!tableNode["RouteType"].isNull())
		table_.routeType = tableNode["RouteType"].asString();
	if(!tableNode["DictEncode"].isNull())
		table_.dictEncode = tableNode["DictEncode"].asString() == "true";
	if(!tableNode["BucketCount"].isNull())
		table_.bucketCount = std::stol(tableNode["BucketCount"].asString());
	if(!tableNode["Bucket"].isNull())
		table_.bucket = std::stol(tableNode["Bucket"].asString());
	if(!tableNode["ViewSecurityMode"].isNull())
		table_.viewSecurityMode = tableNode["ViewSecurityMode"].asString();
	auto allPartitionKeysNode = tableNode["PartitionKeys"]["PartitionKeysItem"];
	for (auto tableNodePartitionKeysPartitionKeysItem : allPartitionKeysNode)
	{
		Table::PartitionKeysItem partitionKeysItemObject;
		if(!tableNodePartitionKeysPartitionKeysItem["Name"].isNull())
			partitionKeysItemObject.name = tableNodePartitionKeysPartitionKeysItem["Name"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Type"].isNull())
			partitionKeysItemObject.type = tableNodePartitionKeysPartitionKeysItem["Type"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Comment"].isNull())
			partitionKeysItemObject.comment = tableNodePartitionKeysPartitionKeysItem["Comment"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["DatabaseName"].isNull())
			partitionKeysItemObject.databaseName = tableNodePartitionKeysPartitionKeysItem["DatabaseName"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["TableName"].isNull())
			partitionKeysItemObject.tableName = tableNodePartitionKeysPartitionKeysItem["TableName"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["MappedName"].isNull())
			partitionKeysItemObject.mappedName = tableNodePartitionKeysPartitionKeysItem["MappedName"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["DataType"].isNull())
			partitionKeysItemObject.dataType = tableNodePartitionKeysPartitionKeysItem["DataType"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["CreateTime"].isNull())
			partitionKeysItemObject.createTime = tableNodePartitionKeysPartitionKeysItem["CreateTime"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["UpdateTime"].isNull())
			partitionKeysItemObject.updateTime = tableNodePartitionKeysPartitionKeysItem["UpdateTime"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["PkPosition"].isNull())
			partitionKeysItemObject.pkPosition = std::stol(tableNodePartitionKeysPartitionKeysItem["PkPosition"].asString());
		if(!tableNodePartitionKeysPartitionKeysItem["IsPartitionKey"].isNull())
			partitionKeysItemObject.isPartitionKey = tableNodePartitionKeysPartitionKeysItem["IsPartitionKey"].asString() == "true";
		if(!tableNodePartitionKeysPartitionKeysItem["OrdinalPosition"].isNull())
			partitionKeysItemObject.ordinalPosition = std::stol(tableNodePartitionKeysPartitionKeysItem["OrdinalPosition"].asString());
		if(!tableNodePartitionKeysPartitionKeysItem["ColumnRawName"].isNull())
			partitionKeysItemObject.columnRawName = tableNodePartitionKeysPartitionKeysItem["ColumnRawName"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["PhysicalColumnName"].isNull())
			partitionKeysItemObject.physicalColumnName = tableNodePartitionKeysPartitionKeysItem["PhysicalColumnName"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Nullable"].isNull())
			partitionKeysItemObject.nullable = tableNodePartitionKeysPartitionKeysItem["Nullable"].asString() == "true";
		if(!tableNodePartitionKeysPartitionKeysItem["AutoIncrement"].isNull())
			partitionKeysItemObject.autoIncrement = tableNodePartitionKeysPartitionKeysItem["AutoIncrement"].asString() == "true";
		if(!tableNodePartitionKeysPartitionKeysItem["Precision"].isNull())
			partitionKeysItemObject.precision = std::stol(tableNodePartitionKeysPartitionKeysItem["Precision"].asString());
		if(!tableNodePartitionKeysPartitionKeysItem["Scale"].isNull())
			partitionKeysItemObject.scale = std::stol(tableNodePartitionKeysPartitionKeysItem["Scale"].asString());
		if(!tableNodePartitionKeysPartitionKeysItem["Primarykey"].isNull())
			partitionKeysItemObject.primarykey = tableNodePartitionKeysPartitionKeysItem["Primarykey"].asString() == "true";
		if(!tableNodePartitionKeysPartitionKeysItem["DefaultValue"].isNull())
			partitionKeysItemObject.defaultValue = tableNodePartitionKeysPartitionKeysItem["DefaultValue"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Tokenizer"].isNull())
			partitionKeysItemObject.tokenizer = tableNodePartitionKeysPartitionKeysItem["Tokenizer"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Encode"].isNull())
			partitionKeysItemObject.encode = tableNodePartitionKeysPartitionKeysItem["Encode"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Compression"].isNull())
			partitionKeysItemObject.compression = tableNodePartitionKeysPartitionKeysItem["Compression"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Delimiter"].isNull())
			partitionKeysItemObject.delimiter = tableNodePartitionKeysPartitionKeysItem["Delimiter"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["ValueType"].isNull())
			partitionKeysItemObject.valueType = tableNodePartitionKeysPartitionKeysItem["ValueType"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["CompressFloatUseShort"].isNull())
			partitionKeysItemObject.compressFloatUseShort = tableNodePartitionKeysPartitionKeysItem["CompressFloatUseShort"].asString() == "true";
		if(!tableNodePartitionKeysPartitionKeysItem["OnUpdate"].isNull())
			partitionKeysItemObject.onUpdate = tableNodePartitionKeysPartitionKeysItem["OnUpdate"].asString();
		table_.partitionKeys.push_back(partitionKeysItemObject);
	}
	auto allColsNode = tableNode["Cols"]["ColsItem"];
	for (auto tableNodeColsColsItem : allColsNode)
	{
		Table::ColsItem colsItemObject;
		if(!tableNodeColsColsItem["Name"].isNull())
			colsItemObject.name = tableNodeColsColsItem["Name"].asString();
		if(!tableNodeColsColsItem["Type"].isNull())
			colsItemObject.type = tableNodeColsColsItem["Type"].asString();
		if(!tableNodeColsColsItem["Comment"].isNull())
			colsItemObject.comment = tableNodeColsColsItem["Comment"].asString();
		if(!tableNodeColsColsItem["DatabaseName"].isNull())
			colsItemObject.databaseName = tableNodeColsColsItem["DatabaseName"].asString();
		if(!tableNodeColsColsItem["TableName"].isNull())
			colsItemObject.tableName = tableNodeColsColsItem["TableName"].asString();
		if(!tableNodeColsColsItem["MappedName"].isNull())
			colsItemObject.mappedName = tableNodeColsColsItem["MappedName"].asString();
		if(!tableNodeColsColsItem["DataType"].isNull())
			colsItemObject.dataType = tableNodeColsColsItem["DataType"].asString();
		if(!tableNodeColsColsItem["CreateTime"].isNull())
			colsItemObject.createTime = tableNodeColsColsItem["CreateTime"].asString();
		if(!tableNodeColsColsItem["UpdateTime"].isNull())
			colsItemObject.updateTime = tableNodeColsColsItem["UpdateTime"].asString();
		if(!tableNodeColsColsItem["PkPosition"].isNull())
			colsItemObject.pkPosition = std::stol(tableNodeColsColsItem["PkPosition"].asString());
		if(!tableNodeColsColsItem["IsPartitionKey"].isNull())
			colsItemObject.isPartitionKey = tableNodeColsColsItem["IsPartitionKey"].asString() == "true";
		if(!tableNodeColsColsItem["OrdinalPosition"].isNull())
			colsItemObject.ordinalPosition = std::stol(tableNodeColsColsItem["OrdinalPosition"].asString());
		if(!tableNodeColsColsItem["ColumnRawName"].isNull())
			colsItemObject.columnRawName = tableNodeColsColsItem["ColumnRawName"].asString();
		if(!tableNodeColsColsItem["PhysicalColumnName"].isNull())
			colsItemObject.physicalColumnName = tableNodeColsColsItem["PhysicalColumnName"].asString();
		if(!tableNodeColsColsItem["Nullable"].isNull())
			colsItemObject.nullable = tableNodeColsColsItem["Nullable"].asString() == "true";
		if(!tableNodeColsColsItem["AutoIncrement"].isNull())
			colsItemObject.autoIncrement = tableNodeColsColsItem["AutoIncrement"].asString() == "true";
		if(!tableNodeColsColsItem["Precision"].isNull())
			colsItemObject.precision = std::stol(tableNodeColsColsItem["Precision"].asString());
		if(!tableNodeColsColsItem["Scale"].isNull())
			colsItemObject.scale = std::stol(tableNodeColsColsItem["Scale"].asString());
		if(!tableNodeColsColsItem["Primarykey"].isNull())
			colsItemObject.primarykey = tableNodeColsColsItem["Primarykey"].asString() == "true";
		if(!tableNodeColsColsItem["DefaultValue"].isNull())
			colsItemObject.defaultValue = tableNodeColsColsItem["DefaultValue"].asString();
		if(!tableNodeColsColsItem["Tokenizer"].isNull())
			colsItemObject.tokenizer = tableNodeColsColsItem["Tokenizer"].asString();
		if(!tableNodeColsColsItem["Encode"].isNull())
			colsItemObject.encode = tableNodeColsColsItem["Encode"].asString();
		if(!tableNodeColsColsItem["Compression"].isNull())
			colsItemObject.compression = tableNodeColsColsItem["Compression"].asString();
		if(!tableNodeColsColsItem["Delimiter"].isNull())
			colsItemObject.delimiter = tableNodeColsColsItem["Delimiter"].asString();
		if(!tableNodeColsColsItem["ValueType"].isNull())
			colsItemObject.valueType = tableNodeColsColsItem["ValueType"].asString();
		if(!tableNodeColsColsItem["CompressFloatUseShort"].isNull())
			colsItemObject.compressFloatUseShort = tableNodeColsColsItem["CompressFloatUseShort"].asString() == "true";
		if(!tableNodeColsColsItem["OnUpdate"].isNull())
			colsItemObject.onUpdate = tableNodeColsColsItem["OnUpdate"].asString();
		table_.cols.push_back(colsItemObject);
	}
	auto allDistributeColumnsNode = tableNode["DistributeColumns"]["DistributeColumnsItem"];
	for (auto tableNodeDistributeColumnsDistributeColumnsItem : allDistributeColumnsNode)
	{
		Table::DistributeColumnsItem distributeColumnsItemObject;
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Name"].isNull())
			distributeColumnsItemObject.name = tableNodeDistributeColumnsDistributeColumnsItem["Name"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Type"].isNull())
			distributeColumnsItemObject.type = tableNodeDistributeColumnsDistributeColumnsItem["Type"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Comment"].isNull())
			distributeColumnsItemObject.comment = tableNodeDistributeColumnsDistributeColumnsItem["Comment"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["DatabaseName"].isNull())
			distributeColumnsItemObject.databaseName = tableNodeDistributeColumnsDistributeColumnsItem["DatabaseName"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["TableName"].isNull())
			distributeColumnsItemObject.tableName = tableNodeDistributeColumnsDistributeColumnsItem["TableName"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["MappedName"].isNull())
			distributeColumnsItemObject.mappedName = tableNodeDistributeColumnsDistributeColumnsItem["MappedName"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["DataType"].isNull())
			distributeColumnsItemObject.dataType = tableNodeDistributeColumnsDistributeColumnsItem["DataType"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["CreateTime"].isNull())
			distributeColumnsItemObject.createTime = tableNodeDistributeColumnsDistributeColumnsItem["CreateTime"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["UpdateTime"].isNull())
			distributeColumnsItemObject.updateTime = tableNodeDistributeColumnsDistributeColumnsItem["UpdateTime"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["PkPosition"].isNull())
			distributeColumnsItemObject.pkPosition = std::stol(tableNodeDistributeColumnsDistributeColumnsItem["PkPosition"].asString());
		if(!tableNodeDistributeColumnsDistributeColumnsItem["IsPartitionKey"].isNull())
			distributeColumnsItemObject.isPartitionKey = tableNodeDistributeColumnsDistributeColumnsItem["IsPartitionKey"].asString() == "true";
		if(!tableNodeDistributeColumnsDistributeColumnsItem["OrdinalPosition"].isNull())
			distributeColumnsItemObject.ordinalPosition = std::stol(tableNodeDistributeColumnsDistributeColumnsItem["OrdinalPosition"].asString());
		if(!tableNodeDistributeColumnsDistributeColumnsItem["ColumnRawName"].isNull())
			distributeColumnsItemObject.columnRawName = tableNodeDistributeColumnsDistributeColumnsItem["ColumnRawName"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["PhysicalColumnName"].isNull())
			distributeColumnsItemObject.physicalColumnName = tableNodeDistributeColumnsDistributeColumnsItem["PhysicalColumnName"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Nullable"].isNull())
			distributeColumnsItemObject.nullable = tableNodeDistributeColumnsDistributeColumnsItem["Nullable"].asString() == "true";
		if(!tableNodeDistributeColumnsDistributeColumnsItem["AutoIncrement"].isNull())
			distributeColumnsItemObject.autoIncrement = tableNodeDistributeColumnsDistributeColumnsItem["AutoIncrement"].asString() == "true";
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Precision"].isNull())
			distributeColumnsItemObject.precision = std::stol(tableNodeDistributeColumnsDistributeColumnsItem["Precision"].asString());
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Scale"].isNull())
			distributeColumnsItemObject.scale = std::stol(tableNodeDistributeColumnsDistributeColumnsItem["Scale"].asString());
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Primarykey"].isNull())
			distributeColumnsItemObject.primarykey = tableNodeDistributeColumnsDistributeColumnsItem["Primarykey"].asString() == "true";
		if(!tableNodeDistributeColumnsDistributeColumnsItem["DefaultValue"].isNull())
			distributeColumnsItemObject.defaultValue = tableNodeDistributeColumnsDistributeColumnsItem["DefaultValue"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Tokenizer"].isNull())
			distributeColumnsItemObject.tokenizer = tableNodeDistributeColumnsDistributeColumnsItem["Tokenizer"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Encode"].isNull())
			distributeColumnsItemObject.encode = tableNodeDistributeColumnsDistributeColumnsItem["Encode"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Compression"].isNull())
			distributeColumnsItemObject.compression = tableNodeDistributeColumnsDistributeColumnsItem["Compression"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["Delimiter"].isNull())
			distributeColumnsItemObject.delimiter = tableNodeDistributeColumnsDistributeColumnsItem["Delimiter"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["ValueType"].isNull())
			distributeColumnsItemObject.valueType = tableNodeDistributeColumnsDistributeColumnsItem["ValueType"].asString();
		if(!tableNodeDistributeColumnsDistributeColumnsItem["CompressFloatUseShort"].isNull())
			distributeColumnsItemObject.compressFloatUseShort = tableNodeDistributeColumnsDistributeColumnsItem["CompressFloatUseShort"].asString() == "true";
		if(!tableNodeDistributeColumnsDistributeColumnsItem["OnUpdate"].isNull())
			distributeColumnsItemObject.onUpdate = tableNodeDistributeColumnsDistributeColumnsItem["OnUpdate"].asString();
		table_.distributeColumns.push_back(distributeColumnsItemObject);
	}
	auto allRouteColumnsNode = tableNode["RouteColumns"]["RouteColumnsItem"];
	for (auto tableNodeRouteColumnsRouteColumnsItem : allRouteColumnsNode)
	{
		Table::RouteColumnsItem routeColumnsItemObject;
		if(!tableNodeRouteColumnsRouteColumnsItem["Name"].isNull())
			routeColumnsItemObject.name = tableNodeRouteColumnsRouteColumnsItem["Name"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Type"].isNull())
			routeColumnsItemObject.type = tableNodeRouteColumnsRouteColumnsItem["Type"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Comment"].isNull())
			routeColumnsItemObject.comment = tableNodeRouteColumnsRouteColumnsItem["Comment"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["DatabaseName"].isNull())
			routeColumnsItemObject.databaseName = tableNodeRouteColumnsRouteColumnsItem["DatabaseName"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["TableName"].isNull())
			routeColumnsItemObject.tableName = tableNodeRouteColumnsRouteColumnsItem["TableName"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["MappedName"].isNull())
			routeColumnsItemObject.mappedName = tableNodeRouteColumnsRouteColumnsItem["MappedName"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["DataType"].isNull())
			routeColumnsItemObject.dataType = tableNodeRouteColumnsRouteColumnsItem["DataType"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["CreateTime"].isNull())
			routeColumnsItemObject.createTime = tableNodeRouteColumnsRouteColumnsItem["CreateTime"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["UpdateTime"].isNull())
			routeColumnsItemObject.updateTime = tableNodeRouteColumnsRouteColumnsItem["UpdateTime"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["PkPosition"].isNull())
			routeColumnsItemObject.pkPosition = std::stol(tableNodeRouteColumnsRouteColumnsItem["PkPosition"].asString());
		if(!tableNodeRouteColumnsRouteColumnsItem["IsPartitionKey"].isNull())
			routeColumnsItemObject.isPartitionKey = tableNodeRouteColumnsRouteColumnsItem["IsPartitionKey"].asString() == "true";
		if(!tableNodeRouteColumnsRouteColumnsItem["OrdinalPosition"].isNull())
			routeColumnsItemObject.ordinalPosition = std::stol(tableNodeRouteColumnsRouteColumnsItem["OrdinalPosition"].asString());
		if(!tableNodeRouteColumnsRouteColumnsItem["ColumnRawName"].isNull())
			routeColumnsItemObject.columnRawName = tableNodeRouteColumnsRouteColumnsItem["ColumnRawName"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["PhysicalColumnName"].isNull())
			routeColumnsItemObject.physicalColumnName = tableNodeRouteColumnsRouteColumnsItem["PhysicalColumnName"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Nullable"].isNull())
			routeColumnsItemObject.nullable = tableNodeRouteColumnsRouteColumnsItem["Nullable"].asString() == "true";
		if(!tableNodeRouteColumnsRouteColumnsItem["AutoIncrement"].isNull())
			routeColumnsItemObject.autoIncrement = tableNodeRouteColumnsRouteColumnsItem["AutoIncrement"].asString() == "true";
		if(!tableNodeRouteColumnsRouteColumnsItem["Precision"].isNull())
			routeColumnsItemObject.precision = std::stol(tableNodeRouteColumnsRouteColumnsItem["Precision"].asString());
		if(!tableNodeRouteColumnsRouteColumnsItem["Scale"].isNull())
			routeColumnsItemObject.scale = std::stol(tableNodeRouteColumnsRouteColumnsItem["Scale"].asString());
		if(!tableNodeRouteColumnsRouteColumnsItem["Primarykey"].isNull())
			routeColumnsItemObject.primarykey = tableNodeRouteColumnsRouteColumnsItem["Primarykey"].asString() == "true";
		if(!tableNodeRouteColumnsRouteColumnsItem["DefaultValue"].isNull())
			routeColumnsItemObject.defaultValue = tableNodeRouteColumnsRouteColumnsItem["DefaultValue"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Tokenizer"].isNull())
			routeColumnsItemObject.tokenizer = tableNodeRouteColumnsRouteColumnsItem["Tokenizer"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Encode"].isNull())
			routeColumnsItemObject.encode = tableNodeRouteColumnsRouteColumnsItem["Encode"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Compression"].isNull())
			routeColumnsItemObject.compression = tableNodeRouteColumnsRouteColumnsItem["Compression"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["Delimiter"].isNull())
			routeColumnsItemObject.delimiter = tableNodeRouteColumnsRouteColumnsItem["Delimiter"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["ValueType"].isNull())
			routeColumnsItemObject.valueType = tableNodeRouteColumnsRouteColumnsItem["ValueType"].asString();
		if(!tableNodeRouteColumnsRouteColumnsItem["CompressFloatUseShort"].isNull())
			routeColumnsItemObject.compressFloatUseShort = tableNodeRouteColumnsRouteColumnsItem["CompressFloatUseShort"].asString() == "true";
		if(!tableNodeRouteColumnsRouteColumnsItem["OnUpdate"].isNull())
			routeColumnsItemObject.onUpdate = tableNodeRouteColumnsRouteColumnsItem["OnUpdate"].asString();
		table_.routeColumns.push_back(routeColumnsItemObject);
	}
	auto allIndexesNode = tableNode["Indexes"]["IndexesItem"];
	for (auto tableNodeIndexesIndexesItem : allIndexesNode)
	{
		Table::IndexesItem indexesItemObject;
		if(!tableNodeIndexesIndexesItem["DatabaseName"].isNull())
			indexesItemObject.databaseName = tableNodeIndexesIndexesItem["DatabaseName"].asString();
		if(!tableNodeIndexesIndexesItem["PhysicalTableName"].isNull())
			indexesItemObject.physicalTableName = tableNodeIndexesIndexesItem["PhysicalTableName"].asString();
		if(!tableNodeIndexesIndexesItem["IndexName"].isNull())
			indexesItemObject.indexName = tableNodeIndexesIndexesItem["IndexName"].asString();
		if(!tableNodeIndexesIndexesItem["IndexType"].isNull())
			indexesItemObject.indexType = tableNodeIndexesIndexesItem["IndexType"].asString();
		if(!tableNodeIndexesIndexesItem["Options"].isNull())
			indexesItemObject.options = tableNodeIndexesIndexesItem["Options"].asString();
		if(!tableNodeIndexesIndexesItem["CreateTime"].isNull())
			indexesItemObject.createTime = tableNodeIndexesIndexesItem["CreateTime"].asString();
		if(!tableNodeIndexesIndexesItem["UpdateTime"].isNull())
			indexesItemObject.updateTime = tableNodeIndexesIndexesItem["UpdateTime"].asString();
		auto allIndexColumnsNode = tableNodeIndexesIndexesItem["IndexColumns"]["IndexColumnsItem"];
		for (auto tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem : allIndexColumnsNode)
		{
			Table::IndexesItem::IndexColumnsItem indexColumnsObject;
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Name"].isNull())
				indexColumnsObject.name = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Name"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Type"].isNull())
				indexColumnsObject.type = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Type"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Comment"].isNull())
				indexColumnsObject.comment = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Comment"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["DatabaseName"].isNull())
				indexColumnsObject.databaseName = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["DatabaseName"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["TableName"].isNull())
				indexColumnsObject.tableName = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["TableName"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["MappedName"].isNull())
				indexColumnsObject.mappedName = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["MappedName"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["DataType"].isNull())
				indexColumnsObject.dataType = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["DataType"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["CreateTime"].isNull())
				indexColumnsObject.createTime = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["CreateTime"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["UpdateTime"].isNull())
				indexColumnsObject.updateTime = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["UpdateTime"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["PkPosition"].isNull())
				indexColumnsObject.pkPosition = std::stol(tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["PkPosition"].asString());
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["IsPartitionKey"].isNull())
				indexColumnsObject.isPartitionKey = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["IsPartitionKey"].asString() == "true";
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["OrdinalPosition"].isNull())
				indexColumnsObject.ordinalPosition = std::stol(tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["OrdinalPosition"].asString());
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["ColumnRawName"].isNull())
				indexColumnsObject.columnRawName = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["ColumnRawName"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["PhysicalColumnName"].isNull())
				indexColumnsObject.physicalColumnName = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["PhysicalColumnName"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Nullable"].isNull())
				indexColumnsObject.nullable = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Nullable"].asString() == "true";
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["AutoIncrement"].isNull())
				indexColumnsObject.autoIncrement = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["AutoIncrement"].asString() == "true";
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Precision"].isNull())
				indexColumnsObject.precision = std::stol(tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Precision"].asString());
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Scale"].isNull())
				indexColumnsObject.scale = std::stol(tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Scale"].asString());
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Primarykey"].isNull())
				indexColumnsObject.primarykey = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Primarykey"].asString() == "true";
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["DefaultValue"].isNull())
				indexColumnsObject.defaultValue = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["DefaultValue"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Tokenizer"].isNull())
				indexColumnsObject.tokenizer = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Tokenizer"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Encode"].isNull())
				indexColumnsObject.encode = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Encode"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Compression"].isNull())
				indexColumnsObject.compression = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Compression"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Delimiter"].isNull())
				indexColumnsObject.delimiter = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["Delimiter"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["ValueType"].isNull())
				indexColumnsObject.valueType = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["ValueType"].asString();
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["CompressFloatUseShort"].isNull())
				indexColumnsObject.compressFloatUseShort = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["CompressFloatUseShort"].asString() == "true";
			if(!tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["OnUpdate"].isNull())
				indexColumnsObject.onUpdate = tableNodeIndexesIndexesItemIndexColumnsIndexColumnsItem["OnUpdate"].asString();
			indexesItemObject.indexColumns.push_back(indexColumnsObject);
		}
		auto allColumnOrds = value["ColumnOrds"]["null"];
		for (auto value : allColumnOrds)
			indexesItemObject.columnOrds.push_back(value.asString());
		table_.indexes.push_back(indexesItemObject);
	}
	auto sdNode = tableNode["Sd"];
	if(!sdNode["SdId"].isNull())
		table_.sd.sdId = std::stol(sdNode["SdId"].asString());
	if(!sdNode["Location"].isNull())
		table_.sd.location = sdNode["Location"].asString();
	if(!sdNode["InputFormat"].isNull())
		table_.sd.inputFormat = sdNode["InputFormat"].asString();
	if(!sdNode["OutputFormat"].isNull())
		table_.sd.outputFormat = sdNode["OutputFormat"].asString();
	if(!sdNode["Compressed"].isNull())
		table_.sd.compressed = sdNode["Compressed"].asString() == "true";
	if(!sdNode["NumBuckets"].isNull())
		table_.sd.numBuckets = std::stol(sdNode["NumBuckets"].asString());
	if(!sdNode["Parameters"].isNull())
		table_.sd.parameters = sdNode["Parameters"].asString();
	if(!sdNode["StoredAsSubDirectories"].isNull())
		table_.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
	auto serDeInfoNode = sdNode["SerDeInfo"];
	if(!serDeInfoNode["SerDeId"].isNull())
		table_.sd.serDeInfo.serDeId = std::stol(serDeInfoNode["SerDeId"].asString());
	if(!serDeInfoNode["Name"].isNull())
		table_.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
	if(!serDeInfoNode["Parameters"].isNull())
		table_.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
	if(!serDeInfoNode["SerializationLib"].isNull())
		table_.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
	auto routeEffectiveColumnNode = tableNode["RouteEffectiveColumn"];
	if(!routeEffectiveColumnNode["Name"].isNull())
		table_.routeEffectiveColumn.name = routeEffectiveColumnNode["Name"].asString();
	if(!routeEffectiveColumnNode["Type"].isNull())
		table_.routeEffectiveColumn.type = routeEffectiveColumnNode["Type"].asString();
	if(!routeEffectiveColumnNode["Comment"].isNull())
		table_.routeEffectiveColumn.comment = routeEffectiveColumnNode["Comment"].asString();
	if(!routeEffectiveColumnNode["DatabaseName"].isNull())
		table_.routeEffectiveColumn.databaseName = routeEffectiveColumnNode["DatabaseName"].asString();
	if(!routeEffectiveColumnNode["TableName"].isNull())
		table_.routeEffectiveColumn.tableName = routeEffectiveColumnNode["TableName"].asString();
	if(!routeEffectiveColumnNode["MappedName"].isNull())
		table_.routeEffectiveColumn.mappedName = routeEffectiveColumnNode["MappedName"].asString();
	if(!routeEffectiveColumnNode["DataType"].isNull())
		table_.routeEffectiveColumn.dataType = routeEffectiveColumnNode["DataType"].asString();
	if(!routeEffectiveColumnNode["CreateTime"].isNull())
		table_.routeEffectiveColumn.createTime = routeEffectiveColumnNode["CreateTime"].asString();
	if(!routeEffectiveColumnNode["UpdateTime"].isNull())
		table_.routeEffectiveColumn.updateTime = routeEffectiveColumnNode["UpdateTime"].asString();
	if(!routeEffectiveColumnNode["PkPosition"].isNull())
		table_.routeEffectiveColumn.pkPosition = std::stol(routeEffectiveColumnNode["PkPosition"].asString());
	if(!routeEffectiveColumnNode["IsPartitionKey"].isNull())
		table_.routeEffectiveColumn.isPartitionKey = routeEffectiveColumnNode["IsPartitionKey"].asString() == "true";
	if(!routeEffectiveColumnNode["OrdinalPosition"].isNull())
		table_.routeEffectiveColumn.ordinalPosition = std::stol(routeEffectiveColumnNode["OrdinalPosition"].asString());
	if(!routeEffectiveColumnNode["ColumnRawName"].isNull())
		table_.routeEffectiveColumn.columnRawName = routeEffectiveColumnNode["ColumnRawName"].asString();
	if(!routeEffectiveColumnNode["PhysicalColumnName"].isNull())
		table_.routeEffectiveColumn.physicalColumnName = routeEffectiveColumnNode["PhysicalColumnName"].asString();
	if(!routeEffectiveColumnNode["Nullable"].isNull())
		table_.routeEffectiveColumn.nullable = routeEffectiveColumnNode["Nullable"].asString() == "true";
	if(!routeEffectiveColumnNode["AutoIncrement"].isNull())
		table_.routeEffectiveColumn.autoIncrement = routeEffectiveColumnNode["AutoIncrement"].asString() == "true";
	if(!routeEffectiveColumnNode["Precision"].isNull())
		table_.routeEffectiveColumn.precision = std::stol(routeEffectiveColumnNode["Precision"].asString());
	if(!routeEffectiveColumnNode["Scale"].isNull())
		table_.routeEffectiveColumn.scale = std::stol(routeEffectiveColumnNode["Scale"].asString());
	if(!routeEffectiveColumnNode["Primarykey"].isNull())
		table_.routeEffectiveColumn.primarykey = routeEffectiveColumnNode["Primarykey"].asString() == "true";
	if(!routeEffectiveColumnNode["DefaultValue"].isNull())
		table_.routeEffectiveColumn.defaultValue = routeEffectiveColumnNode["DefaultValue"].asString();
	if(!routeEffectiveColumnNode["Tokenizer"].isNull())
		table_.routeEffectiveColumn.tokenizer = routeEffectiveColumnNode["Tokenizer"].asString();
	if(!routeEffectiveColumnNode["Encode"].isNull())
		table_.routeEffectiveColumn.encode = routeEffectiveColumnNode["Encode"].asString();
	if(!routeEffectiveColumnNode["Compression"].isNull())
		table_.routeEffectiveColumn.compression = routeEffectiveColumnNode["Compression"].asString();
	if(!routeEffectiveColumnNode["Delimiter"].isNull())
		table_.routeEffectiveColumn.delimiter = routeEffectiveColumnNode["Delimiter"].asString();
	if(!routeEffectiveColumnNode["ValueType"].isNull())
		table_.routeEffectiveColumn.valueType = routeEffectiveColumnNode["ValueType"].asString();
	if(!routeEffectiveColumnNode["CompressFloatUseShort"].isNull())
		table_.routeEffectiveColumn.compressFloatUseShort = routeEffectiveColumnNode["CompressFloatUseShort"].asString() == "true";
	if(!routeEffectiveColumnNode["OnUpdate"].isNull())
		table_.routeEffectiveColumn.onUpdate = routeEffectiveColumnNode["OnUpdate"].asString();
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetTableResult::Table GetTableResult::getTable()const
{
	return table_;
}

std::string GetTableResult::getMessage()const
{
	return message_;
}

long GetTableResult::getCode()const
{
	return code_;
}

bool GetTableResult::getSuccess()const
{
	return success_;
}

