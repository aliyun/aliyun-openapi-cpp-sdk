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

#include <alibabacloud/drds/model/SubmitCleanTableShardingKeyModifyRequest.h>

using AlibabaCloud::Drds::Model::SubmitCleanTableShardingKeyModifyRequest;

SubmitCleanTableShardingKeyModifyRequest::SubmitCleanTableShardingKeyModifyRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitCleanTableShardingKeyModify")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitCleanTableShardingKeyModifyRequest::~SubmitCleanTableShardingKeyModifyRequest()
{}

std::string SubmitCleanTableShardingKeyModifyRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitCleanTableShardingKeyModifyRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitCleanTableShardingKeyModifyRequest::getDbName()const
{
	return dbName_;
}

void SubmitCleanTableShardingKeyModifyRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string SubmitCleanTableShardingKeyModifyRequest::getRegionId()const
{
	return regionId_;
}

void SubmitCleanTableShardingKeyModifyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SubmitCleanTableShardingKeyModifyRequest::getTaskId()const
{
	return taskId_;
}

void SubmitCleanTableShardingKeyModifyRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

