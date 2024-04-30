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

#include <alibabacloud/dcdn/model/AddDcdnIpaDomainRequest.h>

using AlibabaCloud::Dcdn::Model::AddDcdnIpaDomainRequest;

AddDcdnIpaDomainRequest::AddDcdnIpaDomainRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "AddDcdnIpaDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddDcdnIpaDomainRequest::~AddDcdnIpaDomainRequest() {}

std::string AddDcdnIpaDomainRequest::getSources() const {
  return sources_;
}

void AddDcdnIpaDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string AddDcdnIpaDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddDcdnIpaDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddDcdnIpaDomainRequest::getProtocol() const {
  return protocol_;
}

void AddDcdnIpaDomainRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string AddDcdnIpaDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void AddDcdnIpaDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AddDcdnIpaDomainRequest::getScope() const {
  return scope_;
}

void AddDcdnIpaDomainRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string AddDcdnIpaDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void AddDcdnIpaDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string AddDcdnIpaDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddDcdnIpaDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddDcdnIpaDomainRequest::getDomainName() const {
  return domainName_;
}

void AddDcdnIpaDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddDcdnIpaDomainRequest::getOwnerId() const {
  return ownerId_;
}

void AddDcdnIpaDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddDcdnIpaDomainRequest::getCheckUrl() const {
  return checkUrl_;
}

void AddDcdnIpaDomainRequest::setCheckUrl(const std::string &checkUrl) {
  checkUrl_ = checkUrl;
  setParameter(std::string("CheckUrl"), checkUrl);
}

