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

#include <alibabacloud/dds/model/DescribeAuditLogFilterRequest.h>

using AlibabaCloud::Dds::Model::DescribeAuditLogFilterRequest;

DescribeAuditLogFilterRequest::DescribeAuditLogFilterRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeAuditLogFilter")
{}

DescribeAuditLogFilterRequest::~DescribeAuditLogFilterRequest()
{}

long DescribeAuditLogFilterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAuditLogFilterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAuditLogFilterRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAuditLogFilterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAuditLogFilterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAuditLogFilterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAuditLogFilterRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAuditLogFilterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAuditLogFilterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAuditLogFilterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAuditLogFilterRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAuditLogFilterRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeAuditLogFilterRequest::getRoleType()const
{
	return roleType_;
}

void DescribeAuditLogFilterRequest::setRoleType(const std::string& roleType)
{
	roleType_ = roleType;
	setCoreParameter("RoleType", roleType);
}

long DescribeAuditLogFilterRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAuditLogFilterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAuditLogFilterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAuditLogFilterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

