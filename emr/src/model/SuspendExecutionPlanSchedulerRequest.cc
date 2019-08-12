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

#include <alibabacloud/emr/model/SuspendExecutionPlanSchedulerRequest.h>

using AlibabaCloud::Emr::Model::SuspendExecutionPlanSchedulerRequest;

SuspendExecutionPlanSchedulerRequest::SuspendExecutionPlanSchedulerRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SuspendExecutionPlanScheduler")
{}

SuspendExecutionPlanSchedulerRequest::~SuspendExecutionPlanSchedulerRequest()
{}

long SuspendExecutionPlanSchedulerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SuspendExecutionPlanSchedulerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SuspendExecutionPlanSchedulerRequest::getRegionId()const
{
	return regionId_;
}

void SuspendExecutionPlanSchedulerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SuspendExecutionPlanSchedulerRequest::getId()const
{
	return id_;
}

void SuspendExecutionPlanSchedulerRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string SuspendExecutionPlanSchedulerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SuspendExecutionPlanSchedulerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

