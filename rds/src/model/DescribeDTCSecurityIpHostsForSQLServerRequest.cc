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

#include <alibabacloud/rds/model/DescribeDTCSecurityIpHostsForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::DescribeDTCSecurityIpHostsForSQLServerRequest;

DescribeDTCSecurityIpHostsForSQLServerRequest::DescribeDTCSecurityIpHostsForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDTCSecurityIpHostsForSQLServer")
{}

DescribeDTCSecurityIpHostsForSQLServerRequest::~DescribeDTCSecurityIpHostsForSQLServerRequest()
{}

long DescribeDTCSecurityIpHostsForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDTCSecurityIpHostsForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDTCSecurityIpHostsForSQLServerRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDTCSecurityIpHostsForSQLServerRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDTCSecurityIpHostsForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDTCSecurityIpHostsForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDTCSecurityIpHostsForSQLServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDTCSecurityIpHostsForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDTCSecurityIpHostsForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

