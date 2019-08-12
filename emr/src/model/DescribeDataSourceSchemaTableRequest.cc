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

#include <alibabacloud/emr/model/DescribeDataSourceSchemaTableRequest.h>

using AlibabaCloud::Emr::Model::DescribeDataSourceSchemaTableRequest;

DescribeDataSourceSchemaTableRequest::DescribeDataSourceSchemaTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeDataSourceSchemaTable")
{}

DescribeDataSourceSchemaTableRequest::~DescribeDataSourceSchemaTableRequest()
{}

long DescribeDataSourceSchemaTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDataSourceSchemaTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDataSourceSchemaTableRequest::getDbName()const
{
	return dbName_;
}

void DescribeDataSourceSchemaTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string DescribeDataSourceSchemaTableRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDataSourceSchemaTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeDataSourceSchemaTableRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void DescribeDataSourceSchemaTableRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string DescribeDataSourceSchemaTableRequest::getTableName()const
{
	return tableName_;
}

void DescribeDataSourceSchemaTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", std::to_string(tableName));
}

std::string DescribeDataSourceSchemaTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDataSourceSchemaTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

