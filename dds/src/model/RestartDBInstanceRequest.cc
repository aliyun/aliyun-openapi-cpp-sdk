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

#include <alibabacloud/dds/model/RestartDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::RestartDBInstanceRequest;

RestartDBInstanceRequest::RestartDBInstanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "RestartDBInstance")
{}

RestartDBInstanceRequest::~RestartDBInstanceRequest()
{}

long RestartDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestartDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RestartDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestartDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RestartDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestartDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestartDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RestartDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RestartDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestartDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RestartDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestartDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long RestartDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestartDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RestartDBInstanceRequest::getNodeId()const
{
	return nodeId_;
}

void RestartDBInstanceRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string RestartDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

