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

#include <alibabacloud/emr/model/CloneETLJobRequest.h>

using AlibabaCloud::Emr::Model::CloneETLJobRequest;

CloneETLJobRequest::CloneETLJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CloneETLJob")
{}

CloneETLJobRequest::~CloneETLJobRequest()
{}

long CloneETLJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CloneETLJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CloneETLJobRequest::getRegionId()const
{
	return regionId_;
}

void CloneETLJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CloneETLJobRequest::getName()const
{
	return name_;
}

void CloneETLJobRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CloneETLJobRequest::getId()const
{
	return id_;
}

void CloneETLJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string CloneETLJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloneETLJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

