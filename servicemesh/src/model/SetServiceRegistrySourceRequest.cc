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

#include <alibabacloud/servicemesh/model/SetServiceRegistrySourceRequest.h>

using AlibabaCloud::Servicemesh::Model::SetServiceRegistrySourceRequest;

SetServiceRegistrySourceRequest::SetServiceRegistrySourceRequest() :
	RpcServiceRequest("servicemesh", "2020-01-11", "SetServiceRegistrySource")
{
	setMethod(HttpRequest::Method::Post);
}

SetServiceRegistrySourceRequest::~SetServiceRegistrySourceRequest()
{}

std::string SetServiceRegistrySourceRequest::getServiceMeshId()const
{
	return serviceMeshId_;
}

void SetServiceRegistrySourceRequest::setServiceMeshId(const std::string& serviceMeshId)
{
	serviceMeshId_ = serviceMeshId;
	setBodyParameter("ServiceMeshId", serviceMeshId);
}

std::string SetServiceRegistrySourceRequest::getConfig()const
{
	return config_;
}

void SetServiceRegistrySourceRequest::setConfig(const std::string& config)
{
	config_ = config;
	setBodyParameter("Config", config);
}

