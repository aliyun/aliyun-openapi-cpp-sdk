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

#include <alibabacloud/dds/model/DescribeAuditPolicyRequest.h>

using AlibabaCloud::Dds::Model::DescribeAuditPolicyRequest;

DescribeAuditPolicyRequest::DescribeAuditPolicyRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeAuditPolicy")
{}

DescribeAuditPolicyRequest::~DescribeAuditPolicyRequest()
{}

long DescribeAuditPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAuditPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAuditPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAuditPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAuditPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAuditPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAuditPolicyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAuditPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeAuditPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAuditPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAuditPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAuditPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeAuditPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAuditPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAuditPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAuditPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

