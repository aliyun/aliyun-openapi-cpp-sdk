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

#include <alibabacloud/r-kvstore/model/ModifyInstanceVpcAuthModeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceVpcAuthModeRequest;

ModifyInstanceVpcAuthModeRequest::ModifyInstanceVpcAuthModeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceVpcAuthMode")
{}

ModifyInstanceVpcAuthModeRequest::~ModifyInstanceVpcAuthModeRequest()
{}

long ModifyInstanceVpcAuthModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceVpcAuthModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceVpcAuthModeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceVpcAuthModeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceVpcAuthModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceVpcAuthModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceVpcAuthModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceVpcAuthModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceVpcAuthModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceVpcAuthModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceVpcAuthModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceVpcAuthModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyInstanceVpcAuthModeRequest::getVpcAuthMode()const
{
	return vpcAuthMode_;
}

void ModifyInstanceVpcAuthModeRequest::setVpcAuthMode(const std::string& vpcAuthMode)
{
	vpcAuthMode_ = vpcAuthMode;
	setCoreParameter("VpcAuthMode", vpcAuthMode);
}

long ModifyInstanceVpcAuthModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceVpcAuthModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceVpcAuthModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceVpcAuthModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

