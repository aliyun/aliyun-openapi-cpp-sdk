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

#include <alibabacloud/polardb/model/FailoverDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::FailoverDBClusterRequest;

FailoverDBClusterRequest::FailoverDBClusterRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "FailoverDBCluster")
{}

FailoverDBClusterRequest::~FailoverDBClusterRequest()
{}

long FailoverDBClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void FailoverDBClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string FailoverDBClusterRequest::getClientToken()const
{
	return clientToken_;
}

void FailoverDBClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string FailoverDBClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void FailoverDBClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string FailoverDBClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void FailoverDBClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string FailoverDBClusterRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void FailoverDBClusterRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string FailoverDBClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void FailoverDBClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long FailoverDBClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void FailoverDBClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string FailoverDBClusterRequest::getTargetDBNodeId()const
{
	return targetDBNodeId_;
}

void FailoverDBClusterRequest::setTargetDBNodeId(const std::string& targetDBNodeId)
{
	targetDBNodeId_ = targetDBNodeId;
	setCoreParameter("TargetDBNodeId", targetDBNodeId);
}

