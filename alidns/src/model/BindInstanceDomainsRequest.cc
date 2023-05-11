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

#include <alibabacloud/alidns/model/BindInstanceDomainsRequest.h>

using AlibabaCloud::Alidns::Model::BindInstanceDomainsRequest;

BindInstanceDomainsRequest::BindInstanceDomainsRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "BindInstanceDomains") {
  setMethod(HttpRequest::Method::Post);
}

BindInstanceDomainsRequest::~BindInstanceDomainsRequest() {}

std::string BindInstanceDomainsRequest::getDomainNames() const {
  return domainNames_;
}

void BindInstanceDomainsRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BindInstanceDomainsRequest::getInstanceId() const {
  return instanceId_;
}

void BindInstanceDomainsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string BindInstanceDomainsRequest::getUserClientIp() const {
  return userClientIp_;
}

void BindInstanceDomainsRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string BindInstanceDomainsRequest::getLang() const {
  return lang_;
}

void BindInstanceDomainsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

