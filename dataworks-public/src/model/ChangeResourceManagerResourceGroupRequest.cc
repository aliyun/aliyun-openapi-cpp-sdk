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

#include <alibabacloud/dataworks-public/model/ChangeResourceManagerResourceGroupRequest.h>

using AlibabaCloud::Dataworks_public::Model::ChangeResourceManagerResourceGroupRequest;

ChangeResourceManagerResourceGroupRequest::ChangeResourceManagerResourceGroupRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ChangeResourceManagerResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ChangeResourceManagerResourceGroupRequest::~ChangeResourceManagerResourceGroupRequest() {}

std::string ChangeResourceManagerResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void ChangeResourceManagerResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ChangeResourceManagerResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void ChangeResourceManagerResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ChangeResourceManagerResourceGroupRequest::getResourceManagerResourceGroupId() const {
  return resourceManagerResourceGroupId_;
}

void ChangeResourceManagerResourceGroupRequest::setResourceManagerResourceGroupId(const std::string &resourceManagerResourceGroupId) {
  resourceManagerResourceGroupId_ = resourceManagerResourceGroupId;
  setParameter(std::string("ResourceManagerResourceGroupId"), resourceManagerResourceGroupId);
}

