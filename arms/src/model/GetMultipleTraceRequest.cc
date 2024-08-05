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

#include <alibabacloud/arms/model/GetMultipleTraceRequest.h>

using AlibabaCloud::ARMS::Model::GetMultipleTraceRequest;

GetMultipleTraceRequest::GetMultipleTraceRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetMultipleTrace") {
  setMethod(HttpRequest::Method::Post);
}

GetMultipleTraceRequest::~GetMultipleTraceRequest() {}

std::vector<std::string> GetMultipleTraceRequest::getTraceIDs() const {
  return traceIDs_;
}

void GetMultipleTraceRequest::setTraceIDs(const std::vector<std::string> &traceIDs) {
  traceIDs_ = traceIDs;
}

std::string GetMultipleTraceRequest::getRegionId() const {
  return regionId_;
}

void GetMultipleTraceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetMultipleTraceRequest::getEndTime() const {
  return endTime_;
}

void GetMultipleTraceRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetMultipleTraceRequest::getStartTime() const {
  return startTime_;
}

void GetMultipleTraceRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

