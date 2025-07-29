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

#include <alibabacloud/live/model/DescribeLiveDomainEdgeLogRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainEdgeLogRequest;

DescribeLiveDomainEdgeLogRequest::DescribeLiveDomainEdgeLogRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainEdgeLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveDomainEdgeLogRequest::~DescribeLiveDomainEdgeLogRequest() {}

std::string DescribeLiveDomainEdgeLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveDomainEdgeLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeLiveDomainEdgeLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveDomainEdgeLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveDomainEdgeLogRequest::getLogType() const {
  return logType_;
}

void DescribeLiveDomainEdgeLogRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

std::string DescribeLiveDomainEdgeLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveDomainEdgeLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeLiveDomainEdgeLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveDomainEdgeLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveDomainEdgeLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveDomainEdgeLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveDomainEdgeLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveDomainEdgeLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveDomainEdgeLogRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveDomainEdgeLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

