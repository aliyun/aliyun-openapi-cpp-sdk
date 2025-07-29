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

#include <alibabacloud/live/model/DescribeLiveStreamWatermarkRulesRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamWatermarkRulesRequest;

DescribeLiveStreamWatermarkRulesRequest::DescribeLiveStreamWatermarkRulesRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamWatermarkRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamWatermarkRulesRequest::~DescribeLiveStreamWatermarkRulesRequest() {}

int DescribeLiveStreamWatermarkRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveStreamWatermarkRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveStreamWatermarkRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamWatermarkRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLiveStreamWatermarkRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveStreamWatermarkRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeLiveStreamWatermarkRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamWatermarkRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveStreamWatermarkRulesRequest::getDomain() const {
  return domain_;
}

void DescribeLiveStreamWatermarkRulesRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

