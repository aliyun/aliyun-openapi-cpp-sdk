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

#include <alibabacloud/drds/model/CreateDrdsDBRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsDBRequest;

CreateDrdsDBRequest::CreateDrdsDBRequest() :
	RpcServiceRequest("drds", "2017-10-16", "CreateDrdsDB")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDrdsDBRequest::~CreateDrdsDBRequest()
{}

std::string CreateDrdsDBRequest::getEncode()const
{
	return encode_;
}

void CreateDrdsDBRequest::setEncode(const std::string& encode)
{
	encode_ = encode;
	setParameter("Encode", encode);
}

std::string CreateDrdsDBRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateDrdsDBRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string CreateDrdsDBRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsDBRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDrdsDBRequest::getPassword()const
{
	return password_;
}

void CreateDrdsDBRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateDrdsDBRequest::getDbName()const
{
	return dbName_;
}

void CreateDrdsDBRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string CreateDrdsDBRequest::getRdsInstances()const
{
	return rdsInstances_;
}

void CreateDrdsDBRequest::setRdsInstances(const std::string& rdsInstances)
{
	rdsInstances_ = rdsInstances;
	setParameter("RdsInstances", rdsInstances);
}

