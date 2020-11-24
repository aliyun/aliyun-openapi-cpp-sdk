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

#include <alibabacloud/hitsdb/model/DeleteHiTSDBInstanceMetaRequest.h>

using AlibabaCloud::Hitsdb::Model::DeleteHiTSDBInstanceMetaRequest;

DeleteHiTSDBInstanceMetaRequest::DeleteHiTSDBInstanceMetaRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "DeleteHiTSDBInstanceMeta")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteHiTSDBInstanceMetaRequest::~DeleteHiTSDBInstanceMetaRequest()
{}

std::string DeleteHiTSDBInstanceMetaRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void DeleteHiTSDBInstanceMetaRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long DeleteHiTSDBInstanceMetaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteHiTSDBInstanceMetaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DeleteHiTSDBInstanceMetaRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void DeleteHiTSDBInstanceMetaRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string DeleteHiTSDBInstanceMetaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteHiTSDBInstanceMetaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteHiTSDBInstanceMetaRequest::getPassWord()const
{
	return passWord_;
}

void DeleteHiTSDBInstanceMetaRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string DeleteHiTSDBInstanceMetaRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteHiTSDBInstanceMetaRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteHiTSDBInstanceMetaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteHiTSDBInstanceMetaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteHiTSDBInstanceMetaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteHiTSDBInstanceMetaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteHiTSDBInstanceMetaRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHiTSDBInstanceMetaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteHiTSDBInstanceMetaRequest::getTags()const
{
	return tags_;
}

void DeleteHiTSDBInstanceMetaRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DeleteHiTSDBInstanceMetaRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteHiTSDBInstanceMetaRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteHiTSDBInstanceMetaRequest::getMetric()const
{
	return metric_;
}

void DeleteHiTSDBInstanceMetaRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string DeleteHiTSDBInstanceMetaRequest::getUserName()const
{
	return userName_;
}

void DeleteHiTSDBInstanceMetaRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

