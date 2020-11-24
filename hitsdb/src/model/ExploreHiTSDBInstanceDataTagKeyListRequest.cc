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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagKeyListRequest.h>

using AlibabaCloud::Hitsdb::Model::ExploreHiTSDBInstanceDataTagKeyListRequest;

ExploreHiTSDBInstanceDataTagKeyListRequest::ExploreHiTSDBInstanceDataTagKeyListRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ExploreHiTSDBInstanceDataTagKeyList")
{
	setMethod(HttpRequest::Method::Post);
}

ExploreHiTSDBInstanceDataTagKeyListRequest::~ExploreHiTSDBInstanceDataTagKeyListRequest()
{}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long ExploreHiTSDBInstanceDataTagKeyListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getPrefix()const
{
	return prefix_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setPrefix(const std::string& prefix)
{
	prefix_ = prefix;
	setParameter("Prefix", prefix);
}

int ExploreHiTSDBInstanceDataTagKeyListRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getPassWord()const
{
	return passWord_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ExploreHiTSDBInstanceDataTagKeyListRequest::getMax()const
{
	return max_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setMax(long max)
{
	max_ = max;
	setParameter("Max", std::to_string(max));
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ExploreHiTSDBInstanceDataTagKeyListRequest::getOwnerId()const
{
	return ownerId_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getInstanceId()const
{
	return instanceId_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getMetric()const
{
	return metric_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setMetric(const std::string& metric)
{
	metric_ = metric;
	setParameter("Metric", metric);
}

std::string ExploreHiTSDBInstanceDataTagKeyListRequest::getUserName()const
{
	return userName_;
}

void ExploreHiTSDBInstanceDataTagKeyListRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

