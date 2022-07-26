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

#include <alibabacloud/oos/model/UpdateSecretParameterRequest.h>

using AlibabaCloud::Oos::Model::UpdateSecretParameterRequest;

UpdateSecretParameterRequest::UpdateSecretParameterRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateSecretParameter") {
  setMethod(HttpRequest::Method::Post);
}

UpdateSecretParameterRequest::~UpdateSecretParameterRequest() {}

std::string UpdateSecretParameterRequest::getDescription() const {
  return description_;
}

void UpdateSecretParameterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateSecretParameterRequest::getTags() const {
  return tags_;
}

void UpdateSecretParameterRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateSecretParameterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateSecretParameterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateSecretParameterRequest::getRegionId() const {
  return regionId_;
}

void UpdateSecretParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateSecretParameterRequest::getName() const {
  return name_;
}

void UpdateSecretParameterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateSecretParameterRequest::getValue() const {
  return value_;
}

void UpdateSecretParameterRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

