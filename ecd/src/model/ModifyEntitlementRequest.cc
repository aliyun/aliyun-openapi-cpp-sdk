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

#include <alibabacloud/ecd/model/ModifyEntitlementRequest.h>

using AlibabaCloud::Ecd::Model::ModifyEntitlementRequest;

ModifyEntitlementRequest::ModifyEntitlementRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyEntitlement") {
  setMethod(HttpRequest::Method::Post);
}

ModifyEntitlementRequest::~ModifyEntitlementRequest() {}

std::string ModifyEntitlementRequest::getRegionId() const {
  return regionId_;
}

void ModifyEntitlementRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ModifyEntitlementRequest::getEndUserId() const {
  return endUserId_;
}

void ModifyEntitlementRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

std::string ModifyEntitlementRequest::getDesktopId() const {
  return desktopId_;
}

void ModifyEntitlementRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

