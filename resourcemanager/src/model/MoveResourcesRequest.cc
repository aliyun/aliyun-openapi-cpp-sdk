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

#include <alibabacloud/resourcemanager/model/MoveResourcesRequest.h>

using AlibabaCloud::ResourceManager::Model::MoveResourcesRequest;

MoveResourcesRequest::MoveResourcesRequest() :
	RpcServiceRequest("resourcemanager", "2020-03-31", "MoveResources")
{
	setMethod(HttpRequest::Method::Post);
}

MoveResourcesRequest::~MoveResourcesRequest()
{}

Array MoveResourcesRequest::getResources()const
{
	return resources_;
}

void MoveResourcesRequest::setResources(const Array& resources)
{
	resources_ = resources;
	setParameter("Resources", std::to_string(resources));
}

std::string MoveResourcesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void MoveResourcesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

