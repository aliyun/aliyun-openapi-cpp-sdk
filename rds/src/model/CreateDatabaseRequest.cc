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

#include <alibabacloud/rds/model/CreateDatabaseRequest.h>

using AlibabaCloud::Rds::Model::CreateDatabaseRequest;

CreateDatabaseRequest::CreateDatabaseRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDatabase")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDatabaseRequest::~CreateDatabaseRequest()
{}

long CreateDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDatabaseRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateDatabaseRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateDatabaseRequest::getDBDescription()const
{
	return dBDescription_;
}

void CreateDatabaseRequest::setDBDescription(const std::string& dBDescription)
{
	dBDescription_ = dBDescription;
	setParameter("DBDescription", dBDescription);
}

std::string CreateDatabaseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDatabaseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDatabaseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDatabaseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateDatabaseRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDatabaseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDatabaseRequest::getDBName()const
{
	return dBName_;
}

void CreateDatabaseRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string CreateDatabaseRequest::getCharacterSetName()const
{
	return characterSetName_;
}

void CreateDatabaseRequest::setCharacterSetName(const std::string& characterSetName)
{
	characterSetName_ = characterSetName;
	setParameter("CharacterSetName", characterSetName);
}

