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

#include <alibabacloud/emr/model/ReleaseClusterRequest.h>

using AlibabaCloud::Emr::Model::ReleaseClusterRequest;

ReleaseClusterRequest::ReleaseClusterRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ReleaseCluster")
{}

ReleaseClusterRequest::~ReleaseClusterRequest()
{}

long ReleaseClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReleaseClusterRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool ReleaseClusterRequest::getForceRelease()const
{
	return forceRelease_;
}

void ReleaseClusterRequest::setForceRelease(bool forceRelease)
{
	forceRelease_ = forceRelease;
	setCoreParameter("ForceRelease", forceRelease ? "true" : "false");
}

std::string ReleaseClusterRequest::getId()const
{
	return id_;
}

void ReleaseClusterRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string ReleaseClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

