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

#include <alibabacloud/vod/model/UpdateVodDomainRequest.h>

using AlibabaCloud::Vod::Model::UpdateVodDomainRequest;

UpdateVodDomainRequest::UpdateVodDomainRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateVodDomain") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVodDomainRequest::~UpdateVodDomainRequest() {}

std::string UpdateVodDomainRequest::getTopLevelDomain() const {
  return topLevelDomain_;
}

void UpdateVodDomainRequest::setTopLevelDomain(const std::string &topLevelDomain) {
  topLevelDomain_ = topLevelDomain;
  setParameter(std::string("TopLevelDomain"), topLevelDomain);
}

std::string UpdateVodDomainRequest::getSources() const {
  return sources_;
}

void UpdateVodDomainRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

std::string UpdateVodDomainRequest::getDomainName() const {
  return domainName_;
}

void UpdateVodDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long UpdateVodDomainRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateVodDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateVodDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void UpdateVodDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

