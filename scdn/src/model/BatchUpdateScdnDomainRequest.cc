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

#include <alibabacloud/scdn/model/BatchUpdateScdnDomainRequest.h>

using AlibabaCloud::Scdn::Model::BatchUpdateScdnDomainRequest;

BatchUpdateScdnDomainRequest::BatchUpdateScdnDomainRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "BatchUpdateScdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

BatchUpdateScdnDomainRequest::~BatchUpdateScdnDomainRequest() {}

std::string BatchUpdateScdnDomainRequest::getSources() const {
  return sources_;
}

void BatchUpdateScdnDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string BatchUpdateScdnDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void BatchUpdateScdnDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string BatchUpdateScdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchUpdateScdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string BatchUpdateScdnDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void BatchUpdateScdnDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string BatchUpdateScdnDomainRequest::getDomainName() const {
  return domainName_;
}

void BatchUpdateScdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long BatchUpdateScdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void BatchUpdateScdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

