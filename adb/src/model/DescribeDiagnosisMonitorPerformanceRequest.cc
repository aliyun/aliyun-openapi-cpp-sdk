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

#include <alibabacloud/adb/model/DescribeDiagnosisMonitorPerformanceRequest.h>

using AlibabaCloud::Adb::Model::DescribeDiagnosisMonitorPerformanceRequest;

DescribeDiagnosisMonitorPerformanceRequest::DescribeDiagnosisMonitorPerformanceRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDiagnosisMonitorPerformance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosisMonitorPerformanceRequest::~DescribeDiagnosisMonitorPerformanceRequest() {}

std::string DescribeDiagnosisMonitorPerformanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getQueryCondition() const {
  return queryCondition_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getEndTime() const {
  return endTime_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getStartTime() const {
  return startTime_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosisMonitorPerformanceRequest::getLang() const {
  return lang_;
}

void DescribeDiagnosisMonitorPerformanceRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

