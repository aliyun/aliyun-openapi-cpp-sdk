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

#include <alibabacloud/eas/model/DescribeBenchmarkTaskReportRequest.h>

using AlibabaCloud::Eas::Model::DescribeBenchmarkTaskReportRequest;

DescribeBenchmarkTaskReportRequest::DescribeBenchmarkTaskReportRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/benchmark-tasks/[ClusterId]/[TaskName]/report"};
  setMethod(HttpRequest::Method::Get);
}

DescribeBenchmarkTaskReportRequest::~DescribeBenchmarkTaskReportRequest() {}

std::string DescribeBenchmarkTaskReportRequest::getReportType() const {
  return reportType_;
}

void DescribeBenchmarkTaskReportRequest::setReportType(const std::string &reportType) {
  reportType_ = reportType;
  setParameter(std::string("ReportType"), reportType);
}

std::string DescribeBenchmarkTaskReportRequest::getTaskName() const {
  return taskName_;
}

void DescribeBenchmarkTaskReportRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string DescribeBenchmarkTaskReportRequest::getClusterId() const {
  return clusterId_;
}

void DescribeBenchmarkTaskReportRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

