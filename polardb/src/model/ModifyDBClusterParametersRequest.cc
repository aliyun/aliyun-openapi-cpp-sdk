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

#include <alibabacloud/polardb/model/ModifyDBClusterParametersRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterParametersRequest;

ModifyDBClusterParametersRequest::ModifyDBClusterParametersRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterParameters")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterParametersRequest::~ModifyDBClusterParametersRequest()
{}

long ModifyDBClusterParametersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterParametersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterParametersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterParametersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterParametersRequest::getParameterGroupId()const
{
	return parameterGroupId_;
}

void ModifyDBClusterParametersRequest::setParameterGroupId(const std::string& parameterGroupId)
{
	parameterGroupId_ = parameterGroupId;
	setParameter("ParameterGroupId", parameterGroupId);
}

std::string ModifyDBClusterParametersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterParametersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterParametersRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterParametersRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterParametersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterParametersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDBClusterParametersRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterParametersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterParametersRequest::getParameters()const
{
	return parameters_;
}

void ModifyDBClusterParametersRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

