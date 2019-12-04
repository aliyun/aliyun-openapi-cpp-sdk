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

#include <alibabacloud/rds/model/CreateParameterGroupRequest.h>

using AlibabaCloud::Rds::Model::CreateParameterGroupRequest;

CreateParameterGroupRequest::CreateParameterGroupRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateParameterGroup")
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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateParameterGroupRequest::getEngineVersion()const
{
	return engineVersion_;
}

void CreateParameterGroupRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string CreateParameterGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateParameterGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateParameterGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateParameterGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateParameterGroupRequest::getEngine()const
{
	return engine_;
}

void CreateParameterGroupRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string CreateParameterGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateParameterGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateParameterGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateParameterGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateParameterGroupRequest::getParameterGroupName()const
{
	return parameterGroupName_;
}

void CreateParameterGroupRequest::setParameterGroupName(const std::string& parameterGroupName)
{
	parameterGroupName_ = parameterGroupName;
	setCoreParameter("ParameterGroupName", parameterGroupName);
}

std::string CreateParameterGroupRequest::getParameters()const
{
	return parameters_;
}

void CreateParameterGroupRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setCoreParameter("Parameters", parameters);
}

std::string CreateParameterGroupRequest::getParameterGroupDesc()const
{
	return parameterGroupDesc_;
}

void CreateParameterGroupRequest::setParameterGroupDesc(const std::string& parameterGroupDesc)
{
	parameterGroupDesc_ = parameterGroupDesc;
	setCoreParameter("ParameterGroupDesc", parameterGroupDesc);
}

