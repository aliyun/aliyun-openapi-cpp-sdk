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

#include <alibabacloud/retailcloud/model/ListDeployConfigRequest.h>

using AlibabaCloud::Retailcloud::Model::ListDeployConfigRequest;

ListDeployConfigRequest::ListDeployConfigRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListDeployConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeployConfigRequest::~ListDeployConfigRequest()
{}

long ListDeployConfigRequest::getAppId()const
{
	return appId_;
}

void ListDeployConfigRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string ListDeployConfigRequest::getEnvType()const
{
	return envType_;
}

void ListDeployConfigRequest::setEnvType(const std::string& envType)
{
	envType_ = envType;
	setParameter("EnvType", envType);
}

std::string ListDeployConfigRequest::getName()const
{
	return name_;
}

void ListDeployConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long ListDeployConfigRequest::getId()const
{
	return id_;
}

void ListDeployConfigRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

