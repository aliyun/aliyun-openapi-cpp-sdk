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

#include <alibabacloud/adb/model/ModifyDBClusterAccessWhiteListRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBClusterAccessWhiteListRequest;

ModifyDBClusterAccessWhiteListRequest::ModifyDBClusterAccessWhiteListRequest() :
	RpcServiceRequest("adb", "2019-03-15", "ModifyDBClusterAccessWhiteList")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterAccessWhiteListRequest::~ModifyDBClusterAccessWhiteListRequest()
{}

long ModifyDBClusterAccessWhiteListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterAccessWhiteListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterAccessWhiteListRequest::getSecurityIps()const
{
	return securityIps_;
}

void ModifyDBClusterAccessWhiteListRequest::setSecurityIps(const std::string& securityIps)
{
	securityIps_ = securityIps;
	setParameter("SecurityIps", securityIps);
}

std::string ModifyDBClusterAccessWhiteListRequest::getDBClusterIPArrayAttribute()const
{
	return dBClusterIPArrayAttribute_;
}

void ModifyDBClusterAccessWhiteListRequest::setDBClusterIPArrayAttribute(const std::string& dBClusterIPArrayAttribute)
{
	dBClusterIPArrayAttribute_ = dBClusterIPArrayAttribute;
	setParameter("DBClusterIPArrayAttribute", dBClusterIPArrayAttribute);
}

std::string ModifyDBClusterAccessWhiteListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterAccessWhiteListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterAccessWhiteListRequest::getModifyMode()const
{
	return modifyMode_;
}

void ModifyDBClusterAccessWhiteListRequest::setModifyMode(const std::string& modifyMode)
{
	modifyMode_ = modifyMode;
	setParameter("ModifyMode", modifyMode);
}

std::string ModifyDBClusterAccessWhiteListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterAccessWhiteListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterAccessWhiteListRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterAccessWhiteListRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterAccessWhiteListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterAccessWhiteListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterAccessWhiteListRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterAccessWhiteListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterAccessWhiteListRequest::getDBClusterIPArrayName()const
{
	return dBClusterIPArrayName_;
}

void ModifyDBClusterAccessWhiteListRequest::setDBClusterIPArrayName(const std::string& dBClusterIPArrayName)
{
	dBClusterIPArrayName_ = dBClusterIPArrayName;
	setParameter("DBClusterIPArrayName", dBClusterIPArrayName);
}

