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

#include <alibabacloud/pts/model/GetJMeterSampleMetricsRequest.h>

using AlibabaCloud::PTS::Model::GetJMeterSampleMetricsRequest;

GetJMeterSampleMetricsRequest::GetJMeterSampleMetricsRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetJMeterSampleMetrics") {
  setMethod(HttpRequest::Method::Post);
}

GetJMeterSampleMetricsRequest::~GetJMeterSampleMetricsRequest() {}

std::string GetJMeterSampleMetricsRequest::getReportId() const {
  return reportId_;
}

void GetJMeterSampleMetricsRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

int GetJMeterSampleMetricsRequest::getSamplerId() const {
  return samplerId_;
}

void GetJMeterSampleMetricsRequest::setSamplerId(int samplerId) {
  samplerId_ = samplerId;
  setParameter(std::string("SamplerId"), std::to_string(samplerId));
}

long GetJMeterSampleMetricsRequest::getEndTime() const {
  return endTime_;
}

void GetJMeterSampleMetricsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetJMeterSampleMetricsRequest::getBeginTime() const {
  return beginTime_;
}

void GetJMeterSampleMetricsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

