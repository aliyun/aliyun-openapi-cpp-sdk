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

#include <alibabacloud/emr/model/ReleaseETLJobRequest.h>

using AlibabaCloud::Emr::Model::ReleaseETLJobRequest;

ReleaseETLJobRequest::ReleaseETLJobRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ReleaseETLJob")
{}

ReleaseETLJobRequest::~ReleaseETLJobRequest()
{}

long ReleaseETLJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseETLJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReleaseETLJobRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseETLJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ReleaseETLJobRequest::getReleaseId()const
{
	return releaseId_;
}

void ReleaseETLJobRequest::setReleaseId(const std::string& releaseId)
{
	releaseId_ = releaseId;
	setCoreParameter("ReleaseId", std::to_string(releaseId));
}

std::string ReleaseETLJobRequest::getId()const
{
	return id_;
}

void ReleaseETLJobRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ReleaseETLJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseETLJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

