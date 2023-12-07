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

#include <alibabacloud/ecs/model/CreateDiagnosticReportRequest.h>

using AlibabaCloud::Ecs::Model::CreateDiagnosticReportRequest;

CreateDiagnosticReportRequest::CreateDiagnosticReportRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateDiagnosticReport") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiagnosticReportRequest::~CreateDiagnosticReportRequest() {}

std::string CreateDiagnosticReportRequest::getMetricSetId() const {
  return metricSetId_;
}

void CreateDiagnosticReportRequest::setMetricSetId(const std::string &metricSetId) {
  metricSetId_ = metricSetId;
  setParameter(std::string("MetricSetId"), metricSetId);
}

std::string CreateDiagnosticReportRequest::getStartTime() const {
  return startTime_;
}

void CreateDiagnosticReportRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateDiagnosticReportRequest::getRegionId() const {
  return regionId_;
}

void CreateDiagnosticReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDiagnosticReportRequest::getResourceId() const {
  return resourceId_;
}

void CreateDiagnosticReportRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string CreateDiagnosticReportRequest::getEndTime() const {
  return endTime_;
}

void CreateDiagnosticReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::map<std::string, std::string> CreateDiagnosticReportRequest::getAdditionalOptions() const {
  return additionalOptions_;
}

void CreateDiagnosticReportRequest::setAdditionalOptions(const std::map<std::string, std::string> &additionalOptions) {
  additionalOptions_ = additionalOptions;
  for(auto const &iter1 : additionalOptions) {
    setParameter(std::string("AdditionalOptions") + "." + iter1.first, iter1.second);
  }
}

