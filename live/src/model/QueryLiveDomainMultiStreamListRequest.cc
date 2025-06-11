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

#include <alibabacloud/live/model/QueryLiveDomainMultiStreamListRequest.h>

using AlibabaCloud::Live::Model::QueryLiveDomainMultiStreamListRequest;

QueryLiveDomainMultiStreamListRequest::QueryLiveDomainMultiStreamListRequest()
    : RpcServiceRequest("live", "2016-11-01", "QueryLiveDomainMultiStreamList") {
  setMethod(HttpRequest::Method::Get);
}

QueryLiveDomainMultiStreamListRequest::~QueryLiveDomainMultiStreamListRequest() {}

std::string QueryLiveDomainMultiStreamListRequest::getStartTime() const {
  return startTime_;
}

void QueryLiveDomainMultiStreamListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long QueryLiveDomainMultiStreamListRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryLiveDomainMultiStreamListRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int QueryLiveDomainMultiStreamListRequest::getPageSize() const {
  return pageSize_;
}

void QueryLiveDomainMultiStreamListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryLiveDomainMultiStreamListRequest::getStreamName() const {
  return streamName_;
}

void QueryLiveDomainMultiStreamListRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string QueryLiveDomainMultiStreamListRequest::getEndTime() const {
  return endTime_;
}

void QueryLiveDomainMultiStreamListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long QueryLiveDomainMultiStreamListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryLiveDomainMultiStreamListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryLiveDomainMultiStreamListRequest::getDomain() const {
  return domain_;
}

void QueryLiveDomainMultiStreamListRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

