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

#include <alibabacloud/emr/model/MetastoreListTaskRequest.h>

using AlibabaCloud::Emr::Model::MetastoreListTaskRequest;

MetastoreListTaskRequest::MetastoreListTaskRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreListTask")
{}

MetastoreListTaskRequest::~MetastoreListTaskRequest()
{}

long MetastoreListTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreListTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreListTaskRequest::getTaskStatus()const
{
	return taskStatus_;
}

void MetastoreListTaskRequest::setTaskStatus(const std::string& taskStatus)
{
	taskStatus_ = taskStatus;
	setCoreParameter("TaskStatus", taskStatus);
}

std::string MetastoreListTaskRequest::getTaskSourceType()const
{
	return taskSourceType_;
}

void MetastoreListTaskRequest::setTaskSourceType(const std::string& taskSourceType)
{
	taskSourceType_ = taskSourceType;
	setCoreParameter("TaskSourceType", taskSourceType);
}

std::string MetastoreListTaskRequest::getTaskType()const
{
	return taskType_;
}

void MetastoreListTaskRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setCoreParameter("TaskType", taskType);
}

std::string MetastoreListTaskRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int MetastoreListTaskRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string MetastoreListTaskRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void MetastoreListTaskRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

int MetastoreListTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListTaskRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string MetastoreListTaskRequest::getTaskId()const
{
	return taskId_;
}

void MetastoreListTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string MetastoreListTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

