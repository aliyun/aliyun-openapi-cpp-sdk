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

#include <alibabacloud/alidns/model/ChangeDomainGroupRequest.h>

using AlibabaCloud::Alidns::Model::ChangeDomainGroupRequest;

ChangeDomainGroupRequest::ChangeDomainGroupRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "ChangeDomainGroup") {
  setMethod(HttpRequest::Method::Post);
}

ChangeDomainGroupRequest::~ChangeDomainGroupRequest() {}

std::string ChangeDomainGroupRequest::getGroupId() const {
  return groupId_;
}

void ChangeDomainGroupRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ChangeDomainGroupRequest::getDomainName() const {
  return domainName_;
}

void ChangeDomainGroupRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string ChangeDomainGroupRequest::getUserClientIp() const {
  return userClientIp_;
}

void ChangeDomainGroupRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string ChangeDomainGroupRequest::getLang() const {
  return lang_;
}

void ChangeDomainGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

