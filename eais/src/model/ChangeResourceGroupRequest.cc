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

#include <alibabacloud/eais/model/ChangeResourceGroupRequest.h>

using AlibabaCloud::Eais::Model::ChangeResourceGroupRequest;

ChangeResourceGroupRequest::ChangeResourceGroupRequest()
    : RpcServiceRequest("eais", "2019-06-24", "ChangeResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ChangeResourceGroupRequest::~ChangeResourceGroupRequest() {}

std::string ChangeResourceGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ChangeResourceGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ChangeResourceGroupRequest::getResourceRegionId() const {
  return resourceRegionId_;
}

void ChangeResourceGroupRequest::setResourceRegionId(const std::string &resourceRegionId) {
  resourceRegionId_ = resourceRegionId;
  setParameter(std::string("ResourceRegionId"), resourceRegionId);
}

std::string ChangeResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void ChangeResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ChangeResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void ChangeResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ChangeResourceGroupRequest::getService() const {
  return service_;
}

void ChangeResourceGroupRequest::setService(const std::string &service) {
  service_ = service;
  setParameter(std::string("Service"), service);
}

