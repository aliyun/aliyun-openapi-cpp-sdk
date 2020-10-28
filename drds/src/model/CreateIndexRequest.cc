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

#include <alibabacloud/drds/model/CreateIndexRequest.h>

using AlibabaCloud::Drds::Model::CreateIndexRequest;

CreateIndexRequest::CreateIndexRequest() :
	RpcServiceRequest("drds", "2015-04-13", "CreateIndex")
{
	setMethod(HttpRequest::Method::Post);
}

CreateIndexRequest::~CreateIndexRequest()
{}

std::string CreateIndexRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateIndexRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string CreateIndexRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateIndexRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateIndexRequest::getDbName()const
{
	return dbName_;
}

void CreateIndexRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string CreateIndexRequest::getDdlSql()const
{
	return ddlSql_;
}

void CreateIndexRequest::setDdlSql(const std::string& ddlSql)
{
	ddlSql_ = ddlSql;
	setParameter("DdlSql", ddlSql);
}

