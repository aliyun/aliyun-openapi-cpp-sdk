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

#include <alibabacloud/dds/model/DescribeRdsVSwitchsRequest.h>

using AlibabaCloud::Dds::Model::DescribeRdsVSwitchsRequest;

DescribeRdsVSwitchsRequest::DescribeRdsVSwitchsRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeRdsVSwitchs")
{}

DescribeRdsVSwitchsRequest::~DescribeRdsVSwitchsRequest()
{}

long DescribeRdsVSwitchsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRdsVSwitchsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRdsVSwitchsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRdsVSwitchsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRdsVSwitchsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRdsVSwitchsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeRdsVSwitchsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRdsVSwitchsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeRdsVSwitchsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRdsVSwitchsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeRdsVSwitchsRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeRdsVSwitchsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string DescribeRdsVSwitchsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeRdsVSwitchsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

long DescribeRdsVSwitchsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRdsVSwitchsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRdsVSwitchsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsVSwitchsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

