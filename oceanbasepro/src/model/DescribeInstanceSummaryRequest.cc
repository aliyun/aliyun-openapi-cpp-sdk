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

#include <alibabacloud/oceanbasepro/model/DescribeInstanceSummaryRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeInstanceSummaryRequest;

DescribeInstanceSummaryRequest::DescribeInstanceSummaryRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeInstanceSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstanceSummaryRequest::~DescribeInstanceSummaryRequest() {}

int DescribeInstanceSummaryRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstanceSummaryRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeInstanceSummaryRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstanceSummaryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

