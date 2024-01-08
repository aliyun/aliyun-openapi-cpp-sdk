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

#include <alibabacloud/resourcesharing/model/UpdateResourceShareRequest.h>

using AlibabaCloud::ResourceSharing::Model::UpdateResourceShareRequest;

UpdateResourceShareRequest::UpdateResourceShareRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "UpdateResourceShare") {
  setMethod(HttpRequest::Method::Post);
}

UpdateResourceShareRequest::~UpdateResourceShareRequest() {}

std::string UpdateResourceShareRequest::getResourceShareName() const {
  return resourceShareName_;
}

void UpdateResourceShareRequest::setResourceShareName(const std::string &resourceShareName) {
  resourceShareName_ = resourceShareName;
  setParameter(std::string("ResourceShareName"), resourceShareName);
}

std::string UpdateResourceShareRequest::getResourceShareId() const {
  return resourceShareId_;
}

void UpdateResourceShareRequest::setResourceShareId(const std::string &resourceShareId) {
  resourceShareId_ = resourceShareId;
  setParameter(std::string("ResourceShareId"), resourceShareId);
}

bool UpdateResourceShareRequest::getAllowExternalTargets() const {
  return allowExternalTargets_;
}

void UpdateResourceShareRequest::setAllowExternalTargets(bool allowExternalTargets) {
  allowExternalTargets_ = allowExternalTargets;
  setParameter(std::string("AllowExternalTargets"), allowExternalTargets ? "true" : "false");
}

