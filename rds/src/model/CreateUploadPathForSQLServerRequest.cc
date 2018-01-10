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

#include <alibabacloud/rds/model/CreateUploadPathForSQLServerRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateUploadPathForSQLServerRequest::CreateUploadPathForSQLServerRequest() :
	RdsRequest("CreateUploadPathForSQLServer")
{}

CreateUploadPathForSQLServerRequest::~CreateUploadPathForSQLServerRequest()
{}

long CreateUploadPathForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUploadPathForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUploadPathForSQLServerRequest::getDBName()const
{
	return dBName_;
}

void CreateUploadPathForSQLServerRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string CreateUploadPathForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUploadPathForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateUploadPathForSQLServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateUploadPathForSQLServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateUploadPathForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateUploadPathForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long CreateUploadPathForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUploadPathForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateUploadPathForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUploadPathForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

