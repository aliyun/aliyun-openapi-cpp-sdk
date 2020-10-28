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

#include <alibabacloud/drds/model/DescribeUnCompatibilitySqlRequest.h>

using AlibabaCloud::Drds::Model::DescribeUnCompatibilitySqlRequest;

DescribeUnCompatibilitySqlRequest::DescribeUnCompatibilitySqlRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeUnCompatibilitySql")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUnCompatibilitySqlRequest::~DescribeUnCompatibilitySqlRequest()
{}

long DescribeUnCompatibilitySqlRequest::getDbName()const
{
	return dbName_;
}

void DescribeUnCompatibilitySqlRequest::setDbName(long dbName)
{
	dbName_ = dbName;
	setParameter("DbName", std::to_string(dbName));
}

std::string DescribeUnCompatibilitySqlRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUnCompatibilitySqlRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

long DescribeUnCompatibilitySqlRequest::getTaskId()const
{
	return taskId_;
}

void DescribeUnCompatibilitySqlRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

