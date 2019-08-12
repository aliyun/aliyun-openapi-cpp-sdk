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

#include <alibabacloud/emr/model/RetryExecutionPlanRequest.h>

using AlibabaCloud::Emr::Model::RetryExecutionPlanRequest;

RetryExecutionPlanRequest::RetryExecutionPlanRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RetryExecutionPlan")
{}

RetryExecutionPlanRequest::~RetryExecutionPlanRequest()
{}

long RetryExecutionPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RetryExecutionPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RetryExecutionPlanRequest::getRegionId()const
{
	return regionId_;
}

void RetryExecutionPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RetryExecutionPlanRequest::getExecutionPlanWorkNodeIds()const
{
	return executionPlanWorkNodeIds_;
}

void RetryExecutionPlanRequest::setExecutionPlanWorkNodeIds(const std::string& executionPlanWorkNodeIds)
{
	executionPlanWorkNodeIds_ = executionPlanWorkNodeIds;
	setCoreParameter("ExecutionPlanWorkNodeIds", executionPlanWorkNodeIds);
}

std::string RetryExecutionPlanRequest::getId()const
{
	return id_;
}

void RetryExecutionPlanRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string RetryExecutionPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RetryExecutionPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

