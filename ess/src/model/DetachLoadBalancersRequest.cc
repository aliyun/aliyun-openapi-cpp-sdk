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

#include <alibabacloud/ess/model/DetachLoadBalancersRequest.h>

using AlibabaCloud::Ess::Model::DetachLoadBalancersRequest;

DetachLoadBalancersRequest::DetachLoadBalancersRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DetachLoadBalancers")
{}

DetachLoadBalancersRequest::~DetachLoadBalancersRequest()
{}

std::vector<std::string> DetachLoadBalancersRequest::getLoadBalancer()const
{
	return loadBalancer_;
}

void DetachLoadBalancersRequest::setLoadBalancer(const std::vector<std::string>& loadBalancer)
{
	loadBalancer_ = loadBalancer;
	for(int i = 0; i!= loadBalancer.size(); i++)
		setCoreParameter("LoadBalancer."+ std::to_string(i), loadBalancer.at(i));
}

std::string DetachLoadBalancersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachLoadBalancersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachLoadBalancersRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DetachLoadBalancersRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

bool DetachLoadBalancersRequest::getForceDetach()const
{
	return forceDetach_;
}

void DetachLoadBalancersRequest::setForceDetach(bool forceDetach)
{
	forceDetach_ = forceDetach;
	setCoreParameter("ForceDetach", forceDetach ? "true" : "false");
}

long DetachLoadBalancersRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachLoadBalancersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DetachLoadBalancersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachLoadBalancersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

