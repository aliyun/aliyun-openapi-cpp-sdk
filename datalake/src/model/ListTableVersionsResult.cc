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

#include <alibabacloud/datalake/model/ListTableVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListTableVersionsResult::ListTableVersionsResult() :
	ServiceResult()
{}

ListTableVersionsResult::ListTableVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTableVersionsResult::~ListTableVersionsResult()
{}

void ListTableVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableVersionsNode = value["TableVersions"]["TableVersionsItem"];
	for (auto valueTableVersionsTableVersionsItem : allTableVersionsNode)
	{
		TableVersionsItem tableVersionsObject;
		if(!valueTableVersionsTableVersionsItem["VersionId"].isNull())
			tableVersionsObject.versionId = std::stoi(valueTableVersionsTableVersionsItem["VersionId"].asString());
		auto tableNode = value["Table"];
		if(!tableNode["Cascade"].isNull())
			tableVersionsObject.table.cascade = tableNode["Cascade"].asString() == "true";
		if(!tableNode["CreateTime"].isNull())
			tableVersionsObject.table.createTime = std::stoi(tableNode["CreateTime"].asString());
		if(!tableNode["CreatedBy"].isNull())
			tableVersionsObject.table.createdBy = tableNode["CreatedBy"].asString();
		if(!tableNode["DatabaseName"].isNull())
			tableVersionsObject.table.databaseName = tableNode["DatabaseName"].asString();
		if(!tableNode["LastAccessTime"].isNull())
			tableVersionsObject.table.lastAccessTime = std::stoi(tableNode["LastAccessTime"].asString());
		if(!tableNode["LastAnalyzedTime"].isNull())
			tableVersionsObject.table.lastAnalyzedTime = std::stoi(tableNode["LastAnalyzedTime"].asString());
		if(!tableNode["Owner"].isNull())
			tableVersionsObject.table.owner = tableNode["Owner"].asString();
		if(!tableNode["OwnerType"].isNull())
			tableVersionsObject.table.ownerType = tableNode["OwnerType"].asString();
		if(!tableNode["Parameters"].isNull())
			tableVersionsObject.table.parameters = tableNode["Parameters"].asString();
		if(!tableNode["Retention"].isNull())
			tableVersionsObject.table.retention = std::stoi(tableNode["Retention"].asString());
		if(!tableNode["RewriteEnabled"].isNull())
			tableVersionsObject.table.rewriteEnabled = tableNode["RewriteEnabled"].asString() == "true";
		if(!tableNode["TableName"].isNull())
			tableVersionsObject.table.tableName = tableNode["TableName"].asString();
		if(!tableNode["TableType"].isNull())
			tableVersionsObject.table.tableType = tableNode["TableType"].asString();
		if(!tableNode["Temporary"].isNull())
			tableVersionsObject.table.temporary = tableNode["Temporary"].asString() == "true";
		if(!tableNode["UpdateTime"].isNull())
			tableVersionsObject.table.updateTime = std::stoi(tableNode["UpdateTime"].asString());
		if(!tableNode["ViewExpandedText"].isNull())
			tableVersionsObject.table.viewExpandedText = tableNode["ViewExpandedText"].asString();
		if(!tableNode["ViewOriginalText"].isNull())
			tableVersionsObject.table.viewOriginalText = tableNode["ViewOriginalText"].asString();
		if(!tableNode["TableId"].isNull())
			tableVersionsObject.table.tableId = tableNode["TableId"].asString();
		if(!tableNode["TableVersion"].isNull())
			tableVersionsObject.table.tableVersion = tableNode["TableVersion"].asString();
		auto allPartitionKeysNode = tableNode["PartitionKeys"]["PartitionKeysItem"];
		for (auto tableNodePartitionKeysPartitionKeysItem : allPartitionKeysNode)
		{
			TableVersionsItem::Table::PartitionKeysItem partitionKeysItemObject;
			if(!tableNodePartitionKeysPartitionKeysItem["Comment"].isNull())
				partitionKeysItemObject.comment = tableNodePartitionKeysPartitionKeysItem["Comment"].asString();
			if(!tableNodePartitionKeysPartitionKeysItem["Name"].isNull())
				partitionKeysItemObject.name = tableNodePartitionKeysPartitionKeysItem["Name"].asString();
			if(!tableNodePartitionKeysPartitionKeysItem["Parameters"].isNull())
				partitionKeysItemObject.parameters = tableNodePartitionKeysPartitionKeysItem["Parameters"].asString();
			if(!tableNodePartitionKeysPartitionKeysItem["Type"].isNull())
				partitionKeysItemObject.type = tableNodePartitionKeysPartitionKeysItem["Type"].asString();
			tableVersionsObject.table.partitionKeys.push_back(partitionKeysItemObject);
		}
		auto privilegesNode = tableNode["Privileges"];
		if(!privilegesNode["GroupPrivileges"].isNull())
			tableVersionsObject.table.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
		if(!privilegesNode["RolePrivileges"].isNull())
			tableVersionsObject.table.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
		if(!privilegesNode["UserPrivileges"].isNull())
			tableVersionsObject.table.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
		auto sdNode = tableNode["Sd"];
		if(!sdNode["Compressed"].isNull())
			tableVersionsObject.table.sd.compressed = sdNode["Compressed"].asString() == "true";
		if(!sdNode["InputFormat"].isNull())
			tableVersionsObject.table.sd.inputFormat = sdNode["InputFormat"].asString();
		if(!sdNode["Location"].isNull())
			tableVersionsObject.table.sd.location = sdNode["Location"].asString();
		if(!sdNode["NumBuckets"].isNull())
			tableVersionsObject.table.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
		if(!sdNode["OutputFormat"].isNull())
			tableVersionsObject.table.sd.outputFormat = sdNode["OutputFormat"].asString();
		if(!sdNode["Parameters"].isNull())
			tableVersionsObject.table.sd.parameters = sdNode["Parameters"].asString();
		if(!sdNode["StoredAsSubDirectories"].isNull())
			tableVersionsObject.table.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
		auto allColsNode = sdNode["Cols"]["ColsItem"];
		for (auto sdNodeColsColsItem : allColsNode)
		{
			TableVersionsItem::Table::Sd::ColsItem colsItemObject;
			if(!sdNodeColsColsItem["Comment"].isNull())
				colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
			if(!sdNodeColsColsItem["Name"].isNull())
				colsItemObject.name = sdNodeColsColsItem["Name"].asString();
			if(!sdNodeColsColsItem["Parameters"].isNull())
				colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
			if(!sdNodeColsColsItem["Type"].isNull())
				colsItemObject.type = sdNodeColsColsItem["Type"].asString();
			tableVersionsObject.table.sd.cols.push_back(colsItemObject);
		}
		auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
		for (auto sdNodeSortColsSortColsItem : allSortColsNode)
		{
			TableVersionsItem::Table::Sd::SortColsItem sortColsItemObject;
			if(!sdNodeSortColsSortColsItem["Col"].isNull())
				sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
			if(!sdNodeSortColsSortColsItem["Order"].isNull())
				sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
			tableVersionsObject.table.sd.sortCols.push_back(sortColsItemObject);
		}
		auto serDeInfoNode = sdNode["SerDeInfo"];
		if(!serDeInfoNode["Name"].isNull())
			tableVersionsObject.table.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
		if(!serDeInfoNode["Parameters"].isNull())
			tableVersionsObject.table.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
		if(!serDeInfoNode["SerializationLib"].isNull())
			tableVersionsObject.table.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
		auto skewedInfoNode = sdNode["SkewedInfo"];
		if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
			tableVersionsObject.table.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
			auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
			for (auto value : allSkewedColNames)
				tableVersionsObject.table.sd.skewedInfo.skewedColNames.push_back(value.asString());
			auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
			for (auto value : allSkewedColValues)
				tableVersionsObject.table.sd.skewedInfo.skewedColValues.push_back(value.asString());
			auto allBucketCols = sdNode["BucketCols"]["null"];
			for (auto value : allBucketCols)
				tableVersionsObject.table.sd.bucketCols.push_back(value.asString());
		tableVersions_.push_back(tableVersionsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTableVersionsResult::getMessage()const
{
	return message_;
}

std::string ListTableVersionsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListTableVersionsResult::TableVersionsItem> ListTableVersionsResult::getTableVersions()const
{
	return tableVersions_;
}

std::string ListTableVersionsResult::getCode()const
{
	return code_;
}

bool ListTableVersionsResult::getSuccess()const
{
	return success_;
}

