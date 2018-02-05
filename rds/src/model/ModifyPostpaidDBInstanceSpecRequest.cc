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

#include <alibabacloud/rds/model/ModifyPostpaidDBInstanceSpecRequest.h>

using AlibabaCloud::Rds::Model::ModifyPostpaidDBInstanceSpecRequest;

ModifyPostpaidDBInstanceSpecRequest::ModifyPostpaidDBInstanceSpecRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyPostpaidDBInstanceSpec")
{}

ModifyPostpaidDBInstanceSpecRequest::~ModifyPostpaidDBInstanceSpecRequest()
{}

long ModifyPostpaidDBInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyPostpaidDBInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyPostpaidDBInstanceSpecRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void ModifyPostpaidDBInstanceSpecRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string ModifyPostpaidDBInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyPostpaidDBInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyPostpaidDBInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyPostpaidDBInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyPostpaidDBInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyPostpaidDBInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyPostpaidDBInstanceSpecRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyPostpaidDBInstanceSpecRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ModifyPostpaidDBInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyPostpaidDBInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyPostpaidDBInstanceSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyPostpaidDBInstanceSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyPostpaidDBInstanceSpecRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void ModifyPostpaidDBInstanceSpecRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

