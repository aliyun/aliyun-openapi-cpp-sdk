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

#include <alibabacloud/eflo/model/UpdateErRequest.h>

using AlibabaCloud::Eflo::Model::UpdateErRequest;

UpdateErRequest::UpdateErRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "UpdateEr") {
  setMethod(HttpRequest::Method::Post);
}

UpdateErRequest::~UpdateErRequest() {}

std::string UpdateErRequest::getErId() const {
  return erId_;
}

void UpdateErRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

std::string UpdateErRequest::getDescription() const {
  return description_;
}

void UpdateErRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateErRequest::getErName() const {
  return erName_;
}

void UpdateErRequest::setErName(const std::string &erName) {
  erName_ = erName;
  setBodyParameter(std::string("ErName"), erName);
}

std::string UpdateErRequest::getRegionId() const {
  return regionId_;
}

void UpdateErRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

