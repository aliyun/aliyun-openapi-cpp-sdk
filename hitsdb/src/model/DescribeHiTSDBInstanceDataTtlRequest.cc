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

#include <alibabacloud/hitsdb/model/DescribeHiTSDBInstanceDataTtlRequest.h>

using AlibabaCloud::Hitsdb::Model::DescribeHiTSDBInstanceDataTtlRequest;

DescribeHiTSDBInstanceDataTtlRequest::DescribeHiTSDBInstanceDataTtlRequest() :
	RpcServiceRequest("hitsdb", "2017-06-01", "DescribeHiTSDBInstanceDataTtl")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeHiTSDBInstanceDataTtlRequest::~DescribeHiTSDBInstanceDataTtlRequest()
{}

std::string DescribeHiTSDBInstanceDataTtlRequest::getReverseVpcIp()const
{
	return reverseVpcIp_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setReverseVpcIp(const std::string& reverseVpcIp)
{
	reverseVpcIp_ = reverseVpcIp;
	setParameter("ReverseVpcIp", reverseVpcIp);
}

long DescribeHiTSDBInstanceDataTtlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeHiTSDBInstanceDataTtlRequest::getReverseVpcPort()const
{
	return reverseVpcPort_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setReverseVpcPort(int reverseVpcPort)
{
	reverseVpcPort_ = reverseVpcPort;
	setParameter("ReverseVpcPort", std::to_string(reverseVpcPort));
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getPassWord()const
{
	return passWord_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setPassWord(const std::string& passWord)
{
	passWord_ = passWord;
	setParameter("PassWord", passWord);
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeHiTSDBInstanceDataTtlRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeHiTSDBInstanceDataTtlRequest::getUserName()const
{
	return userName_;
}

void DescribeHiTSDBInstanceDataTtlRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

