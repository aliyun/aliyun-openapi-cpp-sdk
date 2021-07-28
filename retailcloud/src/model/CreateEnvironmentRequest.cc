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

#include <alibabacloud/retailcloud/model/CreateEnvironmentRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateEnvironmentRequest;

CreateEnvironmentRequest::CreateEnvironmentRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateEnvironment")
{
	setMethod(HttpRequest::Method::Post);
}

CreateEnvironmentRequest::~CreateEnvironmentRequest()
{}

std::string CreateEnvironmentRequest::getEnvName()const
{
	return envName_;
}

void CreateEnvironmentRequest::setEnvName(const std::string& envName)
{
	envName_ = envName;
	setParameter("EnvName", envName);
}

int CreateEnvironmentRequest::getReplicas()const
{
	return replicas_;
}

void CreateEnvironmentRequest::setReplicas(int replicas)
{
	replicas_ = replicas;
	setParameter("Replicas", std::to_string(replicas));
}

long CreateEnvironmentRequest::getAppId()const
{
	return appId_;
}

void CreateEnvironmentRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

int CreateEnvironmentRequest::getEnvType()const
{
	return envType_;
}

void CreateEnvironmentRequest::setEnvType(int envType)
{
	envType_ = envType;
	setParameter("EnvType", std::to_string(envType));
}

long CreateEnvironmentRequest::getAppSchemaId()const
{
	return appSchemaId_;
}

void CreateEnvironmentRequest::setAppSchemaId(long appSchemaId)
{
	appSchemaId_ = appSchemaId;
	setParameter("AppSchemaId", std::to_string(appSchemaId));
}

std::string CreateEnvironmentRequest::getClusterId()const
{
	return clusterId_;
}

void CreateEnvironmentRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string CreateEnvironmentRequest::getRegion()const
{
	return region_;
}

void CreateEnvironmentRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

