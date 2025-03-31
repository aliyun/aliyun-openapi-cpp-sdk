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

#include <alibabacloud/cloud-siem/model/DeleteBindAccountRequest.h>

using AlibabaCloud::Cloud_siem::Model::DeleteBindAccountRequest;

DeleteBindAccountRequest::DeleteBindAccountRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "DeleteBindAccount") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBindAccountRequest::~DeleteBindAccountRequest() {}

std::string DeleteBindAccountRequest::getCloudCode() const {
  return cloudCode_;
}

void DeleteBindAccountRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

long DeleteBindAccountRequest::getRoleFor() const {
  return roleFor_;
}

void DeleteBindAccountRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string DeleteBindAccountRequest::getAccountId() const {
  return accountId_;
}

void DeleteBindAccountRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string DeleteBindAccountRequest::getRegionId() const {
  return regionId_;
}

void DeleteBindAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int DeleteBindAccountRequest::getRoleType() const {
  return roleType_;
}

void DeleteBindAccountRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long DeleteBindAccountRequest::getBindId() const {
  return bindId_;
}

void DeleteBindAccountRequest::setBindId(long bindId) {
  bindId_ = bindId;
  setBodyParameter(std::string("BindId"), std::to_string(bindId));
}

std::string DeleteBindAccountRequest::getAccessId() const {
  return accessId_;
}

void DeleteBindAccountRequest::setAccessId(const std::string &accessId) {
  accessId_ = accessId;
  setBodyParameter(std::string("AccessId"), accessId);
}

