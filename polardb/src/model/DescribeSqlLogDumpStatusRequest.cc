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

#include <alibabacloud/polardb/model/DescribeSqlLogDumpStatusRequest.h>

using AlibabaCloud::Polardb::Model::DescribeSqlLogDumpStatusRequest;

DescribeSqlLogDumpStatusRequest::DescribeSqlLogDumpStatusRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeSqlLogDumpStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSqlLogDumpStatusRequest::~DescribeSqlLogDumpStatusRequest()
{}

long DescribeSqlLogDumpStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSqlLogDumpStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSqlLogDumpStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSqlLogDumpStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSqlLogDumpStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSqlLogDumpStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSqlLogDumpStatusRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSqlLogDumpStatusRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSqlLogDumpStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSqlLogDumpStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSqlLogDumpStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSqlLogDumpStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSqlLogDumpStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSqlLogDumpStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

