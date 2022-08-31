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

#include <alibabacloud/scdn/model/StartScdnDomainRequest.h>

using AlibabaCloud::Scdn::Model::StartScdnDomainRequest;

StartScdnDomainRequest::StartScdnDomainRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "StartScdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

StartScdnDomainRequest::~StartScdnDomainRequest() {}

std::string StartScdnDomainRequest::getDomainName() const {
  return domainName_;
}

void StartScdnDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long StartScdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void StartScdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StartScdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void StartScdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

