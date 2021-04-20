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

#include <alibabacloud/hitsdb/model/DeleteHiTSDBInstanceRequest.h>

using AlibabaCloud::Hitsdb::Model::DeleteHiTSDBInstanceRequest;

DeleteHiTSDBInstanceRequest::DeleteHiTSDBInstanceRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "DeleteHiTSDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteHiTSDBInstanceRequest::~DeleteHiTSDBInstanceRequest()
{}

long DeleteHiTSDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteHiTSDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteHiTSDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteHiTSDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteHiTSDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteHiTSDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteHiTSDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteHiTSDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteHiTSDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteHiTSDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteHiTSDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHiTSDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteHiTSDBInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteHiTSDBInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteHiTSDBInstanceRequest::getAppKey()const
{
	return appKey_;
}

void DeleteHiTSDBInstanceRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", appKey);
}

