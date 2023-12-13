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

#include <alibabacloud/live/model/ListEventSubEventRequest.h>

using AlibabaCloud::Live::Model::ListEventSubEventRequest;

ListEventSubEventRequest::ListEventSubEventRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListEventSubEvent") {
  setMethod(HttpRequest::Method::Get);
}

ListEventSubEventRequest::~ListEventSubEventRequest() {}

std::string ListEventSubEventRequest::getSubscribeId() const {
  return subscribeId_;
}

void ListEventSubEventRequest::setSubscribeId(const std::string &subscribeId) {
  subscribeId_ = subscribeId;
  setParameter(std::string("SubscribeId"), subscribeId);
}

long ListEventSubEventRequest::getEndTime() const {
  return endTime_;
}

void ListEventSubEventRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListEventSubEventRequest::getStartTime() const {
  return startTime_;
}

void ListEventSubEventRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long ListEventSubEventRequest::getPageNo() const {
  return pageNo_;
}

void ListEventSubEventRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListEventSubEventRequest::getAppId() const {
  return appId_;
}

void ListEventSubEventRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long ListEventSubEventRequest::getPageSize() const {
  return pageSize_;
}

void ListEventSubEventRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

