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

#include <alibabacloud/dds/model/DescribeRdsVpcsRequest.h>

using AlibabaCloud::Dds::Model::DescribeRdsVpcsRequest;

DescribeRdsVpcsRequest::DescribeRdsVpcsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeRdsVpcs")
{}

DescribeRdsVpcsRequest::~DescribeRdsVpcsRequest()
{}

long DescribeRdsVpcsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRdsVpcsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRdsVpcsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRdsVpcsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRdsVpcsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRdsVpcsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeRdsVpcsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRdsVpcsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeRdsVpcsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRdsVpcsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeRdsVpcsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeRdsVpcsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

long DescribeRdsVpcsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRdsVpcsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRdsVpcsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsVpcsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

