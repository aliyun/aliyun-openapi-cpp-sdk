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

#include <alibabacloud/emr/model/MetastoreCreateTableRequest.h>

using AlibabaCloud::Emr::Model::MetastoreCreateTableRequest;

MetastoreCreateTableRequest::MetastoreCreateTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreCreateTable")
{}

MetastoreCreateTableRequest::~MetastoreCreateTableRequest()
{}

long MetastoreCreateTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreCreateTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MetastoreCreateTableRequest::getFieldDelimiter()const
{
	return fieldDelimiter_;
}

void MetastoreCreateTableRequest::setFieldDelimiter(const std::string& fieldDelimiter)
{
	fieldDelimiter_ = fieldDelimiter;
	setCoreParameter("FieldDelimiter", std::to_string(fieldDelimiter));
}

std::vector<MetastoreCreateTableRequest::Column> MetastoreCreateTableRequest::getColumn()const
{
	return column_;
}

void MetastoreCreateTableRequest::setColumn(const std::vector<Column>& column)
{
	column_ = column;
	int i = 0;
	for(int i = 0; i!= column.size(); i++)	{
		auto obj = column.at(i);
		std::string str ="Column."+ std::to_string(i);
		setCoreParameter(str + ".Name", std::to_string(obj.name));
		setCoreParameter(str + ".Comment", std::to_string(obj.comment));
		setCoreParameter(str + ".Type", std::to_string(obj.type));
	}
}

std::string MetastoreCreateTableRequest::getCreateWith()const
{
	return createWith_;
}

void MetastoreCreateTableRequest::setCreateWith(const std::string& createWith)
{
	createWith_ = createWith;
	setCoreParameter("CreateWith", std::to_string(createWith));
}

std::string MetastoreCreateTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreCreateTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::vector<MetastoreCreateTableRequest::Partition> MetastoreCreateTableRequest::getPartition()const
{
	return partition_;
}

void MetastoreCreateTableRequest::setPartition(const std::vector<Partition>& partition)
{
	partition_ = partition;
	int i = 0;
	for(int i = 0; i!= partition.size(); i++)	{
		auto obj = partition.at(i);
		std::string str ="Partition."+ std::to_string(i);
		setCoreParameter(str + ".Name", std::to_string(obj.name));
		setCoreParameter(str + ".Comment", std::to_string(obj.comment));
		setCoreParameter(str + ".Type", std::to_string(obj.type));
	}
}

std::string MetastoreCreateTableRequest::getDbName()const
{
	return dbName_;
}

void MetastoreCreateTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string MetastoreCreateTableRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreCreateTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string MetastoreCreateTableRequest::getCreateSql()const
{
	return createSql_;
}

void MetastoreCreateTableRequest::setCreateSql(const std::string& createSql)
{
	createSql_ = createSql;
	setCoreParameter("CreateSql", std::to_string(createSql));
}

std::string MetastoreCreateTableRequest::getComment()const
{
	return comment_;
}

void MetastoreCreateTableRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", std::to_string(comment));
}

std::string MetastoreCreateTableRequest::getLocationUri()const
{
	return locationUri_;
}

void MetastoreCreateTableRequest::setLocationUri(const std::string& locationUri)
{
	locationUri_ = locationUri;
	setCoreParameter("LocationUri", std::to_string(locationUri));
}

std::string MetastoreCreateTableRequest::getTableName()const
{
	return tableName_;
}

void MetastoreCreateTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", std::to_string(tableName));
}

std::string MetastoreCreateTableRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreCreateTableRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setCoreParameter("DatabaseId", std::to_string(databaseId));
}

