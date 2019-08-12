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

#include <alibabacloud/rds/model/ModifyDTCSecurityIpHostsForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::ModifyDTCSecurityIpHostsForSQLServerRequest;

ModifyDTCSecurityIpHostsForSQLServerRequest::ModifyDTCSecurityIpHostsForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDTCSecurityIpHostsForSQLServer")
{}

ModifyDTCSecurityIpHostsForSQLServerRequest::~ModifyDTCSecurityIpHostsForSQLServerRequest()
{}

long ModifyDTCSecurityIpHostsForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getWhiteListGroupName()const
{
	return whiteListGroupName_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setWhiteListGroupName(const std::string& whiteListGroupName)
{
	whiteListGroupName_ = whiteListGroupName;
	setCoreParameter("WhiteListGroupName", whiteListGroupName);
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getSecurityIpHosts()const
{
	return securityIpHosts_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setSecurityIpHosts(const std::string& securityIpHosts)
{
	securityIpHosts_ = securityIpHosts;
	setCoreParameter("SecurityIpHosts", securityIpHosts);
}

long ModifyDTCSecurityIpHostsForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDTCSecurityIpHostsForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDTCSecurityIpHostsForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

