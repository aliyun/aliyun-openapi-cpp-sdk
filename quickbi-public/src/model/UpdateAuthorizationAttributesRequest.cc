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

#include <alibabacloud/quickbi-public/model/UpdateAuthorizationAttributesRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateAuthorizationAttributesRequest;

UpdateAuthorizationAttributesRequest::UpdateAuthorizationAttributesRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateAuthorizationAttributes") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAuthorizationAttributesRequest::~UpdateAuthorizationAttributesRequest() {}

int UpdateAuthorizationAttributesRequest::getUsePermissionType() const {
  return usePermissionType_;
}

void UpdateAuthorizationAttributesRequest::setUsePermissionType(int usePermissionType) {
  usePermissionType_ = usePermissionType;
  setParameter(std::string("UsePermissionType"), std::to_string(usePermissionType));
}

std::string UpdateAuthorizationAttributesRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateAuthorizationAttributesRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateAuthorizationAttributesRequest::getResourceId() const {
  return resourceId_;
}

void UpdateAuthorizationAttributesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string UpdateAuthorizationAttributesRequest::getSignType() const {
  return signType_;
}

void UpdateAuthorizationAttributesRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int UpdateAuthorizationAttributesRequest::getEditPermissionType() const {
  return editPermissionType_;
}

void UpdateAuthorizationAttributesRequest::setEditPermissionType(int editPermissionType) {
  editPermissionType_ = editPermissionType;
  setParameter(std::string("EditPermissionType"), std::to_string(editPermissionType));
}

std::string UpdateAuthorizationAttributesRequest::getResourceType() const {
  return resourceType_;
}

void UpdateAuthorizationAttributesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

