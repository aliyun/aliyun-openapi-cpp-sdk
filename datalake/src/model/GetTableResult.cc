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

#include <alibabacloud/datalake/model/GetTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

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
	if(!tableNode["Cascade"].isNull())
		table_.cascade = tableNode["Cascade"].asString() == "true";
	if(!tableNode["CreateTime"].isNull())
		table_.createTime = std::stoi(tableNode["CreateTime"].asString());
	if(!tableNode["CreatedBy"].isNull())
		table_.createdBy = tableNode["CreatedBy"].asString();
	if(!tableNode["DatabaseName"].isNull())
		table_.databaseName = tableNode["DatabaseName"].asString();
	if(!tableNode["LastAccessTime"].isNull())
		table_.lastAccessTime = std::stoi(tableNode["LastAccessTime"].asString());
	if(!tableNode["LastAnalyzedTime"].isNull())
		table_.lastAnalyzedTime = std::stoi(tableNode["LastAnalyzedTime"].asString());
	if(!tableNode["Owner"].isNull())
		table_.owner = tableNode["Owner"].asString();
	if(!tableNode["OwnerType"].isNull())
		table_.ownerType = tableNode["OwnerType"].asString();
	if(!tableNode["Parameters"].isNull())
		table_.parameters = tableNode["Parameters"].asString();
	if(!tableNode["Retention"].isNull())
		table_.retention = std::stoi(tableNode["Retention"].asString());
	if(!tableNode["RewriteEnabled"].isNull())
		table_.rewriteEnabled = tableNode["RewriteEnabled"].asString() == "true";
	if(!tableNode["TableName"].isNull())
		table_.tableName = tableNode["TableName"].asString();
	if(!tableNode["TableType"].isNull())
		table_.tableType = tableNode["TableType"].asString();
	if(!tableNode["Temporary"].isNull())
		table_.temporary = tableNode["Temporary"].asString() == "true";
	if(!tableNode["UpdateTime"].isNull())
		table_.updateTime = std::stoi(tableNode["UpdateTime"].asString());
	if(!tableNode["ViewExpandedText"].isNull())
		table_.viewExpandedText = tableNode["ViewExpandedText"].asString();
	if(!tableNode["ViewOriginalText"].isNull())
		table_.viewOriginalText = tableNode["ViewOriginalText"].asString();
	if(!tableNode["TableId"].isNull())
		table_.tableId = tableNode["TableId"].asString();
	auto allPartitionKeysNode = tableNode["PartitionKeys"]["PartitionKeysItem"];
	for (auto tableNodePartitionKeysPartitionKeysItem : allPartitionKeysNode)
	{
		Table::PartitionKeysItem partitionKeysItemObject;
		if(!tableNodePartitionKeysPartitionKeysItem["Comment"].isNull())
			partitionKeysItemObject.comment = tableNodePartitionKeysPartitionKeysItem["Comment"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Name"].isNull())
			partitionKeysItemObject.name = tableNodePartitionKeysPartitionKeysItem["Name"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Parameters"].isNull())
			partitionKeysItemObject.parameters = tableNodePartitionKeysPartitionKeysItem["Parameters"].asString();
		if(!tableNodePartitionKeysPartitionKeysItem["Type"].isNull())
			partitionKeysItemObject.type = tableNodePartitionKeysPartitionKeysItem["Type"].asString();
		table_.partitionKeys.push_back(partitionKeysItemObject);
	}
	auto privilegesNode = tableNode["Privileges"];
	if(!privilegesNode["GroupPrivileges"].isNull())
		table_.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
	if(!privilegesNode["RolePrivileges"].isNull())
		table_.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
	if(!privilegesNode["UserPrivileges"].isNull())
		table_.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
	auto sdNode = tableNode["Sd"];
	if(!sdNode["Compressed"].isNull())
		table_.sd.compressed = sdNode["Compressed"].asString() == "true";
	if(!sdNode["InputFormat"].isNull())
		table_.sd.inputFormat = sdNode["InputFormat"].asString();
	if(!sdNode["Location"].isNull())
		table_.sd.location = sdNode["Location"].asString();
	if(!sdNode["NumBuckets"].isNull())
		table_.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
	if(!sdNode["OutputFormat"].isNull())
		table_.sd.outputFormat = sdNode["OutputFormat"].asString();
	if(!sdNode["Parameters"].isNull())
		table_.sd.parameters = sdNode["Parameters"].asString();
	if(!sdNode["StoredAsSubDirectories"].isNull())
		table_.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
	auto allColsNode = sdNode["Cols"]["ColsItem"];
	for (auto sdNodeColsColsItem : allColsNode)
	{
		Table::Sd::ColsItem colsItemObject;
		if(!sdNodeColsColsItem["Comment"].isNull())
			colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
		if(!sdNodeColsColsItem["Name"].isNull())
			colsItemObject.name = sdNodeColsColsItem["Name"].asString();
		if(!sdNodeColsColsItem["Parameters"].isNull())
			colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
		if(!sdNodeColsColsItem["Type"].isNull())
			colsItemObject.type = sdNodeColsColsItem["Type"].asString();
		table_.sd.cols.push_back(colsItemObject);
	}
	auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
	for (auto sdNodeSortColsSortColsItem : allSortColsNode)
	{
		Table::Sd::SortColsItem sortColsItemObject;
		if(!sdNodeSortColsSortColsItem["Col"].isNull())
			sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
		if(!sdNodeSortColsSortColsItem["Order"].isNull())
			sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
		table_.sd.sortCols.push_back(sortColsItemObject);
	}
	auto serDeInfoNode = sdNode["SerDeInfo"];
	if(!serDeInfoNode["Name"].isNull())
		table_.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
	if(!serDeInfoNode["Parameters"].isNull())
		table_.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
	if(!serDeInfoNode["SerializationLib"].isNull())
		table_.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
	auto skewedInfoNode = sdNode["SkewedInfo"];
	if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
		table_.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
		auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
		for (auto value : allSkewedColNames)
			table_.sd.skewedInfo.skewedColNames.push_back(value.asString());
		auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
		for (auto value : allSkewedColValues)
			table_.sd.skewedInfo.skewedColValues.push_back(value.asString());
		auto allBucketCols = sdNode["BucketCols"]["null"];
		for (auto value : allBucketCols)
			table_.sd.bucketCols.push_back(value.asString());
	auto tableVersionNode = tableNode["TableVersion"];
	if(!tableVersionNode["Table"].isNull())
		table_.tableVersion.table = tableVersionNode["Table"].asString();
	if(!tableVersionNode["VersionId"].isNull())
		table_.tableVersion.versionId = std::stoi(tableVersionNode["VersionId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
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

std::string GetTableResult::getCode()const
{
	return code_;
}

bool GetTableResult::getSuccess()const
{
	return success_;
}

