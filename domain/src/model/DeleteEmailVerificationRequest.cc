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

#include <alibabacloud/domain/model/DeleteEmailVerificationRequest.h>

using AlibabaCloud::Domain::Model::DeleteEmailVerificationRequest;

DeleteEmailVerificationRequest::DeleteEmailVerificationRequest()
    : RpcServiceRequest("domain", "2018-01-29", "DeleteEmailVerification") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEmailVerificationRequest::~DeleteEmailVerificationRequest() {}

std::string DeleteEmailVerificationRequest::getUserClientIp() const {
  return userClientIp_;
}

void DeleteEmailVerificationRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DeleteEmailVerificationRequest::getLang() const {
  return lang_;
}

void DeleteEmailVerificationRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DeleteEmailVerificationRequest::getEmail() const {
  return email_;
}

void DeleteEmailVerificationRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

