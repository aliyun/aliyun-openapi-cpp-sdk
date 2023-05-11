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

#include <alibabacloud/alidns/model/DescribeDomainInfoRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainInfoRequest;

DescribeDomainInfoRequest::DescribeDomainInfoRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainInfoRequest::~DescribeDomainInfoRequest() {}

std::string DescribeDomainInfoRequest::getDomainName() const {
  return domainName_;
}

void DescribeDomainInfoRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDomainInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDomainInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDomainInfoRequest::getUserClientIp() const {
  return userClientIp_;
}

void DescribeDomainInfoRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DescribeDomainInfoRequest::getLang() const {
  return lang_;
}

void DescribeDomainInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool DescribeDomainInfoRequest::getNeedDetailAttributes() const {
  return needDetailAttributes_;
}

void DescribeDomainInfoRequest::setNeedDetailAttributes(bool needDetailAttributes) {
  needDetailAttributes_ = needDetailAttributes;
  setParameter(std::string("NeedDetailAttributes"), needDetailAttributes ? "true" : "false");
}

