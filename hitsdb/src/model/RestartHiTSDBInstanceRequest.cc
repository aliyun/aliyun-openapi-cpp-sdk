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

#include <alibabacloud/hitsdb/model/RestartHiTSDBInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::RestartHiTSDBInstanceRequest;

RestartHiTSDBInstanceRequest::RestartHiTSDBInstanceRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "RestartHiTSDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RestartHiTSDBInstanceRequest::~RestartHiTSDBInstanceRequest()
{}

long RestartHiTSDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestartHiTSDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestartHiTSDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartHiTSDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RestartHiTSDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestartHiTSDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RestartHiTSDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestartHiTSDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestartHiTSDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestartHiTSDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RestartHiTSDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestartHiTSDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RestartHiTSDBInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RestartHiTSDBInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

