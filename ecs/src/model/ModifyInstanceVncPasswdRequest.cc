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

#include <alibabacloud/ecs/model/ModifyInstanceVncPasswdRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceVncPasswdRequest;

ModifyInstanceVncPasswdRequest::ModifyInstanceVncPasswdRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceVncPasswd")
{}

ModifyInstanceVncPasswdRequest::~ModifyInstanceVncPasswdRequest()
{}

std::string ModifyInstanceVncPasswdRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceVncPasswdRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long ModifyInstanceVncPasswdRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceVncPasswdRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceVncPasswdRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceVncPasswdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceVncPasswdRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceVncPasswdRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceVncPasswdRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceVncPasswdRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceVncPasswdRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceVncPasswdRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceVncPasswdRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceVncPasswdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceVncPasswdRequest::getVncPassword()const
{
	return vncPassword_;
}

void ModifyInstanceVncPasswdRequest::setVncPassword(const std::string& vncPassword)
{
	vncPassword_ = vncPassword;
	setCoreParameter("VncPassword", vncPassword);
}

