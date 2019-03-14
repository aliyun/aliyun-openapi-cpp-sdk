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

#include <alibabacloud/emr/model/DeleteScalingTaskGroupRequest.h>

using AlibabaCloud::Emr::Model::DeleteScalingTaskGroupRequest;

DeleteScalingTaskGroupRequest::DeleteScalingTaskGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteScalingTaskGroup")
{}

DeleteScalingTaskGroupRequest::~DeleteScalingTaskGroupRequest()
{}

long DeleteScalingTaskGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteScalingTaskGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteScalingTaskGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteScalingTaskGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteScalingTaskGroupRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void DeleteScalingTaskGroupRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::string DeleteScalingTaskGroupRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteScalingTaskGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteScalingTaskGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteScalingTaskGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

