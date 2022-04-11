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

#include <alibabacloud/vod/model/ListLiveRecordVideoRequest.h>

using AlibabaCloud::Vod::Model::ListLiveRecordVideoRequest;

ListLiveRecordVideoRequest::ListLiveRecordVideoRequest()
    : RpcServiceRequest("vod", "2017-03-21", "ListLiveRecordVideo") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveRecordVideoRequest::~ListLiveRecordVideoRequest() {}

std::string ListLiveRecordVideoRequest::getStartTime() const {
  return startTime_;
}

void ListLiveRecordVideoRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListLiveRecordVideoRequest::getAppName() const {
  return appName_;
}

void ListLiveRecordVideoRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListLiveRecordVideoRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveRecordVideoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveRecordVideoRequest::getStreamName() const {
  return streamName_;
}

void ListLiveRecordVideoRequest::setStreamName(const std::string &streamName) {
  streamName_ = streamName;
  setParameter(std::string("StreamName"), streamName);
}

std::string ListLiveRecordVideoRequest::getQueryType() const {
  return queryType_;
}

void ListLiveRecordVideoRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::string ListLiveRecordVideoRequest::getDomainName() const {
  return domainName_;
}

void ListLiveRecordVideoRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string ListLiveRecordVideoRequest::getEndTime() const {
  return endTime_;
}

void ListLiveRecordVideoRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

int ListLiveRecordVideoRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveRecordVideoRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListLiveRecordVideoRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveRecordVideoRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

