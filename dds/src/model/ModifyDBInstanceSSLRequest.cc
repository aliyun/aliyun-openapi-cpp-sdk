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

#include <alibabacloud/dds/model/ModifyDBInstanceSSLRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceSSLRequest;

ModifyDBInstanceSSLRequest::ModifyDBInstanceSSLRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceSSL")
{}

ModifyDBInstanceSSLRequest::~ModifyDBInstanceSSLRequest()
{}

long ModifyDBInstanceSSLRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceSSLRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceSSLRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDBInstanceSSLRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceSSLRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceSSLRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBInstanceSSLRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDBInstanceSSLRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceSSLRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceSSLRequest::getSSLAction()const
{
	return sSLAction_;
}

void ModifyDBInstanceSSLRequest::setSSLAction(const std::string& sSLAction)
{
	sSLAction_ = sSLAction;
	setCoreParameter("SSLAction", sSLAction);
}

std::string ModifyDBInstanceSSLRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceSSLRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long ModifyDBInstanceSSLRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceSSLRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceSSLRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceSSLRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

