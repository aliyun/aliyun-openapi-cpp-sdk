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

#include <alibabacloud/ecd/model/ModifyUserEntitlementRequest.h>

using AlibabaCloud::Ecd::Model::ModifyUserEntitlementRequest;

ModifyUserEntitlementRequest::ModifyUserEntitlementRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyUserEntitlement") {
  setMethod(HttpRequest::Method::Post);
}

ModifyUserEntitlementRequest::~ModifyUserEntitlementRequest() {}

std::vector<std::string> ModifyUserEntitlementRequest::getAuthorizeDesktopId() const {
  return authorizeDesktopId_;
}

void ModifyUserEntitlementRequest::setAuthorizeDesktopId(const std::vector<std::string> &authorizeDesktopId) {
  authorizeDesktopId_ = authorizeDesktopId;
}

std::vector<std::string> ModifyUserEntitlementRequest::getRevokeDesktopId() const {
  return revokeDesktopId_;
}

void ModifyUserEntitlementRequest::setRevokeDesktopId(const std::vector<std::string> &revokeDesktopId) {
  revokeDesktopId_ = revokeDesktopId;
}

std::string ModifyUserEntitlementRequest::getRegionId() const {
  return regionId_;
}

void ModifyUserEntitlementRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ModifyUserEntitlementRequest::getEndUserId() const {
  return endUserId_;
}

void ModifyUserEntitlementRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

