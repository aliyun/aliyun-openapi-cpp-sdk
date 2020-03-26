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

#include <alibabacloud/drds/model/ModifyDrdsDBPasswdRequest.h>

using AlibabaCloud::Drds::Model::ModifyDrdsDBPasswdRequest;

ModifyDrdsDBPasswdRequest::ModifyDrdsDBPasswdRequest() :
	RpcServiceRequest("drds", "2017-10-16", "ModifyDrdsDBPasswd")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDrdsDBPasswdRequest::~ModifyDrdsDBPasswdRequest()
{}

std::string ModifyDrdsDBPasswdRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyDrdsDBPasswdRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ModifyDrdsDBPasswdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDrdsDBPasswdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDrdsDBPasswdRequest::getNewPasswd()const
{
	return newPasswd_;
}

void ModifyDrdsDBPasswdRequest::setNewPasswd(const std::string& newPasswd)
{
	newPasswd_ = newPasswd;
	setParameter("NewPasswd", newPasswd);
}

std::string ModifyDrdsDBPasswdRequest::getDbName()const
{
	return dbName_;
}

void ModifyDrdsDBPasswdRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

