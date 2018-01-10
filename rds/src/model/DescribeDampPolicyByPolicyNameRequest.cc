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

#include <alibabacloud/rds/model/DescribeDampPolicyByPolicyNameRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDampPolicyByPolicyNameRequest::DescribeDampPolicyByPolicyNameRequest() :
	RdsRequest("DescribeDampPolicyByPolicyName")
{}

DescribeDampPolicyByPolicyNameRequest::~DescribeDampPolicyByPolicyNameRequest()
{}

long DescribeDampPolicyByPolicyNameRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDampPolicyByPolicyNameRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDampPolicyByPolicyNameRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDampPolicyByPolicyNameRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDampPolicyByPolicyNameRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDampPolicyByPolicyNameRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDampPolicyByPolicyNameRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDampPolicyByPolicyNameRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDampPolicyByPolicyNameRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDampPolicyByPolicyNameRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDampPolicyByPolicyNameRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDampPolicyByPolicyNameRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDampPolicyByPolicyNameRequest::getPolicyName()const
{
	return policyName_;
}

void DescribeDampPolicyByPolicyNameRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

long DescribeDampPolicyByPolicyNameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDampPolicyByPolicyNameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDampPolicyByPolicyNameRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDampPolicyByPolicyNameRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

