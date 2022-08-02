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

#include <alibabacloud/ecs/model/DescribeDiagnosticReportsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDiagnosticReportsRequest;

DescribeDiagnosticReportsRequest::DescribeDiagnosticReportsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeDiagnosticReports") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosticReportsRequest::~DescribeDiagnosticReportsRequest() {}

std::string DescribeDiagnosticReportsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosticReportsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosticReportsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDiagnosticReportsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeDiagnosticReportsRequest::getSeverity() const {
  return severity_;
}

void DescribeDiagnosticReportsRequest::setSeverity(const std::string &severity) {
  severity_ = severity;
  setParameter(std::string("Severity"), severity);
}

std::vector<std::string> DescribeDiagnosticReportsRequest::getReportIds() const {
  return reportIds_;
}

void DescribeDiagnosticReportsRequest::setReportIds(const std::vector<std::string> &reportIds) {
  reportIds_ = reportIds;
}

int DescribeDiagnosticReportsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDiagnosticReportsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeDiagnosticReportsRequest::getStatus() const {
  return status_;
}

void DescribeDiagnosticReportsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::vector<std::string> DescribeDiagnosticReportsRequest::getResourceIds() const {
  return resourceIds_;
}

void DescribeDiagnosticReportsRequest::setResourceIds(const std::vector<std::string> &resourceIds) {
  resourceIds_ = resourceIds;
}

