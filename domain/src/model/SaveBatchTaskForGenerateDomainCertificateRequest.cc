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

#include <alibabacloud/domain/model/SaveBatchTaskForGenerateDomainCertificateRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForGenerateDomainCertificateRequest;

SaveBatchTaskForGenerateDomainCertificateRequest::SaveBatchTaskForGenerateDomainCertificateRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForGenerateDomainCertificate") {
  setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForGenerateDomainCertificateRequest::~SaveBatchTaskForGenerateDomainCertificateRequest() {}

std::vector<SaveBatchTaskForGenerateDomainCertificateRequest::std::string> SaveBatchTaskForGenerateDomainCertificateRequest::getDomainNames() const {
  return domainNames_;
}

void SaveBatchTaskForGenerateDomainCertificateRequest::setDomainNames(const std::vector<SaveBatchTaskForGenerateDomainCertificateRequest::std::string> &domainNames) {
  domainNames_ = domainNames;
  for(int dep1 = 0; dep1 != domainNames.size(); dep1++) {
    setParameter(std::string("DomainNames") + "." + std::to_string(dep1 + 1), domainNames[dep1]);
  }
}

std::string SaveBatchTaskForGenerateDomainCertificateRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveBatchTaskForGenerateDomainCertificateRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveBatchTaskForGenerateDomainCertificateRequest::getLang() const {
  return lang_;
}

void SaveBatchTaskForGenerateDomainCertificateRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

