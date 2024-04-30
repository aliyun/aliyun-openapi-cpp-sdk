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

#include <alibabacloud/dcdn/model/UpdateDcdnDomainRequest.h>

using AlibabaCloud::Dcdn::Model::UpdateDcdnDomainRequest;

UpdateDcdnDomainRequest::UpdateDcdnDomainRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "UpdateDcdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDcdnDomainRequest::~UpdateDcdnDomainRequest() {}

std::string UpdateDcdnDomainRequest::getSources() const {
  return sources_;
}

void UpdateDcdnDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string UpdateDcdnDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateDcdnDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateDcdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void UpdateDcdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string UpdateDcdnDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void UpdateDcdnDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string UpdateDcdnDomainRequest::getDomainName() const {
  return domainName_;
}

void UpdateDcdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long UpdateDcdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateDcdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

