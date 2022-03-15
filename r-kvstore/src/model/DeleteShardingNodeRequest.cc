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

#include <alibabacloud/r-kvstore/model/DeleteShardingNodeRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteShardingNodeRequest;

DeleteShardingNodeRequest::DeleteShardingNodeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteShardingNode")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteShardingNodeRequest::~DeleteShardingNodeRequest()
{}

long DeleteShardingNodeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteShardingNodeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteShardingNodeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteShardingNodeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteShardingNodeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteShardingNodeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteShardingNodeRequest::getNodeId()const
{
	return nodeId_;
}

void DeleteShardingNodeRequest::setNodeId(const std::string& nodeId)
{
	nodeId_ = nodeId;
	setParameter("NodeId", nodeId);
}

std::string DeleteShardingNodeRequest::getShardCount()const
{
	return shardCount_;
}

void DeleteShardingNodeRequest::setShardCount(const std::string& shardCount)
{
	shardCount_ = shardCount;
	setParameter("ShardCount", shardCount);
}

std::string DeleteShardingNodeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteShardingNodeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteShardingNodeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteShardingNodeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteShardingNodeRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteShardingNodeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteShardingNodeRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteShardingNodeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

