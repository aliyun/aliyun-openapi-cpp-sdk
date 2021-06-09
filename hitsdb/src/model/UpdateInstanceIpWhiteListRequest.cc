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

#include <alibabacloud/hitsdb/model/UpdateInstanceIpWhiteListRequest.h>

using AlibabaCloud::Hitsdb::Model::UpdateInstanceIpWhiteListRequest;

UpdateInstanceIpWhiteListRequest::UpdateInstanceIpWhiteListRequest() :
	RpcServiceRequest("hitsdb", "2020-06-15", "UpdateInstanceIpWhiteList")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateInstanceIpWhiteListRequest::~UpdateInstanceIpWhiteListRequest()
{}

long UpdateInstanceIpWhiteListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateInstanceIpWhiteListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateInstanceIpWhiteListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateInstanceIpWhiteListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateInstanceIpWhiteListRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateInstanceIpWhiteListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateInstanceIpWhiteListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateInstanceIpWhiteListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateInstanceIpWhiteListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateInstanceIpWhiteListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpdateInstanceIpWhiteListRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateInstanceIpWhiteListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateInstanceIpWhiteListRequest::getGroupName()const
{
	return groupName_;
}

void UpdateInstanceIpWhiteListRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string UpdateInstanceIpWhiteListRequest::getSecurityIpList()const
{
	return securityIpList_;
}

void UpdateInstanceIpWhiteListRequest::setSecurityIpList(const std::string& securityIpList)
{
	securityIpList_ = securityIpList;
	setParameter("SecurityIpList", securityIpList);
}

std::string UpdateInstanceIpWhiteListRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateInstanceIpWhiteListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

