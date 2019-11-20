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

#include <alibabacloud/adb/model/RevokeOperatorPermissionRequest.h>

using AlibabaCloud::Adb::Model::RevokeOperatorPermissionRequest;

RevokeOperatorPermissionRequest::RevokeOperatorPermissionRequest() :
	RpcServiceRequest("adb", "2019-03-15", "RevokeOperatorPermission")
{
	setMethod(HttpRequest::Method::Post);
}

RevokeOperatorPermissionRequest::~RevokeOperatorPermissionRequest()
{}

long RevokeOperatorPermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeOperatorPermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeOperatorPermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RevokeOperatorPermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RevokeOperatorPermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeOperatorPermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeOperatorPermissionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void RevokeOperatorPermissionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string RevokeOperatorPermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeOperatorPermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RevokeOperatorPermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeOperatorPermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

