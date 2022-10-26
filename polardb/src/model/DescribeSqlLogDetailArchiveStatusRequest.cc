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

#include <alibabacloud/polardb/model/DescribeSqlLogDetailArchiveStatusRequest.h>

using AlibabaCloud::Polardb::Model::DescribeSqlLogDetailArchiveStatusRequest;

DescribeSqlLogDetailArchiveStatusRequest::DescribeSqlLogDetailArchiveStatusRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeSqlLogDetailArchiveStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSqlLogDetailArchiveStatusRequest::~DescribeSqlLogDetailArchiveStatusRequest()
{}

long DescribeSqlLogDetailArchiveStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSqlLogDetailArchiveStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSqlLogDetailArchiveStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSqlLogDetailArchiveStatusRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSqlLogDetailArchiveStatusRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSqlLogDetailArchiveStatusRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSqlLogDetailArchiveStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSqlLogDetailArchiveStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

