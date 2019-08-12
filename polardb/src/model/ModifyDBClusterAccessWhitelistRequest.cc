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

#include <alibabacloud/polardb/model/ModifyDBClusterAccessWhitelistRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterAccessWhitelistRequest;

ModifyDBClusterAccessWhitelistRequest::ModifyDBClusterAccessWhitelistRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterAccessWhitelist")
{}

ModifyDBClusterAccessWhitelistRequest::~ModifyDBClusterAccessWhitelistRequest()
{}

long ModifyDBClusterAccessWhitelistRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterAccessWhitelistRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyDBClusterAccessWhitelistRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterAccessWhitelistRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyDBClusterAccessWhitelistRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterAccessWhitelistRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", std::to_string(dBClusterId));
}

std::string ModifyDBClusterAccessWhitelistRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterAccessWhitelistRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyDBClusterAccessWhitelistRequest::getSecurityIps()const
{
	return securityIps_;
}

void ModifyDBClusterAccessWhitelistRequest::setSecurityIps(const std::string& securityIps)
{
	securityIps_ = securityIps;
	setCoreParameter("SecurityIps", std::to_string(securityIps));
}

std::string ModifyDBClusterAccessWhitelistRequest::getDBClusterIPArrayName()const
{
	return dBClusterIPArrayName_;
}

void ModifyDBClusterAccessWhitelistRequest::setDBClusterIPArrayName(const std::string& dBClusterIPArrayName)
{
	dBClusterIPArrayName_ = dBClusterIPArrayName;
	setCoreParameter("DBClusterIPArrayName", std::to_string(dBClusterIPArrayName));
}

long ModifyDBClusterAccessWhitelistRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterAccessWhitelistRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyDBClusterAccessWhitelistRequest::getDBClusterIPArrayAttribute()const
{
	return dBClusterIPArrayAttribute_;
}

void ModifyDBClusterAccessWhitelistRequest::setDBClusterIPArrayAttribute(const std::string& dBClusterIPArrayAttribute)
{
	dBClusterIPArrayAttribute_ = dBClusterIPArrayAttribute;
	setCoreParameter("DBClusterIPArrayAttribute", std::to_string(dBClusterIPArrayAttribute));
}

std::string ModifyDBClusterAccessWhitelistRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterAccessWhitelistRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

