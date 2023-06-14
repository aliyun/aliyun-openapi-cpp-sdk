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

#include <alibabacloud/ga/model/ChangeResourceGroupRequest.h>

using AlibabaCloud::Ga::Model::ChangeResourceGroupRequest;

ChangeResourceGroupRequest::ChangeResourceGroupRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ChangeResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ChangeResourceGroupRequest::~ChangeResourceGroupRequest() {}

std::string ChangeResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void ChangeResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ChangeResourceGroupRequest::getClientToken() const {
  return clientToken_;
}

void ChangeResourceGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ChangeResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void ChangeResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ChangeResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void ChangeResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

std::string ChangeResourceGroupRequest::getRegionId() const {
  return regionId_;
}

void ChangeResourceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

