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

#include <alibabacloud/cdn/model/DescribeCdnDeletedDomainsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDeletedDomainsRequest;

DescribeCdnDeletedDomainsRequest::DescribeCdnDeletedDomainsRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnDeletedDomains") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnDeletedDomainsRequest::~DescribeCdnDeletedDomainsRequest() {}

int DescribeCdnDeletedDomainsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCdnDeletedDomainsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeCdnDeletedDomainsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCdnDeletedDomainsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeCdnDeletedDomainsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnDeletedDomainsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

