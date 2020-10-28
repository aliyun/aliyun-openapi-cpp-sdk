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

#include <alibabacloud/drds/model/CheckConnectivityRequest.h>

using AlibabaCloud::Drds::Model::CheckConnectivityRequest;

CheckConnectivityRequest::CheckConnectivityRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CheckConnectivity")
{
	setMethod(HttpRequest::Method::Post);
}

CheckConnectivityRequest::~CheckConnectivityRequest()
{}

std::string CheckConnectivityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckConnectivityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckConnectivityRequest::getDbInfo()const
{
	return dbInfo_;
}

void CheckConnectivityRequest::setDbInfo(const std::string& dbInfo)
{
	dbInfo_ = dbInfo;
	setParameter("DbInfo", dbInfo);
}

int CheckConnectivityRequest::getDbType()const
{
	return dbType_;
}

void CheckConnectivityRequest::setDbType(int dbType)
{
	dbType_ = dbType;
	setParameter("DbType", std::to_string(dbType));
}

