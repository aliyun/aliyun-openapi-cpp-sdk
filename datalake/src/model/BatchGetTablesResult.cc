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

#include <alibabacloud/datalake/model/BatchGetTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

BatchGetTablesResult::BatchGetTablesResult() :
	ServiceResult()
{}

BatchGetTablesResult::BatchGetTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGetTablesResult::~BatchGetTablesResult()
{}

void BatchGetTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableErrorsNode = value["TableErrors"]["TableErrorsItem"];
	for (auto valueTableErrorsTableErrorsItem : allTableErrorsNode)
	{
		TableErrorsItem tableErrorsObject;
		if(!valueTableErrorsTableErrorsItem["TableName"].isNull())
			tableErrorsObject.tableName = valueTableErrorsTableErrorsItem["TableName"].asString();
		auto errorDetailNode = value["ErrorDetail"];
		if(!errorDetailNode["Code"].isNull())
			tableErrorsObject.errorDetail.code = errorDetailNode["Code"].asString();
		if(!errorDetailNode["Message"].isNull())
			tableErrorsObject.errorDetail.message = errorDetailNode["Message"].asString();
		tableErrors_.push_back(tableErrorsObject);
	}
	auto allTablesNode = value["Tables"]["TablesItem"];
	for (auto valueTablesTablesItem : allTablesNode)
	{
		TablesItem tablesObject;
		if(!valueTablesTablesItem["Cascade"].isNull())
			tablesObject.cascade = valueTablesTablesItem["Cascade"].asString() == "true";
		if(!valueTablesTablesItem["CreateTime"].isNull())
			tablesObject.createTime = std::stoi(valueTablesTablesItem["CreateTime"].asString());
		if(!valueTablesTablesItem["CreatedBy"].isNull())
			tablesObject.createdBy = valueTablesTablesItem["CreatedBy"].asString();
		if(!valueTablesTablesItem["DatabaseName"].isNull())
			tablesObject.databaseName = valueTablesTablesItem["DatabaseName"].asString();
		if(!valueTablesTablesItem["LastAccessTime"].isNull())
			tablesObject.lastAccessTime = std::stoi(valueTablesTablesItem["LastAccessTime"].asString());
		if(!valueTablesTablesItem["LastAnalyzedTime"].isNull())
			tablesObject.lastAnalyzedTime = std::stoi(valueTablesTablesItem["LastAnalyzedTime"].asString());
		if(!valueTablesTablesItem["Owner"].isNull())
			tablesObject.owner = valueTablesTablesItem["Owner"].asString();
		if(!valueTablesTablesItem["OwnerType"].isNull())
			tablesObject.ownerType = valueTablesTablesItem["OwnerType"].asString();
		if(!valueTablesTablesItem["Parameters"].isNull())
			tablesObject.parameters = valueTablesTablesItem["Parameters"].asString();
		if(!valueTablesTablesItem["Retention"].isNull())
			tablesObject.retention = std::stoi(valueTablesTablesItem["Retention"].asString());
		if(!valueTablesTablesItem["RewriteEnabled"].isNull())
			tablesObject.rewriteEnabled = valueTablesTablesItem["RewriteEnabled"].asString() == "true";
		if(!valueTablesTablesItem["TableName"].isNull())
			tablesObject.tableName = valueTablesTablesItem["TableName"].asString();
		if(!valueTablesTablesItem["TableType"].isNull())
			tablesObject.tableType = valueTablesTablesItem["TableType"].asString();
		if(!valueTablesTablesItem["Temporary"].isNull())
			tablesObject.temporary = valueTablesTablesItem["Temporary"].asString() == "true";
		if(!valueTablesTablesItem["UpdateTime"].isNull())
			tablesObject.updateTime = std::stoi(valueTablesTablesItem["UpdateTime"].asString());
		if(!valueTablesTablesItem["ViewExpandedText"].isNull())
			tablesObject.viewExpandedText = valueTablesTablesItem["ViewExpandedText"].asString();
		if(!valueTablesTablesItem["ViewOriginalText"].isNull())
			tablesObject.viewOriginalText = valueTablesTablesItem["ViewOriginalText"].asString();
		if(!valueTablesTablesItem["TableId"].isNull())
			tablesObject.tableId = valueTablesTablesItem["TableId"].asString();
		auto allPartitionKeysNode = valueTablesTablesItem["PartitionKeys"]["PartitionKeysItem"];
		for (auto valueTablesTablesItemPartitionKeysPartitionKeysItem : allPartitionKeysNode)
		{
			TablesItem::PartitionKeysItem partitionKeysObject;
			if(!valueTablesTablesItemPartitionKeysPartitionKeysItem["Comment"].isNull())
				partitionKeysObject.comment = valueTablesTablesItemPartitionKeysPartitionKeysItem["Comment"].asString();
			if(!valueTablesTablesItemPartitionKeysPartitionKeysItem["Name"].isNull())
				partitionKeysObject.name = valueTablesTablesItemPartitionKeysPartitionKeysItem["Name"].asString();
			if(!valueTablesTablesItemPartitionKeysPartitionKeysItem["Parameters"].isNull())
				partitionKeysObject.parameters = valueTablesTablesItemPartitionKeysPartitionKeysItem["Parameters"].asString();
			if(!valueTablesTablesItemPartitionKeysPartitionKeysItem["Type"].isNull())
				partitionKeysObject.type = valueTablesTablesItemPartitionKeysPartitionKeysItem["Type"].asString();
			tablesObject.partitionKeys.push_back(partitionKeysObject);
		}
		auto privilegesNode = value["Privileges"];
		if(!privilegesNode["GroupPrivileges"].isNull())
			tablesObject.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
		if(!privilegesNode["RolePrivileges"].isNull())
			tablesObject.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
		if(!privilegesNode["UserPrivileges"].isNull())
			tablesObject.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
		auto sdNode = value["Sd"];
		if(!sdNode["Compressed"].isNull())
			tablesObject.sd.compressed = sdNode["Compressed"].asString() == "true";
		if(!sdNode["InputFormat"].isNull())
			tablesObject.sd.inputFormat = sdNode["InputFormat"].asString();
		if(!sdNode["Location"].isNull())
			tablesObject.sd.location = sdNode["Location"].asString();
		if(!sdNode["NumBuckets"].isNull())
			tablesObject.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
		if(!sdNode["OutputFormat"].isNull())
			tablesObject.sd.outputFormat = sdNode["OutputFormat"].asString();
		if(!sdNode["Parameters"].isNull())
			tablesObject.sd.parameters = sdNode["Parameters"].asString();
		if(!sdNode["StoredAsSubDirectories"].isNull())
			tablesObject.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
		auto allColsNode = sdNode["Cols"]["ColsItem"];
		for (auto sdNodeColsColsItem : allColsNode)
		{
			TablesItem::Sd::ColsItem colsItemObject;
			if(!sdNodeColsColsItem["Comment"].isNull())
				colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
			if(!sdNodeColsColsItem["Name"].isNull())
				colsItemObject.name = sdNodeColsColsItem["Name"].asString();
			if(!sdNodeColsColsItem["Parameters"].isNull())
				colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
			if(!sdNodeColsColsItem["Type"].isNull())
				colsItemObject.type = sdNodeColsColsItem["Type"].asString();
			tablesObject.sd.cols.push_back(colsItemObject);
		}
		auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
		for (auto sdNodeSortColsSortColsItem : allSortColsNode)
		{
			TablesItem::Sd::SortColsItem sortColsItemObject;
			if(!sdNodeSortColsSortColsItem["Col"].isNull())
				sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
			if(!sdNodeSortColsSortColsItem["Order"].isNull())
				sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
			tablesObject.sd.sortCols.push_back(sortColsItemObject);
		}
		auto serDeInfoNode = sdNode["SerDeInfo"];
		if(!serDeInfoNode["Name"].isNull())
			tablesObject.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
		if(!serDeInfoNode["Parameters"].isNull())
			tablesObject.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
		if(!serDeInfoNode["SerializationLib"].isNull())
			tablesObject.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
		auto skewedInfoNode = sdNode["SkewedInfo"];
		if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
			tablesObject.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
			auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
			for (auto value : allSkewedColNames)
				tablesObject.sd.skewedInfo.skewedColNames.push_back(value.asString());
			auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
			for (auto value : allSkewedColValues)
				tablesObject.sd.skewedInfo.skewedColValues.push_back(value.asString());
			auto allBucketCols = sdNode["BucketCols"]["null"];
			for (auto value : allBucketCols)
				tablesObject.sd.bucketCols.push_back(value.asString());
		auto tableVersionNode = value["TableVersion"];
		if(!tableVersionNode["Table"].isNull())
			tablesObject.tableVersion.table = tableVersionNode["Table"].asString();
		if(!tableVersionNode["VersionId"].isNull())
			tablesObject.tableVersion.versionId = std::stoi(tableVersionNode["VersionId"].asString());
		tables_.push_back(tablesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string BatchGetTablesResult::getMessage()const
{
	return message_;
}

std::vector<BatchGetTablesResult::TableErrorsItem> BatchGetTablesResult::getTableErrors()const
{
	return tableErrors_;
}

std::vector<BatchGetTablesResult::TablesItem> BatchGetTablesResult::getTables()const
{
	return tables_;
}

std::string BatchGetTablesResult::getCode()const
{
	return code_;
}

bool BatchGetTablesResult::getSuccess()const
{
	return success_;
}

