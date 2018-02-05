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

#include <alibabacloud/rds/model/PreCheckBeforeImportDataRequest.h>

using AlibabaCloud::Rds::Model::PreCheckBeforeImportDataRequest;

PreCheckBeforeImportDataRequest::PreCheckBeforeImportDataRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckBeforeImportData")
{}

PreCheckBeforeImportDataRequest::~PreCheckBeforeImportDataRequest()
{}

long PreCheckBeforeImportDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckBeforeImportDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PreCheckBeforeImportDataRequest::getImportDataType()const
{
	return importDataType_;
}

void PreCheckBeforeImportDataRequest::setImportDataType(const std::string& importDataType)
{
	importDataType_ = importDataType;
	setParameter("ImportDataType", importDataType);
}

std::string PreCheckBeforeImportDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckBeforeImportDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckBeforeImportDataRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckBeforeImportDataRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string PreCheckBeforeImportDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PreCheckBeforeImportDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string PreCheckBeforeImportDataRequest::getSourceDatabaseDBNames()const
{
	return sourceDatabaseDBNames_;
}

void PreCheckBeforeImportDataRequest::setSourceDatabaseDBNames(const std::string& sourceDatabaseDBNames)
{
	sourceDatabaseDBNames_ = sourceDatabaseDBNames;
	setParameter("SourceDatabaseDBNames", sourceDatabaseDBNames);
}

std::string PreCheckBeforeImportDataRequest::getSourceDatabaseIp()const
{
	return sourceDatabaseIp_;
}

void PreCheckBeforeImportDataRequest::setSourceDatabaseIp(const std::string& sourceDatabaseIp)
{
	sourceDatabaseIp_ = sourceDatabaseIp;
	setParameter("SourceDatabaseIp", sourceDatabaseIp);
}

long PreCheckBeforeImportDataRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckBeforeImportDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckBeforeImportDataRequest::getSourceDatabasePassword()const
{
	return sourceDatabasePassword_;
}

void PreCheckBeforeImportDataRequest::setSourceDatabasePassword(const std::string& sourceDatabasePassword)
{
	sourceDatabasePassword_ = sourceDatabasePassword;
	setParameter("SourceDatabasePassword", sourceDatabasePassword);
}

std::string PreCheckBeforeImportDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckBeforeImportDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckBeforeImportDataRequest::getSourceDatabasePort()const
{
	return sourceDatabasePort_;
}

void PreCheckBeforeImportDataRequest::setSourceDatabasePort(const std::string& sourceDatabasePort)
{
	sourceDatabasePort_ = sourceDatabasePort;
	setParameter("SourceDatabasePort", sourceDatabasePort);
}

std::string PreCheckBeforeImportDataRequest::getSourceDatabaseUserName()const
{
	return sourceDatabaseUserName_;
}

void PreCheckBeforeImportDataRequest::setSourceDatabaseUserName(const std::string& sourceDatabaseUserName)
{
	sourceDatabaseUserName_ = sourceDatabaseUserName;
	setParameter("SourceDatabaseUserName", sourceDatabaseUserName);
}

std::string PreCheckBeforeImportDataRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckBeforeImportDataRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

