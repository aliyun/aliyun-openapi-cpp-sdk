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

#include <alibabacloud/oceanbasepro/model/DescribeTenantSecurityConfigsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTenantSecurityConfigsRequest;

DescribeTenantSecurityConfigsRequest::DescribeTenantSecurityConfigsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTenantSecurityConfigs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTenantSecurityConfigsRequest::~DescribeTenantSecurityConfigsRequest() {}

std::string DescribeTenantSecurityConfigsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTenantSecurityConfigsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeTenantSecurityConfigsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeTenantSecurityConfigsRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeTenantSecurityConfigsRequest::getCheckId() const {
  return checkId_;
}

void DescribeTenantSecurityConfigsRequest::setCheckId(const std::string &checkId) {
  checkId_ = checkId;
  setBodyParameter(std::string("CheckId"), checkId);
}

