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

#include <alibabacloud/drds/model/SubmitSwitchTableShardingKeyModifyRequest.h>

using AlibabaCloud::Drds::Model::SubmitSwitchTableShardingKeyModifyRequest;

SubmitSwitchTableShardingKeyModifyRequest::SubmitSwitchTableShardingKeyModifyRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitSwitchTableShardingKeyModify")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitSwitchTableShardingKeyModifyRequest::~SubmitSwitchTableShardingKeyModifyRequest()
{}

std::string SubmitSwitchTableShardingKeyModifyRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitSwitchTableShardingKeyModifyRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitSwitchTableShardingKeyModifyRequest::getDbName()const
{
	return dbName_;
}

void SubmitSwitchTableShardingKeyModifyRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string SubmitSwitchTableShardingKeyModifyRequest::getRegionId()const
{
	return regionId_;
}

void SubmitSwitchTableShardingKeyModifyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SubmitSwitchTableShardingKeyModifyRequest::getTaskId()const
{
	return taskId_;
}

void SubmitSwitchTableShardingKeyModifyRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

