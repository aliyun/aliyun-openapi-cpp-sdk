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

#include <alibabacloud/drds/model/ModifyReadOnlyAccountPasswordRequest.h>

using AlibabaCloud::Drds::Model::ModifyReadOnlyAccountPasswordRequest;

ModifyReadOnlyAccountPasswordRequest::ModifyReadOnlyAccountPasswordRequest() :
	RpcServiceRequest("drds", "2017-10-16", "ModifyReadOnlyAccountPassword")
{}

ModifyReadOnlyAccountPasswordRequest::~ModifyReadOnlyAccountPasswordRequest()
{}

std::string ModifyReadOnlyAccountPasswordRequest::getNewPasswd()const
{
	return newPasswd_;
}

void ModifyReadOnlyAccountPasswordRequest::setNewPasswd(const std::string& newPasswd)
{
	newPasswd_ = newPasswd;
	setParameter("NewPasswd", newPasswd);
}

std::string ModifyReadOnlyAccountPasswordRequest::getDbName()const
{
	return dbName_;
}

void ModifyReadOnlyAccountPasswordRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string ModifyReadOnlyAccountPasswordRequest::getAccountName()const
{
	return accountName_;
}

void ModifyReadOnlyAccountPasswordRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setParameter("AccountName", accountName);
}

std::string ModifyReadOnlyAccountPasswordRequest::getOriginPassword()const
{
	return originPassword_;
}

void ModifyReadOnlyAccountPasswordRequest::setOriginPassword(const std::string& originPassword)
{
	originPassword_ = originPassword;
	setParameter("OriginPassword", originPassword);
}

std::string ModifyReadOnlyAccountPasswordRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyReadOnlyAccountPasswordRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ModifyReadOnlyAccountPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReadOnlyAccountPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

