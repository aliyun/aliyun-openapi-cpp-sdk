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

#include <alibabacloud/rds/model/StopSyncingRequest.h>

using AlibabaCloud::Rds::Model::StopSyncingRequest;

StopSyncingRequest::StopSyncingRequest() :
	RpcServiceRequest("rds", "2014-08-15", "StopSyncing")
{}

StopSyncingRequest::~StopSyncingRequest()
{}

long StopSyncingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopSyncingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int StopSyncingRequest::getImportId()const
{
	return importId_;
}

void StopSyncingRequest::setImportId(int importId)
{
	importId_ = importId;
	setParameter("ImportId", std::to_string(importId));
}

std::string StopSyncingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StopSyncingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StopSyncingRequest::getClientToken()const
{
	return clientToken_;
}

void StopSyncingRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string StopSyncingRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StopSyncingRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string StopSyncingRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void StopSyncingRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long StopSyncingRequest::getOwnerId()const
{
	return ownerId_;
}

void StopSyncingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopSyncingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopSyncingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

