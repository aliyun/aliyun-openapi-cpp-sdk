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

#include <alibabacloud/r-kvstore/model/FlushInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::FlushInstanceRequest;

FlushInstanceRequest::FlushInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "FlushInstance")
{
	setMethod(HttpRequest::Method::Post);
}

FlushInstanceRequest::~FlushInstanceRequest()
{}

long FlushInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void FlushInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string FlushInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void FlushInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string FlushInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void FlushInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long FlushInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void FlushInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string FlushInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FlushInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string FlushInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void FlushInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string FlushInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void FlushInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

