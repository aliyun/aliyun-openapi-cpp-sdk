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

#include <alibabacloud/alidns/model/AddDomainGroupRequest.h>

using AlibabaCloud::Alidns::Model::AddDomainGroupRequest;

AddDomainGroupRequest::AddDomainGroupRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddDomainGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddDomainGroupRequest::~AddDomainGroupRequest() {}

std::string AddDomainGroupRequest::getGroupName() const {
  return groupName_;
}

void AddDomainGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

std::string AddDomainGroupRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddDomainGroupRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string AddDomainGroupRequest::getLang() const {
  return lang_;
}

void AddDomainGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

