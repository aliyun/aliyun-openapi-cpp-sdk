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

#include <alibabacloud/push/model/QueryPushStatByAppRequest.h>

using AlibabaCloud::Push::Model::QueryPushStatByAppRequest;

QueryPushStatByAppRequest::QueryPushStatByAppRequest()
    : RpcServiceRequest("push", "2016-08-01", "QueryPushStatByApp") {
  setMethod(HttpRequest::Method::Post);
}

QueryPushStatByAppRequest::~QueryPushStatByAppRequest() {}

std::string QueryPushStatByAppRequest::getEndTime() const {
  return endTime_;
}

void QueryPushStatByAppRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QueryPushStatByAppRequest::getStartTime() const {
  return startTime_;
}

void QueryPushStatByAppRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string QueryPushStatByAppRequest::getGranularity() const {
  return granularity_;
}

void QueryPushStatByAppRequest::setGranularity(const std::string &granularity) {
  granularity_ = granularity;
  setParameter(std::string("Granularity"), granularity);
}

long QueryPushStatByAppRequest::getAppKey() const {
  return appKey_;
}

void QueryPushStatByAppRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

