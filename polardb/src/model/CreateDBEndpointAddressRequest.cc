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

#include <alibabacloud/polardb/model/CreateDBEndpointAddressRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBEndpointAddressRequest;

CreateDBEndpointAddressRequest::CreateDBEndpointAddressRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDBEndpointAddress")
{}

CreateDBEndpointAddressRequest::~CreateDBEndpointAddressRequest()
{}

long CreateDBEndpointAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBEndpointAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDBEndpointAddressRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void CreateDBEndpointAddressRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setCoreParameter("ConnectionStringPrefix", connectionStringPrefix);
}

std::string CreateDBEndpointAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBEndpointAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBEndpointAddressRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateDBEndpointAddressRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string CreateDBEndpointAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBEndpointAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBEndpointAddressRequest::getNetType()const
{
	return netType_;
}

void CreateDBEndpointAddressRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setCoreParameter("NetType", netType);
}

std::string CreateDBEndpointAddressRequest::getDBEndpointId()const
{
	return dBEndpointId_;
}

void CreateDBEndpointAddressRequest::setDBEndpointId(const std::string& dBEndpointId)
{
	dBEndpointId_ = dBEndpointId;
	setCoreParameter("DBEndpointId", dBEndpointId);
}

long CreateDBEndpointAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBEndpointAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBEndpointAddressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBEndpointAddressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

