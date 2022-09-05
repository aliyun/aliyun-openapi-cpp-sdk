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

#include <alibabacloud/cdn/model/DescribeUserVipsByDomainRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserVipsByDomainRequest;

DescribeUserVipsByDomainRequest::DescribeUserVipsByDomainRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeUserVipsByDomain") {
  setMethod(HttpRequest::Method::Get);
}

DescribeUserVipsByDomainRequest::~DescribeUserVipsByDomainRequest() {}

std::string DescribeUserVipsByDomainRequest::getAvailable() const {
  return available_;
}

void DescribeUserVipsByDomainRequest::setAvailable(const std::string &available) {
  available_ = available;
  setParameter(std::string("Available"), available);
}

std::string DescribeUserVipsByDomainRequest::getDomainName() const {
  return domainName_;
}

void DescribeUserVipsByDomainRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DescribeUserVipsByDomainRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUserVipsByDomainRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

