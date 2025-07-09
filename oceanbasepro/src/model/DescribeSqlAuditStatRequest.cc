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

#include <alibabacloud/oceanbasepro/model/DescribeSqlAuditStatRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSqlAuditStatRequest;

DescribeSqlAuditStatRequest::DescribeSqlAuditStatRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSqlAuditStat") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSqlAuditStatRequest::~DescribeSqlAuditStatRequest() {}

std::string DescribeSqlAuditStatRequest::getStartTime() const {
  return startTime_;
}

void DescribeSqlAuditStatRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeSqlAuditStatRequest::getOperatorType() const {
  return operatorType_;
}

void DescribeSqlAuditStatRequest::setOperatorType(const std::string &operatorType) {
  operatorType_ = operatorType;
  setBodyParameter(std::string("OperatorType"), operatorType);
}

int DescribeSqlAuditStatRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSqlAuditStatRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSqlAuditStatRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSqlAuditStatRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeSqlAuditStatRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSqlAuditStatRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSqlAuditStatRequest::getEndTime() const {
  return endTime_;
}

void DescribeSqlAuditStatRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeSqlAuditStatRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSqlAuditStatRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

