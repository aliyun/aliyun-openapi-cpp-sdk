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

#include <alibabacloud/cloudauth/model/CreateAuthKeyRequest.h>

using AlibabaCloud::Cloudauth::Model::CreateAuthKeyRequest;

CreateAuthKeyRequest::CreateAuthKeyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "CreateAuthKey") {
  setMethod(HttpRequest::Method::Post);
}

CreateAuthKeyRequest::~CreateAuthKeyRequest() {}

std::string CreateAuthKeyRequest::getUserDeviceId() const {
  return userDeviceId_;
}

void CreateAuthKeyRequest::setUserDeviceId(const std::string &userDeviceId) {
  userDeviceId_ = userDeviceId;
  setParameter(std::string("UserDeviceId"), userDeviceId);
}

bool CreateAuthKeyRequest::getTest() const {
  return test_;
}

void CreateAuthKeyRequest::setTest(bool test) {
  test_ = test;
  setParameter(std::string("Test"), test ? "true" : "false");
}

std::string CreateAuthKeyRequest::getBizType() const {
  return bizType_;
}

void CreateAuthKeyRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string CreateAuthKeyRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateAuthKeyRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int CreateAuthKeyRequest::getAuthYears() const {
  return authYears_;
}

void CreateAuthKeyRequest::setAuthYears(int authYears) {
  authYears_ = authYears;
  setParameter(std::string("AuthYears"), std::to_string(authYears));
}

std::string CreateAuthKeyRequest::getLang() const {
  return lang_;
}

void CreateAuthKeyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

