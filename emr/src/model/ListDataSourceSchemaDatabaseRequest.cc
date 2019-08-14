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

#include <alibabacloud/emr/model/ListDataSourceSchemaDatabaseRequest.h>

using AlibabaCloud::Emr::Model::ListDataSourceSchemaDatabaseRequest;

ListDataSourceSchemaDatabaseRequest::ListDataSourceSchemaDatabaseRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListDataSourceSchemaDatabase")
{}

ListDataSourceSchemaDatabaseRequest::~ListDataSourceSchemaDatabaseRequest()
{}

long ListDataSourceSchemaDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListDataSourceSchemaDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListDataSourceSchemaDatabaseRequest::getDbName()const
{
	return dbName_;
}

void ListDataSourceSchemaDatabaseRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string ListDataSourceSchemaDatabaseRequest::getRegionId()const
{
	return regionId_;
}

void ListDataSourceSchemaDatabaseRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListDataSourceSchemaDatabaseRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void ListDataSourceSchemaDatabaseRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string ListDataSourceSchemaDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDataSourceSchemaDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

