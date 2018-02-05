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

#include <alibabacloud/rds/model/DescribeDampPolicyByCommentRequest.h>

using AlibabaCloud::Rds::Model::DescribeDampPolicyByCommentRequest;

DescribeDampPolicyByCommentRequest::DescribeDampPolicyByCommentRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDampPolicyByComment")
{}

DescribeDampPolicyByCommentRequest::~DescribeDampPolicyByCommentRequest()
{}

long DescribeDampPolicyByCommentRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDampPolicyByCommentRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDampPolicyByCommentRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDampPolicyByCommentRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDampPolicyByCommentRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDampPolicyByCommentRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDampPolicyByCommentRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDampPolicyByCommentRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeDampPolicyByCommentRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDampPolicyByCommentRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDampPolicyByCommentRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDampPolicyByCommentRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDampPolicyByCommentRequest::getPolicyName()const
{
	return policyName_;
}

void DescribeDampPolicyByCommentRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

long DescribeDampPolicyByCommentRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDampPolicyByCommentRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDampPolicyByCommentRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDampPolicyByCommentRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

