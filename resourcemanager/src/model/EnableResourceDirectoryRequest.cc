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

#include <alibabacloud/resourcemanager/model/EnableResourceDirectoryRequest.h>

using AlibabaCloud::ResourceManager::Model::EnableResourceDirectoryRequest;

EnableResourceDirectoryRequest::EnableResourceDirectoryRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "EnableResourceDirectory") {
  setMethod(HttpRequest::Method::Post);
}

EnableResourceDirectoryRequest::~EnableResourceDirectoryRequest() {}

std::string EnableResourceDirectoryRequest::getEnableMode() const {
  return enableMode_;
}

void EnableResourceDirectoryRequest::setEnableMode(const std::string &enableMode) {
  enableMode_ = enableMode;
  setParameter(std::string("EnableMode"), enableMode);
}

std::string EnableResourceDirectoryRequest::getMASecureMobilePhone() const {
  return mASecureMobilePhone_;
}

void EnableResourceDirectoryRequest::setMASecureMobilePhone(const std::string &mASecureMobilePhone) {
  mASecureMobilePhone_ = mASecureMobilePhone;
  setParameter(std::string("MASecureMobilePhone"), mASecureMobilePhone);
}

std::string EnableResourceDirectoryRequest::getMAName() const {
  return mAName_;
}

void EnableResourceDirectoryRequest::setMAName(const std::string &mAName) {
  mAName_ = mAName;
  setParameter(std::string("MAName"), mAName);
}

std::string EnableResourceDirectoryRequest::getVerificationCode() const {
  return verificationCode_;
}

void EnableResourceDirectoryRequest::setVerificationCode(const std::string &verificationCode) {
  verificationCode_ = verificationCode;
  setParameter(std::string("VerificationCode"), verificationCode);
}

