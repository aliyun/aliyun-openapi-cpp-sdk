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

#include <alibabacloud/ecs/model/DescribeSecurityGroupAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSecurityGroupAttributeRequest;

DescribeSecurityGroupAttributeRequest::DescribeSecurityGroupAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSecurityGroupAttribute")
{}

DescribeSecurityGroupAttributeRequest::~DescribeSecurityGroupAttributeRequest()
{}

std::string DescribeSecurityGroupAttributeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeSecurityGroupAttributeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeSecurityGroupAttributeRequest::getNicType()const
{
	return nicType_;
}

void DescribeSecurityGroupAttributeRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setCoreParameter("NicType", nicType);
}

bool DescribeSecurityGroupAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSecurityGroupAttributeRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string DescribeSecurityGroupAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSecurityGroupAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSecurityGroupAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityGroupAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSecurityGroupAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSecurityGroupAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSecurityGroupAttributeRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeSecurityGroupAttributeRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

bool DescribeSecurityGroupAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSecurityGroupAttributeRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::string DescribeSecurityGroupAttributeRequest::getDirection()const
{
	return direction_;
}

void DescribeSecurityGroupAttributeRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", direction);
}

