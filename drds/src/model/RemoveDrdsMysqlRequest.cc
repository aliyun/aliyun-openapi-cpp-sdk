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

#include <alibabacloud/drds/model/RemoveDrdsMysqlRequest.h>

using AlibabaCloud::Drds::Model::RemoveDrdsMysqlRequest;

RemoveDrdsMysqlRequest::RemoveDrdsMysqlRequest() :
	RpcServiceRequest("drds", "2019-01-23", "RemoveDrdsMysql")
{
	setMethod(HttpRequest::Method::Post);
}

RemoveDrdsMysqlRequest::~RemoveDrdsMysqlRequest()
{}

std::string RemoveDrdsMysqlRequest::getRoDbInstanceId()const
{
	return roDbInstanceId_;
}

void RemoveDrdsMysqlRequest::setRoDbInstanceId(const std::string& roDbInstanceId)
{
	roDbInstanceId_ = roDbInstanceId;
	setParameter("RoDbInstanceId", roDbInstanceId);
}

std::string RemoveDrdsMysqlRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void RemoveDrdsMysqlRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string RemoveDrdsMysqlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveDrdsMysqlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RemoveDrdsMysqlRequest::getDbName()const
{
	return dbName_;
}

void RemoveDrdsMysqlRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string RemoveDrdsMysqlRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void RemoveDrdsMysqlRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setParameter("DbInstanceId", dbInstanceId);
}

bool RemoveDrdsMysqlRequest::getForce()const
{
	return force_;
}

void RemoveDrdsMysqlRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

