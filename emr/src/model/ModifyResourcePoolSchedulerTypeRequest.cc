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

#include <alibabacloud/emr/model/ModifyResourcePoolSchedulerTypeRequest.h>

using AlibabaCloud::Emr::Model::ModifyResourcePoolSchedulerTypeRequest;

ModifyResourcePoolSchedulerTypeRequest::ModifyResourcePoolSchedulerTypeRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyResourcePoolSchedulerType")
{}

ModifyResourcePoolSchedulerTypeRequest::~ModifyResourcePoolSchedulerTypeRequest()
{}

long ModifyResourcePoolSchedulerTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyResourcePoolSchedulerTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyResourcePoolSchedulerTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyResourcePoolSchedulerTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyResourcePoolSchedulerTypeRequest::getSchedulerType()const
{
	return schedulerType_;
}

void ModifyResourcePoolSchedulerTypeRequest::setSchedulerType(const std::string& schedulerType)
{
	schedulerType_ = schedulerType;
	setCoreParameter("SchedulerType", schedulerType);
}

std::string ModifyResourcePoolSchedulerTypeRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyResourcePoolSchedulerTypeRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ModifyResourcePoolSchedulerTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyResourcePoolSchedulerTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

