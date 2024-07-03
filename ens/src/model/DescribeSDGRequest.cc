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

#include <alibabacloud/ens/model/DescribeSDGRequest.h>

using AlibabaCloud::Ens::Model::DescribeSDGRequest;

DescribeSDGRequest::DescribeSDGRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSDG") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSDGRequest::~DescribeSDGRequest() {}

int DescribeSDGRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSDGRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeSDGRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSDGRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeSDGRequest::std::string> DescribeSDGRequest::getSDGIds() const {
  return sDGIds_;
}

void DescribeSDGRequest::setSDGIds(const std::vector<DescribeSDGRequest::std::string> &sDGIds) {
  sDGIds_ = sDGIds;
  for(int dep1 = 0; dep1 != sDGIds.size(); dep1++) {
    setParameter(std::string("SDGIds") + "." + std::to_string(dep1 + 1), sDGIds[dep1]);
  }
}

