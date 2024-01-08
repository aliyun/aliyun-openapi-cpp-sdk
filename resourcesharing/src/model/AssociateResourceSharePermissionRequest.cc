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

#include <alibabacloud/resourcesharing/model/AssociateResourceSharePermissionRequest.h>

using AlibabaCloud::ResourceSharing::Model::AssociateResourceSharePermissionRequest;

AssociateResourceSharePermissionRequest::AssociateResourceSharePermissionRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "AssociateResourceSharePermission") {
  setMethod(HttpRequest::Method::Post);
}

AssociateResourceSharePermissionRequest::~AssociateResourceSharePermissionRequest() {}

bool AssociateResourceSharePermissionRequest::getReplace() const {
  return replace_;
}

void AssociateResourceSharePermissionRequest::setReplace(bool replace) {
  replace_ = replace;
  setParameter(std::string("Replace"), replace ? "true" : "false");
}

std::string AssociateResourceSharePermissionRequest::getPermissionName() const {
  return permissionName_;
}

void AssociateResourceSharePermissionRequest::setPermissionName(const std::string &permissionName) {
  permissionName_ = permissionName;
  setParameter(std::string("PermissionName"), permissionName);
}

std::string AssociateResourceSharePermissionRequest::getResourceShareId() const {
  return resourceShareId_;
}

void AssociateResourceSharePermissionRequest::setResourceShareId(const std::string &resourceShareId) {
  resourceShareId_ = resourceShareId;
  setParameter(std::string("ResourceShareId"), resourceShareId);
}

