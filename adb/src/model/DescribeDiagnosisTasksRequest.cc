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

#include <alibabacloud/adb/model/DescribeDiagnosisTasksRequest.h>

using AlibabaCloud::Adb::Model::DescribeDiagnosisTasksRequest;

DescribeDiagnosisTasksRequest::DescribeDiagnosisTasksRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDiagnosisTasks") {
  setMethod(HttpRequest::Method::Get);
}

DescribeDiagnosisTasksRequest::~DescribeDiagnosisTasksRequest() {}

std::string DescribeDiagnosisTasksRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDiagnosisTasksRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

int DescribeDiagnosisTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDiagnosisTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDiagnosisTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeDiagnosisTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDiagnosisTasksRequest::getProcessId() const {
  return processId_;
}

void DescribeDiagnosisTasksRequest::setProcessId(const std::string &processId) {
  processId_ = processId;
  setParameter(std::string("ProcessId"), processId);
}

int DescribeDiagnosisTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDiagnosisTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDiagnosisTasksRequest::getHost() const {
  return host_;
}

void DescribeDiagnosisTasksRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string DescribeDiagnosisTasksRequest::getState() const {
  return state_;
}

void DescribeDiagnosisTasksRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string DescribeDiagnosisTasksRequest::getStageId() const {
  return stageId_;
}

void DescribeDiagnosisTasksRequest::setStageId(const std::string &stageId) {
  stageId_ = stageId;
  setParameter(std::string("StageId"), stageId);
}

std::string DescribeDiagnosisTasksRequest::getOrder() const {
  return order_;
}

void DescribeDiagnosisTasksRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

