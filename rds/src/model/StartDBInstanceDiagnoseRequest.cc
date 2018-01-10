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

#include <alibabacloud/rds/model/StartDBInstanceDiagnoseRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

StartDBInstanceDiagnoseRequest::StartDBInstanceDiagnoseRequest() :
	RdsRequest("StartDBInstanceDiagnose")
{}

StartDBInstanceDiagnoseRequest::~StartDBInstanceDiagnoseRequest()
{}

long StartDBInstanceDiagnoseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartDBInstanceDiagnoseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartDBInstanceDiagnoseRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartDBInstanceDiagnoseRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartDBInstanceDiagnoseRequest::getClientToken()const
{
	return clientToken_;
}

void StartDBInstanceDiagnoseRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string StartDBInstanceDiagnoseRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StartDBInstanceDiagnoseRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string StartDBInstanceDiagnoseRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void StartDBInstanceDiagnoseRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long StartDBInstanceDiagnoseRequest::getOwnerId()const
{
	return ownerId_;
}

void StartDBInstanceDiagnoseRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartDBInstanceDiagnoseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartDBInstanceDiagnoseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StartDBInstanceDiagnoseRequest::getProxyId()const
{
	return proxyId_;
}

void StartDBInstanceDiagnoseRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setParameter("ProxyId", proxyId);
}

