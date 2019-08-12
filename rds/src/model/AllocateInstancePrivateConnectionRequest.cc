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

#include <alibabacloud/rds/model/AllocateInstancePrivateConnectionRequest.h>

using AlibabaCloud::Rds::Model::AllocateInstancePrivateConnectionRequest;

AllocateInstancePrivateConnectionRequest::AllocateInstancePrivateConnectionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "AllocateInstancePrivateConnection")
{}

AllocateInstancePrivateConnectionRequest::~AllocateInstancePrivateConnectionRequest()
{}

long AllocateInstancePrivateConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateInstancePrivateConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AllocateInstancePrivateConnectionRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void AllocateInstancePrivateConnectionRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setCoreParameter("ConnectionStringPrefix", std::to_string(connectionStringPrefix));
}

std::string AllocateInstancePrivateConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateInstancePrivateConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AllocateInstancePrivateConnectionRequest::getPort()const
{
	return port_;
}

void AllocateInstancePrivateConnectionRequest::setPort(const std::string& port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string AllocateInstancePrivateConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateInstancePrivateConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AllocateInstancePrivateConnectionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void AllocateInstancePrivateConnectionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long AllocateInstancePrivateConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateInstancePrivateConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AllocateInstancePrivateConnectionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateInstancePrivateConnectionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

