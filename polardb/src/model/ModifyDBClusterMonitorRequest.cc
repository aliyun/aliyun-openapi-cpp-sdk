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

#include <alibabacloud/polardb/model/ModifyDBClusterMonitorRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterMonitorRequest;

ModifyDBClusterMonitorRequest::ModifyDBClusterMonitorRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterMonitorRequest::~ModifyDBClusterMonitorRequest()
{}

long ModifyDBClusterMonitorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterMonitorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterMonitorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterMonitorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterMonitorRequest::getPeriod()const
{
	return period_;
}

void ModifyDBClusterMonitorRequest::setPeriod(const std::string& period)
{
	period_ = period;
	setParameter("Period", period);
}

std::string ModifyDBClusterMonitorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterMonitorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterMonitorRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterMonitorRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterMonitorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterMonitorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterMonitorRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterMonitorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

