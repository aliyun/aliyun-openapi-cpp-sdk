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

#include <alibabacloud/dds/model/ModifyDBInstanceConnectionStringRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceConnectionStringRequest;

ModifyDBInstanceConnectionStringRequest::ModifyDBInstanceConnectionStringRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceConnectionString")
{}

ModifyDBInstanceConnectionStringRequest::~ModifyDBInstanceConnectionStringRequest()
{}

long ModifyDBInstanceConnectionStringRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceConnectionStringRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyDBInstanceConnectionStringRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceConnectionStringRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyDBInstanceConnectionStringRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceConnectionStringRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyDBInstanceConnectionStringRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBInstanceConnectionStringRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyDBInstanceConnectionStringRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceConnectionStringRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyDBInstanceConnectionStringRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceConnectionStringRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string ModifyDBInstanceConnectionStringRequest::getNewConnectionString()const
{
	return newConnectionString_;
}

void ModifyDBInstanceConnectionStringRequest::setNewConnectionString(const std::string& newConnectionString)
{
	newConnectionString_ = newConnectionString;
	setCoreParameter("NewConnectionString", std::to_string(newConnectionString));
}

long ModifyDBInstanceConnectionStringRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceConnectionStringRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyDBInstanceConnectionStringRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyDBInstanceConnectionStringRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", std::to_string(nodeId));
}

std::string ModifyDBInstanceConnectionStringRequest::getCurrentConnectionString()const
{
	return currentConnectionString_;
}

void ModifyDBInstanceConnectionStringRequest::setCurrentConnectionString(const std::string& currentConnectionString)
{
	currentConnectionString_ = currentConnectionString;
	setCoreParameter("CurrentConnectionString", std::to_string(currentConnectionString));
}

std::string ModifyDBInstanceConnectionStringRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceConnectionStringRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

