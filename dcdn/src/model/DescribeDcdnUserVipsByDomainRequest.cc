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

#include <alibabacloud/dcdn/model/DescribeDcdnUserVipsByDomainRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserVipsByDomainRequest;

DescribeDcdnUserVipsByDomainRequest::DescribeDcdnUserVipsByDomainRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserVipsByDomain") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserVipsByDomainRequest::~DescribeDcdnUserVipsByDomainRequest() {}

std::string DescribeDcdnUserVipsByDomainRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnUserVipsByDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnUserVipsByDomainRequest::getAvailable() const {
  return available_;
}

void DescribeDcdnUserVipsByDomainRequest::setAvailable(const std::string &available) {
  available_ = available;
  setParameter(std::string("Available"), available);
}

