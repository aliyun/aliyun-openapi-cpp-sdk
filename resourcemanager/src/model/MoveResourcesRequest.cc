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

MoveResourcesRequest::MoveResourcesRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "MoveResources") {
  setMethod(HttpRequest::Method::Post);
}

MoveResourcesRequest::~MoveResourcesRequest() {}

std::vector<MoveResourcesRequest::Resources> MoveResourcesRequest::getResources() const {
  return resources_;
}

void MoveResourcesRequest::setResources(const std::vector<MoveResourcesRequest::Resources> &resources) {
  resources_ = resources;
  for(int dep1 = 0; dep1 != resources.size(); dep1++) {
    setParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceId", resources[dep1].resourceId);
    setParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".RegionId", resources[dep1].regionId);
    setParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".Service", resources[dep1].service);
    setParameter(std::string("Resources") + "." + std::to_string(dep1 + 1) + ".ResourceType", resources[dep1].resourceType);
  }
}

std::string MoveResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void MoveResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

