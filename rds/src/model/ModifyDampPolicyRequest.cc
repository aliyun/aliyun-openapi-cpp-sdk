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

#include <alibabacloud/rds/model/ModifyDampPolicyRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyDampPolicyRequest::ModifyDampPolicyRequest() :
	RdsRequest("ModifyDampPolicy")
{}

ModifyDampPolicyRequest::~ModifyDampPolicyRequest()
{}

long ModifyDampPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDampPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDampPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDampPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDampPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDampPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDampPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDampPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDampPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDampPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDampPolicyRequest::getTimeRules()const
{
	return timeRules_;
}

void ModifyDampPolicyRequest::setTimeRules(const std::string& timeRules)
{
	timeRules_ = timeRules;
	setParameter("TimeRules", timeRules);
}

std::string ModifyDampPolicyRequest::getActionRules()const
{
	return actionRules_;
}

void ModifyDampPolicyRequest::setActionRules(const std::string& actionRules)
{
	actionRules_ = actionRules;
	setParameter("ActionRules", actionRules);
}

std::string ModifyDampPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDampPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyDampPolicyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDampPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDampPolicyRequest::getHandlers()const
{
	return handlers_;
}

void ModifyDampPolicyRequest::setHandlers(const std::string& handlers)
{
	handlers_ = handlers;
	setParameter("Handlers", handlers);
}

std::string ModifyDampPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDampPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDampPolicyRequest::getPolicyName()const
{
	return policyName_;
}

void ModifyDampPolicyRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

std::string ModifyDampPolicyRequest::getSourceRules()const
{
	return sourceRules_;
}

void ModifyDampPolicyRequest::setSourceRules(const std::string& sourceRules)
{
	sourceRules_ = sourceRules;
	setParameter("SourceRules", sourceRules);
}

