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

#include <alibabacloud/oceanbasepro/model/SearchOmsOpenAPIMonitorMetricRequest.h>

using AlibabaCloud::OceanBasePro::Model::SearchOmsOpenAPIMonitorMetricRequest;

SearchOmsOpenAPIMonitorMetricRequest::SearchOmsOpenAPIMonitorMetricRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "SearchOmsOpenAPIMonitorMetric") {
  setMethod(HttpRequest::Method::Post);
}

SearchOmsOpenAPIMonitorMetricRequest::~SearchOmsOpenAPIMonitorMetricRequest() {}

long SearchOmsOpenAPIMonitorMetricRequest::getEndTime() const {
  return endTime_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

long SearchOmsOpenAPIMonitorMetricRequest::getBeginTime() const {
  return beginTime_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setBodyParameter(std::string("BeginTime"), std::to_string(beginTime));
}

long SearchOmsOpenAPIMonitorMetricRequest::getMaxPointNum() const {
  return maxPointNum_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setMaxPointNum(long maxPointNum) {
  maxPointNum_ = maxPointNum;
  setBodyParameter(std::string("MaxPointNum"), std::to_string(maxPointNum));
}

int SearchOmsOpenAPIMonitorMetricRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string SearchOmsOpenAPIMonitorMetricRequest::getMetric() const {
  return metric_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setMetric(const std::string &metric) {
  metric_ = metric;
  setBodyParameter(std::string("Metric"), metric);
}

int SearchOmsOpenAPIMonitorMetricRequest::getPageSize() const {
  return pageSize_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchOmsOpenAPIMonitorMetricRequest::getWorkerGradeId() const {
  return workerGradeId_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setWorkerGradeId(const std::string &workerGradeId) {
  workerGradeId_ = workerGradeId;
  setBodyParameter(std::string("WorkerGradeId"), workerGradeId);
}

std::string SearchOmsOpenAPIMonitorMetricRequest::getProjectId() const {
  return projectId_;
}

void SearchOmsOpenAPIMonitorMetricRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

