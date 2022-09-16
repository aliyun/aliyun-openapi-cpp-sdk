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

#include <alibabacloud/ecd/model/ApplyCoordinatePrivilegeRequest.h>

using AlibabaCloud::Ecd::Model::ApplyCoordinatePrivilegeRequest;

ApplyCoordinatePrivilegeRequest::ApplyCoordinatePrivilegeRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ApplyCoordinatePrivilege") {
  setMethod(HttpRequest::Method::Post);
}

ApplyCoordinatePrivilegeRequest::~ApplyCoordinatePrivilegeRequest() {}

std::string ApplyCoordinatePrivilegeRequest::getCoId() const {
  return coId_;
}

void ApplyCoordinatePrivilegeRequest::setCoId(const std::string &coId) {
  coId_ = coId;
  setParameter(std::string("CoId"), coId);
}

std::string ApplyCoordinatePrivilegeRequest::getUserType() const {
  return userType_;
}

void ApplyCoordinatePrivilegeRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

std::string ApplyCoordinatePrivilegeRequest::getUuid() const {
  return uuid_;
}

void ApplyCoordinatePrivilegeRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ApplyCoordinatePrivilegeRequest::getRegionId() const {
  return regionId_;
}

void ApplyCoordinatePrivilegeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ApplyCoordinatePrivilegeRequest::getEndUserId() const {
  return endUserId_;
}

void ApplyCoordinatePrivilegeRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

