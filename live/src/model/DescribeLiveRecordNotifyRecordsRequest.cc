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

#include <alibabacloud/live/model/DescribeLiveRecordNotifyRecordsRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveRecordNotifyRecordsRequest;

DescribeLiveRecordNotifyRecordsRequest::DescribeLiveRecordNotifyRecordsRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveRecordNotifyRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveRecordNotifyRecordsRequest::~DescribeLiveRecordNotifyRecordsRequest() {}

std::string DescribeLiveRecordNotifyRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeLiveRecordNotifyRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeLiveRecordNotifyRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveRecordNotifyRecordsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveRecordNotifyRecordsRequest::getAppName() const {
  return appName_;
}

void DescribeLiveRecordNotifyRecordsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string DescribeLiveRecordNotifyRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveRecordNotifyRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeLiveRecordNotifyRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveRecordNotifyRecordsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveRecordNotifyRecordsRequest::getStreamName() const {
  return streamName_;
}

void DescribeLiveRecordNotifyRecordsRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string DescribeLiveRecordNotifyRecordsRequest::getDomainName() const {
  return domainName_;
}

void DescribeLiveRecordNotifyRecordsRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeLiveRecordNotifyRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeLiveRecordNotifyRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLiveRecordNotifyRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveRecordNotifyRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveRecordNotifyRecordsRequest::getStatus() const {
  return status_;
}

void DescribeLiveRecordNotifyRecordsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

