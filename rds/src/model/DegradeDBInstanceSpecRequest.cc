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

#include <alibabacloud/rds/model/DegradeDBInstanceSpecRequest.h>

using AlibabaCloud::Rds::Model::DegradeDBInstanceSpecRequest;

DegradeDBInstanceSpecRequest::DegradeDBInstanceSpecRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DegradeDBInstanceSpec")
{}

DegradeDBInstanceSpecRequest::~DegradeDBInstanceSpecRequest()
{}

long DegradeDBInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DegradeDBInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DegradeDBInstanceSpecRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void DegradeDBInstanceSpecRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string DegradeDBInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DegradeDBInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DegradeDBInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void DegradeDBInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DegradeDBInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DegradeDBInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DegradeDBInstanceSpecRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DegradeDBInstanceSpecRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DegradeDBInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void DegradeDBInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DegradeDBInstanceSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DegradeDBInstanceSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DegradeDBInstanceSpecRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void DegradeDBInstanceSpecRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

