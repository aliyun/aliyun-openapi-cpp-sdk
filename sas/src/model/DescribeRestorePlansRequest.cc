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

#include <alibabacloud/sas/model/DescribeRestorePlansRequest.h>

using AlibabaCloud::Sas::Model::DescribeRestorePlansRequest;

DescribeRestorePlansRequest::DescribeRestorePlansRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeRestorePlans") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRestorePlansRequest::~DescribeRestorePlansRequest() {}

long DescribeRestorePlansRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRestorePlansRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRestorePlansRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRestorePlansRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeRestorePlansRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRestorePlansRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeRestorePlansRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeRestorePlansRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeRestorePlansRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeRestorePlansRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeRestorePlansRequest::getStatus() const {
  return status_;
}

void DescribeRestorePlansRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

