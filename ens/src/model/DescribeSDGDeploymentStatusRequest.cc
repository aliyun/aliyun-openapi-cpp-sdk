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

#include <alibabacloud/ens/model/DescribeSDGDeploymentStatusRequest.h>

using AlibabaCloud::Ens::Model::DescribeSDGDeploymentStatusRequest;

DescribeSDGDeploymentStatusRequest::DescribeSDGDeploymentStatusRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSDGDeploymentStatus") {
  setMethod(HttpRequest::Method::Get);
}

DescribeSDGDeploymentStatusRequest::~DescribeSDGDeploymentStatusRequest() {}

std::string DescribeSDGDeploymentStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSDGDeploymentStatusRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeSDGDeploymentStatusRequest::getSDGId() const {
  return sDGId_;
}

void DescribeSDGDeploymentStatusRequest::setSDGId(const std::string &sDGId) {
  sDGId_ = sDGId;
  setParameter(std::string("SDGId"), sDGId);
}

std::string DescribeSDGDeploymentStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSDGDeploymentStatusRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

