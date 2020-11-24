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

#include <alibabacloud/hitsdb/model/ExploreHiTSDBInstanceDataTagValueListRequest.h>

using AlibabaCloud::Hitsdb::Model::ExploreHiTSDBInstanceDataTagValueListRequest;

ExploreHiTSDBInstanceDataTagValueListRequest::ExploreHiTSDBInstanceDataTagValueListRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "ExploreHiTSDBInstanceDataTagValueList")
{
	setMethod(HttpRequest::Method::Post);
}

ExploreHiTSDBInstanceDataTagValueListRequest::~ExploreHiTSDBInstanceDataTagValueListRequest()
{}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long ExploreHiTSDBInstanceDataTagValueListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getPrefix()const
{
	return prefix_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setPrefix(const std::string& prefix)
{
	prefix_ = prefix;
	setParameter("Prefix", prefix);
}

int ExploreHiTSDBInstanceDataTagValueListRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getPassWord()const
{
	return passWord_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ExploreHiTSDBInstanceDataTagValueListRequest::getMax()const
{
	return max_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setMax(long max)
{
	max_ = max;
	setParameter("Max", std::to_string(max));
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ExploreHiTSDBInstanceDataTagValueListRequest::getOwnerId()const
{
	return ownerId_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getInstanceId()const
{
	return instanceId_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getTagKey()const
{
	return tagKey_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setTagKey(const std::string& tagKey)
{
	tagKey_ = tagKey;
	setParameter("TagKey", tagKey);
}

std::string ExploreHiTSDBInstanceDataTagValueListRequest::getUserName()const
{
	return userName_;
}

void ExploreHiTSDBInstanceDataTagValueListRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

