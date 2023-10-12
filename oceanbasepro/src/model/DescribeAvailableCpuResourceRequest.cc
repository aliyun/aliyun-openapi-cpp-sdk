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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableCpuResourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeAvailableCpuResourceRequest;

DescribeAvailableCpuResourceRequest::DescribeAvailableCpuResourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeAvailableCpuResource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAvailableCpuResourceRequest::~DescribeAvailableCpuResourceRequest() {}

std::string DescribeAvailableCpuResourceRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAvailableCpuResourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAvailableCpuResourceRequest::getModifyType() const {
  return modifyType_;
}

void DescribeAvailableCpuResourceRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setBodyParameter(std::string("ModifyType"), modifyType);
}

std::string DescribeAvailableCpuResourceRequest::getTenantId() const {
  return tenantId_;
}

void DescribeAvailableCpuResourceRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

