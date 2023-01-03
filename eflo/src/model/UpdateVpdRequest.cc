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

#include <alibabacloud/eflo/model/UpdateVpdRequest.h>

using AlibabaCloud::Eflo::Model::UpdateVpdRequest;

UpdateVpdRequest::UpdateVpdRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UpdateVpd") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpdRequest::~UpdateVpdRequest() {}

std::string UpdateVpdRequest::getDescription() const {
  return description_;
}

void UpdateVpdRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateVpdRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateVpdRequest::getVpdId() const {
  return vpdId_;
}

void UpdateVpdRequest::setVpdId(const std::string &vpdId) {
  vpdId_ = vpdId;
  setBodyParameter(std::string("VpdId"), vpdId);
}

std::string UpdateVpdRequest::getName() const {
  return name_;
}

void UpdateVpdRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

