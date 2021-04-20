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

#include <alibabacloud/hitsdb/model/ModifyHiTSDBInstanceClassRequest.h>

using AlibabaCloud::Hitsdb::Model::ModifyHiTSDBInstanceClassRequest;

ModifyHiTSDBInstanceClassRequest::ModifyHiTSDBInstanceClassRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ModifyHiTSDBInstanceClass")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyHiTSDBInstanceClassRequest::~ModifyHiTSDBInstanceClassRequest()
{}

long ModifyHiTSDBInstanceClassRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyHiTSDBInstanceClassRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyHiTSDBInstanceClassRequest::getInstanceClass()const
{
	return instanceClass_;
}

void ModifyHiTSDBInstanceClassRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setParameter("InstanceClass", instanceClass);
}

std::string ModifyHiTSDBInstanceClassRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyHiTSDBInstanceClassRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyHiTSDBInstanceClassRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyHiTSDBInstanceClassRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyHiTSDBInstanceClassRequest::getInstanceStorage()const
{
	return instanceStorage_;
}

void ModifyHiTSDBInstanceClassRequest::setInstanceStorage(const std::string& instanceStorage)
{
	instanceStorage_ = instanceStorage;
	setParameter("InstanceStorage", instanceStorage);
}

std::string ModifyHiTSDBInstanceClassRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyHiTSDBInstanceClassRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyHiTSDBInstanceClassRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyHiTSDBInstanceClassRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyHiTSDBInstanceClassRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyHiTSDBInstanceClassRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyHiTSDBInstanceClassRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyHiTSDBInstanceClassRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyHiTSDBInstanceClassRequest::getAppKey()const
{
	return appKey_;
}

void ModifyHiTSDBInstanceClassRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", appKey);
}

