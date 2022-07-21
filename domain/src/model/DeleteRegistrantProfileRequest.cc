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

#include <alibabacloud/domain/model/DeleteRegistrantProfileRequest.h>

using AlibabaCloud::Domain::Model::DeleteRegistrantProfileRequest;

DeleteRegistrantProfileRequest::DeleteRegistrantProfileRequest()
    : RpcServiceRequest("domain", "2018-01-29", "DeleteRegistrantProfile") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRegistrantProfileRequest::~DeleteRegistrantProfileRequest() {}

long DeleteRegistrantProfileRequest::getRegistrantProfileId() const {
  return registrantProfileId_;
}

void DeleteRegistrantProfileRequest::setRegistrantProfileId(long registrantProfileId) {
  registrantProfileId_ = registrantProfileId;
  setParameter(std::string("RegistrantProfileId"), std::to_string(registrantProfileId));
}

std::string DeleteRegistrantProfileRequest::getUserClientIp() const {
  return userClientIp_;
}

void DeleteRegistrantProfileRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DeleteRegistrantProfileRequest::getLang() const {
  return lang_;
}

void DeleteRegistrantProfileRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

