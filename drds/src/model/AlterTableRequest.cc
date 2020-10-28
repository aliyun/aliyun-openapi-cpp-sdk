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

#include <alibabacloud/drds/model/AlterTableRequest.h>

using AlibabaCloud::Drds::Model::AlterTableRequest;

AlterTableRequest::AlterTableRequest() :
	RpcServiceRequest("drds", "2015-04-13", "AlterTable")
{
	setMethod(HttpRequest::Method::Post);
}

AlterTableRequest::~AlterTableRequest()
{}

std::string AlterTableRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void AlterTableRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string AlterTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AlterTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AlterTableRequest::getDbName()const
{
	return dbName_;
}

void AlterTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string AlterTableRequest::getDdlSql()const
{
	return ddlSql_;
}

void AlterTableRequest::setDdlSql(const std::string& ddlSql)
{
	ddlSql_ = ddlSql;
	setParameter("DdlSql", ddlSql);
}

