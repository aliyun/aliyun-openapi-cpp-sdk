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

#include <alibabacloud/ccc/model/GetHistoricalCallerReportRequest.h>

using AlibabaCloud::CCC::Model::GetHistoricalCallerReportRequest;

GetHistoricalCallerReportRequest::GetHistoricalCallerReportRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "GetHistoricalCallerReport") {
  setMethod(HttpRequest::Method::Post);
}

GetHistoricalCallerReportRequest::~GetHistoricalCallerReportRequest() {}

long GetHistoricalCallerReportRequest::getStopTime() const {
  return stopTime_;
}

void GetHistoricalCallerReportRequest::setStopTime(long stopTime) {
  stopTime_ = stopTime;
  setParameter(std::string("StopTime"), std::to_string(stopTime));
}

long GetHistoricalCallerReportRequest::getStartTime() const {
  return startTime_;
}

void GetHistoricalCallerReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetHistoricalCallerReportRequest::getCallingNumber() const {
  return callingNumber_;
}

void GetHistoricalCallerReportRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string GetHistoricalCallerReportRequest::getInstanceId() const {
  return instanceId_;
}

void GetHistoricalCallerReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

