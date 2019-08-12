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

#include <alibabacloud/ecs/model/JoinSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::JoinSecurityGroupRequest;

JoinSecurityGroupRequest::JoinSecurityGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "JoinSecurityGroup")
{}

JoinSecurityGroupRequest::~JoinSecurityGroupRequest()
{}

std::string JoinSecurityGroupRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void JoinSecurityGroupRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool JoinSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void JoinSecurityGroupRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string JoinSecurityGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void JoinSecurityGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string JoinSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void JoinSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string JoinSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void JoinSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string JoinSecurityGroupRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void JoinSecurityGroupRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool JoinSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void JoinSecurityGroupRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

