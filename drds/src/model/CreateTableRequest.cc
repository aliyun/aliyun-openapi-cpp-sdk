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

#include <alibabacloud/drds/model/CreateTableRequest.h>

using AlibabaCloud::Drds::Model::CreateTableRequest;

CreateTableRequest::CreateTableRequest() :
	RpcServiceRequest("drds", "2015-04-13", "CreateTable")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTableRequest::~CreateTableRequest()
{}

std::string CreateTableRequest::getAllowFullTableScan()const
{
	return allowFullTableScan_;
}

void CreateTableRequest::setAllowFullTableScan(const std::string& allowFullTableScan)
{
	allowFullTableScan_ = allowFullTableScan;
	setParameter("AllowFullTableScan", allowFullTableScan);
}

std::string CreateTableRequest::getShardKey()const
{
	return shardKey_;
}

void CreateTableRequest::setShardKey(const std::string& shardKey)
{
	shardKey_ = shardKey;
	setParameter("ShardKey", shardKey);
}

std::string CreateTableRequest::getShardType()const
{
	return shardType_;
}

void CreateTableRequest::setShardType(const std::string& shardType)
{
	shardType_ = shardType;
	setParameter("ShardType", shardType);
}

std::string CreateTableRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateTableRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string CreateTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateTableRequest::getDbName()const
{
	return dbName_;
}

void CreateTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string CreateTableRequest::getDdlSql()const
{
	return ddlSql_;
}

void CreateTableRequest::setDdlSql(const std::string& ddlSql)
{
	ddlSql_ = ddlSql;
	setParameter("DdlSql", ddlSql);
}

