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

#include <alibabacloud/ecd/model/ModifyNetworkPackageEnabledRequest.h>

using AlibabaCloud::Ecd::Model::ModifyNetworkPackageEnabledRequest;

ModifyNetworkPackageEnabledRequest::ModifyNetworkPackageEnabledRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyNetworkPackageEnabled") {
  setMethod(HttpRequest::Method::Post);
}

ModifyNetworkPackageEnabledRequest::~ModifyNetworkPackageEnabledRequest() {}

std::string ModifyNetworkPackageEnabledRequest::getNetworkPackageId() const {
  return networkPackageId_;
}

void ModifyNetworkPackageEnabledRequest::setNetworkPackageId(const std::string &networkPackageId) {
  networkPackageId_ = networkPackageId;
  setParameter(std::string("NetworkPackageId"), networkPackageId);
}

bool ModifyNetworkPackageEnabledRequest::getEnabled() const {
  return enabled_;
}

void ModifyNetworkPackageEnabledRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string ModifyNetworkPackageEnabledRequest::getRegionId() const {
  return regionId_;
}

void ModifyNetworkPackageEnabledRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

