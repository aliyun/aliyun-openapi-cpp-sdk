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

#include <alibabacloud/drds/model/DropTablesRequest.h>

using AlibabaCloud::Drds::Model::DropTablesRequest;

DropTablesRequest::DropTablesRequest() :
	RpcServiceRequest("drds", "2015-04-13", "DropTables")
{
	setMethod(HttpRequest::Method::Post);
}

DropTablesRequest::~DropTablesRequest()
{}

std::string DropTablesRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DropTablesRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DropTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DropTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DropTablesRequest::getTables()const
{
	return tables_;
}

void DropTablesRequest::setTables(const std::string& tables)
{
	tables_ = tables;
	setParameter("Tables", tables);
}

std::string DropTablesRequest::getDbName()const
{
	return dbName_;
}

void DropTablesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

