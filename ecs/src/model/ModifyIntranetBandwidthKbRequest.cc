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

#include <alibabacloud/ecs/model/ModifyIntranetBandwidthKbRequest.h>

using AlibabaCloud::Ecs::Model::ModifyIntranetBandwidthKbRequest;

ModifyIntranetBandwidthKbRequest::ModifyIntranetBandwidthKbRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyIntranetBandwidthKb")
{}

ModifyIntranetBandwidthKbRequest::~ModifyIntranetBandwidthKbRequest()
{}

long ModifyIntranetBandwidthKbRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIntranetBandwidthKbRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyIntranetBandwidthKbRequest::getIntranetMaxBandwidthOut()const
{
	return intranetMaxBandwidthOut_;
}

void ModifyIntranetBandwidthKbRequest::setIntranetMaxBandwidthOut(int intranetMaxBandwidthOut)
{
	intranetMaxBandwidthOut_ = intranetMaxBandwidthOut;
	setParameter("IntranetMaxBandwidthOut", std::to_string(intranetMaxBandwidthOut));
}

std::string ModifyIntranetBandwidthKbRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyIntranetBandwidthKbRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

int ModifyIntranetBandwidthKbRequest::getIntranetMaxBandwidthIn()const
{
	return intranetMaxBandwidthIn_;
}

void ModifyIntranetBandwidthKbRequest::setIntranetMaxBandwidthIn(int intranetMaxBandwidthIn)
{
	intranetMaxBandwidthIn_ = intranetMaxBandwidthIn;
	setParameter("IntranetMaxBandwidthIn", std::to_string(intranetMaxBandwidthIn));
}

std::string ModifyIntranetBandwidthKbRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIntranetBandwidthKbRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIntranetBandwidthKbRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIntranetBandwidthKbRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyIntranetBandwidthKbRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIntranetBandwidthKbRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

