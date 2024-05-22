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

#include <alibabacloud/ens/model/DescribeSDGsRequest.h>

using AlibabaCloud::Ens::Model::DescribeSDGsRequest;

DescribeSDGsRequest::DescribeSDGsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSDGs") {
  setMethod(HttpRequest::Method::Get);
}

DescribeSDGsRequest::~DescribeSDGsRequest() {}

std::vector<DescribeSDGsRequest::std::string> DescribeSDGsRequest::getSDGIds() const {
  return sDGIds_;
}

void DescribeSDGsRequest::setSDGIds(const std::vector<DescribeSDGsRequest::std::string> &sDGIds) {
  sDGIds_ = sDGIds;
  for(int dep1 = 0; dep1 != sDGIds.size(); dep1++) {
    setParameter(std::string("SDGIds") + "." + std::to_string(dep1 + 1), sDGIds[dep1]);
  }
}

std::vector<DescribeSDGsRequest::std::string> DescribeSDGsRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeSDGsRequest::setInstanceIds(const std::vector<DescribeSDGsRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

