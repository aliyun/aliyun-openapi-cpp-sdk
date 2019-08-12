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

#include <alibabacloud/polardb/model/DeleteDatabaseRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDatabaseRequest;

DeleteDatabaseRequest::DeleteDatabaseRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DeleteDatabase")
{}

DeleteDatabaseRequest::~DeleteDatabaseRequest()
{}

long DeleteDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteDatabaseRequest::getDBName()const
{
	return dBName_;
}

void DeleteDatabaseRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string DeleteDatabaseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDatabaseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDatabaseRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DeleteDatabaseRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DeleteDatabaseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDatabaseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteDatabaseRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDatabaseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

