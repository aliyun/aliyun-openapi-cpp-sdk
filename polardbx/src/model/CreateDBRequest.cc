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

#include <alibabacloud/polardbx/model/CreateDBRequest.h>

using AlibabaCloud::Polardbx::Model::CreateDBRequest;

CreateDBRequest::CreateDBRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "CreateDB")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBRequest::~CreateDBRequest()
{}

std::string CreateDBRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void CreateDBRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string CreateDBRequest::getCharset()const
{
	return charset_;
}

void CreateDBRequest::setCharset(const std::string& charset)
{
	charset_ = charset;
	setParameter("Charset", charset);
}

std::string CreateDBRequest::getAccountPrivilege()const
{
	return accountPrivilege_;
}

void CreateDBRequest::setAccountPrivilege(const std::string& accountPrivilege)
{
	accountPrivilege_ = accountPrivilege;
	setParameter("AccountPrivilege", accountPrivilege);
}

std::string CreateDBRequest::getAccountName()const
{
	return accountName_;
}

void CreateDBRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string CreateDBRequest::getDbName()const
{
	return dbName_;
}

void CreateDBRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string CreateDBRequest::getRegionId()const
{
	return regionId_;
}

void CreateDBRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDBRequest::getDbDescription()const
{
	return dbDescription_;
}

void CreateDBRequest::setDbDescription(const std::string& dbDescription)
{
	dbDescription_ = dbDescription;
	setParameter("DbDescription", dbDescription);
}

