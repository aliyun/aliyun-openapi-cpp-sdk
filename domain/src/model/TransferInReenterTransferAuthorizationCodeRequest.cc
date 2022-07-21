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

#include <alibabacloud/domain/model/TransferInReenterTransferAuthorizationCodeRequest.h>

using AlibabaCloud::Domain::Model::TransferInReenterTransferAuthorizationCodeRequest;

TransferInReenterTransferAuthorizationCodeRequest::TransferInReenterTransferAuthorizationCodeRequest()
    : RpcServiceRequest("domain", "2018-01-29", "TransferInReenterTransferAuthorizationCode") {
  setMethod(HttpRequest::Method::Post);
}

TransferInReenterTransferAuthorizationCodeRequest::~TransferInReenterTransferAuthorizationCodeRequest() {}

std::string TransferInReenterTransferAuthorizationCodeRequest::getDomainName() const {
  return domainName_;
}

void TransferInReenterTransferAuthorizationCodeRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string TransferInReenterTransferAuthorizationCodeRequest::getTransferAuthorizationCode() const {
  return transferAuthorizationCode_;
}

void TransferInReenterTransferAuthorizationCodeRequest::setTransferAuthorizationCode(const std::string &transferAuthorizationCode) {
  transferAuthorizationCode_ = transferAuthorizationCode;
  setParameter(std::string("TransferAuthorizationCode"), transferAuthorizationCode);
}

std::string TransferInReenterTransferAuthorizationCodeRequest::getUserClientIp() const {
  return userClientIp_;
}

void TransferInReenterTransferAuthorizationCodeRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string TransferInReenterTransferAuthorizationCodeRequest::getLang() const {
  return lang_;
}

void TransferInReenterTransferAuthorizationCodeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

