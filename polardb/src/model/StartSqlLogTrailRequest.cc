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

#include <alibabacloud/polardb/model/StartSqlLogTrailRequest.h>

using AlibabaCloud::Polardb::Model::StartSqlLogTrailRequest;

StartSqlLogTrailRequest::StartSqlLogTrailRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "StartSqlLogTrail")
{
	setMethod(HttpRequest::Method::Post);
}

StartSqlLogTrailRequest::~StartSqlLogTrailRequest()
{}

long StartSqlLogTrailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartSqlLogTrailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartSqlLogTrailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartSqlLogTrailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StartSqlLogTrailRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartSqlLogTrailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StartSqlLogTrailRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void StartSqlLogTrailRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string StartSqlLogTrailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartSqlLogTrailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartSqlLogTrailRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartSqlLogTrailRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long StartSqlLogTrailRequest::getOwnerId()const
{
	return ownerId_;
}

void StartSqlLogTrailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

