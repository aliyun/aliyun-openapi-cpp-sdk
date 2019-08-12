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

#include <alibabacloud/emr/model/ListDataSourceSchemaTableRequest.h>

using AlibabaCloud::Emr::Model::ListDataSourceSchemaTableRequest;

ListDataSourceSchemaTableRequest::ListDataSourceSchemaTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListDataSourceSchemaTable")
{}

ListDataSourceSchemaTableRequest::~ListDataSourceSchemaTableRequest()
{}

long ListDataSourceSchemaTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListDataSourceSchemaTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListDataSourceSchemaTableRequest::getDbName()const
{
	return dbName_;
}

void ListDataSourceSchemaTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string ListDataSourceSchemaTableRequest::getRegionId()const
{
	return regionId_;
}

void ListDataSourceSchemaTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListDataSourceSchemaTableRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListDataSourceSchemaTableRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string ListDataSourceSchemaTableRequest::getTableName()const
{
	return tableName_;
}

void ListDataSourceSchemaTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", tableName);
}

std::string ListDataSourceSchemaTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDataSourceSchemaTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

