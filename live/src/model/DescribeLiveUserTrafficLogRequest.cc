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

#include <alibabacloud/live/model/DescribeLiveUserTrafficLogRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveUserTrafficLogRequest;

DescribeLiveUserTrafficLogRequest::DescribeLiveUserTrafficLogRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveUserTrafficLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveUserTrafficLogRequest::~DescribeLiveUserTrafficLogRequest() {}

std::string DescribeLiveUserTrafficLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveUserTrafficLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeLiveUserTrafficLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveUserTrafficLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveUserTrafficLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveUserTrafficLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeLiveUserTrafficLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveUserTrafficLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveUserTrafficLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveUserTrafficLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveUserTrafficLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveUserTrafficLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveUserTrafficLogRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveUserTrafficLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

