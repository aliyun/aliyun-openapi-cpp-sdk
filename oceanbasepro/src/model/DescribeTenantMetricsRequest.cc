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

#include <alibabacloud/oceanbasepro/model/DescribeTenantMetricsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTenantMetricsRequest;

DescribeTenantMetricsRequest::DescribeTenantMetricsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTenantMetrics") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTenantMetricsRequest::~DescribeTenantMetricsRequest() {}

std::string DescribeTenantMetricsRequest::getTenantIdList() const {
  return tenantIdList_;
}

void DescribeTenantMetricsRequest::setTenantIdList(const std::string &tenantIdList) {
  tenantIdList_ = tenantIdList;
  setBodyParameter(std::string("TenantIdList"), tenantIdList);
}

std::string DescribeTenantMetricsRequest::getStartTime() const {
  return startTime_;
}

void DescribeTenantMetricsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeTenantMetricsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTenantMetricsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeTenantMetricsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTenantMetricsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTenantMetricsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeTenantMetricsRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeTenantMetricsRequest::getEndTime() const {
  return endTime_;
}

void DescribeTenantMetricsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeTenantMetricsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTenantMetricsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeTenantMetricsRequest::getTenantName() const {
  return tenantName_;
}

void DescribeTenantMetricsRequest::setTenantName(const std::string &tenantName) {
  tenantName_ = tenantName;
  setBodyParameter(std::string("TenantName"), tenantName);
}

std::string DescribeTenantMetricsRequest::getMetrics() const {
  return metrics_;
}

void DescribeTenantMetricsRequest::setMetrics(const std::string &metrics) {
  metrics_ = metrics;
  setBodyParameter(std::string("Metrics"), metrics);
}

