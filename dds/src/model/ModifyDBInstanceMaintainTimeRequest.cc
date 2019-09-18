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

#include <alibabacloud/dds/model/ModifyDBInstanceMaintainTimeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceMaintainTimeRequest;

ModifyDBInstanceMaintainTimeRequest::ModifyDBInstanceMaintainTimeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceMaintainTime")
{}

ModifyDBInstanceMaintainTimeRequest::~ModifyDBInstanceMaintainTimeRequest()
{}

long ModifyDBInstanceMaintainTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceMaintainTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceMaintainTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceMaintainTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceMaintainTimeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceMaintainTimeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDBInstanceMaintainTimeRequest::getMaintainStartTime()const
{
	return maintainStartTime_;
}

void ModifyDBInstanceMaintainTimeRequest::setMaintainStartTime(const std::string& maintainStartTime)
{
	maintainStartTime_ = maintainStartTime;
	setCoreParameter("MaintainStartTime", maintainStartTime);
}

std::string ModifyDBInstanceMaintainTimeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceMaintainTimeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceMaintainTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceMaintainTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceMaintainTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceMaintainTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyDBInstanceMaintainTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceMaintainTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceMaintainTimeRequest::getMaintainEndTime()const
{
	return maintainEndTime_;
}

void ModifyDBInstanceMaintainTimeRequest::setMaintainEndTime(const std::string& maintainEndTime)
{
	maintainEndTime_ = maintainEndTime;
	setCoreParameter("MaintainEndTime", maintainEndTime);
}

