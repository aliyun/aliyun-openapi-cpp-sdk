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

#include <alibabacloud/dds/model/ModifyAuditLogFilterRequest.h>

using AlibabaCloud::Dds::Model::ModifyAuditLogFilterRequest;

ModifyAuditLogFilterRequest::ModifyAuditLogFilterRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyAuditLogFilter")
{}

ModifyAuditLogFilterRequest::~ModifyAuditLogFilterRequest()
{}

std::string ModifyAuditLogFilterRequest::getFilter()const
{
	return filter_;
}

void ModifyAuditLogFilterRequest::setFilter(const std::string& filter)
{
	filter_ = filter;
	setCoreParameter("Filter", filter);
}

long ModifyAuditLogFilterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAuditLogFilterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyAuditLogFilterRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyAuditLogFilterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyAuditLogFilterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAuditLogFilterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAuditLogFilterRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAuditLogFilterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyAuditLogFilterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAuditLogFilterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyAuditLogFilterRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyAuditLogFilterRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyAuditLogFilterRequest::getRoleType()const
{
	return roleType_;
}

void ModifyAuditLogFilterRequest::setRoleType(const std::string& roleType)
{
	roleType_ = roleType;
	setCoreParameter("RoleType", roleType);
}

long ModifyAuditLogFilterRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAuditLogFilterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyAuditLogFilterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAuditLogFilterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

