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

#include <alibabacloud/ecd/model/RevokeCoordinatePrivilegeRequest.h>

using AlibabaCloud::Ecd::Model::RevokeCoordinatePrivilegeRequest;

RevokeCoordinatePrivilegeRequest::RevokeCoordinatePrivilegeRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "RevokeCoordinatePrivilege") {
  setMethod(HttpRequest::Method::Post);
}

RevokeCoordinatePrivilegeRequest::~RevokeCoordinatePrivilegeRequest() {}

std::string RevokeCoordinatePrivilegeRequest::getCoId() const {
  return coId_;
}

void RevokeCoordinatePrivilegeRequest::setCoId(const std::string &coId) {
  coId_ = coId;
  setParameter(std::string("CoId"), coId);
}

std::string RevokeCoordinatePrivilegeRequest::getUserType() const {
  return userType_;
}

void RevokeCoordinatePrivilegeRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

std::string RevokeCoordinatePrivilegeRequest::getUuid() const {
  return uuid_;
}

void RevokeCoordinatePrivilegeRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string RevokeCoordinatePrivilegeRequest::getRegionId() const {
  return regionId_;
}

void RevokeCoordinatePrivilegeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RevokeCoordinatePrivilegeRequest::getEndUserId() const {
  return endUserId_;
}

void RevokeCoordinatePrivilegeRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

