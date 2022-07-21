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

#include <alibabacloud/domain/model/CheckProcessingServerLockApplyRequest.h>

using AlibabaCloud::Domain::Model::CheckProcessingServerLockApplyRequest;

CheckProcessingServerLockApplyRequest::CheckProcessingServerLockApplyRequest()
    : RpcServiceRequest("domain", "2018-01-29", "CheckProcessingServerLockApply") {
  setMethod(HttpRequest::Method::Post);
}

CheckProcessingServerLockApplyRequest::~CheckProcessingServerLockApplyRequest() {}

std::string CheckProcessingServerLockApplyRequest::getDomainName() const {
  return domainName_;
}

void CheckProcessingServerLockApplyRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

int CheckProcessingServerLockApplyRequest::getFeePeriod() const {
  return feePeriod_;
}

void CheckProcessingServerLockApplyRequest::setFeePeriod(int feePeriod) {
  feePeriod_ = feePeriod;
  setParameter(std::string("FeePeriod"), std::to_string(feePeriod));
}

std::string CheckProcessingServerLockApplyRequest::getUserClientIp() const {
  return userClientIp_;
}

void CheckProcessingServerLockApplyRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string CheckProcessingServerLockApplyRequest::getLang() const {
  return lang_;
}

void CheckProcessingServerLockApplyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

