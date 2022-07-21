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

#include <alibabacloud/domain/model/CheckTransferInFeasibilityRequest.h>

using AlibabaCloud::Domain::Model::CheckTransferInFeasibilityRequest;

CheckTransferInFeasibilityRequest::CheckTransferInFeasibilityRequest()
    : RpcServiceRequest("domain", "2018-01-29", "CheckTransferInFeasibility") {
  setMethod(HttpRequest::Method::Post);
}

CheckTransferInFeasibilityRequest::~CheckTransferInFeasibilityRequest() {}

std::string CheckTransferInFeasibilityRequest::getDomainName() const {
  return domainName_;
}

void CheckTransferInFeasibilityRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string CheckTransferInFeasibilityRequest::getTransferAuthorizationCode() const {
  return transferAuthorizationCode_;
}

void CheckTransferInFeasibilityRequest::setTransferAuthorizationCode(const std::string &transferAuthorizationCode) {
  transferAuthorizationCode_ = transferAuthorizationCode;
  setParameter(std::string("TransferAuthorizationCode"), transferAuthorizationCode);
}

std::string CheckTransferInFeasibilityRequest::getUserClientIp() const {
  return userClientIp_;
}

void CheckTransferInFeasibilityRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string CheckTransferInFeasibilityRequest::getLang() const {
  return lang_;
}

void CheckTransferInFeasibilityRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

