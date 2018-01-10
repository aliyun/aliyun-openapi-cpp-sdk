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

#include <alibabacloud/rds/model/CreatePolicyWithSpecifiedPolicyRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreatePolicyWithSpecifiedPolicyRequest::CreatePolicyWithSpecifiedPolicyRequest() :
	RdsRequest("CreatePolicyWithSpecifiedPolicy")
{}

CreatePolicyWithSpecifiedPolicyRequest::~CreatePolicyWithSpecifiedPolicyRequest()
{}

long CreatePolicyWithSpecifiedPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getPolicyId()const
{
	return policyId_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setPolicyId(const std::string& policyId)
{
	policyId_ = policyId;
	setParameter("PolicyId", policyId);
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getRegionId()const
{
	return regionId_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long CreatePolicyWithSpecifiedPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreatePolicyWithSpecifiedPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreatePolicyWithSpecifiedPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

