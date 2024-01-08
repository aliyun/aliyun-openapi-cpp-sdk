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

#include <alibabacloud/resourcesharing/model/AssociateResourceShareRequest.h>

using AlibabaCloud::ResourceSharing::Model::AssociateResourceShareRequest;

AssociateResourceShareRequest::AssociateResourceShareRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "AssociateResourceShare") {
  setMethod(HttpRequest::Method::Post);
}

AssociateResourceShareRequest::~AssociateResourceShareRequest() {}

std::vector<AssociateResourceShareRequest::Resources> AssociateResourceShareRequest::getResources() const {
  return resources_;
}

void AssociateResourceShareRequest::setResources(const std::vector<AssociateResourceShareRequest::Resources> &resources) {
  resources_ = resources;
  for(int dep1 = 0; dep1 != resources.size(); dep1++) {
  auto resourcesObj = resources.at(dep1);
  std::string resourcesObjStr = std::string("Resources") + "." + std::to_string(dep1 + 1);
    setParameter(resourcesObjStr + ".ResourceId", resourcesObj.resourceId);
    setParameter(resourcesObjStr + ".ResourceType", resourcesObj.resourceType);
  }
}

std::vector<std::string> AssociateResourceShareRequest::getTargets() const {
  return targets_;
}

void AssociateResourceShareRequest::setTargets(const std::vector<std::string> &targets) {
  targets_ = targets;
}

std::string AssociateResourceShareRequest::getResourceShareId() const {
  return resourceShareId_;
}

void AssociateResourceShareRequest::setResourceShareId(const std::string &resourceShareId) {
  resourceShareId_ = resourceShareId;
  setParameter(std::string("ResourceShareId"), resourceShareId);
}

std::vector<std::string> AssociateResourceShareRequest::getPermissionNames() const {
  return permissionNames_;
}

void AssociateResourceShareRequest::setPermissionNames(const std::vector<std::string> &permissionNames) {
  permissionNames_ = permissionNames;
}

std::vector<AssociateResourceShareRequest::TargetProperties> AssociateResourceShareRequest::getTargetProperties() const {
  return targetProperties_;
}

void AssociateResourceShareRequest::setTargetProperties(const std::vector<AssociateResourceShareRequest::TargetProperties> &targetProperties) {
  targetProperties_ = targetProperties;
  for(int dep1 = 0; dep1 != targetProperties.size(); dep1++) {
    setParameter(std::string("TargetProperties") + "." + std::to_string(dep1 + 1) + ".TargetId", targetProperties[dep1].targetId);
    setParameter(std::string("TargetProperties") + "." + std::to_string(dep1 + 1) + ".Property", targetProperties[dep1].property);
  }
}

