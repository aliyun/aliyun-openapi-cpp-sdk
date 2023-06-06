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

#include <alibabacloud/sas/model/DescribeRestoreJobsRequest.h>

using AlibabaCloud::Sas::Model::DescribeRestoreJobsRequest;

DescribeRestoreJobsRequest::DescribeRestoreJobsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeRestoreJobs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRestoreJobsRequest::~DescribeRestoreJobsRequest() {}

long DescribeRestoreJobsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRestoreJobsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRestoreJobsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRestoreJobsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeRestoreJobsRequest::getMachineRemark() const {
  return machineRemark_;
}

void DescribeRestoreJobsRequest::setMachineRemark(const std::string &machineRemark) {
  machineRemark_ = machineRemark;
  setParameter(std::string("MachineRemark"), machineRemark);
}

int DescribeRestoreJobsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRestoreJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeRestoreJobsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeRestoreJobsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeRestoreJobsRequest::getStatus() const {
  return status_;
}

void DescribeRestoreJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

