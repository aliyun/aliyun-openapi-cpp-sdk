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

#include <alibabacloud/cdn/model/DescribeDomainsBySourceRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainsBySourceRequest;

DescribeDomainsBySourceRequest::DescribeDomainsBySourceRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainsBySource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDomainsBySourceRequest::~DescribeDomainsBySourceRequest() {}

std::string DescribeDomainsBySourceRequest::getSources() const {
  return sources_;
}

void DescribeDomainsBySourceRequest::setSources(const std::string &sources) {
  sources_ = sources;
  setParameter(std::string("Sources"), sources);
}

long DescribeDomainsBySourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDomainsBySourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDomainsBySourceRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDomainsBySourceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

