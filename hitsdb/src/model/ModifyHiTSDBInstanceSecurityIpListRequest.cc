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

#include <alibabacloud/hitsdb/model/ModifyHiTSDBInstanceSecurityIpListRequest.h>

using AlibabaCloud::Hitsdb::Model::ModifyHiTSDBInstanceSecurityIpListRequest;

ModifyHiTSDBInstanceSecurityIpListRequest::ModifyHiTSDBInstanceSecurityIpListRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ModifyHiTSDBInstanceSecurityIpList")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyHiTSDBInstanceSecurityIpListRequest::~ModifyHiTSDBInstanceSecurityIpListRequest()
{}

long ModifyHiTSDBInstanceSecurityIpListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyHiTSDBInstanceSecurityIpListRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getGroupName()const
{
	return groupName_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getSecurityIpList()const
{
	return securityIpList_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setSecurityIpList(const std::string& securityIpList)
{
	securityIpList_ = securityIpList;
	setParameter("SecurityIpList", securityIpList);
}

std::string ModifyHiTSDBInstanceSecurityIpListRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyHiTSDBInstanceSecurityIpListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

