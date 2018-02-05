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

#include <alibabacloud/rds/model/ImportDataForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::ImportDataForSQLServerRequest;

ImportDataForSQLServerRequest::ImportDataForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ImportDataForSQLServer")
{}

ImportDataForSQLServerRequest::~ImportDataForSQLServerRequest()
{}

long ImportDataForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImportDataForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ImportDataForSQLServerRequest::getFileName()const
{
	return fileName_;
}

void ImportDataForSQLServerRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setParameter("FileName", fileName);
}

std::string ImportDataForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ImportDataForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ImportDataForSQLServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ImportDataForSQLServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ImportDataForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ImportDataForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ImportDataForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void ImportDataForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ImportDataForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ImportDataForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

