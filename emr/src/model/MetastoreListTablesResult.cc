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

#include <alibabacloud/emr/model/MetastoreListTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListTablesResult::MetastoreListTablesResult() :
	ServiceResult()
{}

MetastoreListTablesResult::MetastoreListTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListTablesResult::~MetastoreListTablesResult()
{}

void MetastoreListTablesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTableList = value["TableList"]["Table"];
	for (auto value : allTableList)
	{
		Table tableListObject;
		if(!value["Id"].isNull())
			tableListObject.id = value["Id"].asString();
		if(!value["DatabaseId"].isNull())
			tableListObject.databaseId = value["DatabaseId"].asString();
		if(!value["DatabaseName"].isNull())
			tableListObject.databaseName = value["DatabaseName"].asString();
		if(!value["ClusterBizId"].isNull())
			tableListObject.clusterBizId = value["ClusterBizId"].asString();
		if(!value["ClusterName"].isNull())
			tableListObject.clusterName = value["ClusterName"].asString();
		if(!value["TableName"].isNull())
			tableListObject.tableName = value["TableName"].asString();
		if(!value["TableComment"].isNull())
			tableListObject.tableComment = value["TableComment"].asString();
		if(!value["TableType"].isNull())
			tableListObject.tableType = value["TableType"].asString();
		if(!value["TableParameters"].isNull())
			tableListObject.tableParameters = value["TableParameters"].asString();
		if(!value["Owner"].isNull())
			tableListObject.owner = value["Owner"].asString();
		if(!value["OwnerType"].isNull())
			tableListObject.ownerType = value["OwnerType"].asString();
		if(!value["IsTemporary"].isNull())
			tableListObject.isTemporary = value["IsTemporary"].asString() == "true";
		if(!value["PartitionKeys"].isNull())
			tableListObject.partitionKeys = value["PartitionKeys"].asString();
		if(!value["SerializationLib"].isNull())
			tableListObject.serializationLib = value["SerializationLib"].asString();
		if(!value["SerdeParameters"].isNull())
			tableListObject.serdeParameters = value["SerdeParameters"].asString();
		if(!value["InputFormat"].isNull())
			tableListObject.inputFormat = value["InputFormat"].asString();
		if(!value["OutputFormat"].isNull())
			tableListObject.outputFormat = value["OutputFormat"].asString();
		if(!value["Location"].isNull())
			tableListObject.location = value["Location"].asString();
		if(!value["IsCompressed"].isNull())
			tableListObject.isCompressed = value["IsCompressed"].asString() == "true";
		if(!value["LastAccessTime"].isNull())
			tableListObject.lastAccessTime = std::stol(value["LastAccessTime"].asString());
		if(!value["CreateTime"].isNull())
			tableListObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["GmtCreate"].isNull())
			tableListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			tableListObject.gmtModified = std::stol(value["GmtModified"].asString());
		tableList_.push_back(tableListObject);
	}
	auto allTableNames = value["TableNames"]["TableName"];
	for (const auto &item : allTableNames)
		tableNames_.push_back(item.asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int MetastoreListTablesResult::getTotalCount()const
{
	return totalCount_;
}

int MetastoreListTablesResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListTablesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<std::string> MetastoreListTablesResult::getTableNames()const
{
	return tableNames_;
}

std::vector<MetastoreListTablesResult::Table> MetastoreListTablesResult::getTableList()const
{
	return tableList_;
}

