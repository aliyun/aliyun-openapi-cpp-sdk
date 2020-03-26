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

#include <alibabacloud/dds/model/DescribeMongoDBLogConfigRequest.h>

using AlibabaCloud::Dds::Model::DescribeMongoDBLogConfigRequest;

DescribeMongoDBLogConfigRequest::DescribeMongoDBLogConfigRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeMongoDBLogConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMongoDBLogConfigRequest::~DescribeMongoDBLogConfigRequest()
{}

long DescribeMongoDBLogConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMongoDBLogConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMongoDBLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMongoDBLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeMongoDBLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeMongoDBLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeMongoDBLogConfigRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeMongoDBLogConfigRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeMongoDBLogConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMongoDBLogConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMongoDBLogConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMongoDBLogConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeMongoDBLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMongoDBLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

