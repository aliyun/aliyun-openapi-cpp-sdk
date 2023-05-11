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

#include <alibabacloud/alidns/model/SetDomainDnssecStatusRequest.h>

using AlibabaCloud::Alidns::Model::SetDomainDnssecStatusRequest;

SetDomainDnssecStatusRequest::SetDomainDnssecStatusRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "SetDomainDnssecStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetDomainDnssecStatusRequest::~SetDomainDnssecStatusRequest() {}

std::string SetDomainDnssecStatusRequest::getDomainName() const {
  return domainName_;
}

void SetDomainDnssecStatusRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SetDomainDnssecStatusRequest::getUserClientIp() const {
  return userClientIp_;
}

void SetDomainDnssecStatusRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SetDomainDnssecStatusRequest::getLang() const {
  return lang_;
}

void SetDomainDnssecStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SetDomainDnssecStatusRequest::getStatus() const {
  return status_;
}

void SetDomainDnssecStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

