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

#include <alibabacloud/vod/model/AddVodDomainRequest.h>

using AlibabaCloud::Vod::Model::AddVodDomainRequest;

AddVodDomainRequest::AddVodDomainRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddVodDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddVodDomainRequest::~AddVodDomainRequest() {}

std::string AddVodDomainRequest::getSources() const {
  return sources_;
}

void AddVodDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string AddVodDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void AddVodDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AddVodDomainRequest::getScope() const {
  return scope_;
}

void AddVodDomainRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string AddVodDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void AddVodDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string AddVodDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddVodDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddVodDomainRequest::getDomainName() const {
  return domainName_;
}

void AddVodDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddVodDomainRequest::getOwnerId() const {
  return ownerId_;
}

void AddVodDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddVodDomainRequest::getCheckUrl() const {
  return checkUrl_;
}

void AddVodDomainRequest::setCheckUrl(const std::string &checkUrl) {
  checkUrl_ = checkUrl;
  setParameter(std::string("CheckUrl"), checkUrl);
}

