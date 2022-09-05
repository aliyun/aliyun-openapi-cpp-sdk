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

#include <alibabacloud/cdn/model/BatchStartCdnDomainRequest.h>

using AlibabaCloud::Cdn::Model::BatchStartCdnDomainRequest;

BatchStartCdnDomainRequest::BatchStartCdnDomainRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "BatchStartCdnDomain") {
  setMethod(HttpRequest::Method::Post);
}

BatchStartCdnDomainRequest::~BatchStartCdnDomainRequest() {}

std::string BatchStartCdnDomainRequest::getDomainNames() const {
  return domainNames_;
}

void BatchStartCdnDomainRequest::setDomainNames(const std::string &domainNames) {
  domainNames_ = domainNames;
  setParameter(std::string("DomainNames"), domainNames);
}

std::string BatchStartCdnDomainRequest::getSecurityToken() const {
  return securityToken_;
}

void BatchStartCdnDomainRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long BatchStartCdnDomainRequest::getOwnerId() const {
  return ownerId_;
}

void BatchStartCdnDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

