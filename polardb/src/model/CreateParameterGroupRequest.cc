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

#include <alibabacloud/polardb/model/CreateParameterGroupRequest.h>

using AlibabaCloud::Polardb::Model::CreateParameterGroupRequest;

CreateParameterGroupRequest::CreateParameterGroupRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateParameterGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateParameterGroupRequest::~CreateParameterGroupRequest()
{}

long CreateParameterGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateParameterGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateParameterGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateParameterGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateParameterGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateParameterGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateParameterGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateParameterGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateParameterGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateParameterGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateParameterGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateParameterGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateParameterGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateParameterGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateParameterGroupRequest::getDBType()const
{
	return dBType_;
}

void CreateParameterGroupRequest::setDBType(const std::string& dBType)
{
	dBType_ = dBType;
	setParameter("DBType", dBType);
}

std::string CreateParameterGroupRequest::getDBVersion()const
{
	return dBVersion_;
}

void CreateParameterGroupRequest::setDBVersion(const std::string& dBVersion)
{
	dBVersion_ = dBVersion;
	setParameter("DBVersion", dBVersion);
}

std::string CreateParameterGroupRequest::getParameterGroupName()const
{
	return parameterGroupName_;
}

void CreateParameterGroupRequest::setParameterGroupName(const std::string& parameterGroupName)
{
	parameterGroupName_ = parameterGroupName;
	setParameter("ParameterGroupName", parameterGroupName);
}

std::string CreateParameterGroupRequest::getParameters()const
{
	return parameters_;
}

void CreateParameterGroupRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

std::string CreateParameterGroupRequest::getParameterGroupDesc()const
{
	return parameterGroupDesc_;
}

void CreateParameterGroupRequest::setParameterGroupDesc(const std::string& parameterGroupDesc)
{
	parameterGroupDesc_ = parameterGroupDesc;
	setParameter("ParameterGroupDesc", parameterGroupDesc);
}

