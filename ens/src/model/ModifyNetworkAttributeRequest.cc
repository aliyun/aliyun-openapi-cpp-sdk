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

#include <alibabacloud/ens/model/ModifyNetworkAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyNetworkAttributeRequest;

ModifyNetworkAttributeRequest::ModifyNetworkAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyNetworkAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNetworkAttributeRequest::~ModifyNetworkAttributeRequest() {}

std::string ModifyNetworkAttributeRequest::getDescription() const {
  return description_;
}

void ModifyNetworkAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyNetworkAttributeRequest::getNetworkName() const {
  return networkName_;
}

void ModifyNetworkAttributeRequest::setNetworkName(const std::string &networkName) {
  networkName_ = networkName;
  setParameter(std::string("NetworkName"), networkName);
}

std::string ModifyNetworkAttributeRequest::getNetworkId() const {
  return networkId_;
}

void ModifyNetworkAttributeRequest::setNetworkId(const std::string &networkId) {
  networkId_ = networkId;
  setParameter(std::string("NetworkId"), networkId);
}

