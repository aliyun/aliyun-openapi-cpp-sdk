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

#include <alibabacloud/drds/model/ResetDrdsToRdsConnectionsRequest.h>

using AlibabaCloud::Drds::Model::ResetDrdsToRdsConnectionsRequest;

ResetDrdsToRdsConnectionsRequest::ResetDrdsToRdsConnectionsRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ResetDrdsToRdsConnections")
{
	setMethod(HttpRequest::Method::Post);
}

ResetDrdsToRdsConnectionsRequest::~ResetDrdsToRdsConnectionsRequest()
{}

std::string ResetDrdsToRdsConnectionsRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ResetDrdsToRdsConnectionsRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ResetDrdsToRdsConnectionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ResetDrdsToRdsConnectionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ResetDrdsToRdsConnectionsRequest::getDbName()const
{
	return dbName_;
}

void ResetDrdsToRdsConnectionsRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

