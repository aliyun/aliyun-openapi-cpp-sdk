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

#include <alibabacloud/rds/model/SwitchDBInstanceNetTypeRequest.h>

using AlibabaCloud::Rds::Model::SwitchDBInstanceNetTypeRequest;

SwitchDBInstanceNetTypeRequest::SwitchDBInstanceNetTypeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "SwitchDBInstanceNetType")
{}

SwitchDBInstanceNetTypeRequest::~SwitchDBInstanceNetTypeRequest()
{}

long SwitchDBInstanceNetTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchDBInstanceNetTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SwitchDBInstanceNetTypeRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void SwitchDBInstanceNetTypeRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setCoreParameter("ConnectionStringPrefix", std::to_string(connectionStringPrefix));
}

std::string SwitchDBInstanceNetTypeRequest::getConnectionStringType()const
{
	return connectionStringType_;
}

void SwitchDBInstanceNetTypeRequest::setConnectionStringType(const std::string& connectionStringType)
{
	connectionStringType_ = connectionStringType;
	setCoreParameter("ConnectionStringType", std::to_string(connectionStringType));
}

std::string SwitchDBInstanceNetTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchDBInstanceNetTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string SwitchDBInstanceNetTypeRequest::getClientToken()const
{
	return clientToken_;
}

void SwitchDBInstanceNetTypeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string SwitchDBInstanceNetTypeRequest::getPort()const
{
	return port_;
}

void SwitchDBInstanceNetTypeRequest::setPort(const std::string& port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string SwitchDBInstanceNetTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchDBInstanceNetTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string SwitchDBInstanceNetTypeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void SwitchDBInstanceNetTypeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long SwitchDBInstanceNetTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchDBInstanceNetTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SwitchDBInstanceNetTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchDBInstanceNetTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

