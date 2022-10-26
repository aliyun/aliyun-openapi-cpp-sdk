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

#include <alibabacloud/polardb/model/ModifyDBClusterEndpointRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterEndpointRequest;

ModifyDBClusterEndpointRequest::ModifyDBClusterEndpointRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterEndpointRequest::~ModifyDBClusterEndpointRequest()
{}

std::string ModifyDBClusterEndpointRequest::getAutoAddNewNodes()const
{
	return autoAddNewNodes_;
}

void ModifyDBClusterEndpointRequest::setAutoAddNewNodes(const std::string& autoAddNewNodes)
{
	autoAddNewNodes_ = autoAddNewNodes;
	setParameter("AutoAddNewNodes", autoAddNewNodes);
}

long ModifyDBClusterEndpointRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterEndpointRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterEndpointRequest::getDBEndpointId()const
{
	return dBEndpointId_;
}

void ModifyDBClusterEndpointRequest::setDBEndpointId(const std::string& dBEndpointId)
{
	dBEndpointId_ = dBEndpointId;
	setParameter("DBEndpointId", dBEndpointId);
}

std::string ModifyDBClusterEndpointRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterEndpointRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterEndpointRequest::getReadWriteMode()const
{
	return readWriteMode_;
}

void ModifyDBClusterEndpointRequest::setReadWriteMode(const std::string& readWriteMode)
{
	readWriteMode_ = readWriteMode;
	setParameter("ReadWriteMode", readWriteMode);
}

std::string ModifyDBClusterEndpointRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterEndpointRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterEndpointRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterEndpointRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterEndpointRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterEndpointRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBClusterEndpointRequest::getEndpointConfig()const
{
	return endpointConfig_;
}

void ModifyDBClusterEndpointRequest::setEndpointConfig(const std::string& endpointConfig)
{
	endpointConfig_ = endpointConfig;
	setParameter("EndpointConfig", endpointConfig);
}

std::string ModifyDBClusterEndpointRequest::getDBEndpointDescription()const
{
	return dBEndpointDescription_;
}

void ModifyDBClusterEndpointRequest::setDBEndpointDescription(const std::string& dBEndpointDescription)
{
	dBEndpointDescription_ = dBEndpointDescription;
	setParameter("DBEndpointDescription", dBEndpointDescription);
}

long ModifyDBClusterEndpointRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterEndpointRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterEndpointRequest::getNodes()const
{
	return nodes_;
}

void ModifyDBClusterEndpointRequest::setNodes(const std::string& nodes)
{
	nodes_ = nodes;
	setParameter("Nodes", nodes);
}

