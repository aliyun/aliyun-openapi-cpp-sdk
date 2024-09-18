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

#include <alibabacloud/quickbi-public/model/QueryComponentPerformanceRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryComponentPerformanceRequest;

QueryComponentPerformanceRequest::QueryComponentPerformanceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryComponentPerformance") {
  setMethod(HttpRequest::Method::Post);
}

QueryComponentPerformanceRequest::~QueryComponentPerformanceRequest() {}

std::string QueryComponentPerformanceRequest::getReportId() const {
  return reportId_;
}

void QueryComponentPerformanceRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

std::string QueryComponentPerformanceRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryComponentPerformanceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int QueryComponentPerformanceRequest::getPageNum() const {
  return pageNum_;
}

void QueryComponentPerformanceRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryComponentPerformanceRequest::getPageSize() const {
  return pageSize_;
}

void QueryComponentPerformanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryComponentPerformanceRequest::getCostTimeAvgMin() const {
  return costTimeAvgMin_;
}

void QueryComponentPerformanceRequest::setCostTimeAvgMin(int costTimeAvgMin) {
  costTimeAvgMin_ = costTimeAvgMin;
  setParameter(std::string("CostTimeAvgMin"), std::to_string(costTimeAvgMin));
}

std::string QueryComponentPerformanceRequest::getQueryType() const {
  return queryType_;
}

void QueryComponentPerformanceRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::string QueryComponentPerformanceRequest::getSignType() const {
  return signType_;
}

void QueryComponentPerformanceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryComponentPerformanceRequest::getResourceType() const {
  return resourceType_;
}

void QueryComponentPerformanceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string QueryComponentPerformanceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void QueryComponentPerformanceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

