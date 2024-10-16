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

#include <alibabacloud/gwlb/model/MoveResourceGroupRequest.h>

using AlibabaCloud::Gwlb::Model::MoveResourceGroupRequest;

MoveResourceGroupRequest::MoveResourceGroupRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "MoveResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

MoveResourceGroupRequest::~MoveResourceGroupRequest() {}

std::string MoveResourceGroupRequest::getClientToken() const {
  return clientToken_;
}

void MoveResourceGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string MoveResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void MoveResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setBodyParameter(std::string("ResourceId"), resourceId);
}

bool MoveResourceGroupRequest::getDryRun() const {
  return dryRun_;
}

void MoveResourceGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string MoveResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void MoveResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::string MoveResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void MoveResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setBodyParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

