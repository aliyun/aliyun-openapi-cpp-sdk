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

#include <alibabacloud/retailcloud/model/CreateAccountRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateAccount")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAccountRequest::~CreateAccountRequest()
{}

std::string CreateAccountRequest::getAccountPassword()const
{
	return accountPassword_;
}

void CreateAccountRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setBodyParameter("AccountPassword", accountPassword);
}

std::string CreateAccountRequest::getAccountName()const
{
	return accountName_;
}

void CreateAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setBodyParameter("AccountName", accountName);
}

std::string CreateAccountRequest::getAccountType()const
{
	return accountType_;
}

void CreateAccountRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setBodyParameter("AccountType", accountType);
}

std::string CreateAccountRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void CreateAccountRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setBodyParameter("DbInstanceId", dbInstanceId);
}

