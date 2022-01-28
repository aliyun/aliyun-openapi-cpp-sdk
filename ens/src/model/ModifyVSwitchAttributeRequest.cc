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

#include <alibabacloud/ens/model/ModifyVSwitchAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyVSwitchAttributeRequest;

ModifyVSwitchAttributeRequest::ModifyVSwitchAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyVSwitchAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVSwitchAttributeRequest::~ModifyVSwitchAttributeRequest() {}

std::string ModifyVSwitchAttributeRequest::getDescription() const {
  return description_;
}

void ModifyVSwitchAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyVSwitchAttributeRequest::getVSwitchId() const {
  return vSwitchId_;
}

void ModifyVSwitchAttributeRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string ModifyVSwitchAttributeRequest::getVSwitchName() const {
  return vSwitchName_;
}

void ModifyVSwitchAttributeRequest::setVSwitchName(const std::string &vSwitchName) {
  vSwitchName_ = vSwitchName;
  setParameter(std::string("VSwitchName"), vSwitchName);
}

