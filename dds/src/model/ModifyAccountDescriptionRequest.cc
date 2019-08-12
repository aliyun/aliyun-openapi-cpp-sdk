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

#include <alibabacloud/dds/model/ModifyAccountDescriptionRequest.h>

using AlibabaCloud::Dds::Model::ModifyAccountDescriptionRequest;

ModifyAccountDescriptionRequest::ModifyAccountDescriptionRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyAccountDescription")
{}

ModifyAccountDescriptionRequest::~ModifyAccountDescriptionRequest()
{}

long ModifyAccountDescriptionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAccountDescriptionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAccountDescriptionRequest::getAccountName()const
{
	return accountName_;
}

void ModifyAccountDescriptionRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string ModifyAccountDescriptionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyAccountDescriptionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyAccountDescriptionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAccountDescriptionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAccountDescriptionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAccountDescriptionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyAccountDescriptionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyAccountDescriptionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyAccountDescriptionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyAccountDescriptionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long ModifyAccountDescriptionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAccountDescriptionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyAccountDescriptionRequest::getAccountDescription()const
{
	return accountDescription_;
}

void ModifyAccountDescriptionRequest::setAccountDescription(const std::string& accountDescription)
{
	accountDescription_ = accountDescription;
	setCoreParameter("AccountDescription", accountDescription);
}

std::string ModifyAccountDescriptionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAccountDescriptionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

