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

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateSecurityGroupRequest::CreateSecurityGroupRequest() :
	EcsRequest("CreateSecurityGroup")
{}

CreateSecurityGroupRequest::~CreateSecurityGroupRequest()
{}

std::string CreateSecurityGroupRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateSecurityGroupRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSecurityGroupRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateSecurityGroupRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateSecurityGroupRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateSecurityGroupRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CreateSecurityGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSecurityGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSecurityGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSecurityGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSecurityGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSecurityGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateSecurityGroupRequest::getDescription()const
{
	return description_;
}

void CreateSecurityGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateSecurityGroupRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateSecurityGroupRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

long CreateSecurityGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSecurityGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSecurityGroupRequest::getSecurityGroupName()const
{
	return securityGroupName_;
}

void CreateSecurityGroupRequest::setSecurityGroupName(const std::string& securityGroupName)
{
	securityGroupName_ = securityGroupName;
	setParameter("SecurityGroupName", securityGroupName);
}

std::string CreateSecurityGroupRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateSecurityGroupRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateSecurityGroupRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateSecurityGroupRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CreateSecurityGroupRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateSecurityGroupRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateSecurityGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateSecurityGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void CreateSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateSecurityGroupRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateSecurityGroupRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateSecurityGroupRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateSecurityGroupRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string CreateSecurityGroupRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateSecurityGroupRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

