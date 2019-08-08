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

#include <alibabacloud/dds/model/ModifyDBInstanceDescriptionRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceDescriptionRequest;

ModifyDBInstanceDescriptionRequest::ModifyDBInstanceDescriptionRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceDescription")
{}

ModifyDBInstanceDescriptionRequest::~ModifyDBInstanceDescriptionRequest()
{}

long ModifyDBInstanceDescriptionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceDescriptionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceDescriptionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceDescriptionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDBInstanceDescriptionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceDescriptionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceDescriptionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBInstanceDescriptionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDBInstanceDescriptionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceDescriptionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceDescriptionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceDescriptionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceDescriptionRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void ModifyDBInstanceDescriptionRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

long ModifyDBInstanceDescriptionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceDescriptionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceDescriptionRequest::getNodeId()const
{
	return nodeId_;
}

void ModifyDBInstanceDescriptionRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string ModifyDBInstanceDescriptionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceDescriptionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

