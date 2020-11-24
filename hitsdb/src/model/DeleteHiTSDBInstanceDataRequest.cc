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

#include <alibabacloud/hitsdb/model/DeleteHiTSDBInstanceDataRequest.h>

using AlibabaCloud::Hitsdb::Model::DeleteHiTSDBInstanceDataRequest;

DeleteHiTSDBInstanceDataRequest::DeleteHiTSDBInstanceDataRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "DeleteHiTSDBInstanceData")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteHiTSDBInstanceDataRequest::~DeleteHiTSDBInstanceDataRequest()
{}

std::string DeleteHiTSDBInstanceDataRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void DeleteHiTSDBInstanceDataRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long DeleteHiTSDBInstanceDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteHiTSDBInstanceDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DeleteHiTSDBInstanceDataRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void DeleteHiTSDBInstanceDataRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string DeleteHiTSDBInstanceDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteHiTSDBInstanceDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteHiTSDBInstanceDataRequest::getPassWord()const
{
	return passWord_;
}

void DeleteHiTSDBInstanceDataRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string DeleteHiTSDBInstanceDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteHiTSDBInstanceDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long DeleteHiTSDBInstanceDataRequest::getEnd()const
{
	return end_;
}

void DeleteHiTSDBInstanceDataRequest::setEnd(long end)
{
	end_ = end;
	setParameter("End", std::to_string(end));
}

std::string DeleteHiTSDBInstanceDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteHiTSDBInstanceDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteHiTSDBInstanceDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteHiTSDBInstanceDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteHiTSDBInstanceDataRequest::getStart()const
{
	return start_;
}

void DeleteHiTSDBInstanceDataRequest::setStart(long start)
{
	start_ = start;
	setParameter("Start", std::to_string(start));
}

long DeleteHiTSDBInstanceDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHiTSDBInstanceDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteHiTSDBInstanceDataRequest::getTags()const
{
	return tags_;
}

void DeleteHiTSDBInstanceDataRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DeleteHiTSDBInstanceDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteHiTSDBInstanceDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteHiTSDBInstanceDataRequest::getMetric()const
{
	return metric_;
}

void DeleteHiTSDBInstanceDataRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string DeleteHiTSDBInstanceDataRequest::getUserName()const
{
	return userName_;
}

void DeleteHiTSDBInstanceDataRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

