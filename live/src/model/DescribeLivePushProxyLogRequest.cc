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

#include <alibabacloud/live/model/DescribeLivePushProxyLogRequest.h>

using AlibabaCloud::Live::Model::DescribeLivePushProxyLogRequest;

DescribeLivePushProxyLogRequest::DescribeLivePushProxyLogRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLivePushProxyLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLivePushProxyLogRequest::~DescribeLivePushProxyLogRequest() {}

std::string DescribeLivePushProxyLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeLivePushProxyLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeLivePushProxyLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLivePushProxyLogRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLivePushProxyLogRequest::getLogType() const {
  return logType_;
}

void DescribeLivePushProxyLogRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

std::string DescribeLivePushProxyLogRequest::getRegionId() const {
  return regionId_;
}

void DescribeLivePushProxyLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeLivePushProxyLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLivePushProxyLogRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLivePushProxyLogRequest::getDomainName() const {
  return domainName_;
}

void DescribeLivePushProxyLogRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLivePushProxyLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeLivePushProxyLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLivePushProxyLogRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLivePushProxyLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

