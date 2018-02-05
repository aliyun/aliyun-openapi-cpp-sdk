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

#include <alibabacloud/rds/model/ImportDataFromDatabaseRequest.h>

using AlibabaCloud::Rds::Model::ImportDataFromDatabaseRequest;

ImportDataFromDatabaseRequest::ImportDataFromDatabaseRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ImportDataFromDatabase")
{}

ImportDataFromDatabaseRequest::~ImportDataFromDatabaseRequest()
{}

long ImportDataFromDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImportDataFromDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ImportDataFromDatabaseRequest::getImportDataType()const
{
	return importDataType_;
}

void ImportDataFromDatabaseRequest::setImportDataType(const std::string& importDataType)
{
	importDataType_ = importDataType;
	setParameter("ImportDataType", importDataType);
}

std::string ImportDataFromDatabaseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ImportDataFromDatabaseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ImportDataFromDatabaseRequest::getIsLockTable()const
{
	return isLockTable_;
}

void ImportDataFromDatabaseRequest::setIsLockTable(const std::string& isLockTable)
{
	isLockTable_ = isLockTable;
	setParameter("IsLockTable", isLockTable);
}

std::string ImportDataFromDatabaseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ImportDataFromDatabaseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ImportDataFromDatabaseRequest::getSourceDatabaseDBNames()const
{
	return sourceDatabaseDBNames_;
}

void ImportDataFromDatabaseRequest::setSourceDatabaseDBNames(const std::string& sourceDatabaseDBNames)
{
	sourceDatabaseDBNames_ = sourceDatabaseDBNames;
	setParameter("SourceDatabaseDBNames", sourceDatabaseDBNames);
}

std::string ImportDataFromDatabaseRequest::getSourceDatabaseIp()const
{
	return sourceDatabaseIp_;
}

void ImportDataFromDatabaseRequest::setSourceDatabaseIp(const std::string& sourceDatabaseIp)
{
	sourceDatabaseIp_ = sourceDatabaseIp;
	setParameter("SourceDatabaseIp", sourceDatabaseIp);
}

long ImportDataFromDatabaseRequest::getOwnerId()const
{
	return ownerId_;
}

void ImportDataFromDatabaseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ImportDataFromDatabaseRequest::getSourceDatabasePassword()const
{
	return sourceDatabasePassword_;
}

void ImportDataFromDatabaseRequest::setSourceDatabasePassword(const std::string& sourceDatabasePassword)
{
	sourceDatabasePassword_ = sourceDatabasePassword;
	setParameter("SourceDatabasePassword", sourceDatabasePassword);
}

std::string ImportDataFromDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ImportDataFromDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ImportDataFromDatabaseRequest::getSourceDatabasePort()const
{
	return sourceDatabasePort_;
}

void ImportDataFromDatabaseRequest::setSourceDatabasePort(const std::string& sourceDatabasePort)
{
	sourceDatabasePort_ = sourceDatabasePort;
	setParameter("SourceDatabasePort", sourceDatabasePort);
}

std::string ImportDataFromDatabaseRequest::getSourceDatabaseUserName()const
{
	return sourceDatabaseUserName_;
}

void ImportDataFromDatabaseRequest::setSourceDatabaseUserName(const std::string& sourceDatabaseUserName)
{
	sourceDatabaseUserName_ = sourceDatabaseUserName;
	setParameter("SourceDatabaseUserName", sourceDatabaseUserName);
}

std::string ImportDataFromDatabaseRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ImportDataFromDatabaseRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

