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

#include <alibabacloud/ccc/model/ListIntervalInstanceReportRequest.h>

using AlibabaCloud::CCC::Model::ListIntervalInstanceReportRequest;

ListIntervalInstanceReportRequest::ListIntervalInstanceReportRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListIntervalInstanceReport") {
  setMethod(HttpRequest::Method::Post);
}

ListIntervalInstanceReportRequest::~ListIntervalInstanceReportRequest() {}

long ListIntervalInstanceReportRequest::getEndTime() const {
  return endTime_;
}

void ListIntervalInstanceReportRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListIntervalInstanceReportRequest::getStartTime() const {
  return startTime_;
}

void ListIntervalInstanceReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListIntervalInstanceReportRequest::getInstanceId() const {
  return instanceId_;
}

void ListIntervalInstanceReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListIntervalInstanceReportRequest::getInterval() const {
  return interval_;
}

void ListIntervalInstanceReportRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

