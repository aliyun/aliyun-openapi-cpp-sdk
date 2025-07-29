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

#include <alibabacloud/live/model/DescribeLiveTrafficDomainLogRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveTrafficDomainLogRequest;

DescribeLiveTrafficDomainLogRequest::DescribeLiveTrafficDomainLogRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveTrafficDomainLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveTrafficDomainLogRequest::~DescribeLiveTrafficDomainLogRequest() {}

std::string DescribeLiveTrafficDomainLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveTrafficDomainLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeLiveTrafficDomainLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveTrafficDomainLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveTrafficDomainLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveTrafficDomainLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeLiveTrafficDomainLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveTrafficDomainLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveTrafficDomainLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveTrafficDomainLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveTrafficDomainLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveTrafficDomainLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveTrafficDomainLogRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveTrafficDomainLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

