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

#include <alibabacloud/cloud-siem/model/ListAccountAccessIdRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListAccountAccessIdRequest;

ListAccountAccessIdRequest::ListAccountAccessIdRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListAccountAccessId") {
  setMethod(HttpRequest::Method::Post);
}

ListAccountAccessIdRequest::~ListAccountAccessIdRequest() {}

std::string ListAccountAccessIdRequest::getCloudCode() const {
  return cloudCode_;
}

void ListAccountAccessIdRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

long ListAccountAccessIdRequest::getRoleFor() const {
  return roleFor_;
}

void ListAccountAccessIdRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ListAccountAccessIdRequest::getRegionId() const {
  return regionId_;
}

void ListAccountAccessIdRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListAccountAccessIdRequest::getRoleType() const {
  return roleType_;
}

void ListAccountAccessIdRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

