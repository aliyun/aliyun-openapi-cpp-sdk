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

#include <alibabacloud/cdn/model/AddCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::AddCdnDomainRequest;

AddCdnDomainRequest::AddCdnDomainRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "AddCdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddCdnDomainRequest::~AddCdnDomainRequest() {}

std::string AddCdnDomainRequest::getSources() const {
  return sources_;
}

void AddCdnDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string AddCdnDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddCdnDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int AddCdnDomainRequest::getSourcePort() const {
  return sourcePort_;
}

void AddCdnDomainRequest::setSourcePort(int sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string AddCdnDomainRequest::getPriorities() const {
  return priorities_;
}

void AddCdnDomainRequest::setPriorities(const std::string &priorities) {
  priorities_ = priorities;
  setParameter(std::string("Priorities"), priorities);
}

std::string AddCdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void AddCdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AddCdnDomainRequest::getCdnType() const {
  return cdnType_;
}

void AddCdnDomainRequest::setCdnType(const std::string &cdnType) {
  cdnType_ = cdnType;
  setParameter(std::string("CdnType"), cdnType);
}

std::string AddCdnDomainRequest::getScope() const {
  return scope_;
}

void AddCdnDomainRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string AddCdnDomainRequest::getSourceType() const {
  return sourceType_;
}

void AddCdnDomainRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string AddCdnDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void AddCdnDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string AddCdnDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddCdnDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddCdnDomainRequest::getDomainName() const {
  return domainName_;
}

void AddCdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddCdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void AddCdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddCdnDomainRequest::getCheckUrl() const {
  return checkUrl_;
}

void AddCdnDomainRequest::setCheckUrl(const std::string &checkUrl) {
  checkUrl_ = checkUrl;
  setParameter(std::string("CheckUrl"), checkUrl);
}

std::string AddCdnDomainRequest::getRegion() const {
  return region_;
}

void AddCdnDomainRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

