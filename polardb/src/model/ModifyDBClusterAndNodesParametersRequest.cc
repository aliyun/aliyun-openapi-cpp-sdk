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

#include <alibabacloud/polardb/model/ModifyDBClusterAndNodesParametersRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterAndNodesParametersRequest;

ModifyDBClusterAndNodesParametersRequest::ModifyDBClusterAndNodesParametersRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterAndNodesParameters")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterAndNodesParametersRequest::~ModifyDBClusterAndNodesParametersRequest()
{}

long ModifyDBClusterAndNodesParametersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterAndNodesParametersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterAndNodesParametersRequest::getDBNodeIds()const
{
	return dBNodeIds_;
}

void ModifyDBClusterAndNodesParametersRequest::setDBNodeIds(const std::string& dBNodeIds)
{
	dBNodeIds_ = dBNodeIds;
	setParameter("DBNodeIds", dBNodeIds);
}

std::string ModifyDBClusterAndNodesParametersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterAndNodesParametersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterAndNodesParametersRequest::getParameterGroupId()const
{
	return parameterGroupId_;
}

void ModifyDBClusterAndNodesParametersRequest::setParameterGroupId(const std::string& parameterGroupId)
{
	parameterGroupId_ = parameterGroupId;
	setParameter("ParameterGroupId", parameterGroupId);
}

std::string ModifyDBClusterAndNodesParametersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterAndNodesParametersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterAndNodesParametersRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterAndNodesParametersRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterAndNodesParametersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterAndNodesParametersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterAndNodesParametersRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterAndNodesParametersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterAndNodesParametersRequest::getParameters()const
{
	return parameters_;
}

void ModifyDBClusterAndNodesParametersRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

