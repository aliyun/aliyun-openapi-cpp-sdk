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

#include <alibabacloud/dds/model/ModifyAuditPolicyRequest.h>

using AlibabaCloud::Dds::Model::ModifyAuditPolicyRequest;

ModifyAuditPolicyRequest::ModifyAuditPolicyRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyAuditPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyAuditPolicyRequest::~ModifyAuditPolicyRequest()
{}

long ModifyAuditPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAuditPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyAuditPolicyRequest::getStoragePeriod()const
{
	return storagePeriod_;
}

void ModifyAuditPolicyRequest::setStoragePeriod(int storagePeriod)
{
	storagePeriod_ = storagePeriod;
	setParameter("StoragePeriod", std::to_string(storagePeriod));
}

std::string ModifyAuditPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAuditPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAuditPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyAuditPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyAuditPolicyRequest::getAuditLogSwitchSource()const
{
	return auditLogSwitchSource_;
}

void ModifyAuditPolicyRequest::setAuditLogSwitchSource(const std::string& auditLogSwitchSource)
{
	auditLogSwitchSource_ = auditLogSwitchSource;
	setParameter("AuditLogSwitchSource", auditLogSwitchSource);
}

std::string ModifyAuditPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyAuditPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyAuditPolicyRequest::getAuditStatus()const
{
	return auditStatus_;
}

void ModifyAuditPolicyRequest::setAuditStatus(const std::string& auditStatus)
{
	auditStatus_ = auditStatus;
	setParameter("AuditStatus", auditStatus);
}

std::string ModifyAuditPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAuditPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAuditPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAuditPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyAuditPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAuditPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAuditPolicyRequest::getServiceType()const
{
	return serviceType_;
}

void ModifyAuditPolicyRequest::setServiceType(const std::string& serviceType)
{
	serviceType_ = serviceType;
	setParameter("ServiceType", serviceType);
}

