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

#include <alibabacloud/rds/model/CancelImportRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CancelImportRequest::CancelImportRequest() :
	RdsRequest("CancelImport")
{}

CancelImportRequest::~CancelImportRequest()
{}

long CancelImportRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelImportRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CancelImportRequest::getImportId()const
{
	return importId_;
}

void CancelImportRequest::setImportId(int importId)
{
	importId_ = importId;
	setParameter("ImportId", std::to_string(importId));
}

std::string CancelImportRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelImportRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelImportRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelImportRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CancelImportRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CancelImportRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long CancelImportRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelImportRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CancelImportRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelImportRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

