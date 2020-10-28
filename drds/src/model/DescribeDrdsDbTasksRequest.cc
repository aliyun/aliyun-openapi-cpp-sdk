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

#include <alibabacloud/drds/model/DescribeDrdsDbTasksRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsDbTasksRequest;

DescribeDrdsDbTasksRequest::DescribeDrdsDbTasksRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsDbTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDrdsDbTasksRequest::~DescribeDrdsDbTasksRequest()
{}

std::string DescribeDrdsDbTasksRequest::getTaskType()const
{
	return taskType_;
}

void DescribeDrdsDbTasksRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string DescribeDrdsDbTasksRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeDrdsDbTasksRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeDrdsDbTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDrdsDbTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDrdsDbTasksRequest::getDbName()const
{
	return dbName_;
}

void DescribeDrdsDbTasksRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

