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

#include <alibabacloud/polardb/model/ModifyDBNodesParametersRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodesParametersRequest;

ModifyDBNodesParametersRequest::ModifyDBNodesParametersRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodesParameters")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBNodesParametersRequest::~ModifyDBNodesParametersRequest()
{}

long ModifyDBNodesParametersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBNodesParametersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBNodesParametersRequest::getDBNodeIds()const
{
	return dBNodeIds_;
}

void ModifyDBNodesParametersRequest::setDBNodeIds(const std::string& dBNodeIds)
{
	dBNodeIds_ = dBNodeIds;
	setParameter("DBNodeIds", dBNodeIds);
}

std::string ModifyDBNodesParametersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBNodesParametersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBNodesParametersRequest::getParameterGroupId()const
{
	return parameterGroupId_;
}

void ModifyDBNodesParametersRequest::setParameterGroupId(const std::string& parameterGroupId)
{
	parameterGroupId_ = parameterGroupId;
	setParameter("ParameterGroupId", parameterGroupId);
}

std::string ModifyDBNodesParametersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBNodesParametersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBNodesParametersRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBNodesParametersRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBNodesParametersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBNodesParametersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBNodesParametersRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBNodesParametersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBNodesParametersRequest::getParameters()const
{
	return parameters_;
}

void ModifyDBNodesParametersRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

