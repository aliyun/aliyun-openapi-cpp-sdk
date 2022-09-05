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

#include <alibabacloud/cdn/model/ModifyCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::ModifyCdnDomainRequest;

ModifyCdnDomainRequest::ModifyCdnDomainRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "ModifyCdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCdnDomainRequest::~ModifyCdnDomainRequest() {}

std::string ModifyCdnDomainRequest::getSources() const {
  return sources_;
}

void ModifyCdnDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string ModifyCdnDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyCdnDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyCdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyCdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyCdnDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void ModifyCdnDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string ModifyCdnDomainRequest::getDomainName() const {
  return domainName_;
}

void ModifyCdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long ModifyCdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

