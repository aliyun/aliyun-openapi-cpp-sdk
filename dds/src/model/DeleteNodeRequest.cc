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

#include <alibabacloud/dds/model/DeleteNodeRequest.h>

using AlibabaCloud::Dds::Model::DeleteNodeRequest;

DeleteNodeRequest::DeleteNodeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DeleteNode")
{}

DeleteNodeRequest::~DeleteNodeRequest()
{}

long DeleteNodeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNodeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteNodeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteNodeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteNodeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNodeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNodeRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNodeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteNodeRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteNodeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteNodeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteNodeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteNodeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DeleteNodeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DeleteNodeRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNodeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteNodeRequest::getNodeId()const
{
	return nodeId_;
}

void DeleteNodeRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setCoreParameter("NodeId", nodeId);
}

std::string DeleteNodeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNodeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

