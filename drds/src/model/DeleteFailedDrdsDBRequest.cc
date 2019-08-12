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

#include <alibabacloud/drds/model/DeleteFailedDrdsDBRequest.h>

using AlibabaCloud::Drds::Model::DeleteFailedDrdsDBRequest;

DeleteFailedDrdsDBRequest::DeleteFailedDrdsDBRequest() :
	RpcServiceRequest("drds", "2017-10-16", "DeleteFailedDrdsDB")
{}

DeleteFailedDrdsDBRequest::~DeleteFailedDrdsDBRequest()
{}

std::string DeleteFailedDrdsDBRequest::getDbName()const
{
	return dbName_;
}

void DeleteFailedDrdsDBRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string DeleteFailedDrdsDBRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DeleteFailedDrdsDBRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", std::to_string(drdsInstanceId));
}

std::string DeleteFailedDrdsDBRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFailedDrdsDBRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

