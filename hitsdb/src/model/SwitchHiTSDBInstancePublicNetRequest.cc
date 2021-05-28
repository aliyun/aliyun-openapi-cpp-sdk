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

#include <alibabacloud/hitsdb/model/SwitchHiTSDBInstancePublicNetRequest.h>

using AlibabaCloud::Hitsdb::Model::SwitchHiTSDBInstancePublicNetRequest;

SwitchHiTSDBInstancePublicNetRequest::SwitchHiTSDBInstancePublicNetRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "SwitchHiTSDBInstancePublicNet")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchHiTSDBInstancePublicNetRequest::~SwitchHiTSDBInstancePublicNetRequest()
{}

long SwitchHiTSDBInstancePublicNetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchHiTSDBInstancePublicNetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchHiTSDBInstancePublicNetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchHiTSDBInstancePublicNetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SwitchHiTSDBInstancePublicNetRequest::getSecurityToken()const
{
	return securityToken_;
}

void SwitchHiTSDBInstancePublicNetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long SwitchHiTSDBInstancePublicNetRequest::getSwitchAction()const
{
	return switchAction_;
}

void SwitchHiTSDBInstancePublicNetRequest::setSwitchAction(long switchAction)
{
	switchAction_ = switchAction;
	setParameter("SwitchAction", std::to_string(switchAction));
}

std::string SwitchHiTSDBInstancePublicNetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchHiTSDBInstancePublicNetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchHiTSDBInstancePublicNetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchHiTSDBInstancePublicNetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SwitchHiTSDBInstancePublicNetRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchHiTSDBInstancePublicNetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SwitchHiTSDBInstancePublicNetRequest::getInstanceId()const
{
	return instanceId_;
}

void SwitchHiTSDBInstancePublicNetRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

