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

#include <alibabacloud/ess/model/ExitStandbyRequest.h>

using AlibabaCloud::Ess::Model::ExitStandbyRequest;

ExitStandbyRequest::ExitStandbyRequest() :
	RpcServiceRequest("ess", "2014-08-28", "ExitStandby")
{
	setMethod(HttpRequest::Method::Post);
}

ExitStandbyRequest::~ExitStandbyRequest()
{}

std::string ExitStandbyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExitStandbyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ExitStandbyRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ExitStandbyRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

long ExitStandbyRequest::getOwnerId()const
{
	return ownerId_;
}

void ExitStandbyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExitStandbyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExitStandbyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<std::string> ExitStandbyRequest::getInstanceId()const
{
	return instanceId_;
}

void ExitStandbyRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

