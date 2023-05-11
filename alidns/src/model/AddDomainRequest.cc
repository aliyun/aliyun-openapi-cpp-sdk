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

#include <alibabacloud/alidns/model/AddDomainRequest.h>

using AlibabaCloud::Alidns::Model::AddDomainRequest;

AddDomainRequest::AddDomainRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddDomainRequest::~AddDomainRequest() {}

std::string AddDomainRequest::getGroupId() const {
  return groupId_;
}

void AddDomainRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string AddDomainRequest::getDomainName() const {
  return domainName_;
}

void AddDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string AddDomainRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddDomainRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddDomainRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddDomainRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string AddDomainRequest::getLang() const {
  return lang_;
}

void AddDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

