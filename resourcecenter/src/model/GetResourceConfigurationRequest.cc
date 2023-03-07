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

#include <alibabacloud/resourcecenter/model/GetResourceConfigurationRequest.h>

using AlibabaCloud::ResourceCenter::Model::GetResourceConfigurationRequest;

GetResourceConfigurationRequest::GetResourceConfigurationRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "GetResourceConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

GetResourceConfigurationRequest::~GetResourceConfigurationRequest() {}

std::string GetResourceConfigurationRequest::getResourceId() const {
  return resourceId_;
}

void GetResourceConfigurationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string GetResourceConfigurationRequest::getResourceType() const {
  return resourceType_;
}

void GetResourceConfigurationRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string GetResourceConfigurationRequest::getResourceRegionId() const {
  return resourceRegionId_;
}

void GetResourceConfigurationRequest::setResourceRegionId(const std::string &resourceRegionId) {
  resourceRegionId_ = resourceRegionId;
  setParameter(std::string("ResourceRegionId"), resourceRegionId);
}

