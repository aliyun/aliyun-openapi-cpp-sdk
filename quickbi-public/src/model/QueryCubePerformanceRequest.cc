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

#include <alibabacloud/quickbi-public/model/QueryCubePerformanceRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryCubePerformanceRequest;

QueryCubePerformanceRequest::QueryCubePerformanceRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryCubePerformance") {
  setMethod(HttpRequest::Method::Post);
}

QueryCubePerformanceRequest::~QueryCubePerformanceRequest() {}

std::string QueryCubePerformanceRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryCubePerformanceRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int QueryCubePerformanceRequest::getPageNum() const {
  return pageNum_;
}

void QueryCubePerformanceRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryCubePerformanceRequest::getPageSize() const {
  return pageSize_;
}

void QueryCubePerformanceRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryCubePerformanceRequest::getCostTimeAvgMin() const {
  return costTimeAvgMin_;
}

void QueryCubePerformanceRequest::setCostTimeAvgMin(int costTimeAvgMin) {
  costTimeAvgMin_ = costTimeAvgMin;
  setParameter(std::string("CostTimeAvgMin"), std::to_string(costTimeAvgMin));
}

std::string QueryCubePerformanceRequest::getQueryType() const {
  return queryType_;
}

void QueryCubePerformanceRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::string QueryCubePerformanceRequest::getCubeId() const {
  return cubeId_;
}

void QueryCubePerformanceRequest::setCubeId(const std::string &cubeId) {
  cubeId_ = cubeId;
  setParameter(std::string("CubeId"), cubeId);
}

std::string QueryCubePerformanceRequest::getSignType() const {
  return signType_;
}

void QueryCubePerformanceRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryCubePerformanceRequest::getWorkspaceId() const {
  return workspaceId_;
}

void QueryCubePerformanceRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

