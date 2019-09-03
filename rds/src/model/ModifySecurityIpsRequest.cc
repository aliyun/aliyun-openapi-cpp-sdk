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

#include <alibabacloud/rds/model/ModifySecurityIpsRequest.h>

using AlibabaCloud::Rds::Model::ModifySecurityIpsRequest;

ModifySecurityIpsRequest::ModifySecurityIpsRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifySecurityIps")
{}

ModifySecurityIpsRequest::~ModifySecurityIpsRequest()
{}

std::string ModifySecurityIpsRequest::getDBInstanceIPArrayName()const
{
	return dBInstanceIPArrayName_;
}

void ModifySecurityIpsRequest::setDBInstanceIPArrayName(const std::string& dBInstanceIPArrayName)
{
	dBInstanceIPArrayName_ = dBInstanceIPArrayName;
	setCoreParameter("DBInstanceIPArrayName", dBInstanceIPArrayName);
}

long ModifySecurityIpsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySecurityIpsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySecurityIpsRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySecurityIpsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifySecurityIpsRequest::getSecurityIps()const
{
	return securityIps_;
}

void ModifySecurityIpsRequest::setSecurityIps(const std::string& securityIps)
{
	securityIps_ = securityIps;
	setCoreParameter("SecurityIps", securityIps);
}

std::string ModifySecurityIpsRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifySecurityIpsRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", securityGroupId);
}

std::string ModifySecurityIpsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySecurityIpsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifySecurityIpsRequest::getWhitelistNetworkType()const
{
	return whitelistNetworkType_;
}

void ModifySecurityIpsRequest::setWhitelistNetworkType(const std::string& whitelistNetworkType)
{
	whitelistNetworkType_ = whitelistNetworkType;
	setCoreParameter("WhitelistNetworkType", whitelistNetworkType);
}

std::string ModifySecurityIpsRequest::getSecurityIPType()const
{
	return securityIPType_;
}

void ModifySecurityIpsRequest::setSecurityIPType(const std::string& securityIPType)
{
	securityIPType_ = securityIPType;
	setCoreParameter("SecurityIPType", securityIPType);
}

std::string ModifySecurityIpsRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifySecurityIpsRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifySecurityIpsRequest::getModifyMode()const
{
	return modifyMode_;
}

void ModifySecurityIpsRequest::setModifyMode(const std::string& modifyMode)
{
	modifyMode_ = modifyMode;
	setCoreParameter("ModifyMode", modifyMode);
}

std::string ModifySecurityIpsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySecurityIpsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySecurityIpsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySecurityIpsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifySecurityIpsRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySecurityIpsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySecurityIpsRequest::getDBInstanceIPArrayAttribute()const
{
	return dBInstanceIPArrayAttribute_;
}

void ModifySecurityIpsRequest::setDBInstanceIPArrayAttribute(const std::string& dBInstanceIPArrayAttribute)
{
	dBInstanceIPArrayAttribute_ = dBInstanceIPArrayAttribute;
	setCoreParameter("DBInstanceIPArrayAttribute", dBInstanceIPArrayAttribute);
}

