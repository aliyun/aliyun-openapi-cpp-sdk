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

#include <alibabacloud/alidns/model/UpdateDnsCacheDomainRemarkRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDnsCacheDomainRemarkRequest;

UpdateDnsCacheDomainRemarkRequest::UpdateDnsCacheDomainRemarkRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDnsCacheDomainRemark") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDnsCacheDomainRemarkRequest::~UpdateDnsCacheDomainRemarkRequest() {}

std::string UpdateDnsCacheDomainRemarkRequest::getDomainName() const {
  return domainName_;
}

void UpdateDnsCacheDomainRemarkRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string UpdateDnsCacheDomainRemarkRequest::getRemark() const {
  return remark_;
}

void UpdateDnsCacheDomainRemarkRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string UpdateDnsCacheDomainRemarkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateDnsCacheDomainRemarkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateDnsCacheDomainRemarkRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDnsCacheDomainRemarkRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateDnsCacheDomainRemarkRequest::getLang() const {
  return lang_;
}

void UpdateDnsCacheDomainRemarkRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

