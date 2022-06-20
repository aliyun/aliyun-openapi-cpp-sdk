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

#include <alibabacloud/sas/model/DescribeBackupPoliciesRequest.h>

using AlibabaCloud::Sas::Model::DescribeBackupPoliciesRequest;

DescribeBackupPoliciesRequest::DescribeBackupPoliciesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeBackupPolicies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupPoliciesRequest::~DescribeBackupPoliciesRequest() {}

long DescribeBackupPoliciesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupPoliciesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupPoliciesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBackupPoliciesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeBackupPoliciesRequest::getMachineRemark() const {
  return machineRemark_;
}

void DescribeBackupPoliciesRequest::setMachineRemark(const std::string &machineRemark) {
  machineRemark_ = machineRemark;
  setParameter(std::string("MachineRemark"), machineRemark);
}

int DescribeBackupPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupPoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeBackupPoliciesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeBackupPoliciesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeBackupPoliciesRequest::getName() const {
  return name_;
}

void DescribeBackupPoliciesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeBackupPoliciesRequest::getStatus() const {
  return status_;
}

void DescribeBackupPoliciesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

