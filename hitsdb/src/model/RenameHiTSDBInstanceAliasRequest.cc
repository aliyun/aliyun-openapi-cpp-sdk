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

#include <alibabacloud/hitsdb/model/RenameHiTSDBInstanceAliasRequest.h>

using AlibabaCloud::Hitsdb::Model::RenameHiTSDBInstanceAliasRequest;

RenameHiTSDBInstanceAliasRequest::RenameHiTSDBInstanceAliasRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "RenameHiTSDBInstanceAlias")
{
	setMethod(HttpRequest::Method::Post);
}

RenameHiTSDBInstanceAliasRequest::~RenameHiTSDBInstanceAliasRequest()
{}

long RenameHiTSDBInstanceAliasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenameHiTSDBInstanceAliasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenameHiTSDBInstanceAliasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenameHiTSDBInstanceAliasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RenameHiTSDBInstanceAliasRequest::getSecurityToken()const
{
	return securityToken_;
}

void RenameHiTSDBInstanceAliasRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RenameHiTSDBInstanceAliasRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenameHiTSDBInstanceAliasRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenameHiTSDBInstanceAliasRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenameHiTSDBInstanceAliasRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RenameHiTSDBInstanceAliasRequest::getInstanceAlias()const
{
	return instanceAlias_;
}

void RenameHiTSDBInstanceAliasRequest::setInstanceAlias(const std::string& instanceAlias)
{
	instanceAlias_ = instanceAlias;
	setParameter("InstanceAlias", instanceAlias);
}

long RenameHiTSDBInstanceAliasRequest::getOwnerId()const
{
	return ownerId_;
}

void RenameHiTSDBInstanceAliasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenameHiTSDBInstanceAliasRequest::getInstanceId()const
{
	return instanceId_;
}

void RenameHiTSDBInstanceAliasRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RenameHiTSDBInstanceAliasRequest::getAppKey()const
{
	return appKey_;
}

void RenameHiTSDBInstanceAliasRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", appKey);
}

