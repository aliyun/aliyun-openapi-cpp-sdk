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

#include <alibabacloud/ens/model/ModifyEnsEipAddressAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyEnsEipAddressAttributeRequest;

ModifyEnsEipAddressAttributeRequest::ModifyEnsEipAddressAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyEnsEipAddressAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEnsEipAddressAttributeRequest::~ModifyEnsEipAddressAttributeRequest() {}

std::string ModifyEnsEipAddressAttributeRequest::getDescription() const {
  return description_;
}

void ModifyEnsEipAddressAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyEnsEipAddressAttributeRequest::getAllocationId() const {
  return allocationId_;
}

void ModifyEnsEipAddressAttributeRequest::setAllocationId(const std::string &allocationId) {
  allocationId_ = allocationId;
  setParameter(std::string("AllocationId"), allocationId);
}

int ModifyEnsEipAddressAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyEnsEipAddressAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifyEnsEipAddressAttributeRequest::getName() const {
  return name_;
}

void ModifyEnsEipAddressAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

