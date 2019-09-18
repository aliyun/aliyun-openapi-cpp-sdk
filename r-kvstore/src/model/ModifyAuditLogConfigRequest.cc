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

#include <alibabacloud/r-kvstore/model/ModifyAuditLogConfigRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyAuditLogConfigRequest;

ModifyAuditLogConfigRequest::ModifyAuditLogConfigRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyAuditLogConfig")
{}

ModifyAuditLogConfigRequest::~ModifyAuditLogConfigRequest()
{}

long ModifyAuditLogConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAuditLogConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAuditLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAuditLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAuditLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyAuditLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyAuditLogConfigRequest::getAuditCommand()const
{
	return auditCommand_;
}

void ModifyAuditLogConfigRequest::setAuditCommand(const std::string& auditCommand)
{
	auditCommand_ = auditCommand;
	setCoreParameter("AuditCommand", auditCommand);
}

std::string ModifyAuditLogConfigRequest::getRetention()const
{
	return retention_;
}

void ModifyAuditLogConfigRequest::setRetention(const std::string& retention)
{
	retention_ = retention;
	setCoreParameter("Retention", retention);
}

std::string ModifyAuditLogConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAuditLogConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAuditLogConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAuditLogConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyAuditLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAuditLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAuditLogConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyAuditLogConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

