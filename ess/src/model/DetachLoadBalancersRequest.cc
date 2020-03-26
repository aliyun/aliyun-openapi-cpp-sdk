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
{
	setMethod(HttpRequest::Method::Post);
}

DetachLoadBalancersRequest::~DetachLoadBalancersRequest()
{}

std::string DetachLoadBalancersRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DetachLoadBalancersRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DetachLoadBalancersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachLoadBalancersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<std::string> DetachLoadBalancersRequest::getLoadBalancer()const
{
	return loadBalancer_;
}

void DetachLoadBalancersRequest::setLoadBalancer(const std::vector<std::string>& loadBalancer)
{
	loadBalancer_ = loadBalancer;
	for(int dep1 = 0; dep1!= loadBalancer.size(); dep1++) {
		setParameter("LoadBalancer."+ std::to_string(dep1), loadBalancer.at(dep1));
	}
}

std::string DetachLoadBalancersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachLoadBalancersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DetachLoadBalancersRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachLoadBalancersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DetachLoadBalancersRequest::getForceDetach()const
{
	return forceDetach_;
}

void DetachLoadBalancersRequest::setForceDetach(bool forceDetach)
{
	forceDetach_ = forceDetach;
	setParameter("ForceDetach", forceDetach ? "true" : "false");
}

