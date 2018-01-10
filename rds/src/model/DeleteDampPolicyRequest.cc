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

#include <alibabacloud/rds/model/DeleteDampPolicyRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DeleteDampPolicyRequest::DeleteDampPolicyRequest() :
	RdsRequest("DeleteDampPolicy")
{}

DeleteDampPolicyRequest::~DeleteDampPolicyRequest()
{}

long DeleteDampPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDampPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDampPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteDampPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteDampPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDampPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDampPolicyRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDampPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDampPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDampPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteDampPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DeleteDampPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DeleteDampPolicyRequest::getPolicyName()const
{
	return policyName_;
}

void DeleteDampPolicyRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

long DeleteDampPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDampPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDampPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDampPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

