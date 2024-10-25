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

#include <alibabacloud/ens/model/ModifyNetworkInterfaceAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyNetworkInterfaceAttributeRequest;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyNetworkInterfaceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNetworkInterfaceAttributeRequest::~ModifyNetworkInterfaceAttributeRequest() {}

std::string ModifyNetworkInterfaceAttributeRequest::getDescription() const {
  return description_;
}

void ModifyNetworkInterfaceAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceName() const {
  return networkInterfaceName_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceName(const std::string &networkInterfaceName) {
  networkInterfaceName_ = networkInterfaceName;
  setParameter(std::string("NetworkInterfaceName"), networkInterfaceName);
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceId() const {
  return networkInterfaceId_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceId(const std::string &networkInterfaceId) {
  networkInterfaceId_ = networkInterfaceId;
  setParameter(std::string("NetworkInterfaceId"), networkInterfaceId);
}

