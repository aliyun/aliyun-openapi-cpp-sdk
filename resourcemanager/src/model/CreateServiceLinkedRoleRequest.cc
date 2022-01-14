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

#include <alibabacloud/resourcemanager/model/CreateServiceLinkedRoleRequest.h>

using AlibabaCloud::ResourceManager::Model::CreateServiceLinkedRoleRequest;

CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "CreateServiceLinkedRole") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceLinkedRoleRequest::~CreateServiceLinkedRoleRequest() {}

std::string CreateServiceLinkedRoleRequest::getCustomSuffix() const {
  return customSuffix_;
}

void CreateServiceLinkedRoleRequest::setCustomSuffix(const std::string &customSuffix) {
  customSuffix_ = customSuffix;
  setParameter(std::string("CustomSuffix"), customSuffix);
}

std::string CreateServiceLinkedRoleRequest::getDescription() const {
  return description_;
}

void CreateServiceLinkedRoleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateServiceLinkedRoleRequest::getServiceName() const {
  return serviceName_;
}

void CreateServiceLinkedRoleRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

