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

#include <alibabacloud/resourcesharing/model/CreateResourceShareRequest.h>

using AlibabaCloud::ResourceSharing::Model::CreateResourceShareRequest;

CreateResourceShareRequest::CreateResourceShareRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "CreateResourceShare") {
  setMethod(HttpRequest::Method::Post);
}

CreateResourceShareRequest::~CreateResourceShareRequest() {}

std::string CreateResourceShareRequest::getResourceShareName() const {
  return resourceShareName_;
}

void CreateResourceShareRequest::setResourceShareName(const std::string &resourceShareName) {
  resourceShareName_ = resourceShareName;
  setParameter(std::string("ResourceShareName"), resourceShareName);
}

std::vector<std::string> CreateResourceShareRequest::getTargets() const {
  return targets_;
}

void CreateResourceShareRequest::setTargets(const std::vector<std::string> &targets) {
  targets_ = targets;
}

std::string CreateResourceShareRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateResourceShareRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<CreateResourceShareRequest::Resources> CreateResourceShareRequest::getResources() const {
  return resources_;
}

void CreateResourceShareRequest::setResources(const std::vector<CreateResourceShareRequest::Resources> &resources) {
  resources_ = resources;
  for(int dep1 = 0; dep1 != resources.size(); dep1++) {
  auto resourcesObj = resources.at(dep1);
  std::string resourcesObjStr = std::string("Resources") + "." + std::to_string(dep1 + 1);
    setParameter(resourcesObjStr + ".ResourceId", resourcesObj.resourceId);
    setParameter(resourcesObjStr + ".ResourceType", resourcesObj.resourceType);
  }
}

bool CreateResourceShareRequest::getAllowExternalTargets() const {
  return allowExternalTargets_;
}

void CreateResourceShareRequest::setAllowExternalTargets(bool allowExternalTargets) {
  allowExternalTargets_ = allowExternalTargets;
  setParameter(std::string("AllowExternalTargets"), allowExternalTargets ? "true" : "false");
}

std::vector<std::string> CreateResourceShareRequest::getPermissionNames() const {
  return permissionNames_;
}

void CreateResourceShareRequest::setPermissionNames(const std::vector<std::string> &permissionNames) {
  permissionNames_ = permissionNames;
}

std::vector<CreateResourceShareRequest::TargetProperties> CreateResourceShareRequest::getTargetProperties() const {
  return targetProperties_;
}

void CreateResourceShareRequest::setTargetProperties(const std::vector<CreateResourceShareRequest::TargetProperties> &targetProperties) {
  targetProperties_ = targetProperties;
  for(int dep1 = 0; dep1 != targetProperties.size(); dep1++) {
    setParameter(std::string("TargetProperties") + "." + std::to_string(dep1 + 1) + ".TargetId", targetProperties[dep1].targetId);
    setParameter(std::string("TargetProperties") + "." + std::to_string(dep1 + 1) + ".Property", targetProperties[dep1].property);
  }
}

