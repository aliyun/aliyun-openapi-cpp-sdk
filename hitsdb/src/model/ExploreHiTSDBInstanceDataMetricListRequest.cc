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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataMetricListRequest.h>

using AlibabaCloud::Hitsdb::Model::ExploreHiTSDBInstanceDataMetricListRequest;

ExploreHiTSDBInstanceDataMetricListRequest::ExploreHiTSDBInstanceDataMetricListRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ExploreHiTSDBInstanceDataMetricList")
{
	setMethod(HttpRequest::Method::Post);
}

ExploreHiTSDBInstanceDataMetricListRequest::~ExploreHiTSDBInstanceDataMetricListRequest()
{}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long ExploreHiTSDBInstanceDataMetricListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getPrefix()const
{
	return prefix_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setPrefix(const std::string& prefix)
{
	prefix_ = prefix;
	setParameter("Prefix", prefix);
}

int ExploreHiTSDBInstanceDataMetricListRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getPassWord()const
{
	return passWord_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ExploreHiTSDBInstanceDataMetricListRequest::getMax()const
{
	return max_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setMax(long max)
{
	max_ = max;
	setParameter("Max", std::to_string(max));
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ExploreHiTSDBInstanceDataMetricListRequest::getOwnerId()const
{
	return ownerId_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getInstanceId()const
{
	return instanceId_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ExploreHiTSDBInstanceDataMetricListRequest::getUserName()const
{
	return userName_;
}

void ExploreHiTSDBInstanceDataMetricListRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

