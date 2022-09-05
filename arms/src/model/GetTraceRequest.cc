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

#include <alibabacloud/arms/model/GetTraceRequest.h>

using AlibabaCloud::ARMS::Model::GetTraceRequest;

GetTraceRequest::GetTraceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetTrace") {
  setMethod(HttpRequest::Method::Post);
}

GetTraceRequest::~GetTraceRequest() {}

std::string GetTraceRequest::getTraceID() const {
  return traceID_;
}

void GetTraceRequest::setTraceID(const std::string &traceID) {
  traceID_ = traceID;
  setParameter(std::string("TraceID"), traceID);
}

std::string GetTraceRequest::getRegionId() const {
  return regionId_;
}

void GetTraceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetTraceRequest::getEndTime() const {
  return endTime_;
}

void GetTraceRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetTraceRequest::getStartTime() const {
  return startTime_;
}

void GetTraceRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

