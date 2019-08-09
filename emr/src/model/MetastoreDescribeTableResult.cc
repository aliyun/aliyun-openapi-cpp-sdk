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

#include <alibabacloud/emr/model/MetastoreDescribeTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreDescribeTableResult::MetastoreDescribeTableResult() :
	ServiceResult()
{}

MetastoreDescribeTableResult::MetastoreDescribeTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreDescribeTableResult::~MetastoreDescribeTableResult()
{}

void MetastoreDescribeTableResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allColumns = value["Columns"]["Column"];
	for (auto value : allColumns)
	{
		Column columnsObject;
		if(!value["Name"].isNull())
			columnsObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			columnsObject.type = value["Type"].asString();
		if(!value["Comment"].isNull())
			columnsObject.comment = value["Comment"].asString();
		columns_.push_back(columnsObject);
	}
	auto allPartitionColumns = value["PartitionColumns"]["PartitionColumn"];
	for (auto value : allPartitionColumns)
	{
		PartitionColumn partitionColumnsObject;
		if(!value["Name"].isNull())
			partitionColumnsObject.name = value["Name"].asString();
		if(!value["Type"].isNull())
			partitionColumnsObject.type = value["Type"].asString();
		if(!value["Comment"].isNull())
			partitionColumnsObject.comment = value["Comment"].asString();
		partitionColumns_.push_back(partitionColumnsObject);
	}
	auto allSerdeParameters = value["SerdeParameters"]["SerdeParameter"];
	for (auto value : allSerdeParameters)
	{
		SerdeParameter serdeParametersObject;
		if(!value["Key"].isNull())
			serdeParametersObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			serdeParametersObject.value = value["Value"].asString();
		serdeParameters_.push_back(serdeParametersObject);
	}
	auto allStorageDescParameters = value["StorageDescParameters"]["StorageDescParameter"];
	for (auto value : allStorageDescParameters)
	{
		StorageDescParameter storageDescParametersObject;
		if(!value["Key"].isNull())
			storageDescParametersObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			storageDescParametersObject.value = value["Value"].asString();
		storageDescParameters_.push_back(storageDescParametersObject);
	}
	auto allTableParameters = value["TableParameters"]["TableParameter"];
	for (auto value : allTableParameters)
	{
		TableParameter tableParametersObject;
		if(!value["Key"].isNull())
			tableParametersObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			tableParametersObject.value = value["Value"].asString();
		tableParameters_.push_back(tableParametersObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["DatabaseId"].isNull())
		databaseId_ = value["DatabaseId"].asString();
	if(!value["ClusterBizId"].isNull())
		clusterBizId_ = value["ClusterBizId"].asString();
	if(!value["ClusterName"].isNull())
		clusterName_ = value["ClusterName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stoi(value["CreateTime"].asString());
	if(!value["LastAccessTime"].isNull())
		lastAccessTime_ = std::stoi(value["LastAccessTime"].asString());
	if(!value["LocationUri"].isNull())
		locationUri_ = value["LocationUri"].asString();
	if(!value["InputFormat"].isNull())
		inputFormat_ = value["InputFormat"].asString();
	if(!value["OutputFormat"].isNull())
		outputFormat_ = value["OutputFormat"].asString();
	if(!value["Compressed"].isNull())
		compressed_ = value["Compressed"].asString() == "true";
	if(!value["SerializationLib"].isNull())
		serializationLib_ = value["SerializationLib"].asString();
	if(!value["TableName"].isNull())
		tableName_ = value["TableName"].asString();
	if(!value["DbName"].isNull())
		dbName_ = value["DbName"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["TableComment"].isNull())
		tableComment_ = value["TableComment"].asString();
	if(!value["TableType"].isNull())
		tableType_ = value["TableType"].asString();
	if(!value["Creator"].isNull())
		creator_ = value["Creator"].asString();
	if(!value["FieldDelimiter"].isNull())
		fieldDelimiter_ = value["FieldDelimiter"].asString();

}

std::string MetastoreDescribeTableResult::getLocationUri()const
{
	return locationUri_;
}

std::string MetastoreDescribeTableResult::getOwner()const
{
	return owner_;
}

std::string MetastoreDescribeTableResult::getTableType()const
{
	return tableType_;
}

std::string MetastoreDescribeTableResult::getFieldDelimiter()const
{
	return fieldDelimiter_;
}

int MetastoreDescribeTableResult::getCreateTime()const
{
	return createTime_;
}

std::string MetastoreDescribeTableResult::getOutputFormat()const
{
	return outputFormat_;
}

std::vector<MetastoreDescribeTableResult::Column> MetastoreDescribeTableResult::getColumns()const
{
	return columns_;
}

std::vector<MetastoreDescribeTableResult::PartitionColumn> MetastoreDescribeTableResult::getPartitionColumns()const
{
	return partitionColumns_;
}

std::string MetastoreDescribeTableResult::getDatabaseId()const
{
	return databaseId_;
}

std::string MetastoreDescribeTableResult::getCreator()const
{
	return creator_;
}

int MetastoreDescribeTableResult::getLastAccessTime()const
{
	return lastAccessTime_;
}

bool MetastoreDescribeTableResult::getCompressed()const
{
	return compressed_;
}

std::vector<MetastoreDescribeTableResult::SerdeParameter> MetastoreDescribeTableResult::getSerdeParameters()const
{
	return serdeParameters_;
}

std::string MetastoreDescribeTableResult::getSerializationLib()const
{
	return serializationLib_;
}

std::string MetastoreDescribeTableResult::getTableName()const
{
	return tableName_;
}

std::string MetastoreDescribeTableResult::getTableComment()const
{
	return tableComment_;
}

std::vector<MetastoreDescribeTableResult::StorageDescParameter> MetastoreDescribeTableResult::getStorageDescParameters()const
{
	return storageDescParameters_;
}

std::string MetastoreDescribeTableResult::getClusterBizId()const
{
	return clusterBizId_;
}

std::string MetastoreDescribeTableResult::getInputFormat()const
{
	return inputFormat_;
}

std::string MetastoreDescribeTableResult::getClusterName()const
{
	return clusterName_;
}

std::string MetastoreDescribeTableResult::getDbName()const
{
	return dbName_;
}

std::string MetastoreDescribeTableResult::getId()const
{
	return id_;
}

std::vector<MetastoreDescribeTableResult::TableParameter> MetastoreDescribeTableResult::getTableParameters()const
{
	return tableParameters_;
}

