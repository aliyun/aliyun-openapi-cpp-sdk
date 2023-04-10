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

#include <alibabacloud/datalake/model/SearchAcrossCatalogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

SearchAcrossCatalogResult::SearchAcrossCatalogResult() :
	ServiceResult()
{}

SearchAcrossCatalogResult::SearchAcrossCatalogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchAcrossCatalogResult::~SearchAcrossCatalogResult()
{}

void SearchAcrossCatalogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseResultNode = value["DatabaseResult"];
	if(!databaseResultNode["TotalCount"].isNull())
		databaseResult_.totalCount = std::stol(databaseResultNode["TotalCount"].asString());
	auto allDatabasesNode = databaseResultNode["Databases"]["DatabasesItem"];
	for (auto databaseResultNodeDatabasesDatabasesItem : allDatabasesNode)
	{
		DatabaseResult::DatabasesItem databasesItemObject;
		auto allHighLightListNode = databaseResultNodeDatabasesDatabasesItem["HighLightList"]["HighLightListItem"];
		for (auto databaseResultNodeDatabasesDatabasesItemHighLightListHighLightListItem : allHighLightListNode)
		{
			DatabaseResult::DatabasesItem::HighLightListItem highLightListObject;
			if(!databaseResultNodeDatabasesDatabasesItemHighLightListHighLightListItem["Key"].isNull())
				highLightListObject.key = databaseResultNodeDatabasesDatabasesItemHighLightListHighLightListItem["Key"].asString();
			if(!databaseResultNodeDatabasesDatabasesItemHighLightListHighLightListItem["Value"].isNull())
				highLightListObject.value = databaseResultNodeDatabasesDatabasesItemHighLightListHighLightListItem["Value"].asString();
			databasesItemObject.highLightList.push_back(highLightListObject);
		}
		auto databaseNode = value["Database"];
		if(!databaseNode["CreateTime"].isNull())
			databasesItemObject.database.createTime = std::stoi(databaseNode["CreateTime"].asString());
		if(!databaseNode["Description"].isNull())
			databasesItemObject.database.description = databaseNode["Description"].asString();
		if(!databaseNode["LocationUri"].isNull())
			databasesItemObject.database.locationUri = databaseNode["LocationUri"].asString();
		if(!databaseNode["Name"].isNull())
			databasesItemObject.database.name = databaseNode["Name"].asString();
		if(!databaseNode["OwnerName"].isNull())
			databasesItemObject.database.ownerName = databaseNode["OwnerName"].asString();
		if(!databaseNode["OwnerType"].isNull())
			databasesItemObject.database.ownerType = databaseNode["OwnerType"].asString();
		if(!databaseNode["Parameters"].isNull())
			databasesItemObject.database.parameters = databaseNode["Parameters"].asString();
		if(!databaseNode["UpdateTime"].isNull())
			databasesItemObject.database.updateTime = std::stoi(databaseNode["UpdateTime"].asString());
		if(!databaseNode["CreatedBy"].isNull())
			databasesItemObject.database.createdBy = databaseNode["CreatedBy"].asString();
		auto privilegesNode = databaseNode["Privileges"];
		if(!privilegesNode["GroupPrivileges"].isNull())
			databasesItemObject.database.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
		if(!privilegesNode["RolePrivileges"].isNull())
			databasesItemObject.database.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
		if(!privilegesNode["UserPrivileges"].isNull())
			databasesItemObject.database.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
		databaseResult_.databases.push_back(databasesItemObject);
	}
	auto tableResultNode = value["TableResult"];
	if(!tableResultNode["TotalCount"].isNull())
		tableResult_.totalCount = std::stol(tableResultNode["TotalCount"].asString());
	auto allTablesNode = tableResultNode["Tables"]["TablesItem"];
	for (auto tableResultNodeTablesTablesItem : allTablesNode)
	{
		TableResult::TablesItem tablesItemObject;
		auto allHighLightList1Node = tableResultNodeTablesTablesItem["HighLightList"]["HighLightListItem"];
		for (auto tableResultNodeTablesTablesItemHighLightListHighLightListItem : allHighLightList1Node)
		{
			TableResult::TablesItem::HighLightListItem2 highLightList1Object;
			if(!tableResultNodeTablesTablesItemHighLightListHighLightListItem["Key"].isNull())
				highLightList1Object.key = tableResultNodeTablesTablesItemHighLightListHighLightListItem["Key"].asString();
			if(!tableResultNodeTablesTablesItemHighLightListHighLightListItem["Value"].isNull())
				highLightList1Object.value = tableResultNodeTablesTablesItemHighLightListHighLightListItem["Value"].asString();
			tablesItemObject.highLightList1.push_back(highLightList1Object);
		}
		auto tableNode = value["Table"];
		if(!tableNode["Cascade"].isNull())
			tablesItemObject.table.cascade = tableNode["Cascade"].asString() == "true";
		if(!tableNode["CreateTime"].isNull())
			tablesItemObject.table.createTime = std::stoi(tableNode["CreateTime"].asString());
		if(!tableNode["CreatedBy"].isNull())
			tablesItemObject.table.createdBy = tableNode["CreatedBy"].asString();
		if(!tableNode["DatabaseName"].isNull())
			tablesItemObject.table.databaseName = tableNode["DatabaseName"].asString();
		if(!tableNode["LastAccessTime"].isNull())
			tablesItemObject.table.lastAccessTime = std::stoi(tableNode["LastAccessTime"].asString());
		if(!tableNode["LastAnalyzedTime"].isNull())
			tablesItemObject.table.lastAnalyzedTime = std::stoi(tableNode["LastAnalyzedTime"].asString());
		if(!tableNode["Owner"].isNull())
			tablesItemObject.table.owner = tableNode["Owner"].asString();
		if(!tableNode["OwnerType"].isNull())
			tablesItemObject.table.ownerType = tableNode["OwnerType"].asString();
		if(!tableNode["Parameters"].isNull())
			tablesItemObject.table.parameters = tableNode["Parameters"].asString();
		if(!tableNode["Retention"].isNull())
			tablesItemObject.table.retention = std::stoi(tableNode["Retention"].asString());
		if(!tableNode["RewriteEnabled"].isNull())
			tablesItemObject.table.rewriteEnabled = tableNode["RewriteEnabled"].asString() == "true";
		if(!tableNode["TableName"].isNull())
			tablesItemObject.table.tableName = tableNode["TableName"].asString();
		if(!tableNode["TableType"].isNull())
			tablesItemObject.table.tableType = tableNode["TableType"].asString();
		if(!tableNode["Temporary"].isNull())
			tablesItemObject.table.temporary = tableNode["Temporary"].asString() == "true";
		if(!tableNode["UpdateTime"].isNull())
			tablesItemObject.table.updateTime = std::stoi(tableNode["UpdateTime"].asString());
		if(!tableNode["ViewExpandedText"].isNull())
			tablesItemObject.table.viewExpandedText = tableNode["ViewExpandedText"].asString();
		if(!tableNode["ViewOriginalText"].isNull())
			tablesItemObject.table.viewOriginalText = tableNode["ViewOriginalText"].asString();
		if(!tableNode["TableId"].isNull())
			tablesItemObject.table.tableId = tableNode["TableId"].asString();
		auto allPartitionKeysNode = tableNode["PartitionKeys"]["PartitionKeysItem"];
		for (auto tableNodePartitionKeysPartitionKeysItem : allPartitionKeysNode)
		{
			TableResult::TablesItem::Table::PartitionKeysItem partitionKeysItemObject;
			if(!tableNodePartitionKeysPartitionKeysItem["Comment"].isNull())
				partitionKeysItemObject.comment = tableNodePartitionKeysPartitionKeysItem["Comment"].asString();
			if(!tableNodePartitionKeysPartitionKeysItem["Name"].isNull())
				partitionKeysItemObject.name = tableNodePartitionKeysPartitionKeysItem["Name"].asString();
			if(!tableNodePartitionKeysPartitionKeysItem["Parameters"].isNull())
				partitionKeysItemObject.parameters = tableNodePartitionKeysPartitionKeysItem["Parameters"].asString();
			if(!tableNodePartitionKeysPartitionKeysItem["Type"].isNull())
				partitionKeysItemObject.type = tableNodePartitionKeysPartitionKeysItem["Type"].asString();
			tablesItemObject.table.partitionKeys.push_back(partitionKeysItemObject);
		}
		auto privileges3Node = tableNode["Privileges"];
		if(!privileges3Node["GroupPrivileges"].isNull())
			tablesItemObject.table.privileges3.groupPrivileges = privileges3Node["GroupPrivileges"].asString();
		if(!privileges3Node["RolePrivileges"].isNull())
			tablesItemObject.table.privileges3.rolePrivileges = privileges3Node["RolePrivileges"].asString();
		if(!privileges3Node["UserPrivileges"].isNull())
			tablesItemObject.table.privileges3.userPrivileges = privileges3Node["UserPrivileges"].asString();
		auto sdNode = tableNode["Sd"];
		if(!sdNode["Compressed"].isNull())
			tablesItemObject.table.sd.compressed = sdNode["Compressed"].asString() == "true";
		if(!sdNode["InputFormat"].isNull())
			tablesItemObject.table.sd.inputFormat = sdNode["InputFormat"].asString();
		if(!sdNode["Location"].isNull())
			tablesItemObject.table.sd.location = sdNode["Location"].asString();
		if(!sdNode["NumBuckets"].isNull())
			tablesItemObject.table.sd.numBuckets = std::stoi(sdNode["NumBuckets"].asString());
		if(!sdNode["OutputFormat"].isNull())
			tablesItemObject.table.sd.outputFormat = sdNode["OutputFormat"].asString();
		if(!sdNode["Parameters"].isNull())
			tablesItemObject.table.sd.parameters = sdNode["Parameters"].asString();
		if(!sdNode["StoredAsSubDirectories"].isNull())
			tablesItemObject.table.sd.storedAsSubDirectories = sdNode["StoredAsSubDirectories"].asString() == "true";
		auto allColsNode = sdNode["Cols"]["ColsItem"];
		for (auto sdNodeColsColsItem : allColsNode)
		{
			TableResult::TablesItem::Table::Sd::ColsItem colsItemObject;
			if(!sdNodeColsColsItem["Comment"].isNull())
				colsItemObject.comment = sdNodeColsColsItem["Comment"].asString();
			if(!sdNodeColsColsItem["Name"].isNull())
				colsItemObject.name = sdNodeColsColsItem["Name"].asString();
			if(!sdNodeColsColsItem["Parameters"].isNull())
				colsItemObject.parameters = sdNodeColsColsItem["Parameters"].asString();
			if(!sdNodeColsColsItem["Type"].isNull())
				colsItemObject.type = sdNodeColsColsItem["Type"].asString();
			tablesItemObject.table.sd.cols.push_back(colsItemObject);
		}
		auto allSortColsNode = sdNode["SortCols"]["SortColsItem"];
		for (auto sdNodeSortColsSortColsItem : allSortColsNode)
		{
			TableResult::TablesItem::Table::Sd::SortColsItem sortColsItemObject;
			if(!sdNodeSortColsSortColsItem["Col"].isNull())
				sortColsItemObject.col = sdNodeSortColsSortColsItem["Col"].asString();
			if(!sdNodeSortColsSortColsItem["Order"].isNull())
				sortColsItemObject.order = std::stoi(sdNodeSortColsSortColsItem["Order"].asString());
			tablesItemObject.table.sd.sortCols.push_back(sortColsItemObject);
		}
		auto serDeInfoNode = sdNode["SerDeInfo"];
		if(!serDeInfoNode["Name"].isNull())
			tablesItemObject.table.sd.serDeInfo.name = serDeInfoNode["Name"].asString();
		if(!serDeInfoNode["Parameters"].isNull())
			tablesItemObject.table.sd.serDeInfo.parameters = serDeInfoNode["Parameters"].asString();
		if(!serDeInfoNode["SerializationLib"].isNull())
			tablesItemObject.table.sd.serDeInfo.serializationLib = serDeInfoNode["SerializationLib"].asString();
		auto skewedInfoNode = sdNode["SkewedInfo"];
		if(!skewedInfoNode["SkewedColValueLocationMaps"].isNull())
			tablesItemObject.table.sd.skewedInfo.skewedColValueLocationMaps = skewedInfoNode["SkewedColValueLocationMaps"].asString();
			auto allSkewedColNames = skewedInfoNode["SkewedColNames"]["null"];
			for (auto value : allSkewedColNames)
				tablesItemObject.table.sd.skewedInfo.skewedColNames.push_back(value.asString());
			auto allSkewedColValues = skewedInfoNode["SkewedColValues"]["null"];
			for (auto value : allSkewedColValues)
				tablesItemObject.table.sd.skewedInfo.skewedColValues.push_back(value.asString());
			auto allBucketCols = sdNode["BucketCols"]["null"];
			for (auto value : allBucketCols)
				tablesItemObject.table.sd.bucketCols.push_back(value.asString());
		auto tableVersionNode = tableNode["TableVersion"];
		if(!tableVersionNode["Table"].isNull())
			tablesItemObject.table.tableVersion.table = tableVersionNode["Table"].asString();
		if(!tableVersionNode["VersionId"].isNull())
			tablesItemObject.table.tableVersion.versionId = std::stoi(tableVersionNode["VersionId"].asString());
		tableResult_.tables.push_back(tablesItemObject);
	}
	auto catalogResultNode = value["CatalogResult"];
	if(!catalogResultNode["TotalCount"].isNull())
		catalogResult_.totalCount = std::stol(catalogResultNode["TotalCount"].asString());
	auto allCatalogsNode = catalogResultNode["Catalogs"]["CatalogsItem"];
	for (auto catalogResultNodeCatalogsCatalogsItem : allCatalogsNode)
	{
		CatalogResult::CatalogsItem catalogsItemObject;
		auto allHighLightList4Node = catalogResultNodeCatalogsCatalogsItem["HighLightList"]["HighLightListItem"];
		for (auto catalogResultNodeCatalogsCatalogsItemHighLightListHighLightListItem : allHighLightList4Node)
		{
			CatalogResult::CatalogsItem::HighLightListItem5 highLightList4Object;
			if(!catalogResultNodeCatalogsCatalogsItemHighLightListHighLightListItem["Key"].isNull())
				highLightList4Object.key = catalogResultNodeCatalogsCatalogsItemHighLightListHighLightListItem["Key"].asString();
			if(!catalogResultNodeCatalogsCatalogsItemHighLightListHighLightListItem["Value"].isNull())
				highLightList4Object.value = catalogResultNodeCatalogsCatalogsItemHighLightListHighLightListItem["Value"].asString();
			catalogsItemObject.highLightList4.push_back(highLightList4Object);
		}
		auto catalogNode = value["Catalog"];
		if(!catalogNode["CatalogId"].isNull())
			catalogsItemObject.catalog.catalogId = catalogNode["CatalogId"].asString();
		if(!catalogNode["Description"].isNull())
			catalogsItemObject.catalog.description = catalogNode["Description"].asString();
		if(!catalogNode["LocationUri"].isNull())
			catalogsItemObject.catalog.locationUri = catalogNode["LocationUri"].asString();
		if(!catalogNode["Owner"].isNull())
			catalogsItemObject.catalog.owner = catalogNode["Owner"].asString();
		if(!catalogNode["CreatedBy"].isNull())
			catalogsItemObject.catalog.createdBy = catalogNode["CreatedBy"].asString();
		if(!catalogNode["CreateTime"].isNull())
			catalogsItemObject.catalog.createTime = std::stol(catalogNode["CreateTime"].asString());
		if(!catalogNode["UpdateTime"].isNull())
			catalogsItemObject.catalog.updateTime = std::stol(catalogNode["UpdateTime"].asString());
		if(!catalogNode["Status"].isNull())
			catalogsItemObject.catalog.status = catalogNode["Status"].asString();
		catalogResult_.catalogs.push_back(catalogsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

SearchAcrossCatalogResult::TableResult SearchAcrossCatalogResult::getTableResult()const
{
	return tableResult_;
}

SearchAcrossCatalogResult::CatalogResult SearchAcrossCatalogResult::getCatalogResult()const
{
	return catalogResult_;
}

std::string SearchAcrossCatalogResult::getMessage()const
{
	return message_;
}

SearchAcrossCatalogResult::DatabaseResult SearchAcrossCatalogResult::getDatabaseResult()const
{
	return databaseResult_;
}

std::string SearchAcrossCatalogResult::getCode()const
{
	return code_;
}

bool SearchAcrossCatalogResult::getSuccess()const
{
	return success_;
}

