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

#include <alibabacloud/domain/model/SaveSingleTaskForReserveDropListDomainRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForReserveDropListDomainRequest;

SaveSingleTaskForReserveDropListDomainRequest::SaveSingleTaskForReserveDropListDomainRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForReserveDropListDomain") {
  setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForReserveDropListDomainRequest::~SaveSingleTaskForReserveDropListDomainRequest() {}

std::string SaveSingleTaskForReserveDropListDomainRequest::getDns2() const {
  return dns2_;
}

void SaveSingleTaskForReserveDropListDomainRequest::setDns2(const std::string &dns2) {
  dns2_ = dns2;
  setParameter(std::string("Dns2"), dns2);
}

std::string SaveSingleTaskForReserveDropListDomainRequest::getDns1() const {
  return dns1_;
}

void SaveSingleTaskForReserveDropListDomainRequest::setDns1(const std::string &dns1) {
  dns1_ = dns1;
  setParameter(std::string("Dns1"), dns1);
}

std::string SaveSingleTaskForReserveDropListDomainRequest::getDomainName() const {
  return domainName_;
}

void SaveSingleTaskForReserveDropListDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string SaveSingleTaskForReserveDropListDomainRequest::getContactTemplateId() const {
  return contactTemplateId_;
}

void SaveSingleTaskForReserveDropListDomainRequest::setContactTemplateId(const std::string &contactTemplateId) {
  contactTemplateId_ = contactTemplateId;
  setParameter(std::string("ContactTemplateId"), contactTemplateId);
}

