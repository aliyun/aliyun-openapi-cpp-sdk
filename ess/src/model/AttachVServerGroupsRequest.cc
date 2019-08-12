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

#include <alibabacloud/ess/model/AttachVServerGroupsRequest.h>

using AlibabaCloud::Ess::Model::AttachVServerGroupsRequest;

AttachVServerGroupsRequest::AttachVServerGroupsRequest() :
	RpcServiceRequest("ess", "2014-08-28", "AttachVServerGroups")
{}

AttachVServerGroupsRequest::~AttachVServerGroupsRequest()
{}

std::string AttachVServerGroupsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachVServerGroupsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AttachVServerGroupsRequest::getRegionId()const
{
	return regionId_;
}

void AttachVServerGroupsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AttachVServerGroupsRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void AttachVServerGroupsRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", std::to_string(scalingGroupId));
}

bool AttachVServerGroupsRequest::getForceAttach()const
{
	return forceAttach_;
}

void AttachVServerGroupsRequest::setForceAttach(bool forceAttach)
{
	forceAttach_ = forceAttach;
	setCoreParameter("ForceAttach", forceAttach ? "true" : "false");
}

long AttachVServerGroupsRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachVServerGroupsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::vector<AttachVServerGroupsRequest::VServerGroup> AttachVServerGroupsRequest::getVServerGroup()const
{
	return vServerGroup_;
}

void AttachVServerGroupsRequest::setVServerGroup(const std::vector<VServerGroup>& vServerGroup)
{
	vServerGroup_ = vServerGroup;
	int i = 0;
	for(int i = 0; i!= vServerGroup.size(); i++)	{
		auto obj = vServerGroup.at(i);
		std::string str ="VServerGroup."+ std::to_string(i);
		setCoreParameter(str + ".LoadBalancerId", std::to_string(obj.loadBalancerId));
		setCoreParameter(str + ".VServerGroupAttribute", obj.vServerGroupAttribute);
	}
}

std::string AttachVServerGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AttachVServerGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

