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

#include <alibabacloud/live/model/ListRtcMPUEventSubRecordRequest.h>

using AlibabaCloud::Live::Model::ListRtcMPUEventSubRecordRequest;

ListRtcMPUEventSubRecordRequest::ListRtcMPUEventSubRecordRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListRtcMPUEventSubRecord") {
  setMethod(HttpRequest::Method::Post);
}

ListRtcMPUEventSubRecordRequest::~ListRtcMPUEventSubRecordRequest() {}

std::string ListRtcMPUEventSubRecordRequest::getEndTime() const {
  return endTime_;
}

void ListRtcMPUEventSubRecordRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListRtcMPUEventSubRecordRequest::getStartTime() const {
  return startTime_;
}

void ListRtcMPUEventSubRecordRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListRtcMPUEventSubRecordRequest::getSubId() const {
  return subId_;
}

void ListRtcMPUEventSubRecordRequest::setSubId(const std::string &subId) {
  subId_ = subId;
  setParameter(std::string("SubId"), subId);
}

int ListRtcMPUEventSubRecordRequest::getPageNo() const {
  return pageNo_;
}

void ListRtcMPUEventSubRecordRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListRtcMPUEventSubRecordRequest::getAppId() const {
  return appId_;
}

void ListRtcMPUEventSubRecordRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListRtcMPUEventSubRecordRequest::getPageSize() const {
  return pageSize_;
}

void ListRtcMPUEventSubRecordRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

