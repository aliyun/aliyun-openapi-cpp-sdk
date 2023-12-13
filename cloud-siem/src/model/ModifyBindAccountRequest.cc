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

#include <alibabacloud/cloud-siem/model/ModifyBindAccountRequest.h>

using AlibabaCloud::Cloud_siem::Model::ModifyBindAccountRequest;

ModifyBindAccountRequest::ModifyBindAccountRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ModifyBindAccount") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBindAccountRequest::~ModifyBindAccountRequest() {}

std::string ModifyBindAccountRequest::getCloudCode() const {
  return cloudCode_;
}

void ModifyBindAccountRequest::setCloudCode(const std::string &cloudCode) {
  cloudCode_ = cloudCode;
  setBodyParameter(std::string("CloudCode"), cloudCode);
}

std::string ModifyBindAccountRequest::getAccountId() const {
  return accountId_;
}

void ModifyBindAccountRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setBodyParameter(std::string("AccountId"), accountId);
}

std::string ModifyBindAccountRequest::getAccountName() const {
  return accountName_;
}

void ModifyBindAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setBodyParameter(std::string("AccountName"), accountName);
}

std::string ModifyBindAccountRequest::getRegionId() const {
  return regionId_;
}

void ModifyBindAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

long ModifyBindAccountRequest::getBindId() const {
  return bindId_;
}

void ModifyBindAccountRequest::setBindId(long bindId) {
  bindId_ = bindId;
  setBodyParameter(std::string("BindId"), std::to_string(bindId));
}

std::string ModifyBindAccountRequest::getAccessId() const {
  return accessId_;
}

void ModifyBindAccountRequest::setAccessId(const std::string &accessId) {
  accessId_ = accessId;
  setBodyParameter(std::string("AccessId"), accessId);
}

