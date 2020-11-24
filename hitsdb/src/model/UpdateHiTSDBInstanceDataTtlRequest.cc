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

#include <alibabacloud/hitsdb/model/UpdateHiTSDBInstanceDataTtlRequest.h>

using AlibabaCloud::Hitsdb::Model::UpdateHiTSDBInstanceDataTtlRequest;

UpdateHiTSDBInstanceDataTtlRequest::UpdateHiTSDBInstanceDataTtlRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "UpdateHiTSDBInstanceDataTtl")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateHiTSDBInstanceDataTtlRequest::~UpdateHiTSDBInstanceDataTtlRequest()
{}

std::string UpdateHiTSDBInstanceDataTtlRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long UpdateHiTSDBInstanceDataTtlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int UpdateHiTSDBInstanceDataTtlRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getPassWord()const
{
	return passWord_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long UpdateHiTSDBInstanceDataTtlRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long UpdateHiTSDBInstanceDataTtlRequest::getTtl()const
{
	return ttl_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setTtl(long ttl)
{
	ttl_ = ttl;
	setParameter("Ttl", std::to_string(ttl));
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getInstanceId()const
{
	return instanceId_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string UpdateHiTSDBInstanceDataTtlRequest::getUserName()const
{
	return userName_;
}

void UpdateHiTSDBInstanceDataTtlRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

