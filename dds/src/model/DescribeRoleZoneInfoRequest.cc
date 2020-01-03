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

#include <alibabacloud/dds/model/DescribeRoleZoneInfoRequest.h>

using AlibabaCloud::Dds::Model::DescribeRoleZoneInfoRequest;

DescribeRoleZoneInfoRequest::DescribeRoleZoneInfoRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeRoleZoneInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRoleZoneInfoRequest::~DescribeRoleZoneInfoRequest()
{}

long DescribeRoleZoneInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRoleZoneInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRoleZoneInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRoleZoneInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRoleZoneInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRoleZoneInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRoleZoneInfoRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeRoleZoneInfoRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeRoleZoneInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRoleZoneInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRoleZoneInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRoleZoneInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeRoleZoneInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRoleZoneInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

