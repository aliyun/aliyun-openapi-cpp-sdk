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

#include <alibabacloud/ecs/model/ModifyInstanceVpcAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceVpcAttributeRequest;

ModifyInstanceVpcAttributeRequest::ModifyInstanceVpcAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceVpcAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceVpcAttributeRequest::~ModifyInstanceVpcAttributeRequest()
{}

long ModifyInstanceVpcAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceVpcAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceVpcAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceVpcAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceVpcAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceVpcAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceVpcAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceVpcAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceVpcAttributeRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyInstanceVpcAttributeRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string ModifyInstanceVpcAttributeRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void ModifyInstanceVpcAttributeRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

std::string ModifyInstanceVpcAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceVpcAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

