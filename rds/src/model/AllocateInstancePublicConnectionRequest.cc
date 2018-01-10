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

#include <alibabacloud/rds/model/AllocateInstancePublicConnectionRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

AllocateInstancePublicConnectionRequest::AllocateInstancePublicConnectionRequest() :
	RdsRequest("AllocateInstancePublicConnection")
{}

AllocateInstancePublicConnectionRequest::~AllocateInstancePublicConnectionRequest()
{}

long AllocateInstancePublicConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateInstancePublicConnectionRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void AllocateInstancePublicConnectionRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setParameter("ConnectionStringPrefix", connectionStringPrefix);
}

std::string AllocateInstancePublicConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateInstancePublicConnectionRequest::getPort()const
{
	return port_;
}

void AllocateInstancePublicConnectionRequest::setPort(const std::string& port)
{
	port_ = port;
	setParameter("Port", port);
}

std::string AllocateInstancePublicConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateInstancePublicConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AllocateInstancePublicConnectionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void AllocateInstancePublicConnectionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long AllocateInstancePublicConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateInstancePublicConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AllocateInstancePublicConnectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateInstancePublicConnectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

