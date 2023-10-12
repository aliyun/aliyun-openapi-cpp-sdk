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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableMemResourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeAvailableMemResourceRequest;

DescribeAvailableMemResourceRequest::DescribeAvailableMemResourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeAvailableMemResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableMemResourceRequest::~DescribeAvailableMemResourceRequest() {}

long DescribeAvailableMemResourceRequest::getUnitNum() const {
  return unitNum_;
}

void DescribeAvailableMemResourceRequest::setUnitNum(long unitNum) {
  unitNum_ = unitNum;
  setBodyParameter(std::string("UnitNum"), std::to_string(unitNum));
}

long DescribeAvailableMemResourceRequest::getCpuNum() const {
  return cpuNum_;
}

void DescribeAvailableMemResourceRequest::setCpuNum(long cpuNum) {
  cpuNum_ = cpuNum;
  setBodyParameter(std::string("CpuNum"), std::to_string(cpuNum));
}

std::string DescribeAvailableMemResourceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAvailableMemResourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAvailableMemResourceRequest::getTenantId() const {
  return tenantId_;
}

void DescribeAvailableMemResourceRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

