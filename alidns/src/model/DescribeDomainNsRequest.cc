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

#include <alibabacloud/alidns/model/DescribeDomainNsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainNsRequest;

DescribeDomainNsRequest::DescribeDomainNsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainNs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainNsRequest::~DescribeDomainNsRequest() {}

std::string DescribeDomainNsRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainNsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainNsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDomainNsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDomainNsRequest::getDomainType() const {
  return domainType_;
}

void DescribeDomainNsRequest::setDomainType(const std::string &domainType) {
  domainType_ = domainType;
  setParameter(std::string("DomainType"), domainType);
}

std::string DescribeDomainNsRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainNsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainNsRequest::getLang() const {
  return lang_;
}

void DescribeDomainNsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

