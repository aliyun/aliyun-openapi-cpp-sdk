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

#include <alibabacloud/datalake/model/GetTableVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetTableVersionResult::GetTableVersionResult() :
	ServiceResult()
{}

GetTableVersionResult::GetTableVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTableVersionResult::~GetTableVersionResult()
{}

void GetTableVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto tableVersionNode = value["TableVersion"];
	if(!tableVersionNode["VersionId"].isNull())
		tableVersion_.versionId = std::stoi(tableVersionNode["VersionId"].asString());
	auto tableNode = tableVersionNode["Table"];
	if(!tableNode["Cascade"].isNull())
		tableVersion_.table.cascade = tableNode["Cascade"].asString() == "true";
	if(!tableNode["CreateTime"].isNull())
		tableVersion_.table.createTime = std::stoi(tableNode["CreateTime"].asString());
	if(!tableNode["CreatedBy"].isNull())
		tableVersion_.table.createdBy = tableNode["CreatedBy"].asString();
	if(!tableNode["DatabaseName"].isNull())
		tableVersion_.table.databaseName = tableNode["DatabaseName"].asString();
	if(!tableNode["LastAccessTime"].isNull())
		tableVersion_.table.lastAccessTime = std::stoi(tableNode["LastAccessTime"].asString());
	if(!tableNode["LastAnalyzedTime"].isNull())
		tableVersion_.table.lastAnalyzedTime = std::stoi(tableNode["LastAnalyzedTime"].asString());
	if(!tableNode["Owner"].isNull())
		tableVersion_.table.owner = tableNode["Owner"].asString();
	if(!tableNode["OwnerType"].isNull())
		tableVersion_.table.ownerType = tableNode["OwnerType"].asString();
	if(!tableNode["Parameters"].isNull())
		tableVersion_.table.parameters = tableNode["Parameters"].asString();
	if(!tableNode["Retention"].isNull())
		tableVersion_.table.retention = std::stoi(tableNode["Retention"].asString());
	if(!tableNode["RewriteEnabled"].isNull())
		tableVersion_.table.rewriteEnabled = tableNode["RewriteEnabled"].asString() == "true";
	if(!tableNode["TableName"].isNull())
		tableVersion_.table.tableName = tableNode["TableName"].asString();
	if(!tableNode["TableType"].isNull())
		tableVersion_.table.tableType = tableNode["TableType"].asString();
	if(!tableNode["Temporary"].isNull())
		tableVersion_.table.temporary = tableNode["Temporary"].asString() == "true";
	if(!tableNode["UpdateTime"].isNull())
		tableVersion_.table.updateTime = std::stoi(tableNode["UpdateTime"].asString());
	if(!tableNode["ViewExpandedText"].isNull())
		tableVersion_.table.viewExpandedText = tableNode["ViewExpandedText"].asString();
	if(!tableNode["ViewOriginalText"].isNull())
		tableVersion_.table.viewOriginalText = tableNode["ViewOriginalText"].asString();
	if(!tableNode["TableId"].isNull())
		tableVersion_.table.tableId = tableNode["TableId"].asString();
	if(!tableNode["TableVersion"].isNull())
		tableVersion_.table.tableVersion = tableNode["TableVersion"].asString();
	auto allPartitionKeysNode = tableNode["PartitionKeys"]["PartitionKeysItem"];
	for (auto tableNodePartitionKeysPartitionKeysItem : allPartitionKeysNode)
	{
		TableVersion::Table::PartitionKeysItem partitionKeysItemObject;
		if(!tableNodePartitionKeysPartitionKeysItem["Comment"].isNull())
			partitionKeysItemObject.comment = tableNodePartitionKeysPartitionKeysItem["Comment"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Name"].isNull())
			partitionKeysItemObject.name = tableNodePartitionKeysPartitionKeysItem["Name"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Parameters"].isNull())
			partitionKeysItemObject.parameters = tableNodePartitionKeysPartitionKeysItem["Parameters"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Type"].isNull())
			partitionKeysItemObject.type = tableNodePartitionKeysPartitionKeysItem["Type"].asString();
		tableVersion_.table.partitionKeys.push_back(partitionKeysItemObject);
	}
	auto privilegesNode = tableNode["Privileges"];
	if(!privilegesNode["GroupPrivileges"].isNull())
		tableVersion_.table.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
	if(!privilegesNode["RolePrivileges"].isNull())
		tableVersion_.table.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
	if(!privilegesNode["UserPrivileges"].isNull())
		tableVersion_.table.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
	auto sdNode = tableNode["Sd"];
	if(!sdNode["Compressed"].isNull())
		tableVersion_.table.sd.compressed = sdNode["Compressed"].asString() == "true";
	if(!sdNode["InputFormat"].isNull())
		tableVersion_.table.sd.inputFormat = sdNode["InputFormat"].asString();
	if(!sdNode["Location"].isNull())
		tableVersion_.table.sd.location = sdNode["Location"].asString();
	if(!sdNode["NumBuckets"].isNull())
		tableVersion_.table.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
	if(!sdNode["OutputFormat"].isNull())
		tableVersion_.table.sd.outputFormat = sdNode["OutputFormat"].asString();
	if(!sdNode["Parameters"].isNull())
		tableVersion_.table.sd.parameters = sdNode["Parameters"].asString();
	if(!sdNode["StoredAsSubDirectories"].isNull())
		tableVersion_.table.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
	auto allColsNode = sdNode["Cols"]["ColsItem"];
	for (auto sdNodeColsColsItem : allColsNode)
	{
		TableVersion::Table::Sd::ColsItem colsItemObject;
		if(!sdNodeColsColsItem["Comment"].isNull())
			colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
		if(!sdNodeColsColsItem["Name"].isNull())
			colsItemObject.name = sdNodeColsColsItem["Name"].asString();
		if(!sdNodeColsColsItem["Parameters"].isNull())
			colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
		if(!sdNodeColsColsItem["Type"].isNull())
			colsItemObject.type = sdNodeColsColsItem["Type"].asString();
		tableVersion_.table.sd.cols.push_back(colsItemObject);
	}
	auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
	for (auto sdNodeSortColsSortColsItem : allSortColsNode)
	{
		TableVersion::Table::Sd::SortColsItem sortColsItemObject;
		if(!sdNodeSortColsSortColsItem["Col"].isNull())
			sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
		if(!sdNodeSortColsSortColsItem["Order"].isNull())
			sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
		tableVersion_.table.sd.sortCols.push_back(sortColsItemObject);
	}
	auto serDeInfoNode = sdNode["SerDeInfo"];
	if(!serDeInfoNode["Name"].isNull())
		tableVersion_.table.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
	if(!serDeInfoNode["Parameters"].isNull())
		tableVersion_.table.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
	if(!serDeInfoNode["SerializationLib"].isNull())
		tableVersion_.table.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
	auto skewedInfoNode = sdNode["SkewedInfo"];
	if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
		tableVersion_.table.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
		auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
		for (auto value : allSkewedColNames)
			tableVersion_.table.sd.skewedInfo.skewedColNames.push_back(value.asString());
		auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
		for (auto value : allSkewedColValues)
			tableVersion_.table.sd.skewedInfo.skewedColValues.push_back(value.asString());
		auto allBucketCols = sdNode["BucketCols"]["null"];
		for (auto value : allBucketCols)
			tableVersion_.table.sd.bucketCols.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetTableVersionResult::getMessage()const
{
	return message_;
}

GetTableVersionResult::TableVersion GetTableVersionResult::getTableVersion()const
{
	return tableVersion_;
}

std::string GetTableVersionResult::getCode()const
{
	return code_;
}

bool GetTableVersionResult::getSuccess()const
{
	return success_;
}

