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

#include <alibabacloud/adb/model/GrantOperatorPermissionRequest.h>

using AlibabaCloud::Adb::Model::GrantOperatorPermissionRequest;

GrantOperatorPermissionRequest::GrantOperatorPermissionRequest() :
	RpcServiceRequest("adb", "2019-03-15", "GrantOperatorPermission")
{
	setMethod(HttpRequest::Method::Post);
}

GrantOperatorPermissionRequest::~GrantOperatorPermissionRequest()
{}

std::string GrantOperatorPermissionRequest::getPrivileges()const
{
	return privileges_;
}

void GrantOperatorPermissionRequest::setPrivileges(const std::string& privileges)
{
	privileges_ = privileges;
	setCoreParameter("Privileges", privileges);
}

long GrantOperatorPermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GrantOperatorPermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GrantOperatorPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GrantOperatorPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string GrantOperatorPermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GrantOperatorPermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GrantOperatorPermissionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void GrantOperatorPermissionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string GrantOperatorPermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GrantOperatorPermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long GrantOperatorPermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void GrantOperatorPermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GrantOperatorPermissionRequest::getExpiredTime()const
{
	return expiredTime_;
}

void GrantOperatorPermissionRequest::setExpiredTime(const std::string& expiredTime)
{
	expiredTime_ = expiredTime;
	setCoreParameter("ExpiredTime", expiredTime);
}

