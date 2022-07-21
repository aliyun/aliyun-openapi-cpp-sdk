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

#include <alibabacloud/domain/model/SaveSingleTaskForDomainNameProxyServiceRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForDomainNameProxyServiceRequest;

SaveSingleTaskForDomainNameProxyServiceRequest::SaveSingleTaskForDomainNameProxyServiceRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForDomainNameProxyService") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForDomainNameProxyServiceRequest::~SaveSingleTaskForDomainNameProxyServiceRequest() {}

std::string SaveSingleTaskForDomainNameProxyServiceRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForDomainNameProxyServiceRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SaveSingleTaskForDomainNameProxyServiceRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveSingleTaskForDomainNameProxyServiceRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveSingleTaskForDomainNameProxyServiceRequest::getLang() const {
  return lang_;
}

void SaveSingleTaskForDomainNameProxyServiceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool SaveSingleTaskForDomainNameProxyServiceRequest::getStatus() const {
  return status_;
}

void SaveSingleTaskForDomainNameProxyServiceRequest::setStatus(bool status) {
  status_ = status;
  setParameter(std::string("Status"), status ? "true" : "false");
}

