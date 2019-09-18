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

#include <alibabacloud/ess/model/DetachVServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::DetachVServerGroupsRequest;

DetachVServerGroupsRequest::DetachVServerGroupsRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DetachVServerGroups")
{}

DetachVServerGroupsRequest::~DetachVServerGroupsRequest()
{}

std::string DetachVServerGroupsRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DetachVServerGroupsRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string DetachVServerGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachVServerGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DetachVServerGroupsRequest::getRegionId()const
{
	return regionId_;
}

void DetachVServerGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DetachVServerGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachVServerGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DetachVServerGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachVServerGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DetachVServerGroupsRequest::getForceDetach()const
{
	return forceDetach_;
}

void DetachVServerGroupsRequest::setForceDetach(bool forceDetach)
{
	forceDetach_ = forceDetach;
	setCoreParameter("ForceDetach", forceDetach ? "true" : "false");
}

std::vector<DetachVServerGroupsRequest::VServerGroup> DetachVServerGroupsRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void DetachVServerGroupsRequest::setVServerGroup(const std::vector<VServerGroup>& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	int i = 0;
	for(int i = 0; i!= vServerGroup.size(); i++)	{
		auto obj = vServerGroup.at(i);
		std::string str ="VServerGroup."+ std::to_string(i);
		setCoreParameter(str + ".LoadBalancerId", obj.loadBalancerId);
		setCoreParameter(str + ".VServerGroupAttribute", std::to_string(obj.vServerGroupAttribute));
	}
}

