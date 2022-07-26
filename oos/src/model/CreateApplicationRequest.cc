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

#include <alibabacloud/oos/model/CreateApplicationRequest.h>

using AlibabaCloud::Oos::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest()
    : RpcServiceRequest("oos", "2019-06-01", "CreateApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest() {}

std::string CreateApplicationRequest::getClientToken() const {
  return clientToken_;
}

void CreateApplicationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateApplicationRequest::getDescription() const {
  return description_;
}

void CreateApplicationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateApplicationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateApplicationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateApplicationRequest::getRegionId() const {
  return regionId_;
}

void CreateApplicationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateApplicationRequest::getTags() const {
  return tags_;
}

void CreateApplicationRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateApplicationRequest::getName() const {
  return name_;
}

void CreateApplicationRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

