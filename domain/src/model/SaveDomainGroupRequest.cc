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

#include <alibabacloud/domain/model/SaveDomainGroupRequest.h>

using AlibabaCloud::Domain::Model::SaveDomainGroupRequest;

SaveDomainGroupRequest::SaveDomainGroupRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveDomainGroup") {
  setMethod(HttpRequest::Method::Post);
}

SaveDomainGroupRequest::~SaveDomainGroupRequest() {}

long SaveDomainGroupRequest::getDomainGroupId() const {
  return domainGroupId_;
}

void SaveDomainGroupRequest::setDomainGroupId(long domainGroupId) {
  domainGroupId_ = domainGroupId;
  setParameter(std::string("DomainGroupId"), std::to_string(domainGroupId));
}

std::string SaveDomainGroupRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveDomainGroupRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveDomainGroupRequest::getDomainGroupName() const {
  return domainGroupName_;
}

void SaveDomainGroupRequest::setDomainGroupName(const std::string &domainGroupName) {
  domainGroupName_ = domainGroupName;
  setParameter(std::string("DomainGroupName"), domainGroupName);
}

std::string SaveDomainGroupRequest::getLang() const {
  return lang_;
}

void SaveDomainGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

