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

#include <alibabacloud/dcdn/model/StopDcdnIpaDomainRequest.h>

using AlibabaCloud::Dcdn::Model::StopDcdnIpaDomainRequest;

StopDcdnIpaDomainRequest::StopDcdnIpaDomainRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "StopDcdnIpaDomain") {
  setMethod(HttpRequest::Method::Post);
}

StopDcdnIpaDomainRequest::~StopDcdnIpaDomainRequest() {}

std::string StopDcdnIpaDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void StopDcdnIpaDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string StopDcdnIpaDomainRequest::getDomainName() const {
  return domainName_;
}

void StopDcdnIpaDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long StopDcdnIpaDomainRequest::getOwnerId() const {
  return ownerId_;
}

void StopDcdnIpaDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

