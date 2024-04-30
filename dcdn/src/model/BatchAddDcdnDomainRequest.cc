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

#include <alibabacloud/dcdn/model/BatchAddDcdnDomainRequest.h>

using AlibabaCloud::Dcdn::Model::BatchAddDcdnDomainRequest;

BatchAddDcdnDomainRequest::BatchAddDcdnDomainRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "BatchAddDcdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

BatchAddDcdnDomainRequest::~BatchAddDcdnDomainRequest() {}

std::string BatchAddDcdnDomainRequest::getSources() const {
  return sources_;
}

void BatchAddDcdnDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string BatchAddDcdnDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void BatchAddDcdnDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string BatchAddDcdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchAddDcdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchAddDcdnDomainRequest::getScope() const {
  return scope_;
}

void BatchAddDcdnDomainRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string BatchAddDcdnDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void BatchAddDcdnDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string BatchAddDcdnDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchAddDcdnDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string BatchAddDcdnDomainRequest::getDomainName() const {
  return domainName_;
}

void BatchAddDcdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long BatchAddDcdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void BatchAddDcdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BatchAddDcdnDomainRequest::getCheckUrl() const {
  return checkUrl_;
}

void BatchAddDcdnDomainRequest::setCheckUrl(const std::string &checkUrl) {
  checkUrl_ = checkUrl;
  setParameter(std::string("CheckUrl"), checkUrl);
}

