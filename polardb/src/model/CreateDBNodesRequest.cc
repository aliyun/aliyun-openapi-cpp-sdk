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

#include <alibabacloud/polardb/model/CreateDBNodesRequest.h>

using AlibabaCloud::Polardb::Model::CreateDBNodesRequest;

CreateDBNodesRequest::CreateDBNodesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateDBNodes")
{}

CreateDBNodesRequest::~CreateDBNodesRequest()
{}

long CreateDBNodesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDBNodesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDBNodesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDBNodesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDBNodesRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDBNodesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDBNodesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateDBNodesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string CreateDBNodesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDBNodesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateDBNodesRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDBNodesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateDBNodesRequest::DBNode> CreateDBNodesRequest::getDBNode()const
{
	return dBNode_;
}

void CreateDBNodesRequest::setDBNode(const std::vector<DBNode>& dBNode)
{
	dBNode_ = dBNode;
	int i = 0;
	for(int i = 0; i!= dBNode.size(); i++)	{
		auto obj = dBNode.at(i);
		std::string str ="DBNode."+ std::to_string(i);
		setCoreParameter(str + ".TargetClass", obj.targetClass);
		setCoreParameter(str + ".ZoneId", obj.zoneId);
	}
}

std::string CreateDBNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDBNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

