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

#include <alibabacloud/oos/model/UpdateParameterRequest.h>

using AlibabaCloud::Oos::Model::UpdateParameterRequest;

UpdateParameterRequest::UpdateParameterRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateParameter") {
  setMethod(HttpRequest::Method::Post);
}

UpdateParameterRequest::~UpdateParameterRequest() {}

std::string UpdateParameterRequest::getDescription() const {
  return description_;
}

void UpdateParameterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateParameterRequest::getTags() const {
  return tags_;
}

void UpdateParameterRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateParameterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateParameterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateParameterRequest::getRegionId() const {
  return regionId_;
}

void UpdateParameterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateParameterRequest::getName() const {
  return name_;
}

void UpdateParameterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateParameterRequest::getValue() const {
  return value_;
}

void UpdateParameterRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

