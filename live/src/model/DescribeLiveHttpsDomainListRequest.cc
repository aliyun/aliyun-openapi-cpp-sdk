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

#include <alibabacloud/live/model/DescribeLiveHttpsDomainListRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveHttpsDomainListRequest;

DescribeLiveHttpsDomainListRequest::DescribeLiveHttpsDomainListRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveHttpsDomainList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveHttpsDomainListRequest::~DescribeLiveHttpsDomainListRequest() {}

int DescribeLiveHttpsDomainListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveHttpsDomainListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveHttpsDomainListRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveHttpsDomainListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLiveHttpsDomainListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveHttpsDomainListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveHttpsDomainListRequest::getKeyword() const {
  return keyword_;
}

void DescribeLiveHttpsDomainListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

long DescribeLiveHttpsDomainListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveHttpsDomainListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

