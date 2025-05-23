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

#include <alibabacloud/live/model/AddLiveDomainRequest.h>

using AlibabaCloud::Live::Model::AddLiveDomainRequest;

AddLiveDomainRequest::AddLiveDomainRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveDomain") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveDomainRequest::~AddLiveDomainRequest() {}

std::string AddLiveDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AddLiveDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AddLiveDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void AddLiveDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string AddLiveDomainRequest::getScope() const {
  return scope_;
}

void AddLiveDomainRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::vector<AddLiveDomainRequest::Tag> AddLiveDomainRequest::getTag() const {
  return tag_;
}

void AddLiveDomainRequest::setTag(const std::vector<AddLiveDomainRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string AddLiveDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void AddLiveDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string AddLiveDomainRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddLiveDomainRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string AddLiveDomainRequest::getDomainName() const {
  return domainName_;
}

void AddLiveDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddLiveDomainRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddLiveDomainRequest::getRegion() const {
  return region_;
}

void AddLiveDomainRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string AddLiveDomainRequest::getCheckUrl() const {
  return checkUrl_;
}

void AddLiveDomainRequest::setCheckUrl(const std::string &checkUrl) {
  checkUrl_ = checkUrl;
  setParameter(std::string("CheckUrl"), checkUrl);
}

std::string AddLiveDomainRequest::getLiveDomainType() const {
  return liveDomainType_;
}

void AddLiveDomainRequest::setLiveDomainType(const std::string &liveDomainType) {
  liveDomainType_ = liveDomainType;
  setParameter(std::string("LiveDomainType"), liveDomainType);
}

