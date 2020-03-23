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

#include <alibabacloud/rds/model/DestroyDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::DestroyDBInstanceRequest;

DestroyDBInstanceRequest::DestroyDBInstanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DestroyDBInstance")
{
	setMethod(HttpRequest::Method::Post);
}

DestroyDBInstanceRequest::~DestroyDBInstanceRequest()
{}

long DestroyDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DestroyDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DestroyDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DestroyDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DestroyDBInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void DestroyDBInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DestroyDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DestroyDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DestroyDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DestroyDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DestroyDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DestroyDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DestroyDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DestroyDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

