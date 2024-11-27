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

#include <alibabacloud/ens/model/DescribeInstanceSDGStatusRequest.h>

using AlibabaCloud::Ens::Model::DescribeInstanceSDGStatusRequest;

DescribeInstanceSDGStatusRequest::DescribeInstanceSDGStatusRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeInstanceSDGStatus") {
  setMethod(HttpRequest::Method::Get);
}

DescribeInstanceSDGStatusRequest::~DescribeInstanceSDGStatusRequest() {}

int DescribeInstanceSDGStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceSDGStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeInstanceSDGStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceSDGStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeInstanceSDGStatusRequest::std::string> DescribeInstanceSDGStatusRequest::getSDGIds() const {
  return sDGIds_;
}

void DescribeInstanceSDGStatusRequest::setSDGIds(const std::vector<DescribeInstanceSDGStatusRequest::std::string> &sDGIds) {
  sDGIds_ = sDGIds;
  for(int dep1 = 0; dep1 != sDGIds.size(); dep1++) {
    setParameter(std::string("SDGIds") + "." + std::to_string(dep1 + 1), sDGIds[dep1]);
  }
}

std::string DescribeInstanceSDGStatusRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstanceSDGStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstanceSDGStatusRequest::getStatus() const {
  return status_;
}

void DescribeInstanceSDGStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

