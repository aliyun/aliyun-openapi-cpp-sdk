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

#include <alibabacloud/drds/model/CreateReadOnlyAccountRequest.h>

using AlibabaCloud::Drds::Model::CreateReadOnlyAccountRequest;

CreateReadOnlyAccountRequest::CreateReadOnlyAccountRequest() :
	RpcServiceRequest("drds", "2017-10-16", "CreateReadOnlyAccount")
{}

CreateReadOnlyAccountRequest::~CreateReadOnlyAccountRequest()
{}

std::string CreateReadOnlyAccountRequest::getPassword()const
{
	return password_;
}

void CreateReadOnlyAccountRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string CreateReadOnlyAccountRequest::getDbName()const
{
	return dbName_;
}

void CreateReadOnlyAccountRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string CreateReadOnlyAccountRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateReadOnlyAccountRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string CreateReadOnlyAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateReadOnlyAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

