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

#include <alibabacloud/retailcloud/model/GrantDbToAccountRequest.h>

using AlibabaCloud::Retailcloud::Model::GrantDbToAccountRequest;

GrantDbToAccountRequest::GrantDbToAccountRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "GrantDbToAccount")
{
	setMethod(HttpRequest::Method::Post);
}

GrantDbToAccountRequest::~GrantDbToAccountRequest()
{}

std::string GrantDbToAccountRequest::getAccountName()const
{
	return accountName_;
}

void GrantDbToAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string GrantDbToAccountRequest::getDbName()const
{
	return dbName_;
}

void GrantDbToAccountRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setBodyParameter("DbName", dbName);
}

std::string GrantDbToAccountRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void GrantDbToAccountRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

std::string GrantDbToAccountRequest::getAccountPrivilege()const
{
	return accountPrivilege_;
}

void GrantDbToAccountRequest::setAccountPrivilege(const std::string& accountPrivilege)
{
	accountPrivilege_ = accountPrivilege;
	setBodyParameter("AccountPrivilege", accountPrivilege);
}

