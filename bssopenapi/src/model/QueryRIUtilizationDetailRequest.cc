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

#include <alibabacloud/bssopenapi/model/QueryRIUtilizationDetailRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryRIUtilizationDetailRequest;

QueryRIUtilizationDetailRequest::QueryRIUtilizationDetailRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "QueryRIUtilizationDetail") {
  setMethod(HttpRequest::Method::Post);
}

QueryRIUtilizationDetailRequest::~QueryRIUtilizationDetailRequest() {}

std::string QueryRIUtilizationDetailRequest::getDeductedInstanceId() const {
  return deductedInstanceId_;
}

void QueryRIUtilizationDetailRequest::setDeductedInstanceId(const std::string &deductedInstanceId) {
  deductedInstanceId_ = deductedInstanceId;
  setParameter(std::string("DeductedInstanceId"), deductedInstanceId);
}

std::string QueryRIUtilizationDetailRequest::getInstanceSpec() const {
  return instanceSpec_;
}

void QueryRIUtilizationDetailRequest::setInstanceSpec(const std::string &instanceSpec) {
  instanceSpec_ = instanceSpec;
  setParameter(std::string("InstanceSpec"), instanceSpec);
}

std::string QueryRIUtilizationDetailRequest::getEndTime() const {
  return endTime_;
}

void QueryRIUtilizationDetailRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string QueryRIUtilizationDetailRequest::getRIInstanceId() const {
  return rIInstanceId_;
}

void QueryRIUtilizationDetailRequest::setRIInstanceId(const std::string &rIInstanceId) {
  rIInstanceId_ = rIInstanceId;
  setParameter(std::string("RIInstanceId"), rIInstanceId);
}

std::string QueryRIUtilizationDetailRequest::getStartTime() const {
  return startTime_;
}

void QueryRIUtilizationDetailRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int QueryRIUtilizationDetailRequest::getPageNum() const {
  return pageNum_;
}

void QueryRIUtilizationDetailRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int QueryRIUtilizationDetailRequest::getPageSize() const {
  return pageSize_;
}

void QueryRIUtilizationDetailRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryRIUtilizationDetailRequest::getRICommodityCode() const {
  return rICommodityCode_;
}

void QueryRIUtilizationDetailRequest::setRICommodityCode(const std::string &rICommodityCode) {
  rICommodityCode_ = rICommodityCode;
  setParameter(std::string("RICommodityCode"), rICommodityCode);
}

