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

#include <alibabacloud/ecs/model/CreateSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateSecurityGroupRequest;

CreateSecurityGroupRequest::CreateSecurityGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateSecurityGroup")
{}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest()
{}

long CreateSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSecurityGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSecurityGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateSecurityGroupRequest::getDescription()const
{
	return description_;
}

void CreateSecurityGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateSecurityGroupRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateSecurityGroupRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setCoreParameter("SecurityGroupName", securityGroupName);
}

std::string CreateSecurityGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateSecurityGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<CreateSecurityGroupRequest::Tag> CreateSecurityGroupRequest::getTag()const
{
	return tag_;
}

void CreateSecurityGroupRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string CreateSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSecurityGroupRequest::getSecurityGroupType()const
{
	return securityGroupType_;
}

void CreateSecurityGroupRequest::setSecurityGroupType(const std::string& securityGroupType)
{
	securityGroupType_ = securityGroupType;
	setCoreParameter("SecurityGroupType", securityGroupType);
}

std::string CreateSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void CreateSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

