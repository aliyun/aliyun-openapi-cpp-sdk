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

#include <alibabacloud/resourcesharing/model/DisassociateResourceShareRequest.h>

using AlibabaCloud::ResourceSharing::Model::DisassociateResourceShareRequest;

DisassociateResourceShareRequest::DisassociateResourceShareRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "DisassociateResourceShare") {
  setMethod(HttpRequest::Method::Post);
}

DisassociateResourceShareRequest::~DisassociateResourceShareRequest() {}

std::string DisassociateResourceShareRequest::getResourceOwner() const {
  return resourceOwner_;
}

void DisassociateResourceShareRequest::setResourceOwner(const std::string &resourceOwner) {
  resourceOwner_ = resourceOwner;
  setParameter(std::string("ResourceOwner"), resourceOwner);
}

std::vector<DisassociateResourceShareRequest::Resources> DisassociateResourceShareRequest::getResources() const {
  return resources_;
}

void DisassociateResourceShareRequest::setResources(const std::vector<DisassociateResourceShareRequest::Resources> &resources) {
  resources_ = resources;
  for(int dep1 = 0; dep1 != resources.size(); dep1++) {
  auto resourcesObj = resources.at(dep1);
  std::string resourcesObjStr = std::string("Resources") + "." + std::to_string(dep1 + 1);
    setParameter(resourcesObjStr + ".ResourceId", resourcesObj.resourceId);
    setParameter(resourcesObjStr + ".ResourceType", resourcesObj.resourceType);
  }
}

std::vector<std::string> DisassociateResourceShareRequest::getTargets() const {
  return targets_;
}

void DisassociateResourceShareRequest::setTargets(const std::vector<std::string> &targets) {
  targets_ = targets;
}

std::string DisassociateResourceShareRequest::getResourceShareId() const {
  return resourceShareId_;
}

void DisassociateResourceShareRequest::setResourceShareId(const std::string &resourceShareId) {
  resourceShareId_ = resourceShareId;
  setParameter(std::string("ResourceShareId"), resourceShareId);
}

