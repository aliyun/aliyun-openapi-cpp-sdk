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

#include <alibabacloud/live/model/DescribeLiveStreamWatermarksRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamWatermarksRequest;

DescribeLiveStreamWatermarksRequest::DescribeLiveStreamWatermarksRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamWatermarks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamWatermarksRequest::~DescribeLiveStreamWatermarksRequest() {}

int DescribeLiveStreamWatermarksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveStreamWatermarksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveStreamWatermarksRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamWatermarksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLiveStreamWatermarksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveStreamWatermarksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveStreamWatermarksRequest::getKeyWord() const {
  return keyWord_;
}

void DescribeLiveStreamWatermarksRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

long DescribeLiveStreamWatermarksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamWatermarksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveStreamWatermarksRequest::getDomain() const {
  return domain_;
}

void DescribeLiveStreamWatermarksRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

