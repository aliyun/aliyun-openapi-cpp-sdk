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

#include <alibabacloud/oceanbasepro/model/DescribeTenantEncryptionRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTenantEncryptionRequest;

DescribeTenantEncryptionRequest::DescribeTenantEncryptionRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTenantEncryption") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTenantEncryptionRequest::~DescribeTenantEncryptionRequest() {}

long DescribeTenantEncryptionRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTenantEncryptionRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTenantEncryptionRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTenantEncryptionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeTenantEncryptionRequest::getTenantId() const {
  return tenantId_;
}

void DescribeTenantEncryptionRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

long DescribeTenantEncryptionRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTenantEncryptionRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTenantEncryptionRequest::getTenantName() const {
  return tenantName_;
}

void DescribeTenantEncryptionRequest::setTenantName(const std::string &tenantName) {
  tenantName_ = tenantName;
  setBodyParameter(std::string("TenantName"), tenantName);
}

