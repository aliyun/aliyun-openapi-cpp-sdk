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

#include <alibabacloud/rds/model/CreateDampPolicyRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateDampPolicyRequest::CreateDampPolicyRequest() :
	RdsRequest("CreateDampPolicy")
{}

CreateDampPolicyRequest::~CreateDampPolicyRequest()
{}

long CreateDampPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDampPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDampPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDampPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDampPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDampPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateDampPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDampPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateDampPolicyRequest::getPriority()const
{
	return priority_;
}

void CreateDampPolicyRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string CreateDampPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDampPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDampPolicyRequest::getTimeRules()const
{
	return timeRules_;
}

void CreateDampPolicyRequest::setTimeRules(const std::string& timeRules)
{
	timeRules_ = timeRules;
	setParameter("TimeRules", timeRules);
}

std::string CreateDampPolicyRequest::getActionRules()const
{
	return actionRules_;
}

void CreateDampPolicyRequest::setActionRules(const std::string& actionRules)
{
	actionRules_ = actionRules;
	setParameter("ActionRules", actionRules);
}

std::string CreateDampPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateDampPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateDampPolicyRequest::getRegionId()const
{
	return regionId_;
}

void CreateDampPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateDampPolicyRequest::getHandlers()const
{
	return handlers_;
}

void CreateDampPolicyRequest::setHandlers(const std::string& handlers)
{
	handlers_ = handlers;
	setParameter("Handlers", handlers);
}

std::string CreateDampPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateDampPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateDampPolicyRequest::getPolicyName()const
{
	return policyName_;
}

void CreateDampPolicyRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

std::string CreateDampPolicyRequest::getSourceRules()const
{
	return sourceRules_;
}

void CreateDampPolicyRequest::setSourceRules(const std::string& sourceRules)
{
	sourceRules_ = sourceRules;
	setParameter("SourceRules", sourceRules);
}

