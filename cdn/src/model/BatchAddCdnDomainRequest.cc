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

#include <alibabacloud/cdn/model/BatchAddCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::BatchAddCdnDomainRequest;

BatchAddCdnDomainRequest::BatchAddCdnDomainRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "BatchAddCdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

BatchAddCdnDomainRequest::~BatchAddCdnDomainRequest() {}

std::string BatchAddCdnDomainRequest::getSources() const {
  return sources_;
}

void BatchAddCdnDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string BatchAddCdnDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void BatchAddCdnDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string BatchAddCdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchAddCdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchAddCdnDomainRequest::getCdnType() const {
  return cdnType_;
}

void BatchAddCdnDomainRequest::setCdnType(const std::string &cdnType) {
  cdnType_ = cdnType;
  setParameter(std::string("CdnType"), cdnType);
}

std::string BatchAddCdnDomainRequest::getScope() const {
  return scope_;
}

void BatchAddCdnDomainRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string BatchAddCdnDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void BatchAddCdnDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string BatchAddCdnDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BatchAddCdnDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string BatchAddCdnDomainRequest::getDomainName() const {
  return domainName_;
}

void BatchAddCdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long BatchAddCdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void BatchAddCdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BatchAddCdnDomainRequest::getCheckUrl() const {
  return checkUrl_;
}

void BatchAddCdnDomainRequest::setCheckUrl(const std::string &checkUrl) {
  checkUrl_ = checkUrl;
  setParameter(std::string("CheckUrl"), checkUrl);
}

