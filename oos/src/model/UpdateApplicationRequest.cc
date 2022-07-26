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

#include <alibabacloud/oos/model/UpdateApplicationRequest.h>

using AlibabaCloud::Oos::Model::UpdateApplicationRequest;

UpdateApplicationRequest::UpdateApplicationRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateApplication") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationRequest::~UpdateApplicationRequest() {}

std::string UpdateApplicationRequest::getDescription() const {
  return description_;
}

void UpdateApplicationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::map<std::string, std::string> UpdateApplicationRequest::getTags() const {
  return tags_;
}

void UpdateApplicationRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::string UpdateApplicationRequest::getRegionId() const {
  return regionId_;
}

void UpdateApplicationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateApplicationRequest::getName() const {
  return name_;
}

void UpdateApplicationRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

