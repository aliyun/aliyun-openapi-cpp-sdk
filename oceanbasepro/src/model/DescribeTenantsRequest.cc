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

#include <alibabacloud/oceanbasepro/model/DescribeTenantsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTenantsRequest;

DescribeTenantsRequest::DescribeTenantsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTenants") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTenantsRequest::~DescribeTenantsRequest() {}

std::string DescribeTenantsRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeTenantsRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

int DescribeTenantsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTenantsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTenantsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTenantsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

int DescribeTenantsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTenantsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTenantsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeTenantsRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeTenantsRequest::getTenantName() const {
  return tenantName_;
}

void DescribeTenantsRequest::setTenantName(const std::string &tenantName) {
  tenantName_ = tenantName;
  setBodyParameter(std::string("TenantName"), tenantName);
}

