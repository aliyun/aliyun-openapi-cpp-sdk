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

#include <alibabacloud/scdn/model/DescribeScdnDomainDetailRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnDomainDetailRequest;

DescribeScdnDomainDetailRequest::DescribeScdnDomainDetailRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnDomainDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnDomainDetailRequest::~DescribeScdnDomainDetailRequest() {}

std::string DescribeScdnDomainDetailRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnDomainDetailRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeScdnDomainDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScdnDomainDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScdnDomainDetailRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeScdnDomainDetailRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

