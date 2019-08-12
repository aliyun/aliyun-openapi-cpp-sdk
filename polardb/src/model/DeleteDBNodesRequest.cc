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

#include <alibabacloud/polardb/model/DeleteDBNodesRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDBNodesRequest;

DeleteDBNodesRequest::DeleteDBNodesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DeleteDBNodes")
{}

DeleteDBNodesRequest::~DeleteDBNodesRequest()
{}

long DeleteDBNodesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDBNodesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::vector<std::string> DeleteDBNodesRequest::getDBNodeId()const
{
	return dBNodeId_;
}

void DeleteDBNodesRequest::setDBNodeId(const std::vector<std::string>& dBNodeId)
{
	dBNodeId_ = dBNodeId;
	for(int i = 0; i!= dBNodeId.size(); i++)
		setCoreParameter("DBNodeId."+ std::to_string(i), std::to_string(dBNodeId.at(i)));
}

std::string DeleteDBNodesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDBNodesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDBNodesRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteDBNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteDBNodesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DeleteDBNodesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DeleteDBNodesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDBNodesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteDBNodesRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDBNodesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteDBNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDBNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

