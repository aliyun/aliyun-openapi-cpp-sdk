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

#include <alibabacloud/drds/model/RemoveReadOnlyAccountRequest.h>

using AlibabaCloud::Drds::Model::RemoveReadOnlyAccountRequest;

RemoveReadOnlyAccountRequest::RemoveReadOnlyAccountRequest() :
	RpcServiceRequest("drds", "2017-10-16", "RemoveReadOnlyAccount")
{}

RemoveReadOnlyAccountRequest::~RemoveReadOnlyAccountRequest()
{}

std::string RemoveReadOnlyAccountRequest::getDbName()const
{
	return dbName_;
}

void RemoveReadOnlyAccountRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string RemoveReadOnlyAccountRequest::getAccountName()const
{
	return accountName_;
}

void RemoveReadOnlyAccountRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", std::to_string(accountName));
}

std::string RemoveReadOnlyAccountRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void RemoveReadOnlyAccountRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", std::to_string(drdsInstanceId));
}

std::string RemoveReadOnlyAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveReadOnlyAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

