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

#include <alibabacloud/polardb/model/CreateDBLinkRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBLinkRequest;

CreateDBLinkRequest::CreateDBLinkRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDBLink")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDBLinkRequest::~CreateDBLinkRequest()
{}

long CreateDBLinkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBLinkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDBLinkRequest::getSourceDBName()const
{
	return sourceDBName_;
}

void CreateDBLinkRequest::setSourceDBName(const std::string& sourceDBName)
{
	sourceDBName_ = sourceDBName;
	setParameter("SourceDBName", sourceDBName);
}

std::string CreateDBLinkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBLinkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDBLinkRequest::getTargetDBName()const
{
	return targetDBName_;
}

void CreateDBLinkRequest::setTargetDBName(const std::string& targetDBName)
{
	targetDBName_ = targetDBName;
	setParameter("TargetDBName", targetDBName);
}

std::string CreateDBLinkRequest::getDBLinkName()const
{
	return dBLinkName_;
}

void CreateDBLinkRequest::setDBLinkName(const std::string& dBLinkName)
{
	dBLinkName_ = dBLinkName;
	setParameter("DBLinkName", dBLinkName);
}

std::string CreateDBLinkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBLinkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBLinkRequest::getTargetDBInstanceName()const
{
	return targetDBInstanceName_;
}

void CreateDBLinkRequest::setTargetDBInstanceName(const std::string& targetDBInstanceName)
{
	targetDBInstanceName_ = targetDBInstanceName;
	setParameter("TargetDBInstanceName", targetDBInstanceName);
}

std::string CreateDBLinkRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateDBLinkRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string CreateDBLinkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBLinkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDBLinkRequest::getTargetDBPasswd()const
{
	return targetDBPasswd_;
}

void CreateDBLinkRequest::setTargetDBPasswd(const std::string& targetDBPasswd)
{
	targetDBPasswd_ = targetDBPasswd;
	setParameter("TargetDBPasswd", targetDBPasswd);
}

long CreateDBLinkRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBLinkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDBLinkRequest::getTargetDBAccount()const
{
	return targetDBAccount_;
}

void CreateDBLinkRequest::setTargetDBAccount(const std::string& targetDBAccount)
{
	targetDBAccount_ = targetDBAccount;
	setParameter("TargetDBAccount", targetDBAccount);
}

