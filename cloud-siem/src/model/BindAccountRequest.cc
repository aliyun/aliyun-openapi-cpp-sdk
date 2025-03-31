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

#include <alibabacloud/cloud-siem/model/BindAccountRequest.h>

using AlibabaCloud::Cloud_siem::Model::BindAccountRequest;

BindAccountRequest::BindAccountRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "BindAccount") {
  setMethod(HttpRequest::Method::Post);
}

BindAccountRequest::~BindAccountRequest() {}

std::string BindAccountRequest::getCloudCode() const {
  return cloudCode_;
}

void BindAccountRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

long BindAccountRequest::getRoleFor() const {
  return roleFor_;
}

void BindAccountRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string BindAccountRequest::getAccountId() const {
  return accountId_;
}

void BindAccountRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string BindAccountRequest::getAccountName() const {
  return accountName_;
}

void BindAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setBodyParameter(std::string("AccountName"), accountName);
}

std::string BindAccountRequest::getRegionId() const {
  return regionId_;
}

void BindAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int BindAccountRequest::getRoleType() const {
  return roleType_;
}

void BindAccountRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

std::string BindAccountRequest::getAccessId() const {
  return accessId_;
}

void BindAccountRequest::setAccessId(const std::string &accessId) {
  accessId_ = accessId;
  setBodyParameter(std::string("AccessId"), accessId);
}

