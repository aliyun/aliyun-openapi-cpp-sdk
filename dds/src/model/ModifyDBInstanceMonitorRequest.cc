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

#include <alibabacloud/dds/model/ModifyDBInstanceMonitorRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceMonitorRequest;

ModifyDBInstanceMonitorRequest::ModifyDBInstanceMonitorRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceMonitor")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceMonitorRequest::~ModifyDBInstanceMonitorRequest()
{}

long ModifyDBInstanceMonitorRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceMonitorRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceMonitorRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceMonitorRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceMonitorRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceMonitorRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDBInstanceMonitorRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceMonitorRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceMonitorRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceMonitorRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceMonitorRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceMonitorRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyDBInstanceMonitorRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceMonitorRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceMonitorRequest::getGranularity()const
{
	return granularity_;
}

void ModifyDBInstanceMonitorRequest::setGranularity(const std::string& granularity)
{
	granularity_ = granularity;
	setCoreParameter("Granularity", granularity);
}

