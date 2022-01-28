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

#include <alibabacloud/ens/model/DescribeEpnInstancesRequest.h>

using AlibabaCloud::Ens::Model::DescribeEpnInstancesRequest;

DescribeEpnInstancesRequest::DescribeEpnInstancesRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeEpnInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEpnInstancesRequest::~DescribeEpnInstancesRequest() {}

int DescribeEpnInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEpnInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeEpnInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEpnInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEpnInstancesRequest::getEPNInstanceId() const {
  return ePNInstanceId_;
}

void DescribeEpnInstancesRequest::setEPNInstanceId(const std::string &ePNInstanceId) {
  ePNInstanceId_ = ePNInstanceId;
  setParameter(std::string("EPNInstanceId"), ePNInstanceId);
}

std::string DescribeEpnInstancesRequest::getEPNInstanceName() const {
  return ePNInstanceName_;
}

void DescribeEpnInstancesRequest::setEPNInstanceName(const std::string &ePNInstanceName) {
  ePNInstanceName_ = ePNInstanceName;
  setParameter(std::string("EPNInstanceName"), ePNInstanceName);
}

